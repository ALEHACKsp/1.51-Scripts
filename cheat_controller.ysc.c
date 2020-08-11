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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
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
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	char* sLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	iLocal_46 = 0x00000001;
	iLocal_47 = 0x00000001;
	iLocal_48 = 0x00000001;
	iLocal_49 = 0x00000001;
	iLocal_50 = 0x00000001;
	iLocal_51 = 0x00000001;
	iLocal_52 = 0x00000001;
	iLocal_53 = 0x00000001;
	iLocal_54 = 0x00000001;
	iLocal_55 = 0x00000001;
	iLocal_56 = 0x00000001;
	iLocal_57 = 0x00000001;
	iLocal_58 = 0x00000001;
	iLocal_59 = 0x00000001;
	iLocal_60 = 0x00000001;
	iLocal_61 = 0x00000001;
	iLocal_62 = 0x00000001;
	iLocal_63 = 0x00000001;
	iLocal_64 = 0x00000001;
	iLocal_65 = 0x00000001;
	iLocal_66 = 0x00000001;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 0x000493E0;
	fLocal_78 = 1f;
	if (unk_0x2EBF608FFE6CA406(0x00000022))
	{
		func_113();
	}
	Global_7928 = 0x00000000;
	Global_7927 = 0x00000000;
	Global_7929 = 0x00000000;
	Global_792A = 0x00000000;
	Global_792C = 0x00000000;
	Global_792B = 0x00000000;
	func_112();
	while (0x00000001)
	{
		func_2();
		if (((unk_0x8CD06866876216F2() && func_1(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !Global_180539) && Global_7830 == 0x00000000)
		{
			func_113();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)
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

void func_2()
{
	func_88();
	func_68();
	func_22();
	func_3(iLocal_67);
}

void func_3(int iParam0)
{
	switch (iLocal_46)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			if (unk_0x7C2B4C53942076F8())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 0x00000001;
			}
			else
			{
				func_20(iParam0);
			}
			break;
		
		case 0x00000004:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)
{
	vector3 vVar0;
	float fVar1;
	bool bVar2;
	
	bVar2 = 0x00000000;
	if (unk_0xB87F6CF6E5628C67(iParam0))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xC844350D5D58C99A(iLocal_68))
			{
				if (!unk_0x437347B10A200C4B(iLocal_68, 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_68, 0x00000000))
					{
						vVar0 = { unk_0x68F4C0EC296D3901(iLocal_68, 0x00000001) };
						fVar1 = unk_0xD9522BA9E27E1349(iLocal_68);
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0.x, vVar0.y, (vVar0.z + 4f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						bVar2 = 0x00000001;
					}
				}
				unk_0xA954465BA6FDEFE2(&iLocal_68);
			}
			if (!bVar2)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					vVar0 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					vVar0 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, 6f, 2f) };
				}
				else
				{
					vVar0 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, 3.5f, 1f) };
				}
				fVar1 = (unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) + 90f);
			}
			if (func_18(iParam0, vVar0, fVar1))
			{
				iLocal_68 = unk_0x122AAB0B1D6F55AD(iParam0, vVar0, fVar1, 0x00000000, 0x00000001, 0x00000000);
				unk_0xB9FD7450C0DAB575(iLocal_68, 0x40A00000);
				unk_0x71199B01895C6202(iParam0);
				unk_0x046C362CF15F1935(&iLocal_68);
				func_16(sLocal_70);
				func_5(0x00000014);
			}
			else
			{
				unk_0x71199B01895C6202(iParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 0x00000001;
		}
	}
}

