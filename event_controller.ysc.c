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
	float fLocal_47 = 0f;
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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x2EBF608FFE6CA406(0x00000022))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_140();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0x00000000;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0x00000000;
	iVar6 = 0x00000000;
	if (unk_0x1963B11DE70153E0())
	{
		iVar2 = 0x00000000;
		while (iVar2 < unk_0xDFB2BAED99ED0A2E(0x00000001))
		{
			iVar7 = unk_0xB98DB26FBF676FA1(0x00000001, iVar2);
			switch (iVar7)
			{
				case 0x000000C0:
					func_137();
					break;
				
				case 0x000000C1:
					func_136();
					break;
				
				case 0x000000C2:
					func_130(iVar2);
					break;
				
				case 0x000000C3:
					func_129(iVar2);
					break;
				
				case 0x000000C4:
					func_118(iVar2);
					break;
				
				case 0x000000D6:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0x00000000;
	while (iVar2 < unk_0xDFB2BAED99ED0A2E(0x00000000))
	{
		iVar0 = unk_0xB98DB26FBF676FA1(0x00000000, iVar2);
		iLocal_64 = 0x00000001;
		switch (iVar0)
		{
			case 0x0000008D:
				unk_0x218F818E64020C17(0x00000000, iVar2, &iVar1, 0x00000001);
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					if (unk_0xE2F1E99DD161A861(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_D203.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (unk_0xEC560E589DF8370E(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_D203.f_19[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 0x0000008E:
				unk_0x218F818E64020C17(0x00000000, iVar2, &iVar1, 0x00000001);
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					if (unk_0xE2F1E99DD161A861(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_D203.f_D[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (unk_0xEC560E589DF8370E(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_D203.f_25[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_D203 = iVar3;
	Global_D203.f_C = iVar4;
	Global_D203.f_18 = iVar5;
	Global_D203.f_24 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 0x0000000A;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar1;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &Var0, 0x00000027))
	{
		iVar1 = unk_0x21E2782E236757E1(Var0.f_26);
		if (iVar1 >= 0x00000000 && iVar1 < unk_0xE2D8B9E8FB021AA3())
		{
			if (unk_0xC0C52E67C988FD4A(iVar1) || unk_0x757E6194CAEC1CE9(iVar1))
			{
				if (unk_0x757E6194CAEC1CE9(iVar1))
				{
					func_55(iVar1);
				}
				else
				{
					unk_0x5CE76FAABB30536B(iVar1);
				}
				func_54(Var0.f_25, 0xFFFFFFFF);
			}
			else if (func_47())
			{
				func_4(Var0.f_1D, Var0, Var0.f_26, Var0.f_10, Var0.f_23, Var0.f_24);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, int iParam2, struct<13> Param3, var uParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	bVar0 = 0x00000000;
	if (iParam5 >= 0x000F4240)
	{
		iParam5 = (iParam5 - 0x000F4240);
		bVar0 = 0x00000001;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_46())
		{
			func_45(iParam2);
			return 0x00000000;
		}
		if (func_44())
		{
			func_45(iParam2);
			return 0x00000000;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		if (bVar0)
		{
		}
		else if (!unk_0x04A104F429E6CBB0(&Param3))
		{
			func_45(iParam2);
			return 0x00000000;
		}
		if (Global_4BE5)
		{
			func_45(iParam2);
			return 0x00000000;
		}
		bVar1 = 0x00000001;
		if (!func_43())
		{
			if (!func_42(0x00000000))
			{
				if (bVar1)
				{
					func_45(iParam2);
					return 0x00000000;
				}
			}
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		if (!func_41(unk_0xD803B885F5E47A62()))
		{
			func_45(iParam2);
			return 0x00000000;
		}
	}
	if (unk_0xEA6BC48857E0AC4C(&Param1))
	{
		func_45(iParam2);
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(&Param0))
	{
		func_45(iParam2);
		return 0x00000000;
	}
	Var2 = { Param1 };
	iVar3 = func_40(Var2);
	if (iVar3 != 0xFFFFFFFF)
	{
		func_37(iVar3);
	}
	uVar4 = unk_0x21E2782E236757E1(iParam2);
	iVar5 = unk_0x30CEEF88C36F20EF(uVar4);
	iVar6 = 0x00000000;
	iVar6 = 0x00000000;
	while (iVar6 <= 0x0000000B)
	{
		if (iVar5 == Global_248C9C[iVar6 /*4*/].f_3 && unk_0x1C0640BA9A7327B3() < Global_248C9C[iVar6 /*4*/].f_2)
		{
			Global_248C9C[iVar6 /*4*/].f_2 = unk_0x1C0640BA9A7327B3() + 30000;
			iVar6 = 0x0000000C;
			func_45(iParam2);
			return 0x00000000;
		}
		iVar6++;
	}
	Var7.f_1 = 0xFFFFFFFF;
	Var7.f_2 = 0xFFFFFFFF;
	Var7.f_9 = 0xFFFFFFFF;
	func_36(&Var7);
	iVar8 = 0x00000000;
	iVar9 = 0x00000000;
	iVar10 = 0x0000003F;
	iVar11 = 0x00000000;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0x00000000;
	iVar15 = 0x00000000;
	iVar16 = 0x00000000;
	iVar17 = 0x00000001;
	iVar18 = 0x00000000;
	iVar19 = 0x00000000;
	if (func_35(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 0x00000028;
		iVar15 = 0x00000000;
		iVar11 = iVar11;
	}
	else if (func_33(&Param0, &Var7, 0x00000000))
	{
		iVar10 = Var7.f_2;
		iVar8 = func_32(iVar10, Var7.f_1);
		iVar9 = func_31(&Var7);
		Var12 = { func_30(&Var7, 0x00000000) };
		Var13 = { func_29(&Var7) };
		iVar15 = 0x00000001;
		iVar14 = func_28(&Var7, 0x00000000);
		iVar19 = func_27(&Var7);
		uVar20 = func_25(&Var7);
		uVar21 = func_24(&Var7);
		bVar22 = func_19(&Var7);
		if (!bVar22)
		{
			iVar18 = 0x00000001;
		}
	}
	else
	{
		bVar23 = 0x00000000;
		if (func_17(unk_0xD803B885F5E47A62(), Param3))
		{
			if (!unk_0x8CD06866876216F2())
			{
				bVar23 = 0x00000001;
			}
			else
			{
				func_45(iParam2);
				func_15(0x00000000);
				return 0x00000000;
			}
		}
		if (!unk_0xDC30EF462887322E())
		{
			if (!bVar23)
			{
				if (func_13(unk_0xD803B885F5E47A62(), Param3))
				{
					func_45(iParam2);
					func_15(0x00000000);
					return 0x00000000;
				}
			}
		}
		if (!func_12())
		{
			func_45(iParam2);
			bVar24 = 0x00000001;
			func_15(bVar24);
			return 0x00000000;
		}
		bVar25 = 0x00000000;
		if (!bVar23)
		{
			if (func_7(Param3, &bVar25, 0x00000001))
			{
				func_45(iParam2);
				func_15(bVar25);
				return 0x00000000;
			}
		}
		iVar16 = 0x00000001;
		iVar17 = 0x00000000;
		iVar15 = 0x00000001;
	}
	iVar26 = Global_152CDB;
	if (iVar26 >= 0x0000000C)
	{
		iVar26 = (iVar26 - 0x00000001);
	}
	iVar27 = (iVar26 - 0x00000001);
	while (iVar27 >= 0x00000000)
	{
		Global_24839F[iVar26 /*99*/] = { Global_24839F[iVar27 /*99*/] };
		iVar26 = (iVar26 - 0x00000001);
		iVar27 = (iVar27 - 0x00000001);
	}
	Global_152CDB++;
	if (Global_152CDB > 0x0000000C)
	{
		Global_152CDB = 0x0000000C;
	}
	iVar28 = 0x00000000;
	Global_24839F[iVar28 /*99*/] = 0x00000000;
	Global_24839F[iVar28 /*99*/].f_1 = 0x00000000;
	Global_24839F[iVar28 /*99*/].f_5 = 0x00000000;
	Global_24839F[iVar28 /*99*/].f_2 = iVar16;
	Global_24839F[iVar28 /*99*/].f_3 = 0x00000000;
	Global_24839F[iVar28 /*99*/].f_4 = iVar17;
	Global_24839F[iVar28 /*99*/].f_6 = { Param0 };
	Global_24839F[iVar28 /*99*/].f_C = uVar20;
	Global_24839F[iVar28 /*99*/].f_D = uVar21;
	Global_24839F[iVar28 /*99*/].f_F = { Param1 };
	StringCopy(&(Global_24839F[iVar28 /*99*/].f_1F), "", 64);
	Global_24839F[iVar28 /*99*/].f_31 = iVar10;
	Global_24839F[iVar28 /*99*/].f_32 = iVar8;
	Global_24839F[iVar28 /*99*/].f_33 = iVar9;
	Global_24839F[iVar28 /*99*/].f_5B = iParam2;
	Global_24839F[iVar28 /*99*/].f_39 = { Var12 };
	Global_24839F[iVar28 /*99*/].f_49 = { Var13 };
	Global_24839F[iVar28 /*99*/].f_34 = iVar14;
	Global_24839F[iVar28 /*99*/].f_35 = 0x00000000;
	Global_24839F[iVar28 /*99*/].f_35.f_1 = 0x00000000;
	Global_24839F[iVar28 /*99*/].f_35.f_2 = 0x00000000;
	Global_24839F[iVar28 /*99*/].f_38 = iVar15;
	Global_24839F[iVar28 /*99*/].f_5A = uParam4;
	Global_24839F[iVar28 /*99*/].f_5C = 0xFFFFFFFF;
	Global_24839F[iVar28 /*99*/].f_5D = iVar18;
	Global_24839F[iVar28 /*99*/].f_5E = Global_248CD0;
	Global_24839F[iVar28 /*99*/].f_5F = iVar19;
	Global_24839F[iVar28 /*99*/].f_62 = unk_0x04A104F429E6CBB0(&Param3);
	if (Global_24839F[iVar28 /*99*/].f_32 == 0x00000000)
	{
		if (Global_24839F[iVar28 /*99*/].f_33 == 0x00000001)
		{
			Global_24839F[iVar28 /*99*/].f_38 = 0x00000000;
		}
	}
	Global_24839F[iVar28 /*99*/].f_60 = func_6(Param3, iVar28);
	Global_24839F[iVar28 /*99*/].f_61 = 0x00000000;
	Global_24839F[iVar28 /*99*/].f_59 = iParam5;
	Global_248CD0++;
	Global_24839F[iVar28 /*99*/].f_2F = func_5(Param3);
	if (Global_24839F[iVar28 /*99*/].f_2F != 0xFFFFFFFF)
	{
		Global_24839F[iVar28 /*99*/].f_30 = unk_0x1C0640BA9A7327B3() + 15000;
	}
	return 0x00000001;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!unk_0xDC30EF462887322E())
	{
		return 0xFFFFFFFF;
	}
	Var0[0x00000000 /*13*/] = { Param0 };
	iVar1 = unk_0x3F4BBF0887AB451C(&Var0, 0x00000001);
	if (iVar1 < 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0x04A104F429E6CBB0(&uParam0))
	{
		return 0x00000000;
	}
	if (Global_24839F[iParam13 /*99*/].f_5A > 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)
{
	struct<13> Var0;
	
	*iParam13 = 0x00000000;
	if (func_11(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0xDC30EF462887322E())
	{
		if (!func_10())
		{
			*iParam13 = 0x00000001;
			return 0x00000001;
		}
	}
	if (!func_9(0x00000001) && !bParam14)
	{
		return 0x00000001;
	}
	Var0 = { func_8(unk_0xD803B885F5E47A62()) };
	if (!bParam14 && !unk_0x4F18738E5BDE9AC9(&Var0, &uParam0))
	{
		if (!unk_0x04A104F429E6CBB0(&uParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0xBA301E03A078FA59() || (unk_0x33A494591F2C1975() && iParam0 == 0x00000000))
	{
		if (unk_0x4DEB7B48DD0AABA4(0x00000001) == 0x00000000 || unk_0xB5E18209CA3E7DE6(0x00000001, 0xFFFFFFFF) == 0x00000000)
		{
			return 0x00000000;
		}
	}
	else if (unk_0x4DEB7B48DD0AABA4(0x00000001) == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_10() == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_10()
{
	if (unk_0xBA301E03A078FA59() && unk_0x8BB6DE13A9F3105E())
	{
		return 0x00000001;
	}
	if (unk_0xA3F916BCE430ED26() && unk_0x8BB6DE13A9F3105E())
	{
		return 0x00000001;
	}
	if ((unk_0x33A494591F2C1975() && unk_0x9AE561F9BC3F06D8() == 0x00000000) && unk_0x8BB6DE13A9F3105E())
	{
		return 0x00000001;
	}
	if (unk_0xDC30EF462887322E() && unk_0x8BB6DE13A9F3105E())
	{
		return 0x00000001;
	}
	if (unk_0x0EFF6B4415DAF4A1() && unk_0x8BB6DE13A9F3105E())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_11(int iParam0)
{
	if (unk_0xBA301E03A078FA59() || (unk_0x33A494591F2C1975() && iParam0 == 0x00000000))
	{
		if (unk_0x4DEB7B48DD0AABA4(0x00000000) == 0x00000000 || unk_0xB5E18209CA3E7DE6(0x00000000, 0xFFFFFFFF) == 0x00000000)
		{
			return 0x00000000;
		}
	}
	else if (unk_0x4DEB7B48DD0AABA4(0x00000000) == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_10() == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_12()
{
	if (!unk_0xA3F916BCE430ED26())
	{
		return 0x00000001;
	}
	return unk_0x8BB6DE13A9F3105E();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0xDC30EF462887322E())
		{
			if (unk_0x5B9BB2932920F9CD(&uParam1))
			{
				return 0x00000000;
			}
		}
		if (!unk_0x4DEB7B48DD0AABA4(0x00000000))
		{
			if (!unk_0x4DEB7B48DD0AABA4(0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000003F:
		case 0x0000003E:
		case 0x0000003D:
		case 0x00000028:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_15(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0xA3F916BCE430ED26())
		{
			return;
		}
	}
	if (unk_0xDC30EF462887322E())
	{
		return;
	}
	iVar0 = unk_0x1C0640BA9A7327B3();
	if (iVar0 < Global_248CCD)
	{
		return;
	}
	if (unk_0xFEBC1E4EC9E001F0())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", 0xFFFFFFFF);
	}
	else
	{
		func_16("INV_RESTRICT", 0xFFFFFFFF);
	}
	Global_248CCD = (iVar0 + 0x001B7740);
}

void func_16(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0xDC30EF462887322E())
		{
			if (unk_0x5B9BB2932920F9CD(&uParam1))
			{
				return 0x00000000;
			}
		}
		if (!func_18())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_18()
{
	if (unk_0xEB6436A75F06F09F() == 0x00000000)
	{
		return 0x00000000;
	}
	if (unk_0xBA301E03A078FA59())
	{
		if (unk_0xB5E18209CA3E7DE6(0x00000001, 0xFFFFFFFF))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0x33A494591F2C1975())
	{
		if (unk_0x4DEB7B48DD0AABA4(0x00000001))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		if (unk_0x05449BDA851F5199(0x00000000, 0xFFFFFFFD, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB5E18209CA3E7DE6(0x00000000, 0xFFFFFFFF))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	if (func_23(uParam0))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_3F, 0x0000000E);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xEAE0D21A50E6C7F4(Global_249797.f_1.f_3F, 0x0000000E);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			return unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar1 /*88*/].f_4C, 0x0000000E);
		
		case 0x0000003E:
			return unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[iVar1 /*88*/].f_4C, 0x0000000E);
		
		case 0x00000028:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 0x00000020)
	{
		return iVar0;
	}
	return iVar0;
}

int func_20(var uParam0)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(&(uParam0->f_3)))
	{
		return 0xFFFFFFFF;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return 0x0000270F;
		}
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (Global_14010B.f_5)
				{
					return 0xFFFFFFFF;
				}
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x000004C2)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar0 /*88*/].f_4C, 0x0000000D))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 0xFFFFFFFF;
		
		case 0x0000003E:
			if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
			{
				if (Global_14010B.f_5)
				{
					return 0xFFFFFFFF;
				}
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000064)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[iVar0 /*88*/].f_4C, 0x0000000D))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 0xFFFFFFFF;
		
		case 0x00000028:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 0x0000000D))
		{
			if (Global_14010B.f_5)
			{
				return 0xFFFFFFFF;
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000003E)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[iVar0 /*88*/].f_4C, 0x0000000D))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return 0xFFFFFFFF;
	}
	else if (uParam0->f_2 < 0x00000020)
	{
		return 0xFFFFFFFF;
	}
	return 0xFFFFFFFF;
}

int func_21(var uParam0)
{
	if (Global_249797)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_249797.f_1), &(uParam0->f_3)))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_22(int iParam0)
{
	return iParam0 == 0x0000270F;
}

int func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!Global_248CD2.f_164[iVar0 /*75*/])
	{
		return 0x00000000;
	}
	if (!unk_0x7F8A39872A07D2CE(&(Global_248CD2.f_164[iVar0 /*75*/].f_A), &(uParam0->f_3)))
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_248CD2.f_164[iVar0 /*75*/].f_5, 0x00000003))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_20(uParam0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			return Global_C2055.f_4[iVar1 /*88*/].f_50;
		
		case 0x0000003E:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_25(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	iVar2 = func_20(uParam0);
	if (iVar2 == 0xFFFFFFFF)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 0x0000003E:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_26(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	iVar1 = func_20(uParam0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			return Global_C2055.f_1A2B5[iVar1 /*13*/];
		
		case 0x0000003E:
			return Global_E012E.f_24BD[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	if (func_23(uParam0))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_3F, 0x00000011);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xEAE0D21A50E6C7F4(Global_249797.f_1.f_3F, 0x00000011);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			return unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar1 /*88*/].f_4C, 0x00000011);
		
		case 0x0000003E:
			return unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[iVar1 /*88*/].f_4C, 0x00000011);
		
		case 0x00000028:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 0x00000020)
	{
		return iVar0;
	}
	return iVar0;
}

int func_28(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_14041C.f_1[uParam0->f_9 /*2*/], 0x00000000))
			{
				return Global_24981D.f_201[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_36;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			return Global_C2055.f_4[iVar1 /*88*/].f_36;
		
		case 0x0000003E:
			return Global_E012E.f_25C[iVar1 /*88*/].f_36;
		
		case 0x00000028:
			return 0x00000000;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_36;
	}
	else if (uParam0->f_2 < 0x00000020)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_29(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_23(uParam0))
	{
		return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_1C;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_1C;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			return Global_C2055.f_4[iVar1 /*88*/].f_26;
		
		case 0x0000003E:
			return Global_E012E.f_25C[iVar1 /*88*/].f_26;
		
		case 0x00000028:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_26;
	}
	else if (uParam0->f_2 < 0x00000020)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_30(var uParam0, bool bParam1)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_14041C.f_1[uParam0->f_9 /*2*/], 0x00000000))
			{
				return Global_24981D[uParam0->f_9 /*16*/];
			}
			return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_C;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_C;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			return Global_C2055.f_4[iVar1 /*88*/].f_16;
		
		case 0x0000003E:
			return Global_E012E.f_25C[iVar1 /*88*/].f_16;
		
		case 0x00000028:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_16;
	}
	else if (uParam0->f_2 < 0x00000020)
	{
		return Var0;
	}
	return Var0;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	if (func_23(uParam0))
	{
		return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_37;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_37;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 0x0000003F:
			return Global_C2055.f_4[iVar1 /*88*/].f_44;
		
		case 0x0000003E:
			return Global_E012E.f_25C[iVar1 /*88*/].f_44;
		
		case 0x00000028:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_44;
	}
	else if (uParam0->f_2 < 0x00000020)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	if (func_22(iParam1))
	{
		if (Global_249797)
		{
			return Global_249797.f_1.f_35;
		}
		return 0x00000100;
	}
	switch (iParam0)
	{
		case 0x0000003F:
			return Global_C2055.f_4[iParam1 /*88*/].f_41;
		
		case 0x0000003E:
			return Global_E012E.f_25C[iParam1 /*88*/].f_41;
		
		default:
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_E55BC.f_5[iParam1 /*88*/].f_41;
	}
	else if (iParam0 < 0x00000020)
	{
		return 0x00000100;
	}
	return 0x00000100;
}

int func_33(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0x000004C2;
	if (!bParam2)
	{
		iVar2 = 0x000004B0;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iVar2)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar0 /*88*/].f_4C, 0x0000000D))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_C2055.f_4[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 0x0000003F;
				uParam1->f_3 = { Global_C2055.f_4[iVar0 /*88*/] };
				uParam1->f_9 = 0xFFFFFFFF;
				return 0x00000001;
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000064)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[iVar0 /*88*/].f_4C, 0x0000000D))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_E012E.f_25C[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 0x0000003E;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = 0xFFFFFFFF;
				return 0x00000001;
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000003E)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[iVar0 /*88*/].f_4C, 0x0000000D))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_E55BC.f_5[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0xD803B885F5E47A62();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = 0xFFFFFFFF;
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000F:
			return 0x00000094;
		
		case 0x0000000E:
			return 0x00000095;
		
		case 0x0000007A:
			return 0x00000099;
		
		case 0x0000000B:
			return 0x00000096;
		
		case 0x0000000D:
			return 0x00000097;
		
		case 0x0000000C:
			return 0x00000098;
		
		case 0x00000008:
			return 0x0000009B;
		
		case 0x00000001:
			return 0x0000009C;
		
		case 0x00000005:
			return 0x0000009A;
		
		case 0x00000006:
			return 0x0000009D;
		
		case 0x00000003:
			return 0x000000A0;
		
		case 0x00000000:
			return 0x0000009E;
		
		case 0x00000002:
			return 0x0000009F;
		
		case 0x00000094:
			return 0x00000031;
		
		case 0x00000097:
			return 0x00000034;
		
		case 0x00000098:
			return 0x00000035;
		
		case 0x0000009D:
			return 0x00000036;
		
		case 0x00000099:
			return 0x00000037;
		
		case 0x0000009A:
			return 0x00000038;
		
		case 0x0000009B:
			return 0x00000039;
		
		case 0x0000009F:
			return 0x0000003A;
		
		case 0x000000A2:
			return 0x00000033;
		
		case 0x0000008E:
			return 0x0000003C;
		
		case 0x000000A0:
			return 0x0000003E;
		
		case 0x000000A4:
			return 0x0000003F;
		
		case 0x000000A3:
			return 0x00000040;
		
		case 0x000000A6:
			return 0x00000041;
		
		case 0x000000A7:
			return 0x00000042;
		
		case 0x000000A8:
			return 0x00000043;
		
		case 0x000000A9:
			return 0x00000044;
		
		case 0x000000AA:
			return 0x00000045;
		
		case 0x000000AB:
			return 0x00000046;
		
		case 0x000000AC:
			return 0x00000047;
		
		case 0x000000AD:
			return 0x00000048;
		
		case 0x000000B2:
			return 0x00000049;
		
		case 0x000000BC:
			return 0x0000004A;
		
		case 0x000000D6:
			return 0x0000004B;
		
		case 0x000000D7:
			return 0x0000004C;
		
		case 0x000000D8:
			return 0x0000004D;
		
		case 0x000000D9:
			return 0x0000004E;
		
		case 0x000000DA:
			return 0x0000004F;
		
		case 0x000000DB:
			return 0x00000050;
		
		case 0x000000DC:
			return 0x00000051;
		
		case 0x000000DD:
			return 0x00000052;
		
		case 0x000000B3:
			return 0x00000054;
		
		case 0x000000BD:
			return 0x00000053;
		
		case 0x000000B4:
			return 0x00000055;
		
		case 0x000000B6:
			return 0x00000057;
		
		case 0x000000B7:
			return 0x00000058;
		
		case 0x000000B9:
			return 0x00000059;
		
		case 0x000000BA:
			return 0x0000005A;
		
		case 0x000000BE:
			return 0x0000005B;
		
		case 0x000000BF:
			return 0x0000005C;
		
		case 0x000000C0:
			return 0x0000005D;
		
		case 0x000000C1:
			return 0x0000005E;
		
		case 0x000000CD:
			return 0x00000066;
		
		case 0x000000C2:
			return 0x0000005F;
		
		case 0x000000C5:
			return 0x00000060;
		
		case 0x000000C6:
			return 0x00000061;
		
		case 0x000000C3:
			return 0x00000062;
		
		case 0x000000C7:
			return 0x00000063;
		
		case 0x000000C8:
			return 0x00000064;
		
		case 0x000000C9:
			return 0x00000065;
		
		case 0x000000CF:
			return 0x00000067;
		
		case 0x000000D0:
			return 0x00000068;
		
		case 0x000000D1:
			return 0x00000069;
		
		case 0x000000D2:
			return 0x0000006A;
		
		case 0x000000E1:
			return 0x0000006B;
		
		case 0x000000E2:
			return 0x0000006C;
		
		case 0x000000E3:
			return 0x0000006D;
		
		case 0x000000E5:
			return 0x0000006E;
		
		case 0x000000E6:
			return 0x0000006F;
		
		case 0x000000E9:
			return 0x00000071;
		
		case 0x000000ED:
			return 0x00000073;
		
		case 0x000000EE:
			return 0x00000074;
		
		case 0x000000F9:
			return 0x0000007B;
		
		case 0x000000EF:
			return 0x00000075;
		
		case 0x000000F0:
			return 0x00000076;
		
		case 0x000000F1:
			return 0x00000077;
		
		case 0x000000F2:
			return 0x00000078;
		
		case 0x000000F4:
			return 0x00000079;
		
		case 0x000000F8:
			return 0x0000007A;
		
		case 0x000000FA:
			return 0x0000007C;
		
		case 0x000000F3:
			return 0x0000007D;
		
		case 0x0000009E:
			return 0x0000007E;
		
		case 0x000000B5:
			return 0x00000056;
		
		case 0x00000018:
			return 0x00000080;
		
		case 0x0000001A:
			return 0x00000081;
		
		default:
	}
	return 0x00000000;
}

