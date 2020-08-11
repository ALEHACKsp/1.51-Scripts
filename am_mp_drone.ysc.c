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
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	vector3 vLocal_83[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_84 = 0;
	struct<211> Local_85 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<12> Local_89 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
		func_477(ScriptParam_89);
	}
	else
	{
		func_452(0x00000000);
	}
	while (0x00000001)
	{
		func_451();
		if (func_440())
		{
			func_452(0x00000000);
		}
		if (func_435())
		{
			func_452(0x00000000);
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
	if (!func_434(0x00000005))
	{
		func_433();
		func_432();
		func_431();
		func_428();
		func_426();
		func_425();
	}
	if (func_434(0x00000000))
	{
		func_380();
	}
	else if (func_434(0x00000001))
	{
		if (!func_379())
		{
			func_373();
			func_358();
		}
		else
		{
			func_357(0x00000001);
			func_356(0x00000006);
		}
	}
	else if (func_434(0x00000002))
	{
		func_348();
	}
	else if (func_434(0x00000003))
	{
		func_347();
		func_342();
		func_340();
		func_339();
		func_338();
		func_337();
		func_336();
		func_330();
		func_324();
		func_310();
		func_308();
		func_266();
		func_265();
		func_250();
		func_348();
		if (func_243())
		{
			func_242();
			return;
		}
		func_238();
		func_237();
		func_231();
		func_219(0x00000000);
		func_202();
		func_193();
		func_185();
		func_164();
		func_157();
		func_156();
		func_81();
		func_66();
		func_65();
		func_64();
	}
	else if (func_434(0x00000004))
	{
		func_26();
	}
	else if (func_434(0x00000005))
	{
		func_22();
		func_20();
	}
	else if (func_434(0x00000006))
	{
		func_11();
	}
	if (!func_434(0x00000003) && !func_434(0x00000005))
	{
		func_5();
	}
	func_4();
	func_3();
}

void func_3()
{
	Local_85.f_2C++;
	if (Local_85.f_2C >= 0x00000020)
	{
		Local_85.f_2C = 0x00000000;
	}
}

void func_4()
{
	if (Local_85.f_2C != 0xFFFFFFFF)
	{
		if (unk_0xE5DBF9B6126856CA(vLocal_83[Local_85.f_2C /*3*/].f_2))
		{
			if (Global_19252E[unk_0xD803B885F5E47A62() /*85*/].f_34[Local_85.f_2C] != unk_0x09AD4CE7DA179533(vLocal_83[Local_85.f_2C /*3*/].f_2))
			{
				Global_19252E[unk_0xD803B885F5E47A62() /*85*/].f_34[Local_85.f_2C] = unk_0x09AD4CE7DA179533(vLocal_83[Local_85.f_2C /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	int iVar0;
	
	if (Local_85.f_76)
	{
		if (func_10(&(Local_85.f_B2)))
		{
			if (func_9())
			{
				iVar0 = Global_40001.f_60A6;
			}
			else
			{
				iVar0 = Global_40001.f_5E4E;
			}
			if (func_7(&(Local_85.f_B2), iVar0, 0x00000000))
			{
				func_6(&(Local_85.f_B2));
				Local_85.f_11 = 0x00000064;
				unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000004);
				unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000003);
				unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000018);
				Local_85.f_76 = 0x00000000;
			}
		}
	}
}

void func_6(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_8(uParam0, bParam2, 0x00000000);
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

void func_8(var uParam0, bool bParam1, bool bParam2)
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

bool func_9()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000002);
}

bool func_10(var uParam0)
{
	return uParam0->f_1;
}

void func_11()
{
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			if (!func_12())
			{
				func_452(0x00000001);
			}
			else
			{
				func_452(0x00000000);
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
	else if (!func_12())
	{
		func_452(0x00000001);
	}
	else
	{
		func_452(0x00000000);
	}
}

int func_12()
{
	if (func_19())
	{
		return 0x00000001;
	}
	if (func_18())
	{
		return 0x00000001;
	}
	if (func_17() && func_13(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_13(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_14(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000011;
			}
		}
	}
	return 0x00000000;
}

int func_14(int iParam0)
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

int func_15(int iParam0, bool bParam1, bool bParam2)
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

int func_16()
{
	return 0xFFFFFFFF;
}

bool func_17()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000005);
}

bool func_18()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000018);
}

bool func_19()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000010);
}

void func_20()
{
	char* sVar0;
	
	if (Local_85.f_2C == 0xFFFFFFFF)
	{
		return;
	}
	if (!func_21(Local_85.f_2C))
	{
		return;
	}
	if (unk_0xE5DBF9B6126856CA(vLocal_83[Local_85.f_2C /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		unk_0x1EEAD36B05B81FC1(sVar0);
		if (unk_0x436E3527A86BCA33(sVar0))
		{
			if (!unk_0x83A8177D302E1A7E(Local_85.f_88[Local_85.f_2C]))
			{
				unk_0x8F8ADC4754FE74DA(sVar0);
				Local_85.f_88[Local_85.f_2C] = unk_0xC1879030EB463216("scr_xs_guided_missile_trail", unk_0x09AD4CE7DA179533(vLocal_83[Local_85.f_2C /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
	else if (unk_0x83A8177D302E1A7E(Local_85.f_88[Local_85.f_2C]))
	{
		unk_0xF7E25143642732EA(Local_85.f_88[Local_85.f_2C], 0x00000000);
	}
}

int func_21(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (vLocal_83[iParam0 /*3*/].f_1 == 0x00000004)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_22()
{
	if (Local_85.f_2C != 0xFFFFFFFF)
	{
		if (unk_0xE5DBF9B6126856CA(vLocal_83[Local_85.f_2C /*3*/].f_2) && func_25(unk_0x09AD4CE7DA179533(vLocal_83[Local_85.f_2C /*3*/].f_2)))
		{
			if (func_24(Local_85.f_2C))
			{
				Local_85.f_77 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_23(Local_85.f_2C))
			{
				Local_85.f_77 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_21(Local_85.f_2C))
			{
				Local_85.f_77 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else
			{
				Local_85.f_77 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_85.f_2D[Local_85.f_2C] == 0xFFFFFFFF)
			{
				Local_85.f_2D[Local_85.f_2C] = unk_0xD68EA767274B7444();
				unk_0xCEAA091B490F8407(Local_85.f_2D[Local_85.f_2C], "Flight_Loop", unk_0x09AD4CE7DA179533(vLocal_83[Local_85.f_2C /*3*/].f_2), Local_85.f_77, 0x00000000, 0x00000000);
				unk_0x6F6BA3FE885E6C91(Local_85.f_2D[Local_85.f_2C], "DroneRotationalSpeed", 1f);
			}
			else
			{
				unk_0x6F6BA3FE885E6C91(Local_85.f_2D[Local_85.f_2C], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_85.f_2D[Local_85.f_2C] != 0xFFFFFFFF)
		{
			unk_0x55D0A2DB35045A35(Local_85.f_2D[Local_85.f_2C]);
			unk_0x43A06902454A1172(Local_85.f_2D[Local_85.f_2C]);
			Local_85.f_2D[Local_85.f_2C] = 0xFFFFFFFF;
		}
	}
}

int func_23(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (vLocal_83[iParam0 /*3*/].f_1 == 0x00000002)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_24(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (vLocal_83[iParam0 /*3*/].f_1 == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_25(int iParam0)
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

void func_26()
{
	int iVar0;
	
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3FC8DBCC154CA56B();
	unk_0x38C3A68D7861DCFD(0x00000000, 0x000000C7, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x000000C8, 0x00000001);
	func_63();
	func_61();
	func_54(0x00000001);
	if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000001))
	{
		if (!func_32() && !func_31())
		{
			if ((func_30() || func_9()) || func_29())
			{
				unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			}
		}
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
		{
			unk_0x08543B8F6DBE0B08(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000001);
		}
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_21))
		{
			Local_85.f_21 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(Local_85.f_21, "HUD_Static_Loop", Local_85.f_77, 0x00000001);
		}
		if (!func_28())
		{
			unk_0x5E858A00EAFA5B24(0x00000000, 0x0000012C, 0x00000064);
			unk_0x63D6BFA449464BBF("RemixDrone");
			unk_0x5D96D8530B3D0904(&(Local_85.f_6), 0x00000000);
		}
		unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000001);
	}
	else if (!func_10(&(Local_85.f_AE)))
	{
		func_8(&(Local_85.f_AE), 0x00000000, 0x00000000);
	}
	else
	{
		iVar0 = 0x000003E8;
		if (func_27())
		{
			iVar0 = 0x000001F4;
		}
		if (func_7(&(Local_85.f_AE), iVar0, 0x00000000) || func_28())
		{
			if (Local_85.f_25 == 0xFFFFFFFF)
			{
				if (unk_0x8AA6DC470ABA63A2(Local_85.f_25))
				{
					Local_85.f_25 = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(Local_85.f_25, "HUD_Disconnect", Local_85.f_77, 0x00000001);
				}
			}
			func_357(0x00000001);
			func_356(0x00000006);
		}
	}
}

bool func_27()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000004);
}

bool func_28()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000014);
}

bool func_29()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000003);
}

bool func_30()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x0000000B);
}

bool func_31()
{
	return Global_265AC9;
}

int func_32()
{
	if ((func_53(unk_0xD803B885F5E47A62(), 0x00000000) && Global_1420C6 == 0x00000001) && func_33())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_33()
{
	if (Global_1420C6 != 0xFFFFFFFF || Global_1420CC != 0xFFFFFFFF)
	{
		if ((((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 0x00000003)) || func_51(unk_0x16F2683693E537C9(), 0x7D8F4411))
		{
			return 0x00000000;
		}
		if (((((!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 0x00000003) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 0x00000003))
		{
			return 0x00000000;
		}
		if (func_34())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_34()
{
	int iVar0;
	
	if (func_50(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_49(unk_0xD803B885F5E47A62());
		if (func_15(iVar0, 0x00000000, 0x00000001))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 0x00000004) && unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar0))) && !unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar0))) && unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar0), 0x00000000)) && unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0x00000000))) && func_46(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0x00000000)))
			{
				return 0x00000001;
			}
			if (!func_45(Global_440000.f_2F9AE))
			{
				if (func_50(iVar0))
				{
					if (func_44(iVar0))
					{
						return 0x00000001;
					}
					else if (func_48(unk_0xD803B885F5E47A62()) || func_43())
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	if (Global_19C0A4)
	{
		return 0x00000001;
	}
	if (func_42(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_41(unk_0xD803B885F5E47A62());
		if (func_15(iVar0, 0x00000000, 0x00000001))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 0x00000009) && unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar0))) && !unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar0))) && unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar0), 0x00000000)) && unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0x00000000))) && unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0x00000000)) == 0x81BD2ED0)
			{
				return 0x00000001;
			}
			if (func_40(iVar0))
			{
				return 0x00000001;
			}
			else if (func_48(unk_0xD803B885F5E47A62()) || func_43())
			{
				return 0x00000001;
			}
		}
	}
	if (func_53(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		iVar0 = func_39(unk_0xD803B885F5E47A62());
		if (func_15(iVar0, 0x00000000, 0x00000001))
		{
			if ((((Global_18446E != func_16() && func_48(Global_18446E)) && func_14(func_47(Global_18446E)) == 0x0000000B) && func_38(Global_18446E, 0xFFFFFFFF)) && unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(Global_18446E), 0x00000000), 0x897AFC65))
			{
				return 0x00000001;
			}
			else if (func_37(iVar0))
			{
				return 0x00000001;
			}
			else if (func_48(unk_0xD803B885F5E47A62()) || func_43())
			{
				return 0x00000001;
			}
		}
	}
	if (func_42(unk_0xD803B885F5E47A62()) || func_36(unk_0xD803B885F5E47A62()))
	{
		switch (Global_1420CC)
		{
			case 0x00000001:
				if (Global_40001.f_5838)
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000002:
				if (Global_40001.f_5839)
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000003:
				if (Global_40001.f_583A)
				{
					return 0x00000001;
				}
				break;
			}
	}
	if (Global_1420CA == 0x00000001)
	{
		return 0x00000001;
	}
	if (func_35(0x00000003))
	{
		if (Global_1801E8 == 0x000000B9)
		{
			if (Global_18062A != 0x00000000)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_35(int iParam0)
{
	return Global_40001.f_1390[iParam0] == Global_440000.f_2F9AE;
}

int func_36(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_14(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000A;
			}
		}
	}
	return 0x00000000;
}

int func_37(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x00000004);
	}
	return 0x00000000;
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_15(iParam0, 0x00000001, 0x00000001))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_39(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_40(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_2, 0x00000006);
	}
	return 0x00000000;
}

int func_41(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_42(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_16())
			{
				return func_14(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000008;
			}
		}
	}
	return 0x00000000;
}

bool func_43()
{
	return unk_0xEAE0D21A50E6C7F4(Global_199459, 0x00000006);
}

int func_44(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000006);
	}
	return 0x00000000;
}

bool func_45(int iParam0)
{
	return Global_40001.f_1387[0x00000004] == iParam0;
}

int func_46(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(iParam0) == 0x171C92C4 || unk_0x134B62B726CEC8E6(iParam0) == 0x0A90ED5C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_47(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 0x00000001, 0x00000001))
	{
		return Global_25033E[iParam0 /*421*/].f_136.f_E;
	}
	return 0xFFFFFFFF;
}

int func_48(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000003);
	}
	return 0x00000000;
}

int func_49(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_50(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_16())
			{
				return func_14(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000005;
			}
		}
	}
	return 0x00000000;
}

int func_51(int iParam0, int iParam1)
{
	if (func_52(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_52(int iParam0)
{
	if (func_25(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_53(int iParam0, bool bParam1)
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
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_16())
			{
				return func_14(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000C;
			}
		}
	}
	return 0x00000000;
}

void func_54(int iParam0)
{
	if (func_60())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_59(0x00000000))
		{
			func_55(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_55(int iParam0)
{
	if (func_60())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_58())
		{
			func_57(0x00000001, 0x00000001);
		}
		else
		{
			func_57(0x00000000, 0x00000000);
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
	if (!func_56())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_56()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_57(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_59(0x00000000))
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

bool func_58()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_59(int iParam0)
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

bool func_60()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_61()
{
	unk_0xC2127C0F64D6A3B9();
	func_62();
}

void func_62()
{
	Global_56C3.f_86 = 0x00000001;
}

void func_63()
{
	Global_14079A = 0x00000001;
}

void func_64()
{
	if (func_17())
	{
		if (func_18())
		{
			if (func_25(unk_0x16F2683693E537C9()))
			{
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x0000007C, 0x00000001);
			}
		}
	}
}

void func_65()
{
	char* sVar0;
	
	if (!func_27())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	unk_0x1EEAD36B05B81FC1(sVar0);
	if (unk_0x436E3527A86BCA33(sVar0))
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
		{
			if (!unk_0x83A8177D302E1A7E(Local_85.f_88[unk_0xD803B885F5E47A62()]))
			{
				unk_0x8F8ADC4754FE74DA(sVar0);
				Local_85.f_88[unk_0xD803B885F5E47A62()] = unk_0xC1879030EB463216("scr_xs_guided_missile_trail", unk_0x09AD4CE7DA179533(Local_85.f_79), 0f, 0f, 0f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
}

void func_66()
{
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (!unk_0xC844350D5D58C99A(Local_85.f_7B))
		{
			unk_0x523BCC9DC80CD82F(func_80());
			if (unk_0xB87F6CF6E5628C67(func_80()))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000006))
				{
					if (func_74(unk_0xBF3DE18643F54472(0x00000000, 0x00000000) + 1, 0x00000000, 0x00000001))
					{
						unk_0x0BEC04ECA8485A3A(unk_0xA108079788452A90(0x00000000) + 1);
						unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000006);
					}
				}
				else if (unk_0xA3FA8B6D2780D661(0x00000001))
				{
					Local_85.f_7B = unk_0x36F2404464202779(0x0000001A, func_80(), Local_85.f_70, unk_0xD9522BA9E27E1349(unk_0x09AD4CE7DA179533(Local_85.f_79)), 0x00000000, 0x00000000);
					unk_0xE121AE1BBF90E186(Local_85.f_7B, 0x00000001);
					unk_0x4A4806F9D471E491(Local_85.f_7B, 0x00000000, 0x00000000);
					unk_0x08543B8F6DBE0B08(Local_85.f_7B, 0x00000000);
					unk_0x11AD11297DC58CC7(Local_85.f_7B, 0x00000001);
					unk_0x71199B01895C6202(func_80());
					unk_0x4E885A246A9D983A(Local_85.f_7B, 0x00000076, 0x00000000);
					unk_0x4E885A246A9D983A(Local_85.f_7B, 0x0000006C, 0x00000001);
					unk_0x4E885A246A9D983A(Local_85.f_7B, 0x000000D0, 0x00000001);
					unk_0xAA6B3A4292417750(Local_85.f_7B, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					unk_0x9F528B1B53FBC5D9(Local_85.f_7B, unk_0x09AD4CE7DA179533(Local_85.f_79), 0xFFFFFFFF, 0f, 0f, -0.25f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					unk_0xCDCD90141EA7E6EE(Local_85.f_7B, 0x00000000, 0x00000000);
					Global_19C087.f_17 = Local_85.f_7B;
				}
			}
		}
		else if (func_25(Local_85.f_7B))
		{
			if (unk_0x4FC40AB0ECCE6E18(Local_85.f_7B))
			{
				unk_0x4A4806F9D471E491(Local_85.f_7B, 0x00000000, 0x00000000);
			}
			if (!func_72(unk_0xD803B885F5E47A62()) && !func_69(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
				{
					func_68(Global_180863);
				}
			}
			else if ((Global_19C087.f_4 == 0xFFFFFFFF || Global_19C087.f_4 == 0x00000000) || Global_19C087.f_4 == Global_180858)
			{
				func_68(Global_180863);
			}
			if (unk_0x7C055F40DB28E523(Local_85.f_7B) != func_67())
			{
				unk_0x6DF7BF67E86AAE86(Local_85.f_7B, func_67());
			}
			if (!unk_0xD59B17D2DFF98E26(Local_85.f_7B))
			{
				unk_0x9F528B1B53FBC5D9(Local_85.f_7B, unk_0x09AD4CE7DA179533(Local_85.f_79), 0xFFFFFFFF, 0f, 0f, -0.25f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				unk_0xCDCD90141EA7E6EE(Local_85.f_7B, 0x00000000, 0x00000000);
			}
		}
	}
}

int func_67()
{
	if (Global_19C087.f_4 != 0xFFFFFFFF && Global_19C087.f_4 != 0x00000000)
	{
		return Global_19C087.f_4;
	}
	return Global_180863;
}

void func_68(int iParam0)
{
	if (Global_19C087.f_4 != iParam0)
	{
		Global_19C087.f_4 = iParam0;
	}
}

int func_69(int iParam0)
{
	if (func_71(iParam0) == 0x000000EC || func_71(iParam0) == 0x00000096)
	{
		return func_70(iParam0);
	}
	return 0x00000000;
}

int func_70(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000007);
	}
	return 0x00000000;
}

int func_71(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 0xFFFFFFFF;
}

bool func_72(int iParam0)
{
	return func_73(iParam0, 0x00000014);
}

bool func_73(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
{
	return func_75(0x00000002, iParam0, 0x00000001, bParam1, bParam2);
}

int func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1532F0, 0x00000000))
	{
		return 0x00000000;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_79(iParam0) - func_78(iParam0, 0x00000000)))
	{
		return 0x00000001;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_77(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_78(iParam0, 0x00000001));
		}
		if (!bParam4 && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000003)
		{
			iVar1 = (iVar1 - func_76(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_76(int iParam0)
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

int func_77(int iParam0)
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

int func_78(int iParam0, bool bParam1)
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

int func_79(int iParam0)
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

int func_80()
{
	return joaat("g_m_m_chigoon_01");
}

void func_81()
{
	if (func_155())
	{
		return;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
	{
		if (unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0x9CF8D5C7090408A2(Local_85.f_83))
		{
			if (!func_27())
			{
				func_146();
				func_108();
			}
			else
			{
				func_90();
				func_84();
			}
			unk_0x9501364A300048C6();
			func_83(0x00000001);
			func_82(0x00000002);
		}
	}
}

void func_82(int iParam0)
{
	Global_141384 = iParam0;
}

void func_83(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_84()
{
	int iVar0;
	
	if (!unk_0x83D8570832F172A7(Local_85.f_84))
	{
		Local_85.f_84 = func_89();
		return;
	}
	iVar0 = func_88();
	if (iVar0 < 0x00000000 || !func_25(iVar0))
	{
		return;
	}
	func_87(Local_85.f_84, 0x00000000);
	func_86(Local_85.f_84, 0x00000003, 0x00000003, 0x00000003);
	func_85(Local_85.f_84, 0f, 0f, 0f, 0f, (unk_0xD9522BA9E27E1349(iVar0) + 180f));
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	unk_0x6567AE843FADBA94(Local_85.f_84, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
}

void func_85(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_ALT_FOV_HEADING");
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7C19E5E4784BD7CF(fParam2);
	unk_0x7C19E5E4784BD7CF(fParam5);
	unk_0x7E60D21B163E9D56();
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_WEAPON_VALUES");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x7E60D21B163E9D56();
}

void func_87(int iParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_ZOOM_VISIBLE");
	unk_0x1200CC973A2399C8(bParam1);
	unk_0x7E60D21B163E9D56();
}

int func_88()
{
	if (unk_0xD803B885F5E47A62() != 0xFFFFFFFF)
	{
		return Global_19C087.f_14;
	}
	return 0xFFFFFFFF;
}

int func_89()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_440000.f_372EA)
	{
		case 0x00000001:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 0x00000002:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 0x00000003:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return unk_0xB01F55A0FD1CFD49(sVar0);
}

void func_90()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000010))
	{
		if (func_106(0x00000000, 0xFFFFFFFF, 0x00000000))
		{
			func_105(0xFFFFFFFF);
			func_104(0x00000014, "DRONE_SPACE", 0xFFFFFFFF);
			func_104(0x00000015, "DRONE_POSITION", 0xFFFFFFFF);
			if (!unk_0x91E3F625EF57450D(0x00000000))
			{
				func_103(0x000000D0, "DRONE_SPEEDU", 0xFFFFFFFF, 0x00000000);
				func_103(0x000000CF, "DRONE_SLOWD", 0xFFFFFFFF, 0x00000000);
			}
			else
			{
				func_103(0x000000D1, "DRONE_SPEEDU", 0xFFFFFFFF, 0x00000000);
				func_103(0x000000D2, "DRONE_SLOWD", 0xFFFFFFFF, 0x00000000);
			}
			func_103(0x0000004B, "MOVE_DRONE_RE", 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000010);
		}
	}
	else
	{
		func_91(0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
	}
	if (unk_0x91E3F625EF57450D(0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000011))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000011);
			unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000010);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000011))
	{
		unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000011);
		unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000010);
	}
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_102(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_99(bParam4, bParam8))
	{
		return;
	}
	if (func_97())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0x00000000)
	{
		if (func_94(unk_0xD803B885F5E47A62(), 0x00000000))
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
					func_93(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 0x0000000C && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_93(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 0xFFFFFFFF)
					{
						func_92(&(Global_574E.f_1364[iVar1 /*4*/]));
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
				func_93(&Global_412185);
				if (Global_412185.f_14 == 0xFFFFFFFF)
				{
					func_92(&(Global_412185.f_10));
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

void func_92(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_93(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
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
		iVar1 = func_96();
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
	return Global_1407E9;
}

int func_97()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	if (func_98())
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

int func_98()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_99(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0x00000000)
	{
		return 0x00000001;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_101(0x00000008, 0xFFFFFFFF) && func_100() != 0x00000041)) || (unk_0x8BB17FEBE0394018() != 0x00000000 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_100()
{
	return Global_14082C;
}

bool func_101(int iParam0, int iParam1)
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

int func_102(var uParam0, bool bParam1, int iParam2)
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

void func_103(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_104(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xE32F7AC5E6DF304A(0x00000002, iParam0, 0x00000001);
	if (Global_574E.f_12A1 >= 0x0000000C)
	{
		StringCopy(&Global_412185, sVar0, 64);
		StringCopy(&(Global_412185.f_10), sParam1, 16);
		Global_412185.f_14 = iParam2;
		return;
		return;
	}
	unk_0x0674E58A79778E99(&(Global_574E.f_13BC), Global_574E.f_12A1);
	StringCopy(&(Global_574E.f_12A3[Global_574E.f_12A1 /*16*/]), sVar0, 64);
	StringCopy(&(Global_574E.f_1364[Global_574E.f_12A1 /*4*/]), sParam1, 16);
	Global_574E.f_1395[Global_574E.f_12A1] = iParam2;
	Global_574E.f_13A2[Global_574E.f_12A1] = 0x00000169;
	Global_574E.f_13AF[Global_574E.f_12A1] = iParam0;
	Global_574E.f_12A1++;
}

void func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_574E.f_12A1 = 0x00000000;
	Global_574E.f_12A2 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		StringCopy(&(Global_574E.f_1364[iVar0 /*4*/]), "", 16);
		Global_574E.f_1395[iVar0] = 0xFFFFFFFF;
		Global_574E.f_13A2[iVar0] = 0x00000169;
		Global_574E.f_13AF[iVar0] = 0x00000020;
		iVar0++;
	}
	Global_574E.f_13BC = 0x00000000;
	StringCopy(&(Global_412185.f_10), "", 16);
	Global_412185.f_14 = 0xFFFFFFFF;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (!func_102(&iVar1, 0x00000000, iParam0))
		{
			return;
		}
		unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(0x00000000);
		unk_0x7E60D21B163E9D56();
	}
}

bool func_106(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_102(&iVar0, 0x00000001, iParam1))
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
	bVar2 = func_107(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_107(var uParam0)
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

void func_108()
{
	if (!unk_0x83D8570832F172A7(Local_85.f_84))
	{
		Local_85.f_84 = unk_0xB01F55A0FD1CFD49("DRONE_CAM");
		return;
	}
	if ((func_29() || func_60()) || func_145(0x00000000))
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 0x00000000);
	}
	else
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 0x00000001);
	}
	if ((func_29() || func_60()) || func_9())
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 0x00000000);
	}
	else
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 0x00000001);
	}
	if (func_9())
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 0x00000001);
	}
	else
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 0x00000000);
	}
	if (!func_29() && !func_60())
	{
		func_144("SET_RETICLE_IS_VISIBLE", 0x00000001);
	}
	else
	{
		func_144("SET_RETICLE_IS_VISIBLE", 0x00000000);
	}
	func_144("SET_HEADING_METER_IS_VISIBLE", 0x00000001);
	func_144("SET_ZOOM_METER_IS_VISIBLE", 0x00000001);
	if (((!func_29() && !func_60()) && !func_9()) && func_143())
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 0x00000001);
	}
	else
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 0x00000000);
	}
	if (func_142())
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 0x00000001);
	}
	else
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 0x00000000);
	}
	func_144("SET_MISSILE_METER_IS_VISIBLE", 0x00000000);
	func_144("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0x00000000);
	if (func_140(unk_0xD803B885F5E47A62()) == 0x000000F0)
	{
		if (Local_85.f_53 >= (func_139() - 50f) || Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x00000032)))
		{
			func_144("SET_SOUND_WAVE_IS_VISIBLE", 0x00000000);
			func_138();
			if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000D))
			{
				unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000000D);
			}
		}
		else
		{
			func_134(func_135());
			if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000D))
			{
				func_144("SET_SOUND_WAVE_IS_VISIBLE", 0x00000001);
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000000D);
			}
		}
	}
	else
	{
		func_144("SET_SOUND_WAVE_IS_VISIBLE", 0x00000000);
		func_138();
	}
	func_144("SET_INFO_LIST_IS_VISIBLE", 0x00000000);
	if (!func_29() && !func_60())
	{
		if (!func_9())
		{
			func_133(Local_85.f_11);
		}
		else
		{
			func_132(Local_85.f_11);
		}
		if (!func_145(0x00000000))
		{
			func_131(Local_85.f_12);
		}
	}
	if (func_142())
	{
		func_130(Local_85.f_17);
	}
	if (func_143())
	{
		func_129(Local_85.f_13);
	}
	func_128(0x00000000, "DRONE_ZOOM_1");
	func_128(0x00000001, "");
	func_128(0x00000002, "DRONE_ZOOM_2");
	func_128(0x00000003, "");
	func_128(0x00000004, "DRONE_ZOOM_3");
	func_126();
	func_124();
	func_122();
	func_121(SYSTEM::ROUND((unk_0xD9522BA9E27E1349(unk_0x09AD4CE7DA179533(Local_85.f_79)) + 180f)));
	if (func_140(unk_0xD803B885F5E47A62()) == 0x000000F0)
	{
		func_120(func_135());
	}
	if (func_119())
	{
		func_112();
	}
	else if (func_9() || func_29())
	{
		func_111();
	}
	else if (func_18())
	{
		func_109();
	}
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	unk_0x6567AE843FADBA94(Local_85.f_84, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
}

