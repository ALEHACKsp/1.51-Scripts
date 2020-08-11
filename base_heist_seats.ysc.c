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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<14> Local_47[30];
	var uLocal_48 = 0;
	var uLocal_49 = -1;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = -1;
	var uLocal_55 = -1;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
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
	if (func_78())
	{
		while (!func_64())
		{
			func_11();
			SYSTEM::WAIT(0x00000000);
		}
	}
	func_1();
}

void func_1()
{
	unk_0x0674E58A79778E99(&Global_18045A, 0x00000001);
	func_3(&Local_47);
	func_2();
}

void func_2()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_3(int iParam0)
{
	func_9(&(iParam0->f_1A5.f_5));
	func_4(iParam0, 0x00000001);
}

void func_4(var uParam0, bool bParam1)
{
	if (func_5(uParam0))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (bParam1)
	{
		func_9(&(uParam0->f_1A5.f_5));
	}
}

bool func_5(var uParam0)
{
	char* sVar0;
	char* sVar1;
	
	func_7(uParam0, uParam0->f_1A5.f_2, &sVar0);
	func_7(uParam0, uParam0->f_1A5.f_2, &sVar1);
	return (func_6(&sVar0) || func_6(&sVar1));
}

bool func_6(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_7(var uParam0, int iParam1, char* sParam2)
{
	if (func_8(&(uParam0->f_1A5), 0x00000007))
	{
		Stack.Push(uParam0[iParam1 /*14*/]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(uParam0->f_1A5.f_E);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, iParam1);
}

void func_9(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
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

int func_10(int iParam0)
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

void func_11()
{
	func_19(&Local_47);
	if (Global_18446C == unk_0xD803B885F5E47A62() && !unk_0xEAE0D21A50E6C7F4(Global_19D462[unk_0x6E61BE9E61434AC1() /*39*/].f_1B, 0x00000005))
	{
		if (func_18(&Local_47, 0x00000001, 0x00000001))
		{
			func_17(&Local_47);
		}
		if (func_18(&Local_47, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&Global_18045A, 0x00000001);
			if ((((((iLocal_64 == 0x00000000 && !unk_0xEAE0D21A50E6C7F4(Global_19D462[unk_0x6E61BE9E61434AC1() /*39*/].f_1B, 0x00000003)) && !func_16()) && !unk_0x798A3F1296751F46()) && !func_15(0x00000000)) && !func_14()) && unk_0xD245978525608929(0x00000000, 0x000000E1))
			{
				func_12(&Local_47);
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&Global_18045A, 0x00000001);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_18045A, 0x00000001);
	}
	iLocal_64 = 0x00000000;
	if (unk_0xEAE0D21A50E6C7F4(Global_19D462[unk_0x6E61BE9E61434AC1() /*39*/].f_1B, 0x00000003))
	{
		unk_0x5D96D8530B3D0904(&iLocal_64, 0x00000000);
	}
	if (func_16())
	{
		unk_0x5D96D8530B3D0904(&iLocal_64, 0x00000001);
	}
	if (unk_0x798A3F1296751F46())
	{
		unk_0x5D96D8530B3D0904(&iLocal_64, 0x00000002);
	}
	if (func_14())
	{
		unk_0x5D96D8530B3D0904(&iLocal_64, 0x00000004);
	}
	if (func_15(0x00000000))
	{
		unk_0x5D96D8530B3D0904(&iLocal_64, 0x00000003);
	}
}

void func_12(int iParam0)
{
	func_13(&(iParam0->f_1A5), 0x0000000A);
}

void func_13(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(iParam0, iParam1);
}

bool func_14()
{
	return Global_12061;
}

int func_15(int iParam0)
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

int func_16()
{
	if (Global_2537E2.f_484.f_5 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_17(int iParam0)
{
	func_13(&(iParam0->f_1A5), 0x00000009);
}

bool func_18(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0->f_1A5.f_4 > 0x00000002 && (iParam1 || func_8(&(iParam0->f_1A5), 0x0000000B))) && (iParam2 || iParam0->f_1A5.f_4 < 0x00000008));
}

void func_19(int iParam0)
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	func_62(iParam0);
	func_60(iParam0);
	Var2.f_1.f_6 = 0x3F400000;
	Var2 = { *(iParam0[iParam0->f_1A5.f_2 /*14*/]) };
	switch (iParam0->f_1A5.f_4)
	{
		case 0x00000000:
			func_59(&(iParam0->f_1A5), 0x0000000B);
			func_58(iParam0, 0x00000001);
			break;
		
		case 0x00000001:
			if (func_57(iParam0))
			{
				iParam0->f_1A5.f_6 = unk_0x1C0640BA9A7327B3();
				func_58(iParam0, 0x00000002);
			}
			break;
		
		case 0x00000002:
			if (func_56(unk_0x16F2683693E537C9(), iParam0[iParam0->f_1A5.f_2 /*14*/]))
			{
				if ((func_55(iParam0) || func_53(iParam0)) || !func_52(iParam0))
				{
					func_4(iParam0, 0x00000001);
					func_58(iParam0, 0x00000001);
				}
				else if (iParam0->f_1A5.f_5 == 0xFFFFFFFF)
				{
					if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1A5.f_6) > 0x00000096)
					{
						func_51(&(iParam0->f_1A5.f_5), 0x00000004, "MPJAC_SIT", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000033))
				{
					func_9(&(iParam0->f_1A5.f_5));
					func_48(iParam0);
					func_58(iParam0, 0x00000003);
				}
			}
			else
			{
				func_4(iParam0, 0x00000001);
				func_58(iParam0, 0x00000001);
			}
			break;
		
		case 0x00000003:
			func_47(iParam0, &sVar0);
			unk_0x3F423BF5B8125A50(&sVar0);
			if (unk_0xB4AE0788C1587752(&sVar0))
			{
				func_58(iParam0, 0x00000004);
			}
			break;
		
		case 0x00000004:
			func_47(iParam0, &sVar0);
			func_46(iParam0, &sVar1);
			if (Var2 != 0x00000003)
			{
				vVar3 = { unk_0x1BB04F10296A1C5E(&sVar0, &sVar1, func_45(iParam0), func_44(iParam0), 0x00000000, 0x00000002) };
				vVar4 = { unk_0xEEB20D14BD38615E(&sVar0, &sVar1, func_45(iParam0), func_44(iParam0), 0x00000000, 0x00000002) };
				iVar5 = vVar4.z;
				unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), vVar3, 1f, 0x000001F4, iVar5, 0.15f);
			}
			func_58(iParam0, 0x00000005);
			break;
		
		case 0x00000005:
			func_33(iParam0);
			func_47(iParam0, &sVar0);
			func_46(iParam0, &sVar1);
			if (Var2 == 0x00000003)
			{
				iVar6 = unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x7276D3DF);
			}
			else
			{
				iVar6 = unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x7D8F4411);
			}
			if (iVar6 != 0x00000001 && iVar6 != 0x00000000)
			{
				iParam0->f_1A5.f_1 = unk_0xF66E5A439A080021(func_45(iParam0), func_44(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iParam0->f_1A5.f_1, &sVar0, &sVar1, 2f, -1000f, 0x0000000D, 0x00000010, 1.5f, 0x00000000);
				unk_0x914E6894744915F8(iParam0->f_1A5.f_1);
				iParam0->f_1A5.f_8.f_4 = unk_0x1C0640BA9A7327B3();
				func_13(&(iParam0->f_1A5), 0x00000008);
				func_58(iParam0, 0x00000006);
			}
			break;
		
		case 0x00000006:
			if (func_8(&(iParam0->f_1A5), 0x0000000A))
			{
				func_59(&(iParam0->f_1A5), 0x0000000A);
				func_32(iParam0);
			}
			func_33(iParam0);
			func_26(iParam0);
			iVar7 = unk_0xF958843510932FF6(iParam0->f_1A5.f_1);
			if (unk_0x69DF961355195C3C(iVar7))
			{
				if (unk_0xA45992A6CE82FB43(iVar7) >= 1f)
				{
					func_20(iParam0, 0x00000000);
					func_47(iParam0, &sVar0);
					func_46(iParam0, &sVar1);
					iParam0->f_1A5.f_1 = unk_0xF66E5A439A080021(func_45(iParam0), func_44(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), iParam0->f_1A5.f_1, &sVar0, &sVar1, 4f, -1.5f, 0x0000000D, 0x00000010, 1000f, 0x00000000);
					unk_0x914E6894744915F8(iParam0->f_1A5.f_1);
					func_13(&(iParam0->f_1A5), 0x00000008);
					func_13(&(iParam0->f_1A5), 0x0000000B);
				}
				else
				{
					func_59(&(iParam0->f_1A5), 0x00000008);
				}
			}
			else if (!func_8(&(iParam0->f_1A5), 0x00000008))
			{
				func_58(iParam0, 0x00000008);
			}
			break;
		
		case 0x00000007:
			unk_0x45934E8E3471AAA9(iParam0->f_1A5.f_1);
			func_58(iParam0, 0x00000008);
			break;
		
		case 0x00000008:
			iVar8 = unk_0xF958843510932FF6(iParam0->f_1A5.f_1);
			if (unk_0x69DF961355195C3C(iVar8))
			{
				if ((unk_0xA45992A6CE82FB43(iVar8) >= 1f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x15BBCF5B)) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x7E26188D))
				{
					unk_0x45934E8E3471AAA9(iParam0->f_1A5.f_1);
					func_4(iParam0, 0x00000001);
					func_58(iParam0, 0x00000000);
				}
			}
			else
			{
				func_4(iParam0, 0x00000001);
				func_58(iParam0, 0x00000000);
			}
			break;
	}
}