int func_35(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	char cVar2[16];
	char[] cVar3[8];
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x7724E025FD444F45(sParam0);
	if (!iVar0 > 0x0000000C)
	{
		return 0x00000000;
	}
	StringCopy(&cVar1, unk_0xCFB8A25F37A74B68(sParam0, 0x00000000, 0x00000005), 8);
	if (!unk_0x7F8A39872A07D2CE(&cVar1, "FAKE_"))
	{
		return 0x00000000;
	}
	StringCopy(&cVar2, unk_0xCFB8A25F37A74B68(sParam0, 0x00000005, 0x0000000C), 16);
	if (unk_0x7F8A39872A07D2CE(&cVar2, "GOLF___"))
	{
		*iParam1 = 0x0000000B;
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar2, "TENNIS_"))
	{
		*iParam1 = 0x0000000C;
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar2, "PILOTS_"))
	{
		*iParam1 = 0x0000007A;
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 0x0000000D;
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar2, "DARTS__"))
	{
		*iParam1 = 0x0000000E;
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 0x0000000F;
	}
	else
	{
		return 0x00000000;
	}
	StringCopy(&cVar3, unk_0xCFB8A25F37A74B68(sParam0, 0x0000000C, iVar0), 8);
	if (!unk_0x64CD7116CDEEDF6B(&cVar3, iParam2))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_36(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0xFFFFFFFF;
	uParam0->f_2 = 0xFFFFFFFF;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = 0xFFFFFFFF;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_152CDB)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000B)
	{
		if (unk_0x1C0640BA9A7327B3() > Global_248C9C[iVar0 /*4*/].f_2 || Global_248C9C[iVar0 /*4*/].f_2 == 0x00000000)
		{
			if (unk_0xE2D8B9E8FB021AA3() > 0x00000000 && Global_24839F[iParam0 /*99*/].f_5B < unk_0xE2D8B9E8FB021AA3())
			{
				Global_248C9C[iVar0 /*4*/].f_3 = unk_0x30CEEF88C36F20EF(Global_24839F[iParam0 /*99*/].f_5B);
				Global_248C9C[iVar0 /*4*/].f_2 = unk_0x1C0640BA9A7327B3() + 30000;
				iVar0 = 0x0000000C;
			}
		}
		iVar0++;
	}
	if (Global_24839F[iParam0 /*99*/].f_5C != 0xFFFFFFFF)
	{
		unk_0xD59AE843FA2C6B40(Global_24839F[iParam0 /*99*/].f_5C);
	}
	if (!Global_24839F[iParam0 /*99*/].f_38)
	{
		if (Global_24839F[iParam0 /*99*/].f_34 != 0x00000000)
		{
			unk_0x295B8300CE227536(Global_24839F[iParam0 /*99*/].f_34);
		}
	}
	func_45(Global_24839F[iParam0 /*99*/].f_5B);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_152CDB)
	{
		Global_24839F[iVar1 /*99*/] = { Global_24839F[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_152CDB = (Global_152CDB - 0x00000001);
	if (Global_152CC0)
	{
		if (Global_152CBE > 0x00000000)
		{
			func_38();
		}
	}
}

void func_38()
{
	Global_152CC0 = 0x00000000;
}

void func_39(int iParam0)
{
	Global_24839F[iParam0 /*99*/] = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_1 = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_5 = 0x00000000;
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_F), "", 64);
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_1F), "", 64);
	Global_24839F[iParam0 /*99*/].f_2F = 0xFFFFFFFF;
	Global_24839F[iParam0 /*99*/].f_30 = unk_0x1C0640BA9A7327B3();
	Global_24839F[iParam0 /*99*/].f_31 = 0xFFFFFFFF;
	Global_24839F[iParam0 /*99*/].f_32 = 0xFFFFFFFF;
	Global_24839F[iParam0 /*99*/].f_33 = 0xFFFFFFFF;
	Global_24839F[iParam0 /*99*/].f_34 = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_35 = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_35.f_1 = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_35.f_2 = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_38 = 0x00000000;
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_39), "", 64);
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_49), "", 64);
	Global_24839F[iParam0 /*99*/].f_59 = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_5A = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_5B = 0xFFFFFFFF;
	Global_24839F[iParam0 /*99*/].f_5C = 0xFFFFFFFF;
	Global_24839F[iParam0 /*99*/].f_5D = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_5E = 0xFFFFFFFF;
	Global_24839F[iParam0 /*99*/].f_5F = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_60 = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_61 = 0x00000000;
	Global_24839F[iParam0 /*99*/].f_62 = 0x00000000;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_152CDB)
	{
		if (unk_0x7F8A39872A07D2CE(&uParam0, &(Global_24839F[iVar0 /*99*/].f_F)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_41(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 0x00000016);
}

bool func_42(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_43()
{
	if (Global_1B416.f_2378.f_14A[0x00000000 /*6*/])
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_44()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000002);
}

void func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x21E2782E236757E1(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= unk_0xE2D8B9E8FB021AA3())
	{
		return;
	}
	if (unk_0x52F89C03AFE2263B(iVar0))
	{
		return;
	}
}

bool func_46()
{
	return Global_140845 == 0x0000000A;
}

int func_47()
{
	if (!Global_12B4E)
	{
		return 0x00000001;
	}
	else if (func_48())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_48()
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_53())
	{
		return 0x00000001;
	}
	if (func_52())
	{
		return 0x00000001;
	}
	return func_49(0x00000078, 0xFFFFFFFF);
}