void func_109()
{
	float fVar0;
	
	fVar0 = Local_85.f_53;
	if (fVar0 >= (func_139() - 50f))
	{
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			Local_85.f_24 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(Local_85.f_24, "Out_Of_Bounds_Alarm_Loop", Local_85.f_77, 0x00000001);
		}
		if (fVar0 >= (func_139() - 50f) && fVar0 < (func_139() - 45f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.1f);
		}
		else if (fVar0 >= (func_139() - 45f) && fVar0 < (func_139() - 40f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.2f);
		}
		else if (fVar0 >= (func_139() - 40f) && fVar0 < (func_139() - 35f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.3f);
		}
		else if (fVar0 >= (func_139() - 35f) && fVar0 < (func_139() - 30f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.4f);
		}
		else if (fVar0 >= (func_139() - 30f) && fVar0 < (func_139() - 25f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.5f);
		}
		else if (fVar0 >= (func_139() - 25f) && fVar0 < (func_139() - 20f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.6f);
		}
		else if (fVar0 >= (func_139() - 20f) && fVar0 < (func_139() - 15f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.7f);
		}
		else if (fVar0 >= (func_139() - 15f) && fVar0 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.8f);
		}
		else if (fVar0 >= (func_139() - 10f) && fVar0 < (func_139() - 5f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.9f);
		}
		else if (fVar0 >= (func_139() - 5f) && fVar0 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0x00000000);
		if (!unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			unk_0x55D0A2DB35045A35(Local_85.f_24);
			unk_0x43A06902454A1172(Local_85.f_24);
			Local_85.f_24 = 0xFFFFFFFF;
		}
	}
}

void func_110(float fParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_WARNING_FLASH_RATE");
	unk_0x7C19E5E4784BD7CF(fParam0);
	unk_0x7E60D21B163E9D56();
}

void func_111()
{
	if (Local_85.f_70.f_2 >= (func_139() - 20f))
	{
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			Local_85.f_24 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(Local_85.f_24, "Out_Of_Bounds_Alarm_Loop", Local_85.f_77, 0x00000001);
		}
		if (Local_85.f_70.f_2 >= (func_139() - 20f) && Local_85.f_70.f_2 < (func_139() - 16f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.1f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 16f) && Local_85.f_70.f_2 < (func_139() - 13f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.2f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 13f) && Local_85.f_70.f_2 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.3f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 10f) && Local_85.f_70.f_2 < (func_139() - 8f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.4f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 8f) && Local_85.f_70.f_2 < (func_139() - 6f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.5f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 6f) && Local_85.f_70.f_2 < (func_139() - 4f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.6f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 4f) && Local_85.f_70.f_2 < (func_139() - 3f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.7f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 3f) && Local_85.f_70.f_2 < (func_139() - 2f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.8f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 2f) && Local_85.f_70.f_2 < (func_139() - 1f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.9f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 1f) && Local_85.f_70.f_2 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0x00000000);
		if (!unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			unk_0x55D0A2DB35045A35(Local_85.f_24);
			unk_0x43A06902454A1172(Local_85.f_24);
			Local_85.f_24 = 0xFFFFFFFF;
		}
	}
}

void func_112()
{
	if (Local_85.f_53 >= (func_139() - 50f) || Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x00000032)))
	{
		func_113();
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			Local_85.f_24 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(Local_85.f_24, "Out_Of_Bounds_Alarm_Loop", Local_85.f_77, 0x00000001);
		}
		if ((Local_85.f_53 >= (func_139() - 50f) && Local_85.f_53 < (func_139() - 45f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x00000032)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 0x0000002D))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.1f);
		}
		else if ((Local_85.f_53 >= (func_139() - 45f) && Local_85.f_53 < (func_139() - 40f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x0000002D)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 0x00000028))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.2f);
		}
		else if ((Local_85.f_53 >= (func_139() - 40f) && Local_85.f_53 < (func_139() - 35f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x00000028)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 0x00000023))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.3f);
		}
		else if ((Local_85.f_53 >= (func_139() - 35f) && Local_85.f_53 < (func_139() - 30f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x00000023)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 0x0000001E))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.4f);
		}
		else if ((Local_85.f_53 >= (func_139() - 30f) && Local_85.f_53 < (func_139() - 25f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x0000001E)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 0x00000019))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.5f);
		}
		else if ((Local_85.f_53 >= (func_139() - 25f) && Local_85.f_53 < (func_139() - 20f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x00000019)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 0x00000014))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.6f);
		}
		else if ((Local_85.f_53 >= (func_139() - 20f) && Local_85.f_53 < (func_139() - 15f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x00000014)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 0x0000000F))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.7f);
		}
		else if ((Local_85.f_53 >= (func_139() - 15f) && Local_85.f_53 < (func_139() - 10f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x0000000F)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 0x0000000A))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.8f);
		}
		else if ((Local_85.f_53 >= (func_139() - 10f) && Local_85.f_53 < (func_139() - 5f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x0000000A)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 0x00000005))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(0.9f);
		}
		else if ((Local_85.f_53 >= (func_139() - 5f) && Local_85.f_53 < func_139()) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 0x00000005)) && Local_85.f_54 < IntToFloat(Global_40001.f_5E55)))
		{
			func_144("SET_WARNING_IS_VISIBLE", 0x00000001);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0x00000000);
		if (!unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			unk_0x55D0A2DB35045A35(Local_85.f_24);
			unk_0x43A06902454A1172(Local_85.f_24);
			Local_85.f_24 = 0xFFFFFFFF;
		}
	}
}

void func_113()
{
	int iVar0;
	
	if (unk_0x0F1CCD77290EE12F() && !unk_0xEAE0D21A50E6C7F4(Global_199459.f_3, 0x0000000F))
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			iVar0 = func_116(0x0000561D, 0xFFFFFFFF, 0xFFFFFFFF);
			if (iVar0 < 0x00000004)
			{
				func_115("HACK_DRONE_DIS", 0xFFFFFFFF);
				iVar0++;
				func_114(0x0000561D, iVar0, 0xFFFFFFFF, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_199459.f_3), 0x0000000F);
			}
		}
	}
}

var func_114(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_96();
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

void func_115(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_96();
	}
	iVar0 = 0x00000000;
	iVar1 = func_118(iParam0, iParam1);
	iVar2 = func_117(iParam0);
	if (0x00000000 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 0x00000008, iParam2))
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_117(int iParam0)
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

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_96();
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

bool func_119()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000001);
}

void func_120(float fParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "ATTENUATE_SOUND_WAVE");
	unk_0x7C19E5E4784BD7CF(fParam0);
	unk_0x7E60D21B163E9D56();
}

void func_121(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_HEADING");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_122()
{
	if (func_9())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000B) && !Local_85.f_76)
		{
			func_123(0x00000001);
		}
		else
		{
			func_123(0x00000000);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000B) || unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000017))
	{
		func_123(0x00000001);
	}
	else
	{
		func_123(0x00000000);
	}
}

void func_123(bool bParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_RETICLE_ON_TARGET");
	unk_0x1200CC973A2399C8(bParam0);
	unk_0x7E60D21B163E9D56();
}

void func_124()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000004) || (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000003) && func_9()))
	{
		if (Local_85.f_11 == 0x00000064)
		{
			func_125(0x00000001);
		}
		else if (Local_85.f_11 != 0x00000000 && Local_85.f_11 != 0x00000064)
		{
			func_125(0x00000002);
		}
	}
	else
	{
		func_125(0x00000000);
	}
}

void func_125(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_RETICLE_STATE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_126()
{
	switch (Local_85.f_18)
	{
		case 0x00000000:
			func_127(0x00000000);
			break;
		
		case 0x00000001:
			func_127(0x00000002);
			break;
		
		case 0x00000002:
			func_127(0x00000004);
			break;
	}
}

void func_127(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_ZOOM");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_128(int iParam0, char* sParam1)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_ZOOM_LABEL");
	unk_0x3CAEA85DA607305E(iParam0);
	func_92(sParam1);
	unk_0x7E60D21B163E9D56();
}

void func_129(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_BOOST_PERCENTAGE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_130(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_TRANQUILIZE_PERCENTAGE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_131(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_DETONATE_PERCENTAGE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_132(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_EMP_PERCENTAGE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_133(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_SHOCK_PERCENTAGE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_134(float fParam0)
{
	if (unk_0x8AA6DC470ABA63A2(Local_85.f_2B))
	{
		Local_85.f_2B = unk_0xD68EA767274B7444();
		unk_0x4D7F4CC43D4D0DE3(Local_85.f_2B, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", 0x00000001);
		unk_0x6F6BA3FE885E6C91(Local_85.f_2B, "signalstrength", fParam0);
	}
	else
	{
		unk_0x6F6BA3FE885E6C91(Local_85.f_2B, "signalstrength", fParam0);
	}
}

float func_135()
{
	float fVar0;
	
	if (func_140(unk_0xD803B885F5E47A62()) == 0x000000F0)
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
		{
			fVar0 = func_136(unk_0x09AD4CE7DA179533(Local_85.f_79), func_137(), 0x00000001);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_136(int iParam0, vector3 vParam1, bool bParam2)
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

Vector3 func_137()
{
	if (func_140(unk_0xD803B885F5E47A62()) == 0x000000F0)
	{
		return Global_19D9BE;
	}
	return 0f, 0f, 0f;
}

void func_138()
{
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_2B))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_2B);
		unk_0x43A06902454A1172(Local_85.f_2B);
		Local_85.f_2B = 0xFFFFFFFF;
	}
}

float func_139()
{
	if (Global_19C087.f_8 == 0f)
	{
		return Global_40001.f_5E56;
	}
	return Global_19C087.f_8;
}

int func_140(int iParam0)
{
	if (func_141(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_141(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_142()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000006);
}

int func_143()
{
	if (func_142())
	{
		if (unk_0x31609A585163CBAC(Global_19C087.f_18))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_144(char* sParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, sParam0);
	unk_0x1200CC973A2399C8(bParam1);
	unk_0x7E60D21B163E9D56();
}

int func_145(bool bParam0)
{
	if (func_119())
	{
		if (bParam0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000004))
			{
				return 0x00000001;
			}
		}
	}
	if (func_142())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_146()
{
	int iVar0;
	int iVar1;
	
	if (func_60())
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000010))
	{
		if (func_106(0x00000000, 0xFFFFFFFF, 0x00000000))
		{
			func_105(0xFFFFFFFF);
			func_104(0x00000015, "DRONE_MOVE", 0xFFFFFFFF);
			func_104(0x00000014, "DRONE_POSITION", 0xFFFFFFFF);
			if (!unk_0x91E3F625EF57450D(0x00000000))
			{
				func_103(0x000000D2, "CELL_284", 0xFFFFFFFF, 0x00000000);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(0x000000D1, "BOOST_DRONE_E", 0xFFFFFFFF, 0x00000000);
				}
				func_103(0x000000D0, "MOVE_DRONE_UP", 0xFFFFFFFF, 0x00000000);
				func_103(0x000000CF, "MOVE_DRONE_DO", 0xFFFFFFFF, 0x00000000);
			}
			else
			{
				func_104(0x0000001D, "CELL_284", 0xFFFFFFFF);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(0x000000CB, "BOOST_DRONE_E", 0xFFFFFFFF, 0x00000000);
				}
				func_103(0x000000D1, "MOVE_DRONE_UP", 0xFFFFFFFF, 0x00000000);
				func_103(0x000000D2, "MOVE_DRONE_DO", 0xFFFFFFFF, 0x00000000);
			}
			if (!func_29())
			{
				iVar0 = 0x000000CE;
				if (unk_0x91E3F625EF57450D(0x00000000))
				{
					iVar0 = 0x000000ED;
				}
				if (func_9())
				{
					func_103(iVar0, "MOVE_DRONE_EM", 0xFFFFFFFF, 0x00000000);
				}
				else
				{
					func_103(iVar0, "MOVE_DRONE_ST", 0xFFFFFFFF, 0x00000000);
				}
				iVar1 = 0x000000CD;
				if (unk_0x91E3F625EF57450D(0x00000000))
				{
					iVar1 = 0x000000EE;
				}
				if (!func_145(0x00000000))
				{
					func_103(iVar1, "MOVE_DRONE_EX", 0xFFFFFFFF, 0x00000000);
				}
				else if (func_153())
				{
					func_103(iVar1, "MOVE_DRONE_TRG", 0xFFFFFFFF, 0x00000000);
				}
			}
			if (!func_9())
			{
				if ((((func_152(0x00000000) || func_152(0x00000001)) || func_151()) || unk_0x192DA571D9133D23()) || func_147(unk_0xD803B885F5E47A62()))
				{
				}
				else
				{
					func_103(0x000000C9, "DRONE_PHOTO", 0xFFFFFFFF, 0x00000000);
				}
			}
			func_103(0x00000050, "MOVE_DRONE_RE", 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000010);
		}
	}
	else
	{
		func_91(0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
	}
	if (unk_0x91E3F625EF57450D(0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000011))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000011);
			unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000010);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000011))
	{
		unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000011);
		unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000010);
	}
}

int func_147(int iParam0)
{
	if (func_150(func_140(iParam0)))
	{
		if (func_149() != func_16())
		{
			if (func_148() == func_149())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_148()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

int func_149()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000F1:
		case 0x000000F8:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

var func_151()
{
	return Global_56C3.f_87;
}

bool func_152(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

int func_153()
{
	if (func_154() <= 0x00000000)
	{
		return 0x00000000;
	}
	if (func_142())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_154()
{
	return Global_19C087.f_6;
}

bool func_155()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000007);
}

void func_156()
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			if ((unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0x9CF8D5C7090408A2(Local_85.f_83)) && !func_60())
			{
				iVar0 = 0x00000050;
				if (func_27())
				{
					iVar0 = 0x0000004B;
				}
				if (unk_0xBFC0798A6E3417F9(0x00000002, iVar0) || unk_0xD245978525608929(0x00000002, iVar0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000007))
					{
						unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000007);
					}
				}
			}
		}
	}
}

void func_157()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_163() || !func_147(unk_0xD803B885F5E47A62())) || !unk_0x8CD06866876216F2())
	{
		return;
	}
	iVar0 = func_162(0x00000001);
	func_161(iVar0);
	iVar1 = func_162(0x00000000);
	iVar2 = unk_0x4B72871A3BE7B474(Local_85.f_67, 2f, iVar1, 0x00000000, 0x00000000, 0x00000000);
	if (unk_0xC844350D5D58C99A(iVar2) && iVar2 != Local_85.f_7C)
	{
		if (unk_0x54648B774DB42A3A(iVar2, joaat("weapon_stungun"), 0x00000000) || unk_0x7F6DC62EA9922664(iVar2) == 0x000003E7)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001A))
			{
				func_160(func_149(), 0x00000001);
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000001A);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(Local_85.f_7C))
	{
		if (unk_0x54648B774DB42A3A(Local_85.f_7C, joaat("weapon_stungun"), 0x00000000) || unk_0x7F6DC62EA9922664(Local_85.f_7C) == 0x000003E7)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001A))
			{
				func_160(func_149(), 0x00000001);
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000001A);
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001A))
	{
		iVar3 = unk_0x4B72871A3BE7B474(Local_85.f_67, 2f, iVar0, 0x00000000, 0x00000000, 0x00000000);
		if (unk_0xC844350D5D58C99A(iVar3))
		{
			if (unk_0xC844350D5D58C99A(Local_85.f_7C))
			{
				unk_0x4A4806F9D471E491(Local_85.f_7C, 0x00000000, 0x00000000);
			}
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				unk_0x4A4806F9D471E491(iVar2, 0x00000000, 0x00000000);
			}
			func_158(0x00000001);
		}
	}
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		if (!func_159())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000001);
		}
	}
	else if (func_159())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000001);
	}
}

bool func_159()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000001);
}

void func_160(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 0x65A718C8;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam1;
	iVar1 = 0x00000000;
	if (iParam0 != func_16())
	{
		unk_0x5D96D8530B3D0904(&iVar1, iParam0);
	}
	if (!iVar1 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iVar1);
	}
}

bool func_161(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_162(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_19C087.f_13 != 0x00000000)
		{
			return Global_19C087.f_13;
		}
		else
		{
			return 0x80418D2D;
		}
	}
	else
	{
		return 0xB95EC169;
	}
	return 0x00000000;
}

bool func_163()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x0000000E);
}

void func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000001) || func_176()) || func_175())
	{
		Local_85.f_11 = 0x00000000;
		Local_85.f_12 = 0x00000000;
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000A))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000000A);
		}
		return;
	}
	if (!func_175())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000A))
		{
			Local_85.f_11 = 0x00000064;
			unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000000A);
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			if ((unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0x9CF8D5C7090408A2(Local_85.f_83)) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000002))
			{
				if ((!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000004) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000003)) && !Local_85.f_76)
				{
					iVar0 = 0x000000CE;
					if (unk_0x91E3F625EF57450D(0x00000000))
					{
						iVar0 = 0x000000ED;
					}
					if ((((unk_0xB9132A06AE472728(0x00000002, iVar0) || unk_0x9A01369A10646AFE(0x00000002, iVar0)) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000005)) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000018)) && !func_60())
					{
						unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000018);
						if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000B) || unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000017))
						{
							Local_85.f_1A++;
						}
					}
					if (func_9())
					{
						func_171();
					}
					else
					{
						func_170();
					}
				}
				else if (func_10(&(Local_85.f_B2)))
				{
					if (func_9())
					{
						iVar1 = Global_40001.f_60A6;
					}
					else
					{
						iVar1 = Global_40001.f_5E4E;
					}
					if (func_7(&(Local_85.f_B2), iVar1, 0x00000000))
					{
						func_6(&(Local_85.f_B2));
						Local_85.f_11 = 0x00000064;
						if (Local_85.f_1F != 0xFFFFFFFF)
						{
							unk_0x55D0A2DB35045A35(Local_85.f_1F);
							unk_0x43A06902454A1172(Local_85.f_1F);
							Local_85.f_1F = 0xFFFFFFFF;
						}
						if (unk_0x8AA6DC470ABA63A2(Local_85.f_22))
						{
							unk_0x55D0A2DB35045A35(Local_85.f_22);
							unk_0x43A06902454A1172(Local_85.f_22);
							Local_85.f_22 = 0xFFFFFFFF;
						}
						unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000004);
						unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000003);
						unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000018);
						Local_85.f_76 = 0x00000000;
					}
					else
					{
						iVar2 = (0x00000064 * unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_B2)));
						Local_85.f_11 = (iVar2 / iVar1);
						if (!func_9())
						{
							if (unk_0x8AA6DC470ABA63A2(Local_85.f_1F))
							{
								Local_85.f_1F = unk_0xD68EA767274B7444();
								unk_0x4D7F4CC43D4D0DE3(Local_85.f_1F, "HUD_Shock_Recharge", Local_85.f_77, 0x00000001);
								unk_0x6F6BA3FE885E6C91(Local_85.f_1F, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_168();
				func_165();
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

void func_165()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	
	if (func_153())
	{
		if (unk_0x91E3F625EF57450D(0x00000000))
		{
			iVar0 = 0x000000EE;
		}
		else
		{
			iVar0 = 0x000000CD;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 0x00000006))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 0x00000005))
			{
				if (unk_0xB9132A06AE472728(0x00000002, iVar0) || unk_0x9A01369A10646AFE(0x00000002, iVar0))
				{
					unk_0x5D96D8530B3D0904(&(Local_85.f_6), 0x00000005);
				}
			}
			else if (Local_85.f_C == 0x00000001)
			{
				if (Local_85.f_AD == 0x00000002)
				{
					vVar1 = { unk_0xF1EE614CA05DDE75() };
					vVar2 = { unk_0x9382F04ED9CDA21A(0x00000002) };
					vVar3 = { (-SYSTEM::SIN(vVar2.z) * SYSTEM::COS(vVar2.x)), (SYSTEM::COS(vVar2.z) * SYSTEM::COS(vVar2.x)), SYSTEM::SIN(vVar2.x) };
					vVar4 = { 10f, 10f, 10f };
					vVar5 = { vVar1 + vVar3 * vVar4 };
					iVar6 = Global_40001.f_5E4F;
					if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000017))
					{
						iVar6 = Global_40001.f_5E50;
					}
					unk_0x4A21BDDF4D038ECF(Local_85.f_70 + Vector(0f, 0f, 0f), vVar5, iVar6, 0x00000001, 0x32A888BD, unk_0x16F2683693E537C9(), 0x00000001, 0x00000001, 0xBF800000, unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
					Local_85.f_17 = 0x00000064;
					unk_0x5E858A00EAFA5B24(0x00000000, 0x0000012C, 0x00000096);
					if (unk_0x8AA6DC470ABA63A2(Local_85.f_50))
					{
						Local_85.f_50 = unk_0xD68EA767274B7444();
						unk_0xCEAA091B490F8407(Local_85.f_50, "Remote_Perspective_Fire", unk_0x09AD4CE7DA179533(Local_85.f_79), "DLC_H3_Drone_Tranq_Weapon_Sounds", 0x00000001, 0x00000000);
					}
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", 0x00000001);
					if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000B) || unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000017))
					{
						Local_85.f_1C++;
					}
					func_167((func_154() - 0x00000001));
					if (func_154() <= 0x00000000)
					{
						Local_85.f_17 = 0x00000000;
						unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000010);
					}
					unk_0x5D96D8530B3D0904(&(Local_85.f_6), 0x00000006);
					func_8(&(Local_85.f_BA), 0x00000000, 0x00000000);
				}
			}
		}
		else
		{
			func_166();
		}
	}
}

void func_166()
{
	int iVar0;
	int iVar1;
	
	if (func_154() > 0x00000000)
	{
		if (func_10(&(Local_85.f_BA)))
		{
			iVar0 = Global_40001.f_5E4E;
			if (func_7(&(Local_85.f_BA), iVar0, 0x00000000))
			{
				unk_0x0674E58A79778E99(&(Local_85.f_6), 0x00000006);
				unk_0x0674E58A79778E99(&(Local_85.f_6), 0x00000005);
				func_6(&(Local_85.f_BA));
				Local_85.f_17 = 0x00000064;
				if (unk_0x8AA6DC470ABA63A2(Local_85.f_22))
				{
					unk_0x55D0A2DB35045A35(Local_85.f_22);
					unk_0x43A06902454A1172(Local_85.f_22);
					Local_85.f_22 = 0xFFFFFFFF;
				}
			}
			else
			{
				iVar1 = (0x00000064 * unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_BA)));
				Local_85.f_17 = (iVar1 / iVar0);
			}
		}
	}
}

void func_167(int iParam0)
{
	if (Global_19C087.f_6 != iParam0)
	{
		Global_19C087.f_6 = iParam0;
	}
}

void func_168()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_85.f_D2.f_2 = 0x00000002;
	if (unk_0x91E3F625EF57450D(0x00000000))
	{
		Local_85.f_D2.f_3 = 0x000000EE;
	}
	else
	{
		Local_85.f_D2.f_3 = 0x000000CD;
	}
	iVar0 = Global_40001.f_5E51;
	if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001F))
	{
		Local_85.f_15 = 0x00000064;
	}
	if (func_9())
	{
		iVar0 = (iVar0 / 0x00000002);
		if (unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 0x00000001))
		{
			Local_85.f_14 = ((Local_85.f_16 * (Global_40001.f_5E51 / 0x00000002)) / 0x00000064);
			Local_85.f_14 = ((Global_40001.f_5E51 / 0x00000002) - Local_85.f_14);
			unk_0x0674E58A79778E99(&(Local_85.f_6), 0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001F))
		{
			iVar0 = Local_85.f_14;
		}
	}
	else
	{
		Local_85.f_15 = 0x00000064;
	}
	if (!func_145(0x00000001))
	{
		if (!func_60() && func_169(&(Local_85.f_D2), 0x00000001, iVar0))
		{
			if (unk_0x8AA6DC470ABA63A2(Local_85.f_23))
			{
				Local_85.f_23 = unk_0xD68EA767274B7444();
				unk_0xCEAA091B490F8407(Local_85.f_23, "Destroyed", unk_0x09AD4CE7DA179533(Local_85.f_79), Local_85.f_77, 0x00000001, 0x00000000);
			}
			unk_0x1FA2A2B10F3906F7();
			iVar1 = 0x00000000;
			if (func_9())
			{
				iVar1 = 0x00000045;
			}
			unk_0xA2FC3824D7AFA946(unk_0x16F2683693E537C9(), Local_85.f_70, iVar1, 0.5f, 0x00000001, 0x00000000, 0x3F800000);
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000001)
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			}
			unk_0x5E858A00EAFA5B24(0x00000000, 0x0000012C, 0x000000C8);
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000002);
		}
	}
	if (func_10(&(Local_85.f_D2)))
	{
		unk_0x5E858A00EAFA5B24(0x00000000, 0x0000012C, 0x00000014);
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000005))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000005);
		}
		func_6(&(Local_85.f_CA));
		if (!func_7(&(Local_85.f_D2), iVar0, 0x00000000))
		{
			iVar2 = (Local_85.f_15 * unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_D2)));
			if (!func_9())
			{
				Local_85.f_12 = (iVar2 / iVar0);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001F))
			{
				Local_85.f_12 = (iVar2 / iVar0);
			}
			else
			{
				Local_85.f_12 = (Local_85.f_16 + (iVar2 / iVar0));
			}
			if (unk_0x8AA6DC470ABA63A2(Local_85.f_20))
			{
				Local_85.f_20 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(Local_85.f_20, "HUD_Detonate_Charge", Local_85.f_77, 0x00000001);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000005))
	{
		unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000005);
		if (!func_9())
		{
			Local_85.f_12 = 0x00000000;
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000001F);
			Local_85.f_15 = (0x00000064 - Local_85.f_12);
			Local_85.f_14 = (iVar0 - unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_D2)));
			Local_85.f_16 = Local_85.f_12;
			func_6(&(Local_85.f_CA));
		}
		if (Local_85.f_20 != 0xFFFFFFFF)
		{
			unk_0x55D0A2DB35045A35(Local_85.f_20);
			unk_0x43A06902454A1172(Local_85.f_20);
			Local_85.f_20 = 0xFFFFFFFF;
		}
	}
	else if (func_9())
	{
		if (Local_85.f_12 > 0x00000000)
		{
			if (Local_85.f_12 <= 0x00000002)
			{
				Local_85.f_12 = 0x00000000;
			}
			if (!func_10(&(Local_85.f_CA)))
			{
				func_8(&(Local_85.f_CA), 0x00000000, 0x00000000);
			}
			else
			{
				iVar3 = Global_40001.f_5E51;
				if (!func_7(&(Local_85.f_CA), iVar3, 0x00000000))
				{
					fVar4 = ((100f - IntToFloat(Local_85.f_15)) / SYSTEM::TO_FLOAT((iVar3 / unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_CA)))));
					Local_85.f_12 = (Local_85.f_12 - SYSTEM::ROUND(fVar4));
					Local_85.f_16 = Local_85.f_12;
					Local_85.f_15 = (0x00000064 - Local_85.f_12);
					unk_0x5D96D8530B3D0904(&(Local_85.f_6), 0x00000001);
				}
				else
				{
					Local_85.f_12 = 0x00000000;
				}
			}
		}
		else
		{
			func_6(&(Local_85.f_D2));
			unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000001F);
			unk_0x0674E58A79778E99(&(Local_85.f_6), 0x00000001);
		}
	}
}