void func_5(int iParam0)
{
	if (!func_15(0x0000000E) && !func_14(""))
	{
		unk_0x5D96D8530B3D0904(&Global_7929, iParam0);
		Global_792C = 0x00000001;
		func_6();
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0x00000000:
			func_7(joaat("sp0_times_cheated"), 0x00000001);
			break;
		
		case 0x00000001:
			func_7(joaat("sp1_times_cheated"), 0x00000001);
			break;
		
		case 0x00000002:
			func_7(joaat("sp2_times_cheated"), 0x00000001);
			break;
	}
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

int func_8()
{
	func_9();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_9()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_12(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_11(unk_0x16F2683693E537C9());
			if (func_10(iVar0) && (!func_15(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_10(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_10(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_13(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_14(char* sParam0)
{
	if (iLocal_84 != 0x00000000)
	{
		if (func_15(0x0000000E) && unk_0x0F1CCD77290EE12F())
		{
			if (unk_0x7F8A39872A07D2CE(sParam0, "CHEAT_SUPER_JUMP") && unk_0x7C2B4C53942076F8())
			{
				return 0x00000000;
			}
			if ((unk_0x7F8A39872A07D2CE(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
			{
				return 0x00000000;
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_15(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_16(char* sParam0)
{
	if (func_14(""))
	{
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CHEAT_ACTIVATED");
		unk_0x6B012227B3921E18(sParam0);
		func_17(unk_0x47AFB2993A42BD03(0x00000000, 0x00000001));
		unk_0x0B6E55535B9A2D0C(sParam0);
	}
}

void func_17(int iParam0)
{
	iLocal_80[iLocal_81] = iParam0;
	iLocal_81++;
	if (iLocal_81 >= 0x0000000A)
	{
		iLocal_81 = 0x00000000;
	}
}

int func_18(int iParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0[9];
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	unk_0xA6B02C1DB14DDA13(iParam0, &vVar1, &vVar2);
	vVar3.x = (unk_0x755FF954DAE327E1((vVar2.x - vVar1.x)) / 2f);
	vVar3.y = (unk_0x755FF954DAE327E1((vVar2.y - vVar1.y)) / 2f);
	vVar3.z = (unk_0x755FF954DAE327E1((vVar2.z - vVar1.z)) / 2f);
	vVar0[0x00000000 /*3*/] = { vParam1 };
	vVar0[0x00000001 /*3*/] = { unk_0x8A5E176FF719A014(vParam1, fParam2, -vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[0x00000002 /*3*/] = { unk_0x8A5E176FF719A014(vParam1, fParam2, vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[0x00000003 /*3*/] = { unk_0x8A5E176FF719A014(vParam1, fParam2, vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[0x00000004 /*3*/] = { unk_0x8A5E176FF719A014(vParam1, fParam2, -vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[0x00000005 /*3*/] = { unk_0x8A5E176FF719A014(vParam1, fParam2, -vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[0x00000006 /*3*/] = { unk_0x8A5E176FF719A014(vParam1, fParam2, vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[0x00000007 /*3*/] = { unk_0x8A5E176FF719A014(vParam1, fParam2, vVar3.x, vVar3.y, vVar3.z) };
	vVar0[0x00000008 /*3*/] = { unk_0x8A5E176FF719A014(vParam1, fParam2, -vVar3.x, vVar3.y, vVar3.z) };
	if (!unk_0xD1BF3090E1F8300E(vParam1))
	{
		return 0x00000000;
	}
	iVar13 = unk_0xBEFB16071735D54D(func_19(unk_0xD803B885F5E47A62()) + Vector(1f, 0f, 0f), vParam1, 0x00000057, unk_0x16F2683693E537C9(), 0x00000000);
	unk_0x1EC301670B54C6DE(iVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0x00000000)
	{
		return 0x00000000;
	}
	iVar7 = unk_0xBEFB16071735D54D(vVar0[0x00000001 /*3*/], vVar0[0x00000003 /*3*/], 0x00000057, unk_0x16F2683693E537C9(), 0x00000000);
	unk_0x1EC301670B54C6DE(iVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0x00000000)
	{
		return 0x00000000;
	}
	iVar8 = unk_0xBEFB16071735D54D(vVar0[0x00000002 /*3*/], vVar0[0x00000004 /*3*/], 0x00000057, unk_0x16F2683693E537C9(), 0x00000000);
	unk_0x1EC301670B54C6DE(iVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0x00000000)
	{
		return 0x00000000;
	}
	iVar9 = unk_0xBEFB16071735D54D(vVar0[0x00000005 /*3*/], vVar0[0x00000007 /*3*/], 0x00000057, unk_0x16F2683693E537C9(), 0x00000000);
	unk_0x1EC301670B54C6DE(iVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0x00000000)
	{
		return 0x00000000;
	}
	iVar10 = unk_0xBEFB16071735D54D(vVar0[0x00000006 /*3*/], vVar0[0x00000008 /*3*/], 0x00000057, unk_0x16F2683693E537C9(), 0x00000000);
	unk_0x1EC301670B54C6DE(iVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0x00000000)
	{
		return 0x00000000;
	}
	iVar11 = unk_0xBEFB16071735D54D(vVar0[0x00000001 /*3*/], vVar0[0x00000008 /*3*/], 0x00000057, unk_0x16F2683693E537C9(), 0x00000000);
	unk_0x1EC301670B54C6DE(iVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0x00000000)
	{
		return 0x00000000;
	}
	iVar12 = unk_0xBEFB16071735D54D(vVar0[0x00000002 /*3*/], vVar0[0x00000007 /*3*/], 0x00000057, unk_0x16F2683693E537C9(), 0x00000000);
	unk_0x1EC301670B54C6DE(iVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

Vector3 func_19(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

void func_20(int iParam0)
{
	if (unk_0x3FC14104C3FD24D5(iParam0))
	{
		unk_0x523BCC9DC80CD82F(iParam0);
		if (unk_0xB87F6CF6E5628C67(iParam0))
		{
			iLocal_46 = 0x00000004;
		}
	}
}

void func_21(char* sParam0)
{
	if (!func_15(0x0000000E))
	{
		unk_0x1E64CE678ED5F61E("CHEAT_DENIED");
		unk_0x6B012227B3921E18(sParam0);
		func_17(unk_0x47AFB2993A42BD03(0x00000000, 0x00000001));
	}
}

void func_22()
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
}

void func_23()
{
	switch (iLocal_66)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_31(0x00000013, 0x00000001);
			func_30();
			break;
		
		case 0x00000005:
			if ((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_28()) || func_27(0x00000017)) || func_27(0x00000015)) || func_27(0x00000013))
			{
				iLocal_66 = 0x00000009;
				return;
			}
			func_25();
			break;
		
		case 0x00000009:
			func_24("CHEAT_AIM_SLOW_MO");
			func_31(0x00000013, 0x00000000);
			unk_0x9A82EEAF6CA12AEE(1f);
			iLocal_77 = 0x00000000;
			iLocal_66 = 0x00000001;
			break;
		
		default:
			break;
	}
}

void func_24(char* sParam0)
{
	if (func_14(sParam0))
	{
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CHEAT_DEACTIVATED");
		unk_0x6B012227B3921E18(sParam0);
		func_17(unk_0x47AFB2993A42BD03(0x00000000, 0x00000001));
	}
}

void func_25()
{
	if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x00000019))
		{
			if (func_26(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed") && func_26(unk_0x16F2683693E537C9()) != joaat("object"))
			{
				unk_0x9A82EEAF6CA12AEE(fLocal_78);
			}
			else
			{
				unk_0x9A82EEAF6CA12AEE(1f);
			}
		}
		else
		{
			unk_0x9A82EEAF6CA12AEE(1f);
		}
	}
}

int func_26(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 0x00000001);
	return uVar0;
}

int func_27(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_7927, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_28()
{
	if (((((((func_15(0x00000000) || func_15(0x0000000B)) || func_15(0x00000004)) || func_15(0x00000009)) || func_15(0x0000000A)) || func_15(0x00000003)) || func_15(0x00000002)) || func_29(0x00000023))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_29(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_30()
{
	iLocal_77++;
	if (iLocal_77 > 0x00000003)
	{
		iLocal_77 = 0x00000000;
		iLocal_66 = 0x00000009;
		return;
	}
	switch (iLocal_77)
	{
		case 0x00000001:
			func_16("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 0x00000002:
			func_16("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 0x00000003:
			func_16("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 0x00000005;
}

void func_31(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_7928, iParam0);
		func_5(iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7928, iParam0);
	}
}

void func_32()
{
	switch (iLocal_63)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_31(0x00000010, 0x00000001);
			func_35();
			break;
		
		case 0x00000005:
			unk_0x38C3A68D7861DCFD(0x00000002, 0x00000025, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000002, 0x00000013, 0x00000001);
			if ((((((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_28()) || func_34()) || func_33(0x00000001)) || unk_0xD245978525608929(0x00000002, 0x00000025)) || unk_0xD245978525608929(0x00000002, 0x00000013)) || func_27(0x00000017)) || func_27(0x00000015)) || func_27(0x00000010))
			{
				iLocal_63 = 0x00000009;
			}
			break;
		
		case 0x00000009:
			unk_0x38C3A68D7861DCFD(0x00000002, 0x00000025, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000002, 0x00000013, 0x00000001);
			func_24("CHEAT_SLOW_MO");
			func_31(0x00000010, 0x00000000);
			iLocal_76 = 0x00000000;
			unk_0x9A82EEAF6CA12AEE(1f);
			iLocal_63 = 0x00000001;
			break;
		
		default:
			break;
	}
}

bool func_33(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

int func_34()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

void func_35()
{
	iLocal_76++;
	if (iLocal_76 > 0x00000003)
	{
		iLocal_63 = 0x00000009;
		return;
	}
	switch (iLocal_76)
	{
		case 0x00000001:
			func_16("CHEAT_SLOW_MO1");
			unk_0x9A82EEAF6CA12AEE(0.6f);
			break;
		
		case 0x00000002:
			func_16("CHEAT_SLOW_MO2");
			unk_0x9A82EEAF6CA12AEE(0.4f);
			break;
		
		case 0x00000003:
			func_16("CHEAT_SLOW_MO3");
			unk_0x9A82EEAF6CA12AEE(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 0x00000005;
}

void func_36()
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	switch (iLocal_64)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			func_31(0x00000011, 0x00000001);
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000001);
			unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0x00000001, 0x00000000, 0x00000001);
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			fVar1 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
			unk_0xE82754C349C7B581(vVar0, &fVar2, 0x00000000, 0x00000000);
			fVar2 = (fVar2 + 500f);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0.x, vVar0.y, fVar2, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fVar1);
			iLocal_72 = unk_0x1C0640BA9A7327B3();
			unk_0x53491B90E4FD0E56(0x00000000);
			iLocal_64 = 0x00000003;
			break;
		
		case 0x00000003:
			if (func_38(0x000003E8, iLocal_72))
			{
				unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				iLocal_72 = unk_0x1C0640BA9A7327B3();
				iLocal_64 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (func_38(0x000003E8, iLocal_72))
			{
				unk_0x38C3A68D7861DCFD(0x00000000, 0x00000090, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x00000095, 0x00000001);
				if (func_8() == 0x00000000)
				{
					unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				unk_0x82E51BCA72537B6C(0x000000FA);
				iLocal_72 = unk_0x1C0640BA9A7327B3();
				func_16("CHEAT_SKYFALL");
				unk_0xB975E4541DDAB1F5(0x00000002);
				iLocal_64 = 0x00000005;
			}
			break;
		
		case 0x00000005:
			if ((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_28()) || func_27(0x00000017)) || func_27(0x00000015)) || func_27(0x00000011))
			{
				iLocal_64 = 0x00000009;
				break;
			}
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000090, 0x00000001);
			unk_0x3584F71E5CA29322(0x00000002);
			if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
			{
				unk_0xDFC6BA855748EB10(unk_0x16F2683693E537C9(), 0x00000001, 0f, 200f, 2.5f, 0f, 0f, 0f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
				if (unk_0xE608C809F9416F00(unk_0x16F2683693E537C9()))
				{
					iLocal_64 = 0x00000009;
				}
			}
			else
			{
				iLocal_64 = 0x00000009;
			}
			break;
		
		case 0x00000009:
			func_37();
			func_24("CHEAT_SKYFALL");
			func_31(0x00000011, 0x00000000);
			iLocal_64 = 0x00000001;
			break;
		
		default:
			break;
	}
}

void func_37()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 0x00000005)
	{
		unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	unk_0xB975E4541DDAB1F5(0x00000000);
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x1C0640BA9A7327B3();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_39()
{
	vector3 vVar0;
	
	switch (iLocal_62)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_16("CHEAT_INVINCIBILITY");
			func_31(0x0000000F, 0x00000001);
			iLocal_62 = 0x00000005;
			iLocal_74 = unk_0x1C0640BA9A7327B3();
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000001);
			unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iLocal_62 = 0x00000009;
				return;
			}
			vVar0 = { func_19(unk_0xD803B885F5E47A62()) };
			if (((((func_28() || func_34()) || func_27(0x00000017)) || func_27(0x00000015)) || func_27(0x0000000F)) || vVar0.z <= -170f)
			{
				iLocal_62 = 0x00000009;
				return;
			}
			iLocal_75 = (unk_0x1C0640BA9A7327B3() - iLocal_74);
			if (unk_0x8A22C4C08282BF26(joaat("appinternet")) == 0x00000000)
			{
				func_40((iLocal_73 - iLocal_75), "CHEAT_INV", 0x00000000, 0x00000000, 0x000003E8, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			if (iLocal_75 >= (iLocal_73 - 0x000003E8))
			{
				iLocal_62 = 0x00000009;
				return;
			}
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000001);
			unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x650A82E2676F6E87();
			break;
		
		case 0x00000009:
			func_24("CHEAT_INVINCIBILITY_OFF");
			func_31(0x0000000F, 0x00000000);
			iLocal_62 = 0x00000001;
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000000);
				unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			break;
		
		default:
			break;
	}
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_42(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_41(0x00000007, iVar0);
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

void func_41(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

void func_43()
{
	switch (iLocal_59)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_16("CHEAT_FLAMING_BULLETS");
			func_31(0x0000000C, 0x00000001);
			iLocal_59 = 0x00000005;
			break;
		
		case 0x00000005:
			if (((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(0x00000017)) || func_27(0x00000015)) || func_27(0x0000000C))
			{
				iLocal_59 = 0x00000009;
				return;
			}
			if (func_28())
			{
				iLocal_59 = 0x00000009;
				return;
			}
			unk_0xC8C28562DFB895D8(unk_0xD803B885F5E47A62());
			break;
		
		case 0x00000009:
			func_24("CHEAT_FLAMING_BULLETS");
			func_31(0x0000000C, 0x00000000);
			iLocal_59 = 0x00000001;
			break;
		
		default:
			break;
	}
}

void func_44()
{
	switch (iLocal_60)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_16("CHEAT_EXPLOSIVE_MELEE");
			func_31(0x0000000D, 0x00000001);
			iLocal_60 = 0x00000005;
			break;
		
		case 0x00000005:
			if ((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(0x00000017)) || func_27(0x00000015)) || func_27(0x0000000D)) || func_28())
			{
				iLocal_60 = 0x00000009;
				return;
			}
			unk_0xD623CCF4F86276D0(unk_0xD803B885F5E47A62());
			break;
		
		case 0x00000009:
			func_24("CHEAT_EXPLOSIVE_MELEE");
			func_31(0x0000000D, 0x00000000);
			iLocal_60 = 0x00000001;
			break;
		
		default:
			break;
	}
}

void func_45()
{
	switch (iLocal_65)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_16("CHEAT_DRUNK");
			func_31(0x00000012, 0x00000001);
			func_60(unk_0x16F2683693E537C9());
			func_58(0x00007530, 0x3E99999A, 0x3F800000, 0x00000000);
			iLocal_65 = 0x00000005;
			break;
		
		case 0x00000005:
			if ((((func_28() || !unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) || func_27(0x00000017)) || func_27(0x00000015)) || func_27(0x00000012))
			{
				iLocal_65 = 0x00000009;
			}
			break;
		
		case 0x00000009:
			func_24("CHEAT_DRUNK");
			func_31(0x00000012, 0x00000000);
			func_49(unk_0x16F2683693E537C9());
			func_48(0x000003E8);
			iLocal_65 = 0x00000001;
			break;
		
		case 0x0000000A:
			func_46(0x00000001);
			func_31(0x00000012, 0x00000000);
			iLocal_65 = 0x00000001;
			break;
		
		default:
			break;
	}
}

void func_46(bool bParam0)
{
	unk_0x36629DB72EBCB78C(0f);
	unk_0x58478905E1A5347E(0f);
	unk_0xA480BA3CD1C5E797(0f);
	unk_0x051C254DA616D646(0x00000001);
	unk_0xE788E9364E3EB9B1(0f);
	unk_0x7E7993893F7C203D(0x00000001);
	unk_0x435B8A00821D00E7(0x00000000);
	if (unk_0x562F77A7F33D2E46("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x8910D3D58E0132B8("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xEA6BC48857E0AC4C(&Global_A64E))
	{
		if (unk_0x562F77A7F33D2E46(&Global_A64E))
		{
			unk_0x8910D3D58E0132B8(&Global_A64E);
		}
	}
	if (unk_0x9F4FE516EAACCFC5(Global_A643))
	{
		if (unk_0xB3FFA20AEA3A2D9C(Global_A643))
		{
			unk_0x97271F6489B78F2D(Global_A643, 0f);
			unk_0x10486C0590CF176C(Global_A643, 0x00000001);
		}
	}
	if (unk_0xF45FDB21A0F137CB())
	{
		unk_0xC1B8EFD8630D086B(0x00000000);
	}
	if (bParam0)
	{
		if (unk_0xE0FCC099E413CCBA() != 0xFFFFFFFF || unk_0x21AA848387F2A52A() != 0xFFFFFFFF)
		{
			unk_0x225CFE81EA219E44();
		}
		else if (unk_0x991B1F0980C62628())
		{
			unk_0x225CFE81EA219E44();
		}
	}
	Global_A649 = 0f;
	StringCopy(&Global_A64A, "", 16);
	StringCopy(&Global_A64E, "", 64);
	StringCopy(&Global_A65E, "", 16);
	func_47();
}

void func_47()
{
	Global_A642 = 0x00000000;
	Global_A643 = 0x00000000;
	Global_A644 = 0x00000000;
	Global_A645 = 0x00007530;
	Global_A646 = 0f;
	Global_A648 = 0f;
	Global_A647 = 0f;
	Global_A649 = 0f;
	StringCopy(&Global_A64A, "", 16);
}

void func_48(int iParam0)
{
	int iVar0;
	
	if (!Global_A642)
	{
		return;
	}
	iVar0 = unk_0x1C0640BA9A7327B3();
	Global_A644 = (iVar0 + iParam0);
	Global_A645 = iParam0;
}

void func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0x00000000)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!iVar0 == 0xFFFFFFFF)
	{
		iVar1 = Global_A58F[iVar0 /*5*/];
		func_52(0x00000001, iVar1, 0x00000001);
		return;
	}
	iVar2 = func_51(iParam0);
	if (iVar2 == 0xFFFFFFFF)
	{
		return;
	}
	func_50(iVar2);
}

void func_50(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000005)
	{
		return;
	}
	if (!Global_A575[iParam0 /*5*/].f_1 == 0x00000000)
	{
		if (Global_A575[iParam0 /*5*/].f_1 == unk_0x16F2683693E537C9())
		{
			Global_A662 = 0x00000000;
		}
	}
	Global_A575[iParam0 /*5*/] = 0x0000000D;
	Global_A575[iParam0 /*5*/].f_1 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_2 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_3 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_4 = 0x00000000;
	Global_A573 = (Global_A573 - 0x00000001);
	if (Global_A573 < 0x00000000)
	{
		Global_A573 = 0x00000000;
	}
}

int func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_A575[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	func_53(iParam0, iParam1, iParam2, 0x00000000, 0x00000000, 0x00000001);
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam2 == 0x00000006)
	{
		return;
	}
	if (func_55(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_54();
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	Global_A5E0[iVar0 /*6*/] = iParam0;
	Global_A5E0[iVar0 /*6*/].f_1 = iParam1;
	Global_A5E0[iVar0 /*6*/].f_2 = iParam2;
	Global_A5E0[iVar0 /*6*/].f_3 = iParam3;
	Global_A5E0[iVar0 /*6*/].f_4 = iParam4;
	Global_A5E0[iVar0 /*6*/].f_5 = iParam5;
}

int func_54()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_A5E0[iVar0 /*6*/].f_2 == 0x00000006)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	if (func_56(iParam0, iParam1, iParam2) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (iParam2 == Global_A5E0[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_A5E0[iVar0 /*6*/])
			{
				if (iParam1 == Global_A5E0[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (!Global_A58F[iVar0 /*5*/] == 0xFFFFFFFF)
		{
			if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_58(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_59(0xFFFFFFFF, iParam0, fParam1, fParam2, iParam3, 0x00000001);
}

void func_59(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_A642)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0x00000000)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x174D27C2C2F899E5())
	{
		unk_0x0525F87A0751EA62("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0xD5B49A7E47E6726F())
	{
		unk_0xF5AC1996BA944009("DRUNK_SHAKE", (fParam3 * Global_A641));
	}
	if (unk_0x9F4FE516EAACCFC5(iParam4))
	{
		unk_0x91F5B0244AAE6222(iParam4, "DRUNK_SHAKE", fParam3);
		Global_A643 = iParam4;
	}
	else
	{
		Global_A643 = 0x00000000;
	}
	Global_A642 = 0x00000001;
	iVar0 = unk_0x1C0640BA9A7327B3();
	Global_A644 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == 0xFFFFFFFF)
		{
			Global_A644 = 0xFFFFFFFF;
		}
	}
	Global_A645 = uParam1;
	Global_A646 = fParam2;
	Global_A648 = fParam3;
	Global_A647 = fParam3;
}

int func_60(int iParam0)
{
	return func_61(iParam0, 0xFFFFFFFF, 0x00000001);
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = func_63(iParam0);
	if (!iVar0 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	iVar1 = func_51(iParam0);
	if (!iVar1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (!bParam2)
	{
		if (iParam1 == 0x00000000 || iParam1 < 0x00000000)
		{
			return 0x00000000;
		}
	}
	iVar2 = func_62();
	if (iVar2 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	Global_A575[iVar2 /*5*/] = 0x00000000;
	Global_A575[iVar2 /*5*/].f_1 = iParam0;
	Global_A575[iVar2 /*5*/].f_2 = iParam1;
	Global_A575[iVar2 /*5*/].f_3 = iParam1;
	Global_A575[iVar2 /*5*/].f_4 = 0x00000000;
	if (iParam0 == unk_0x16F2683693E537C9())
	{
		Global_A662 = 0x00000001;
	}
	Global_A573++;
	return 0x00000001;
}

int func_62()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_A575[iVar0 /*5*/] == 0x0000000D)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
		{
			return Global_A58F[iVar0 /*5*/];
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_64()
{
	switch (iLocal_58)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_16("CHEAT_BANG_BANG");
			func_31(0x0000000B, 0x00000001);
			iLocal_58 = 0x00000005;
			break;
		
		case 0x00000005:
			if (((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(0x00000017)) || func_27(0x00000015)) || func_27(0x0000000B))
			{
				iLocal_58 = 0x00000009;
				return;
			}
			if (func_28())
			{
				iLocal_58 = 0x00000009;
				return;
			}
			unk_0xBD4A8D0C5E43A6AE(unk_0xD803B885F5E47A62());
			break;
		
		case 0x00000009:
			func_24("CHEAT_BANG_BANG");
			func_31(0x0000000B, 0x00000000);
			iLocal_58 = 0x00000001;
			break;
		
		default:
			break;
	}
}

void func_65()
{
	switch (iLocal_61)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_5(0x0000000E);
			func_31(0x0000000E, 0x00000001);
			func_67();
			break;
		
		case 0x00000005:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if ((((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_28()) || func_27(0x00000017)) || func_27(0x00000015)) || func_27(0x0000000E)) || func_66(0x00000011)) || unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
				{
					iLocal_61 = 0x00000009;
				}
			}
			else
			{
				iLocal_61 = 0x00000009;
			}
			break;
		
		case 0x00000009:
			func_24("CHEAT_GRAVITY_MOON");
			func_31(0x0000000E, 0x00000000);
			unk_0x7725C98D1438380E(0x00000000);
			iLocal_79 = 0x00000000;
			iLocal_61 = 0x00000001;
			break;
		
		default:
			break;
	}
}

int func_66(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_7928, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_67()
{
	iLocal_79++;
	if (iLocal_79 > 0x00000001)
	{
		iLocal_61 = 0x00000009;
		return;
	}
	switch (iLocal_79)
	{
		case 0x00000001:
			func_16("CHEAT_GRAVITY_MOON");
			unk_0x7725C98D1438380E(0x00000001);
			break;
		
		default:
			break;
	}
	iLocal_61 = 0x00000005;
}

void func_68()
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
}

void func_69()
{
	if (iLocal_57 == 0x00000004)
	{
		iLocal_57 = 0x00000001;
		if ((func_27(0x00000017) || func_27(0x00000016)) || func_27(0x0000000A))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			func_16("CHEAT_GIVE_PARACHUTE");
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0x00000001, 0x00000001, 0x00000001);
			func_5(0x0000000A);
		}
	}
}

int func_70()
{
	if (iLocal_83)
	{
		iLocal_83 = 0x00000000;
		return 0x00000000;
	}
	if (func_71(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_71(int iParam0)
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

void func_72()
{
	int iVar0;
	
	if (iLocal_56 == 0x00000004)
	{
		iLocal_56 = 0x00000001;
		if ((func_27(0x00000017) || func_27(0x00000016)) || func_27(0x00000009))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x02A813E6E0380440() == 0x00000000)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
			if (iVar0 > 0x00000000)
			{
				func_16("CHEAT_WANTED_DOWN");
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), (iVar0 - 0x00000001), 0x00000000);
				func_5(0x00000009);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_73()
{
	int iVar0;
	
	if (iLocal_55 == 0x00000004)
	{
		iLocal_55 = 0x00000001;
		if ((func_27(0x00000017) || func_27(0x00000016)) || func_27(0x00000008))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x02A813E6E0380440() == 0x00000000)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
			if (iVar0 < unk_0x02A813E6E0380440())
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), iVar0 + 1, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
				func_16("CHEAT_WANTED_UP");
				func_5(0x00000008);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_74()
{
	if (iLocal_54 == 0x00000004)
	{
		iLocal_54 = 0x00000001;
		if ((((((func_27(0x00000017) || func_27(0x00000016)) || func_27(0x00000007)) || func_15(0x00000009)) || func_15(0x0000000A)) || !unk_0x7819CAEB55F9D232(func_75())) || !unk_0x6C5A65751EF69450(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x94FD98915D03BAC2(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			func_16("CHEAT_SPECIAL_ABILITY");
			func_5(0x00000007);
		}
	}
}

int func_75()
{
	return unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9());
}

void func_76()
{
	int iVar0;
	
	if (iLocal_53 == 0x00000004)
	{
		iLocal_53 = 0x00000001;
		if ((((func_27(0x00000017) || func_27(0x00000016)) || func_27(0x00000006)) || func_15(0x00000009)) || func_15(0x0000000A))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			func_16("CHEAT_HEALTH_ARMOR");
			func_5(0x00000006);
			unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), unk_0xC08489BCA49ECCA8(unk_0x16F2683693E537C9()), 0x00000000);
			unk_0x64511D24D4201743(unk_0x16F2683693E537C9(), (unk_0x31AE1423DA1D599B(unk_0xD803B885F5E47A62()) - unk_0x34460709B9A5160B(unk_0x16F2683693E537C9())));
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
					{
						unk_0x51B954DAB1BCAF73(iVar0);
					}
				}
			}
		}
	}
}

void func_77()
{
	if (iLocal_52 == 0x00000004)
	{
		iLocal_52 = 0x00000001;
		if ((func_27(0x00000017) || func_27(0x00000016)) || func_27(0x00000005))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(0x00000005);
		switch (iLocal_71)
		{
			case 0x00000000:
				iLocal_71 = 0x00000001;
			
			case 0x00000001:
				unk_0xB8D67B901BB44E97("EXTRASUNNY");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 0x00000002;
				break;
			
			case 0x00000002:
				unk_0xB8D67B901BB44E97("CLEAR");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 0x00000003;
				break;
			
			case 0x00000003:
				unk_0xB8D67B901BB44E97("CLOUDS");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 0x00000004;
				break;
			
			case 0x00000004:
				unk_0xB8D67B901BB44E97("SMOG");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 0x00000006;
				break;
			
			case 0x00000006:
				unk_0xB8D67B901BB44E97("OVERCAST");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 0x00000007;
				break;
			
			case 0x00000007:
				unk_0xB8D67B901BB44E97("RAIN");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN");
				func_31(0x00000005, 0x00000001);
				iLocal_71 = 0x00000008;
				break;
			
			case 0x00000008:
				unk_0xB8D67B901BB44E97("THUNDER");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 0x00000009;
				break;
			
			case 0x00000009:
				unk_0xB8D67B901BB44E97("CLEARING");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 0x0000000B;
				break;
			
			case 0x0000000B:
				unk_0xB8D67B901BB44E97("XMAS");
				unk_0x96D521DDDB9AD218();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0x00000000;
				break;
			
			default:
				break;
			}
	}
}

void func_78()
{
	if (iLocal_51 == 0x00000004)
	{
		iLocal_51 = 0x00000001;
		if ((func_27(0x00000017) || func_27(0x00000016)) || func_27(0x00000004))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_16("CHEAT_GIVE_WEAPONS");
		func_5(0x00000004);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), joaat("weapon_knife"), 0xFFFFFFFF, 0x00000000);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), joaat("weapon_smg"), 0x0000012C, 0x00000000);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), joaat("weapon_assaultrifle"), 0x0000012C, 0x00000001);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), joaat("weapon_pumpshotgun"), 0x00000096, 0x00000000);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), joaat("weapon_sniperrifle"), 0x0000001E, 0x00000000);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), joaat("weapon_grenade"), 0x00000005, 0x00000000);
			unk_0x8B25B8DC6068152D(unk_0x16F2683693E537C9(), joaat("weapon_rpg"), 0x00000005, 0x00000000);
		}
	}
}

void func_79()
{
	switch (iLocal_50)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_16("CHEAT_FAST_SWIM");
			func_31(0x00000003, 0x00000001);
			iLocal_50 = 0x00000005;
			break;
		
		case 0x00000005:
			if (((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(0x00000017)) || func_27(0x00000016)) || func_27(0x00000003))
			{
				iLocal_50 = 0x00000009;
			}
			else
			{
				unk_0xB48034DF832D2A0D(unk_0xD803B885F5E47A62(), 1.49f);
				unk_0x650A82E2676F6E87();
			}
			break;
		
		case 0x00000009:
			unk_0xB48034DF832D2A0D(unk_0xD803B885F5E47A62(), 1f);
			func_24("CHEAT_FAST_SWIM");
			func_31(0x00000003, 0x00000000);
			iLocal_50 = 0x00000001;
			break;
		
		default:
			break;
	}
}

void func_80()
{
	switch (iLocal_49)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_16("CHEAT_FAST_RUN");
			func_31(0x00000002, 0x00000001);
			iLocal_49 = 0x00000005;
			break;
		
		case 0x00000005:
			if ((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) || func_27(0x00000017)) || func_27(0x00000016)) || func_27(0x00000002))
			{
				iLocal_49 = 0x00000009;
			}
			else
			{
				if (unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9()) || (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()) && !unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())))
				{
					unk_0xA18F227A9855B50D(unk_0xD803B885F5E47A62(), 1.49f);
				}
				else
				{
					unk_0xA18F227A9855B50D(unk_0xD803B885F5E47A62(), 1f);
				}
				unk_0x650A82E2676F6E87();
			}
			break;
		
		case 0x00000009:
			unk_0xA18F227A9855B50D(unk_0xD803B885F5E47A62(), 1f);
			func_24("CHEAT_FAST_RUN");
			func_31(0x00000002, 0x00000000);
			iLocal_49 = 0x00000001;
			break;
		
		default:
			break;
	}
}