void func_20(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_21(uParam0);
		if (iVar1 != uParam0->f_1A5.f_8.f_1)
		{
			if (iVar1 == 0x00000000)
			{
				iVar0 = (0x0000000B + uParam0->f_1A5.f_8.f_1);
			}
			else
			{
				iVar0 = (0x00000006 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_1A5.f_8.f_2;
		}
		iVar1 = uParam0->f_1A5.f_8.f_1;
	}
	else if (uParam0->f_1A5.f_8.f_2 == 0x00000005)
	{
		iVar1 = uParam0->f_1A5.f_8.f_1;
		iVar2 = 0x00000003;
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, iVar2);
		if (iVar0 == uParam0->f_1A5.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_1A5.f_8.f_2 > 0x00000006)
		{
			iVar1 = func_21(uParam0);
			uParam0->f_1A5.f_8.f_4 = unk_0x1C0640BA9A7327B3();
		}
		else
		{
			iVar1 = uParam0->f_1A5.f_8.f_1;
		}
		if ((unk_0x1C0640BA9A7327B3() - uParam0->f_1A5.f_8.f_4) >= 0x00015F90)
		{
			iVar1 = func_21(uParam0);
			if (iVar1 != uParam0->f_1A5.f_8.f_1)
			{
				if (iVar1 == 0x00000000)
				{
					iVar0 = (0x0000000B + uParam0->f_1A5.f_8.f_1);
				}
				else
				{
					iVar0 = (0x00000006 + iVar1);
				}
			}
			iVar1 = uParam0->f_1A5.f_8.f_1;
		}
		else
		{
			iVar0 = 0x00000005;
		}
	}
	uParam0->f_1A5.f_8.f_3 = uParam0->f_1A5.f_8.f_2;
	uParam0->f_1A5.f_8.f_2 = iVar0;
	uParam0->f_1A5.f_8.f_1 = iVar1;
}