int func_169(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x06F8112AA79C53D9(uParam0->f_2, uParam0->f_3) || (unk_0x7FEE810EE9E768EB(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_10(uParam0))
		{
			func_8(uParam0, 0x00000000, 0x00000000);
		}
		else if (func_7(uParam0, iParam2, 0x00000000))
		{
			func_6(uParam0);
			return 0x00000001;
		}
	}
	else
	{
		func_6(uParam0);
	}
	return 0x00000000;
}

void func_170()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000018))
	{
		if (Local_85.f_C == 0x00000001)
		{
			if (Local_85.f_AD == 0x00000002)
			{
				vVar0 = { unk_0xF1EE614CA05DDE75() };
				vVar1 = { unk_0x9382F04ED9CDA21A(0x00000002) };
				vVar2 = { (-SYSTEM::SIN(vVar1.z) * SYSTEM::COS(vVar1.x)), (SYSTEM::COS(vVar1.z) * SYSTEM::COS(vVar1.x)), SYSTEM::SIN(vVar1.x) };
				vVar3 = { 10f, 10f, 10f };
				vVar4 = { vVar0 + vVar2 * vVar3 };
				iVar5 = Global_40001.f_5E4F;
				if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000017))
				{
					iVar5 = Global_40001.f_5E50;
				}
				if (func_142())
				{
					iVar5 = 0x00000001;
				}
				unk_0x4A21BDDF4D038ECF(Local_85.f_70 + Vector(0f, 0f, 0f), vVar4, iVar5, 0x00000001, joaat("weapon_stungun"), unk_0x16F2683693E537C9(), 0x00000001, 0x00000001, 0xBF800000, unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				Local_85.f_11 = 0x00000064;
				Local_85.f_12 = 0x00000000;
				unk_0x5E858A00EAFA5B24(0x00000000, 0x0000012C, 0x00000096);
				if (unk_0x8AA6DC470ABA63A2(Local_85.f_22))
				{
					Local_85.f_22 = unk_0xD68EA767274B7444();
					unk_0xCEAA091B490F8407(Local_85.f_22, "Shock_Fire", unk_0x09AD4CE7DA179533(Local_85.f_79), Local_85.f_77, 0x00000001, 0x00000000);
				}
				if (Local_85.f_20 != 0xFFFFFFFF)
				{
					unk_0x55D0A2DB35045A35(Local_85.f_20);
					unk_0x43A06902454A1172(Local_85.f_20);
					Local_85.f_20 = 0xFFFFFFFF;
				}
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000004);
				func_8(&(Local_85.f_B2), 0x00000000, 0x00000000);
			}
		}
	}
}

void func_171()
{
	if ((unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000018) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000003)) && !Local_85.f_76)
	{
		if (unk_0x436E3527A86BCA33("scr_xs_dr"))
		{
			if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
			{
				unk_0x8F8ADC4754FE74DA("scr_xs_dr");
				unk_0x52ED0131476FC22E("scr_xs_dr_emp", unk_0x09AD4CE7DA179533(Local_85.f_79), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0x00000000, 0x00000000, 0x00000000);
			}
		}
		Local_85.f_11 = 0x00000064;
		unk_0x5E858A00EAFA5B24(0x00000000, 0x0000012C, 0x00000096);
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_22))
		{
			Local_85.f_22 = unk_0xD68EA767274B7444();
			unk_0xCEAA091B490F8407(Local_85.f_22, "Shock_Fire", unk_0x09AD4CE7DA179533(Local_85.f_79), Local_85.f_77, 0x00000001, 0x00000000);
		}
		if (Local_85.f_20 != 0xFFFFFFFF)
		{
			unk_0x55D0A2DB35045A35(Local_85.f_20);
			unk_0x43A06902454A1172(Local_85.f_20);
			Local_85.f_20 = 0xFFFFFFFF;
		}
		func_172(unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000001), 0x00000000);
		unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000003);
		Local_85.f_76 = 0x00000001;
		func_8(&(Local_85.f_B2), 0x00000000, 0x00000000);
	}
}

void func_172(vector3 vParam0, bool bParam1)
{
	struct<6> Var0;
	
	Var0 = 0x1C2C3329;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = bParam1;
	if (!bParam1)
	{
		if (!func_174(0x00000001, 0x00000001) == 0x00000000)
		{
			unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000006, func_174(0x00000001, 0x00000001));
		}
	}
	else if (Global_19C087.f_15 != func_16())
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000006, func_173(Global_19C087.f_15));
	}
}

var func_173(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_174(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_15(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_94(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_175()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000008);
}

int func_176()
{
	if ((unk_0xE5DBF9B6126856CA(Local_85.f_79) && unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000002))
	{
		return 0x00000001;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (func_147(unk_0xD803B885F5E47A62()) && unk_0xEAE0D21A50E6C7F4(Global_26B199, 0x00000000))
		{
		}
		else if (func_184())
		{
			if (unk_0xE608C809F9416F00(unk_0x09AD4CE7DA179533(Local_85.f_79)))
			{
				Local_85.f_19 = 0x00000001;
				return 0x00000001;
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000002))
	{
		Local_85.f_19 = 0x00000004;
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000009))
	{
		Local_85.f_19 = 0x00000001;
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000007))
	{
		Local_85.f_19 = 0x00000000;
		return 0x00000001;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x70EED0761B82965E(unk_0x09AD4CE7DA179533(Local_85.f_79)) || func_183(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 0x00000000))
		{
			Local_85.f_19 = 0x00000003;
			return 0x00000001;
		}
	}
	if (func_181(unk_0xD803B885F5E47A62()))
	{
		Local_85.f_19 = 0x00000000;
		return 0x00000001;
	}
	if (func_119())
	{
		if (Global_18446E != func_16())
		{
			if (func_37(Global_18446E))
			{
				Local_85.f_19 = 0x00000000;
				return 0x00000001;
			}
		}
	}
	if (func_180())
	{
		Local_85.f_19 = 0x00000001;
		return 0x00000001;
	}
	if (func_179(unk_0xD803B885F5E47A62()))
	{
		Local_85.f_19 = 0x00000000;
		return 0x00000001;
	}
	if (func_178())
	{
		Local_85.f_19 = 0x00000000;
		return 0x00000001;
	}
	if (func_177())
	{
		Local_85.f_19 = 0x00000000;
		return 0x00000001;
	}
	if (func_19())
	{
		Local_85.f_19 = 0x00000000;
		return 0x00000001;
	}
	if (func_28())
	{
		Local_85.f_19 = 0x00000000;
		return 0x00000001;
	}
	if (func_18())
	{
		if (unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 0x00000001))
		{
			Local_85.f_19 = 0x00000006;
			return 0x00000001;
		}
		if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || unk_0xA750A57C629763A9(unk_0x16F2683693E537C9()))
		{
			Local_85.f_19 = 0x00000006;
			return 0x00000001;
		}
		if (func_136(unk_0x16F2683693E537C9(), Local_85.f_73, 0x00000001) > 2f)
		{
			Local_85.f_19 = 0x00000007;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_177()
{
	return Global_17735;
}

bool func_178()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000009);
}

int func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (Global_18D84D[iVar0 /*615*/].f_8)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_180()
{
	vector3 vVar0;
	
	if (Local_85.f_10 == 0x8C0E879B)
	{
		if (func_25(unk_0x09AD4CE7DA179533(Local_85.f_79)))
		{
			if (unk_0xB0A50BC6EDB99CA9(unk_0x09AD4CE7DA179533(Local_85.f_79)) == 0xFE77F439)
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000001) };
				if (vVar0.z >= 47f)
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (func_25(unk_0x09AD4CE7DA179533(Local_85.f_79)))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x09AD4CE7DA179533(Local_85.f_79), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			if (unk_0x3D1053F9EB43B7AD(unk_0x09AD4CE7DA179533(Local_85.f_79), 2494.398f, -276.2f, -69.09f, 2494.342f, -277.4824f, -67.98756f, 0.7f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_181(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 0x00000001, 0x00000001))
	{
		if (func_48(iParam0) && !func_182(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_182(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000004);
	}
	return 0x00000000;
}

int func_183(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) || iParam1)
		{
			if (unk_0x70EED0761B82965E(iParam0))
			{
				if (unk_0xFC0E4F7E386C43F8(iParam0) >= 0.7f)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_184()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x0000000F);
}

void func_185()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	int iVar9;
	bool bVar10;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			vVar0 = { Local_85.f_70 };
			switch (Local_85.f_C)
			{
				case 0x00000000:
					vVar1 = { unk_0xF1EE614CA05DDE75() };
					vVar2 = { unk_0x9382F04ED9CDA21A(0x00000002) };
					vVar3 = { (-SYSTEM::SIN(vVar2.z) * SYSTEM::COS(vVar2.x)), (SYSTEM::COS(vVar2.z) * SYSTEM::COS(vVar2.x)), SYSTEM::SIN(vVar2.x) };
					vVar4 = { 10f, 10f, 10f };
					if (func_9())
					{
						vVar4 = { Global_40001.f_60A7, Global_40001.f_60A7, Global_40001.f_60A7 };
					}
					vVar5 = { vVar1 + vVar3 * vVar4 };
					vVar0 = { unk_0x8A5E176FF719A014(Local_85.f_70, unk_0xD9522BA9E27E1349(unk_0x09AD4CE7DA179533(Local_85.f_79)), 0f, -0.1f, 0f) };
					Local_85.f_81 = unk_0xCD02F8660C47B801(vVar0, vVar5, 0x0000007B, unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000007);
					if (Local_85.f_81 != 0x00000000)
					{
						Local_85.f_C = 0x00000001;
					}
					break;
				
				case 0x00000001:
					Local_85.f_AD = unk_0x1EC301670B54C6DE(Local_85.f_81, &iVar6, &vVar8, &uVar7, &iVar9);
					if (Local_85.f_AD == 0x00000002)
					{
						if (iVar6 == 0x00000000)
						{
							Local_85.f_D = 0x00000001;
							vVar8 = { 0f, 0f, 0f };
							if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000B) && !func_9())
							{
								unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000000B);
							}
							if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000017))
							{
								unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000017);
							}
							func_192();
						}
						else
						{
							Local_85.f_D = 0x00000002;
							if (unk_0xC844350D5D58C99A(iVar9))
							{
								if (unk_0xEC560E589DF8370E(iVar9))
								{
									if (!unk_0x437347B10A200C4B(iVar9, 0x00000000))
									{
										if (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(iVar9)))
										{
											if (func_190(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(unk_0x940C1429253D3B1B(iVar9))))
											{
												bVar10 = 0x00000001;
											}
										}
										else
										{
											if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000017))
											{
												unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000017);
												if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000B) && !func_9())
												{
													unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000000B);
												}
											}
											if (!func_72(unk_0xD803B885F5E47A62()) && !func_69(unk_0xD803B885F5E47A62()))
											{
												if ((func_189(unk_0x940C1429253D3B1B(iVar9)) || func_188(unk_0x940C1429253D3B1B(iVar9))) || func_187(unk_0x940C1429253D3B1B(iVar9)))
												{
													func_68(Global_180863);
													func_186(&(Local_85.f_BC), 0x00000000, 0x00000000);
												}
												else
												{
													func_192();
												}
											}
										}
										if ((((!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000B) && !bVar10) && func_25(Global_19C087.f_17)) && unk_0xF649DD3BF44195C7(Global_19C087.f_17, iVar9, 0x000001FF)) && (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(iVar9)) && unk_0x16F2683693E537C9() != unk_0x940C1429253D3B1B(iVar9)))
										{
											unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000000B);
											if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000017))
											{
												unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000017);
											}
										}
									}
								}
								else
								{
									if (!func_9())
									{
										if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000B))
										{
											unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000000B);
										}
									}
									if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000017))
									{
										unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000017);
									}
									func_192();
								}
							}
							else
							{
								func_192();
							}
							Local_85.f_81 = 0x00000000;
							Local_85.f_C = 0x00000000;
						}
					}
					else if (Local_85.f_AD == 0x00000000)
					{
						Local_85.f_C = 0x00000000;
					}
					break;
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

void func_186(var uParam0, bool bParam1, bool bParam2)
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

int func_187(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x7C055F40DB28E523(iParam0) == 0xF50B51B7)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_188(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if ((((((((((((unk_0x0A5D59F37DC7E974(iParam0) == 0x00000007 || unk_0x0A5D59F37DC7E974(iParam0) == 0x00000008) || unk_0x0A5D59F37DC7E974(iParam0) == 0x00000009) || unk_0x0A5D59F37DC7E974(iParam0) == 0x0000000A) || unk_0x0A5D59F37DC7E974(iParam0) == 0x0000000B) || unk_0x0A5D59F37DC7E974(iParam0) == 0x0000000C) || unk_0x0A5D59F37DC7E974(iParam0) == 0x0000000D) || unk_0x0A5D59F37DC7E974(iParam0) == 0x0000000E) || unk_0x0A5D59F37DC7E974(iParam0) == 0x0000000F) || unk_0x0A5D59F37DC7E974(iParam0) == 0x00000010) || unk_0x0A5D59F37DC7E974(iParam0) == 0x00000011) || unk_0x0A5D59F37DC7E974(iParam0) == 0x00000012) || unk_0x0A5D59F37DC7E974(iParam0) == 0x00000013)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_189(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if ((((unk_0x0A5D59F37DC7E974(iParam0) == 0x00000006 || unk_0x0A5D59F37DC7E974(iParam0) == 0x0000001D) || unk_0x0A5D59F37DC7E974(iParam0) == 0x0000001B) || unk_0x7C055F40DB28E523(iParam0) == 0xE3D976F3) || unk_0x7C055F40DB28E523(iParam0) == 0xA49E591C)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_190(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_191(iParam0);
	if (!iVar0 == func_16())
	{
		if (iVar0 == func_191(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_191(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_16();
}

void func_192()
{
	if (func_10(&(Local_85.f_BC)))
	{
		if (func_7(&(Local_85.f_BC), 0x0000EA60, 0x00000000))
		{
			func_6(&(Local_85.f_BC));
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) <= 0x00000000)
			{
				func_68(Global_180858);
			}
		}
	}
}

void func_193()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	int iVar8;
	var uVar9;
	vector3 vVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if ((func_27() || func_9()) || func_29())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001D))
		{
			return;
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
	{
		if (unk_0x0A19E90E359995E6(unk_0x09AD4CE7DA179533(Local_85.f_79)))
		{
			return;
		}
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			switch (Local_85.f_A)
			{
				case 0x00000000:
					if ((func_9() || func_29()) || func_27())
					{
						fVar5 = 0.3f;
					}
					else
					{
						fVar5 = (func_196(Local_85.f_A9) * 1.5f);
					}
					if (func_27())
					{
						vVar6 = { Local_85.f_70 };
						vVar1 = { unk_0xF1EE614CA05DDE75() };
						vVar2 = { unk_0x9382F04ED9CDA21A(0x00000002) };
						vVar3 = { (-SYSTEM::SIN(vVar2.z) * SYSTEM::COS(vVar2.x)), (SYSTEM::COS(vVar2.z) * SYSTEM::COS(vVar2.x)), SYSTEM::SIN(vVar2.x) };
						vVar4 = { 0.9f, 0.9f, 0.9f };
						vVar7 = { vVar1 + vVar3 * vVar4 };
					}
					else
					{
						vVar6 = { Local_85.f_70 };
						vVar7 = { Local_85.f_70 };
					}
					Local_85.f_80 = unk_0x6D4C9F7CF124AE37(vVar6, vVar7, fVar5, 0x000001FF, unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000004);
					if (Local_85.f_80 != 0x00000000)
					{
						Local_85.f_A = 0x00000001;
					}
					break;
				
				case 0x00000001:
					iVar12 = unk_0x1EC301670B54C6DE(Local_85.f_80, &iVar8, &vVar10, &uVar9, &iVar11);
					if (iVar12 == 0x00000002)
					{
						if (iVar8 == 0x00000000)
						{
							Local_85.f_B = 0x00000001;
							vVar10 = { 0f, 0f, 0f };
						}
						else
						{
							if (unk_0xC844350D5D58C99A(iVar11))
							{
								if (unk_0xE2F1E99DD161A861(iVar11))
								{
									if (!unk_0x437347B10A200C4B(iVar11, 0x00000000) && unk_0x134B62B726CEC8E6(iVar11) != Local_85.f_A9)
									{
										if (unk_0x9C66D99E63E8E24C(iVar11) > 0.5f || func_194(unk_0x134B62B726CEC8E6(iVar11)))
										{
											if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000009))
											{
												unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000009);
											}
										}
									}
								}
								else if (unk_0xEC560E589DF8370E(iVar11))
								{
									if (!unk_0x437347B10A200C4B(iVar11, 0x00000000))
									{
										if (!unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(iVar11)))
										{
											if (Local_85.f_1B == 0x00000000)
											{
												iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
												if (iVar0 == 0x00000000)
												{
													iVar13 = 0x00000055;
												}
												else if (iVar0 == 0x00000001)
												{
													iVar13 = 0x0000005A;
												}
												else
												{
													iVar13 = 0x0000004F;
												}
												Local_85.f_1B = unk_0x7D0D8317DC09FF68(iVar13, Local_85.f_70, 5000f);
												func_186(&(Local_85.f_C2), 0x00000000, 0x00000000);
											}
										}
									}
								}
							}
							Local_85.f_B = 0x00000002;
							unk_0x5E858A00EAFA5B24(0x00000000, 0x0000012C, 0x00000032);
							Local_85.f_80 = 0x00000000;
							Local_85.f_A = 0x00000000;
						}
					}
					else if (iVar12 == 0x00000000)
					{
						Local_85.f_A = 0x00000000;
					}
					break;
			}
			if (Local_85.f_1B != 0x00000000)
			{
				if (func_10(&(Local_85.f_C2)))
				{
					if (func_7(&(Local_85.f_C2), 0x00001388, 0x00000000))
					{
						unk_0x850CF499433B183D(Local_85.f_1B);
						func_6(&(Local_85.f_C2));
						Local_85.f_1B = 0x00000000;
					}
				}
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0xD6BC7523:
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 0x00000001;
			break;
	}
	if (func_195(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0xAFB8495D36825275(iParam0) || unk_0xC41A9202669A24C4(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_195(int iParam0, int iParam1)
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

float func_196(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_197(iParam0, &vVar0, &vVar1, 0x40C00000, 0x40600000, 0x40400000);
	return unk_0x755FF954DAE327E1((vVar0.z - vVar1.z));
}

void func_197(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x468C1AC3ABF95C57(iParam0))
	{
		unk_0xA6B02C1DB14DDA13(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_200(iParam0);
		if (iVar0 != 0x00000000)
		{
			func_198(iVar0, uParam1, uParam2, 0x40C00000, 0x40600000, 0x40400000);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_198(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_199(iParam0, &Global_1413E4);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0x468C1AC3ABF95C57(Global_1413E4[iVar0]))
		{
			unk_0xA6B02C1DB14DDA13(Global_1413E4[iVar0], &(Global_1413E8[iVar0 /*3*/]), &(Global_1413EF[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1413E8[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1413EF[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1413E8[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1413EF[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1413E8[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1413EF[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1413E8[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1413EF[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1413F6[iVar0] = (Global_1413EF[iVar0 /*3*/] - Global_1413E8[iVar0 /*3*/]);
		Global_1413F9[iVar0] = (Global_1413EF[iVar0 /*3*/].f_1 - Global_1413E8[iVar0 /*3*/].f_1);
		Global_1413FC[iVar0] = (Global_1413EF[iVar0 /*3*/].f_2 - Global_1413E8[iVar0 /*3*/].f_2);
		if (Global_1413F6[iVar0] > Global_1413FF)
		{
			Global_1413FF = Global_1413F6[iVar0];
		}
		if (Global_1413FC[iVar0] > Global_141400)
		{
			Global_141400 = Global_1413FC[iVar0];
		}
		iVar0++;
	}
	Global_141401 = (Global_1413FF * -0.5f);
	Global_141404 = (Global_1413FF * 0.5f);
	Global_141401.f_1 = ((((0.5f * Global_1413F9[0x00000000]) + Global_1413F9[0x00000001]) + Global_1413E4.f_3) * -1f);
	Global_141404.f_1 = (0.5f * Global_1413F9[0x00000000]);
	Global_141401.f_2 = (Global_1413FC[0x00000000] * -0.5f);
	Global_141404.f_2 = (Global_1413FC[0x00000000] * 0.5f);
	*uParam1 = { Global_141401 };
	*uParam2 = { Global_141404 };
}

void func_199(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000001:
			(*uParam1)[0x00000000] = 0x171C92C4;
			(*uParam1)[0x00000001] = 0x5993F939;
			uParam1->f_3 = -2.6f;
			break;
		
		case 0x00000002:
			(*uParam1)[0x00000000] = 0x0A90ED5C;
			(*uParam1)[0x00000001] = 0x5993F939;
			uParam1->f_3 = -2.6f;
			break;
		
		case 0x00000003:
			(*uParam1)[0x00000000] = 0x19DD9ED1;
			(*uParam1)[0x00000001] = 0x8FD54EBB;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		iVar1 = iVar0;
		if (func_201(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = (0x000003E8 + iParam0);
	return iVar0;
}

void func_202()
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (func_25(unk_0x09AD4CE7DA179533(Local_85.f_79)))
		{
			iVar0 = func_205(unk_0x09AD4CE7DA179533(Local_85.f_79));
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_204(&(Global_1801E9.f_174), iVar0) && !func_204(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_22E), iVar0))
				{
					func_203(0x00000001);
				}
			}
		}
	}
}

void func_203(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000009))
			{
				unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000009);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000009))
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000009);
	}
}

bool func_204(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 0x00000020);
	iVar1 = (iParam1 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], iVar1);
}

int func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		iVar0 = func_209(iParam0);
		if (iVar0 != 0xFFFFFFFF)
		{
			return iVar0;
		}
		iVar1 = unk_0x4D570FEF9D230CE7(iParam0);
		if (iVar1 != 0x00000000)
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x0000002B)
			{
				iVar3 = iVar2;
				func_206(iVar3);
				if (Global_19A5EF[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return 0xFFFFFFFF;
}

void func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_19A5EF[iVar0] == 0x00000000)
	{
		Global_19A5EF[iVar0] = unk_0x0D1736C2E221BCEA(func_208(iParam0), func_207(iParam0));
	}
}

char* func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "bkr_biker_dlc_int_03";
		
		case 0x00000000:
			return "hei_heist_police_dlc";
		
		case 0x00000002:
			return "v_genbank";
		
		case 0x00000003:
			return "v_genbank";
		
		case 0x00000004:
			return "v_genbank";
		
		case 0x00000005:
			return "v_genbank";
		
		case 0x00000006:
			return "v_bank4";
		
		case 0x00000007:
			return "v_genbank";
		
		case 0x00000008:
			return "hei_generic_bank_dlc";
		
		case 0x00000009:
			return "v_rockclub";
		
		case 0x0000000A:
			return "v_factory1";
		
		case 0x0000000B:
			return "v_factory2";
		
		case 0x0000000C:
			return "v_factory3";
		
		case 0x0000000D:
			return "v_factory4";
		
		case 0x0000000E:
			return "v_farmhouse";
		
		case 0x0000000F:
			return "gr_gta_milo_bridge";
		
		case 0x00000010:
			return "v_recycle";
		
		case 0x00000011:
			return "v_lab";
		
		case 0x00000012:
			return "v_garagem";
		
		case 0x00000013:
			return "v_studio_lo";
		
		case 0x00000014:
			return "v_apart_midspaz";
		
		case 0x00000015:
			return "v_sheriff";
		
		case 0x00000016:
			return "v_sheriff2";
		
		case 0x00000017:
			return "dt1_03_carpark";
		
		case 0x00000018:
			return "v_carshowroom";
		
		case 0x0000001B:
			return "v_faceoffice";
		
		case 0x00000019:
			return "v_abattoir";
		
		case 0x0000001A:
			return "V_JEWEL2";
		
		case 0x0000001C:
			return "smboat";
		
		case 0x0000001D:
			return "vb_33_garage";
		
		case 0x0000001E:
			return "v_chopshop";
		
		case 0x0000001F:
			return "v_methlab";
		
		case 0x00000020:
			return "v_office_lobby";
		
		case 0x00000021:
			return "v_lab";
		
		case 0x00000022:
			return "v_foundry";
		
		case 0x00000023:
			return "v_refit";
		
		case 0x00000024:
			return "hei_int_mph_carrierhang3";
		
		case 0x00000025:
			return "hei_int_mph_carrierhang2";
		
		case 0x00000026:
			return "hei_int_mph_carrierhang1";
		
		case 0x00000027:
			return "hei_int_mph_carrierupper";
		
		case 0x00000028:
			return "hei_int_mph_carriercontrol1";
		
		case 0x00000029:
			return "hei_int_mph_carriercontrol2";
		
		case 0x0000002A:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0x00000000:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 0x00000002:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 0x00000003:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 0x00000004:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 0x00000005:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 0x00000006:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 0x00000007:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 0x00000008:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 0x00000009:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 0x0000000A:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 0x0000000B:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 0x0000000C:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 0x0000000D:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 0x0000000E:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 0x0000000F:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 0x00000010:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 0x00000011:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 0x00000012:
			return 630f, 4750f, -60f;
		
		case 0x00000013:
			return 600f, 4750f, -60f;
		
		case 0x00000014:
			return 575f, 4750f, -60f;
		
		case 0x00000015:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 0x00000016:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 0x00000017:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 0x00000018:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 0x0000001B:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 0x00000019:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 0x0000001A:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 0x0000001C:
			return -2032f, -1035f, 5f;
		
		case 0x0000001D:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 0x0000001E:
			return 479.88f, -1318.57f, 28.2f;
		
		case 0x0000001F:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 0x00000020:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 0x00000021:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 0x00000022:
			return 1087.195f, -1988.445f, 28.649f;
		
		case 0x00000023:
			return -583.1606f, -282.3967f, 35.394f;
		
		case 0x00000024:
			return 3053.565f, -4653.67f, 5.0773f;
		
		case 0x00000025:
			return 3058.002f, -4700.8f, 5.0773f;
		
		case 0x00000026:
			return 3080.619f, -4772.69f, 5.0773f;
		
		case 0x00000027:
			return 3088.469f, -4708.33f, 20.567f;
		
		case 0x00000028:
			return 3085.222f, -4690.66f, 26.2522f;
		
		case 0x00000029:
			return 3092.459f, -4711.389f, 26.2657f;
		
		case 0x0000002A:
			return 2329.242f, 2571.494f, 45.6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_209(int iParam0)
{
	if (func_217(iParam0))
	{
		return 0x0000000F;
	}
	if (func_215(iParam0))
	{
		return 0x0000001C;
	}
	if (func_212(iParam0))
	{
		return 0x00000024;
	}
	if (func_211(iParam0))
	{
		return 0x00000017;
	}
	if (func_210(iParam0))
	{
		return 0x00000021;
	}
	return 0xFFFFFFFF;
}

int func_210(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_211(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), -16.2669f, -685.4531f, 31.3381f, 0x00000001) <= 80f)
		{
			if ((((((unk_0x3D1053F9EB43B7AD(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_212(int iParam0)
{
	return ((!unk_0x437347B10A200C4B(iParam0, 0x00000000) && unk_0x5A91F08DF773C39D(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, 0x00000000, 0x00000001, 0x00000000)) || func_213());
}

int func_213()
{
	if (!unk_0x757EF87A33649210())
	{
		if (SYSTEM::VDIST2(func_214(unk_0xD803B885F5E47A62()), 3042.596f, -4667.915f, 34.26143f) <= 25600f)
		{
			if (unk_0x8E28E832BEAC3DCE(3042.596f, -4667.915f, 34.26143f, 50f))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

Vector3 func_214(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

bool func_215(int iParam0)
{
	return ((!unk_0x437347B10A200C4B(iParam0, 0x00000000) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0x00000000, 0x00000001, 0x00000000)) || func_216());
}

int func_216()
{
	vector3 vVar0;
	
	if (!unk_0x757EF87A33649210())
	{
		vVar0 = { -2073.541f, -1021.104f, 14.99213f };
		if (SYSTEM::VDIST2(func_214(unk_0xD803B885F5E47A62()), vVar0) <= 25600f)
		{
			if (unk_0x8E28E832BEAC3DCE(vVar0, 60f))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_217(int iParam0)
{
	return ((!unk_0x437347B10A200C4B(iParam0, 0x00000000) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0x00000000, 0x00000001, 0x00000000)) || func_218());
}

int func_218()
{
	vector3 vVar0;
	
	if (!unk_0x757EF87A33649210())
	{
		vVar0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (SYSTEM::VDIST2(func_214(unk_0xD803B885F5E47A62()), vVar0) <= 25600f)
		{
			if (unk_0x8E28E832BEAC3DCE(vVar0, 50f))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_27())
	{
		return;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0xFBB4F23D534EB790(Local_85.f_83))
		{
			if (unk_0x9CF8D5C7090408A2(Local_85.f_83) || iParam0)
			{
				if (!func_60())
				{
					func_54(0x00000000);
				}
				func_230(0x00000001);
				if ((!func_229() || unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000001)) || func_176())
				{
					unk_0x3FC8DBCC154CA56B();
				}
				else
				{
					unk_0x3584F71E5CA29322(0x00000009);
					unk_0x3584F71E5CA29322(0x00000007);
					unk_0x3584F71E5CA29322(0x00000008);
					func_63();
					func_227(0x00000001);
					iVar0 = unk_0x4D570FEF9D230CE7(unk_0xA5FBBC2F619A4DE2(Local_85.f_79));
					if (unk_0x31609A585163CBAC(iVar0))
					{
						Global_19C087.f_18 = iVar0;
						if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000008))
						{
							Local_85.f_56 = func_226(unk_0x0674DCE5BAE00012(iVar0));
							unk_0xCC1B6327F8842266(iVar0, &(Local_85.f_6D), &(Local_85.f_10));
							unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000008);
						}
						iVar1 = 0x00000000;
						if (func_225(Local_85.f_70.f_2, 43f, 48.7f))
						{
							iVar1 = 0x00000001;
						}
						if (Global_19C087.f_9 == -1f)
						{
							unk_0x403399A52DA3CF92(1f);
						}
						else
						{
							unk_0x403399A52DA3CF92(Global_19C087.f_9);
						}
						if (!func_147(unk_0xD803B885F5E47A62()) && !func_222(unk_0xD803B885F5E47A62()))
						{
							if (!func_221())
							{
								func_220(0x00000001);
							}
						}
						unk_0x58D1E74A3FBADA8D(0x00000000, 0x00000000);
						unk_0x3E48C1351341DC99(Local_85.f_10, Local_85.f_6D, Local_85.f_6D.f_1, SYSTEM::FLOOR(Local_85.f_56), iVar1);
					}
					else
					{
						Local_85.f_10 = 0xFFFFFFFF;
						if (Global_19C087.f_9 == -1f)
						{
							unk_0x403399A52DA3CF92(0f);
						}
						else
						{
							unk_0x403399A52DA3CF92(Global_19C087.f_9);
						}
						if (!func_221())
						{
							func_220(0x00000001);
						}
						unk_0x58D1E74A3FBADA8D(0x00000000, 0x00000000);
						Global_19C087.f_18 = 0xFFFFFFFF;
						if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000008))
						{
							unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000008);
						}
					}
				}
			}
		}
	}
}

void func_220(int iParam0)
{
	Global_2594EF = iParam0;
}

bool func_221()
{
	return Global_2594EF;
}

int func_222(int iParam0)
{
	if (func_224(iParam0))
	{
		return 0x00000001;
	}
	if (func_223(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_223(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_73(iParam0, 0x00000009);
	}
	return 0x00000000;
}

int func_224(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

int func_225(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_226(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_227(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_181EC.f_8 = 0x00000001;
	}
	else
	{
		Global_181EC.f_8 = 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_228(iVar0);
		iVar0++;
	}
}

void func_228(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 0x00000001;
	Global_181EC.f_B4 = 0x00000001;
}

bool func_229()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000004);
}

void func_230(int iParam0)
{
	if (Global_26B66F.f_11CA != iParam0)
	{
		Global_26B66F.f_11CA = iParam0;
	}
}

void func_231()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	vector3 vVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	vector3 vVar21;
	vector3 vVar22;
	float fVar23;
	float fVar24;
	var uVar25;
	var uVar26;
	vector3 vVar27;
	
	if (!func_27() || func_176())
	{
		return;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			fVar0 = 26f;
			fVar1 = 40f;
			fVar2 = 30f;
			fVar3 = 30f;
			iVar4 = 0x00000001;
			fVar5 = unk_0xCE563465D2227DD6(unk_0x09AD4CE7DA179533(Local_85.f_79));
			fVar6 = unk_0x81FFFF2E58A35803(unk_0x09AD4CE7DA179533(Local_85.f_79));
			fVar7 = (30f * SYSTEM::TIMESTEP());
			func_236();
			unk_0xA2E3EDD0E119882F(0x00000002);
			func_235(&(Local_85[0x00000000]), &(Local_85[0x00000001]), &(Local_85[0x00000002]), &(Local_85[0x00000003]), 0x00000000, 0x00000000);
			if (unk_0x91E3F625EF57450D(0x00000000))
			{
				iVar4 = 0x00000002;
				Local_85[0x00000002] = (Local_85[0x00000002] * iVar4);
				Local_85[0x00000003] = (Local_85[0x00000003] * iVar4);
			}
			if (unk_0x89DF0B812BA6383B())
			{
				Local_85[0x00000003] = (Local_85[0x00000003] * 0xFFFFFFFF);
				Local_85[0x00000001] = (Local_85[0x00000001] * 0xFFFFFFFF);
			}
			if ((Local_85[0x00000002] != 0x00000000 || Local_85[0x00000003] != 0x00000000) || (Local_85[0x00000000] != 0x00000000 || Local_85[0x00000001] != 0x00000000))
			{
				if (Local_85[0x00000002] != 0x00000000)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_85[0x00000002])));
				}
				else if (Local_85[0x00000000] != 0x00000000)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_85[0x00000000])));
				}
				else
				{
					fVar8 = 0f;
				}
				if (Local_85[0x00000003] != 0x00000000)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_85[0x00000003])));
				}
				else if (Local_85[0x00000001] != 0x00000000)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_85[0x00000001])));
				}
				else
				{
					fVar9 = 0f;
				}
				vVar13 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000002) };
				fVar10 = (((fVar9 * 0.05f) * fVar7) * fVar0);
				fVar11 = -(((fVar8 * 0.05f) * fVar7) * fVar0);
				if ((fVar5 != 0f || Local_85[0x00000002] != 0x00000000) || Local_85[0x00000000] != 0x00000000)
				{
					if (Local_85[0x00000002] != 0x00000000)
					{
						fVar15 = (1f / (127f / IntToFloat(Local_85[0x00000002])));
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else if (Local_85[0x00000000] != 0x00000000)
					{
						fVar15 = (1f / (127f / IntToFloat(Local_85[0x00000000])));
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else
					{
						if (fVar5 > 0.1f || fVar5 < -0.1f)
						{
							if (fVar5 > 0f)
							{
								fVar15 = -1f;
							}
							else
							{
								fVar15 = 1f;
							}
						}
						if (vVar13.y != 0f)
						{
							if (vVar13.y < 2f && vVar13.y > 0f)
							{
								fVar15 = 0.0001f;
							}
							else if (vVar13.y > -2f && vVar13.y < 0f)
							{
								fVar15 = -0.0001f;
							}
						}
						else
						{
							fVar15 = 0f;
						}
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				else
				{
					fVar12 = 0f;
				}
				vVar14 = { Vector(fVar11, fVar12, fVar10) + vVar13 };
				if (fVar5 != 0f)
				{
					if (Local_85[0x00000002] == 0x00000000 && Local_85[0x00000000] == 0x00000000)
					{
						if (vVar14.y > fVar2)
						{
							vVar14.y = fVar2;
						}
						else if (vVar14.y < -fVar2)
						{
							vVar14.y = -fVar2;
						}
					}
					else if (vVar14.y > fVar2)
					{
						vVar14.y = fVar2;
					}
					else if (vVar14.y < -fVar2)
					{
						vVar14.y = -fVar2;
					}
				}
				if (vVar14.x > fVar3)
				{
					vVar14.x = fVar3;
				}
				else if (vVar14.x < -fVar3)
				{
					vVar14.x = -fVar3;
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000C))
				{
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000000C);
				}
				unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar14.z, vVar14.y, vVar14.x), 0x00000002, 0x00000001);
			}
			else if (((Local_85[0x00000002] != 0x00000000 || Local_85[0x00000003] != 0x00000000) || Local_85[0x00000000] != 0x00000000) || Local_85[0x00000001] != 0x00000000)
			{
				vVar16 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000002) };
				if (func_234())
				{
					if (func_233())
					{
						fVar18 = -1f;
						Local_85.f_5C = fVar18;
					}
				}
				else
				{
					if (Local_85[0x00000002] != 0x00000000)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_85[0x00000002])));
						Local_85.f_5C = fVar17;
					}
					else if (Local_85[0x00000000] != 0x00000000)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_85[0x00000000])));
						Local_85.f_5C = fVar17;
					}
					else
					{
						fVar17 = 0f;
					}
					if (Local_85[0x00000003] != 0x00000000)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_85[0x00000003])));
						Local_85.f_5C = fVar17;
					}
					else if (Local_85[0x00000001] != 0x00000000)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_85[0x00000001])));
						Local_85.f_5C = fVar17;
					}
					else
					{
						fVar18 = 0f;
					}
				}
				fVar19 = -(((fVar18 * 0.05f) * fVar7) * fVar1);
				fVar20 = -(((fVar17 * 0.05f) * fVar7) * fVar1);
				if (fVar5 != 0f)
				{
					if (Local_85[0x00000002] == 0x00000000 && Local_85[0x00000000] == 0x00000000)
					{
						if (fVar5 > 1f || fVar5 < -1f)
						{
							if (fVar5 > 0f)
							{
								fVar17 = -1f;
							}
							else
							{
								fVar17 = 1f;
							}
						}
						if (vVar16.y < 2f && vVar16.y > 0f)
						{
							fVar17 = 0.0001f;
						}
						else if (vVar16.y > -2f && vVar16.y < 0f)
						{
							fVar17 = -0.0001f;
						}
						fVar20 = -(((fVar17 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				vVar21 = { Vector(0f, fVar20, fVar19) + vVar16 };
				if (vVar21.y > fVar2)
				{
					vVar21.y = fVar2;
				}
				else if (vVar21.y < -fVar2)
				{
					vVar21.y = -fVar2;
				}
				if (vVar21.x > fVar3)
				{
					vVar21.x = fVar3;
				}
				else if (vVar21.x < -fVar3)
				{
					vVar21.x = -fVar3;
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000C))
				{
					unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000000C);
				}
				unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar16.z, vVar21.y, vVar21.x), 0x00000002, 0x00000001);
			}
			else
			{
				Local_85.f_5C = 0f;
				vVar22 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000002) };
				if (fVar5 != 0f || fVar6 != 0f)
				{
					if (vVar22.y != 0f)
					{
						if (vVar22.y < 0f)
						{
							fVar23 = -1f;
						}
						else
						{
							fVar23 = 1f;
						}
					}
					else
					{
						fVar23 = 0f;
					}
					if (fVar6 != 0f)
					{
						if (vVar22.x < 0f)
						{
							fVar24 = -1f;
						}
						else
						{
							fVar24 = 1f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (vVar22.y != 0f)
					{
						if (vVar22.y < 2f && vVar22.y > 0f)
						{
							fVar23 = 0.0001f;
						}
						else if (vVar22.y > -2f && vVar22.y < 0f)
						{
							fVar23 = -0.0001f;
						}
					}
					else
					{
						fVar23 = 0f;
					}
					if (vVar22.x != 0f)
					{
						if (vVar22.x < 2f && vVar22.x > 0f)
						{
							fVar24 = 0.0001f;
						}
						else if (vVar22.x > -2f && vVar22.x < 0f)
						{
							fVar24 = -0.0001f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					uVar25 = func_232(-(((fVar24 * 0.05f) * fVar7) * (fVar1 - 25f)));
					uVar26 = func_232(-(((fVar23 * 0.05f) * fVar7) * (fVar1 - 25f)));
					vVar27 = { Vector(0f, uVar26, uVar25) + vVar22 };
					if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000C))
					{
						vVar27.x = vVar22.x;
					}
					unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar22.z, vVar27.y, vVar27.x), 0x00000002, 0x00000001);
				}
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