void func_81()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_16("CHEAT_SLIDEY_CARS");
			func_31(0x00000001, 0x00000001);
			iLocal_48 = 0x00000005;
			break;
		
		case 0x00000005:
			if (((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(0x00000017)) || func_27(0x00000016)) || func_27(0x00000001))
			{
				iLocal_48 = 0x00000009;
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
				{
					if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
					{
						if (iLocal_69 == 0x00000000)
						{
							iLocal_69 = iVar0;
							if (!unk_0x437347B10A200C4B(iLocal_69, 0x00000000))
							{
								if (func_82(0x00000001))
								{
									unk_0xE4AEDA3B8753EC4C(iLocal_69, 0x00000001);
								}
								else
								{
									iLocal_69 = 0x00000000;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0x437347B10A200C4B(iLocal_69, 0x00000000))
							{
								unk_0xE4AEDA3B8753EC4C(iLocal_69, 0x00000000);
							}
							iLocal_69 = 0x00000000;
						}
					}
				}
			}
			break;
		
		case 0x00000009:
			func_24("CHEAT_SLIDEY_CARS");
			iLocal_48 = 0x0000000A;
			break;
		
		case 0x0000000A:
			if (!unk_0x437347B10A200C4B(iLocal_69, 0x00000000))
			{
				unk_0xE4AEDA3B8753EC4C(iLocal_69, 0x00000000);
				iLocal_69 = 0x00000000;
			}
			func_31(0x00000001, 0x00000000);
			iLocal_48 = 0x00000001;
			break;
		
		default:
			break;
	}
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				iVar1 = unk_0x134B62B726CEC8E6(iVar0);
				iVar2 = func_8();
				if (iParam0 & 0x00000001 != 0x00000000)
				{
					if (!unk_0x8E39AC3C76C8AA58(iVar1))
					{
						return 0x00000000;
					}
				}
				if (iParam0 & 0x00000002 != 0x00000000)
				{
					if (!unk_0x7D8B2A8F9EA82DB7(iVar1))
					{
						return 0x00000000;
					}
				}
				if (iParam0 & 0x00000004 != 0x00000000)
				{
					if (!unk_0xAFB8495D36825275(iVar1))
					{
						return 0x00000000;
					}
				}
				if (iParam0 & 0x00000008 != 0x00000000)
				{
					if (!unk_0xA7082C42B8809BF2(iVar1))
					{
						return 0x00000000;
					}
				}
				if (iParam0 & 0x00000010 != 0x00000000)
				{
					if (unk_0xF653B9B22DA806A9(iVar0, "door_dside_r") != 0xFFFFFFFF || unk_0xF653B9B22DA806A9(iVar0, "door_pside_r") != 0xFFFFFFFF)
					{
						return 0x00000000;
					}
				}
				if (iParam0 & 0x00000020 != 0x00000000)
				{
					if (unk_0xF653B9B22DA806A9(iVar0, "door_dside_r") == 0xFFFFFFFF || unk_0xF653B9B22DA806A9(iVar0, "door_pside_r") == 0xFFFFFFFF)
					{
						return 0x00000000;
					}
				}
				if (iParam0 & 0x00000040 != 0x00000000)
				{
					if (unk_0x7D8B2A8F9EA82DB7(iVar1))
					{
						if (unk_0xF653B9B22DA806A9(iVar0, "seat_r") == 0xFFFFFFFF)
						{
							return 0x00000000;
						}
					}
					else if (unk_0xF653B9B22DA806A9(iVar0, "seat_dside_r") != 0xFFFFFFFF || unk_0xF653B9B22DA806A9(iVar0, "seat_pside_r") != 0xFFFFFFFF)
					{
						return 0x00000000;
					}
				}
				if (iParam0 & 0x00000080 != 0x00000000)
				{
					if (unk_0xF653B9B22DA806A9(iVar0, "seat_dside_r") == 0xFFFFFFFF || unk_0xF653B9B22DA806A9(iVar0, "seat_pside_r") == 0xFFFFFFFF)
					{
						return 0x00000000;
					}
				}
				if (iParam0 & 0x00000100 != 0x00000000)
				{
					if (!func_10(iVar2))
					{
						return 0x00000000;
					}
					if (func_85(iVar2, 0x00000000) != iVar1)
					{
						return 0x00000000;
					}
				}
				if (iParam0 & 0x00000200 != 0x00000000)
				{
					if (!unk_0x8E39AC3C76C8AA58(iVar1) && !unk_0x7D8B2A8F9EA82DB7(iVar1))
					{
						return 0x00000000;
					}
					if (unk_0x56E1CD81AE700E98(iVar0))
					{
						return 0x00000000;
					}
					sVar4 = unk_0xA712FAE854841798(iVar0, &uVar3);
					if (!unk_0xEA6BC48857E0AC4C(sVar4))
					{
						if (unk_0x12AB0310C2281427(sVar4) == unk_0x12AB0310C2281427("taxiService"))
						{
							return 0x00000000;
						}
					}
					if (func_83(iVar0, iVar2, 0x00000000))
					{
						return 0x00000000;
					}
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_84(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iVar2], 0x00000000))
		{
			if (unk_0x5B6BEDD9A86023B7(&sVar1, iParam0))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_84(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0x00000000;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 0x00000005;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 0x00000006;
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 0x00000003;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000002)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_85(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_86(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_86(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_58 = 0x00000001;
	uParam1->f_54 = 0x000000FF;
	uParam1->f_55 = 0x000000FF;
	uParam1->f_56 = 0x000000FF;
	uParam1->f_61 = 0x00000001;
	uParam1->f_3 = 0x000003E8;
	uParam1->f_1 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = joaat("tailgater");
			if (Global_1B416.f_2378.f_63.f_3A[0x00000080] && !Global_1B416.f_2378.f_63.f_3A[0x00000083])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0x00000000;
					uParam1->f_9 = 0x00000001;
					uParam1->f_B[0x00000000] = 0x00000001;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 0x0000002B;
					uParam1->f_6 = 0x0000002B;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_9 = 0x00000000;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 0x00000020;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_1B416.f_2378.f_63.f_3A[0x00000077])
					{
						uParam1->f_B[0x00000001] = 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000001:
			if (iParam2 == 0x00000001)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 0x00000002)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_1B416.f_2378.f_63.f_3A[0x00000076])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 0x00000035;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x0000003B;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x0000006F;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_A = 0x00000001;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0x00000000] = 0x00000001;
					uParam1->f_B[0x00000001] = 0x00000001;
					uParam1->f_B[0x00000002] = 0x00000001;
					uParam1->f_B[0x00000003] = 0x00000001;
					uParam1->f_B[0x00000004] = 0x00000001;
					uParam1->f_B[0x00000005] = 0x00000001;
					uParam1->f_B[0x00000006] = 0x00000001;
					uParam1->f_B[0x00000007] = 0x00000001;
					uParam1->f_B[0x00000008] = 0x00000001;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_87()
{
	switch (iLocal_47)
	{
		case 0x00000001:
			break;
		
		case 0x00000004:
			func_16("CHEAT_SUPER_JUMP");
			func_31(0x00000000, 0x00000001);
			iLocal_47 = 0x00000005;
			break;
		
		case 0x00000005:
			if ((((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || func_27(0x00000017)) || func_27(0x00000016)) || func_27(0x00000000)) || unk_0x7C2B4C53942076F8())
			{
				iLocal_47 = 0x00000009;
				return;
			}
			unk_0xD709F94D8B847F15(unk_0xD803B885F5E47A62());
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000D9, 0x00000001);
			break;
		
		case 0x00000009:
			func_24("CHEAT_SUPER_JUMP");
			func_31(0x00000000, 0x00000000);
			iLocal_47 = 0x00000001;
			break;
		
		default:
			break;
	}
}