int func_21(var uParam0)
{
	if (uParam0->f_1A5.f_8 == 0x00000002)
	{
		return uParam0->f_1A5.f_8.f_1;
	}
	return (uParam0->f_1A5.f_8.f_1 + 1 % func_22(uParam0->f_1A5.f_8));
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000003;
		
		case 0x00000001:
			return func_23(func_24(), 0x00000004, 0x00000005);
		
		case 0x00000002:
			return 0x00000005;
		
		default:
	}
	return 0x00000000;
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24()
{
	return func_25(unk_0xD803B885F5E47A62());
}

int func_25(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_26(var uParam0)
{
	vector3 vVar0;
	float fVar1;
	
	if (uParam0->f_1A5.f_4 == 0x00000006)
	{
		vVar0 = { unk_0x4F3973434662D795(0x00000000, 0x000000DA), unk_0x4F3973434662D795(0x00000000, 0x000000DB), 0f };
		fVar1 = SYSTEM::VMAG(vVar0);
		if ((uParam0->f_1A5.f_4 == 0x00000006 && !unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xB13316F3)) && !func_8(&(uParam0->f_1A5), 0x0000000C))
		{
			if (fVar1 >= 0.35f)
			{
				func_31(uParam0);
			}
		}
		if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xB13316F3))
		{
			func_4(uParam0, 0x00000001);
		}
		else if (func_30(uParam0))
		{
			func_4(uParam0, 0x00000001);
		}
		else
		{
			unk_0xA2E3EDD0E119882F(0x00000002);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000018, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000101, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008E, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000107, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000108, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008F, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
			if (((((!unk_0x798A3F1296751F46() && !func_8(&(uParam0->f_1A5), 0x00000000)) && !func_8(&(uParam0->f_1A5), 0x00000004)) && !func_29()) && !func_27(0x00000001)) && uParam0->f_1A5.f_8.f_2 != 0x00000003)
			{
				if (uParam0->f_1A5.f_5 == 0xFFFFFFFF)
				{
					func_51(&(uParam0->f_1A5.f_5), 0x00000004, "MPJAC_EXIT", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				if (uParam0->f_1A5.f_4 == 0x00000006)
				{
					if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000033))
					{
						func_32(uParam0);
					}
				}
			}
		}
	}
	func_59(&(uParam0->f_1A5), 0x00000009);
}