float func_232(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_233()
{
	return unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000016);
}

bool func_234()
{
	return unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000015);
}

void func_235(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DA) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DB) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DC) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DD) * 127f));
	if (bParam4)
	{
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DA))
		{
			*uParam0 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DA) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DB))
		{
			*uParam1 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DB) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DC))
		{
			*uParam2 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DC) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DD))
		{
			*uParam3 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DD) * 127f));
		}
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (bParam5)
		{
			if (unk_0x89DF0B812BA6383B())
			{
				*uParam3 = (*uParam3 * 0xFFFFFFFF);
			}
			if (unk_0x8EB1E94243F14479())
			{
				*uParam3 = (*uParam3 * 0xFFFFFFFF);
			}
		}
	}
}

void func_236()
{
	if (func_119())
	{
		switch (Local_85.f_18)
		{
			case 0x00000000:
				Local_85.f_5A = 90f;
				Local_85.f_59 = 90f;
				break;
			
			case 0x00000001:
				Local_85.f_5A = 75f;
				Local_85.f_59 = 75f;
				break;
			
			case 0x00000002:
				Local_85.f_5A = 45f;
				Local_85.f_59 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_85.f_18)
		{
			case 0x00000000:
				Local_85.f_5A = 90f;
				Local_85.f_59 = 90f;
				break;
			
			case 0x00000001:
				Local_85.f_5A = 80f;
				Local_85.f_59 = 80f;
				break;
			
			case 0x00000002:
				Local_85.f_5A = 70f;
				Local_85.f_59 = 70f;
				break;
			}
	}
}

void func_237()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	vector3 vVar15;
	float fVar16;
	vector3 vVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	vector3 vVar22;
	vector3 vVar23;
	float fVar24;
	float fVar25;
	var uVar26;
	var uVar27;
	vector3 vVar28;
	
	if ((unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000001) || func_176()) || func_27())
	{
		return;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 0x00000001;
			fVar4 = unk_0xCE563465D2227DD6(unk_0x09AD4CE7DA179533(Local_85.f_79));
			fVar5 = unk_0x81FFFF2E58A35803(unk_0x09AD4CE7DA179533(Local_85.f_79));
			if (func_17())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * SYSTEM::TIMESTEP());
			func_236();
			unk_0xA2E3EDD0E119882F(0x00000002);
			func_235(&(Local_85[0x00000000]), &(Local_85[0x00000001]), &(Local_85[0x00000002]), &(Local_85[0x00000003]), 0x00000000, 0x00000000);
			if (unk_0x91E3F625EF57450D(0x00000000))
			{
				iVar3 = 0x00000005;
				Local_85[0x00000002] = (Local_85[0x00000002] * iVar3);
				Local_85[0x00000003] = (Local_85[0x00000003] * iVar3);
			}
			if (unk_0x89DF0B812BA6383B())
			{
				Local_85[0x00000003] = (Local_85[0x00000003] * 0xFFFFFFFF);
			}
			if (func_7(&(Local_85.f_CE), 0x000002EE, 0x00000000))
			{
				if (!unk_0x91E3F625EF57450D(0x00000000))
				{
					bVar7 = unk_0xD245978525608929(0x00000000, 0x000000D2);
				}
				else
				{
					bVar7 = (unk_0xD245978525608929(0x00000000, 0x000000F1) || unk_0xD245978525608929(0x00000000, 0x000000F2));
					if (unk_0xD245978525608929(0x00000000, 0x000000F1))
					{
						bVar8 = 0x00000001;
					}
				}
				if (bVar7)
				{
					func_186(&(Local_85.f_CE), 0x00000000, 0x00000000);
				}
			}
			if (bVar7 && !func_234())
			{
				if (!unk_0x91E3F625EF57450D(0x00000000))
				{
					Local_85.f_18++;
				}
				else if (bVar8)
				{
					Local_85.f_18 = (Local_85.f_18 - 0x00000001);
				}
				else
				{
					Local_85.f_18++;
				}
				if (unk_0x8AA6DC470ABA63A2(Local_85.f_26))
				{
					Local_85.f_26 = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(Local_85.f_26, "HUD_Zoom_Change", Local_85.f_77, 0x00000001);
				}
				if (Local_85.f_18 > 0x00000002)
				{
					Local_85.f_18 = 0x00000000;
				}
				else if (Local_85.f_18 < 0x00000000)
				{
					Local_85.f_18 = 0x00000002;
				}
			}
			else if (unk_0x8AA6DC470ABA63A2(Local_85.f_26))
			{
				unk_0x55D0A2DB35045A35(Local_85.f_26);
				unk_0x43A06902454A1172(Local_85.f_26);
				Local_85.f_26 = 0xFFFFFFFF;
			}
			Local_85.f_5B = (Local_85.f_5B + (((Local_85.f_59 - Local_85.f_5B) * 0.06f) * fVar6));
			unk_0x5818C8D5303DCCF8(Local_85.f_83, Local_85.f_5B);
			if (Local_85[0x00000002] != 0x00000000 || Local_85[0x00000003] != 0x00000000)
			{
				if (Local_85[0x00000002] != 0x00000000)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_85[0x00000002])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_85[0x00000003] != 0x00000000)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_85[0x00000003])));
				}
				else
				{
					fVar10 = 0f;
				}
				vVar14 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000002) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_85.f_5D);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_85.f_5D);
				if ((fVar4 != 0f || Local_85[0x00000000] != 0x00000000) && !func_60())
				{
					if (Local_85[0x00000000] != 0x00000000)
					{
						fVar16 = (1f / (127f / IntToFloat(Local_85[0x00000000])));
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar16 = -1f;
							}
							else
							{
								fVar16 = 1f;
							}
						}
						if (vVar14.y != 0f)
						{
							if (vVar14.y < 1.5f && vVar14.y > 0f)
							{
								fVar16 = 0.001f;
							}
							else if (vVar14.y > -1.5f && vVar14.y < 0f)
							{
								fVar16 = -0.001f;
							}
						}
						else
						{
							fVar16 = 0f;
						}
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				vVar15 = { Vector(fVar12, fVar13, fVar11) + vVar14 };
				if (fVar4 != 0f)
				{
					if (Local_85[0x00000000] == 0x00000000)
					{
						if (vVar15.y > fVar1)
						{
							vVar15.y = fVar1;
						}
						else if (vVar15.y < -fVar1)
						{
							vVar15.y = -fVar1;
						}
					}
					else if (vVar15.y > fVar1)
					{
						vVar15.y = fVar1;
					}
					else if (vVar15.y < -fVar1)
					{
						vVar15.y = -fVar1;
					}
				}
				if (vVar15.x > fVar2)
				{
					vVar15.x = fVar2;
				}
				else if (vVar15.x < -fVar2)
				{
					vVar15.x = -fVar2;
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000C))
				{
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000000C);
				}
				unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar15.z, vVar15.y, vVar15.x), 0x00000002, 0x00000001);
			}
			else if (((Local_85[0x00000000] != 0x00000000 || Local_85[0x00000001] != 0x00000000) && !func_234()) && !func_60())
			{
				vVar17 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000002) };
				if (func_234())
				{
					if (func_233())
					{
						fVar19 = -1f;
						Local_85.f_5C = fVar19;
					}
				}
				else
				{
					if (Local_85[0x00000000] != 0x00000000)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_85[0x00000000])));
						Local_85.f_5C = fVar18;
					}
					else
					{
						fVar18 = 0f;
					}
					if (Local_85[0x00000001] != 0x00000000)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_85[0x00000001])));
						Local_85.f_5C = fVar18;
					}
					else
					{
						fVar19 = 0f;
					}
				}
				fVar20 = -(((fVar19 * 0.05f) * fVar6) * fVar0);
				fVar21 = -(((fVar18 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_85[0x00000000] == 0x00000000 && !func_60()) || func_234())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar18 = -1f;
							}
							else
							{
								fVar18 = 1f;
							}
						}
						if (vVar17.y < 1.5f && vVar17.y > 0f)
						{
							fVar18 = 0.001f;
						}
						else if (vVar17.y > -1.5f && vVar17.y < 0f)
						{
							fVar18 = -0.001f;
						}
						fVar21 = -(((fVar18 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				vVar22 = { Vector(0f, fVar21, fVar20) + vVar17 };
				if (vVar22.y > fVar1)
				{
					vVar22.y = fVar1;
				}
				else if (vVar22.y < -fVar1)
				{
					vVar22.y = -fVar1;
				}
				if (vVar22.x > fVar2)
				{
					vVar22.x = fVar2;
				}
				else if (vVar22.x < -fVar2)
				{
					vVar22.x = -fVar2;
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000C))
				{
					unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000000C);
				}
				unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar17.z, vVar22.y, vVar22.x), 0x00000002, 0x00000001);
			}
			else if (!func_233() && !func_234())
			{
				Local_85.f_5C = 0f;
				vVar23 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000002) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (vVar23.y != 0f)
					{
						if (vVar23.y < 0f)
						{
							fVar24 = -1f;
						}
						else
						{
							fVar24 = 1f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (vVar23.x < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (vVar23.y != 0f)
					{
						if (vVar23.y < 1.5f && vVar23.y > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (vVar23.y > -1.5f && vVar23.y < 0f)
						{
							fVar24 = -0.001f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (vVar23.x != 0f)
					{
						if (vVar23.x < 1.5f && vVar23.x > 0f)
						{
							fVar25 = 0.001f;
						}
						else if (vVar23.x > -1.5f && vVar23.x < 0f)
						{
							fVar25 = -0.001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					uVar26 = func_232(-(((fVar25 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar27 = func_232(-(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f)));
					vVar28 = { Vector(0f, uVar27, uVar26) + vVar23 };
					if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000C))
					{
						vVar28.x = vVar23.x;
					}
					unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar23.z, vVar28.y, vVar28.x), 0x00000002, 0x00000001);
				}
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

void func_238()
{
	int iVar0;
	int iVar1;
	
	if (func_53(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		iVar0 = func_162(0x00000000);
		Local_85.f_67 = { func_241(&Local_85) };
		if (!unk_0xC844350D5D58C99A(Local_85.f_7C))
		{
			if (!func_240(Local_85.f_67))
			{
				if (func_161(iVar0))
				{
					Local_85.f_7C = unk_0x7707E48765093646(iVar0, Local_85.f_67, 0x00000000, 0x00000000, 0x00000001);
					unk_0x08841CDB215AE18F(Local_85.f_7C, Local_85.f_67, 0x00000000, 0x00000000, 0x00000001);
					unk_0x20641932E5104B25(Local_85.f_7C, 0x00000001, 0x00000000);
					unk_0xE8832A9E16A57A1F(Local_85.f_7C, 0x00000001, 0x00000001);
					unk_0xD0C5FAC38659B26F(Local_85.f_7C, 0x00000001);
					unk_0xD8F6A53F4799FAFE(Local_85.f_7C, func_239());
					unk_0x1E9649458B15960F(Local_85.f_7C, 0x00000001);
					unk_0x4A4806F9D471E491(Local_85.f_7C, 0x00000000, 0x00000000);
					unk_0x71199B01895C6202(iVar0);
				}
			}
		}
		else
		{
			iVar1 = unk_0x4B72871A3BE7B474(Local_85.f_67, 2f, iVar0, 0x00000000, 0x00000000, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar1) && iVar1 != Local_85.f_7C)
			{
				if (unk_0xAFE0D3608EDA7039(iVar1))
				{
					unk_0xCDCD90141EA7E6EE(iVar1, 0x00000000, 0x00000000);
					unk_0x1E9649458B15960F(iVar1, 0x00000001);
					unk_0x4A4806F9D471E491(iVar1, 0x00000001, 0x00000000);
				}
				else
				{
					unk_0x0C8A454B494DAA0D(iVar1);
				}
			}
		}
	}
	else
	{
		Local_85.f_67 = { func_241(&Local_85) };
	}
}

float func_239()
{
	if (Global_19C087.f_7 != 0f)
	{
		return Global_19C087.f_7;
	}
	return 0f;
}

int func_240(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_241(var uParam0)
{
	if (!func_240(Global_19C087.f_A))
	{
		return Global_19C087.f_A;
	}
	else
	{
		return uParam0->f_67;
	}
	return 0f, 0f, 0f;
}

void func_242()
{
	if (Local_85.f_20 != 0xFFFFFFFF)
	{
		unk_0x55D0A2DB35045A35(Local_85.f_20);
		unk_0x43A06902454A1172(Local_85.f_20);
		Local_85.f_20 = 0xFFFFFFFF;
	}
}

int func_243()
{
	if (unk_0x798A3F1296751F46() || unk_0x590766B2AF637235())
	{
		return 0x00000001;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 0x00000001;
	}
	if (func_155())
	{
		return 0x00000001;
	}
	if (func_248(unk_0xD803B885F5E47A62()) && !func_247())
	{
		return 0x00000001;
	}
	if (func_147(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B199, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (Global_195C36 || Global_140817)
	{
		func_246(0x00000001);
		return 0x00000001;
	}
	if ((func_244(0x00000000) || func_152(0x00000001)) || func_151())
	{
		func_54(0x00000000);
		func_63();
		func_81();
		return 0x00000001;
	}
	return 0x00000000;
}

int func_244(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_245(unk_0x16F2683693E537C9()))
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

int func_245(int iParam0)
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

void func_246(bool bParam0)
{
	if (bParam0)
	{
		if (!func_28())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000014);
		}
	}
	else if (func_28())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000014);
	}
}

bool func_247()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 0x0000000C) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000000));
}

int func_248(int iParam0)
{
	if (func_94(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_249())
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

bool func_249()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

void func_250()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_27())
	{
		return;
	}
	if (func_229())
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
		{
			if (!unk_0xE4EDC4B0E92C078B(Local_85.f_85))
			{
				Local_85.f_85 = func_264(Local_85.f_70, 0x00000000);
				unk_0xBC8E0A7390523199(Local_85.f_85, 0x00000273);
				if (func_17() && !unk_0xE4EDC4B0E92C078B(Local_85.f_86))
				{
					Local_85.f_86 = func_261(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					unk_0xBC8E0A7390523199(Local_85.f_86, 0x00000006);
					unk_0xF2D30B8ACAF12A39(Local_85.f_86, 0x00000000);
					unk_0x516E63E474722206(Local_85.f_86, 0.7f);
					unk_0x2A065371C9D96655(Local_85.f_86, (0x0000000D - 0x00000001));
					if (func_258(unk_0xD803B885F5E47A62()) != 0xFFFFFFFF)
					{
						func_254(&(Local_85.f_86), func_256(func_258(unk_0xD803B885F5E47A62())));
					}
					else
					{
						func_254(&(Local_85.f_86), func_253());
					}
					unk_0x54B31D18C3F36EB7(Local_85.f_86, 0x00000001);
				}
			}
			else
			{
				fVar0 = func_252(Local_85.f_57);
				fVar1 = Local_85.f_70;
				fVar2 = Local_85.f_70.f_1;
				unk_0x9D7CDDB4B55142AF(Local_85.f_85, 0x00000002);
				unk_0x2F9282246F89FFD1(Local_85.f_85, Local_85.f_70);
				if (((func_9() || func_29()) && unk_0x798A3F1296751F46()) && unk_0xA14BB9332558B949())
				{
					if (!unk_0x91707EC961984BF8())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						unk_0x2F9282246F89FFD1(Local_85.f_85, fVar1, fVar2, 0f);
						unk_0x6857CFBD47C253B6(fVar1, fVar2);
						unk_0xB243B37593BB6C38();
					}
				}
				unk_0xDB111A9E05F41582(fVar1, fVar2);
				unk_0x436F3596830D7DC3(Local_85.f_85, SYSTEM::ROUND(fVar0));
				unk_0x516E63E474722206(Local_85.f_85, 1f);
				unk_0x2A065371C9D96655(Local_85.f_85, 0x00000009);
				unk_0x3B05E4399DC8490C(SYSTEM::ROUND(fVar0));
				if (unk_0xE4EDC4B0E92C078B(Local_85.f_86))
				{
					unk_0x436F3596830D7DC3(Local_85.f_86, func_251(unk_0x16F2683693E537C9()));
				}
			}
		}
	}
}