void func_88()
{
	if ((func_111() || iLocal_84 != 0x00000000) || func_15(0x0000000E))
	{
		unk_0x38C3A68D7861DCFD(0x00000002, 0x000000F3, 0x00000001);
	}
	func_110();
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (unk_0x946BFA82EB988C81(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		return;
	}
	if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		return;
	}
	if (func_34() || unk_0x991B1F0980C62628())
	{
		return;
	}
	if (func_109())
	{
		if (!iLocal_82)
		{
			func_108();
			iLocal_82 = 0x00000001;
		}
		return;
	}
	iLocal_82 = 0x00000000;
	iLocal_83 = 0x00000000;
	if ((func_107(0x3AE41AB4, 0x0000000C) || unk_0x0DF446069AE45B92(joaat("buzzoff"))) || func_106(0x00000014, joaat("buzzard")))
	{
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_107(0xBC64468A, 0x0000000B) || unk_0x0DF446069AE45B92(joaat("bandit"))) || func_106(0x00000014, joaat("bmx")))
	{
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_107(0x39E5A867, 0x0000000A) || unk_0x0DF446069AE45B92(joaat("holein1"))) || func_106(0x00000014, joaat("caddy")))
	{
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_107(0xEFEA36C7, 0x0000000A) || unk_0x0DF446069AE45B92(joaat("comet"))) || func_106(0x00000014, joaat("comet2")))
	{
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_107(0x1B555C7C, 0x0000000C) || unk_0x0DF446069AE45B92(joaat("flyspray"))) || func_106(0x00000014, joaat("duster")))
	{
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_107(0xD845D0D7, 0x0000000C) || unk_0x0DF446069AE45B92(joaat("rocket"))) || func_106(0x00000014, joaat("pcj")))
	{
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_107(0xB5BBC813, 0x0000000A) || unk_0x0DF446069AE45B92(joaat("rapidgt"))) || func_106(0x00000014, joaat("rapidgt")))
	{
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_107(0x7BC910DA, 0x0000000C) || unk_0x0DF446069AE45B92(joaat("offroad"))) || func_106(0x00000014, joaat("sanchez")))
	{
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_107(0x3300B951, 0x00000009) || unk_0x0DF446069AE45B92(joaat("vinewood"))) || func_106(0x00000014, joaat("stretch")))
	{
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_107(0xDCC003DC, 0x0000000C) || unk_0x0DF446069AE45B92(joaat("barnstorm"))) || func_106(0x00000014, joaat("stunt")))
	{
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_107(0xAC99A252, 0x0000000A) || unk_0x0DF446069AE45B92(joaat("trashed"))) || func_106(0x00000014, joaat("trash")))
	{
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_102())
	{
		if ((func_107(0xE997F3F3, 0x0000000A) || unk_0x0DF446069AE45B92(joaat("extinct"))) || func_106(0x00000014, joaat("dodo")))
		{
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_107(0x8161A257, 0x0000000A) || unk_0x0DF446069AE45B92(joaat("deathcar"))) || func_106(0x00000014, joaat("dukes2")))
		{
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_107(0x3D54C0F2, 0x00000009) || unk_0x0DF446069AE45B92(joaat("bubbles"))) || func_106(0x00000014, joaat("submersible2")))
		{
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_107(0xE88CF07B, 0x0000000B) || unk_0x0DF446069AE45B92(joaat("hoptoit"))) || func_106(0x00000000, 0x00000000))
	{
		func_101();
	}
	if ((func_107(0xEE539EA1, 0x00000008) || unk_0x0DF446069AE45B92(joaat("snowday"))) || func_106(0x00000001, 0x00000000))
	{
		func_100();
	}
	if ((func_107(0x42CE5DA3, 0x00000007) || unk_0x0DF446069AE45B92(joaat("catchme"))) || func_106(0x00000002, 0x00000000))
	{
		func_99();
	}
	if ((func_107(0xE6E10FA0, 0x00000009) || unk_0x0DF446069AE45B92(joaat("gotgills"))) || func_106(0x00000003, 0x00000000))
	{
		func_98();
	}
	if ((func_107(0x16323C0E, 0x0000000C) || unk_0x0DF446069AE45B92(joaat("toolup"))) || func_106(0x00000004, 0x00000000))
	{
		iLocal_51 = 0x00000004;
	}
	if ((func_107(0x24268F55, 0x00000008) || unk_0x0DF446069AE45B92(joaat("makeitrain"))) || func_106(0x00000005, 0x00000000))
	{
		iLocal_52 = 0x00000004;
	}
	if ((func_107(0x1B0072BE, 0x0000000C) || unk_0x0DF446069AE45B92(joaat("turtle"))) || func_106(0x00000006, 0x00000000))
	{
		iLocal_53 = 0x00000004;
	}
	if ((func_107(0x69B0B046, 0x00000009) || unk_0x0DF446069AE45B92(joaat("powerup"))) || func_106(0x00000007, 0x00000000))
	{
		iLocal_54 = 0x00000004;
	}
	if ((func_107(0x45EF138E, 0x0000000A) || unk_0x0DF446069AE45B92(joaat("fugitive"))) || func_106(0x00000008, 0x00000000))
	{
		iLocal_55 = 0x00000004;
	}
	if ((func_107(0xE9464907, 0x0000000A) || unk_0x0DF446069AE45B92(joaat("lawyerup"))) || func_106(0x00000009, 0x00000000))
	{
		iLocal_56 = 0x00000004;
	}
	if ((func_107(0x875C6226, 0x0000000B) || unk_0x0DF446069AE45B92(joaat("skydive"))) || func_106(0x0000000A, 0x00000000))
	{
		iLocal_57 = 0x00000004;
	}
	if ((func_107(0xCE2DBA9E, 0x0000000C) || unk_0x0DF446069AE45B92(joaat("highex"))) || func_106(0x0000000B, 0x00000000))
	{
		func_97();
	}
	if ((func_107(0x74BA9F1D, 0x0000000C) || unk_0x0DF446069AE45B92(joaat("incendiary"))) || func_106(0x0000000C, 0x00000000))
	{
		func_96();
	}
	if ((func_107(0xCA1E47E4, 0x00000009) || unk_0x0DF446069AE45B92(joaat("hothands"))) || func_106(0x0000000D, 0x00000000))
	{
		func_95();
	}
	if ((func_107(0x7C6EE719, 0x00000009) || unk_0x0DF446069AE45B92(joaat("floater"))) || func_106(0x0000000E, 0x00000000))
	{
		func_94();
	}
	if ((func_107(0x4AF8CF73, 0x0000000A) || unk_0x0DF446069AE45B92(joaat("painkiller"))) || func_106(0x0000000F, 0x00000000))
	{
		func_93();
	}
	if ((func_107(0x5BCDAE63, 0x00000007) || unk_0x0DF446069AE45B92(joaat("slowmo"))) || func_106(0x00000010, 0x00000000))
	{
		func_92();
	}
	if ((func_107(0x06E36350, 0x00000010) || unk_0x0DF446069AE45B92(joaat("skyfall"))) || func_106(0x00000011, 0x00000000))
	{
		func_91();
	}
	if ((func_107(0xB3E9F403, 0x00000008) || unk_0x0DF446069AE45B92(joaat("liquor"))) || func_106(0x00000012, 0x00000000))
	{
		func_90();
	}
	if ((func_107(0x799E8BB9, 0x00000009) || unk_0x0DF446069AE45B92(joaat("deadeye"))) || func_106(0x00000013, 0x00000000))
	{
		func_89();
	}
}