int func_49(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_50(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_51();
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

int func_51()
{
	return Global_1407E9;
}

bool func_52()
{
	return Global_140861;
}

bool func_53()
{
	return Global_140863;
}

void func_54(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar0 = func_51();
	}
	Global_140859[iVar0] = uParam0;
}

void func_55(int iParam0)
{
	func_111();
	if (func_110(0x00000001))
	{
		if (!func_99())
		{
			if (!func_88(0x00000001))
			{
				if (unk_0xA14BB9332558B949())
				{
					func_87();
				}
				func_58(0x00000001, 0x00000000);
				unk_0x5CE76FAABB30536B(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()
{
	Global_195CCB.f_7 = 0x00000001;
}

void func_57()
{
	Global_195CCB.f_6 = 0x00000001;
}

void func_58(int iParam0, bool bParam1)
{
	if (func_110(iParam0))
	{
		Global_195CCB.f_10[iParam0 /*44*/].f_5 = 0x00000001;
		func_60(iParam0, 0x00000000);
		func_59();
		if (bParam1)
		{
			Global_195CCB = 0x00000001;
		}
	}
}

void func_59()
{
	Global_195CCB.f_2 = 0x00000001;
}

void func_60(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0xA14BB9332558B949())
	{
		if (bParam1)
		{
			func_86();
			func_72(unk_0xD803B885F5E47A62(), 0x00000000, 0x00014000, 0x00000000);
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 = 0x00000008;
			func_71();
			func_70();
		}
		func_69(iParam0);
		func_68(iParam0);
		func_66();
		func_65();
		func_59();
	}
	Var0 = { func_64(iParam0) };
	func_63(iParam0);
	func_61(&Var0);
}

void func_61(char* sParam0)
{
	StringCopy(&(Global_2564C8.f_2F7), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_EA450.f_2A), sParam0, 24);
	}
}

bool func_62()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2567E2.f_1.f_AF9, 0x00000005);
}

void func_63(int iParam0)
{
	Global_195CCB.f_10[iParam0 /*44*/].f_3 = 0x00000001;
}

struct<6> func_64(int iParam0)
{
	return Global_195CCB.f_10[iParam0 /*44*/].f_6;
}

void func_65()
{
	Global_2564C8.f_7 = 0x00000064;
}

void func_66()
{
	unk_0x5D96D8530B3D0904(&Global_2564C8, 0x00000005);
	func_67();
}

void func_67()
{
	unk_0x5D96D8530B3D0904(&Global_2564C8, 0x00000008);
}

void func_68(var uParam0)
{
	Global_195CCB.f_8 = uParam0;
}

void func_69(var uParam0)
{
	Global_195CCB.f_9 = uParam0;
}

void func_70()
{
	Global_258538.f_1 = 0x00000000;
}

void func_71()
{
	char* sVar0;
	
	StringCopy(&(Global_2564C8.f_2F7), sVar0, 24);
}

void func_72(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_85())
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
		if (!func_83())
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
				else if (bVar14 || (!func_81(unk_0xD803B885F5E47A62(), 0x00000000) && !func_80()))
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
					func_77(0x00000000, 0x00000000, 0x00000000);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_76(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_75();
					func_74();
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
				if (!func_76(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_73(Global_440000.f_38DB3))
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

bool func_73(int iParam0)
{
	return iParam0 == 0x00000011;
}

void func_74()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_75()
{
	Global_24B2D0.f_2B6 = 0x00000000;
	Global_24B2D0.f_AA6 = 0x00000000;
	Global_24B2D0.f_200 = 0x00000000;
	Global_24B2D0.f_258 = 0x00000000;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0x00000000;
	Global_24B2D0.f_A79 = 0x00000000;
}

int func_76(int iParam0)
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

void func_77(bool bParam0, int iParam1, int iParam2)
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
				func_79();
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
		if (func_81(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 0x00000001);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_78(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_78(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 0x00000001);
	}
}

void func_79()
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

bool func_80()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_81(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_82(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_82(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_51();
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

int func_83()
{
	if (func_84() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_84()
{
	return Global_1406D3.f_12;
}

int func_85()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_86()
{
	unk_0x5D96D8530B3D0904(&Global_2564C8, 0x00000007);
}

void func_87()
{
	unk_0x5D96D8530B3D0904(&(Global_2564C8.f_2), 0x0000000F);
}

int func_88(int iParam0)
{
	if (iParam0 || func_98())
	{
		if (!func_90(0x00000001))
		{
			return 0x00000001;
		}
		if (!func_89())
		{
			return 0x00000001;
		}
		if (unk_0x28B41A2A2556BCF3())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_89()
{
	return Global_195CCB.f_4;
}

int func_90(bool bParam0)
{
	if (!func_95())
	{
		return 0x00000000;
	}
	if ((func_93(func_94(0xFFFFFFFF), 0x00000000) >= 0x00000001 || func_49(0x0000007B, 0xFFFFFFFF)) && func_49(0x00000085, 0xFFFFFFFF))
	{
		func_92();
		return 0x00000001;
	}
	else if (bParam0)
	{
		func_91();
	}
	return 0x00000000;
}

void func_91()
{
	Global_195CCB.f_5 = 0x00000001;
}

void func_92()
{
	Global_195CCB.f_4 = 0x00000001;
}

int func_93(int iParam0, int iParam1)
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

int func_94(int iParam0)
{
	return Global_152E1C[func_50(iParam0)];
}

int func_95()
{
	if (func_97() && func_96(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_96(int iParam0)
{
	return Global_140676[iParam0];
}

var func_97()
{
	return func_96(func_51() + 1);
}

var func_98()
{
	return Global_195CCB.f_2;
}

int func_99()
{
	if (((((func_109() || !func_107(0xFFFFFFFF)) || !func_105()) || !func_102()) || !func_101()) || func_100())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_100()
{
	return Global_258C15;
}

int func_101()
{
	if (unk_0x0A4C9A3D51EAE31F(0x00000387) == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_102()
{
	int iVar0;
	
	if (func_103(&iVar0) == 0x00000000)
	{
		if (iVar0 == 0x00000001)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_103(int iParam0)
{
	if (func_104())
	{
		*iParam0 = 0x0000000A;
		return 0x00000001;
	}
	return unk_0x0563201A314D0675(iParam0);
}

bool func_104()
{
	return Global_7944;
}

int func_105()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		if (func_106(iVar0) == 0x00000001)
		{
			iVar0 = 0x00000002;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_106(int iParam0)
{
	if (func_49(0x0000004C, iParam0) == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_108(iParam0);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	if (unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_108(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_51();
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

var func_109()
{
	return Global_2564C8.f_283;
}

bool func_110(int iParam0)
{
	return Global_195CCB.f_10[iParam0 /*44*/].f_4;
}

void func_111()
{
	int iVar0;
	int iVar1;
	
	func_117();
	if (unk_0x2E30080A978263CA() && !func_114())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000005)
		{
			iVar1 = unk_0xFAC8389AB7F580F0(func_113(iVar0));
			if (iVar1 > 0x00000000)
			{
				Global_195CCB.f_10[iVar0 /*44*/] = iVar1;
				func_112(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000005)
		{
			Global_195CCB.f_10[iVar0 /*44*/].f_4 = 0x00000000;
			iVar0++;
		}
	}
}

void func_112(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = 0x00000001;
	if (unk_0x4D2AEAE2BF06C3A3(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_195CCB.f_10[iParam0 /*44*/].f_6), {Var1}, 0x00000006);
	}
	else
	{
		bVar0 = 0x00000000;
	}
	if (unk_0x4D2AEAE2BF06C3A3(iParam1, "playlist", &Var1))
	{
		Global_195CCB.f_10[iParam0 /*44*/].f_C = { Var1 };
	}
	else
	{
		bVar0 = 0x00000000;
	}
	if (unk_0x2116042E56ED2CE2(iParam1, &Var1))
	{
		Global_195CCB.f_10[iParam0 /*44*/].f_1C = { Var1 };
	}
	else
	{
		bVar0 = 0x00000000;
	}
	if (iParam0 == 0x00000001)
	{
		if (unk_0x6943C2A5F566539D(iParam1, "coronaCountdown", &uVar2))
		{
			Global_195CCB.f_10[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_195CCB.f_10[iParam0 /*44*/].f_1 = 0x0001D4C0;
		}
		Global_195CCB.f_10[iParam0 /*44*/].f_2 = 0x00000000;
		if (unk_0x6943C2A5F566539D(iParam1, "eventSubType", &uVar2))
		{
			Global_195CCB.f_10[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 0x00000001)
		{
			Global_195CCB.f_1 = 0x00000001;
		}
		Global_195CCB.f_10[iParam0 /*44*/].f_4 = 0x00000001;
	}
	else
	{
		Global_195CCB.f_10[iParam0 /*44*/].f_4 = 0x00000000;
	}
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "TournamentQualifying";
		
		case 0x00000001:
			return "Tournament";
		
		case 0x00000002:
			return "LiveStreaming";
		
		case 0x00000003:
			return "Sweepstakes";
		
		case 0x00000004:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_114()
{
	if (!func_115())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_115()
{
	if (func_116())
	{
		return 0x00000000;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_116()
{
	return Global_258DFD;
}

void func_117()
{
	var uVar0;
	
	uVar0.f_8 = 0xFFFFFFFF;
	uVar0.f_9 = 0xFFFFFFFF;
	uVar0.f_10 = 0x00000006;
	Global_195CCB = { uVar0 };
}

void func_118(int iParam0)
{
	var uVar0;
	
	if (Global_12B4E)
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Hang_Up", "Phone_SoundSet_Michael", 0x00000001);
	}
	else
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Hang_Up", &Global_4C13, 0x00000001);
	}
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &uVar0, 0x00000015))
	{
		func_120();
	}
	Global_26D039.f_1 = 0x00000000;
	Global_26D039.f_21 = 0xFFFFFFFF;
	Global_26D039.f_22 = 0xFFFFFFFF;
	StringCopy(&(Global_26D039.f_4), "", 64);
	func_119(&(Global_26D039.f_14));
}

void func_119(var uParam0)
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

void func_120()
{
	Global_26D039.f_2 = 0x00000001;
	Global_26D039.f_26 = 0x00000001;
	if (unk_0x58424C49F8924842())
	{
		if (unk_0xC8DB5FB7097EAC7E())
		{
			while (unk_0x72B92E9113241B15())
			{
				SYSTEM::WAIT(0x00000000);
			}
			unk_0xBE1F51E5568A1C6A();
			Global_26D039 = 0x00000000;
			Global_26D039.f_2 = 0x00000000;
		}
		else if (func_128(Global_26D039.f_14))
		{
			if (unk_0x04A104F429E6CBB0(&(Global_26D039.f_14)))
			{
				if (!unk_0xD9AF1D6157682D28(&(Global_26D039.f_14)))
				{
					func_127();
				}
			}
		}
		else
		{
			func_127();
		}
	}
	else
	{
		func_127();
	}
	if (Global_26D039.f_25)
	{
		func_121(0x00000000);
	}
	Global_26D039.f_25 = 0x00000000;
	Global_26D039.f_3 = 0x00000000;
}

void func_121(int iParam0)
{
	if (func_126())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_125())
		{
			func_123(0x00000001, 0x00000001);
		}
		else
		{
			func_123(0x00000000, 0x00000000);
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
	if (!func_122())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_122()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_123(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_124(0x00000000))
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

int func_124(int iParam0)
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

bool func_125()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_126()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_127()
{
	Global_26D039.f_1 = 0x00000000;
	Global_26D039 = 0x00000000;
	Global_26D039.f_2 = 0x00000000;
	Global_26D039.f_21 = 0xFFFFFFFF;
	Global_26D039.f_22 = 0xFFFFFFFF;
	StringCopy(&(Global_26D039.f_4), "", 64);
	StringCopy(&(Global_26D039.f_27[0x00000000 /*16*/]), "", 64);
	Global_26D039.f_26 = 0x00000000;
	Global_26D039.f_38 = 0x00000000;
	Global_26D039.f_39 = 0x00000000;
	Global_26D039.f_3A = 0xFFFFFFFE;
	Global_26D039.f_3 = 0x00000000;
	func_119(&(Global_26D039.f_14));
}

bool func_128(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 0x0000000D);
}

void func_129(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &Var0, 0x0000000F))
	{
		Global_26D039.f_21 = Var0.f_1;
		Global_26D039.f_22 = Var0;
	}
}

void func_130(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &Var0, 0x00000015))
	{
		if (Global_26D039.f_3 == 0x00000000)
		{
			if (!func_131(&(Var0.f_8)))
			{
				unk_0x646D6CB2DC3F00EE(0x00000000, 0x00000002);
			}
			else
			{
				Global_26D039.f_3 = 0x00000001;
				MemCopy(&(Global_26D039.f_4), {Var0}, 0x00000010);
				Global_26D039.f_14 = { Var0.f_8 };
				StringCopy(&(Global_26D039.f_27[0x00000000 /*16*/]), "", 64);
				Global_26D039.f_3A = 0xFFFFFFFE;
				Global_26D039.f_38 = 0x00000000;
				Global_26D039.f_39 = 0x00000000;
			}
		}
		else if (!func_131(&(Var0.f_8)))
		{
			unk_0x646D6CB2DC3F00EE(0x00000000, 0x00000002);
		}
		else
		{
			Global_26D039.f_3 = 0x00000001;
			MemCopy(&(Global_26D039.f_4), {Var0}, 0x00000010);
			Global_26D039.f_14 = { Var0.f_8 };
			StringCopy(&(Global_26D039.f_27[0x00000000 /*16*/]), "", 64);
			Global_26D039.f_3A = 0xFFFFFFFE;
			Global_26D039.f_38 = 0x00000000;
			Global_26D039.f_39 = 0x00000000;
		}
	}
}

int func_131(var uParam0)
{
	if (Global_12B4E)
	{
		if (func_48() == 0x00000000)
		{
			return 0x00000000;
		}
		if (func_135(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
			{
				if (unk_0xFC0E4F7E386C43F8(unk_0x16F2683693E537C9()) >= 1f)
				{
					return 0x00000000;
				}
			}
		}
	}
	if (unk_0xE6725CC0C55B6CA1() == 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_26D039.f_1)
	{
	}
	if (Global_4CD8 == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_180620)
	{
		return 0x00000000;
	}
	if (Global_26D039.f_24)
	{
		return 0x00000000;
	}
	if (func_122())
	{
		return 0x00000000;
	}
	if (((Global_A1D7 != 0x00000006 && Global_A1D7 != 0x00000008) && Global_A1D7 != 0x0000000C) && Global_A1D7 != 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_134() && !func_133(0x0000000C))
	{
		return 0x00000000;
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		return 0x00000000;
	}
	if (unk_0x39B7A3CCD2467CAB())
	{
		return 0x00000000;
	}
	if (!func_132(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (Global_12C52)
	{
		return 0x00000000;
	}
	if (unk_0x3BE9D9F3DC14F695())
	{
		if (!unk_0x5B99ACBBF316951B(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000000;
	}
	if (unk_0x74684D5E87B13DBD(uParam0) || unk_0x5EB60FF82531F781(uParam0))
	{
		return 0x00000000;
	}
	if (unk_0x42912347AD653D4C(uParam0) || unk_0xD8CF175826CCB178(uParam0))
	{
		return 0x00000000;
	}
	if (unk_0x3C638171E81B9AA1())
	{
		if (unk_0xDC30EF462887322E())
		{
			if (unk_0x71467D5C7AFB49C6())
			{
				return 0x00000000;
			}
		}
		else if (unk_0x33A494591F2C1975())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_132(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0xEB6436A75F06F09F() == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0xFFFFFFFF;
	if (iParam0 != unk_0xD803B885F5E47A62())
	{
		iVar0 = iParam0;
		if (iVar0 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
	}
	if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		if (unk_0xB5E18209CA3E7DE6(0x00000000, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			if (unk_0xFB7A8F661F94A3AE(0x00000000, 0xFFFFFFFD, 0x00000001) || unk_0xB5E18209CA3E7DE6(0x00000001, 0xFFFFFFFF))
			{
				return 0x00000001;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (unk_0xB5E18209CA3E7DE6(0x00000000, 0xFFFFFFFF) || (unk_0xB5E18209CA3E7DE6(0x00000001, 0xFFFFFFFF) && unk_0x04A104F429E6CBB0(&Var1)))
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB5E18209CA3E7DE6(0x00000000, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_133(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_134()
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_135(int iParam0, bool bParam1, bool bParam2)
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

void func_136()
{
	func_127();
}

void func_137()
{
	Global_26D039.f_1 = 0x00000001;
	Global_26D039.f_21 = 0xFFFFFFFF;
	Global_26D039.f_22 = 0xFFFFFFFF;
	if (unk_0x83D8570832F172A7(Global_4C0B) == 0x00000001)
	{
		if (Global_4C12)
		{
			func_138(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			if (Global_4BE5)
			{
				func_138(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
		else
		{
			func_138(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
	}
}

void func_138(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_139(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_139(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_139(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_139(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_139(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_139(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_140()
{
	int iVar0;
	
	if (iLocal_64)
	{
		Global_D203 = 0x00000000;
		Global_D203.f_C = 0x00000000;
		Global_D203.f_18 = 0x00000000;
		Global_D203.f_24 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			Global_D203.f_1[iVar0] = 0x00000000;
			Global_D203.f_D[iVar0] = 0x00000000;
			Global_D203.f_19[iVar0] = 0x00000000;
			Global_D203.f_25[iVar0] = 0x00000000;
			iVar0++;
		}
		iLocal_64 = 0x00000000;
	}
}