int func_251(int iParam0)
{
	float fVar0;
	
	fVar0 = unk_0x085953070423354C(iParam0);
	return SYSTEM::ROUND(fVar0);
}

float func_252(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_253()
{
	return 0x0000000A;
}

void func_254(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		iVar0 = func_255(iParam1);
		unk_0x61755AC17D8F538E(*uParam0, iVar0);
	}
}

int func_255(int iParam0)
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

int func_256(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_257(iParam0);
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

var func_257(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_258(int iParam0)
{
	if (!iParam0 == func_16())
	{
		if (func_259(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_191(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

bool func_259(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_260(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_16();
}

int func_260(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_16())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_261(int iParam0, bool bParam1, bool bParam2)
{
	return func_262(iParam0, !bParam1, bParam2);
}

int func_262(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_263(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_263(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_263(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_263(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_264(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_263(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

void func_265()
{
	if (func_27())
	{
		if (Local_85.f_70.f_2 >= (func_139() - 20f))
		{
			if (unk_0x8AA6DC470ABA63A2(Local_85.f_24))
			{
				Local_85.f_24 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(Local_85.f_24, "Out_Of_Bounds_Alarm_Loop", Local_85.f_77, 0x00000001);
			}
		}
		else if (!unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			unk_0x55D0A2DB35045A35(Local_85.f_24);
			unk_0x43A06902454A1172(Local_85.f_24);
			Local_85.f_24 = 0xFFFFFFFF;
		}
	}
}

void func_266()
{
	if (((func_29() || func_119()) || func_17()) || func_142())
	{
		switch (Local_85.f_AB)
		{
			case 0x00000000:
				func_289();
				break;
			
			case 0x00000001:
				func_276();
				break;
			
			case 0x00000002:
				func_274();
				break;
			
			case 0x00000003:
				func_267();
				break;
			}
	}
}

void func_267()
{
	func_55(0x00000001);
	if (!func_273())
	{
		unk_0x82E51BCA72537B6C(0x000001F4);
	}
	func_271(0x00000000);
	func_269(0x00000000);
	func_268(0x00000000);
}

void func_268(int iParam0)
{
	if (Local_85.f_AB != iParam0)
	{
		Local_85.f_AB = iParam0;
	}
}

void func_269(bool bParam0)
{
	if (bParam0)
	{
		if (!func_270())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000011);
		}
	}
	else if (func_270())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000011);
	}
}

bool func_270()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000011);
}

void func_271(bool bParam0)
{
	if (bParam0)
	{
		if (!func_272())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000012);
		}
	}
	else if (func_272())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000012);
	}
}

bool func_272()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000012);
}

bool func_273()
{
	return Global_199459.f_1DA;
}

void func_274()
{
	if (func_272() || unk_0x798A3F1296751F46())
	{
		func_55(0x00000001);
		func_275(0x00000000);
		unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000010);
		func_268(0x00000003);
	}
}

void func_275(bool bParam0)
{
	if (bParam0)
	{
		if (!func_60())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000013);
		}
	}
	else if (func_60())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000013);
	}
}

void func_276()
{
	if (unk_0x757EF87A33649210())
	{
		if (func_7(&(Local_85.f_C4), 0x00000BB8, 0x00000000))
		{
			if (func_288())
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002) || func_7(&(Local_85.f_C8), 0x00001F40, 0x00000000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
					{
					}
					unk_0x82E51BCA72537B6C(0x000001F4);
					func_277(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
					func_6(&(Local_85.f_C4));
					func_6(&(Local_85.f_C8));
					func_268(0x00000002);
				}
			}
			else if (func_7(&(Local_85.f_C8), 0x00003A98, 0x00000000))
			{
				func_6(&(Local_85.f_C4));
				func_6(&(Local_85.f_C8));
				func_55(0x00000001);
				func_275(0x00000000);
				unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000010);
				func_268(0x00000003);
			}
		}
	}
}

void func_277(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_287())
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
		if (!func_285())
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
				else if (bVar14 || (!func_94(unk_0xD803B885F5E47A62(), 0x00000000) && !func_249()))
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
					func_282(0x00000000, 0x00000000, 0x00000000);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_281(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_280();
					func_279();
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
				if (!func_281(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_278(Global_440000.f_38DB3))
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

bool func_278(int iParam0)
{
	return iParam0 == 0x00000011;
}

void func_279()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_280()
{
	Global_24B2D0.f_2B6 = 0x00000000;
	Global_24B2D0.f_AA6 = 0x00000000;
	Global_24B2D0.f_200 = 0x00000000;
	Global_24B2D0.f_258 = 0x00000000;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0x00000000;
	Global_24B2D0.f_A79 = 0x00000000;
}

int func_281(int iParam0)
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

void func_282(bool bParam0, int iParam1, int iParam2)
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
				func_284();
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
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 0x00000001);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_283(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_283(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 0x00000001);
	}
}

void func_284()
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

int func_285()
{
	if (func_286() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_286()
{
	return Global_1406D3.f_12;
}

int func_287()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_288()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_289()
{
	if (func_307())
	{
		if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9) || unk_0x9A01369A10646AFE(0x00000002, 0x000000C9))
		{
			if (!func_288())
			{
				if (unk_0x0F1CCD77290EE12F())
				{
					func_275(0x00000001);
					func_105(0xFFFFFFFF);
					func_277(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000200, 0x00000000);
					unk_0x53491B90E4FD0E56(0x000001F4);
					func_305(0x00000001, 0xFFFFFFFF);
					func_290(0x00000003, 0x00000001, 0x00000001, 0x00000000);
					func_8(&(Local_85.f_C4), 0x00000000, 0x00000000);
					func_8(&(Local_85.f_C8), 0x00000000, 0x00000000);
					func_268(0x00000001);
				}
			}
		}
	}
}

int func_290(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_12B4E)
	{
		if ((iParam0 != 0x00000011 && iParam0 != 0x00000003) && iParam0 != 0x00000017)
		{
			return 0x00000000;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000E))
		{
			if (iParam0 == 0x00000011)
			{
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000E);
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000010);
			}
			if (iParam0 == 0x00000003)
			{
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000E);
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000F);
			}
			if (iParam0 == 0x00000017)
			{
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000E);
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000001B);
			}
		}
		if (Global_1CC3[iParam0 /*15*/].f_9 == 0x00000000)
		{
			func_302();
		}
		if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) > 0x00000000)
		{
			unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000E);
			unk_0x0674E58A79778E99(&Global_4126C5, 0x00000010);
			unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000F);
			unk_0x0674E58A79778E99(&Global_4126C5, 0x0000001B);
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	func_295();
	if (Global_4C1E.f_1 == 0x00000009)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000000)
	{
		if (func_59(0x00000000) == 0x00000001)
		{
			return 0x00000000;
		}
	}
	if (Global_4BFC == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_4C1E.f_1 == 0x00000007)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000001)
	{
	}
	if (!unk_0x1727A44C562FBED2(Global_4C1B))
	{
		if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
		{
			if (Global_4C1E.f_1 < 0x00000004)
			{
				func_294("cellphone_flashhand");
				if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
				{
					Global_4C1B = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 0x00000590);
				}
				unk_0x5E8C29AE121DF1C7("cellphone_flashhand");
			}
		}
	}
	while (!Global_4C0C)
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_302();
	func_291();
	if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) == 0x00000000)
	{
		Global_1F1A = 0x00000000;
		Global_4C1E.f_1 = 0x00000007;
		func_294(&(Global_1CC3[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) == 0x00000000)
			{
				Global_4C1C = SYSTEM::START_NEW_SCRIPT(&(Global_1CC3[iParam0 /*15*/].f_5), 0x00000FA0);
			}
		}
		else if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) == 0x00000000)
		{
			Global_4C1C = SYSTEM::START_NEW_SCRIPT(&(Global_1CC3[iParam0 /*15*/].f_5), 0x000009F8);
		}
		unk_0x5E8C29AE121DF1C7(&(Global_1CC3[iParam0 /*15*/].f_5));
		return 0x00000001;
	}
	return 0x00000001;
}

void func_291()
{
	if (Global_12B4E == 0x00000000)
	{
		Global_1CC3[0x0000000E /*15*/].f_4 = 0xFFFFFF9D;
		Global_1CC3[0x00000004 /*15*/].f_4 = 0xFFFFFF9D;
		if (Global_258C03)
		{
			if (func_293(0x0000000E))
			{
				func_292(0x00000002, "CELL_2", 0x00000002, "appInternet", 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_292(0x0000000E, "CELL_29", 0x00000007, "appMPJobListNEW", 0x0000000C, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else
			{
				func_292(0x0000000E, "CELL_29", 0x00000002, "appMPJobListNEW", 0x0000000C, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
		}
		else
		{
			func_292(0x00000004, "CELL_23", 0x00000002, "appChecklist", 0x00000027, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
	}
}

void func_292(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_1CC3[iParam0 /*15*/]), sParam1, 16);
	Global_1CC3[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_1CC3[iParam0 /*15*/].f_5), sParam3, 16);
	Global_1CC3[iParam0 /*15*/].f_9 = unk_0x12AB0310C2281427(sParam3);
	Global_1CC3[iParam0 /*15*/].f_A = iParam4;
	Global_1CC3[iParam0 /*15*/].f_B = iParam5;
	Global_1CC3[iParam0 /*15*/].f_C = iParam6;
	Global_1CC3[iParam0 /*15*/].f_D = iParam7;
	Global_1CC3[iParam0 /*15*/].f_E = iParam8;
	if (Global_1CC3[iParam0 /*15*/].f_C == 0x00000000)
	{
		Global_1CC3[iParam0 /*15*/].f_C = 0x00000000;
	}
	if (Global_1CC3[iParam0 /*15*/].f_D == 0x00000000)
	{
		Global_1CC3[iParam0 /*15*/].f_D = 0x00000000;
	}
	if (Global_1CC3[iParam0 /*15*/].f_E == 0x00000000)
	{
		Global_1CC3[iParam0 /*15*/].f_E = 0x00000000;
	}
}

bool func_293(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_294(char* sParam0)
{
	unk_0x92DCE5C81176D2B4(sParam0);
	while (!unk_0x1FBF08B001C4788A(sParam0))
	{
		SYSTEM::WAIT(0x00000000);
	}
}

void func_295()
{
	if (func_293(0x0000000E))
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
		Global_4C1E = func_296();
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

var func_296()
{
	func_297();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_297()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_300(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_299(unk_0x16F2683693E537C9());
			if (func_298(iVar0) && (!func_293(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_298(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_298(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_300(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_300(int iParam0)
{
	if (func_298(iParam0))
	{
		return func_301(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_301(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_302()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000022)
	{
		Global_1CC3[iVar0 /*15*/].f_4 = 0xFFFFFF9D;
		iVar0++;
	}
	if (Global_12B4E == 0x00000000)
	{
		iVar1 = 0x00000000;
		while (iVar2 < 0x000000A1)
		{
			if (func_304(iVar2, Global_4C1E) == 0x00000001)
			{
				iVar1 = 0x00000001;
			}
			iVar2++;
		}
		func_292(0x00000007, "CELL_5", 0x00000000, "appEmail", 0x00000004, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000001, "CELL_1", 0x00000001, "appTextMessage", 0x00000002, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000004, "CELL_23", 0x00000002, "appChecklist", 0x00000027, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		if ((Global_A1D7 == 0x0000000F && func_303(0x00000000) == 0x00000000) && Global_1CC1 == 0x00000000)
		{
			func_292(0x00000014, "CELL_32", 0x00000003, "appSettings", 0x0000002B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			Global_4CD3 = 0x00000000;
			Global_1CC2 = 0x000000FF;
		}
		else
		{
			func_292(0x00000014, "CELL_32", 0x00000003, "appSettings", 0x0000002B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			Global_4CD3 = 0x00000001;
			Global_1CC2 = 0x0000002A;
		}
		if (iVar1 == 0x00000001)
		{
			func_292(0x00000000, "CELL_0", 0x00000004, "appContacts", 0x0000001B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		else
		{
			func_292(0x00000000, "CELL_0", 0x00000004, "appContacts", 0x00000005, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		func_292(0x0000000A, "CELL_16", 0x00000005, "appSettings", 0x00000018, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000003, "CELL_7", 0x00000006, "appCamera", 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000002, "CELL_2", 0x00000007, "appInternet", 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		if (Global_1B416.f_36DE.f_59 == 0x00000001)
		{
			func_292(0x00000011, "CELL_28", 0x00000008, "appTrackify", 0x0000002A, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		if (Global_1B416.f_36DE.f_58 == 0x00000001)
		{
			func_292(0x00000010, "CELL_25", 0x00000000, "appContacts", 0x00000028, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		}
		func_292(0x00000019, "CELL_14", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000009, "CELL_13", 0xFFFFFF9D, "appContacts", 0x0000000D, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000000B, "CELL_14", 0xFFFFFF9D, "appContacts", 0x00000008, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000001B, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000001C, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000001D, "CELL_15", 0xFFFFFF9D, "appSettings", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000001E, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000001F, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000020, "CELL_15", 0xFFFFFF9D, "appSettings", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
	}
	else
	{
		func_292(0x00000007, "CELL_5", 0x00000000, "appMPEmail", 0x00000004, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000000A, "CELL_16", 0x00000005, "appSettings", 0x00000018, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000001, "CELL_1", 0x00000001, "appTextMessage", 0x00000002, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000003, "CELL_7", 0x00000006, "appCamera", 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000002, "CELL_2", 0x00000007, "appInternet", 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000000E, "CELL_29", 0x00000004, "appMPJobListNEW", 0x0000000C, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000000, "CELL_0", 0x00000002, "appContacts", 0x00000005, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000015, "JIPMP_QJ", 0x00000003, "AppJIPMP", 0x0000000E, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000004) == 0x00000001)
		{
			func_292(0x00000011, "CELL_28", 0x00000008, "appTrackify", 0x0000002A, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		func_292(0x0000000D, "CELL_35", 0xFFFFFF9D, "appMPCopBackup", 0x00000027, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000000D, "CELL_20", 0xFFFFFF9D, "appMPCopBackup", 0x00000010, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000000F, "CELL_18", 0xFFFFFF9D, "appContacts", 0x00000008, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000009, "CELL_13", 0xFFFFFF9D, "appContacts", 0x0000000D, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000005, "CELL_4", 0xFFFFFF9D, "appContacts", 0x0000000C, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000017, "CELL_15", 0x00000000, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000018, "CELL_15", 0x00000001, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000019, "CELL_15", 0x00000002, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000001A, "CELL_15", 0x00000003, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000001B, "CELL_15", 0x00000004, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000001C, "CELL_15", 0x00000005, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000001D, "CELL_15", 0x00000006, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000001E, "CELL_15", 0x00000007, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x0000001F, "CELL_15", 0x00000008, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000020, "CELL_15", 0x00000009, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_292(0x00000021, "CELL_15", 0x0000000A, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000004) == 0x00000001)
		{
			if (Global_180426)
			{
				func_292(0x00000017, "CELL_CIRCBREAK", 0x00000008, "AppVLSI", 0x00000036, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000014) == 0x00000001)
			{
				func_292(0x00000017, "CELL_SIGHTS", 0x00000008, "AppSettings", 0x0000003B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000016) == 0x00000001)
			{
				func_292(0x00000017, "CELL_EXTRACT", 0x00000008, "AppExtraction", 0x0000003A, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000001A) == 0x00000001)
			{
				func_292(0x00000017, "CELL_SECHACK", 0x00000008, "AppSecuroHack", 0x00000039, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
		}
		if ((((unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000004) == 0x00000000 && Global_180426 == 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000014) == 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000016) == 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000001A) == 0x00000000)
		{
			func_292(0x00000017, "CELL_BOSSAGE", 0x00000008, "appMPBossAgency", 0x00000039, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
	}
}

bool func_303(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_304(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_13[iParam1];
}

void func_305(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_102(&iVar0, 0x00000000, iParam1))
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
		func_306(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
}

void func_306(int iParam0)
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

int func_307()
{
	if (func_60())
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if ((func_152(0x00000000) || func_151()) || unk_0x192DA571D9133D23())
	{
		func_6(&(Local_85.f_CC));
		func_8(&(Local_85.f_CC), 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000010);
		func_81();
		return 0x00000000;
	}
	else if (func_10(&(Local_85.f_CC)))
	{
		if (!func_7(&(Local_85.f_CC), 0x000007D0, 0x00000000))
		{
			return 0x00000000;
		}
		else
		{
			unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000010);
			func_6(&(Local_85.f_CC));
		}
	}
	if (func_147(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_308()
{
	if (func_309())
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
		{
			if (unk_0x526BC32A660C89E6(Local_85.f_79))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000019))
				{
					unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000001);
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000019);
				}
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_85.f_79);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000019))
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
		{
			if (unk_0x526BC32A660C89E6(Local_85.f_79))
			{
				unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000);
				unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000019);
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_85.f_79);
			}
		}
	}
}

int func_309()
{
	if (func_147(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B199, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_310()
{
	int iVar0;
	
	if (func_27())
	{
		Global_19C087.f_1 = 0x00000000;
	}
	if (func_314() || func_176())
	{
		if (!func_10(&(Local_85.f_B0)))
		{
			func_8(&(Local_85.f_B0), 0x00000000, 0x00000000);
		}
		else if (func_7(&(Local_85.f_B0), Global_19C087.f_1, 0x00000000) || func_176())
		{
			func_6(&(Local_85.f_AE));
			if (func_27())
			{
				if (func_25(unk_0x16F2683693E537C9()))
				{
					unk_0xA2FC3824D7AFA946(unk_0x16F2683693E537C9(), Local_85.f_70, 0x00000048, 0.5f, 0x00000001, 0x00000000, 0x3F800000);
				}
				else
				{
					unk_0xDA55CDFB97015579(Local_85.f_70, 0x00000048, 0.5f, 0x00000001, 0x00000000, 0x3F800000, 0x00000000);
				}
				unk_0x5E858A00EAFA5B24(0x00000000, 0x0000012C, 0x000000C8);
				unk_0x866EE3B81CEF363A(Local_85.f_79, 0x00000001);
				unk_0x066C43E677C08D5C();
				iVar0 = unk_0x09AD4CE7DA179533(Local_85.f_79);
				unk_0xF690C84DADBB3551(&iVar0);
				unk_0x5D96D8530B3D0904(&(Local_85.f_6), 0x00000002);
			}
			if (func_18())
			{
				func_313(0x00000001);
				if (Local_85.f_19 == 0x00000000)
				{
					func_311(0x00000006, 0x00000000, 0x00000000);
				}
				else
				{
					func_311(0x00000005, 0x00000000, 0x00000000);
				}
			}
			func_357(0x00000001);
			func_356(0x00000004);
		}
	}
	else if (func_10(&(Local_85.f_B0)))
	{
		func_186(&(Local_85.f_B0), 0x00000000, 0x00000000);
	}
}

void func_311(int iParam0, bool bParam1, bool bParam2)
{
	char cVar0[64];
	int iVar1;
	float fVar2;
	float fVar3;
	
	StringCopy(&cVar0, func_312(iParam0), 64);
	iVar1 = 0x00000005;
	if (bParam1)
	{
		iVar1 = 0x00000045;
	}
	fVar2 = 8f;
	fVar3 = -8f;
	Local_85.f_4E = unk_0xF66E5A439A080021(Local_85.f_73, 0f, 0f, Local_85.f_51, 0x00000002, bParam2, bParam1, 0x3F800000, 0x00000000, 0x3F800000);
	unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_85.f_4E, Local_85.f_78, &cVar0, fVar2, fVar3, iVar1, 0x00000000, 0x447A0000, 0x00000000);
	if (iParam0 == 0x00000000)
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			unk_0xF50FD289C7836651(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), Local_85.f_4E, Local_85.f_78, &cVar0, fVar2, fVar3, 0x00000008);
		}
	}
	StringCopy(&cVar0, func_312(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (unk_0xE5DBF9B6126856CA(Local_85.f_7A))
	{
		unk_0xD65E6E13E145467B(unk_0xA5FBBC2F619A4DE2(Local_85.f_7A), &cVar0, Local_85.f_78, fVar2, bParam1, bParam2, 0x00000000, 0f, 0x00000000);
		unk_0x295ACC5727E47CB7(unk_0xA5FBBC2F619A4DE2(Local_85.f_7A));
	}
	unk_0x914E6894744915F8(Local_85.f_4E);
}

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "ENTER";
		
		case 0x00000001:
			return "BASE";
		
		case 0x00000002:
			return "USE_01";
		
		case 0x00000003:
			return "USE_02";
		
		case 0x00000004:
			return "USE_03";
		
		case 0x00000005:
			return "FAIL";
		
		case 0x00000006:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_313(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xF958843510932FF6(iVar0);
	if (unk_0x69DF961355195C3C(iVar0))
	{
		unk_0xB46854F2D1C7DFA9(iVar0);
		unk_0x45934E8E3471AAA9(iVar0);
		iVar0 = 0xFFFFFFFF;
	}
	else if (bParam0)
	{
		if (func_25(unk_0x16F2683693E537C9()))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		}
	}
}

int func_314()
{
	if ((unk_0xE5DBF9B6126856CA(Local_85.f_79) && unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000002))
	{
		return 0x00000001;
	}
	if (Local_85.f_B == 0x00000002)
	{
		Local_85.f_19 = 0x00000001;
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000001))
	{
		return 0x00000001;
	}
	if (func_323())
	{
		Local_85.f_19 = 0x00000005;
		return 0x00000001;
	}
	if (func_119() && func_316())
	{
		Local_85.f_19 = 0x00000005;
		return 0x00000001;
	}
	if (func_18())
	{
		if (func_316())
		{
			Local_85.f_19 = 0x00000005;
			return 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000002))
	{
		Local_85.f_19 = 0x00000004;
		return 0x00000001;
	}
	if (func_159())
	{
		if (!func_10(&(Local_85.f_B8)))
		{
			func_8(&(Local_85.f_B8), 0x00000000, 0x00000000);
		}
		else if (func_7(&(Local_85.f_B8), 0x00000BB8, 0x00000000))
		{
			Local_85.f_19 = 0x00000000;
			return 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000007))
	{
		Local_85.f_19 = 0x00000000;
		return 0x00000001;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x70EED0761B82965E(unk_0x09AD4CE7DA179533(Local_85.f_79)) || func_183(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 0x00000000))
		{
			Local_85.f_19 = 0x00000003;
			return 0x00000001;
		}
	}
	if (!func_119() && !func_315())
	{
		if (Local_85.f_70.f_2 >= func_139())
		{
			Local_85.f_19 = 0x00000005;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_315()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000000);
}

int func_316()
{
	vector3 vVar0;
	int iVar1;
	
	if (func_322())
	{
		return 0x00000000;
	}
	if (func_15(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
		{
			if (func_119())
			{
				if (unk_0xC844350D5D58C99A(func_321()) && !unk_0x437347B10A200C4B(func_321(), 0x00000000))
				{
					vVar0 = { unk_0x68F4C0EC296D3901(func_321(), 0x00000001) };
				}
			}
			else if (func_17())
			{
				if (!func_18())
				{
					iVar1 = func_317(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8);
					switch (iVar1)
					{
						case 0x00000080:
							vVar0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 0x00000081:
							vVar0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 0x00000082:
							vVar0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 0x00000083:
							vVar0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 0x00000084:
							vVar0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 0x00000085:
							vVar0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				}
			}
			else
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			}
			if (func_25(unk_0x09AD4CE7DA179533(Local_85.f_79)))
			{
				Local_85.f_53 = func_136(unk_0x09AD4CE7DA179533(Local_85.f_79), vVar0, 0x00000001);
				if (Local_85.f_53 > func_139())
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_317(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_16())
	{
		iVar0 = func_320(iParam0);
		if (iVar0 != 0x00000000)
		{
			return func_318(iVar0);
		}
	}
	return 0xFFFFFFFF;
}

int func_318(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_14(iVar0) == 0x00000011)
		{
			if (func_319(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000080:
			return 0x00000001;
		
		case 0x00000081:
			return 0x00000002;
		
		case 0x00000082:
			return 0x00000003;
		
		case 0x00000083:
			return 0x00000004;
		
		case 0x00000084:
			return 0x00000005;
		
		case 0x00000085:
			return 0x00000006;
		
		default:
	}
	return 0x00000000;
}

int func_320(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_189;
	}
	return 0x00000000;
}

int func_321()
{
	if (Global_18446E != func_16())
	{
		if (!func_37(Global_18446E))
		{
			if (unk_0xC844350D5D58C99A(Global_14E890))
			{
				return Global_14E890;
			}
			if (unk_0xC844350D5D58C99A(Global_19D964[Global_18446E]))
			{
				return Global_19D964[Global_18446E];
			}
		}
	}
	return 0xFFFFFFFF;
}

bool func_322()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000006);
}

int func_323()
{
	float fVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000))
	{
		if (unk_0xE82754C349C7B581(Local_85.f_70, &fVar0, 0x00000001, 0x00000000))
		{
			Local_85.f_54 = (Local_85.f_70.f_2 - fVar0);
			if (Local_85.f_54 > IntToFloat(Global_40001.f_5E55))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_324()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	
	if (!func_27())
	{
		return;
	}
	if ((unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000)) && unk_0x9F4FE516EAACCFC5(Local_85.f_83))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			vVar0 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000002) };
			vVar0 = { (vVar0.x + 180f), (-vVar0.y + 180f), vVar0.z };
			unk_0x5F3CBA6EB9341C90(Local_85.f_83, vVar0, 0x00000002);
			if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000001) || func_176())
			{
				return;
			}
			vVar1 = { func_327(func_328()) };
			vVar2 = { func_327(func_326(func_328())) };
			vVar3 = { func_325(vVar1, vVar2) };
			fVar4 = 5f;
			if (!unk_0x91E3F625EF57450D(0x00000000))
			{
				if (unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000D0) != 0f)
				{
					iVar5 = 0x00000001;
				}
				if (unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000CF) != 0f)
				{
					iVar6 = 0x00000001;
				}
			}
			else
			{
				if (unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000D1) != 0f)
				{
					iVar5 = 0x00000001;
				}
				if (unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000D2) != 0f)
				{
					iVar6 = 0x00000001;
				}
			}
			if (iVar5 && !func_243())
			{
				Local_85.f_52 = 140f;
				fVar4 = 7f;
			}
			else if (iVar6 && !func_243())
			{
				Local_85.f_52 = 60f;
				fVar4 = 3.5f;
			}
			else
			{
				Local_85.f_52 = 100f;
			}
			if (unk_0x91E3F625EF57450D(0x00000000))
			{
				if (Local_85[0x00000002] >= 0x0000007F)
				{
					Local_85[0x00000002] = 0x0000007F;
				}
				else if (Local_85[0x00000002] <= 0xFFFFFF81)
				{
					Local_85[0x00000002] = 0xFFFFFF81;
				}
				if (Local_85[0x00000000] >= 0x0000007F)
				{
					Local_85[0x00000000] = 0x0000007F;
				}
				else if (Local_85[0x00000000] <= 0xFFFFFF81)
				{
					Local_85[0x00000000] = 0xFFFFFF81;
				}
			}
			if (Local_85[0x00000002] > 0x00000000 || Local_85[0x00000000] > 0x00000000)
			{
				if (Local_85[0x00000002] > 0x00000000)
				{
					fVar7 = -(fVar4 / (127f / IntToFloat(Local_85[0x00000002])));
				}
				else
				{
					fVar7 = -(fVar4 / (127f / IntToFloat(Local_85[0x00000000])));
				}
				unk_0xDFC6BA855748EB10(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar3 * Vector(fVar7, fVar7, fVar7), 0f, -1.2f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar1 * Vector(-Local_85.f_52, -Local_85.f_52, -Local_85.f_52), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				unk_0xDFC6BA855748EB10(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0f, 0f, 1f, 0f, -1.2f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
			}
			else if (Local_85[0x00000002] < 0x00000000 || Local_85[0x00000000] < 0x00000000)
			{
				if (Local_85[0x00000000] < 0x00000000)
				{
					fVar8 = -(fVar4 / (127f / IntToFloat(Local_85[0x00000000])));
				}
				else
				{
					fVar8 = -(fVar4 / (127f / IntToFloat(Local_85[0x00000002])));
				}
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar1 * Vector(-Local_85.f_52, -Local_85.f_52, -Local_85.f_52), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				unk_0xDFC6BA855748EB10(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar3 * Vector(fVar8, fVar8, fVar8), 0f, -1.2f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
				unk_0xDFC6BA855748EB10(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0f, 0f, 1f, 0f, -1.2f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
			}
			else
			{
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar1 * Vector(-Local_85.f_52, -Local_85.f_52, -Local_85.f_52), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

Vector3 func_325(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

Vector3 func_326(struct<2> Param0, var uParam1)
{
	vector3 vVar0;
	
	vVar0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0) * SYSTEM::COS(Param0.f_1)) };
	return vVar0;
}

Vector3 func_327(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

Vector3 func_328()
{
	vector3 vVar0;
	
	vVar0 = { 0f, 1f, 0f };
	func_329(&vVar0);
	return vVar0;
}

void func_329(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

void func_330()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	vector3 vVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	
	if (func_27())
	{
		return;
	}
	if ((unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000)) && unk_0x9F4FE516EAACCFC5(Local_85.f_83))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			fVar0 = 0f;
			if (!func_29() && !func_9())
			{
				if (!func_234())
				{
					if (func_10(&(Local_85.f_B6)))
					{
						iVar1 = Global_40001.f_5E53;
						if (func_9())
						{
							iVar1 = (iVar1 / 0x00000003);
						}
						if (!func_7(&(Local_85.f_B6), iVar1, 0x00000000))
						{
							iVar2 = (0x00000064 * unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_B6)));
							Local_85.f_13 = (iVar2 / iVar1);
						}
						else
						{
							if (func_25(Local_85.f_7B))
							{
								unk_0x9F528B1B53FBC5D9(Local_85.f_7B, unk_0x09AD4CE7DA179533(Local_85.f_79), 0xFFFFFFFF, 0f, 0f, -0.25f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
							}
							Local_85.f_13 = 0x00000064;
							func_6(&(Local_85.f_B6));
							if (!unk_0x8AA6DC470ABA63A2(Local_85.f_2A))
							{
								unk_0x55D0A2DB35045A35(Local_85.f_2A);
								unk_0x43A06902454A1172(Local_85.f_2A);
								Local_85.f_2A = 0xFFFFFFFF;
							}
						}
					}
					if (!unk_0x91E3F625EF57450D(0x00000000))
					{
						bVar3 = unk_0xD245978525608929(0x00000000, 0x000000D1);
					}
					else
					{
						bVar3 = unk_0xD245978525608929(0x00000000, 0x000000CB);
					}
					if ((((bVar3 && Local_85.f_13 == 0x00000064) && !func_243()) && !func_60()) && func_143())
					{
						fVar0 = 120f;
						if (func_9())
						{
							fVar0 = 110f;
						}
						else if (func_17())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_85[0x00000001]) != 0f)
						{
							func_335(0x00000001);
						}
						else
						{
							func_335(0x00000000);
						}
						unk_0x82A772610883F395("RaceTurbo", 0x00000000, 0x00000000);
						func_8(&(Local_85.f_B4), 0x00000000, 0x00000000);
						func_334(0x00000001);
						if (unk_0x8AA6DC470ABA63A2(Local_85.f_29))
						{
							Local_85.f_29 = unk_0xD68EA767274B7444();
							unk_0x4D7F4CC43D4D0DE3(Local_85.f_29, "HUD_Boost_Loop", Local_85.f_77, 0x00000001);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_9())
					{
						fVar0 = 115f;
					}
					else if (func_17())
					{
						fVar0 = 49f;
					}
					if (unk_0x9F4FE516EAACCFC5(Local_85.f_83))
					{
						if (!unk_0xB3FFA20AEA3A2D9C(Local_85.f_83))
						{
							unk_0x91F5B0244AAE6222(Local_85.f_83, "DRONE_BOOST_SHAKE", 1f);
							unk_0x97271F6489B78F2D(Local_85.f_83, 0.15f);
						}
					}
					if (func_10(&(Local_85.f_B4)))
					{
						if (func_7(&(Local_85.f_B4), Global_40001.f_5E52, 0x00000000))
						{
							Local_85.f_13 = 0x00000000;
							func_335(0x00000000);
							func_334(0x00000000);
							func_6(&(Local_85.f_B6));
							func_8(&(Local_85.f_B6), 0x00000000, 0x00000000);
							unk_0x10486C0590CF176C(Local_85.f_83, 0x00000001);
							unk_0x0FB033EB6C6ED01F(0x00000000);
							unk_0x9A1335ECD7BD117F("RaceTurbo");
							func_6(&(Local_85.f_B4));
							if (!unk_0x8AA6DC470ABA63A2(Local_85.f_29))
							{
								unk_0x55D0A2DB35045A35(Local_85.f_29);
								unk_0x43A06902454A1172(Local_85.f_29);
								Local_85.f_29 = 0xFFFFFFFF;
							}
							if (unk_0x8AA6DC470ABA63A2(Local_85.f_2A))
							{
								Local_85.f_2A = unk_0xD68EA767274B7444();
								unk_0x4D7F4CC43D4D0DE3(Local_85.f_2A, "HUD_Boost_Recharge_Loop", Local_85.f_77, 0x00000001);
							}
						}
						else
						{
							fVar4 = (100f / (SYSTEM::TO_FLOAT(Global_40001.f_5E52) / IntToFloat(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_B4))));
							Local_85.f_13 = (0x00000064 - SYSTEM::ROUND(fVar4));
							unk_0x5E858A00EAFA5B24(0x00000000, Global_40001.f_5E52, 0x000000FF);
						}
					}
				}
			}
			vVar5 = { Local_85.f_70 };
			vVar6 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000002) };
			vVar6 = { (vVar6.x + 180f), (-vVar6.y + 180f), vVar6.z };
			unk_0x5F3CBA6EB9341C90(Local_85.f_83, vVar6, 0x00000002);
			if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000001) || func_176())
			{
				return;
			}
			vVar7 = { func_327(func_328()) };
			vVar8 = { func_327(func_326(func_328())) };
			unk_0xE82754C349C7B581(vVar5, &fVar9, 0x00000001, 0x00000000);
			if (!func_333())
			{
				if (Local_85.f_9 == 0x00000002 || (vVar5.z - fVar9) < 2f)
				{
					fVar10 = 24f;
					if (Local_85[0x00000001] != 0x00000000)
					{
						unk_0x38C3A68D7861DCFD(0x00000002, 0x000000CF, 0x00000001);
					}
					if (unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000CF) != 0f || Local_85[0x00000001] != 0x00000000)
					{
						if ((vVar5.z - fVar9) < 0.5f || unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000CF) != 0f)
						{
							fVar10 = 24f;
						}
						else
						{
							fVar10 = 10f;
						}
					}
					else
					{
						fVar10 = 3f;
					}
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0f, 0f, fVar10, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				}
			}
			if (unk_0x91E3F625EF57450D(0x00000000))
			{
				if (Local_85[0x00000002] >= 0x0000007F)
				{
					Local_85[0x00000002] = 0x0000007F;
				}
				else if (Local_85[0x00000002] <= 0xFFFFFF81)
				{
					Local_85[0x00000002] = 0xFFFFFF81;
				}
				if (Local_85[0x00000000] >= 0x0000007F)
				{
					Local_85[0x00000000] = 0x0000007F;
				}
				else if (Local_85[0x00000000] <= 0xFFFFFF81)
				{
					Local_85[0x00000000] = 0xFFFFFF81;
				}
			}
			if (!unk_0x91E3F625EF57450D(0x00000000))
			{
				if (unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000D0) != 0f)
				{
					iVar11 = 0x00000001;
				}
				if (unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000CF) != 0f)
				{
					iVar12 = 0x00000001;
				}
			}
			else
			{
				if (unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000D1) != 0f)
				{
					iVar11 = 0x00000001;
				}
				if (unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000D2) != 0f)
				{
					iVar12 = 0x00000001;
				}
			}
			if (((iVar11 && func_332()) && !func_60()) || (func_234() && !func_233()))
			{
				fVar15 = Local_85.f_52;
				if (func_142())
				{
					fVar15 = 5f;
				}
				if (func_29() || func_9())
				{
					fVar14 = 10f;
				}
				if (func_234() && !func_233())
				{
					if (!unk_0x91E3F625EF57450D(0x00000000))
					{
						fVar13 = ((fVar15 + fVar0) / (1f / unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000D0)));
					}
					else
					{
						fVar13 = ((fVar15 + fVar0) / (1f / unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000D1)));
					}
				}
				else if (!unk_0x91E3F625EF57450D(0x00000000))
				{
					fVar13 = ((fVar15 + fVar14) / (1f / unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000D0)));
				}
				else
				{
					fVar13 = ((fVar15 + fVar14) / (1f / unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000D1)));
				}
				vVar16 = { vVar8 * Vector(fVar13, fVar13, fVar13) };
				if (vVar16.z > 149f)
				{
					vVar16.z = 149f;
				}
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar16, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			}
			else if (((iVar12 && !func_60()) && func_332()) && !func_243())
			{
				if (func_29() || func_9())
				{
					fVar18 = 10f;
				}
				if (!unk_0x91E3F625EF57450D(0x00000000))
				{
					fVar17 = ((Local_85.f_52 + fVar18) / (1f / unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000CF)));
				}
				else
				{
					fVar17 = ((Local_85.f_52 + fVar18) / (1f / unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000D2)));
				}
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar8 * Vector(-fVar17, -fVar17, -fVar17), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			}
			if (((Local_85[0x00000001] > 0x00000000 && !func_234()) && !func_243()) && !func_60())
			{
				fVar21 = func_331();
				fVar19 = (Local_85.f_52 / (127f / IntToFloat(Local_85[0x00000001])));
				fVar20 = (fVar21 / (127f / IntToFloat(Local_85[0x00000001])));
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar7 * Vector(fVar19, fVar19, fVar19), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0f, 0f, fVar20, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			}
			else if ((((Local_85[0x00000001] < 0x00000000 && !func_234()) && !func_243()) && !func_60()) || (func_234() && func_233()))
			{
				if (func_234() && func_233())
				{
					fVar24 = 50f;
					if (func_9())
					{
						fVar22 = (Local_85.f_52 / -1f);
					}
					else
					{
						fVar22 = ((Local_85.f_52 + fVar0) / -1f);
					}
					fVar23 = (fVar24 / -1f);
				}
				else
				{
					fVar24 = func_331();
					if (func_9())
					{
						fVar22 = (Local_85.f_52 / (127f / IntToFloat(Local_85[0x00000001])));
					}
					else
					{
						fVar22 = ((Local_85.f_52 + fVar0) / (127f / IntToFloat(Local_85[0x00000001])));
					}
					fVar23 = (fVar24 / (127f / IntToFloat(Local_85[0x00000001])));
				}
				if (func_9())
				{
					if (!func_233())
					{
						unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0f, 0f, -fVar23, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
						unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar7 * Vector(fVar22, fVar22, fVar22), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
					}
					else
					{
						unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0f, 0f, 41f, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
						unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0f, -149f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
					}
				}
				else
				{
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0f, 0f, -fVar23, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar7 * Vector(fVar22, fVar22, fVar22), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				}
			}
			vVar25 = { func_325(vVar7, vVar8) };
			if ((!func_234() && !func_243()) && !func_60())
			{
				if (Local_85[0x00000000] > 0x00000000)
				{
					fVar26 = -(Local_85.f_52 / (127f / IntToFloat(Local_85[0x00000000])));
					fVar27 = (8f / (127f / IntToFloat(Local_85[0x00000000])));
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar25 * Vector(fVar26, fVar26, fVar26), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0f, 0f, fVar27, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				}
				else if (Local_85[0x00000000] < 0x00000000)
				{
					fVar28 = -(Local_85.f_52 / (127f / IntToFloat(Local_85[0x00000000])));
					fVar29 = (8f / (127f / IntToFloat(Local_85[0x00000000])));
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, vVar25 * Vector(fVar28, fVar28, fVar28), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000, 0f, 0f, -fVar29, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				}
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

float func_331()
{
	if (func_9() || func_29())
	{
		return 40f;
	}
	else if (func_17())
	{
		return 30f;
	}
	else if (func_142())
	{
		return 2.5f;
	}
	return 6.4f;
}

int func_332()
{
	if (func_243())
	{
		return 0x00000000;
	}
	if (func_234() && !func_233())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_333()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000002);
}

void func_334(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000015))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000015);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000015))
	{
		unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000015);
	}
}