void func_89()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(0x00000017) || func_27(0x00000015)) || func_27(0x00000010))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 0x00000001)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 0x00000004;
	}
}

void func_90()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_65 = 0x00000001;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_65 = 0x00000001;
		return;
	}
	if ((func_27(0x00000017) || func_27(0x00000015)) || func_27(0x00000012))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_65 = 0x00000001;
		return;
	}
	if (iLocal_65 == 0x00000001)
	{
		iLocal_65 = 0x00000004;
	}
	else if (iLocal_65 == 0x00000005)
	{
		iLocal_65 = 0x00000009;
	}
}

void func_91()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0x7C2B4C53942076F8())
	{
		func_21("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 0x00000001)
	{
		func_21("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_27(0x00000017) || func_27(0x00000015)) || func_27(0x00000011)) || func_66(0x00000000)) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) || !unk_0x19C7D1907D1DDDAB())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0x8A22C4C08282BF26(joaat("respawn_controller")) > 0x00000000)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 0x00000002;
}

void func_92()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(0x00000017) || func_27(0x00000015)) || func_27(0x00000010))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 0x00000001)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 0x00000004;
	}
}

void func_93()
{
	vector3 vVar0;
	
	vVar0 = { func_19(unk_0xD803B885F5E47A62()) };
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_27(0x00000017) || func_27(0x00000015)) || func_27(0x0000000F)) || vVar0.z <= -170f)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 0x00000001)
	{
		iLocal_62 = 0x00000004;
	}
	else if (iLocal_62 == 0x00000005)
	{
		iLocal_62 = 0x00000009;
	}
}

