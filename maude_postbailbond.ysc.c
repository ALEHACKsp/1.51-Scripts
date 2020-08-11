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
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 0x00000003;
	iLocal_45 = 0xFFFFFFFF;
	iLocal_46 = 0xFFFFFFFF;
	if (unk_0x2EBF608FFE6CA406(0x00000013))
	{
		func_56();
	}
	if (!func_52())
	{
		func_56();
	}
	if (!func_51(iLocal_42))
	{
		func_56();
	}
	else
	{
		func_50();
		iLocal_43 = unk_0x1C0640BA9A7327B3();
		iLocal_45 = func_49();
		iLocal_44 = 0x00000000;
		func_48(0x00000001, &uLocal_48);
	}
	while (0x00000001)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_51(iLocal_42))
			{
				func_56();
			}
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			vVar1 = { unk_0x68F4C0EC296D3901(iLocal_42, 0x00000001) };
			if (SYSTEM::VDIST2(vVar0, vVar1) >= (100f * 100f))
			{
				func_56();
			}
			switch (iLocal_47)
			{
				case 0x00000000:
					func_43(vVar1, vVar0, 0x00004650, 0x41A00000);
					if (func_25(&iLocal_42, 0x00000000))
					{
						func_24();
						func_16(0x00000000);
						func_12(vVar1, vVar0);
						unk_0x3F423BF5B8125A50(func_11());
						iLocal_47 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					if (func_5(&iLocal_42, &iLocal_39, &iLocal_46))
					{
						iLocal_47 = 0x00000002;
					}
					break;
				
				case 0x00000002:
					if (!func_4(iLocal_42, 0x6BA30179) && !unk_0xE9FDA1035CFEA94F(iLocal_42))
					{
						if (!unk_0xB4ECF989E2C1DAC8(iLocal_42, func_11(), func_3(), 0x00000003))
						{
							func_1();
						}
					}
					else
					{
						func_56();
					}
					break;
				}
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	if (func_51(iLocal_42))
	{
		func_2(&iLocal_42);
		unk_0xF3268524E9BE6D6E(iLocal_42, unk_0x16F2683693E537C9(), 10000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0xFADC0A217229F6B5(iLocal_42, 0x00000001);
	}
}

void func_2(int iParam0)
{
	if (func_51(*iParam0))
	{
		unk_0xBAFED2F6486F771A(*iParam0, 0x00000002, 0x00000000);
		unk_0xBAFED2F6486F771A(*iParam0, 0x00000040, 0x00000000);
		unk_0xBAFED2F6486F771A(*iParam0, 0x00000080, 0x00000000);
		unk_0xBAFED2F6486F771A(*iParam0, 0x00000008, 0x00000000);
		unk_0xBAFED2F6486F771A(*iParam0, 0x00000001, 0x00000000);
		unk_0xBAFED2F6486F771A(*iParam0, 0x00000020, 0x00000000);
		unk_0xAFF39FB306F8E232(*iParam0, 0x00000005, 0x00000000);
		unk_0xAFF39FB306F8E232(*iParam0, 0x00000011, 0x00000001);
		unk_0x4E885A246A9D983A(*iParam0, 0x00000076, 0x00000001);
	}
}

char* func_3()
{
	return "female_Flee_Table_Left_Maude";
}

int func_4(int iParam0, int iParam1)
{
	if (func_51(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_51(*iParam0))
	{
		if (unk_0xB4ECF989E2C1DAC8(*iParam0, func_10(), func_9(), 0x00000003))
		{
			if (!unk_0x869EFD0BC0868856(*iParam0) || unk_0xA48EBBEA418ADC94(*iParam0))
			{
				unk_0x3F423BF5B8125A50(func_11());
				if (unk_0xB4AE0788C1587752(func_11()))
				{
					*iParam2 = unk_0xE9744DB7B8CA6965(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 0x00000002);
					unk_0xC90224D9E95E5E3A(*iParam2, 0x00000000);
					unk_0xEFC3DF9D33E248D8(*iParam2, 0x00000000);
					if (func_4(*iParam0, 0x6A67A5CC))
					{
						unk_0x1BF8B16C32704027(*iParam0, -1000f, 0x00000001);
					}
					unk_0x915804B434753CBD(*iParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 0x00001212, 0x00000000, 0x447A0000, 0x00000000);
					unk_0xF895E10BF4C72645(*iParam0, 0x00000000, 0x00000000);
					if (func_8(*iParam1))
					{
						if (unk_0xB4ECF989E2C1DAC8(*iParam1, func_10(), func_7(), 0x00000003))
						{
							unk_0x1BF8B16C32704027(*iParam1, -16f, 0x00000000);
						}
						iVar0 = 0x00000000;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xE14EC663EED44AD5(*iParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 0x447A0000);
					}
					return 0x00000001;
				}
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
	}
	return 0x00000000;
}

char* func_6()
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7()
{
	return "base_chair";
}

int func_8(int iParam0)
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

char* func_9()
{
	return "base";
}

char* func_10()
{
	return "special_ped@maude@base";
}

char* func_11()
{
	return "special_ped@maude@exit_flee";
}

void func_12(vector3 vParam0, vector3 vParam1)
{
	if (func_51(iLocal_42))
	{
		if (!unk_0x65636D4556D82155(iLocal_42))
		{
			if (SYSTEM::VDIST2(vParam1, vParam0) < (35f * 35f))
			{
				func_13(&iLocal_42, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 0x00000003);
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	bool bVar0;
	
	if (func_51(*iParam0))
	{
		bVar0 = unk_0x9645CD1B04C4BFD3(*iParam0);
		if (bVar0)
		{
			unk_0x33CE5A9E32EA10B2(*iParam0, 0x00000000);
		}
		func_14(*iParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0x33CE5A9E32EA10B2(*iParam0, 0x00000001);
		}
	}
}

void func_14(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_15(iParam3), 0x00000000);
}

int func_15(int iParam0)
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

void func_16(bool bParam0)
{
	struct<6> Var0;
	char* sVar1;
	
	if (func_23())
	{
		Var0 = { func_22() };
		sVar1 = func_21();
		if (unk_0x7F8A39872A07D2CE(&Var0, sVar1))
		{
			if (bParam0)
			{
				func_19();
			}
			else
			{
				func_17();
			}
		}
	}
}

void func_17()
{
	Global_4CD7 = 0x00000000;
	func_18();
}

void func_18()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_19()
{
	Global_4CD7 = 0x00000000;
	func_20();
}

void func_20()
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

char* func_21()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000003))
	{
		return "BB4_loiter";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000002))
	{
		return "BB3_loiter";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000001))
	{
		return "BB2_loiter";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000000))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

int func_23()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_24()
{
	if (unk_0xC844350D5D58C99A(iLocal_41))
	{
		unk_0x1E9649458B15960F(iLocal_41, 0x00000000);
	}
	if (unk_0xC844350D5D58C99A(iLocal_40))
	{
		unk_0x1E9649458B15960F(iLocal_40, 0x00000000);
	}
}

int func_25(int iParam0, bool bParam1)
{
	if (func_51(*iParam0))
	{
		if ((unk_0x688A90832774AB83(*iParam0) || unk_0xE147126C9AD09A60(*iParam0)) || unk_0xD24FAF25ADC00F44(*iParam0))
		{
			return 0x00000001;
		}
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), *iParam0))
			{
				return 0x00000001;
			}
			if (unk_0xC844350D5D58C99A(iLocal_39))
			{
				if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_39))
				{
					return 0x00000001;
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_40))
			{
				if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_40))
				{
					return 0x00000001;
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_41))
			{
				if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_41))
				{
					return 0x00000001;
				}
			}
		}
		if (unk_0xFA4CE147B4D9AEE0(*iParam0, 0x0000003D))
		{
			return 0x00000001;
		}
		if (unk_0x869EFD0BC0868856(*iParam0))
		{
			if (unk_0x12DE711B1C681E9E(*iParam0, unk_0x16F2683693E537C9(), 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
		if (unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000033))
		{
			return 0x00000001;
		}
		if (func_33(*iParam0, 0x432A0000))
		{
			return 0x00000001;
		}
		if (func_26(*iParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, unk_0x68F4C0EC296D3901(*iParam0, 0x00000001), 15f))
		{
			return 0x00000001;
		}
		if (unk_0xFA4CE147B4D9AEE0(*iParam0, 0x00000049))
		{
			return 0x00000001;
		}
		if (bParam1)
		{
			if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
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

int func_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0x00000000)
	{
		iVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		iVar0 = 2f;
	}
	if (func_8(unk_0x16F2683693E537C9()) && func_8(iParam0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 0x00000001);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			iVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, iVar0, fVar1))
			{
				return 0x00000001;
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
		else
		{
			if (unk_0x52AE17073D025311(unk_0x16F2683693E537C9()))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), iVar0, 0x00000001))
					{
						return 0x00000001;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					iVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_32(iParam0, bParam1, iVar0, fVar1))
				{
					return 0x00000001;
				}
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_27(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_grenade"), fParam1, 0x00000001) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_molotov"), fParam1, 0x00000001)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_smokegrenade"), fParam1, 0x00000001)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_stickybomb"), 5f, 0x00000001))
		{
			if (bParam3)
			{
				if (func_28(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_28(iParam0, fParam1))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		if (unk_0x723EE7F83DF1497D(vVar0, vVar1, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_28(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0x00000000) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0x00000000))
	{
		if (func_29(iParam0, vVar1, 90f, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_29(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_31(vParam1 - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 0x00000001;
	}
	if (iParam3 == 0x00000000)
	{
		vVar1 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar1 = { func_31(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_30(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_31(vector3 vParam0)
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

int func_32(int iParam0, bool bParam1, int iParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fParam3, fParam3, fParam3, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), iParam2, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_33(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_8(unk_0x16F2683693E537C9()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fVar0, fVar0, fVar0, 0x00000000, 0x00000001, 0x00000000))
			{
				if (func_34(iParam0, fParam1))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_34(int iParam0, float fParam1)
{
	return func_35(iParam0, unk_0x16F2683693E537C9(), fParam1, 0x00000001, 0x000000FA, 0x00000007);
}

bool func_35(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_41(iParam0, iParam1);
	if (!func_8(iParam0) || !func_8(iParam1))
	{
		if (iVar2 != 0xFFFFFFFF)
		{
			func_40(&(Local_37[iVar2 /*4*/]));
		}
		return 0x00000000;
	}
	if (!func_39(iParam0, iParam1, fParam2, iParam3))
	{
		return 0x00000000;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		iVar2 = func_38();
		if (iVar2 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		Local_37[iVar2 /*4*/].f_1 = iParam0;
		Local_37[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_37[iVar2 /*4*/]), vVar1, iParam1, &(Local_37[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1C0640BA9A7327B3() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_36(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0x00000000;
	if (!func_8(iParam2))
	{
		*uParam0 = 0x00000000;
		return 0x00000000;
	}
	if (*uParam0 == 0x00000000)
	{
		vVar1 = { func_37(iParam2, iParam5) };
		*uParam0 = unk_0xCD02F8660C47B801(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 0x000001FF, iParam4, 0x00000007);
		return 0x00000000;
	}
	iVar4 = unk_0x1EC301670B54C6DE(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0x00000000)
	{
		*uParam0 = 0x00000000;
		return 0x00000000;
	}
	else if (iVar4 == 0x00000001)
	{
		return 0x00000000;
	}
	*uParam0 = 0x00000000;
	if (unk_0xEC560E589DF8370E(iVar3))
	{
		func_8(iVar3);
		if (unk_0x940C1429253D3B1B(iVar3) == iParam2)
		{
			if (bLocal_38)
			{
				unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam2, 0x00000001), 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
			}
			*uParam3 = unk_0x1C0640BA9A7327B3();
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (unk_0xE2F1E99DD161A861(iVar3))
	{
		func_8(iVar3);
		if (unk_0x405E212DDE472467(iParam2, 0x00000000))
		{
			if (unk_0x96A5FE5834B81CE7(iVar3) == unk_0x6937EA2286828455(iParam2, 0x00000000))
			{
				if (bLocal_38)
				{
					unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam2, 0x00000001), 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
				}
				*uParam3 = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
		return 0x00000000;
	}
	return 0x00000000;
}

Vector3 func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0x00000007)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000007);
		iParam1 = iVar0;
	}
	if (iParam1 == 0x00000000)
	{
		return unk_0x68F4C0EC296D3901(iParam0, 0x00000001);
	}
	else if (iParam1 == 0x00000001)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000002)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x00009995, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000003)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x000049D9, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000004)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000DEAD, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000005)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000F9BB, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000006)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x00009000, 0f, 0f, 0f);
	}
	return unk_0x68F4C0EC296D3901(iParam0, 0x00000001);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0x00000000 && Local_37[iVar0 /*4*/].f_1 == 0x00000000) && Local_37[iVar0 /*4*/].f_2 == 0x00000000)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_39(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_31(unk_0x68F4C0EC296D3901(iParam1, 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 0x00000001;
	}
	if (iParam3 == 0x00000000)
	{
		vVar1 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar1 = { func_31(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_40(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_42(int iParam0)
{
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_43(vector3 vParam0, vector3 vParam1, int iParam2, float fParam3)
{
	var uVar0;
	char[] cVar1[8];
	char* sVar2;
	
	if (iLocal_44 < iLocal_45)
	{
		if (!func_23())
		{
			if (SYSTEM::VDIST2(vParam1, vParam0) < (fParam3 * fParam3))
			{
				if (unk_0x1C0640BA9A7327B3() - iLocal_43) > (iParam2 + unk_0x09AC81E49EA267F7(0x00000000, 0x000007D0))
				{
					uVar0 = 0x00000010;
					func_47(&uVar0, 0x00000003, iLocal_42, "MAUDE", 0x00000000, 0x00000001);
					cVar1 = func_46();
					sVar2 = func_21();
					func_44(&uVar0, cVar1, sVar2, 0x00000007, 0x00000000, 0x00000000);
					iLocal_43 = unk_0x1C0640BA9A7327B3();
					iLocal_44++;
					return 0x00000001;
				}
			}
		}
		else
		{
			iLocal_43 = unk_0x1C0640BA9A7327B3();
		}
	}
	return 0x00000000;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_45(uParam0, 0x00000091, sParam1, iParam4, iParam5, 0x00000000);
	if (iParam3 > 0x00000007)
	{
		if (iParam3 < 0x0000000C)
		{
			iParam3 = 0x00000007;
		}
	}
	unk_0x5D96D8530B3D0904(&Global_4CD7, 0x00000000);
	Global_5148 = iParam3;
	StringCopy(&Global_513B, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = iParam5;
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

char* func_46()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000003))
	{
		return "BB4AUD";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000002))
	{
		return "BB3AUD";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000001))
	{
		return "BB2AUD";
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000000))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_48(bool bParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 2711.198f, 4134.425f, 32.90168f };
	vVar1 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = unk_0x7D6CA5F52B3748BF(vVar0, vVar1, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
		unk_0x10F3BFFADF2CE3DA(vVar0, vVar1);
		unk_0xE342F209E49C5314(vVar0, vVar1, 0x00000000, 0x00000001);
		unk_0x21688103CC7F9B19(vVar0, vVar1, 0x00000000);
		unk_0xF858EFDE1871B5F2(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0x00000000, 0x00000001);
		unk_0x536F1BE96C726C4B(2728.333f, 4144.778f, 43.29292f, 7.5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		unk_0x2952D66A502EA873(*uParam1, 0x00000000);
		unk_0xEFED0CD6E25037B9();
		unk_0xE342F209E49C5314(vVar0, vVar1, 0x00000001, 0x00000001);
		unk_0xF5894FEB702E7E76(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0x00000001);
	}
}

int func_49()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000003))
	{
		return 0x00000004;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000002))
	{
		return 0x00000004;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000001))
	{
		return 0x00000004;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, 0x00000000))
	{
		return 0x00000003;
	}
	return 0x00000004;
}

void func_50()
{
	vector3 vVar0;
	
	if (func_51(iLocal_42))
	{
		if (!unk_0xAF6690C489CC6203(iLocal_42))
		{
			unk_0x73270B3C9CC833FD(iLocal_42, 0x00000001, 0x00000000);
		}
		unk_0x11AD11297DC58CC7(iLocal_42, 0x00000001);
		unk_0x6D80F1AEBA734886(iLocal_42, 0x00000000);
		unk_0x25C5402CC10F76CD(iLocal_42, 0x00000000);
		unk_0x6DF7BF67E86AAE86(iLocal_42, 0x6F0783F5);
		unk_0x8685456FA9090367(iLocal_42, 0x00000000);
		unk_0xBB46CD6FAFB19C92(iLocal_42, 0x00000000);
		unk_0x4E885A246A9D983A(iLocal_42, 0x00000076, 0x00000000);
		vVar0 = { 2728.33f, 4145.6f, 43.89f };
		if (unk_0xBF75E4DF4C367CD9(vVar0, 10f, 0xE94F008D, 0x00000000))
		{
			iLocal_40 = unk_0x4B72871A3BE7B474(vVar0, 10f, 0xE94F008D, 0x00000001, 0x00000000, 0x00000001);
			if (func_8(iLocal_40))
			{
				unk_0xA47B46945FF6DE74(iLocal_40, 2727.4f, 4145.56f, 43.68f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(iLocal_40, -92.17f);
				unk_0x1E9649458B15960F(iLocal_40, 0x00000001);
			}
		}
		if (unk_0xBF75E4DF4C367CD9(vVar0, 10f, 0x5293CC8D, 0x00000000))
		{
			iLocal_41 = unk_0x4B72871A3BE7B474(vVar0, 10f, 0x5293CC8D, 0x00000000, 0x00000000, 0x00000001);
			if (func_8(iLocal_41))
			{
				if (!unk_0xAF6690C489CC6203(iLocal_41))
				{
					unk_0x73270B3C9CC833FD(iLocal_41, 0x00000001, 0x00000000);
				}
				unk_0xA47B46945FF6DE74(iLocal_41, 2727.686f, 4145.715f, 44.08f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(iLocal_41, 71f);
				unk_0x1E9649458B15960F(iLocal_41, 0x00000001);
			}
		}
		if (unk_0xBF75E4DF4C367CD9(vVar0, 10f, 0xD3C6D323, 0x00000000))
		{
			iLocal_39 = unk_0x4B72871A3BE7B474(vVar0, 10f, 0xD3C6D323, 0x00000000, 0x00000000, 0x00000001);
			if (func_8(iLocal_39))
			{
				if (!unk_0xAF6690C489CC6203(iLocal_39))
				{
					unk_0x73270B3C9CC833FD(iLocal_39, 0x00000001, 0x00000000);
				}
				unk_0xA47B46945FF6DE74(iLocal_39, 2728.35f, 4145.59f, 43.3f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(iLocal_39, -91.28f);
			}
		}
	}
}

int func_51(int iParam0)
{
	if (func_8(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_52()
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar2, 0xFFFFFFFF);
		iVar1 = 0x00000000;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x134B62B726CEC8E6(uVar2[iVar1]) == func_53(0x0000003E))
				{
					iLocal_42 = uVar2[iVar1];
					return 0x00000001;
				}
			}
			iVar1++;
		}
	}
	return 0x00000000;
}

int func_53(int iParam0)
{
	if (!func_55(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_54(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_55(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_56()
{
	func_48(0x00000000, &uLocal_48);
	if (func_8(iLocal_41))
	{
		unk_0x1E9649458B15960F(iLocal_41, 0x00000000);
	}
	func_58(&iLocal_41, 0x00000000);
	if (func_8(iLocal_40))
	{
		unk_0x1E9649458B15960F(iLocal_40, 0x00000000);
	}
	func_58(&iLocal_40, 0x00000000);
	if (func_8(iLocal_39))
	{
		unk_0x1E9649458B15960F(iLocal_39, 0x00000000);
		if (unk_0xB4ECF989E2C1DAC8(iLocal_39, "special_ped@maude@base", "base_chair", 0x00000003))
		{
			unk_0x7720CBBC7DD82563(iLocal_39, "base_chair", "special_ped@maude@base", -1000f);
			unk_0x1BF8B16C32704027(iLocal_39, -1000f, 0x00000001);
		}
		else if (unk_0xB4ECF989E2C1DAC8(iLocal_39, func_11(), "Female_Flee_Table_Left_Maude_Chair", 0x00000003))
		{
			unk_0x7720CBBC7DD82563(iLocal_39, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0x1BF8B16C32704027(iLocal_39, -1000f, 0x00000001);
		}
	}
	func_58(&iLocal_39, 0x00000000);
	if (func_51(iLocal_42))
	{
		unk_0xFADC0A217229F6B5(iLocal_42, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_42, 0x00000076, 0x00000001);
	}
	func_57(&iLocal_42, 0x00000001, 0x00000000, 0x00000001);
	unk_0x8D17794CE3273D70(func_11());
	unk_0x10FAF14A60A0DBE1();
}

void func_57(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
			if (iParam3 == 0x00000000)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, bParam1);
			if (iParam2 == 0x00000001)
			{
				unk_0x11AD11297DC58CC7(*iParam0, 0x00000000);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

void func_58(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
		}
		if (!bParam1)
		{
			unk_0xEEEE2E5FA6F78DF0(iParam0);
		}
		else
		{
			unk_0xAA2AE6161CB0D2DC(*iParam0);
		}
	}
}