void func_335(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000016))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000016);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000016))
	{
		unk_0x0674E58A79778E99(&(Local_85.f_5), 0x00000016);
	}
}

void func_336()
{
	float fVar0;
	float fVar1;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_85.f_79), 0x00000000))
		{
			if ((func_9() || func_29()) || func_27())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_85.f_70;
				fVar1 = Local_85.f_70.f_1;
			}
			unk_0x6857CFBD47C253B6(fVar0, fVar1);
			unk_0xA464CD2441CD9CE2(fVar0, fVar1, 0x00000000);
			if (!unk_0x31609A585163CBAC(Global_19C087.f_18) && !func_27())
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000008))
				{
					unk_0xB243B37593BB6C38();
				}
				unk_0x6476077988E40DA0();
			}
		}
	}
}

void func_337()
{
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_28) && Local_85.f_28 == 0xFFFFFFFF)
		{
			Local_85.f_28 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(Local_85.f_28, "HUD_Loop", Local_85.f_77, 0x00000001);
		}
	}
}

void func_338()
{
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_1E))
		{
			Local_85.f_1E = unk_0xD68EA767274B7444();
			unk_0xCEAA091B490F8407(Local_85.f_1E, "Flight_Loop", unk_0x09AD4CE7DA179533(Local_85.f_79), Local_85.f_77, 0x00000000, 0x00000000);
			unk_0x6F6BA3FE885E6C91(Local_85.f_1E, "DroneRotationalSpeed", Local_85.f_5C);
		}
		else
		{
			unk_0x6F6BA3FE885E6C91(Local_85.f_1E, "DroneRotationalSpeed", Local_85.f_5C);
		}
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_27))
		{
			unk_0x43A06902454A1172(Local_85.f_27);
			Local_85.f_27 = 0xFFFFFFFF;
		}
	}
}

void func_339()
{
	if (func_15(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000001C2, 0x00000001);
	}
}

void func_340()
{
	int iVar0;
	
	if (func_9())
	{
		iVar0 = unk_0x117658E336116132(Local_85.f_2C);
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && func_15(iVar0, 0x00000001, 0x00000001))
		{
			if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar0), 0x00000000))
			{
				if (func_341(unk_0x09AD4CE7DA179533(Local_85.f_79), unk_0x9539D44F3E4492F6(iVar0), Global_40001.f_60A7, 0x00000001))
				{
					if (!func_190(unk_0xD803B885F5E47A62(), iVar0))
					{
						if (unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar0) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000000B);
							return;
						}
					}
				}
			}
		}
		unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000000B);
	}
}

bool func_341(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, bParam3), unk_0x68F4C0EC296D3901(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_342()
{
	int iVar0;
	
	if (func_25(func_88()))
	{
		iVar0 = unk_0x117658E336116132(Local_85.f_2C);
		if (unk_0xD803B885F5E47A62() != iVar0)
		{
			if (func_15(iVar0, 0x00000001, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_85.f_7, Local_85.f_2C))
				{
					if (!unk_0xFB75B0F82CA525F6(iVar0))
					{
						unk_0x0674E58A79778E99(&(Local_85.f_7), Local_85.f_2C);
					}
				}
				if (SYSTEM::VDIST2(func_214(iVar0), Local_85.f_70) < 12100f)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_7, Local_85.f_2C) && func_344(iVar0))
					{
						func_343(iVar0, 0x00000001);
						unk_0x7F379C0A8EB2F4D0(Local_85.f_79, iVar0, 0x00000001);
						unk_0x5D96D8530B3D0904(&(Local_85.f_7), Local_85.f_2C);
					}
				}
				else if (SYSTEM::VDIST2(func_214(iVar0), Local_85.f_70) > 14400f)
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_85.f_7, Local_85.f_2C))
					{
						func_343(iVar0, 0x00000000);
						unk_0x7F379C0A8EB2F4D0(Local_85.f_79, iVar0, 0x00000000);
						unk_0x0674E58A79778E99(&(Local_85.f_7), Local_85.f_2C);
					}
				}
			}
		}
	}
}

void func_343(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 0x99E8B7B9;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam1;
	iVar1 = func_173(iParam0);
	if (!iVar1 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iVar1);
	}
}

int func_344(int iParam0)
{
	if (func_346(iParam0, 0x00000001, 0x00000001))
	{
		return 0x00000000;
	}
	if (func_48(iParam0))
	{
		return 0x00000000;
	}
	if (func_345(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_345(int iParam0)
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

int func_346(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_16())
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

void func_347()
{
	int iVar0;
	
	if ((func_27() || func_9()) || func_29())
	{
		iVar0 = 0x000003E8;
		if (func_9() || func_29())
		{
			iVar0 = 0x00001B58;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001D))
		{
			if (unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0x9CF8D5C7090408A2(Local_85.f_83))
			{
				if (func_25(func_88()))
				{
					if (func_7(&(Local_85.f_C6), iVar0, 0x00000000))
					{
						unk_0xCDCD90141EA7E6EE(func_88(), 0x00000001, 0x00000000);
						unk_0x20641932E5104B25(func_88(), 0x00000001, 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000001D);
					}
				}
			}
		}
	}
}

void func_348()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_355() || !func_18())
	{
		return;
	}
	switch (Local_85.f_4F)
	{
		case 0x00000000:
			if (!unk_0xE5DBF9B6126856CA(Local_85.f_7A))
			{
				iVar0 = 0xB7CE8433;
				if (func_161(iVar0))
				{
					if (func_74(unk_0xBF3DE18643F54472(0x00000000, 0x00000001) + 1, 0x00000000, 0x00000001))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 0x00000004))
						{
							unk_0xE57F9AD44D9539F1(unk_0xBF3DE18643F54472(0x00000000, 0x00000001) + 1);
							unk_0x5D96D8530B3D0904(&(Local_85.f_6), 0x00000004);
						}
						if (unk_0x081C8BC5094A7B76(0x00000001))
						{
							if (func_354(&(Local_85.f_7A), iVar0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001))
							{
								unk_0x7F379C0A8EB2F4D0(Local_85.f_7A, unk_0xD803B885F5E47A62(), 0x00000001);
								iVar1 = unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 0x00006F06);
								unk_0x9F528B1B53FBC5D9(unk_0x09AD4CE7DA179533(Local_85.f_7A), unk_0x16F2683693E537C9(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
								unk_0x71199B01895C6202(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_85.f_4F = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x7D8F4411) != 0x00000000 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x7D8F4411) != 0x00000001)
			{
				func_311(0x00000000, 0x00000000, 0x00000000);
				Local_85.f_4F = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (func_353(0x00000000, "CREATE"))
			{
				func_338();
				if (func_352(Local_85.f_7A))
				{
					if (!unk_0x4FC40AB0ECCE6E18(unk_0x09AD4CE7DA179533(Local_85.f_7A)))
					{
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_85.f_7A), 0x00000001, 0x00000000);
					}
				}
				if (func_352(Local_85.f_79))
				{
					if (!unk_0x4FC40AB0ECCE6E18(unk_0x09AD4CE7DA179533(Local_85.f_79)))
					{
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000001, 0x00000000);
						unk_0x4A4806F9D471E491(Local_85.f_7D, 0x00000000, 0x00000000);
					}
				}
			}
			if (func_350(0x00000001))
			{
				unk_0x9F528B1B53FBC5D9(Local_85.f_7D, unk_0x09AD4CE7DA179533(Local_85.f_79), 0xFFFFFFFF, 0f, 0f, -0.8f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				unk_0x4A4806F9D471E491(Local_85.f_7D, 0x00000000, 0x00000000);
				unk_0x295ACC5727E47CB7(unk_0xA5FBBC2F619A4DE2(Local_85.f_79));
				unk_0xD1A00B3C86CDAAC5(unk_0x09AD4CE7DA179533(Local_85.f_79));
				func_250();
				func_108();
				func_219(0x00000001);
				func_237();
				func_330();
				func_349();
				if (unk_0x8AA6DC470ABA63A2(Local_85.f_27))
				{
					Local_85.f_27 = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(Local_85.f_27, "HUD_Startup", Local_85.f_77, 0x00000001);
				}
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				Local_85.f_87 = unk_0x2B6E0A53779D29EA();
				func_356(0x00000003);
				func_311(0x00000001, 0x00000001, 0x00000000);
				Local_85.f_4F = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (func_350(0x00000000))
			{
				iVar2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
				switch (iVar2)
				{
					case 0x00000000:
						func_311(0x00000002, 0x00000000, 0x00000000);
						Local_85.f_AC = 0x00000002;
						break;
					
					case 0x00000001:
						func_311(0x00000003, 0x00000000, 0x00000000);
						Local_85.f_AC = 0x00000003;
						break;
					
					case 0x00000002:
						func_311(0x00000004, 0x00000000, 0x00000000);
						Local_85.f_AC = 0x00000004;
						break;
				}
				Local_85.f_4F = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (func_350(0x00000000))
			{
				func_311(0x00000001, 0x00000001, 0x00000000);
				Local_85.f_4F = 0x00000003;
			}
			break;
	}
}

void func_349()
{
	if (func_119() || func_18())
	{
		if (!unk_0x562F77A7F33D2E46("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			unk_0x8BC9595FD2792B5D("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_9())
	{
		if (!unk_0x562F77A7F33D2E46("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			unk_0x8BC9595FD2792B5D("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_29())
	{
		if (!unk_0x562F77A7F33D2E46("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			unk_0x8BC9595FD2792B5D("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_27())
	{
		if (!unk_0x562F77A7F33D2E46("dlc_aw_arena_piloted_missile_scene"))
		{
			unk_0x8BC9595FD2792B5D("dlc_aw_arena_piloted_missile_scene");
		}
	}
}

int func_350(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (func_25(iVar0))
	{
		fVar1 = func_351();
		iVar2 = unk_0xF958843510932FF6(Local_85.f_4E);
		if (unk_0x69DF961355195C3C(iVar2) && unk_0xA45992A6CE82FB43(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_313(0x00000000);
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_351()
{
	return 0.95f;
}

int func_352(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0x00000000;
}

int func_353(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF958843510932FF6(Local_85.f_4E);
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0x69DF961355195C3C(iVar0))
		{
			if ((unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), unk_0x12AB0310C2281427(sParam1)) || unk_0xDDCA9A4E51DADA2B(unk_0x09AD4CE7DA179533(Local_85.f_7A), unk_0x12AB0310C2281427(sParam1))) || unk_0xDDCA9A4E51DADA2B(unk_0x09AD4CE7DA179533(Local_85.f_79), unk_0x12AB0310C2281427(sParam1)))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_354(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x081C8BC5094A7B76(0x00000001))
	{
		return 0x00000000;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0xB0BE3DFBBB59A620(iParam1, vParam2, iParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0x7707E48765093646(iParam1, vParam2, iParam4, bParam3, bParam5));
	}
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(*uParam0), bParam6);
		if (bParam8)
		{
			unk_0x271603AF9C0C7EB3(unk_0x09AD4CE7DA179533(*uParam0), 0x00000001);
		}
		if (bParam9)
		{
			unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(*uParam0), 0x00000000, 0x00000000);
		}
		if (unk_0xECE0BE5313FD8BDA(unk_0x09AD4CE7DA179533(*uParam0)))
		{
			if (bParam3)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_355()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x0000000D);
}

void func_356(int iParam0)
{
	if (Local_85.f_AA != iParam0)
	{
		Local_85.f_AA = iParam0;
	}
}

void func_357(bool bParam0)
{
	if (bParam0)
	{
		if (!func_355())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x0000000D);
		}
	}
	else if (func_355())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x0000000D);
	}
}

void func_358()
{
	vector3 vVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			if (!unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000000))
			{
				if (func_368())
				{
					if (func_315())
					{
						func_277(unk_0xD803B885F5E47A62(), 0x00000000, 0x00008200, 0x00000000);
					}
					else if (!func_27())
					{
						func_277(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000200, 0x00000000);
					}
					if (!func_367())
					{
						unk_0xBBC60FE7D2EB37A6();
					}
					else
					{
						unk_0x1FA2A2B10F3906F7();
					}
					Local_85.f_83 = unk_0x92B061D59B9B540A(0x019286A9, 0x00000001);
					unk_0x5818C8D5303DCCF8(Local_85.f_83, Local_85.f_58);
					unk_0xDC3CC6D1845B0567(Local_85.f_83, 0.01f);
					unk_0xC9CCB807979D3AC2(Local_85.f_83, 0.01f);
					unk_0x225CFE81EA219E44();
					if (func_27())
					{
						unk_0x63D6BFA449464BBF("eyeinthesky");
					}
					vVar0 = { 0f, -0.038f, -0.004f };
					if (func_9() || func_29())
					{
						vVar0 = { 0f, -0.099f, -0.02f };
					}
					else if (func_27())
					{
						vVar0 = { 0f, -0.9f, 0f };
					}
					else if (func_17() || func_142())
					{
						vVar0 = { 0f, -0.038f, -0.006f };
					}
					unk_0xC5940439E4EB9A33(Local_85.f_83, unk_0x09AD4CE7DA179533(Local_85.f_79), vVar0, 0x00000001);
					if (func_27())
					{
						unk_0x5F3CBA6EB9341C90(Local_85.f_83, func_366() - Vector(0f, -180f, 180f), 0x00000002);
					}
					unk_0xA4A0E041958E996F(Local_85.f_70, 75f, 75f);
					unk_0xF49D1BC9EF1C3EF4(Local_85.f_70, unk_0x17D61C69BA58F815(Local_85.f_83, 0x00000002));
					unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000);
					if (!func_315())
					{
						if (unk_0x68367101660E33F0())
						{
							unk_0x486B4ADE317F0689();
						}
					}
					if (!func_18())
					{
						func_349();
						if (unk_0x8AA6DC470ABA63A2(Local_85.f_27))
						{
							Local_85.f_27 = unk_0xD68EA767274B7444();
							unk_0x4D7F4CC43D4D0DE3(Local_85.f_27, "HUD_Startup", Local_85.f_77, 0x00000001);
						}
						func_250();
						if (func_27())
						{
							func_84();
						}
						else
						{
							func_108();
						}
						func_219(0x00000001);
						func_237();
						func_330();
						unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
						Local_85.f_87 = unk_0x2B6E0A53779D29EA();
					}
					func_363(0x00000001);
					func_362(0x00000001);
					func_360(0x0000009E);
					unk_0x5D96D8530B3D0904(&(vLocal_83[unk_0xD803B885F5E47A62() /*3*/]), 0x00000000);
					if (!func_18())
					{
						func_356(0x00000003);
					}
					else
					{
						Local_85.f_73 = { func_214(unk_0xD803B885F5E47A62()) };
						unk_0xE82754C349C7B581(Local_85.f_73, &(Local_85.f_73.f_2), 0x00000000, 0x00000000);
						Local_85.f_51 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
						func_359();
						Local_85.f_73 = { unk_0x8A5E176FF719A014(Local_85.f_73, Local_85.f_51, -0.0695723f, 0.177497f, 0f) };
						func_356(0x00000002);
					}
				}
				else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				}
			}
			else
			{
				if (unk_0x9F4FE516EAACCFC5(Local_85.f_83))
				{
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000000))
				{
				}
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

void func_359()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
		}
	}
}