void func_94()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_27(0x00000017) || func_27(0x00000015)) || func_27(0x0000000E)) || func_66(0x00000011)) || unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 0x00000004;
}

void func_95()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_60 = 0x00000001;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_60 = 0x00000001;
		return;
	}
	if ((func_27(0x00000017) || func_27(0x00000015)) || func_27(0x0000000D))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_60 = 0x00000001;
		return;
	}
	if (iLocal_60 == 0x00000001)
	{
		iLocal_60 = 0x00000004;
	}
	else if (iLocal_60 == 0x00000005)
	{
		iLocal_60 = 0x00000009;
	}
}

void func_96()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_59 = 0x00000001;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_59 = 0x00000001;
		return;
	}
	if ((func_27(0x00000017) || func_27(0x00000015)) || func_27(0x0000000C))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_59 = 0x00000001;
		return;
	}
	if (iLocal_59 == 0x00000001)
	{
		iLocal_59 = 0x00000004;
	}
	else if (iLocal_59 == 0x00000005)
	{
		iLocal_59 = 0x00000009;
	}
}

void func_97()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_58 = 0x00000001;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_58 = 0x00000001;
		return;
	}
	if ((func_27(0x00000017) || func_27(0x00000015)) || func_27(0x0000000B))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_58 = 0x00000001;
		return;
	}
	if (iLocal_58 == 0x00000001)
	{
		iLocal_58 = 0x00000004;
	}
	else if (iLocal_58 == 0x00000005)
	{
		iLocal_58 = 0x00000009;
	}
}