int func_27(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_28(unk_0x16F2683693E537C9()))
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

int func_28(int iParam0)
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

int func_29()
{
	if (Global_2537E2.f_484.f_5 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_30(var uParam0)
{
	return func_8(&(uParam0->f_1A5), 0x00000009);
}

void func_31(var uParam0)
{
	char* sVar0;
	char* sVar1;
	
	if (((func_21(uParam0) != uParam0->f_1A5.f_8.f_1 && uParam0->f_1A5.f_8.f_2 < 0x00000006) && uParam0->f_1A5.f_8.f_2 != 0x00000003) && uParam0->f_1A5.f_8.f_2 != 0x00000004)
	{
		func_20(uParam0, 0x00000001);
		func_47(uParam0, &sVar0);
		func_46(uParam0, &sVar1);
		uParam0->f_1A5.f_1 = unk_0xF66E5A439A080021(func_45(uParam0), func_44(uParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
		unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uParam0->f_1A5.f_1, &sVar0, &sVar1, 4f, -1.5f, 0x0000000D, 0x00000010, 1000f, 0x00000000);
		unk_0x914E6894744915F8(uParam0->f_1A5.f_1);
		func_13(&(uParam0->f_1A5), 0x00000008);
		unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
	}
}

void func_32(var uParam0)
{
	char* sVar0;
	
	uParam0->f_1A5.f_1 = unk_0xF66E5A439A080021(func_45(uParam0), func_44(uParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
	func_47(uParam0, &sVar0);
	unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), uParam0->f_1A5.f_1, &sVar0, "exit", 4f, -4f, 0x0000000D, 0x00000010, 1000f, 0x00000000);
	unk_0x914E6894744915F8(uParam0->f_1A5.f_1);
	func_9(&(uParam0->f_1A5.f_5));
	func_58(uParam0, 0x00000008);
}

void func_33(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_1A5.f_4)
	{
		case 0x00000004:
		case 0x00000008:
			func_38(0x00000001);
		
		case 0x00000006:
			unk_0x2103752056F874E1();
			unk_0x770C703CAD045196(0x00000000);
			unk_0x69FCF499804D6AE7(0x00000000);
			unk_0x3584F71E5CA29322(0x00000013);
			unk_0x3584F71E5CA29322(0x00000002);
			unk_0x5A89B88F77C0FC3B();
			func_37();
			if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001) && iVar0 != joaat("weapon_unarmed"))
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
			}
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
			func_35(0x00000001);
			func_34();
			break;
	}
}