void func_360(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_200000[func_361() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
		{
			if (Global_14073A.f_1[iVar0] == 0xFFFFFFFF)
			{
				Global_14073A.f_1[iVar0] = iParam0;
				Global_14073A = 0x00000001;
				return;
			}
		}
		iVar0++;
	}
}

int func_361()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_362(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E, 0x0000001A))
		{
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E), 0x0000001A);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E, 0x0000001A))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E), 0x0000001A);
	}
}

void func_363(bool bParam0)
{
	if (bParam0)
	{
		if (!func_58())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000005);
		}
	}
	else
	{
		if (func_58())
		{
			unk_0x0674E58A79778E99(&Global_19C087, 0x00000005);
		}
		func_364(0x00000000);
	}
}

void func_364(bool bParam0)
{
	if (bParam0)
	{
		if (!func_365())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x0000000C);
		}
	}
	else if (func_365())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x0000000C);
	}
}

bool func_365()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x0000000C);
}

Vector3 func_366()
{
	return Global_19C087.f_10;
}

bool func_367()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x0000000A);
}

int func_368()
{
	if (func_30() && !func_32())
	{
		return 0x00000001;
	}
	if (func_371())
	{
		return 0x00000001;
	}
	if (func_370())
	{
		return 0x00000001;
	}
	if (func_32() && func_369())
	{
		return 0x00000001;
	}
	if (!func_53(unk_0xD803B885F5E47A62(), 0x00000000) && !func_273())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_369()
{
	if (Global_1420C6 != 0xFFFFFFFF || Global_1420CC != 0xFFFFFFFF)
	{
		if (((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 0x00000003))
		{
			return 0x00000001;
		}
		if (func_34())
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_370()
{
	return 0x00000000;
}

int func_371()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	if (func_32() || func_372())
	{
		return 0x00000000;
	}
	if (func_370())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_372()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_373()
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	float fVar3;
	
	iVar0 = joaat("bmx");
	if (func_161(Local_85.f_A9) && func_161(iVar0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000000))
		{
			if (!unk_0xE5DBF9B6126856CA(Local_85.f_79))
			{
				if (!func_315())
				{
					if (func_119())
					{
						if (func_25(func_321()))
						{
							vVar1 = { unk_0x68F4C0EC296D3901(func_321(), 0x00000001) };
						}
					}
					else
					{
						vVar1 = { Local_85.f_64 };
					}
					if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
					{
						func_277(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000200, 0x00000000);
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000012))
					{
						if (unk_0x9E632F16E887F781(vVar1, 100f, 0x00000001))
						{
							unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000012);
						}
					}
					else if (unk_0x68367101660E33F0())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000013))
						{
							if (func_378())
							{
								if (func_375())
								{
									unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000013);
								}
							}
							else
							{
								if (!func_240(func_374()))
								{
									Local_85.f_64 = { func_374() };
								}
								unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000013);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000013) || func_315())
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x00000014))
					{
						Local_85.f_7D = unk_0x122AAB0B1D6F55AD(iVar0, Local_85.f_64, 0f, 0x00000000, 0x00000000, 0x00000000);
						unk_0xE8832A9E16A57A1F(Local_85.f_7D, 0x00000001, 0x00000001);
						unk_0x08841CDB215AE18F(Local_85.f_7D, Local_85.f_64, 0x00000000, 0x00000000, 0x00000001);
						unk_0xE121AE1BBF90E186(Local_85.f_7D, 0x00000001);
						unk_0xCDCD90141EA7E6EE(Local_85.f_7D, 0x00000000, 0x00000000);
						unk_0x4A4806F9D471E491(Local_85.f_7D, 0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000014);
					}
					else if (func_74(unk_0xBF3DE18643F54472(0x00000000, 0x00000001) + 1, 0x00000000, 0x00000001))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001E))
						{
							unk_0xE57F9AD44D9539F1(unk_0xBF3DE18643F54472(0x00000000, 0x00000001) + 1);
							unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000001E);
						}
						if (unk_0x081C8BC5094A7B76(0x00000001))
						{
							bVar2 = 0x00000000;
							if (func_18())
							{
								Local_85.f_73 = { func_214(unk_0xD803B885F5E47A62()) };
								unk_0xE82754C349C7B581(Local_85.f_73, &(Local_85.f_73.f_2), 0x00000000, 0x00000000);
								Local_85.f_64 = { unk_0x1BB04F10296A1C5E(Local_85.f_78, "ENTER", Local_85.f_73, unk_0x835730A2D89F6093(unk_0x16F2683693E537C9(), 0x00000002), 0x00000000, 0x00000002) };
								bVar2 = 0x00000001;
							}
							if (func_354(&(Local_85.f_79), Local_85.f_A9, Local_85.f_64, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, bVar2))
							{
								Global_19C087.f_14 = unk_0x09AD4CE7DA179533(Local_85.f_79);
								if (func_119())
								{
									if (func_25(func_321()))
									{
										unk_0xC023D1C4BF532815(func_88(), unk_0x835730A2D89F6093(func_321(), 0x00000002), 0x00000002, 0x00000001);
										fVar3 = (unk_0xD9522BA9E27E1349(func_321()) + 180f);
									}
								}
								Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_199 = { Local_85.f_64 };
								Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_19C = fVar3;
								vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_2 = Local_85.f_79;
								unk_0x7F379C0A8EB2F4D0(Local_85.f_79, unk_0xD803B885F5E47A62(), 0x00000001);
								unk_0x5828F0011EBBBF85(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 0x00000001);
								unk_0xE8832A9E16A57A1F(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 0x00000001, 0x00000001);
								unk_0x08841CDB215AE18F(func_88(), Local_85.f_64, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(func_88(), fVar3);
								unk_0x223F9D0E8DE69CDB(func_88(), 0x00000001);
								if (!func_240(func_366()))
								{
									unk_0xC023D1C4BF532815(func_88(), func_366(), 0x00000002, 0x00000001);
								}
								if (func_27())
								{
									unk_0xCDCD90141EA7E6EE(func_88(), 0x00000000, 0x00000000);
								}
								unk_0x203472D20F76FBFF(Local_85.f_79, 0x00000001);
								if (func_147(unk_0xD803B885F5E47A62()))
								{
									unk_0xD458AC1C1D29C3B4(func_88(), Global_40001.f_5E54 * 5, 0x00000000);
								}
								else
								{
									unk_0xD458AC1C1D29C3B4(func_88(), Global_40001.f_5E54, 0x00000000);
								}
								unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000001);
								unk_0x866EE3B81CEF363A(Local_85.f_79, 0x00000000);
								unk_0xD0C5FAC38659B26F(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 0x00000001);
								unk_0xA4A0E041958E996F(Local_85.f_64, 100f, 200f);
								unk_0xF49D1BC9EF1C3EF4(unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 0x00000001), unk_0x835730A2D89F6093(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 0x00000002));
								unk_0x71199B01895C6202(Local_85.f_A9);
								unk_0x71199B01895C6202(iVar0);
							}
						}
					}
				}
			}
			else
			{
				unk_0x08543B8F6DBE0B08(unk_0x09AD4CE7DA179533(Local_85.f_79), 0x00000000);
				if (func_25(Local_85.f_7D) && func_25(unk_0xA5FBBC2F619A4DE2(Local_85.f_79)))
				{
					unk_0x9F528B1B53FBC5D9(Local_85.f_7D, unk_0x09AD4CE7DA179533(Local_85.f_79), 0xFFFFFFFF, 0f, 0f, -0.8f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x00000000);
				}
			}
		}
	}
}

Vector3 func_374()
{
	return Global_19C087.f_D;
}

int func_375()
{
	if (Local_85.f_F == 0x00000000)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000E))
		{
			if ((!func_147(unk_0xD803B885F5E47A62()) && func_119()) && func_25(func_321()))
			{
				Local_85.f_64 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(func_321(), 0x00000001), unk_0xD9522BA9E27E1349(func_321()), -0.7f, 1.6f, 4f) };
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000000E);
			}
			else
			{
				if (func_119() && func_25(func_321()))
				{
					Local_85.f_64 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(func_321(), 0x00000001), unk_0xD9522BA9E27E1349(func_321()), -0.7f, 1.6f, 4f) };
				}
				Local_85.f_64 = unk_0x79833B02DBD2A244((Local_85.f_64 - 1.5f), (Local_85.f_64 + 1.5f));
				Local_85.f_64.f_1 = unk_0x79833B02DBD2A244((Local_85.f_64.f_1 - 1.5f), (Local_85.f_64.f_1 + 1.5f));
				Local_85.f_64.f_2 = unk_0x79833B02DBD2A244((Local_85.f_64.f_2 + 0.5f), (Local_85.f_64.f_2 + 1.5f));
				if (!func_377(Local_85.f_64))
				{
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000000E);
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000000F))
		{
			Local_85.f_64 = unk_0x79833B02DBD2A244((Local_85.f_64 - 1.5f), (Local_85.f_64 + 1.5f));
			Local_85.f_64.f_1 = unk_0x79833B02DBD2A244((Local_85.f_64.f_1 - 1.5f), (Local_85.f_64.f_1 + 1.5f));
			Local_85.f_64.f_2 = unk_0x79833B02DBD2A244((Local_85.f_64.f_2 + 0.5f), (Local_85.f_64.f_2 + 1.5f));
			if (!func_377(Local_85.f_64))
			{
				unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000000F);
			}
		}
		func_376(Local_85.f_64);
	}
	else if (Local_85.f_F == 0x00000001 && !func_377(Local_85.f_64))
	{
		return 0x00000001;
	}
	else
	{
		Local_85.f_F = 0x00000000;
		unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000000F);
	}
	return 0x00000000;
}

void func_376(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	switch (Local_85.f_E)
	{
		case 0x00000000:
			if (func_119())
			{
				if (func_25(func_321()))
				{
					iVar0 = func_321();
				}
			}
			if (func_9() || func_29())
			{
				fVar1 = func_196(Local_85.f_A9);
			}
			else
			{
				fVar1 = (func_196(Local_85.f_A9) * 11f);
			}
			Local_85.f_82 = unk_0x6D4C9F7CF124AE37(vParam0, vParam0, fVar1, 0x000001FF, iVar0, 0x00000004);
			if (Local_85.f_82 != 0x00000000)
			{
				Local_85.f_E = 0x00000001;
			}
			break;
		
		case 0x00000001:
			iVar6 = unk_0x1EC301670B54C6DE(Local_85.f_82, &iVar2, &vVar4, &uVar3, &uVar5);
			if (iVar6 == 0x00000002)
			{
				if (iVar2 == 0x00000000)
				{
					Local_85.f_F = 0x00000001;
					vVar4 = { 0f, 0f, 0f };
				}
				else
				{
					Local_85.f_F = 0x00000002;
					Local_85.f_82 = 0x00000000;
					Local_85.f_E = 0x00000000;
				}
			}
			else if (iVar6 == 0x00000000)
			{
				Local_85.f_E = 0x00000000;
			}
			break;
	}
}

int func_377(vector3 vParam0)
{
	if (unk_0x0399732A9EBC368E(vParam0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_378()
{
	if (func_119())
	{
		return 0x00000001;
	}
	if (func_17() && !func_18())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_379()
{
	if (func_273())
	{
		return Global_199459.f_1DB == 0x00000000;
	}
	return 0x00000000;
}

void func_380()
{
	if (func_15(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		Local_85.f_67 = { func_241(&Local_85) };
		if (!func_240(func_374()))
		{
			Local_85.f_64 = { func_374() };
		}
		else
		{
			Local_85.f_64 = { func_214(unk_0xD803B885F5E47A62()) };
			Local_85.f_64 = { Local_85.f_64, Local_85.f_64.f_1, (Local_85.f_64.f_2 + 1.5f) };
		}
		if (func_53(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			func_424(0x00000001);
		}
		if (func_53(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			func_420();
		}
		else if (((func_418(unk_0xD803B885F5E47A62()) == 0x00000002 || func_418(unk_0xD803B885F5E47A62()) == 0x00000001) && !unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000006)) && !unk_0xEAE0D21A50E6C7F4(Global_19DEEE, 0x00000000))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_265B3E, 0x00000000))
			{
				func_417(0x00000001);
				func_409(0x00000000, 0x00000000);
				func_408();
				func_364(0x00000001);
				func_356(0x00000001);
			}
		}
		else if ((func_31() && func_404()) && !unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000006))
		{
			func_382();
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000006) && unk_0xEAE0D21A50E6C7F4(Global_19DEEE, 0x00000000))
		{
			func_409(0x00000000, 0x00000000);
			func_364(0x00000001);
			func_356(0x00000001);
		}
		else if (func_18() && !func_381())
		{
			unk_0xA37A90C62806D848(0x00000001);
			func_115("PIM_DRONAMOS", 0xFFFFFFFF);
			func_277(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
			func_356(0x00000006);
		}
		else if (func_240(Local_85.f_61))
		{
			Local_85.f_76 = 0x00000000;
			func_364(0x00000001);
			func_356(0x00000001);
		}
	}
}

bool func_381()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000017);
}

void func_382()
{
	vector3 vVar0;
	int iVar1;
	
	if (!func_397())
	{
		if ((((((func_396() || func_395()) && !Global_195C36) && func_404()) && !unk_0xEAE0D21A50E6C7F4(Global_265ACE, 0x00000006)) && Global_140818) && !(func_396() && Global_40001.f_64FE))
		{
			if ((((((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000E0) || unk_0xD245978525608929(0x00000002, 0x000000E0)) && !unk_0xBFC0798A6E3417F9(0x00000002, 0x000000DF)) && !unk_0xD245978525608929(0x00000002, 0x000000DF)) && !unk_0xBFC0798A6E3417F9(0x00000002, 0x000000EB)) && !unk_0xD245978525608929(0x00000002, 0x000000EB)) && !unk_0x7FEE810EE9E768EB(0x00000002, 0x00000013))
			{
				if (unk_0x7A7BDE279347E517(Global_40001.f_6500, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_265ACE, 0x00000002))
				{
					unk_0x5D96D8530B3D0904(&Global_265ACE, 0x00000000);
					func_409(0x00000000, 0x00000000);
					func_364(0x00000001);
					func_356(0x00000001);
					func_391();
					func_389(0x00000049, 0xFFFFFFFF);
					func_386();
					vVar0 = { func_385() };
					func_383(vVar0, 0f, 0f, 0f);
					if (func_396())
					{
						unk_0xCEAA091B490F8407(iVar1, "Select_Spec_Drone", unk_0x16F2683693E537C9(), "DLC_AW_Spectator_Tablet_Sounds", 0x00000001, 0x00000000);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Global_265ACE, 0x00000004))
				{
					unk_0x5D96D8530B3D0904(&Global_265ACE, 0x00000004);
				}
			}
		}
	}
}

void func_383(vector3 vParam0, vector3 vParam1)
{
	if (!func_384(Global_19C087.f_D, vParam0, 0x00000000))
	{
		Global_19C087.f_D = { vParam0 };
		vParam1 = { vParam1 + Vector(0f, -180f, 180f) };
		Global_19C087.f_10 = { vParam1 };
	}
}

bool func_384(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_385()
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	vVar3 = { 2800f, -3800.2f, 170f };
	if ((Global_440000.f_372EA.f_1 == 0x00000003 || Global_440000.f_372EA.f_1 == 0x00000003) || Global_440000.f_372EA.f_1 == 0x00000003)
	{
		vVar3.y = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(unk_0x57270EE11514DC67()));
	fVar2 = (fVar2 * IntToFloat((unk_0x57270EE11514DC67() / 0x00000008)));
	fVar1 = (fVar1 - (8f * fVar2));
	return unk_0x8A5E176FF719A014(vVar3, fVar0, fVar1, fVar2, 0f);
}

void func_386()
{
	int iVar0;
	
	iVar0 = func_387(0x00000049, 0xFFFFFFFF);
	if (iVar0 >= 0x00000032)
	{
		unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_153.f_3), 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_153.f_3), 0x0000000D);
	}
}

int func_387(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_388(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_388(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_96();
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

void func_389(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_387(iParam0, func_388(iParam1));
	iVar0++;
	func_390(iParam0, iVar0, iParam1);
}

void func_390(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_388(uParam2)];
	unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
}

void func_391()
{
	func_392(0x00000001, 0x00001F2E);
}

void func_392(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0x00000000)
	{
		return;
	}
	iVar0 = func_394(iParam1, 0xFFFFFFFF, 0x00000000);
	func_393(iParam1, (iVar0 + iParam0), 0xFFFFFFFF, 0x00000001, 0x00000000);
}

void func_393(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_388(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_394(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_388(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

var func_395()
{
	return Global_258C24;
}

int func_396()
{
	if (Global_258C23 >= 0x00000000 && Global_258C23 < 0x0000000A)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_397()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_403())
	{
		return 0x00000001;
	}
	if (func_402())
	{
		return 0x00000001;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000001;
	}
	if (func_273())
	{
		return 0x00000001;
	}
	if (func_53(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (func_37(Global_18446E))
		{
			return 0x00000001;
		}
	}
	if (func_119())
	{
		if (func_401())
		{
			if (func_400())
			{
				return 0x00000001;
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001C))
			{
				return 0x00000001;
			}
		}
	}
	if (func_179(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (func_59(0x00000000))
	{
		return 0x00000001;
	}
	if (func_288())
	{
		return 0x00000001;
	}
	if (func_119())
	{
		if (func_30())
		{
			if (func_15(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				if (func_136(unk_0x16F2683693E537C9(), -1422.188f, -3015.926f, -80.1554f, 0x00000001) < 1.5f)
				{
					return 0x00000001;
				}
				if (func_399())
				{
					return 0x00000001;
				}
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_398(unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	if (func_177())
	{
		return 0x00000001;
	}
	if (Global_40001.f_5E5E)
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001B))
	{
		return 0x00000001;
	}
	if (func_53(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (func_25(func_321()))
		{
			if ((unk_0x3D1053F9EB43B7AD(func_321(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(func_321(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(func_321(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	if (Global_1420CA)
	{
		return 0x00000001;
	}
	if (Global_265F63)
	{
		return 0x00000001;
	}
	if (Global_265F61)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_398(int iParam0, int iParam1)
{
	if (iParam1 && (!unk_0xC844350D5D58C99A(iParam0) || unk_0x437347B10A200C4B(iParam0, 0x00000000)))
	{
		return 0x00000000;
	}
	if (unk_0x8B8AFAD7ED240B7F(iParam0, 0x00000002))
	{
		return 0x00000001;
	}
	if (unk_0x88A2866B31BF612A(iParam0) != 0x00000000 || unk_0x8B157DA177FBCF50(iParam0) != 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_399()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_400()
{
	if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8 != func_16() && unk_0xD803B885F5E47A62() != func_16())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8 /*876*/].f_112.f_14E, 0x00000014);
	}
	return 0x00000000;
}

int func_401()
{
	if (func_147(unk_0xD803B885F5E47A62()) && Global_19C087.f_5 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_402()
{
	if (Global_2537E2.f_484.f_5 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_403()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_404()
{
	int iVar0;
	int iVar1;
	
	if (func_407() && !func_406())
	{
		return 0x00000001;
	}
	iVar0 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	if (iVar0 >= 0x00000004 || iVar0 < 0x00000000)
	{
		iVar0 = 0x00000000;
	}
	iVar1 = Global_EC947.f_E[iVar0];
	if (iVar1 < 0x00000011)
	{
		if ((((unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iVar0 /*15700*/].f_1983[iVar1], 0x00000017) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iVar0 /*15700*/].f_1983[iVar1], 0x00000018)) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iVar0 /*15700*/].f_1983[iVar1], 0x00000019)) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iVar0 /*15700*/].f_1983[iVar1], 0x0000001A)) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_20, 0x00000010))
		{
			return 0x00000001;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_440000.f_20, 0x00000010))
	{
		return 0x00000001;
	}
	else if (func_395() || func_405(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_405(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_27.f_12, 0x0000000E);
}

int func_406()
{
	if (Global_440000.f_302A6 == 0x00000001 || Global_440000.f_302A6 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_407()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

void func_408()
{
	unk_0x0674E58A79778E99(&Global_265B3E, 0x00000000);
}

void func_409(bool bParam0, bool bParam1)
{
	int iVar0;
	
	Local_85.f_52 = Global_40001.f_5E57;
	if (func_29() || func_9())
	{
		Local_85.f_52 = (Local_85.f_52 * 4.5f);
	}
	else if (func_27())
	{
		Local_85.f_52 = 100f;
	}
	else if (func_17())
	{
		Local_85.f_52 = 100f;
	}
	else if (func_142())
	{
		Local_85.f_52 = 10f;
	}
	Local_85.f_5D = 40f;
	if (func_17())
	{
		Local_85.f_5D = 70f;
	}
	else if (func_142())
	{
		Local_85.f_5D = 35f;
	}
	if (func_29())
	{
		Local_85.f_A9 = 0xE8DC54B5;
	}
	else if (func_9())
	{
		Local_85.f_A9 = 0x1A5B37B2;
	}
	else if (func_27())
	{
		Local_85.f_A9 = 0x4BBB36A1;
		func_416(0x00000001);
	}
	else if (func_17())
	{
		if (!func_18())
		{
			iVar0 = func_415(unk_0xD803B885F5E47A62());
			switch (iVar0)
			{
				case 0x00000025:
					Local_85.f_A9 = 0xB106FAB1;
					break;
				
				case 0x00000026:
					Local_85.f_A9 = 0x29366B46;
					break;
				
				case 0x00000027:
					Local_85.f_A9 = 0x96B6C611;
					break;
				
				case 0x00000028:
					Local_85.f_A9 = 0x84682174;
					break;
			}
		}
		else
		{
			Local_85.f_A9 = 0x19AE1F4D;
		}
	}
	else if (func_142())
	{
		Local_85.f_A9 = 0x19AE1F4D;
	}
	else
	{
		Local_85.f_A9 = 0x8E7B47A7;
	}
	if (bParam1)
	{
		Local_85.f_64 = { Local_85.f_6A };
	}
	Global_19C087.f_1 = 0x000005DC;
	func_414();
	func_413(0x00000001);
	func_412(0x00000001);
	if (func_29() || func_27())
	{
		func_411(0x00000001);
	}
	else if (func_9())
	{
		func_411(0x00000000);
	}
	if (func_18())
	{
		Local_85.f_78 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		unk_0x3F423BF5B8125A50(Local_85.f_78);
	}
	if (func_9())
	{
		unk_0x1EEAD36B05B81FC1("scr_xs_dr");
	}
	if (func_18())
	{
		func_410(Global_40001.f_6D60);
	}
	else if (func_17() && !func_18())
	{
		func_410(Global_40001.f_6D61);
	}
	else if (!func_119() && !func_315())
	{
		func_410(200f);
	}
	func_68(Global_180858);
	if (bParam0)
	{
	}
}

void func_410(float fParam0)
{
	if (Global_19C087.f_8 != fParam0)
	{
		Global_19C087.f_8 = fParam0;
	}
}

void func_411(bool bParam0)
{
	if (bParam0)
	{
		if (!func_175())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000008);
		}
	}
	else if (func_175())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000008);
	}
}

void func_412(bool bParam0)
{
	if (bParam0)
	{
		if (!func_333())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000002);
		}
	}
	else if (func_333())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000002);
	}
}

void func_413(bool bParam0)
{
	if (bParam0)
	{
		if (!func_229())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000004);
		}
	}
	else if (func_229())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000004);
	}
}

void func_414()
{
	if (!Local_85.f_76)
	{
		Local_85.f_11 = 0x00000064;
	}
	if (func_142())
	{
		Local_85.f_17 = 0x00000064;
	}
	Local_85.f_12 = 0x00000000;
	Local_85.f_13 = 0x00000064;
	Local_85.f_58 = 90f;
	Local_85.f_5B = 90f;
	if (!func_27())
	{
		Local_85.f_84 = unk_0xB01F55A0FD1CFD49("DRONE_CAM");
	}
	else
	{
		Local_85.f_84 = func_89();
	}
	if (func_29())
	{
		Local_85.f_77 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_9())
	{
		Local_85.f_77 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_27())
	{
		Local_85.f_77 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else
	{
		Local_85.f_77 = "DLC_BTL_Drone_Sounds";
	}
}

int func_415(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_25033E[iParam0 /*421*/].f_1A0.f_1;
	}
	return 0xFFFFFFFF;
}

void func_416(bool bParam0)
{
	if (bParam0)
	{
		if (!func_184())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x0000000F);
		}
	}
	else if (func_184())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x0000000F);
	}
}

void func_417(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000004))
		{
			Global_19C087.f_2 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 0x00000004);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000004))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 0x00000004);
	}
}

int func_418(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62() && !func_419())
	{
		return Global_265ADF.f_1;
	}
	return Global_24E4E9.f_535[iParam0 /*3*/].f_1;
}