void func_98()
{
	if ((((func_27(0x00000017) || func_27(0x00000016)) || func_27(0x00000003)) || func_15(0x00000009)) || func_15(0x0000000A))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 0x00000001)
	{
		iLocal_50 = 0x00000004;
	}
	else if (iLocal_50 == 0x00000005)
	{
		iLocal_50 = 0x00000009;
	}
}

void func_99()
{
	if ((((func_27(0x00000017) || func_27(0x00000016)) || func_27(0x00000002)) || func_15(0x00000009)) || func_15(0x0000000A))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 0x00000001)
	{
		iLocal_49 = 0x00000004;
	}
	else if (iLocal_49 == 0x00000005)
	{
		iLocal_49 = 0x00000009;
	}
}

void func_100()
{
	if ((func_27(0x00000017) || func_27(0x00000016)) || func_27(0x00000001))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 0x00000001)
	{
		iLocal_48 = 0x00000004;
	}
	else if (iLocal_48 == 0x00000005)
	{
		iLocal_48 = 0x00000009;
	}
}

void func_101()
{
	if (((func_27(0x00000017) || func_27(0x00000016)) || func_27(0x00000000)) || unk_0x7C2B4C53942076F8())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 0x00000001)
	{
		iLocal_47 = 0x00000004;
	}
	else if (iLocal_47 == 0x00000005)
	{
		iLocal_47 = 0x00000009;
	}
}