void func_34()
{
	Global_56C3.f_6 = 0x00000001;
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
		if (func_36())
		{
			Global_2564C8.f_25 = 0x00000001;
		}
	}
	else
	{
		Global_2564C8.f_25 = 0x00000000;
	}
}

bool func_36()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

void func_37()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

void func_38(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_15(0x00000000))
		{
			func_39(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_39(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_42())
		{
			func_41(0x00000001, 0x00000001);
		}
		else
		{
			func_41(0x00000000, 0x00000000);
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
	if (!func_40())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_40()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0x00000000))
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

bool func_42()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_43()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

Vector3 func_44(var uParam0)
{
	vector3 vVar0;
	
	vVar0 = { (uParam0[uParam0->f_1A5.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && uParam0->f_1A5.f_8 == 0x00000000)
	{
		vVar0.z = (vVar0.z - 4f);
	}
	return vVar0;
}

Vector3 func_45(var uParam0)
{
	return (uParam0[uParam0->f_1A5.f_2 /*14*/])->f_8;
}

void func_46(var uParam0, char* sParam1)
{
	switch (uParam0->f_1A5.f_8.f_2)
	{
		case 0x00000000:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		
		case 0x00000001:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		
		case 0x00000002:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		
		case 0x00000003:
			StringCopy(sParam1, "ENTER", 16);
			break;
		
		case 0x00000005:
			StringCopy(sParam1, "BASE", 16);
			break;
		
		case 0x00000004:
			StringCopy(sParam1, "EXIT", 16);
			break;
		
		case 0x00000007:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		
		case 0x00000008:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		
		case 0x00000009:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		
		case 0x0000000A:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		
		case 0x0000000C:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		
		case 0x0000000D:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		
		case 0x0000000E:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		
		case 0x0000000F:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		
		default:
			StringCopy(sParam1, "invalid_clip", 16);
	}
}

void func_47(var uParam0, char* sParam1)
{
	switch (uParam0->f_1A5.f_8)
	{
		case 0x00000000:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		
		case 0x00000001:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		
		case 0x00000002:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_24())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_1A5.f_8)
	{
		case 0x00000001:
		case 0x00000000:
			switch (uParam0->f_1A5.f_8.f_1)
			{
				case 0x00000000:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				
				case 0x00000001:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				
				case 0x00000002:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				
				case 0x00000003:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				
				case 0x00000004:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0->f_1A5.f_8.f_1)
			{
				case 0x00000000:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 0x00000001:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 0x00000002:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 0x00000003:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 0x00000004:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_48(var uParam0)
{
	uParam0->f_1A5.f_8 = func_50((*uParam0)[uParam0->f_1A5.f_2 /*14*/]);
	uParam0->f_1A5.f_8.f_1 = func_49(uParam0);
	uParam0->f_1A5.f_8.f_2 = 0x00000003;
	uParam0->f_1A5.f_8.f_3 = 0x00000003;
}

int func_49(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_1A5.f_8)
	{
		case 0x00000002:
			iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
			if (iVar0 >= 0x00000001)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = unk_0x09AC81E49EA267F7(0x00000000, func_22(uParam0->f_1A5.f_8));
	}
	return iVar0;
}

int func_50(int iParam0)
{
	if (iParam0 >= 0x0000000B)
	{
		return 0x00000000;
	}
	else if (iParam0 >= 0x00000009)
	{
		return 0x00000000;
	}
	else if (iParam0 >= 0x00000007)
	{
		return 0x00000000;
	}
	else if (iParam0 >= 0x00000004)
	{
		return 0x00000000;
	}
	else if (iParam0 > 0x00000001)
	{
		return 0x00000002;
	}
	return 0x00000000;
}

void func_51(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == 0xFFFFFFFF)
		{
			func_9(uParam0);
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

bool func_52(var uParam0)
{
	Stack.Push(!func_8(&(uParam0->f_1A5), 0x00000005));
	Stack.Push(uParam0[uParam0->f_1A5.f_2 /*14*/]);
	Stack.Push(uParam0->f_1A5.f_2);
	Call_Loc(uParam0->f_1A5.f_D);
	return (StackVal || StackVal);
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			if ((iVar1 != unk_0xD803B885F5E47A62() && func_54(iVar1, 0x00000001, 0x00000001)) && func_56(unk_0x9539D44F3E4492F6(iVar1), uParam0[uParam0->f_1A5.f_2 /*14*/]))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_54(int iParam0, bool bParam1, bool bParam2)
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

bool func_55(var uParam0)
{
	return uParam0->f_1A5 & 0x0000001F > 0x00000000;
}

bool func_56(int iParam0, var uParam1)
{
	return unk_0x3D1053F9EB43B7AD(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0x00000000, 0x00000001, 0x00000000);
}

int func_57(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_56(unk_0x16F2683693E537C9(), uParam0[uParam0->f_1A5.f_2 /*14*/]))
		{
			return 0x00000001;
		}
		else
		{
			uParam0->f_1A5.f_2 = (uParam0->f_1A5.f_2 + 1 % 0x0000001E);
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_58(var uParam0, int iParam1)
{
	uParam0->f_1A5.f_4 = iParam1;
}

void func_59(int iParam0, int iParam1)
{
	unk_0x0674E58A79778E99(iParam0, iParam1);
}

void func_60(var uParam0)
{
	if (uParam0->f_1A5.f_4 == 0x00000006)
	{
	}
	else if (uParam0->f_1A5.f_4 > 0x00000004)
	{
		unk_0x797A01B0F40196A9(unk_0x16F2683693E537C9());
		unk_0x7EB60BF335619074(unk_0x16F2683693E537C9(), func_61(uParam0));
		uParam0->f_1A5.f_7 = unk_0xF4CCC8CB6DE7F1AE();
	}
	else if (uParam0->f_1A5.f_4 > 0x00000001)
	{
		unk_0x7EB60BF335619074(unk_0x16F2683693E537C9(), func_61(uParam0));
		uParam0->f_1A5.f_7 = unk_0xF4CCC8CB6DE7F1AE();
	}
	else if ((unk_0xF4CCC8CB6DE7F1AE() - uParam0->f_1A5.f_7) < 0x00000005)
	{
		unk_0x7EB60BF335619074(unk_0x16F2683693E537C9(), func_61(uParam0));
	}
}

float func_61(var uParam0)
{
	switch ((*uParam0)[uParam0->f_1A5.f_2 /*14*/])
	{
		case 0x0000000C:
		case 0x0000000A:
		case 0x00000006:
			return 0.24f;
		
		case 0x00000002:
			return 0.16f;
		
		case 0x00000003:
			return 0.18f;
		
		default:
	}
	return 0.13f;
}

void func_62(var uParam0)
{
	func_63(&(uParam0->f_1A5), 0x00000004, func_14());
	func_63(&(uParam0->f_1A5), 0x00000001, unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000));
	func_63(&(uParam0->f_1A5), 0x00000003, unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001));
	func_63(&(uParam0->f_1A5), 0x00000000, func_15(0x00000000));
	func_63(&(uParam0->f_1A5), 0x00000002, unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9()));
}

void func_63(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(iParam0, iVar0);
	}
	else
	{
		unk_0x0674E58A79778E99(iParam0, iVar0);
	}
}

int func_64()
{
	if (!func_77(unk_0x16F2683693E537C9()))
	{
		return 0x00000001;
	}
	if (func_66())
	{
		return 0x00000001;
	}
	if (Global_18446C == func_65())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_65()
{
	return 0xFFFFFFFF;
}

int func_66()
{
	var uVar0;
	
	func_74(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_73())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_72())
	{
		return 0x00000001;
	}
	if (func_71(0x0000009F))
	{
		if (!func_70())
		{
			return 0x00000001;
		}
	}
	if (func_71(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_67() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_67()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_67()
{
	switch (func_69())
	{
		case 0x00000000:
			return func_68();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_68()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_69()
{
	return Global_7830;
}

bool func_70()
{
	return Global_2564C8.f_256;
}

int func_71(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_72()
{
	return Global_258C08;
}

bool func_73()
{
	return Global_2564C8.f_251;
}

void func_74(var uParam0)
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
					func_75(iVar0);
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

void func_75(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_54(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_76(iVar2, &bVar3))
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

int func_76(int iParam0, var uParam1)
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

bool func_77(int iParam0)
{
	return unk_0x3D1053F9EB43B7AD(iParam0, 354.4375f, 4877.2f, -62.34054f, 345.1211f, 4864.095f, -55.11187f, 16f, 0x00000000, 0x00000001, 0x00000000);
}

int func_78()
{
	if (Global_18446C != func_65())
	{
		if (unk_0xADC2AA9A68E522A1("base_heist_seats", Global_18446C, 0x00000001, 0x00000000))
		{
			return 0x00000000;
		}
		unk_0x37AD2AB54480FA6A(0x00000020, 0x00000000, Global_18446C);
		func_90(0x00000000, 0xFFFFFFFF, 0x00000000);
		unk_0x256D93AFAE851A7A(0x00000000);
		func_79();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_79()
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_89() };
	vVar1 = { func_88() };
	func_85(0x00000000, func_87(343.93f, 4875.389f, -60.44f, -90f), -90f, vVar0, vVar1);
	func_85(0x00000001, func_87(344.08f, 4874.239f, -60.44f, -86f), -86f, vVar0, vVar1);
	func_85(0x00000002, func_87(344.33f, 4873.189f, -60.44f, -78f), -78f, vVar0, vVar1);
	func_85(0x00000003, func_87(344.7f, 4872.239f, -60.44f, -72f), -72f, vVar0, vVar1);
	func_85(0x00000004, func_87(345.06f, 4871.48f, -60.44f, -67f), -67f, vVar0, vVar1);
	func_85(0x00000005, func_87(345.86f, 4870.289f, -60.44f, -60f), -60f, vVar0, vVar1);
	func_85(0x00000006, func_87(350.41f, 4867.05f, -60.44f, -26f), -26f, vVar0, vVar1);
	func_85(0x00000007, func_87(351.51f, 4866.75f, -60.44f, -17f), -17f, vVar0, vVar1);
	func_85(0x00000008, func_87(352.66f, 4866.6f, -60.44f, -10f), -10f, vVar0, vVar1);
	func_85(0x00000009, func_87(353.6f, 4866.58f, -60.44f, -4f), -4f, vVar0, vVar1);
	func_85(0x0000000A, func_87(354.7f, 4866.68f, -60.44f, 4f), 4f, vVar0, vVar1);
	func_85(0x0000000B, func_87(355.85f, 4866.91f, -60.44f, 10f), 10f, vVar0, vVar1);
	func_85(0x0000000C, func_87(346.02f, 4876.871f, -60.838f, -102f), -102f, vVar0, vVar1);
	func_85(0x0000000D, func_87(345.97f, 4875.721f, -60.838f, -93f), -93f, vVar0, vVar1);
	func_85(0x0000000E, func_87(346.19f, 4874.21f, -60.838f, -81f), -81f, vVar0, vVar1);
	func_85(0x0000000F, func_87(346.62f, 4873.01f, -60.838f, -73f), -73f, vVar0, vVar1);
	func_85(0x00000010, func_87(347.27f, 4871.86f, -60.838f, -62f), -62f, vVar0, vVar1);
	func_85(0x00000011, func_87(351.57f, 4868.86f, -60.838f, -20f), -20f, vVar0, vVar1);
	func_85(0x00000012, func_87(352.89f, 4868.65f, -60.838f, -9f), -9f, vVar0, vVar1);
	func_85(0x00000013, func_87(354.17f, 4868.68f, -60.838f, 0f), 0f, vVar0, vVar1);
	func_85(0x00000014, func_87(355.12f, 4868.85f, -60.838f, 10f), 8f, vVar0, vVar1);
	func_85(0x00000015, func_87(356.58f, 4869.38f, -60.838f, 10f), 20f, vVar0, vVar1);
	func_85(0x00000016, func_87(348.2f, 4876.56f, -61.24f, -101f), -101f, vVar0, vVar1);
	func_85(0x00000017, func_87(348.2f, 4875.31f, -61.24f, -88f), -88f, vVar0, vVar1);
	func_85(0x00000018, func_87(348.47f, 4874.28f, -61.24f, -76f), -76f, vVar0, vVar1);
	func_85(0x00000019, func_87(349.17f, 4872.97f, -61.24f, -60f), -60f, vVar0, vVar1);
	func_85(0x0000001A, func_87(352.12f, 4870.98f, -61.24f, -20f), -20f, vVar0, vVar1);
	func_85(0x0000001B, func_87(353.42f, 4870.84f, -61.24f, -6f), -6f, vVar0, vVar1);
	func_85(0x0000001C, func_87(354.67f, 4870.995f, -61.24f, 8f), 8f, vVar0, vVar1);
	func_85(0x0000001D, func_87(356.02f, 4871.545f, -61.24f, 25f), 25f, vVar0, vVar1);
	func_80(&Local_47, 0x000020D4/*func_81*/);
}

void func_80(int iParam0, int iParam1)
{
	iParam0->f_1A5.f_D = iParam1;
	func_13(&(iParam0->f_1A5), 0x00000005);
}

bool func_81(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	bool bVar5;
	
	if (iParam1 < 0x00000016)
	{
		return 0x00000001;
	}
	if (!unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) || unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	if (func_84(unk_0xD803B885F5E47A62()) || unk_0xEAE0D21A50E6C7F4(iLocal_64, 0x00000000))
	{
		return 0x00000000;
	}
	vVar0 = { uParam0->f_1 };
	vVar1 = { uParam0->f_1.f_3 };
	vVar0.z = 0f;
	vVar1.z = 0f;
	vVar2 = { func_83(vVar0 - vVar1) };
	vVar3 = { unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()) };
	fVar4 = func_82(vVar2, vVar3);
	bVar5 = fVar4 > 0.36f;
	return bVar5;
}

float func_82(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_83(vector3 vParam0)
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

int func_84(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_54(iParam0, 0x00000001, 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_19D462[iParam0 /*39*/].f_1B, 0x00000003))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_85(int iParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4)
{
	Local_47[iParam0 /*14*/] = 0x00000003;
	Local_47[iParam0 /*14*/].f_1 = { vParam1 + func_86(vParam3, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_3 = { vParam1 + func_86(vParam4, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_47[iParam0 /*14*/].f_8 = { vParam1 };
	Local_47[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam2 };
}

Vector3 func_86(vector3 vParam0, float fParam1)
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

Vector3 func_87(vector3 vParam0, float fParam1)
{
	return vParam0 + func_86(0f, 0.01f, 0.015f, fParam1);
}

Vector3 func_88()
{
	return 0f, -0.7f, -1f;
}

Vector3 func_89()
{
	return 0f, 0.1f, 1f;
}

int func_90(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_91())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_73())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_71(0x0000009D))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_91()
{
	return Global_140856;
}