int func_419()
{
	if (((Global_265AE2 != 0x00000000 && Global_265AE2 == Global_265AE3) && Global_265AD7 != 0x00000003) && Global_265AD7 != 0x00000001)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_420()
{
	if (!func_397())
	{
		if (func_32())
		{
			if (func_371())
			{
				if (!unk_0xFEBC1E4EC9E001F0() && !unk_0x8FA469D9C5F1A01F())
				{
					func_423("DRONE_TRIG");
				}
			}
			else if (func_422("DRONE_TRIG"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			if (func_32() || func_370())
			{
				if (unk_0xB9132A06AE472728(0x00000002, 0x000000B0) || unk_0x9A01369A10646AFE(0x00000002, 0x000000B0))
				{
					func_364(0x00000001);
					func_356(0x00000001);
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
			else if (func_422("DRONE_TRIG"))
			{
				if ((unk_0xB9132A06AE472728(0x00000002, 0x00000033) || unk_0x9A01369A10646AFE(0x00000002, 0x00000033)) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					Local_85.f_76 = 0x00000000;
					func_364(0x00000001);
					func_356(0x00000001);
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
		}
		else if ((func_30() && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0x00000000, 0x00000001, 0x00000000)) && func_371())
		{
			if (!unk_0xFEBC1E4EC9E001F0() && !unk_0x8FA469D9C5F1A01F())
			{
				func_423("DRONE_TRIG");
			}
			if (func_422("DRONE_TRIG"))
			{
				if (unk_0xB9132A06AE472728(0x00000002, 0x00000033) || unk_0x9A01369A10646AFE(0x00000002, 0x00000033))
				{
					Local_85.f_76 = 0x00000000;
					func_364(0x00000001);
					func_356(0x00000001);
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
		}
		else if (func_422("DRONE_TRIG"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		if (func_421() || func_32())
		{
			if (func_422("DRONE_TRIG"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
		}
	}
	else if (func_422("DRONE_TRIG"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
}

int func_421()
{
	if ((((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 0x00000003)) || func_51(unk_0x16F2683693E537C9(), 0x7D8F4411))
	{
		return 0x00000001;
	}
	if ((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 0x00000003))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_422(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_423(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

void func_424(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000001))
		{
			Global_19C087.f_2 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 0x00000001);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000001))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 0x00000001);
	}
}

void func_425()
{
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_85.f_79), 0x00000000))
		{
			Local_85.f_70 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_85.f_79), 0x00000001) };
			Local_85.f_57 = unk_0xD9522BA9E27E1349(unk_0xB177666FAB6F4417(Local_85.f_79));
			if (!func_10(&(Local_85.f_BE)))
			{
				func_8(&(Local_85.f_BE), 0x00000000, 0x00000000);
			}
			else if (func_7(&(Local_85.f_BE), 0x000003E8, 0x00000000))
			{
				if (!func_384(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_199, Local_85.f_70, 0x00000000))
				{
					Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_199 = { Local_85.f_70 };
				}
				if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_19C != unk_0xD9522BA9E27E1349(unk_0xB177666FAB6F4417(Local_85.f_79)))
				{
					Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_19C = unk_0xD9522BA9E27E1349(unk_0xB177666FAB6F4417(Local_85.f_79));
				}
				func_6(&(Local_85.f_BE));
			}
		}
	}
	if (func_25(Local_85.f_7D))
	{
		if (unk_0x4FC40AB0ECCE6E18(Local_85.f_7D))
		{
			unk_0x4A4806F9D471E491(Local_85.f_7D, 0x00000000, 0x00000000);
		}
	}
	if (func_25(Local_85.f_7B))
	{
		if (unk_0x4FC40AB0ECCE6E18(Local_85.f_7B))
		{
			unk_0x4A4806F9D471E491(Local_85.f_7B, 0x00000000, 0x00000000);
		}
	}
}

void func_426()
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
				func_427(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_427(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x218F818E64020C17(0x00000001, iParam0, &Var0, 0x0000000D))
		{
			if (unk_0xC844350D5D58C99A(Var0) && unk_0xA5FBBC2F619A4DE2(Local_85.f_79) == Var0)
			{
				if (unk_0xC844350D5D58C99A(Var0.f_1))
				{
					if (unk_0xEC560E589DF8370E(Var0.f_1))
					{
						if (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var0.f_1)) && unk_0x16F2683693E537C9() != unk_0x940C1429253D3B1B(Var0.f_1))
						{
							Local_85.f_19 = 0x00000002;
						}
					}
				}
			}
		}
	}
}

void func_428()
{
	if (func_434(0x00000003))
	{
		if (((func_119() || func_9()) || func_29()) || (func_17() && !func_18()))
		{
			if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				func_277(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
			}
		}
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000000);
		if (!func_27())
		{
			func_429();
			unk_0xEAB026E686C0D991(0x00000000, 0x00000013, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000000, 0x000000A6, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000000, 0x000000A7, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000000, 0x000000A8, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000000, 0x000000A9, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000DA, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000DB, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000DC, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000DD, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000CD, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000CE, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000CF, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000D0, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000D1, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000D2, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000CA, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x00000033, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000BE, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000BD, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000BC, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000BB, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000C9, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000C7, 0x00000001);
			unk_0xEAB026E686C0D991(0x00000002, 0x000000C8, 0x00000001);
			if (unk_0x91E3F625EF57450D(0x00000000))
			{
				unk_0xEAB026E686C0D991(0x00000000, 0x000000EE, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000ED, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000002, 0x000000EB, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000002, 0x000000EA, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000002, 0x00000001, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000002, 0x000000AE, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000002, 0x000000AF, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000AE, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000AF, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000F5, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000F6, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000F7, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000F8, 0x00000001);
			}
			if (unk_0x798A3F1296751F46())
			{
				unk_0xEAB026E686C0D991(0x00000000, 0x000000C9, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000CA, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000BC, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000BB, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000000, 0x000000BD, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000002, 0x000000C3, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000002, 0x000000C4, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000002, 0x000000C6, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000002, 0x000000C5, 0x00000001);
				unk_0xEAB026E686C0D991(0x00000002, 0x000000D9, 0x00000001);
			}
		}
	}
}

void func_429()
{
	func_430();
}

void func_430()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000169)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, iVar0, 0x00000001);
		iVar0++;
	}
}

void func_431()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001C))
	{
		if (!func_10(&(Local_85.f_C0)))
		{
			func_8(&(Local_85.f_C0), 0x00000000, 0x00000000);
		}
		else if (func_7(&(Local_85.f_C0), 0x00001388, 0x00000000))
		{
			unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000001C);
			func_6(&(Local_85.f_C0));
		}
	}
}

void func_432()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0x0000001B))
	{
		if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8 != func_16())
		{
			iVar0 = Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8;
		}
		else if (Global_18446E != func_16())
		{
			iVar0 = Global_18446E;
		}
		else if (func_259(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			if (func_149() != func_16())
			{
				iVar0 = func_149();
			}
		}
		if (iVar0 != func_16())
		{
			if (unk_0x40B8C182D63932FC(iVar0))
			{
				if (unk_0x8CD06866876216F2())
				{
					func_160(iVar0, 0x00000000);
					unk_0x0674E58A79778E99(&(Local_85.f_5), 0x0000001B);
				}
			}
		}
	}
}

void func_433()
{
	vector3 vVar0;
	
	if (func_119())
	{
		if (func_434(0x00000001))
		{
			if (func_25(func_321()))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(func_321(), 0x00000001) };
				unk_0xA4A0E041958E996F(vVar0, 200f, 200f);
				unk_0x9303BDE130B7DFE2(Local_85.f_70, 60f, 0x0000001E);
			}
		}
	}
	if (func_434(0x00000001) || func_434(0x00000003))
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
		{
			if (unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0x9CF8D5C7090408A2(Local_85.f_83))
			{
				if (func_434(0x00000003))
				{
					unk_0xA4A0E041958E996F(Local_85.f_70, 60f, 200f);
					unk_0x71AEB1E48B81572C();
					unk_0xF49D1BC9EF1C3EF4(Local_85.f_70, unk_0x56E9E0FD5ACCD35D(unk_0x09AD4CE7DA179533(Local_85.f_79)));
					if ((unk_0xF4CCC8CB6DE7F1AE() % 0x00000078) == 0x00000000)
					{
						unk_0x9303BDE130B7DFE2(Local_85.f_70, 60f, 0x0000001E);
					}
				}
			}
		}
	}
}

bool func_434(int iParam0)
{
	return Local_85.f_AA == iParam0;
}

int func_435()
{
	if (func_439())
	{
		return 0x00000001;
	}
	if (!func_285())
	{
		return 0x00000001;
	}
	if (unk_0xD803B885F5E47A62() != func_16())
	{
		if (func_248(unk_0xD803B885F5E47A62()) && !func_247())
		{
			return 0x00000001;
		}
	}
	if (func_181(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (func_345(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (func_438())
	{
		if (func_437())
		{
			return 0x00000001;
		}
		if (func_346(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			return 0x00000001;
		}
		if (func_31())
		{
			return 0x00000001;
		}
		if (!func_436())
		{
			if (func_7(&(Local_85.f_D0), 0x00002710, 0x00000000))
			{
				return 0x00000001;
			}
		}
		else
		{
			func_6(&(Local_85.f_D0));
		}
	}
	return 0x00000000;
}

int func_436()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (unk_0x0DC0B2DBBD52B0C0() - 0x00000001))
	{
		if (unk_0xEAE0D21A50E6C7F4(vLocal_83[iVar0 /*3*/], 0x00000000))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_437()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000016);
}

bool func_438()
{
	return unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 0x00000003);
}

bool func_439()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000000);
}

int func_440()
{
	var uVar0;
	
	func_448(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_447())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_446())
	{
		return 0x00000001;
	}
	if (func_445(0x0000009F))
	{
		if (!func_444())
		{
			return 0x00000001;
		}
	}
	if (func_445(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_441() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_441()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_441()
{
	switch (func_443())
	{
		case 0x00000000:
			return func_442();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_442()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_443()
{
	return Global_7830;
}

bool func_444()
{
	return Global_2564C8.f_256;
}

int func_445(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_446()
{
	return Global_258C08;
}

bool func_447()
{
	return Global_2564C8.f_251;
}

void func_448(var uParam0)
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
					func_449(iVar0);
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

void func_449(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_15(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_450(iVar2, &bVar3))
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

int func_450(int iParam0, var uParam1)
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

void func_451()
{
	SYSTEM::WAIT(0x00000000);
}

void func_452(bool bParam0)
{
	if (!func_438())
	{
		func_458(bParam0);
	}
	else
	{
		func_453();
	}
}

void func_453()
{
	func_6(&(Local_85.f_D0));
	func_457(0x00000000);
	func_456(0x00000000);
	func_455(0x00000000);
	func_454();
}

void func_454()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_455(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000015))
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000015);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000015))
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000015);
	}
}

void func_456(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000016))
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000016);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000016))
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000016);
	}
}

void func_457(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_116, 0x0000001F))
		{
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_116), 0x0000001F);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_116, 0x0000001F))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_116), 0x0000001F);
	}
}

void func_458(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		unk_0x866EE3B81CEF363A(Local_85.f_79, 0x00000001);
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 0x00000002))
			{
				if (func_27())
				{
					if (func_25(unk_0x16F2683693E537C9()))
					{
						unk_0xA2FC3824D7AFA946(unk_0x16F2683693E537C9(), Local_85.f_70, 0x00000048, 0.5f, 0x00000001, 0x00000000, 0x3F800000);
					}
					else
					{
						unk_0xDA55CDFB97015579(Local_85.f_70, 0x00000048, 0.5f, 0x00000001, 0x00000000, 0x3F800000, 0x00000000);
					}
					unk_0x5E858A00EAFA5B24(0x00000000, 0x0000012C, 0x000000C8);
					unk_0x5D96D8530B3D0904(&(Local_85.f_6), 0x00000002);
				}
			}
			unk_0x066C43E677C08D5C();
			iVar0 = unk_0x09AD4CE7DA179533(Local_85.f_79);
			unk_0x4AE2D6991D4E4082(iVar0, 0x00000000, 0x00000001);
			unk_0xF690C84DADBB3551(&iVar0);
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
			return;
		}
	}
	if (func_17() && !func_18())
	{
		Var1 = 0xFFFFFFFF;
		Var1.f_6 = 0x40000000;
		Var1.f_7 = 0xC0000000;
		Var1.f_3 = 0x00000000;
		Var1.f_4 = 0x00000000;
		func_476(&Var1, 0x0000000B);
	}
	if (func_422("DRONE_TRIG"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (func_25(Local_85.f_7B))
	{
		uVar2 = Local_85.f_7B;
		unk_0xEBA53F35D0085654(&uVar2);
	}
	if (unk_0xC844350D5D58C99A(Local_85.f_7C))
	{
		unk_0xF690C84DADBB3551(&(Local_85.f_7C));
	}
	if (unk_0xE4EDC4B0E92C078B(Local_85.f_85))
	{
		unk_0x142CC44DB769B57E(&(Local_85.f_85));
	}
	if (unk_0xE4EDC4B0E92C078B(Local_85.f_86))
	{
		unk_0x142CC44DB769B57E(&(Local_85.f_86));
	}
	if (unk_0xC844350D5D58C99A(Local_85.f_7D))
	{
		unk_0xA954465BA6FDEFE2(&(Local_85.f_7D));
	}
	unk_0x1FA2A2B10F3906F7();
	unk_0xF737A3AD8873CE16();
	unk_0xFB452C6B9BE826C7();
	unk_0x403399A52DA3CF92(0f);
	if (func_221())
	{
		func_220(0x00000000);
	}
	func_305(0x00000001, 0xFFFFFFFF);
	func_475();
	if (func_18())
	{
		func_313(0x00000000);
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_7A))
	{
		iVar3 = unk_0x09AD4CE7DA179533(Local_85.f_7A);
		unk_0xF690C84DADBB3551(&iVar3);
	}
	if (!bParam0)
	{
		if (!unk_0xEA6BC48857E0AC4C(Local_85.f_78))
		{
			unk_0x8D17794CE3273D70(Local_85.f_78);
		}
		func_474(0x00000000);
	}
	func_230(0x00000000);
	if (func_473() && (!func_248(unk_0xD803B885F5E47A62()) || func_247()))
	{
		func_277(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
	}
	Local_85.f_53 = 0f;
	Local_85.f_54 = 0f;
	Local_85.f_B = 0x00000000;
	Local_85.f_D = 0x00000000;
	Local_85.f_9 = 0x00000000;
	Local_85.f_F = 0x00000000;
	func_6(&(Local_85.f_AE));
	func_6(&(Local_85.f_B0));
	if (!Local_85.f_76)
	{
		func_6(&(Local_85.f_B2));
	}
	func_6(&(Local_85.f_B6));
	func_6(&(Local_85.f_B4));
	func_6(&(Local_85.f_B8));
	func_6(&(Local_85.f_BC));
	func_6(&(Local_85.f_C2));
	func_6(&(Local_85.f_C0));
	func_6(&(Local_85.f_BE));
	func_6(&(Local_85.f_C4));
	func_6(&(Local_85.f_C6));
	func_6(&(Local_85.f_C8));
	func_6(&(Local_85.f_CC));
	func_6(&(Local_85.f_CE));
	func_6(&(Local_85.f_BA));
	Local_85.f_1B = 0x00000000;
	Local_85.f_5 = 0x00000000;
	Local_85.f_6 = 0x00000000;
	Global_19C087.f_4 = 0xFFFFFFFF;
	func_472(-1f);
	func_410(0f);
	func_227(0x00000000);
	func_413(0x00000000);
	func_471(0x00000000);
	func_411(0x00000000);
	func_203(0x00000000);
	func_470(0x00000000);
	func_158(0x00000000);
	func_469(0x00000000);
	func_468(0x00000000);
	func_467(0x00000000);
	func_55(0x00000001);
	func_271(0x00000000);
	func_269(0x00000000);
	func_275(0x00000000);
	func_416(0x00000000);
	func_383(0f, 0f, 0f, 0f, 0f, 0f);
	func_466();
	Global_19C087.f_18 = 0xFFFFFFFF;
	unk_0x0674E58A79778E99(&Global_265ACE, 0x00000000);
	unk_0x0674E58A79778E99(&Global_19DEEE, 0x00000000);
	func_356(0x00000000);
	if (!func_465(0x00000000))
	{
		func_267();
	}
	if (func_58())
	{
		func_144("SET_WARNING_IS_VISIBLE", 0x00000000);
		if (func_119())
		{
			if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8 != func_16() && unk_0x40B8C182D63932FC(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8))
			{
				iVar4 = Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8;
			}
			else if (Global_18446E != func_16() && unk_0x40B8C182D63932FC(Global_18446E))
			{
				iVar4 = Global_18446E;
			}
			else if (func_259(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				if (func_149() != func_16() && unk_0x40B8C182D63932FC(func_149()))
				{
					iVar4 = func_149();
				}
			}
			if (iVar4 != func_16())
			{
				if (unk_0x40B8C182D63932FC(iVar4) && unk_0x8CD06866876216F2())
				{
					func_160(iVar4, 0x00000000);
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000001C);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000001B);
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000001B);
			}
		}
		else if (func_17() || func_142())
		{
			func_6(&Global_19C064);
			func_464(0x000493E0);
			func_463(0x00000001);
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0x0000001C);
		}
		func_363(0x00000000);
		func_362(0x00000000);
		unk_0x0674E58A79778E99(&(vLocal_83[unk_0xD803B885F5E47A62() /*3*/]), 0x00000000);
		iVar5 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_87));
		if (func_17() || func_142())
		{
			Var6.f_7 = Global_C0073;
			Var6.f_1 = Global_C0073.f_1;
			if (unk_0xA14BB9332558B949())
			{
				Var6 = Global_440000.f_2F9AE;
			}
			else
			{
				Var6 = func_461(unk_0xD803B885F5E47A62());
			}
			Var6.f_6 = 0x00000001;
			Var6.f_4 = Local_85.f_1A;
			Var6.f_5 = Local_85.f_1C;
			Var6.f_3 = iVar5;
			Var6.f_2 = Local_85.f_19;
			unk_0xCC6008ED40B90167(&Var6);
		}
		else
		{
			unk_0xC93773AB3297EBFF(iVar5, Local_85.f_19, Local_85.f_1A);
		}
	}
	func_460();
	func_364(0x00000000);
	func_246(0x00000000);
	func_167(0x00000000);
	unk_0xE17FDF9E3068281B(&(Local_85.f_84));
	if (func_162(0x00000001) != 0x00000000)
	{
		unk_0x71199B01895C6202(func_162(0x00000001));
	}
	if (func_162(0x00000000) != 0x00000000)
	{
		unk_0x71199B01895C6202(func_162(0x00000000));
	}
	func_357(0x00000000);
	func_305(0x00000001, 0xFFFFFFFF);
	Local_85.f_19 = 0x00000000;
	Local_85.f_1A = 0x00000000;
	Local_85.f_1C = 0x00000000;
	unk_0x850CF499433B183D(Local_85.f_1B);
	if (unk_0x83A8177D302E1A7E(Local_85.f_88[unk_0xD803B885F5E47A62()]))
	{
		unk_0xF7E25143642732EA(Local_85.f_88[unk_0xD803B885F5E47A62()], 0x00000000);
	}
	if (!bParam0)
	{
		if (!func_147(unk_0xD803B885F5E47A62()))
		{
			func_459(0f, 0f, 0f, 0f);
		}
		Global_19C087.f_2 = 0x00000000;
		func_454();
	}
	else
	{
		func_409(0x00000000, 0x00000001);
	}
}

void func_459(vector3 vParam0, float fParam1)
{
	if (!func_384(Global_19C087.f_A, vParam0, 0x00000000))
	{
		Global_19C087.f_A = { vParam0 };
		Global_19C087.f_7 = fParam1;
	}
}

void func_460()
{
	int iVar0;
	
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_28))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_28);
		unk_0x43A06902454A1172(Local_85.f_28);
		Local_85.f_28 = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_1D))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_1D);
		unk_0x43A06902454A1172(Local_85.f_1D);
		Local_85.f_1D = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_1E))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_1E);
		unk_0x43A06902454A1172(Local_85.f_1E);
		Local_85.f_1E = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_1F))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_1F);
		unk_0x43A06902454A1172(Local_85.f_1F);
		Local_85.f_1F = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_20))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_20);
		unk_0x43A06902454A1172(Local_85.f_20);
		Local_85.f_20 = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_21))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_21);
		unk_0x43A06902454A1172(Local_85.f_21);
		Local_85.f_21 = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_27))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_27);
		unk_0x43A06902454A1172(Local_85.f_27);
		Local_85.f_27 = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_26))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_26);
		unk_0x43A06902454A1172(Local_85.f_26);
		Local_85.f_26 = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_25))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_25);
		unk_0x43A06902454A1172(Local_85.f_25);
		Local_85.f_25 = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_24))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_24);
		unk_0x43A06902454A1172(Local_85.f_24);
		Local_85.f_24 = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_23))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_23);
		unk_0x43A06902454A1172(Local_85.f_23);
		Local_85.f_23 = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_22))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_22);
		unk_0x43A06902454A1172(Local_85.f_22);
		Local_85.f_22 = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_29))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_29);
		unk_0x43A06902454A1172(Local_85.f_29);
		Local_85.f_29 = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_2A))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_2A);
		unk_0x43A06902454A1172(Local_85.f_2A);
		Local_85.f_2A = 0xFFFFFFFF;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_50))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_50);
		unk_0x43A06902454A1172(Local_85.f_50);
		Local_85.f_50 = 0xFFFFFFFF;
	}
	if (func_438())
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000001F)
		{
			if (Local_85.f_2D[iVar0] != 0xFFFFFFFF)
			{
				unk_0x55D0A2DB35045A35(Local_85.f_2D[iVar0]);
				unk_0x43A06902454A1172(Local_85.f_2D[iVar0]);
				Local_85.f_2D[iVar0] = 0xFFFFFFFF;
			}
			iVar0++;
		}
	}
	func_138();
	if (unk_0x562F77A7F33D2E46("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		unk_0x8910D3D58E0132B8("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (unk_0x562F77A7F33D2E46("dlc_aw_arena_piloted_missile_scene"))
	{
		unk_0x8910D3D58E0132B8("dlc_aw_arena_piloted_missile_scene");
	}
	if (unk_0x562F77A7F33D2E46("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		unk_0x8910D3D58E0132B8("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (unk_0x562F77A7F33D2E46("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		unk_0x8910D3D58E0132B8("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
}

int func_461(int iParam0)
{
	if (func_140(iParam0) == 0x000000F3)
	{
		return func_462(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_462(int iParam0)
{
	if (func_141(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

void func_463(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E, 0x00000014))
		{
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E), 0x00000014);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E, 0x00000014))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E), 0x00000014);
	}
}

void func_464(int iParam0)
{
	if (Global_19C087.f_5 != iParam0)
	{
		Global_19C087.f_5 = iParam0;
	}
}

bool func_465(int iParam0)
{
	return Local_85.f_AB == iParam0;
}

void func_466()
{
	if (func_155())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000007);
	}
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000010))
			{
				unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000010);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000010))
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000010);
	}
}

void func_468(bool bParam0)
{
	if (bParam0)
	{
		if (!func_439())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000006);
		}
	}
	else if (func_439())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000006);
	}
}

void func_469(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000003))
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000003);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000003))
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000003);
	}
}

void func_470(bool bParam0)
{
	if (bParam0)
	{
		if (!func_367())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x0000000A);
		}
	}
	else if (func_367())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x0000000A);
	}
}

void func_471(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0x8A22C4C08282BF26(unk_0x12AB0310C2281427("AM_MP_DRONE")) > 0x00000000)
		{
			if (!func_439())
			{
				unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000000);
			}
		}
	}
	else if (func_439())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000000);
	}
}

void func_472(float fParam0)
{
	if (Global_19C087.f_9 != fParam0)
	{
		Global_19C087.f_9 = fParam0;
	}
}

int func_473()
{
	if (!func_285())
	{
		return 0x00000000;
	}
	if (func_48(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!func_58())
	{
		return 0x00000000;
	}
	if (func_27())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_474(bool bParam0)
{
	if (bParam0)
	{
		if (!func_18())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000018);
		}
	}
	else if (func_18())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000018);
	}
}

void func_475()
{
	if (unk_0x9F4FE516EAACCFC5(Local_85.f_83))
	{
		unk_0x9A8DDC7C522F5BF5(Local_85.f_83, 0x00000000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		if (!func_28() || unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 0x00000000))
		{
			unk_0x225CFE81EA219E44();
		}
	}
}

void func_476(var uParam0, int iParam1)
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
	if (!func_10(&(uParam0->f_1)))
	{
		func_8(&(uParam0->f_1), 0x00000000, 0x00000000);
	}
	bVar2 = 0x00000001;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (func_10(&(uParam0->f_1)) && !func_7(&(uParam0->f_1), 0x000003E8, 0x00000000))
		{
			bVar2 = 0x00000000;
		}
		else
		{
			func_6(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_6(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = func_173(unk_0xD803B885F5E47A62());
		if (iVar3 != 0xFFFFFFFF)
		{
			unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, iVar3);
			uParam0->f_5 = 0x00000001;
		}
	}
}

void func_477(struct<12> Param0)
{
	unk_0x37AD2AB54480FA6A(0x00000020, 0x00000000, Param0);
	func_485(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&uLocal_84, 0x00000001);
	unk_0x35B62793EAE9ADDF(&vLocal_83, 0x00000061);
	if (!func_484())
	{
		func_452(0x00000000);
	}
	if (Param0.f_B)
	{
		unk_0x5D96D8530B3D0904(&(Local_85.f_6), 0x00000003);
	}
	if (unk_0x8CD06866876216F2())
	{
		if (!func_438())
		{
			Local_85.f_61 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 0x00000001:
					if (unk_0xC844350D5D58C99A(func_321()) && !unk_0x437347B10A200C4B(func_321(), 0x00000000))
					{
						Local_85.f_6A = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(func_321(), 0x00000001), unk_0xD9522BA9E27E1349(func_321()), 0f, 1.6f, 2.9f) };
						Local_85.f_64 = { Local_85.f_6A };
					}
					func_424(0x00000001);
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 0x00000001;
					break;
				
				case 0x00000002:
					func_483(0x00000001);
					Local_85.f_6A = { Param0.f_5 };
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 0x00000002;
					break;
				
				case 0x00000003:
					func_482(0x00000001);
					Local_85.f_6A = { Param0.f_5 };
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 0x00000003;
					break;
				
				case 0x00000004:
					func_417(0x00000001);
					Local_85.f_6A = { Param0.f_5 };
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 0x00000004;
					break;
				
				case 0x00000005:
					func_481(0x00000001);
					Local_85.f_6A = { Param0.f_5 };
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 0x00000005;
					break;
				
				case 0x00000006:
					func_480(0x00000001);
					Local_85.f_6A = { Param0.f_5 };
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 0x00000006;
					break;
				
				default:
					func_479(0x00000001);
					Local_85.f_6A = { Param0.f_5 };
					break;
			}
			Local_85.f_67 = { Param0.f_8 };
			if (func_240(func_374()))
			{
				func_383(Local_85.f_6A, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_452(0x00000000);
	}
	if (!func_438())
	{
		func_409(0x00000001, 0x00000001);
	}
	else
	{
		func_478();
	}
}

void func_478()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000001F)
	{
		Local_85.f_2D[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
	func_356(0x00000005);
}

void func_479(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000000))
		{
			Global_19C087.f_2 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 0x00000000);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000000))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 0x00000000);
	}
}

void func_480(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000006))
		{
			Global_19C087.f_2 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 0x00000006);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000006))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 0x00000006);
	}
}

void func_481(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000005))
		{
			Global_19C087.f_2 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 0x00000005);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000005))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 0x00000005);
	}
}

void func_482(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000003))
		{
			Global_19C087.f_2 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 0x00000003);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000003))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 0x00000003);
	}
}

void func_483(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000002))
		{
			Global_19C087.f_2 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 0x00000002);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0x00000002))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 0x00000002);
	}
}

int func_484()
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
		if (func_447())
		{
			return 0x00000000;
		}
		if (func_445(0x0000009D))
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

int func_485(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_454();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_486())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_454();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_447())
				{
					if (!bParam2)
					{
						func_454();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_445(0x0000009D))
				{
					if (!bParam2)
					{
						func_454();
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
					func_454();
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
				func_454();
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
			func_454();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_486()
{
	return Global_140856;
}