int func_102()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000006);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000002);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000004);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000006);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar0, 0x00000001);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(0x00000362);
					unk_0x5D96D8530B3D0904(&iVar0, 0x00000000);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 0x00000001;
			}
		}
	}
	if (Global_24BC8 == 0x00000002)
	{
		return 0x00000001;
	}
	else if (Global_24BC8 == 0x00000003)
	{
		return 0x00000000;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(0x00000362), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_103(int iParam0, char* sParam1)
{
	if (iLocal_46 == 0x00000001)
	{
		if (((((func_15(0x00000009) || unk_0x8A22C4C08282BF26(joaat("barry1")) > 0x00000000) || unk_0x8A22C4C08282BF26(joaat("tennis")) > 0x00000000) || func_27(0x00000017)) || func_27(0x00000016)) || func_27(0x00000014))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 0x00000002;
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(0x00000042, 0x00000000) == 0x00000000)
			{
				return 0x00000000;
			}
			break;
		
		case joaat("dukes2"):
			if (func_105(0x00000040, 0x00000000) == 0x00000000)
			{
				return 0x00000000;
			}
			break;
		
		case joaat("submersible2"):
			if (func_105(0x0000003F, 0x00000000) == 0x00000000)
			{
				return 0x00000000;
			}
			break;
	}
	return 0x00000001;
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_792A, iParam0))
	{
		if (iParam1 != 0x00000000)
		{
			if (iParam1 == Global_792B)
			{
				unk_0x0674E58A79778E99(&Global_792A, iParam0);
				iLocal_83 = 0x00000001;
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&Global_792A, iParam0);
			iLocal_83 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_107(int iParam0, int iParam1)
{
	if (!func_15(0x0000000E))
	{
		return unk_0x20FAB06548D9F59B(iParam0, iParam1);
	}
	return 0x00000000;
}

void func_108()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (iLocal_80[iVar0] != 0xFFFFFFFF)
		{
			unk_0xD59AE843FA2C6B40(iLocal_80[iVar0]);
			iLocal_80[iVar0] = 0xFFFFFFFF;
		}
		iVar0++;
	}
}

int func_109()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_110()
{
	if (func_15(0x0000000E) || (!unk_0x0F1CCD77290EE12F() && iLocal_84 != 0x00000000))
	{
		iLocal_84 = unk_0x1C0640BA9A7327B3();
	}
	if (iLocal_84 != 0x00000000)
	{
		if (!func_15(0x0000000E))
		{
			if ((unk_0x1C0640BA9A7327B3() - iLocal_84) > 0x000003E8)
			{
				iLocal_84 = 0x00000000;
			}
		}
	}
}

int func_111()
{
	if (Global_12C52)
	{
		return 0x00000001;
	}
	else if (Global_F042 && !Global_F048)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_112()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		iLocal_80[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
	iLocal_82 = 0x00000000;
	iLocal_81 = 0x00000000;
}

void func_113()
{
	unk_0x2CBCAE34E452D495(0x00000000);
	if (iLocal_64 == 0x00000005)
	{
		func_37();
	}
	if (iLocal_65 == 0x00000005)
	{
		func_46(0x00000001);
	}
	if (iLocal_63 == 0x00000005 || iLocal_66 == 0x00000005)
	{
		unk_0x9A82EEAF6CA12AEE(1f);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (iLocal_62 == 0x00000005)
		{
			unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0x00000000);
			unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		unk_0xA18F227A9855B50D(unk_0xD803B885F5E47A62(), 1f);
		unk_0xB48034DF832D2A0D(unk_0xD803B885F5E47A62(), 1f);
	}
	unk_0x7725C98D1438380E(0x00000000);
	Global_7928 = 0x00000000;
	Global_7927 = 0x00000000;
	Global_7929 = 0x00000000;
	Global_792A = 0x00000000;
	Global_792C = 0x00000000;
	Global_792B = 0x00000000;
	unk_0x10FAF14A60A0DBE1();
}

