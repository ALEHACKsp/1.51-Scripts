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
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[4] = { 0, 0, 0, 0 };
	var uLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	vector3 vLocal_98 = { 0f, 0f, 0f };
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<22> Local_107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_108[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<21> Local_109 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
		if (!func_907(ScriptParam_109))
		{
			func_859();
		}
	}
	while (0x00000001)
	{
		func_858();
		if (func_851())
		{
			func_859();
		}
		if (func_847(0x00000001))
		{
			func_859();
		}
		switch (func_846(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_845() == 0x00000001)
				{
					func_844(0x00000001);
					func_828();
				}
				break;
			
			case 0x00000001:
				if (func_845() == 0x00000001)
				{
					func_32();
				}
				else if (func_845() == 0x00000003)
				{
					func_844(0x00000003);
				}
				break;
			
			case 0x00000003:
				func_859();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			if (func_845() != 0x00000003 && func_31())
			{
				func_30(0x00000003);
			}
			switch (func_845())
			{
				case 0x00000000:
					if (func_23())
					{
						func_30(0x00000001);
					}
					break;
				
				case 0x00000001:
					if (func_1())
					{
						func_30(0x00000003);
					}
					break;
				
				case 0x00000003:
					func_859();
					break;
				}
		}
	}
}

int func_1()
{
	var uVar0;
	bool bVar1;
	
	func_22();
	switch (Local_107.f_1)
	{
		case 0x00000000:
			if (!func_21(&(Local_107.f_A)))
			{
				func_20(&(Local_107.f_A), 0x00000000, 0x00000000);
			}
			else if (func_19(&(Local_107.f_A), Global_40001.f_30C9, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000004);
				func_18(0x00000002);
			}
			if (!func_17(Local_107.f_7))
			{
				if (func_13((Global_40001.f_30CE - 0x00000001), &uVar0, 0x42F00000, 0x00000000))
				{
					func_18(0x00000001);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000001))
			{
				func_18(0x00000002);
			}
			if (func_12(Local_107.f_5) || func_10(Local_107.f_5, 0x00000001, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000002);
				func_18(0x00000002);
			}
			break;
		
		case 0x00000001:
			if (!func_21(&(Local_107.f_C)))
			{
				func_20(&(Local_107.f_C), 0x00000000, 0x00000000);
			}
			else
			{
				if (!func_21(&(Local_107.f_10)))
				{
					if (!func_13(Global_40001.f_30CE, &uVar0, 0x42F00000, 0x00000000))
					{
						func_9(&(Local_107.f_10), 0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000006);
					}
				}
				else if (!func_13(Global_40001.f_30CE, &uVar0, 0x42F00000, 0x00000000))
				{
					if (func_19(&(Local_107.f_10), 0x00004E20, 0x00000000))
					{
						unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000002);
					}
				}
				else
				{
					func_8(&(Local_107.f_10));
					func_9(&(Local_107.f_12), 0x00000000, 0x00000000);
					unk_0x0674E58A79778E99(&(Local_107.f_2), 0x00000006);
				}
				if (func_21(&(Local_107.f_12)))
				{
					if (func_19(&(Local_107.f_12), 0x00001388, 0x00000000))
					{
						func_8(&(Local_107.f_12));
					}
				}
				bVar1 = func_7();
				if (func_19(&(Local_107.f_C), Global_40001.f_30CA, 0x00000000) || bVar1)
				{
					func_18(0x00000002);
					if (!bVar1)
					{
						unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000000);
					}
					else
					{
						func_2();
					}
				}
			}
			if (func_12(Local_107.f_5) || func_10(Local_107.f_5, 0x00000001, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000002);
				func_18(0x00000002);
			}
			break;
		
		case 0x00000002:
			if (!func_21(&(Local_107.f_E)))
			{
				func_20(&(Local_107.f_E), 0x00000000, 0x00000000);
			}
			else if (func_19(&(Local_107.f_E), 0x00003A98, 0x00000000))
			{
				func_18(0x00000003);
			}
			break;
		
		case 0x00000003:
			return 0x00000001;
	}
	return 0x00000000;
}

void func_2()
{
	struct<14> Var0;
	struct<14> Var1;
	struct<14> Var2;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000005))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000003))
		{
			Var0 = 0x75BF07BC;
			Var0.f_1 = unk_0xD803B885F5E47A62();
			Var0.f_2 = 0x2E0AAB75;
			Var0.f_A = func_6();
			func_3(Var0, func_4());
			unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000005);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000000))
		{
			Var1 = 0x75BF07BC;
			Var1.f_1 = unk_0xD803B885F5E47A62();
			Var1.f_2 = 0x87712DBA;
			func_3(Var1, func_4());
			unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000005);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000002) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000001))
		{
			Var2 = 0x75BF07BC;
			Var2.f_1 = unk_0xD803B885F5E47A62();
			Var2.f_2 = 0x9D7C547C;
			func_3(Var2, func_4());
			unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000005);
		}
	}
}

void func_3(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0x75BF07BC;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Param0, 0x0000000E, iParam13);
	}
}

int func_4()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_5(iVar2, 0x00000000, 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[iVar1 /*3*/].f_2, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&uVar0, iVar2);
			}
		}
		iVar1++;
	}
	return uVar0;
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
	return Local_107.f_6;
}

int func_7()
{
	if ((((unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000002)) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000003)) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000004))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_8(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

void func_9(var uParam0, bool bParam1, bool bParam2)
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

int func_10(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_11())
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

int func_11()
{
	return 0xFFFFFFFF;
}

bool func_12(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0x00000000;
}

int func_13(int iParam0, var uParam1, float fParam2, bool bParam3)
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0x9539D44F3E4492F6(func_16());
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 0x00000000;
	}
	*uParam1 = func_15(iVar0, Local_107.f_7, 0x00000000);
	if (*uParam1 > IntToFloat(iParam0))
	{
		return 0x00000000;
	}
	fVar1 = unk_0xEE9925602B29903C(iVar0);
	*uParam1 = func_14(*uParam1, fVar1);
	if (fVar1 > fParam2 && !bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_14(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_15(int iParam0, vector3 vParam1, bool bParam2)
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

int func_16()
{
	return Local_107.f_5;
}

int func_17(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_18(int iParam0)
{
	Local_107.f_1 = iParam0;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_20(uParam0, bParam2, 0x00000000);
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

void func_20(var uParam0, bool bParam1, bool bParam2)
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

bool func_21(var uParam0)
{
	return uParam0->f_1;
}

void func_22()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000001))
	{
		if (!unk_0x40B8C182D63932FC(func_16()))
		{
			unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000001);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000001) && !unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000002))
	{
		iVar0 = unk_0x7B9C1F53FE442D06(func_16());
		if (iVar0 >= 0x00000000 && iVar0 < 0x00000020)
		{
			if (unk_0xEAE0D21A50E6C7F4(vLocal_108[iVar0 /*3*/].f_2, 0x0000000B))
			{
				unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000002);
				if (Local_107.f_1 == 0x00000000)
				{
					func_18(0x00000003);
				}
			}
		}
	}
}

int func_23()
{
	vector3 vVar0[4];
	var uVar1[4];
	float fVar2;
	int iVar3;
	int iVar4;
	
	Local_107.f_5 = func_29();
	Local_107.f_6 = func_11();
	unk_0xCB466C2A425A9168(&(Local_107.f_14), &(Local_107.f_15));
	vVar0[0x00000000 /*3*/] = { -1976.481f, -638.13f, 4.6219f };
	vVar0[0x00000001 /*3*/] = { 2306.744f, -400.686f, 86.3213f };
	vVar0[0x00000002 /*3*/] = { 3505.623f, 3787.041f, 28.9708f };
	vVar0[0x00000003 /*3*/] = { -1976.225f, 4546.3f, 56.0401f };
	iVar3 = 0x00000000;
	while (iVar3 <= 0x00000003)
	{
		uVar1[iVar3] = func_15(unk_0x16F2683693E537C9(), vVar0[iVar3 /*3*/], 0x00000001);
		iVar3++;
	}
	fVar2 = uVar1[0x00000000];
	iVar4 = 0x00000001;
	iVar3 = 0x00000000;
	while (iVar3 <= 0x00000003)
	{
		if (uVar1[iVar3] < fVar2)
		{
			fVar2 = uVar1[iVar3];
			iVar4 = iVar3 + 1;
		}
		iVar3++;
	}
	Local_107.f_3 = iVar4;
	Local_107.f_7 = { func_24(Local_107.f_3) };
	return 0x00000001;
}

Vector3 func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xDD0E7998AE8AD485();
	switch (iParam0)
	{
		case 0x00000001:
			iVar1 = 0x00000006;
			iVar4 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000002:
			iVar1 = 0x00000006;
			iVar4 = 0x00000008;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000003:
			iVar1 = 0x00000005;
			iVar4 = 0x00000010;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000004:
			iVar1 = 0x00000004;
			iVar4 = 0x00000018;
			iVar5 = 0x00000005;
			break;
	}
	unk_0x3E6F97B7F1FE6EA8(iVar0);
	iVar2 = unk_0x702241284A8D71E0(0x00000000, iVar1);
	iVar3 = func_28(0x00000B87, 0xFFFFFFFF, 0x00000000);
	if (iVar5 > 0x00000001)
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar3, iVar4))
		{
			iVar6 = iVar4 + 1;
			while (iVar6 <= (iVar4 + 1 + (iVar5 - 0x00000001)))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar3, iVar6))
				{
					if (iVar6 - iVar4 + 1) >= (iVar5 - 0x00000001)
					{
						iVar2 = 0x00000000;
					}
					else
					{
						iVar2 = (iVar6 - iVar4 + 1) + 1;
					}
					iVar6 = (iVar4 + 1 + (iVar5 - 0x00000001));
				}
				iVar6++;
			}
		}
	}
	iVar3 = 0x00000000;
	unk_0x5D96D8530B3D0904(&iVar3, (iVar4 + 1 + iVar2));
	unk_0x5D96D8530B3D0904(&iVar3, iVar4);
	func_25(0x00000B87, iVar3, 0xFFFFFFFF, 0x00000001, 0x00000000);
	Local_107.f_4 = iVar3;
	switch (iParam0)
	{
		case 0x00000001:
			switch (iVar2)
			{
				case 0x00000000:
					return -472.415f, -1689.474f, 17.9477f;
				
				case 0x00000001:
					return -1654.092f, 213.143f, 59.6413f;
				
				case 0x00000002:
					return -1008.389f, -1020.496f, 1.1503f;
				
				case 0x00000003:
					return -604.266f, -142.684f, 38.0086f;
				
				case 0x00000004:
					return -1700.562f, -322.726f, 49.0851f;
				
				case 0x00000005:
					return -1158.28f, -383.876f, 50.7161f;
				
				case 0x00000006:
					return -1191.066f, -1491.259f, 3.3797f;
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (iVar2)
			{
				case 0x00000000:
					return 160.142f, -1761.704f, 28.0984f;
				
				case 0x00000001:
					return 1097.841f, -554.319f, 54.7365f;
				
				case 0x00000002:
					return 191.932f, 124.653f, 96.9401f;
				
				case 0x00000003:
					return 323.693f, -867.527f, 28.1726f;
				
				case 0x00000004:
					return 1386.79f, -1689.002f, 61.0964f;
				
				case 0x00000005:
					return 968.623f, -3067.462f, 4.9008f;
				
				case 0x00000006:
					return 928.85f, -2270.156f, 29.5096f;
				
				default:
			}
			break;
		
		case 0x00000003:
			switch (iVar2)
			{
				case 0x00000000:
					return 1667.876f, 3710.527f, 33.0008f;
				
				case 0x00000001:
					return 2459.918f, 4827.391f, 34.4214f;
				
				case 0x00000002:
					return 1506.714f, 6513.564f, 19.8804f;
				
				case 0x00000003:
					return 2501.049f, 2639.483f, 42.5508f;
				
				case 0x00000004:
					return 2658.239f, 1542.729f, 23.4847f;
				
				case 0x00000005:
					return 1415.427f, 1819.726f, 102.3258f;
				
				default:
			}
			break;
		
		case 0x00000004:
			switch (iVar2)
			{
				case 0x00000000:
					return -194.476f, 6316.824f, 30.5625f;
				
				case 0x00000001:
					return -660.505f, 5677.562f, 30.7898f;
				
				case 0x00000002:
					return -1557.125f, 4561.964f, 18.5454f;
				
				case 0x00000003:
					return -159.803f, 2713.044f, 54.3232f;
				
				case 0x00000004:
					return -3240.385f, 1106.345f, 1.5823f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1407E9;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_26(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_29()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

void func_30(int iParam0)
{
	Local_107 = iParam0;
}

int func_31()
{
	if (Global_26B66F.f_1404.f_28)
	{
		Global_26B66F.f_1404.f_28 = 0x00000000;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_32()
{
	bLocal_96 = func_5(func_16(), 0x00000000, 0x00000001);
	func_824();
	func_760();
	func_759();
	func_752();
	func_732();
	func_727();
	func_706();
	func_684();
	func_674();
	switch (vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0x00000000:
			if (func_673())
			{
				func_666(0x00000000);
			}
			else if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000000))
			{
				func_666(0x00000006);
			}
			break;
		
		case 0x00000001:
			if (func_673())
			{
				func_666(0x00000005);
				func_633(0x00000002);
				if (bLocal_96)
				{
					if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000008))
					{
						func_631();
						unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000008);
					}
				}
				if (!func_630(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					func_629(unk_0xD803B885F5E47A62(), 0x00000000);
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000006))
				{
					func_666(0x00000004);
				}
			}
			else if (bLocal_96)
			{
				if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000000))
				{
					func_666(0x00000003);
					func_633(0x00000001);
				}
				else
				{
					func_633(0x00000000);
					if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000000))
					{
						func_666(0x00000008);
					}
					else
					{
						func_666(0x00000001);
					}
					if (func_628(unk_0x57270EE11514DC67()))
					{
						func_625();
						func_585();
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000007))
			{
				func_562(0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000007);
			}
			func_437(&(Global_14DB79.f_216), &Global_14DB79, 0x0000001C, &(Global_14DB79.f_1), &(Global_14DB79.f_75), 0xFFFFFFFF, 0x00000000, 0x00000000);
			break;
		
		case 0x00000002:
			if (!func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000001))
			{
				if (!func_436(unk_0xD803B885F5E47A62(), 0x00000013))
				{
					func_315();
					return;
				}
			}
			if (func_673())
			{
				if (func_630(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					func_314(unk_0xD803B885F5E47A62(), 0x00000000);
				}
				if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x0000000B))
				{
					func_859();
					return;
				}
			}
			func_86();
			func_315();
			if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000000))
			{
				if (func_673())
				{
					func_633(0x0000000A);
				}
				else if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000000))
				{
					func_633(0x0000000B);
				}
				else
				{
					func_633(0x00000006);
				}
				func_82(Local_107.f_5);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000001))
			{
				if (func_628(unk_0x57270EE11514DC67()))
				{
					if (!func_664(unk_0xD803B885F5E47A62(), Local_107.f_5, 0x00000001))
					{
						func_633(0x00000007);
					}
				}
				func_82(0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000002))
			{
				if (func_673())
				{
					func_633(0x0000000C);
				}
				else if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000000))
				{
					func_633(0x0000000D);
				}
				else if (func_628(unk_0x57270EE11514DC67()))
				{
					func_633(0x0000000E);
				}
				func_82(0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000003))
			{
				if (func_673())
				{
					if (func_81())
					{
						func_633(0x00000009);
					}
					else
					{
						func_633(0x00000008);
					}
				}
				else if (Local_107.f_6 == unk_0xD803B885F5E47A62())
				{
					if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000000))
					{
						func_633(0x0000000F);
					}
					else
					{
						func_633(0x00000003);
					}
				}
				else if (func_628(unk_0x57270EE11514DC67()))
				{
					if (func_81())
					{
						func_633(0x00000011);
					}
					else
					{
						func_633(0x00000004);
					}
				}
				func_82(Local_107.f_6);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000004))
			{
				if (func_673())
				{
					func_633(0x00000010);
				}
				func_82(0x00000000);
			}
			if (func_33(&uLocal_82, 0x00000001, 0x00000000))
			{
				func_844(0x00000003);
			}
			break;
		
		case 0x00000003:
			break;
	}
}

int func_33(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_80(0x0000001D);
	if ((*uParam0 > 0x00000000 && !func_79()) && func_63(unk_0xD803B885F5E47A62()) != 0x00000000)
	{
		if (!func_60())
		{
			func_59();
		}
	}
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_21(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0x00000000, 0x00000000);
			}
			else if (func_19(&(uParam0->f_3), 0x000003E8, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0x00000002);
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0x00000000);
					func_20(&(uParam0->f_5), 0x00000000, 0x00000000);
				}
				func_20(&(uParam0->f_1), 0x00000000, 0x00000000);
				func_58(uParam0, 0x00000001);
			}
			break;
		
		case 0x00000001:
			if (func_21(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 0x00000BB8, 0x00000000))
				{
					bVar0 = 0x00000001;
				}
			}
			else
			{
				bVar0 = 0x00000001;
			}
			if (bVar0)
			{
				func_48(iParam2);
				func_58(uParam0, 0x00000002);
			}
			break;
		
		case 0x00000002:
			func_48(0x00000000);
			if (func_19(&(uParam0->f_1), 0x00003A98, 0x00000000))
			{
				if (func_34(func_35(0x00000000)))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				func_58(uParam0, 0x00000003);
			}
			break;
		
		case 0x00000003:
			if (func_19(&(uParam0->f_1), 0x00005BCC, 0x00000000))
			{
				unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000001);
				unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000002);
				func_58(uParam0, 0x00000004);
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000001);
			unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000002);
			return 0x00000001;
	}
	return 0x00000000;
}

bool func_34(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

char* func_35(int iParam0)
{
	if (((func_46(unk_0xD803B885F5E47A62()) || func_43(unk_0xD803B885F5E47A62())) || func_39()) || iParam0)
	{
		if (func_43(unk_0xD803B885F5E47A62()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_36(func_38()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_36(int iParam0)
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
	return func_37(iParam0, 0x00000000);
	return 0x00000000;
}

int func_37(int iParam0, int iParam1)
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

int func_38()
{
	return Global_192FD0;
}

bool func_39()
{
	return (func_42() && func_40(func_29()));
}

bool func_40(int iParam0)
{
	return func_41(iParam0, 0x00000001);
}

int func_41(int iParam0, int iParam1)
{
	if (iParam0 != func_11())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_11())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_42()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094;
}

bool func_43(int iParam0)
{
	return func_37(func_44(iParam0), 0x00000000);
}

int func_44(int iParam0)
{
	if (func_45(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_45(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_46(int iParam0)
{
	return func_47(func_44(iParam0));
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000B3:
		case 0x000000B4:
		case 0x00000094:
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094 && func_41(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23, 0x00000001))
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

void func_48(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000000))
	{
		if (((((((((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002)) && func_5(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !Global_12061) && !Global_E545) && !unk_0x757EF87A33649210()) && !func_436(unk_0xD803B885F5E47A62(), 0x00000016)) && func_63(unk_0xD803B885F5E47A62()) != 0x00000000) && !func_56(func_57())) && !func_46(unk_0xD803B885F5E47A62())) && !func_55(func_44(unk_0xD803B885F5E47A62()))) && !func_54(func_44(unk_0xD803B885F5E47A62())))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0x00000001);
			func_53(func_35(iParam0), 0xFFFFFFFF);
			func_49(0x00000001);
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000000);
		}
	}
}

void func_49(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_50(0x00000001))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_79())
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Boss_Message_Orange", sVar0, 0x00000000);
	}
}

bool func_50(bool bParam0)
{
	return func_51(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_51(int iParam0, bool bParam1)
{
	return func_52(iParam0, bParam1, 0x00000001);
}

int func_52(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_41(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_11() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_53(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam1);
}

int func_54(int iParam0)
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

int func_55(int iParam0)
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

int func_56(int iParam0)
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

int func_57()
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

void func_58(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_59()
{
	Global_25920E = 0x00000001;
}

int func_60()
{
	if (((((((func_44(unk_0xD803B885F5E47A62()) == 0x000000AA || func_44(unk_0xD803B885F5E47A62()) == 0x000000DB) || func_44(unk_0xD803B885F5E47A62()) == 0x000000DD) || func_44(unk_0xD803B885F5E47A62()) == 0x000000DC) || func_44(unk_0xD803B885F5E47A62()) == 0x000000D8) || func_44(unk_0xD803B885F5E47A62()) == 0x000000D7) || func_44(unk_0xD803B885F5E47A62()) == 0x000000D6) || func_44(unk_0xD803B885F5E47A62()) == 0x000000DA)
	{
		return 0x00000001;
	}
	if (func_61(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_61(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000002;
			}
		}
	}
	return 0x00000000;
}

int func_62(int iParam0)
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

int func_63(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 0x00000002;
	bVar1 = ((func_78(iParam0) && !func_77(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008));
	bVar2 = func_76(iParam0);
	uVar3 = func_75();
	bVar4 = func_68();
	if ((bVar1 && (func_67(iParam0) || func_66(iParam0))) || bVar4)
	{
		iVar0 = 0x00000000;
	}
	else if (uVar3 || ((!bVar2 && !func_65(iParam0)) && !func_64(iParam0)))
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

bool func_64(int iParam0)
{
	return func_436(iParam0, 0x00000013);
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_436(iParam0, 0x00000009);
	}
	return 0x00000000;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000007);
	}
	return 0x00000000;
}

int func_68()
{
	if ((func_436(unk_0xD803B885F5E47A62(), 0x00000015) || func_436(unk_0xD803B885F5E47A62(), 0x00000016)) || func_73())
	{
		return 0x00000001;
	}
	if (func_69())
	{
		func_80(0x00000016);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_69()
{
	if (func_45(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (((func_75() && !func_72()) || func_71(unk_0xD803B885F5E47A62(), 0x00000015)) || func_71(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			return 0x00000001;
		}
		else
		{
			func_70(0x0000001B);
		}
	}
	return 0x00000000;
}

void func_70(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

bool func_71(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

bool func_72()
{
	return Global_1406A2.f_1;
}

bool func_73()
{
	return func_74(0x00000166, 0xFFFFFFFF);
}

int func_74(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_26(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

bool func_75()
{
	return Global_1406A2;
}

bool func_76(int iParam0)
{
	return func_436(iParam0, 0x00000014);
}

bool func_77(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000002);
}

int func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/] != 0xFFFFFFFF;
	}
	return 0x00000000;
}

bool func_79()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 != 0x00000000;
}

void func_80(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_81()
{
	if (Local_107.f_6 == func_11() || Local_107.f_5 == func_11())
	{
		return 0x00000000;
	}
	if (!func_664(Local_107.f_6, Local_107.f_5, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_82(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000006))
	{
		if (iParam0 != func_11())
		{
			func_83(0x00000000, iParam0);
		}
		else
		{
			func_83(0x00000000, func_11());
		}
		unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000006);
	}
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_11())
	{
		if (unk_0x40B8C182D63932FC(iParam1))
		{
			if (iParam1 == unk_0xD803B885F5E47A62())
			{
				iVar0 = 0x00000001;
			}
			else if (func_84(iParam1, unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000001;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_5(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			Global_26B66F.f_1404.f_17F = unk_0xDD0E7998AE8AD485();
		}
	}
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_11() && iParam1 != func_11())
	{
		iVar0 = func_85(iParam0);
		if (iVar0 != func_11())
		{
			return iVar0 == func_85(iParam1);
		}
	}
	return 0x00000000;
}

int func_85(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_11();
}

void func_86()
{
	struct<20> Var0;
	
	Var0.f_2 = 0x3F800000;
	Var0.f_3 = 0x3F800000;
	Var0.f_4 = 0x00000001;
	Var0.f_9 = 0xFFFFFFFF;
	Var0.f_12 = 0xFFFFFFFF;
	Var0.f_13 = 0xFFFFFFFF;
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000005))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000003))
		{
			if (unk_0xD803B885F5E47A62() == func_6())
			{
				if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000000))
				{
					func_87(0x000000A4, 0x00000000, &Var0, 0x00000000);
				}
				else
				{
					func_87(0x000000A4, 0x00000001, &Var0, 0x00000000);
				}
			}
			else
			{
				func_87(0x000000A4, 0x00000000, &Var0, 0x00000000);
			}
			unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000005);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000000))
		{
			if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000001))
			{
				func_87(0x000000A4, 0x00000001, &Var0, 0x00000000);
			}
			else
			{
				func_87(0x000000A4, 0x00000000, &Var0, 0x00000000);
			}
			unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000005);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000002) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000001))
		{
			func_87(0x000000A4, 0x00000000, &Var0, 0x00000000);
			unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000005);
		}
	}
}

void func_87(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_312(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0x00000000)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_311(iParam0, uParam2->f_D, bParam3));
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
		iVar0 = (iVar0 + func_310(iParam0, bParam3));
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
	if (func_308(iParam0))
	{
		if (bParam1)
		{
			if (func_307(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				func_306();
			}
			else
			{
				func_305();
			}
		}
		else
		{
			func_304();
		}
	}
	func_288(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_286(iParam0, uParam2, &iVar0, &iVar5);
	func_261(iParam0, uParam2, &iVar0, &iVar5);
	func_258(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_241(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 0x000000A8)
	{
		Global_26B66F.f_1404.f_17E = iVar4;
	}
	else
	{
		Global_26B66F.f_1404.f_17E = iVar5;
	}
	iVar8 = func_29();
	if (iVar8 != func_11() && iParam0 != 0x00000094)
	{
		if (func_240(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			if (!func_664(unk_0xD803B885F5E47A62(), iVar8, 0x00000001))
			{
				func_194(&iVar0, 0x00000001);
			}
		}
	}
	func_189(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0x00000000)
	{
		Global_198C74.f_A = iVar1;
		func_188();
		func_138(0x00000000, unk_0x16F2683693E537C9(), "", 0xCBCDA251, 0x60F15A9E, iVar1, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
	}
	if (iVar0 > 0x00000000)
	{
		Global_198C74.f_9 = iVar0;
		func_111(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_110(iParam0, iVar0);
		if (func_109(iParam0))
		{
			if (func_108(iParam0) > 0xFFFFFFFF)
			{
				func_107(func_108(iParam0), iVar0);
			}
		}
		Global_2594A0 = iVar0;
		func_9(&Global_258DD8, 0x00000000, 0x00000000);
	}
	if (func_65(unk_0xD803B885F5E47A62()) || func_76(unk_0xD803B885F5E47A62()))
	{
		func_98(iParam0);
	}
	if (func_47(iParam0))
	{
		Global_198C86.f_D = iVar0;
		Global_198C86.f_E = iVar1;
	}
	if (func_55(iParam0))
	{
		Global_198CBC.f_D = iVar0;
		Global_198CBC.f_E = iVar1;
	}
	if (func_97(iParam0))
	{
		Global_198CFB.f_C = iVar0;
		Global_198CFB.f_D = iVar1;
	}
	if (func_96(iParam0))
	{
		Global_198D27.f_C = iVar0;
		Global_198D27.f_D = iVar1;
	}
	if (func_95(iParam0))
	{
		Global_198D5D.f_C = iVar0;
		Global_198D5D.f_D = iVar1;
	}
	if (func_54(iParam0))
	{
		if (func_94(iParam0))
		{
			Global_198DAF.f_C = iVar0;
			Global_198DAF.f_D = iVar1;
		}
		else if (func_90(iParam0))
		{
			Global_198DE5.f_C = iVar0;
			Global_198DE5.f_D = iVar1;
		}
	}
	if (func_89(iParam0))
	{
		Global_198E39.f_C = iVar0;
		Global_198E39.f_D = iVar1;
	}
	if (func_88(iParam0))
	{
		Global_198E84.f_10 = iVar0;
		Global_198E84.f_11 = iVar1;
	}
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000009E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000F3:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_90(int iParam0)
{
	if (((((((((iParam0 == 0x000000FA || iParam0 == 0x000000EE) || iParam0 == 0x000000F2) || iParam0 == 0x000000F4) || iParam0 == 0x000000F8) || iParam0 == 0x000000F1) || iParam0 == 0x000000EF) || iParam0 == 0x000000F0) || iParam0 == 0x000000F9) || (iParam0 == 0x000000ED && func_91(func_92(unk_0xD803B885F5E47A62()))))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_91(int iParam0)
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

int func_92(int iParam0)
{
	if (func_44(iParam0) == 0x000000ED || func_44(iParam0) == 0x000000FA)
	{
		return func_93(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_93(int iParam0)
{
	if (func_45(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_94(int iParam0)
{
	if (iParam0 == 0x000000ED)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E9:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_96(int iParam0)
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

int func_97(int iParam0)
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

void func_98(int iParam0)
{
	if (func_106(unk_0xD803B885F5E47A62()) && func_105())
	{
		if (func_104(iParam0))
		{
			func_101(0x000027A2, 0xFFFFFFFF);
		}
		else if (func_100(iParam0))
		{
			func_101(0x000027A4, 0xFFFFFFFF);
		}
		else if (func_37(iParam0, 0x00000001))
		{
			func_101(0x000027A5, 0xFFFFFFFF);
		}
		else if (func_99(iParam0))
		{
			func_101(0x000027A6, 0xFFFFFFFF);
		}
	}
}

int func_99(int iParam0)
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

int func_100(int iParam0)
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

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_28(iParam0, func_26(iParam1), 0x00000000);
	iVar0++;
	if (!func_103(iParam0))
	{
		func_25(iParam0, iVar0, iParam1, 0x00000001, 0x00000000);
	}
	else
	{
		func_102(iParam0, iVar0, iParam1, 0x00000001);
	}
}

void func_102(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_26(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_26(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_26(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_26(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_26(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_26(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_26(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_26(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_26(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_26(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_26(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_103(int iParam0)
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

int func_104(int iParam0)
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

bool func_105()
{
	return func_40(unk_0xD803B885F5E47A62());
}

bool func_106(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_7B, 0x0000000E);
}

void func_107(int iParam0, int iParam1)
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

int func_108(int iParam0)
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

int func_109(int iParam0)
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

void func_110(int iParam0, int iParam1)
{
	if (func_106(unk_0xD803B885F5E47A62()) && func_105())
	{
		if (func_104(iParam0) && iParam1 > 0x00000000)
		{
			func_25(0x000027A3, (func_28(0x000027A3, 0xFFFFFFFF, 0x00000000) + iParam1), 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_137();
	if (iVar5 != func_11())
	{
		func_136(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_135(0x00000001);
	Var7.f_1 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x000000A8:
			if (!func_134())
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam3);
			}
			break;
		
		case 0x000000BE:
			if (func_105())
			{
				if (!func_134())
				{
					Var7 = { func_133() };
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_132(Var7)), func_131(Var7), iParam4);
				}
			}
			else if (func_134())
			{
				func_119(0xCCFA5F2D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
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
			if (func_117())
			{
				if (!func_134())
				{
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_132(func_116(unk_0xD803B885F5E47A62()))), 0x00000005, iParam4);
				}
			}
			else if (func_134())
			{
				func_119(0xCCFA5F2D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
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
			if (func_117())
			{
				if (!func_134())
				{
					iVar2 = func_112(uParam5->f_10, iParam4);
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
			else if (func_134())
			{
				func_119(0x1B9AFE05, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
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
			if (func_134())
			{
				func_119(0x53E15D9D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
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
			if (func_117())
			{
				if (!func_134())
				{
					unk_0x5D421B9474B610E6(iParam1, uParam5->f_14, iParam4);
				}
			}
			else if (func_134())
			{
				func_119(0xCCFA5F2D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
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
			if (func_134())
			{
				func_119(0xC6B7C57F, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
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
			if (func_134())
			{
				func_119(0x43ADDE78, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
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
			if (func_134())
			{
				func_119(0xDA2AD714, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
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
			if (func_134())
			{
				func_119(0x653BCC2D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
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
				if (func_134())
				{
					func_119(0x6374FB50, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
				}
				else
				{
					unk_0xB0E03FD240577D6C(iParam1, 0x00000000, 0x00000000, 0x00000001, iParam1, 0x00000000, 0x00000000);
				}
			}
			else if (func_134())
			{
				func_119(0x86DA0F67, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xB0E03FD240577D6C(iParam1, 0x00000001, iParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			break;
		
		default:
			if (func_134())
			{
				func_119(0xCCFA5F2D, iParam1, &iVar4, 0x00000000, 0x00000001, 0x00000000);
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

int func_112(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_115(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_113(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_113(int iParam0, int iParam1)
{
	return (func_114(iParam0) * iParam1);
}

int func_114(int iParam0)
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

float func_115(int iParam0, int iParam1)
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

int func_116(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_B7[0x00000005 /*12*/];
}

bool func_117()
{
	return func_118(unk_0xD803B885F5E47A62());
}

int func_118(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_11())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

void func_119(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_134())
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
				func_120(iParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_120(iParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
				func_120(iParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_120(iParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_120(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_134())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_27()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_127(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
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
			func_126(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_121(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_122(iParam0);
	}
}

void func_122(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_134())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_125(iParam0))
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
		func_123(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_123(var uParam0)
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
	func_124(&(uParam0->f_E));
	func_124(&(uParam0->f_E.f_D));
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

void func_124(var uParam0)
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

int func_125(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_126(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_134())
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
				func_128(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_128(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_130(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_129();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_129()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_130(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_131(int iParam0)
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

char* func_132(int iParam0)
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

struct<2> func_133()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_C1;
}

int func_134()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

bool func_135(bool bParam0)
{
	return func_240(unk_0xD803B885F5E47A62(), bParam0);
}

void func_136(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_18D84D[iParam0 /*615*/].f_B.f_8[0x00000000];
	*uParam2 = Global_18D84D[iParam0 /*615*/].f_B.f_8[0x00000001];
}

int func_137()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

int func_138(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_139(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_139(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_149(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 0xDCB673B3 || iParam4 == 0x8DD87E4F)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_145(unk_0x64430C979F516F7A(iVar1, 0x0000796E, 0f, 0f, 0f), iVar0, 0x00000000, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_140(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_140(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_143(iParam0, 0x00000001) };
	if (iParam0 == func_142(unk_0x16F2683693E537C9()))
	{
		func_141(0x00000001);
	}
	func_145(vVar0, iParam1, 0x00000000, sParam2, iParam3);
}

void func_141(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_142(int iParam0)
{
	return iParam0;
}

Vector3 func_143(int iParam0, bool bParam1)
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
	if (iParam0 == func_144(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
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

int func_144(int iParam0)
{
	return iParam0;
}

void func_145(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_148(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_147();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_146();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_146()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0x00000000;
		return 0x00000001;
	}
	Global_2537E2.f_763 = 0x00000000;
	return 0x00000000;
}

var func_147()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 0x00000001;
	return uVar0;
}

float func_148(vector3 vParam0, var uParam1, var uParam2)
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

var func_149(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_150(iParam0, 0x00000000, sParam1, iParam4, iParam5, 0x00000000, iParam6, 0x00000001, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_150(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_187(unk_0xD803B885F5E47A62()) || func_186(unk_0xD803B885F5E47A62()))
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
	else if (func_183() || func_182(unk_0xD803B885F5E47A62()))
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
	if (func_181(sParam2))
	{
	}
	if (func_180())
	{
		if (iParam4 < 0x00000001)
		{
			iParam4 = 0x00000001;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_178(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_177(&iVar1);
		}
		if (iParam1 == 0x00000000)
		{
			switch (iParam0)
			{
				case 0x00000002:
					func_174(0x00000000, &iVar1);
					break;
				
				case 0x00000003:
					func_174(0x00000001, &iVar1);
					break;
				
				case 0x00000001:
					func_170(&iVar1);
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
			func_169(0x0000048C, iVar1, 0xFFFFFFFF);
			if (iParam1 == 0x00000000)
			{
				func_161((func_168(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0x00000000);
				if (iParam8 == 0x00000000)
				{
				}
				if (iParam9 == 0x00000000)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 0xFFFFFFFF)
				{
					func_169(0x0000048D, iVar1, 0xFFFFFFFF);
				}
				func_155(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 0xFFFFFFFF)
			{
				func_151((func_153(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_151((func_153(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_151(int iParam0)
{
	if (func_180())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_152(joaat("mpply_globalxp"), iParam0);
	}
}

void func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_153(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_5(iParam0, 0x00000000, 0x00000001))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_154(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_154(joaat("mpply_globalxp"));
		}
	}
	return 0x00000000;
}

int func_154(int iParam0)
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

void func_155(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_160(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_158(func_159(&Var0));
			if (iVar1 == 0x00000000)
			{
				func_157(&Global_152D8B, iParam0);
				func_156(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 0x00000001)
			{
				func_157(&Global_152D8C, iParam0);
				func_156(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 0x00000002)
			{
				func_157(&Global_152D8D, iParam0);
				func_156(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 0x00000003)
			{
				func_157(&Global_152D8E, iParam0);
				func_156(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 0x00000004)
			{
				func_157(&Global_152D8F, iParam0);
				func_156(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_156(int iParam0, int iParam1)
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

void func_157(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_158(int iParam0)
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

int func_159(var uParam0)
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

struct<13> func_160(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

void func_161(int iParam0, int iParam1, int iParam2)
{
	if (func_180())
	{
		if (iParam0 >= 0x6A8C4212)
		{
			iParam0 = 0x6A8C4212;
		}
		if (Global_40001.f_2583 == 0x00000000 && iParam1 != 0xBFCF576C)
		{
			if (iParam2 == 0x00000000)
			{
				if (iParam0 < Global_152E1C[func_26(0xFFFFFFFF)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 0xE0C5CB02, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_26(0xFFFFFFFF)])
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
		if (func_167(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_165(iParam0, 0x00000001);
		}
		func_102(0x0000027F, iParam0, 0xFFFFFFFF, 0x00000001);
		func_25(0x00000280, func_165(iParam0, 0x00000001), 0xFFFFFFFF, 0x00000001, 0x00000000);
		Global_152E1C[func_26(0xFFFFFFFF)] = iParam0;
		func_162(0xBDDC2B6E, 0x00000007, 0x00000000);
	}
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_164(iParam1, iParam2))
	{
		iVar0 = func_163();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_163()
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

int func_164(int iParam0, var uParam1)
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

int func_165(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_166(iParam0, 0x00000000);
}

int func_166(int iParam0, int iParam1)
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

int func_167(int iParam0)
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

int func_168(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_26(0xFFFFFFFF)];
			}
			else if (func_167(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_26(0xFFFFFFFF)];
	}
	return 0x00000000;
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_28(iParam0, func_26(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_103(iParam0))
	{
		func_25(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_102(iParam0, iVar0, iParam2, 0x00000001);
	}
}

void func_170(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_173(unk_0x08067D4957B73C02(iVar5), iVar1, 0x00000000))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_172(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_171(*iParam0, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 0x00000004)
	{
		iVar2 = 0x00000004;
	}
	if (iVar2 >= 0x00000002)
	{
		iVar7 = SYSTEM::ROUND((func_171(*iParam0, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_171(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_172(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_160(iParam0) };
		Global_26594F = { func_160(iParam1) };
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

int func_173(int iParam0, int iParam1, int iParam2)
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

void func_174(bool bParam0, int iParam1)
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
				if (func_5(iVar4, 0x00000000, 0x00000001))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_172(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_5(iVar4, 0x00000001, 0x00000001))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_175(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_172(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_171(*iParam1, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 0x00000004)
	{
		iVar1 = 0x00000004;
	}
	if (iVar1 >= 0x00000001)
	{
		iVar6 = SYSTEM::ROUND((func_171(*iParam1, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_175(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_176(iParam0), func_176(iParam1));
	return 0f;
}

Vector3 func_176(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_177(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 0x00000003)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_171(*iParam0, 0x00000064) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_178(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_168(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_168(unk_0xD803B885F5E47A62());
		}
	}
	if (func_179(0x00001F40, 0x00000000, 0x00000000) > 0x00000000)
	{
		if (func_179(0x00001F40, 0x00000000, 0x00000000) < (iParam0 + func_168(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_179(0x00001F40, 0x00000000, 0x00000000) - func_168(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_179(int iParam0, bool bParam1, int iParam2)
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

int func_180()
{
	return 0x00000001;
}

int func_181(char* sParam0)
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

int func_182(int iParam0)
{
	return func_95(func_44(iParam0));
}

bool func_183()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_185();
	}
	return func_184(Global_440000.f_2F9AE);
}

int func_184(int iParam0)
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

bool func_185()
{
	return Global_2564C8.f_11;
}

bool func_186(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_187(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

void func_188()
{
	Global_25920D = 0x00000001;
}

void func_189(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0x00000000;
	*uParam2 = 0x00000000;
	if (!func_193(0x00000007))
	{
		return;
	}
	iVar0 = func_192(iParam0);
	iVar1 = func_191(iParam0);
	iVar2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_26B66F.f_1404.f_109, unk_0x2B6E0A53779D29EA()));
	if (func_190(iParam0) != 0xFFFFFFFF)
	{
		if (iVar2 > func_190(iParam0))
		{
			iVar2 = func_190(iParam0);
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

int func_190(int iParam0)
{
	if (func_37(iParam0, 0x00000000) || func_100(iParam0))
	{
		return Global_40001.f_4837;
	}
	if (func_104(iParam0))
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

int func_191(int iParam0)
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
			if (!func_117())
			{
				return Global_40001.f_523D;
			}
			break;
		
		case 0x000000E2:
			if (!func_117())
			{
				return Global_40001.f_5229;
			}
			break;
		
		case 0x000000E3:
			if (!func_117())
			{
				return Global_40001.f_5235;
			}
			break;
		
		case 0x000000E5:
			if (!func_117())
			{
				return Global_40001.f_56C1;
			}
			break;
		
		case 0x000000E6:
			if (!func_117())
			{
				return Global_40001.f_5721;
			}
			break;
		
		case 0x000000E9:
			if (!func_117())
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
			if (!func_117())
			{
				return Global_40001.f_5D88;
			}
			break;
		
		case 0x000000EE:
			if (!func_117())
			{
				return Global_40001.f_5DF7;
			}
			break;
		
		case 0x000000F9:
			if (!func_117())
			{
				return Global_40001.f_5E07;
			}
			break;
		
		case 0x000000F3:
			if (!func_117())
			{
				return Global_40001.f_66C0;
			}
			break;
		
		case 0x0000009E:
			if (!func_117())
			{
				return 0x00000064;
			}
			break;
	}
	return 0x00000000;
}

int func_192(int iParam0)
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
			if (func_50(0x00000000))
			{
				return Global_40001.f_4663;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x000000BF:
			if (func_50(0x00000000))
			{
				return Global_40001.f_46BE;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x000000C0:
			if (func_50(0x00000000))
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
			if (func_50(0x00000000))
			{
				return Global_40001.f_523C;
			}
			break;
		
		case 0x000000E2:
			if (func_50(0x00000000))
			{
				return Global_40001.f_5228;
			}
			break;
		
		case 0x000000E3:
			if (func_50(0x00000000))
			{
				return Global_40001.f_5234;
			}
			break;
		
		case 0x000000E5:
			if (func_50(0x00000000))
			{
				return Global_40001.f_56C0;
			}
			break;
		
		case 0x000000E6:
			if (func_50(0x00000000))
			{
				return Global_40001.f_5720;
			}
			break;
		
		case 0x000000E9:
			if (func_50(0x00000000))
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
			if (func_50(0x00000000))
			{
				return Global_40001.f_5D87;
			}
			break;
		
		case 0x000000EE:
			if (func_50(0x00000000))
			{
				return Global_40001.f_5DF6;
			}
			break;
		
		case 0x000000F9:
			if (func_50(0x00000000))
			{
				return Global_40001.f_5E06;
			}
			break;
		
		case 0x000000F3:
			return Global_40001.f_66BC;
		
		case 0x0000009E:
			if (func_50(0x00000000))
			{
				return 0x000001F4;
			}
			break;
	}
	return 0x00000000;
}

bool func_193(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_2D, iParam0);
}

void func_194(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0x00000000)
	{
		if (!func_117())
		{
			if (func_135(0x00000000))
			{
				if (!func_50(0x00000000))
				{
					if (unk_0x40B8C182D63932FC(func_137()))
					{
						if (func_239() == 0x00000064)
						{
							iVar0 = *iParam0;
							*iParam0 = 0x00000000;
						}
						else
						{
							iVar0 = ((*iParam0 / 0x00000064) * func_239());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_237(&iVar0, 0x00000000);
						if (iParam1 == 0x00000001)
						{
							func_199("GB_BCUT_TICK1", func_137(), iVar0, 0x00000000, 0x00000000, 0x00000001);
						}
						func_198(0x00000014);
						func_195(func_137(), iVar0, 0x00000001);
					}
				}
			}
		}
	}
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_5(iParam0, 0x00000000, 0x00000001))
	{
		Var0 = 0xB2D63074;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_197(iParam0);
		func_196(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, func_130(iParam0));
	}
}

void func_196(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_197(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_199(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x3A820E495A7BA3E5(func_208(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		unk_0xD06AC7C87A34A6AD(func_206(&Var1));
		if (!iParam3 == 0x00000000)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		func_200(0x0000001B, sParam0, 0x00000001, &Var1, iParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_200(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_205() || !unk_0xA14BB9332558B949()) || !func_203(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = func_201(iParam2);
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

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Global_197EBE - 0x00000001))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_202(iVar0);
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

void func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000004;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 0x00000001) /*53*/] };
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

bool func_203(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_204(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_204(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_27();
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

bool func_205()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

var func_206(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_207(&cVar0);
}

var func_207(char[4] cParam0)
{
	return cParam0;
}

int func_208(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_235(iParam0) && !bParam4)
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
	if (((func_235(unk_0xD803B885F5E47A62()) || (func_234() && func_233())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001F)) && !bParam4)
	{
		iVar1 = func_232();
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
								return func_230(iParam1, iParam0, 0x00000000);
							}
							else
							{
								return func_220(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_220(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
			{
				if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
				{
					return func_230(iParam1, iParam0, 0x00000000);
				}
				else
				{
					return func_209(0x00000000, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				return func_209(0x00000000, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
	if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
	{
		if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
		{
			return func_230(iParam1, iParam0, 0x00000000);
		}
		else
		{
			return func_220(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_220(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_209(bool bParam0, int iParam1, bool bParam2)
{
	return func_210(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_210(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 0x00000003;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_219() || (func_218() && func_216())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_215(iParam2, iVar0);
		}
		else
		{
			return func_215(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 0xFFFFFFFF)
		{
			if (func_173(iVar0, iParam2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012))
			{
				if (iVar0 == iParam2)
				{
					return func_214(0x00000001);
				}
				else
				{
					return func_214(0x00000000);
				}
			}
			else if (bParam3)
			{
				return 0x0000001C;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000014))
			{
				return func_211(iVar0, iParam2, 0x00000001, 0x00000004);
			}
			else
			{
				return func_211(iVar0, iParam2, 0x00000000, 0x00000004);
			}
		}
		return 0x0000001C;
	}
	if (iVar0 == iParam2 || iParam2 == 0xFFFFFFFF)
	{
		return func_214(0x00000001);
	}
	return func_214(0x00000000);
}

int func_211(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_213(iParam0, iParam1, iParam3);
	if (func_212(Global_440000.f_2F9AE, 0x00000001))
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

int func_212(int iParam0, bool bParam1)
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

int func_213(int iParam0, int iParam1, int iParam2)
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
			if (!func_173(iParam0, iVar0, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_214(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000076;
	}
	return 0x00000074;
}

int func_215(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_213(iParam1, iParam0, 0x00000004);
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

bool func_216()
{
	if (func_217())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000004);
}

bool func_217()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_218()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

int func_219()
{
	if (func_217() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_220(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_226())
			{
				iVar3 = func_225(iParam0);
				if (!iVar3 == 0xFFFFFFFF)
				{
					return func_223(iVar3);
				}
			}
			if ((func_222(iParam1, iParam0, iVar0, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)) || ((func_173(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000017)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)))
			{
				return func_214(0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A))
			{
				return func_221(0x00000001);
			}
			else
			{
				return func_210(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0x00000000)
		{
			if (iParam0 == iParam1 || (Global_18060A == 0x00000001 && Global_180614 == 0x00000000))
			{
				return func_214(0x00000001);
			}
			else
			{
				return func_210(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 0x0000001C;
		}
	}
	iVar4 = func_225(iParam0);
	if (!iVar4 == 0xFFFFFFFF)
	{
		return func_223(iVar4);
	}
	if (bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_221(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000077;
	}
	return 0x00000074;
}

bool func_222(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_223(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_224(iParam0);
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

var func_224(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_225(int iParam0)
{
	if (!iParam0 == func_11())
	{
		if (func_240(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_85(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

int func_226()
{
	if (((func_229() || func_228()) || func_185()) || func_227())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_227()
{
	return Global_2564C8.f_13;
}

var func_228()
{
	return Global_2564C8.f_10;
}

var func_229()
{
	return Global_2564C8.f_F;
}

int func_230(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_226())
	{
		iVar2 = func_225(iParam1);
		if (!iVar2 == 0xFFFFFFFF)
		{
			return func_223(iVar2);
		}
	}
	if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000011)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 0x00000018))
		{
			return 0x00000012;
		}
	}
	if (iParam0 > 0xFFFFFFFF && iParam1 != func_11())
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
			iVar0 = func_210(iParam1, !bParam2, iParam0, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 0x0000000D))
		{
			iVar0 = func_231(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 0x0000001D))
		{
			iVar0 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A) && !func_173(iParam0, unk_0x08067D4957B73C02(iParam1), 0x00000000))
		{
			iVar0 = func_221(0x00000001);
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_231(int iParam0)
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

var func_232()
{
	return Global_240006.f_2;
}

bool func_233()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000004);
}

bool func_234()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

int func_235(int iParam0)
{
	if (func_203(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_236())
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

bool func_236()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

void func_237(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_238(0x00000001);
	}
	else
	{
		iVar1 = func_238(0x00000000);
	}
	iVar0 = ((*iParam0 / 0x00000064) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_238(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_239()
{
	return Global_40001.f_3065;
}

bool func_240(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_118(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_11();
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
	
	bVar18 = func_50(0x00000001);
	bVar19 = 0x00000000;
	if (iParam0 == 0x000000ED)
	{
		if (func_117())
		{
			iVar17 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar17 = func_137();
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
				iVar2 = func_257(Global_184507[iVar11 /*876*/].f_356, *uParam3);
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
			iVar10 = func_256(*iParam2);
			if (iVar10 > 0x00000000)
			{
				if (iVar17 == unk_0xD803B885F5E47A62())
				{
					func_255("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_198DAF.f_31 = *uParam3;
			if (iVar17 == unk_0xD803B885F5E47A62())
			{
				if (iVar2 > 0x00000000)
				{
					func_254(iVar2);
				}
				if (*uParam3 > 0x00000000)
				{
					func_252(*uParam3);
				}
				iVar6 = func_251(&uVar5);
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
						func_198(0x0000008C);
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
								if (func_250(iVar23))
								{
									func_242(iVar23, 0x00000001, 0x0BD072F5);
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
					func_198(0x00000079);
				}
			}
			else
			{
				*iParam2 = 0x00000000;
			}
		}
	}
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_244(iParam0);
	func_243(iParam0, uVar0, iParam1, iParam2);
}

void func_243(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 0xDC237E54;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_197(iParam0);
	func_196(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_11())
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, func_130(iParam0));
		}
	}
}

int func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_249();
	iVar0 = func_247(iParam0, iVar0);
	iVar1 = Global_18D84D[func_137() /*615*/].f_B.f_1C1;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_3A6B));
	if (iVar0 < func_246())
	{
		iVar0 = func_246();
	}
	if (iVar0 > func_245())
	{
		iVar0 = func_245();
	}
	return iVar0;
}

int func_245()
{
	return Global_40001.f_3A6C;
}

int func_246()
{
	return Global_40001.f_3F03;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_307(iParam0) * func_248());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_248()
{
	return Global_40001.f_3F02;
}

var func_249()
{
	return Global_40001.f_305D;
}

int func_250(int iParam0)
{
	if (unk_0x40B8C182D63932FC(iParam0))
	{
		if (iParam0 != unk_0xD803B885F5E47A62())
		{
			if (func_664(iParam0, unk_0xD803B885F5E47A62(), 0x00000000))
			{
				if (!func_436(iParam0, 0x0000001A))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_251(var uParam0)
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
			if (!func_203(iVar2, 0x00000000) && !func_664(iVar2, unk_0xD803B885F5E47A62(), 0x00000001))
			{
				iVar1++;
			}
			else if (func_203(iVar2, 0x00000000))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_252(int iParam0)
{
	func_253(iParam0, 0x00001C44);
}

void func_253(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0x00000000)
	{
		return;
	}
	iVar0 = func_28(iParam1, 0xFFFFFFFF, 0x00000000);
	func_25(iParam1, (iVar0 + iParam0), 0xFFFFFFFF, 0x00000001, 0x00000000);
}

void func_254(int iParam0)
{
	func_253(iParam0, 0x00001C3F);
}

int func_255(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	unk_0x1E64CE678ED5F61E(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
	func_200(0x00000003, sParam0, 0x00000001, "", iParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	return iVar0;
}

int func_256(int iParam0)
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

int func_257(struct<5> Param0, int iParam1)
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

void func_258(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_50(0x00000001);
	bVar17 = 0x00000000;
	if (iParam0 == 0x000000E5)
	{
	}
	else if (iParam0 == 0x000000E6)
	{
		if (func_117())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_137();
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
			iVar2 = func_113(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_112(uParam1->f_10, *uParam3);
				if (iVar9 > 0x00000000)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_260(*iParam2) > 0x00000000)
			{
				if (iVar15 == unk_0xD803B885F5E47A62())
				{
					func_255("SMTICK_RONCUT", func_260(*iParam2));
				}
				*iParam2 = (*iParam2 - func_260(*iParam2));
			}
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_259(iVar2, iVar9);
				iVar6 = func_251(&uVar5);
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
						func_198(0x0000002C);
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
								if (func_250(iVar20))
								{
									func_242(iVar20, 0x00000001, 0x452A8913);
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
					func_198(0x00000079);
				}
			}
			else
			{
				*iParam2 = 0x00000000;
			}
		}
	}
}

void func_259(int iParam0, int iParam1)
{
	if (iParam0 > 0x00000000)
	{
		func_253(iParam0, 0x000017E4);
	}
	if (iParam1 > 0x00000000)
	{
		func_253(iParam1, 0x000017E5);
	}
}

int func_260(int iParam0)
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

void func_261(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_50(0x00000001);
	if (iParam0 == 0x000000E1)
	{
	}
	else if (iParam0 == 0x000000E2)
	{
		if (func_117())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_137();
		}
		if (iVar15 != 0xFFFFFFFF)
		{
			iVar16 = func_116(iVar15);
			iVar0 = (func_285(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_281(iVar15, iVar16, iVar1);
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
				func_275(iVar16, iVar2);
				if (func_271(iVar16) >= Global_40001.f_5067 || iVar2 >= Global_40001.f_5067)
				{
					func_262(0x00000005);
				}
				iVar6 = func_251(&uVar5);
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
						func_198(0x0000006C);
					}
					else
					{
						func_198(0x0000006E);
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
								if (func_250(iVar20))
								{
									func_242(iVar20, 0x00000001, 0x8E720CF6);
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
					func_198(0x00000070);
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

void func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_40001.f_505B)
			{
				if (func_264(Global_40001.f_505C))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000001:
			if (Global_40001.f_505D)
			{
				if (func_264(Global_40001.f_505E))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000002:
			if (Global_40001.f_505F)
			{
				if (func_264(Global_40001.f_5060))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000003:
			if (Global_40001.f_5061)
			{
				if (func_264(Global_40001.f_5062))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000004:
			if (Global_40001.f_5063)
			{
				if (func_264(Global_40001.f_5064))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000005:
			if (Global_40001.f_5065)
			{
				if (func_264(Global_40001.f_5066))
				{
					func_255("CLOTHAWDSTRAP3", Global_40001.f_5067);
				}
			}
			break;
		
		case 0x00000006:
			if (Global_40001.f_5068)
			{
				if (func_264(Global_40001.f_5069))
				{
					func_255("CLOTHAWDSTRAP5", Global_40001.f_50ED);
				}
			}
			break;
		
		case 0x00000007:
			if (Global_40001.f_506B)
			{
				if (func_264(Global_40001.f_506C))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000008:
			if (Global_40001.f_506D)
			{
				if (func_264(Global_40001.f_506E))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000009:
			if (Global_40001.f_506F)
			{
				if (func_264(Global_40001.f_5070))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x0000000A:
			if (Global_40001.f_5071)
			{
				if (func_264(Global_40001.f_5072))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x0000000B:
			if (Global_40001.f_5073)
			{
				if (func_264(Global_40001.f_5074))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x0000000C:
			if (Global_40001.f_5075)
			{
				if (func_264(Global_40001.f_5076))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x0000000D:
			if (Global_40001.f_5077)
			{
				if (func_264(Global_40001.f_5078))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x0000000E:
			if (Global_40001.f_5079)
			{
				if (func_264(Global_40001.f_507A))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
	}
}

int func_263(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
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
		Global_265942 = { func_160(unk_0xD803B885F5E47A62()) };
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
	func_200(0x00000008, sParam0, 0x00000001, sParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	return iVar0;
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 0x214E789B:
		case 0x67B8E796:
		case 0xB8FB5DD8:
		case 0x9890C781:
			if (!func_268(0x00003C39, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C39, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x7DB23159:
		case 0xF8CB09BC:
		case 0xAC1E4402:
		case 0x866B2336:
			if (!func_268(0x00003C3A, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C3A, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x712C9344:
		case 0xAEFC4B44:
		case 0xF798903C:
		case 0x91B16E07:
			if (!func_268(0x00003C41, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C41, 0x00000001, 0xFFFFFFFF, 0x00000001);
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
			if (!func_268(0x00003C2D, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C2D, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x78A65796:
		case 0x722AA7B7:
		case 0xDDF245CD:
		case 0x51EEC028:
			if (!func_268(0x00003C21, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C21, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x6693B371:
		case 0x5FD90314:
		case 0x33B27150:
		case 0xD8A4CD92:
			if (!func_268(0x00003C31, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C31, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x0D3980BE:
		case 0x948F6C80:
		case 0xC4161215:
		case 0xE69B697F:
			if (!func_268(0x00003C24, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C24, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x82ED6C24:
		case 0xB8A7B4B0:
		case 0xB1A3ED2D:
		case 0xBC7F1547:
			if (!func_268(0x00003C34, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C34, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xBA195A7B:
		case 0xA676104D:
		case 0x422A8E38:
		case 0xCAF8B23A:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x8FC105CB:
		case 0xDD277DAF:
		case 0x9877BAD5:
		case 0xF51D8687:
			if (!func_268(0x00003C2B, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C2B, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x56631310:
		case 0xCAE8D932:
		case 0xA6C5D771:
		case 0x02E7221A:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xCC24FE92:
		case 0xDD5C7E1D:
		case 0x6CEAE3B8:
		case 0xD971CF28:
			if (!func_268(0x00003C1D, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C1D, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xDFA825A0:
		case 0xCC1DDBA0:
		case 0x19133C0A:
		case 0xE7A86B95:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x2EF466EB:
		case 0x43850602:
		case 0x4F502883:
		case 0x6659E8FE:
			if (!func_268(0x00003C26, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C26, 0x00000001, 0xFFFFFFFF, 0x00000001);
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
			if (!func_268(0x00003C28, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C28, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xBA69E400:
		case 0xED519D4F:
		case 0xF3E5ED2A:
		case 0xA49B6351:
		case 0x7B17577A:
		case 0xE8BFD5FA:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x827EF42B:
		case 0xD65DEF68:
		case 0x36B172C0:
		case 0x37FC8A15:
		case 0xFCA35A90:
		case 0xAE67E14B:
			if (!func_268(0x00003C30, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C30, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x90D790DC:
		case 0xC00CC2C6:
		case 0x28AAD6B3:
		case 0x46BFA79B:
		case 0xEE8DBE65:
		case 0x84B18DDF:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x67113D50:
		case 0x7E073EA0:
		case 0x1CACBEB7:
		case 0x5DE855EC:
		case 0xD95293EF:
		case 0xDB83BB82:
			if (!func_268(0x00003C33, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C33, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x7542D9B3:
		case 0x68581342:
		case 0x06D59309:
		case 0x6A486EAC:
		case 0xCAFFF74A:
		case 0x2FC36400:
			if (!func_268(0x00003C25, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C25, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x4715FD3E:
		case 0x4F516135:
		case 0x7120E79E:
		case 0x7AC70F99:
		case 0x33AEC8A6:
		case 0xF74172FD:
			if (!func_268(0x00003C35, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C35, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x561D9B69:
		case 0x4BDB5A49:
		case 0x5F744445:
		case 0x88EDABE6:
		case 0x25652C13:
		case 0xCD771F69:
			if (!func_268(0x00003C1F, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C1F, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x1A7A2407:
		case 0xA2CC882A:
		case 0x73346B89:
		case 0x9F9B5941:
		case 0x12640611:
		case 0x6447CD08:
			if (!func_268(0x00003C1C, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C1C, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x2A04C31C:
		case 0xD5146CB9:
		case 0x60EB46F7:
		case 0xAD08741B:
		case 0x021D6584:
		case 0x78FEF676:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xBCF65F78:
		case 0xCD549C15:
		case 0x373A93C8:
		case 0x92BF1970:
		case 0x5BC14F3C:
		case 0x521A75B2:
			if (!func_268(0x00003C29, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C29, 0x00000001, 0xFFFFFFFF, 0x00000001);
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
			if (!func_268(0x00003C22, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C22, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xE01EC0C2:
		case 0xBA58F5A7:
		case 0xAE83438C:
		case 0xC4093B7A:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xE1396132:
		case 0x2D1CF8F0:
		case 0x053670F1:
		case 0xAA3E07E4:
			if (!func_268(0x00003C2E, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C2E, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x1CEA92F7:
		case 0xD47C8234:
		case 0x9B779D75:
		case 0xBEC6B109:
			if (!func_268(0x00003C23, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C23, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x6622BA7D:
		case 0xC627FA8A:
		case 0x76BED404:
		case 0xAF9C12B4:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xA7265B3B:
		case 0x3A268121:
		case 0x8CB0FFE8:
		case 0x6A778868:
			if (!func_268(0x00003C32, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C32, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x988C4EDA:
		case 0x6036DE30:
		case 0xC25DEB41:
		case 0x9140D5FA:
			if (!func_268(0x00003C2F, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C2F, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x731D5C14:
		case 0xD4B99F4F:
		case 0x682636D3:
		case 0x49C4C703:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x8CDDDB30:
		case 0x9338E7E6:
		case 0x0E1702BA:
		case 0x7676A066:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x991A4273:
		case 0x18E3C204:
		case 0x23452D16:
		case 0x362E1FD6:
			if (!func_268(0x00003C36, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C36, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xAD9246DE:
		case 0x2BC24344:
		case 0xEAAEE50E:
		case 0xC3159D14:
			if (!func_268(0x00003C37, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C37, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x1AFCDAB0:
		case 0x96AFD210:
		case 0x1C9748E2:
		case 0x9D5D51A4:
			if (!func_268(0x00003C27, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C27, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x961854B2:
		case 0x228B6D9A:
		case 0x0E7AACA9:
		case 0xAE98F41B:
			if (!func_268(0x00003C2C, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C2C, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x8980A731:
		case 0xDB0F4A4D:
		case 0xB74C7E4A:
		case 0xE8DC68A1:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x30ADF951:
		case 0x54E741C7:
		case 0xA20153B4:
		case 0x7C680FBA:
			if (!func_268(0x00003C20, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C20, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x2C5F58EE:
		case 0xAC40D8AF:
		case 0xDADF456F:
		case 0x3A840BF3:
			if (!func_268(0x00003C1E, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C1E, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x36B41A07:
		case 0x72FB128C:
		case 0xC5851ABB:
		case 0x4BC8AE7C:
			if (!func_268(0x00003C2A, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C2A, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xEE8A5C0D:
		case 0xFDF0FADA:
		case 0x8E372C24:
		case 0x95994218:
			if (!func_268(0x00003C38, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C38, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xA6DD8213:
		case 0x7129170F:
		case 0x78F2019A:
		case 0xA556E193:
			if (!func_74(0x000000D1, 0xFFFFFFFF))
			{
				func_265(0x000000D1, 0x00000001, 0xFFFFFFFF, 0x00000001);
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
			if (!func_268(0x00003C42, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C42, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xCF614D59:
		case 0xC0742F6F:
		case 0x4C642637:
		case 0xA57575B8:
			if (!func_268(0x00003C3E, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C3E, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xB164AC55:
		case 0xAE890CA5:
		case 0x1AA842C0:
		case 0x770218D2:
			if (!func_268(0x00003C3F, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C3F, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x123EDE58:
		case 0x73EBA1B4:
		case 0x10A02EB4:
		case 0x89E0BE8F:
			if (!func_268(0x00003C3D, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C3D, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x6CF69C83:
		case 0x9E4A6D8D:
		case 0xDE774A5F:
		case 0xCB9741FB:
			if (!func_268(0x00003C43, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C43, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0xC9345EC4:
		case 0x4C726542:
		case 0x2D07E783:
		case 0x4C0FC2E2:
			if (!func_268(0x00003C3B, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C3B, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x757CC6E1:
		case 0xCB4AF284:
		case 0xFAE00334:
		case 0x5DC36649:
			if (!func_268(0x00003C3C, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				func_267(0x00003C3C, 0x00000001, 0xFFFFFFFF, 0x00000001);
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_265(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_266())
	{
		iVar0 = Global_276C68[iParam0 /*3*/][func_26(iParam2)];
		if (iVar0 != 0x00000000)
		{
			unk_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

int func_266()
{
	return 0x00000001;
	return 0x00000000;
}

int func_267(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_27();
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

int func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_27();
	}
	iVar1 = func_270(iParam0, iParam1);
	uVar2 = func_269(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_269(int iParam0)
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

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_27();
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

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = func_273(iParam0);
	return func_28(func_272(iVar0), 0xFFFFFFFF, 0x00000000);
}

int func_272(int iParam0)
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

int func_273(int iParam0)
{
	int iVar0;
	
	if (func_274(iParam0))
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

int func_274(int iParam0)
{
	if (iParam0 == 0x00000020 || iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_273(iParam0);
	iVar1 = func_272(iVar0);
	iVar2 = (func_28(iVar1, 0xFFFFFFFF, 0x00000000) + iParam1);
	func_25(iVar1, iVar2, 0xFFFFFFFF, 0x00000001, 0x00000000);
	if (iVar0 == 0x00000005)
	{
		return;
	}
	if (func_278(0x0000248D, 0xFFFFFFFF, 0xFFFFFFFF) < 0x00000003)
	{
		iVar3 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000005)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iVar0 /*12*/] != 0x00000000)
			{
				iVar1 = func_272(iVar0);
				iVar3 = (iVar3 + func_28(iVar1, 0xFFFFFFFF, 0x00000000));
			}
			iVar0++;
		}
		iVar4 = 0x00000001;
		while (iVar4 <= 0x00000003)
		{
			if (iVar3 >= func_277(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_276(0x0000248D, iVar5, 0xFFFFFFFF, 0x00000001);
	}
}

var func_276(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_27();
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

int func_277(int iParam0)
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

int func_278(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_27();
	}
	iVar0 = 0x00000000;
	iVar1 = func_280(iParam0, iParam1);
	iVar2 = func_279(iParam0);
	if (0x00000000 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 0x00000008, iParam2))
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_279(int iParam0)
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

int func_280(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_27();
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

int func_281(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_131(iParam1);
	if (func_274(iParam1))
	{
		switch (iVar1)
		{
			case 0x00000001:
				iVar0 = Global_40001.f_4240;
				if (func_282(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_4245);
				}
				if (func_282(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_424A);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0x00000003:
				iVar0 = Global_40001.f_423F;
				if (func_282(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_4244);
				}
				if (func_282(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_4249);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0x00000004:
				iVar0 = Global_40001.f_423E;
				if (func_282(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_4243);
				}
				if (func_282(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_4248);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0x00000000:
				iVar0 = Global_40001.f_423C;
				if (func_282(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_4241);
				}
				if (func_282(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_4246);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0x00000002:
				iVar0 = Global_40001.f_423D;
				if (func_282(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_4242);
				}
				if (func_282(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_4247);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0x00000005:
				iVar0 = Global_40001.f_5244;
				if (func_282(iParam0, iParam1, 0x00000000))
				{
					iVar0 = (iVar0 + Global_40001.f_5246);
				}
				if (func_282(iParam0, iParam1, 0x00000001))
				{
					iVar0 = (iVar0 + Global_40001.f_5245);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_282(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_284(iParam0, iParam1))
	{
		iVar0 = func_283(iParam0, iParam1);
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_5, iParam2);
	}
	return 0x00000000;
}

int func_283(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_274(iParam1) && iParam0 != func_11())
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

int func_284(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_274(iParam1) && iParam0 != func_11())
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

int func_285(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	if (func_274(iParam1))
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

void func_286(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_105())
			{
				Var0 = { func_133() };
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
				iVar6 = func_281(unk_0xD803B885F5E47A62(), Var0, *uParam3);
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
				iVar10 = func_251(&uVar9);
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
					func_198(0x00000056);
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (func_50(0x00000000))
			{
				Var14 = { func_287(func_137()) };
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
				iVar20 = func_281(func_137(), Var14, *uParam3);
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

struct<2> func_287(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_C1;
}

void func_288(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_118(unk_0xD803B885F5E47A62()))
		{
			if (bParam1)
			{
				func_303();
			}
			func_302();
		}
	}
	else if (iParam0 == 0x000000A8)
	{
		if (bParam1)
		{
			if (func_118(unk_0xD803B885F5E47A62()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_294(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B6));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0x00000000)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_293(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_251(&uVar2);
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
						func_198(0x0000002C);
					}
				}
				func_291(*iParam3);
				func_290();
				Global_26B66F.f_1404.f_17D = *iParam3;
				iVar7 = 0x00000000;
				while (iVar7 < unk_0x54EABC0DD106045B())
				{
					iVar8 = iVar7;
					if (unk_0x81A93C8315C28F58(iVar8))
					{
						iVar9 = unk_0x4B2BFE4A3BC248ED(iVar8);
						if (func_250(iVar9))
						{
							func_242(iVar9, 0x00000001, 0xB2F6B863);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_118(unk_0xD803B885F5E47A62()))
		{
			func_289();
		}
	}
}

void func_289()
{
	int iVar0;
	
	iVar0 = Global_27768F[func_27()];
	iVar0++;
	func_102(0x00000E53, iVar0, 0xFFFFFFFF, 0x00000001);
}

void func_290()
{
	int iVar0;
	
	iVar0 = Global_277695[func_27()];
	iVar0++;
	func_102(0x00000E52, iVar0, 0xFFFFFFFF, 0x00000001);
}

void func_291(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_277698[func_27()];
	iVar0 = (iVar0 + iParam0);
	func_102(0x00000E54, iVar0, 0xFFFFFFFF, 0x00000001);
	if (func_278(0x00001DF2, 0xFFFFFFFF, 0xFFFFFFFF) < 0x00000018)
	{
		iVar1 = 0x00000001;
		while (iVar1 <= 0x00000018)
		{
			if (iVar0 >= func_292(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_276(0x00001DF2, iVar2, 0xFFFFFFFF, 0x00000001);
	}
}

int func_292(int iParam0)
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

var func_293(int iParam0)
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

int func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_301(iParam0))
	{
		iVar2 = 0x00000001;
		while (iVar2 <= 0x00000006)
		{
			iVar3 = iVar2;
			if (func_300(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_299(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_295(iParam0))
		{
			iVar2 = 0x00000000;
			while (iVar2 <= (func_295(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_299(unk_0x09AC81E49EA267F7(0x00000001, 0x00000006)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_295(int iParam0)
{
	int iVar0;
	
	if (func_298(iParam0))
	{
		iVar0 = func_296(func_297(iParam0));
		return func_28(iVar0, 0xFFFFFFFF, 0x00000000);
	}
	return 0x00000000;
}

int func_296(int iParam0)
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

int func_297(int iParam0)
{
	int iVar0;
	
	if (func_298(iParam0))
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

int func_298(int iParam0)
{
	if (iParam0 < 0x00000001 || iParam0 > 0x00000016)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_299(int iParam0)
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

int func_300(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_298(iParam0))
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

int func_301(int iParam0)
{
	int iVar0;
	
	if (func_298(iParam0))
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

void func_302()
{
	int iVar0;
	
	iVar0 = Global_27768C[func_27()];
	iVar0++;
	Global_27768C[func_27()] = iVar0;
	func_102(0x00000E51, iVar0, 0xFFFFFFFF, 0x00000001);
}

void func_303()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_277689[func_27()];
	iVar1 = Global_277692[func_27()];
	iVar0++;
	iVar1++;
	Global_277689[func_27()] = iVar0;
	Global_277692[func_27()] = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_80 = iVar1;
	func_102(0x00000E4F, iVar0, 0xFFFFFFFF, 0x00000001);
	func_102(0x00000E50, iVar1, 0xFFFFFFFF, 0x00000001);
}

void func_304()
{
	if (func_117())
	{
		Global_2567E2.f_C02.f_86 = 0x00000000;
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
	}
}

void func_305()
{
	if (func_117())
	{
		if (Global_2567E2.f_C02.f_86 < 0x0000000A)
		{
			Global_2567E2.f_C02.f_86++;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

void func_306()
{
	if (func_117())
	{
		if (Global_2567E2.f_C02.f_86 > 0x00000000)
		{
			Global_2567E2.f_C02.f_86 = (Global_2567E2.f_C02.f_86 - 0x00000001);
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

int func_307(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_1C;
}

int func_308(int iParam0)
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
			if (func_135(0x00000001) && !func_50(0x00000001))
			{
				if (func_309(func_137()))
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

bool func_309(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000001A);
}

int func_310(int iParam0, bool bParam1)
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

int func_311(int iParam0, bool bParam1, bool bParam2)
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
			if (func_117())
			{
				return Global_40001.f_499B;
			}
			else if (bParam1)
			{
				return Global_40001.f_499C;
			}
			break;
		
		case 0x000000BC:
			if (func_117())
			{
				return Global_40001.f_49EF;
			}
			else if (bParam1)
			{
				return Global_40001.f_49F0;
			}
			break;
		
		case 0x000000E1:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5238;
				}
				else
				{
					return Global_40001.f_5239;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_523A;
			}
			break;
		
		case 0x000000E2:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5224;
				}
				else
				{
					return Global_40001.f_5225;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_5226;
			}
			break;
		
		case 0x000000E3:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5230;
				}
				else
				{
					return Global_40001.f_5231;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_5232;
			}
			break;
		
		case 0x000000E5:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_56BC;
				}
				else
				{
					return Global_40001.f_56BD;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_56BE;
			}
			break;
		
		case 0x000000E6:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_571C;
				}
				else
				{
					return Global_40001.f_571D;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_571E;
			}
			break;
		
		case 0x000000E9:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_58F8;
				}
				else
				{
					return Global_40001.f_58F9;
				}
			}
			else if (func_105())
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
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5D83;
				}
				else
				{
					return Global_40001.f_5D84;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_5D85;
			}
			break;
		
		case 0x000000EE:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5DF2;
				}
				else
				{
					return Global_40001.f_5DF3;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_5DF4;
			}
			break;
		
		case 0x000000F9:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5E02;
				}
				else
				{
					return Global_40001.f_5E03;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_5E04;
			}
			break;
		
		case 0x000000F3:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_66BE;
				}
				else
				{
					return Global_40001.f_66BF;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_66BE;
			}
			break;
		
		case 0x0000009E:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return 0x000005DC;
				}
				else
				{
					return 0x000003E8;
				}
			}
			else if (func_105())
			{
				return 0x000005DC;
			}
			break;
	}
	return 0x00000000;
}

void func_312(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 0x0000009D)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_313(iParam0))
	{
		if (!func_117())
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
	if (func_240(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (func_47(iParam0))
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
	else if (func_47(iParam0))
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
	iVar0 = func_29();
	if (iVar0 != func_11())
	{
		if (func_664(unk_0xD803B885F5E47A62(), iVar0, 0x00000001))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_313(int iParam0)
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

void func_314(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset");
	}
	unk_0x0674E58A79778E99(&iVar0, iParam1);
	unk_0xB7E567188872123E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset", iVar0);
}

void func_315()
{
	if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000007))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000000))
		{
			if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000001))
			{
				func_316(0x00000001, 0x00000007, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
			}
			else
			{
				func_316(0x00000000, 0x00000007, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000001))
		{
			func_316(0x00000000, 0x00000008, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000002))
		{
			func_316(0x00000000, 0x00000002, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000003))
		{
			if (!func_673())
			{
				if (unk_0xD803B885F5E47A62() == func_6())
				{
					if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000000))
					{
						func_316(0x00000000, 0x00000002, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
					}
					else
					{
						func_316(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
					}
				}
				else
				{
					func_316(0x00000000, 0x00000002, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				func_316(0x00000000, 0x00000002, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0x00000004))
		{
			func_316(0x00000000, 0x00000007, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
		}
		else
		{
			func_316(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
		}
		unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000007);
	}
}

void func_316(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_435(unk_0xD803B885F5E47A62());
		Global_198D8B.f_4 = func_434();
		Global_198D8B.f_5 = func_433();
		if (func_66(unk_0xD803B885F5E47A62()) || func_67(unk_0xD803B885F5E47A62()))
		{
			Global_198D8B.f_6 = 0x00000001;
		}
		else
		{
			Global_198D8B.f_6 = 0x00000000;
		}
		Global_198D8B.f_1 = func_427(bParam9);
		Global_198D8B.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198D8B.f_9 = func_426(bParam0);
		Global_198D8B.f_A = iParam1;
		Global_198D8B.f_11 = Global_198D8B.f_2;
		Global_198D8B.f_12 = Global_198D8B.f_2;
		Global_198D8B.f_13 = func_425();
		Global_198D8B.f_15 = (Global_198D8B.f_8 - Global_198D8B.f_7);
		if (func_240(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			Global_198D8B.f_17 = func_426(func_50(0x00000001));
		}
		Global_198D8B.f_18 = func_424(unk_0xD803B885F5E47A62());
		Global_198D8B.f_1C = func_423(unk_0xD803B885F5E47A62());
		if (Global_198D8B.f_18 > 0x00000002)
		{
			Global_198D8B.f_18 = 0x00000002;
		}
		func_421(iVar0);
	}
	else
	{
		iVar0 = func_44(unk_0xD803B885F5E47A62());
	}
	if (func_47(iVar0))
	{
		Global_198C86.f_2 = func_434();
		Global_198C86.f_3 = func_433();
		Global_198C86.f_32 = iParam4;
		Global_198C86.f_33 = iParam5;
		Global_198C86.f_A = unk_0xDD0E7998AE8AD485();
		Global_198C86.f_14 = (Global_198C86.f_A - Global_198C86.f_9);
		Global_198C86.f_C = iParam1;
		Global_198C86.f_13 = func_416(iVar0, bParam0, func_420(bParam3));
		if (bParam0)
		{
			Global_198C86.f_B = 0x00000001;
		}
		else
		{
			Global_198C86.f_B = 0x00000000;
		}
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198C86.f_8 = 0x00000001;
		}
		else
		{
			Global_198C86.f_8 = 0x00000000;
		}
		if (iParam2 != 0x00000000)
		{
			Global_198C86.f_2B = 0x00000000;
			Global_198C86.f_2D = func_415(func_137(), iParam2);
			Global_198C86.f_2F = iParam7;
			Global_198C86.f_2E = iParam6;
			Global_198C86.f_34 = func_414(func_137(), iParam2);
		}
		func_412(iVar0);
	}
	else if (func_55(iVar0))
	{
		Global_198CBC.f_2 = func_434();
		Global_198CBC.f_3 = func_433();
		Global_198CBC.f_A = unk_0xDD0E7998AE8AD485();
		Global_198CBC.f_13 = (Global_198CBC.f_A - Global_198CBC.f_9);
		Global_198CBC.f_C = iParam1;
		if (bParam0)
		{
			Global_198CBC.f_B = 0x00000001;
		}
		else
		{
			Global_198CBC.f_B = 0x00000000;
		}
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198CBC.f_8 = 0x00000001;
		}
		else
		{
			Global_198CBC.f_8 = 0x00000000;
		}
		func_410(iVar0);
	}
	else if (func_97(iVar0))
	{
		Global_198CFB.f_2 = func_434();
		Global_198CFB.f_3 = func_433();
		Global_198CFB.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198CFB.f_12 = (Global_198CFB.f_9 - Global_198CFB.f_8);
		Global_198CFB.f_B = iParam1;
		Global_198CFB.f_7 = func_425();
		Global_198CFB.f_2A = func_408(func_27(), 0x00000005);
		iVar1 = unk_0xD803B885F5E47A62();
		iVar2 = func_116(iVar1);
		Global_198CFB.f_1C = iVar2;
		Global_198CFB.f_1D = func_426((func_407(iVar1) || func_406(iVar1)));
		Global_198CFB.f_1E = func_426(func_405(iVar1));
		Global_198CFB.f_20 = func_426(func_404(iVar1));
		Global_198CFB.f_21 = func_426(func_403(iVar1));
		Global_198CFB.f_22 = func_426(func_402(iVar1));
		Global_198CFB.f_23 = func_426(func_401(0x00000000, iVar1) == 0x00000001);
		Global_198CFB.f_24 = func_426(func_400(iVar1));
		Global_198CFB.f_25 = func_426(func_399(iVar1));
		Global_198CFB.f_26 = func_426(func_398(iVar1));
		Global_198CFB.f_27 = func_426(func_282(iVar1, iVar2, 0x00000000));
		Global_198CFB.f_28 = func_426(func_282(iVar1, iVar2, 0x00000002));
		Global_198CFB.f_29 = func_426(func_282(iVar1, iVar2, 0x00000001));
		if (func_397(iVar1))
		{
			Global_198CFB.f_1F = 0x00000002;
		}
		else if (func_396(iVar1))
		{
			Global_198CFB.f_1F = 0x00000001;
		}
		if (bParam0)
		{
			Global_198CFB.f_A = 0x00000001;
		}
		else
		{
			Global_198CFB.f_A = 0x00000000;
		}
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_6 = 0x00000001;
		}
		else
		{
			Global_198CFB.f_6 = 0x00000000;
		}
		Global_198CFB.f_15 = 0xFFFFFFFE;
		Global_198CFB.f_16 = 0xFFFFFFFE;
		func_394(iVar0);
	}
	else if (func_96(iVar0))
	{
		Global_198D27.f_2 = func_434();
		Global_198D27.f_3 = func_433();
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198D27.f_6 = 0x00000001;
		}
		else
		{
			Global_198D27.f_6 = 0x00000000;
		}
		Global_198D27.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198D27.f_A = func_426(bParam0);
		Global_198D27.f_B = iParam1;
		Global_198D27.f_11 = func_393(func_29());
		Global_198D27.f_12 = (Global_198D27.f_9 - Global_198D27.f_8);
		Global_198D27.f_14 = iParam8;
		Global_198D27.f_15 = 0xFFFFFFFE;
		Global_198D27.f_16 = 0xFFFFFFFE;
		Global_198D27.f_1B = func_392();
		Global_198D27.f_1D = func_28(0x000017DB, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_1E = func_28(0x000017D7, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_1F = func_28(0x000017D8, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_20 = func_28(0x000017DA, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_21 = func_28(0x000017D9, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_22 = func_28(0x000017DC, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_24 = func_426(func_50(0x00000001));
		Global_198D27.f_25 = func_390();
		func_370();
		func_368(iVar0);
	}
	else if (func_95(iVar0))
	{
		Global_198D5D.f_2 = func_434();
		Global_198D5D.f_3 = func_433();
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198D5D.f_6 = 0x00000001;
		}
		else
		{
			Global_198D5D.f_6 = 0x00000000;
		}
		Global_198D5D.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198D5D.f_A = func_426(bParam0);
		Global_198D5D.f_B = iParam1;
		Global_198D5D.f_12 = (Global_198D5D.f_9 - Global_198D5D.f_8);
		Global_198D5D.f_14 = iParam8;
		Global_198D5D.f_17 = Global_C0073;
		Global_198D5D.f_24 = Global_C0073.f_1;
		Global_198D5D.f_18 = func_28(0x0000180D, 0xFFFFFFFF, 0x00000000);
		Global_198D5D.f_19 = func_28(0x00001812, 0xFFFFFFFF, 0x00000000);
		Global_198D5D.f_1A = func_28(0x00001813, 0xFFFFFFFF, 0x00000000);
		Global_198D5D.f_1B = func_426((((func_367() || func_366()) || func_365()) || func_364(unk_0xD803B885F5E47A62())));
		Global_198D5D.f_1C = func_28(0x00001814, 0xFFFFFFFF, 0x00000000);
		Global_198D5D.f_1D = func_426(func_363());
		Global_198D5D.f_23 = 0xFFFFFFFF;
		Global_198D5D.f_26 = 0xFFFFFFFF;
		Global_198D5D.f_27 = Global_198D5D.f_4;
		Global_198D5D.f_28 = Global_198D5D.f_5;
		Global_198D5D.f_29 = func_434();
		Global_198D5D.f_2A = func_426(func_50(0x00000001));
		Global_198D5D.f_2C = Global_198D5D.f_12;
		func_361(iVar0);
	}
	else if (func_90(iVar0))
	{
		if (Global_198DE5.f_2 == 0xFFFFFFFF)
		{
			Global_198DE5.f_2 = func_434();
		}
		if (Global_198DE5.f_3 == 0xFFFFFFFF)
		{
			Global_198DE5.f_3 = func_433();
		}
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198DE5.f_6 = 0x00000001;
		}
		else
		{
			Global_198DE5.f_6 = 0x00000000;
		}
		Global_198DE5.f_1 = func_427(0x00000000);
		Global_198DE5.f_7 = func_425();
		Global_198DE5.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198DE5.f_A = func_426(bParam0);
		Global_198DE5.f_B = iParam1;
		if (func_137() != 0xFFFFFFFF)
		{
			Global_198DE5.f_11 = func_360(func_137());
		}
		Global_198DE5.f_12 = (Global_198DE5.f_9 - Global_198DE5.f_8);
		Global_198DE5.f_13 = Global_26B66F.f_19B3;
		Global_198DE5.f_1C = func_423(unk_0xD803B885F5E47A62());
		Global_198DE5.f_1D = func_426(func_359(unk_0xD803B885F5E47A62()));
		Global_198DE5.f_1E = func_426(func_358(unk_0xD803B885F5E47A62()));
		Global_198DE5.f_1F = func_357(unk_0xD803B885F5E47A62());
		if (func_240(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			Global_198DE5.f_21 = func_426(func_50(0x00000001));
		}
		if (Global_198DE5.f_22 > 0x00000002)
		{
			Global_198DE5.f_22 = 0x00000002;
		}
		func_355(iVar0);
	}
	else if (func_94(iVar0))
	{
		Global_198DAF.f_2 = func_434();
		Global_198DAF.f_3 = func_433();
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198DAF.f_6 = 0x00000001;
		}
		else
		{
			Global_198DAF.f_6 = 0x00000000;
		}
		Global_198DAF.f_1 = func_427(0x00000000);
		Global_198DAF.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198DAF.f_A = func_426(bParam0);
		Global_198DAF.f_B = iParam1;
		Global_198DAF.f_12 = (Global_198DAF.f_9 - Global_198DAF.f_8);
		Global_198DAF.f_1C = func_423(unk_0xD803B885F5E47A62());
		if (Global_198DAF.f_1C)
		{
			Global_198DAF.f_1D = func_354(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_198DAF.f_1D = 0x00000000;
		}
		Global_198DAF.f_1E = func_338(unk_0xD803B885F5E47A62(), 0x00000004, 0xFFFFFFFF);
		Global_198DAF.f_1F = func_357(unk_0xD803B885F5E47A62());
		Global_198DAF.f_20 = func_426(func_337(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_21 = func_426(func_336(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_22 = func_426(func_335(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_23 = func_426(func_334(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_24 = func_333(unk_0xD803B885F5E47A62());
		Global_198DAF.f_25 = func_332(unk_0xD803B885F5E47A62());
		Global_198DAF.f_27 = func_331(unk_0xD803B885F5E47A62());
		if (func_240(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			Global_198DAF.f_29 = func_426(func_50(0x00000001));
		}
		if (Global_198DAF.f_2A > 0x00000002)
		{
			Global_198DAF.f_2A = 0x00000002;
		}
		func_329(iVar0);
	}
	else if (func_89(iVar0))
	{
		Global_198E39.f_2 = func_434();
		Global_198E39.f_3 = func_433();
		Global_198E39.f_4 = func_328(func_137());
		Global_198E39.f_5 = func_327(func_137());
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198E39.f_6 = 0x00000001;
		}
		else
		{
			Global_198E39.f_6 = 0x00000000;
		}
		Global_198E39.f_7 = func_425();
		Global_198E39.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198E39.f_A = func_426(bParam0);
		Global_198E39.f_B = iParam1;
		if (func_29() != 0xFFFFFFFF)
		{
			Global_198E39.f_11 = func_360(func_29());
		}
		Global_198E39.f_12 = (Global_198E39.f_9 - Global_198E39.f_8);
		Global_198E39.f_15 = 0x00000001;
		Global_198E39.f_16 = 0x00000001;
		Global_198E39.f_19 = func_326(unk_0xD803B885F5E47A62());
		Global_198E39.f_1B = func_426(func_325(unk_0xD803B885F5E47A62()));
		Global_198E39.f_1C = func_322(0x00000015, 0xFFFFFFFF);
		Global_198E39.f_1D = func_426(func_321(unk_0xD803B885F5E47A62()));
		func_319(iVar0);
	}
	else if (func_88(iVar0))
	{
		Global_198E84.f_6 = func_328(func_137());
		Global_198E84.f_7 = func_327(func_137());
		if (func_240(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			Global_198E84.f_8 = func_426(func_50(0x00000001));
		}
		Global_198E84.f_A = func_425();
		Global_198E84.f_B = 0x00000001;
		Global_198E84.f_D = (unk_0xDD0E7998AE8AD485() - Global_19FC3D);
		Global_198E84.f_E = iParam1;
		Global_198E84.f_13 = 0x00000001;
		Global_198E84.f_14 = 0x00000001;
		func_317(iVar0);
	}
	else
	{
		Global_198C74.f_6 = unk_0xDD0E7998AE8AD485();
		if (bParam0)
		{
			Global_198C74.f_7 = 0x00000001;
		}
		else
		{
			Global_198C74.f_7 = 0x00000000;
		}
		Global_198C74.f_8 = iParam1;
		if (Global_198C74.f_4 == 0x00000000)
		{
			if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
			{
				Global_198C74.f_4 = 0x00000001;
			}
		}
	}
}

void func_317(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
	}
	unk_0x9CA4259CC8E87599(&Global_198E84);
	func_318();
}

void func_318()
{
	struct<36> Var0;
	
	Global_198E84 = { Var0 };
	Global_198E84.f_17 = 0x00000000;
	Global_198E84.f_16 = 0x00000000;
	Global_198E84.f_15 = 0x00000000;
}

void func_319(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
	}
	unk_0x62CC3DEF90BBBB82(&Global_198E39);
	func_320();
}

void func_320()
{
	struct<31> Var0;
	
	Global_198E39 = { Var0 };
}

int func_321(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_2, 0x00000006);
	}
	return 0x00000000;
}

int func_322(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == 0xFFFFFFFF)
	{
		iVar0 = func_27();
	}
	if (iParam0 == 0x00000007 && !Global_40001.f_4258)
	{
		return 0x00000000;
	}
	if (iParam0 >= 0x000003E8)
	{
		iVar1 = func_324(iParam0);
		if (iVar1 == 0x00000000 && func_28(0x00001511, iParam1, 0x00000000) != 0x00000000)
		{
			return 0x000004D2;
		}
		if (func_323(0xFFFFFFFF) && iVar1 == 0x00000002)
		{
			return 0x000004D4;
		}
		if (func_423(unk_0xD803B885F5E47A62()) && iVar1 == 0x00000001)
		{
			return 0x000004D5;
		}
	}
	if (iParam0 == 0x00000000)
	{
		return Global_152E22[iVar0];
	}
	else if (iParam0 == 0x00000063)
	{
		return Global_277666[iVar0];
	}
	else if (iParam0 >= 0x00000001)
	{
		if (iParam0 >= 0x00000019)
		{
			return 0x00000000;
		}
		return Global_2775D1[(iParam0 - 0x00000001) /*3*/][iVar0];
	}
	return 0x00000000;
}

bool func_323(int iParam0)
{
	if (!Global_40001.f_5C6F)
	{
		return 0x00000000;
	}
	return func_28(0x00001C27, iParam0, 0x00000000) != 0x00000000;
}

int func_324(int iParam0)
{
	iParam0 = (iParam0 - 0x000003E8);
	if (iParam0 >= 0x00000000 && iParam0 <= 0x00000003)
	{
		return iParam0;
	}
	return 0xFFFFFFFF;
}

int func_325(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_171 != 0x00000000;
	}
	return 0x00000000;
}

int func_326(int iParam0)
{
	if (func_44(iParam0) == 0x000000F3)
	{
		return func_93(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_327(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0xFFFFFFFF;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[0x00000001];
}

int func_328(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0xFFFFFFFF;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[0x00000000];
}

void func_329(int iParam0)
{
	unk_0x26ABE31DF89E0806(&Global_198DAF);
	func_330();
}

void func_330()
{
	struct<54> Var0;
	
	Var0 = 0xFFFFFFFF;
	Var0.f_1 = 0xFFFFFFFF;
	Var0.f_2 = 0xFFFFFFFF;
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xFFFFFFFF;
	Var0.f_8 = 0xFFFFFFFF;
	Var0.f_9 = 0xFFFFFFFF;
	Var0.f_A = 0xFFFFFFFF;
	Var0.f_B = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	Var0.f_D = 0xFFFFFFFF;
	Var0.f_E = 0xFFFFFFFF;
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
	Var0.f_1D = 0xFFFFFFFF;
	Var0.f_20 = 0xFFFFFFFF;
	Var0.f_21 = 0xFFFFFFFF;
	Var0.f_22 = 0xFFFFFFFF;
	Var0.f_23 = 0xFFFFFFFF;
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
	Global_198DAF = { Var0 };
}

int func_331(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 0x0000000C);
	}
	return 0x00000000;
}

int func_332(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 0x0000000A);
	}
	return 0x00000000;
}

int func_333(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 0x0000000B);
	}
	return 0x00000000;
}

bool func_334(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x00000004);
}

bool func_335(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x00000003);
}

bool func_336(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x00000002);
}

bool func_337(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x00000001);
}

int func_338(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_11() || !func_353(iParam1))
	{
		return 0x00000000;
	}
	switch (iParam1)
	{
		case 0x00000000:
			return func_348(iParam0, iParam2);
		
		case 0x00000001:
			return func_346(iParam0, iParam2);
		
		case 0x00000003:
			return func_345(iParam0);
		
		case 0x00000002:
			return func_340(iParam0, iParam2);
		
		case 0x00000004:
			return func_339(iParam0);
		
		default:
	}
	return 0x00000000;
}

bool func_339(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x00000006);
}

int func_340(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x0000000A:
			return func_344(iParam0);
		
		case 0x0000000B:
			return func_343(iParam0);
		
		case 0x0000000C:
			return func_342(iParam0);
		
		case 0x0000000D:
			return func_341(iParam0);
		
		default:
	}
	return 0x00000000;
}

bool func_341(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x0000000F);
}

bool func_342(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x0000000E);
}

bool func_343(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x0000000D);
}

bool func_344(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x0000000C);
}

bool func_345(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x00000005);
}

int func_346(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000005:
			return func_347(iParam0);
		
		case 0x00000006:
			return func_337(iParam0);
		
		case 0x00000007:
			return func_336(iParam0);
		
		case 0x00000008:
			return func_335(iParam0);
		
		case 0x00000009:
			return func_334(iParam0);
		
		default:
	}
	return 0x00000000;
}

bool func_347(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x00000000);
}

int func_348(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			return func_352(iParam0);
		
		case 0x00000001:
			return func_351(iParam0);
		
		case 0x00000002:
			return func_350(iParam0);
		
		case 0x00000003:
			return func_349(iParam0);
		
		case 0x00000004:
			return func_357(iParam0);
		
		default:
	}
	return 0x00000000;
}

bool func_349(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x0000000A);
}

bool func_350(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x00000009);
}

bool func_351(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x00000008);
}

bool func_352(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0x00000007);
}

bool func_353(int iParam0)
{
	return (iParam0 != 0xFFFFFFFF && iParam0 != 0x00000006);
}

int func_354(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	iVar0 = 0x00000001;
	if (func_338(iParam0, 0x00000002, 0x0000000D))
	{
		iVar0 = 0x00000005;
	}
	else if (func_338(iParam0, 0x00000002, 0x0000000C))
	{
		iVar0 = 0x00000004;
	}
	else if (func_338(iParam0, 0x00000002, 0x0000000B))
	{
		iVar0 = 0x00000003;
	}
	else if (func_338(iParam0, 0x00000002, 0x0000000A))
	{
		iVar0 = 0x00000002;
	}
	return iVar0;
}

void func_355(int iParam0)
{
	unk_0xEB3BD00621D19C22(&Global_198DE5);
	func_356();
}

void func_356()
{
	struct<39> Var0;
	
	Var0 = 0xFFFFFFFF;
	Var0.f_1 = 0xFFFFFFFF;
	Var0.f_2 = 0xFFFFFFFF;
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xFFFFFFFF;
	Var0.f_8 = 0xFFFFFFFF;
	Var0.f_9 = 0xFFFFFFFF;
	Var0.f_A = 0xFFFFFFFF;
	Var0.f_B = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	Var0.f_D = 0xFFFFFFFF;
	Var0.f_E = 0xFFFFFFFF;
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
	Var0.f_1D = 0xFFFFFFFF;
	Var0.f_1E = 0xFFFFFFFF;
	Var0.f_20 = 0xFFFFFFFF;
	Var0.f_21 = 0xFFFFFFFF;
	Var0.f_22 = 0xFFFFFFFF;
	Var0.f_23 = 0xFFFFFFFF;
	Var0.f_24 = 0xFFFFFFFF;
	Var0.f_25 = 0xFFFFFFFF;
	Var0.f_26 = 0xFFFFFFFF;
	Global_198DE5 = { Var0 };
}

bool func_357(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 0x0000001F);
}

bool func_358(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0x00000000);
}

bool func_359(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0x00000013);
}

var func_360(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_D3.f_6;
}

void func_361(int iParam0)
{
	unk_0xD620402A9DD91217(&Global_198D5D);
	func_362();
}

void func_362()
{
	struct<46> Var0;
	
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xFFFFFFFF;
	Var0.f_8 = 0xFFFFFFFF;
	Var0.f_9 = 0xFFFFFFFF;
	Var0.f_A = 0xFFFFFFFF;
	Var0.f_B = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	Var0.f_D = 0xFFFFFFFF;
	Var0.f_E = 0xFFFFFFFF;
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
	Global_198D5D = { Var0 };
	Global_198D5D.f_10 = 0x00000000;
}

bool func_363()
{
	return func_28(0x0000180C, 0xFFFFFFFF, 0x00000000) != 0x00000000;
}

int func_364(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_10F != 0x00000000;
	}
	return 0x00000000;
}

bool func_365()
{
	return func_28(0x00001814, 0xFFFFFFFF, 0x00000000) == 0x00000003;
}

bool func_366()
{
	return func_28(0x00001814, 0xFFFFFFFF, 0x00000000) == 0x00000002;
}

bool func_367()
{
	return func_28(0x00001814, 0xFFFFFFFF, 0x00000000) == 0x00000001;
}

void func_368(int iParam0)
{
	unk_0x51EB431C1612B9CA(&Global_198D27);
	func_369();
}

void func_369()
{
	struct<54> Var0;
	
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xFFFFFFFF;
	Var0.f_8 = 0xFFFFFFFF;
	Var0.f_9 = 0xFFFFFFFF;
	Var0.f_A = 0xFFFFFFFF;
	Var0.f_B = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	Var0.f_D = 0xFFFFFFFF;
	Var0.f_E = 0xFFFFFFFF;
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
	Global_198D27 = { Var0 };
	Global_198D27.f_17 = 0x00000000;
	Global_198D27.f_18 = 0x00000000;
	Global_198D27.f_10 = 0x00000000;
}

void func_370()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0x00000000;
	iVar3 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		iVar2 = (iVar0 + func_381(0x0000000C));
		func_380(iVar2, &iVar1, 0x00000001);
		if (iVar1 >= 0x00000000)
		{
			if (Global_14325F[iVar1 /*141*/].f_42 != 0x00000000 && func_372(Global_14325F[iVar1 /*141*/].f_42, 0x00000001))
			{
				if (Global_26B66F.f_380 != iVar1)
				{
					if (func_371(Global_14325F[iVar1 /*141*/].f_42))
					{
						if (Global_14325F[iVar1 /*141*/].f_42 != 0x00000000)
						{
							iVar3 = Global_14325F[iVar1 /*141*/].f_42;
						}
						switch (iVar0)
						{
							case 0x00000000:
								Global_198D27.f_26 = iVar3;
								break;
							
							case 0x00000001:
								Global_198D27.f_27 = iVar3;
								break;
							
							case 0x00000002:
								Global_198D27.f_28 = iVar3;
								break;
							
							case 0x00000003:
								Global_198D27.f_29 = iVar3;
								break;
							
							case 0x00000004:
								Global_198D27.f_2A = iVar3;
								break;
							
							case 0x00000005:
								Global_198D27.f_2B = iVar3;
								break;
							
							case 0x00000006:
								Global_198D27.f_2C = iVar3;
								break;
							
							case 0x00000007:
								Global_198D27.f_2D = iVar3;
								break;
							
							case 0x00000008:
								Global_198D27.f_2E = iVar3;
								break;
							
							case 0x00000009:
								Global_198D27.f_2F = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case 0x89BA59F5:
		case 0xFD707EDE:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case 0xD35698EF:
		case 0xC5DD6967:
		case 0x9A9EB7DE:
		case 0xE8983F9F:
		case 0x96E24857:
		case 0x3E2E4F8A:
		case joaat("lazer"):
		case 0xAD6065C0:
		case 0x5D56F01B:
		case 0x3DC92356:
		case 0xC3F25753:
		case 0xFE0A508C:
		case 0xA52F6866:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 0x46699F47:
		case 0x1AAD0DED:
		case 0xD4AE63D9:
			return 0x00000001;
		
		default:
	}
	if (iParam0 == 0x64DE07A1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_372(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0x00000000;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x8CD06866876216F2()) || (iParam0 == joaat("buffalo3") && !unk_0x8CD06866876216F2())) || (iParam0 == joaat("gauntlet2") && !unk_0x8CD06866876216F2())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x8CD06866876216F2()))
	{
		if (!func_379())
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0x00000000;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_378() && !func_377()) && !func_376()) && !func_375()) && !func_379())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_376())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_374(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_373(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_373(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_134())
	{
		return 0x00000001;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 0x00000004)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 0x00000001;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_374(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_26596A)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000001;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_19C7 && !Global_40001.f_327A) && iVar1 < Global_40001.f_327B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_378E && iVar1 < Global_40001.f_379A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_378A && iVar1 < Global_40001.f_3796)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_378B && iVar1 < Global_40001.f_3797)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_378C && iVar1 < Global_40001.f_3798)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_378D && iVar1 < Global_40001.f_3799)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_378F && iVar1 < Global_40001.f_379B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_3790 && iVar1 < Global_40001.f_3793)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3791 && iVar1 < Global_40001.f_3794)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3792 && iVar1 < Global_40001.f_3795)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_41D5 && iVar1 < Global_40001.f_41B2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_41D0 && iVar1 < Global_40001.f_41AD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_41D4 && iVar1 < Global_40001.f_41B1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_41D3 && iVar1 < Global_40001.f_41B0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_41CD && iVar1 < Global_40001.f_41AA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_41CE && iVar1 < Global_40001.f_41AB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_41D1 && iVar1 < Global_40001.f_41AE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_41D2 && iVar1 < Global_40001.f_41AF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_41CF && iVar1 < Global_40001.f_41AC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_41D7 && iVar1 < Global_40001.f_41B4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_41D8 && iVar1 < Global_40001.f_41B5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_41CC && iVar1 < Global_40001.f_41A9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_41CB && iVar1 < Global_40001.f_41A8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_41CA && iVar1 < Global_40001.f_41A7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_41D6 && iVar1 < Global_40001.f_41B3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_41D9 && iVar1 < Global_40001.f_41B6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_41DA && iVar1 < Global_40001.f_41B7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_41DB && iVar1 < Global_40001.f_41B8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_41DC && iVar1 < Global_40001.f_41B9)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_426F && iVar1 < Global_40001.f_4285)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_4270 && iVar1 < Global_40001.f_4286)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_4271 && iVar1 < Global_40001.f_4287)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_4272 && iVar1 < Global_40001.f_4288)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4273 && iVar1 < Global_40001.f_4289)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4274 && iVar1 < Global_40001.f_428A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4276 && iVar1 < Global_40001.f_428B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4277 && iVar1 < Global_40001.f_428C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4278 && iVar1 < Global_40001.f_428D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4279 && iVar1 < Global_40001.f_428E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_427A && iVar1 < Global_40001.f_428F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_427B && iVar1 < Global_40001.f_4290)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_427C && iVar1 < Global_40001.f_4291)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_4282 && iVar1 < Global_40001.f_4298)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_427F && iVar1 < Global_40001.f_4294)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_4280 && iVar1 < Global_40001.f_4295)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_4281 && iVar1 < Global_40001.f_4296)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4275 && iVar1 < Global_40001.f_4297)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4283 && iVar1 < Global_40001.f_4299)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_427D && iVar1 < Global_40001.f_4292)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_427E && iVar1 < Global_40001.f_4293)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4284 && iVar1 < Global_40001.f_429A)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_48E3 && iVar1 < Global_40001.f_4944)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_48E4 && iVar1 < Global_40001.f_4945)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_48E5 && iVar1 < Global_40001.f_4946)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_48E6 && iVar1 < Global_40001.f_4947)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_48E7 && iVar1 < Global_40001.f_4948)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_48E8 && iVar1 < Global_40001.f_4949)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_48E9 && iVar1 < Global_40001.f_494A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_48EA && iVar1 < Global_40001.f_494B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_48EB && iVar1 < Global_40001.f_494C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_48EC && iVar1 < Global_40001.f_494D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_48ED && iVar1 < Global_40001.f_494E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_48EE && iVar1 < Global_40001.f_494F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_48EF && iVar1 < Global_40001.f_4950)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_48F0 && iVar1 < Global_40001.f_4951)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_48F1 && iVar1 < Global_40001.f_4952)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_48F2 && iVar1 < Global_40001.f_4953)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_48F3 && iVar1 < Global_40001.f_4954)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_48F4 && iVar1 < Global_40001.f_4955)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_48F5 && iVar1 < Global_40001.f_4956)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_48F6 && iVar1 < Global_40001.f_4957)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_48F7 && iVar1 < Global_40001.f_4958)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_48F8 && iVar1 < Global_40001.f_4959)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_48F9 && iVar1 < Global_40001.f_495A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_48FA && iVar1 < Global_40001.f_495B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_48FB && iVar1 < Global_40001.f_495C)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x4992196C)
	{
		if (!Global_40001.f_4D1C && iVar1 < Global_40001.f_4D18)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAC33179C)
	{
		if (!Global_40001.f_4D1D && iVar1 < Global_40001.f_4D19)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2AE524A8)
	{
		if (!Global_40001.f_4D1E && iVar1 < Global_40001.f_4D1A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC575DF11)
	{
		if (!Global_40001.f_4D1F && iVar1 < Global_40001.f_4D1B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x36B4A8A9)
	{
		if (!Global_40001.f_508B && iVar1 < Global_40001.f_5093)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x0D4E5F4D)
	{
		if (!Global_40001.f_508C && iVar1 < Global_40001.f_5094)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x59A9E570)
	{
		if (!Global_40001.f_508D && iVar1 < Global_40001.f_5095)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7397224C)
	{
		if (!Global_40001.f_508E && iVar1 < Global_40001.f_5096)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x097E5533)
	{
		if (!Global_40001.f_508F && iVar1 < Global_40001.f_5097)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x19DD9ED1)
	{
		if (!Global_40001.f_5090 && iVar1 < Global_40001.f_5098)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x96E24857)
	{
		if (!Global_40001.f_5394 && iVar1 < Global_40001.f_53A8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD35698EF)
	{
		if (!Global_40001.f_53A0 && iVar1 < Global_40001.f_53B4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC5DD6967)
	{
		if (!Global_40001.f_5397 && iVar1 < Global_40001.f_53AB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9A9EB7DE)
	{
		if (!Global_40001.f_53A1 && iVar1 < Global_40001.f_53B5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE8983F9F)
	{
		if (!Global_40001.f_5395 && iVar1 < Global_40001.f_53A9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E2E4F8A)
	{
		if (!Global_40001.f_53A5 && iVar1 < Global_40001.f_53B9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAD6065C0)
	{
		if (!Global_40001.f_53A3 && iVar1 < Global_40001.f_53B7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5D56F01B)
	{
		if (!Global_40001.f_53A4 && iVar1 < Global_40001.f_53B8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3DC92356)
	{
		if (!Global_40001.f_539F && iVar1 < Global_40001.f_53B3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFE0A508C)
	{
		if (!Global_40001.f_53A6 && iVar1 < Global_40001.f_53BA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFD707EDE)
	{
		if (!Global_40001.f_53A2 && iVar1 < Global_40001.f_53B6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x89BA59F5)
	{
		if (!Global_40001.f_539E && iVar1 < Global_40001.f_53B2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC3F25753)
	{
		if (!Global_40001.f_5396 && iVar1 < Global_40001.f_53AA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA52F6866)
	{
		if (!Global_40001.f_5398 && iVar1 < Global_40001.f_53AC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x52FF9437)
	{
		if (!Global_40001.f_5399 && iVar1 < Global_40001.f_53AD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC4810400)
	{
		if (!Global_40001.f_539A && iVar1 < Global_40001.f_53AE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB5EF4C33)
	{
		if (!Global_40001.f_539B && iVar1 < Global_40001.f_53AF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6DBD6C0A)
	{
		if (!Global_40001.f_539C && iVar1 < Global_40001.f_53B0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7A2EF5E4)
	{
		if (!Global_40001.f_539D && iVar1 < Global_40001.f_53B1)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x586765FB)
	{
		if (!Global_40001.f_5755 && iVar1 < Global_40001.f_5771)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x34DBA661)
	{
		if (!Global_40001.f_5756 && iVar1 < Global_40001.f_5772)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9B16A3B4)
	{
		if (!Global_40001.f_5757 && iVar1 < Global_40001.f_5773)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD6BC7523)
	{
		if (!Global_40001.f_5758 && iVar1 < Global_40001.f_5774)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAA6F980A)
	{
		if (!Global_40001.f_5759 && iVar1 < Global_40001.f_5775)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x46699F47)
	{
		if (!Global_40001.f_575A && iVar1 < Global_40001.f_5776)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x58CDAF30)
	{
		if (!Global_40001.f_575B && iVar1 < Global_40001.f_5777)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF34DFB25)
	{
		if (!Global_40001.f_575C && iVar1 < Global_40001.f_5778)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1AAD0DED)
	{
		if (!Global_40001.f_575D && iVar1 < Global_40001.f_5779)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5D1903F9)
	{
		if (!Global_40001.f_575E && iVar1 < Global_40001.f_577A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x91CA96EE)
	{
		if (!Global_40001.f_575F && iVar1 < Global_40001.f_577B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x67D2B389)
	{
		if (!Global_40001.f_5760 && iVar1 < Global_40001.f_577C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x41D149AA)
	{
		if (!Global_40001.f_5761 && iVar1 < Global_40001.f_577D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6F946279)
	{
		if (!Global_40001.f_5762 && iVar1 < Global_40001.f_577E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5097F589)
	{
		if (!Global_40001.f_5763 && iVar1 < Global_40001.f_577F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xED552C74)
	{
		if (!Global_40001.f_5764 && iVar1 < Global_40001.f_5780)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8408F33A)
	{
		if (!Global_40001.f_5765 && iVar1 < Global_40001.f_5781)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x23CA25F2)
	{
		if (!Global_40001.f_5766 && iVar1 < Global_40001.f_5782)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE78CC3D9)
	{
		if (!Global_40001.f_5767 && iVar1 < Global_40001.f_5783)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x33B98FE2)
	{
		if (!Global_40001.f_5768 && iVar1 < Global_40001.f_5784)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA4D99B7D)
	{
		if (!Global_40001.f_5769 && iVar1 < Global_40001.f_5785)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x35DED0DD)
	{
		if (!Global_40001.f_576A && iVar1 < Global_40001.f_5786)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA4A4E453)
	{
		if (!Global_40001.f_576B && iVar1 < Global_40001.f_5787)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x00E83C17)
	{
		if (!Global_40001.f_576C && iVar1 < Global_40001.f_5788)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x276D98A3)
	{
		if (!Global_40001.f_576D && iVar1 < Global_40001.f_5789)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3201DD49)
	{
		if (!Global_40001.f_576E && iVar1 < Global_40001.f_578A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE8A8BA94)
	{
		if (!Global_40001.f_576F && iVar1 < Global_40001.f_578B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF8C2E0E7)
	{
		if (!Global_40001.f_5770 && iVar1 < Global_40001.f_578C)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x71CBEA98)
	{
		if (!Global_40001.f_5C15 && iVar1 < Global_40001.f_5C25)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6068AD86)
	{
		if (!Global_40001.f_5C16 && iVar1 < Global_40001.f_5C26)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB472D2B5)
	{
		if (!Global_40001.f_5C1A && iVar1 < Global_40001.f_5C2A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x378236E1)
	{
		if (!Global_40001.f_5C1D && iVar1 < Global_40001.f_5C2D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E5BD8D9)
	{
		if (!Global_40001.f_5C22 && iVar1 < Global_40001.f_5C32)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB4F32118)
	{
		if (!Global_40001.f_5C1C && iVar1 < Global_40001.f_5C2C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x42836BE5)
	{
		if (!Global_40001.f_5C14 && iVar1 < Global_40001.f_5C24)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3D7C6410)
	{
		if (!Global_40001.f_5C1B && iVar1 < Global_40001.f_5C2B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE99011C2)
	{
		if (!Global_40001.f_5C21 && iVar1 < Global_40001.f_5C31)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC52C6B93)
	{
		if (!Global_40001.f_5C20 && iVar1 < Global_40001.f_5C30)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBC5DC07E)
	{
		if (!Global_40001.f_5C17 && iVar1 < Global_40001.f_5C27)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8198AEDC)
	{
		if (!Global_40001.f_5C19 && iVar1 < Global_40001.f_5C29)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF330CB6A)
	{
		if (!Global_40001.f_5C23 && iVar1 < Global_40001.f_5C33)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC514AAE0)
	{
		if (!Global_40001.f_5C1F && iVar1 < Global_40001.f_5C2F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4ABEBF23)
	{
		if (!Global_40001.f_5C18 && iVar1 < Global_40001.f_5C28)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD4AE63D9)
	{
		if (!Global_40001.f_5C1E && iVar1 < Global_40001.f_5C2E)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x897AFC65)
	{
		if (!Global_40001.f_5C6F && iVar1 < Global_40001.f_5C62)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x149BD32A)
	{
		if (!Global_40001.f_5C70 && iVar1 < Global_40001.f_5C63)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x73F4110E)
	{
		if (!Global_40001.f_5C75 && iVar1 < Global_40001.f_5C68)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6290F15B)
	{
		if (!Global_40001.f_5C74 && iVar1 < Global_40001.f_5C67)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1DD4C0FF)
	{
		if (!Global_40001.f_5C72 && iVar1 < Global_40001.f_5C65)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x79DD18AE)
	{
		if (!Global_40001.f_5C78 && iVar1 < Global_40001.f_5C6B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD9F0503D)
	{
		if (!Global_40001.f_5C7A && iVar1 < Global_40001.f_5C6D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x64DE07A1)
	{
		if (!Global_40001.f_5C7B && iVar1 < Global_40001.f_5C6E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7B54A9D3)
	{
		if (!Global_40001.f_5C79 && iVar1 < Global_40001.f_5C6C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE6E967F8)
	{
		if (!Global_40001.f_5C71 && iVar1 < Global_40001.f_5C64)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1324E960)
	{
		if (!Global_40001.f_5C73 && iVar1 < Global_40001.f_5C66)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFCC2F483)
	{
		if (!Global_40001.f_5C77 && iVar1 < Global_40001.f_5C6A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEDA4ED97)
	{
		if (!Global_40001.f_5C76 && iVar1 < Global_40001.f_5C69)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x669EB40A)
	{
	}
	else if (iParam0 == 0xD039510B)
	{
	}
	else if (iParam0 == 0x287FA449)
	{
	}
	else if (iParam0 == 0x71D3B6F0)
	{
	}
	else if (iParam0 == 0x7F81A829)
	{
	}
	else if (iParam0 == 0x8F49AE28)
	{
	}
	else if (iParam0 == 0x798682A2)
	{
	}
	else if (iParam0 == 0xBBA2A2F7)
	{
	}
	else if (iParam0 == 0x5BEB3CE0)
	{
	}
	else if (iParam0 == 0xDD71BFEB)
	{
	}
	else if (iParam0 == 0x1A861243)
	{
	}
	else if (iParam0 == 0x619C1B82)
	{
	}
	else if (iParam0 == 0xD2F77E37)
	{
	}
	else if (iParam0 == 0x20314B42)
	{
	}
	else if (iParam0 == 0xBE11EFC6)
	{
	}
	else if (iParam0 == 0xA7DCC35C)
	{
	}
	else if (iParam0 == 0x83070B62)
	{
	}
	else if (iParam0 == 0x5EE005DA)
	{
		if (!Global_40001.f_657A && iVar1 < Global_40001.f_657C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBA5334AC)
	{
		if (!Global_40001.f_619F && iVar1 < Global_40001.f_6198)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA29F78B0)
	{
		if (!Global_40001.f_61A0 && iVar1 < Global_40001.f_6199)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEC3E3404)
	{
		if (!Global_40001.f_61A1 && iVar1 < Global_40001.f_619A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4C3FFF49)
	{
		if (!Global_40001.f_61A2 && iVar1 < Global_40001.f_619B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFD128DFD)
	{
		if (!Global_40001.f_657B && iVar1 < Global_40001.f_657D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x56D42971)
	{
		if (!Global_40001.f_61A3 && iVar1 < Global_40001.f_619C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE1C03AB0)
	{
		if (!Global_40001.f_61A4 && iVar1 < Global_40001.f_619D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEEF345EC)
	{
		if (!Global_40001.f_61A5 && iVar1 < Global_40001.f_619E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E3D1F59)
	{
		if (!Global_40001.f_61AA && iVar1 < Global_40001.f_61BF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x28EAB80F)
	{
		if (!Global_40001.f_61AB && iVar1 < Global_40001.f_61C0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC7E55211)
	{
		if (!Global_40001.f_61AC && iVar1 < Global_40001.f_61C1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x92F5024E)
	{
		if (!Global_40001.f_61AD && iVar1 < Global_40001.f_61C2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD757D97D)
	{
		if (!Global_40001.f_61AE && iVar1 < Global_40001.f_61C3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2B0C4DCD)
	{
		if (!Global_40001.f_61AF && iVar1 < Global_40001.f_61C4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6E8DA4F7)
	{
		if (!Global_40001.f_61B0 && iVar1 < Global_40001.f_61C5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6F039A67)
	{
		if (!Global_40001.f_61B1 && iVar1 < Global_40001.f_61C6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCB642637)
	{
		if (!Global_40001.f_61B2 && iVar1 < Global_40001.f_61C7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEA6A047F)
	{
		if (!Global_40001.f_61B3 && iVar1 < Global_40001.f_61C8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x127E90D5)
	{
		if (!Global_40001.f_61B4 && iVar1 < Global_40001.f_61C9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x36A167E0)
	{
		if (!Global_40001.f_61B5 && iVar1 < Global_40001.f_61CA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9472CD24)
	{
		if (!Global_40001.f_61B6 && iVar1 < Global_40001.f_61CB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x734C5E50)
	{
		if (!Global_40001.f_61B7 && iVar1 < Global_40001.f_61CC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAF966F3C)
	{
		if (!Global_40001.f_61B8 && iVar1 < Global_40001.f_61CD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF38C4245)
	{
		if (!Global_40001.f_61B9 && iVar1 < Global_40001.f_61CE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xECA6B6A3)
	{
		if (!Global_40001.f_61BA && iVar1 < Global_40001.f_61CF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD86A0247)
	{
		if (!Global_40001.f_61BB && iVar1 < Global_40001.f_61D0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4EE74355)
	{
		if (!Global_40001.f_61BC && iVar1 < Global_40001.f_61D1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9F6ED5A2)
	{
		if (!Global_40001.f_61BD && iVar1 < Global_40001.f_61D2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE550775B)
	{
		if (!Global_40001.f_61BE && iVar1 < Global_40001.f_61D3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x42ACA95F)
	{
		if (!Global_40001.f_6CAD && iVar1 < Global_40001.f_6CC2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x18619B7E)
	{
		if (!Global_40001.f_6CAE && iVar1 < Global_40001.f_6CC3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x97553C28)
	{
		if (!Global_40001.f_6CAF && iVar1 < Global_40001.f_6CC4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x79178F0A)
	{
		if (!Global_40001.f_6CB0 && iVar1 < Global_40001.f_6CC5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x64F49967)
	{
		if (!Global_40001.f_6CB1 && iVar1 < Global_40001.f_6CC6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3ADB9758)
	{
		if (!Global_40001.f_6CB2 && iVar1 < Global_40001.f_6CC7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3404691C)
	{
		if (!Global_40001.f_6CB3 && iVar1 < Global_40001.f_6CC8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x185E2FF3)
	{
		if (!Global_40001.f_6CB4 && iVar1 < Global_40001.f_6CC9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2C1FEA99)
	{
		if (!Global_40001.f_6CB5 && iVar1 < Global_40001.f_6CCA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCE44C4B9)
	{
		if (!Global_40001.f_6CB6 && iVar1 < Global_40001.f_6CCB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x11F58A5A)
	{
		if (!Global_40001.f_6CB7 && iVar1 < Global_40001.f_6CCC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3944D5A0)
	{
		if (!Global_40001.f_6CB8 && iVar1 < Global_40001.f_6CCD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4C8DBA51)
	{
		if (!Global_40001.f_6CB9 && iVar1 < Global_40001.f_6CCE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x177DA45C)
	{
		if (!Global_40001.f_6CBA && iVar1 < Global_40001.f_6CCF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x73920F8E)
	{
		if (!Global_40001.f_6CBB && iVar1 < Global_40001.f_6CD0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_40001.f_6CBC && iVar1 < Global_40001.f_6CD1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_40001.f_6CBD && iVar1 < Global_40001.f_6CD2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_40001.f_6CBE && iVar1 < Global_40001.f_6CD3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB53C6C52)
	{
		if (!Global_40001.f_6CBF && iVar1 < Global_40001.f_6CD4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_40001.f_6CC0 && iVar1 < Global_40001.f_6CD5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_40001.f_6CC1 && iVar1 < Global_40001.f_6CD6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1446590A)
	{
		if ((!Global_40001.f_6CD8 && iVar1 < Global_40001.f_6CD9) && !Global_40001.f_6CAB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8B213907)
	{
		if ((!Global_40001.f_6CDB && iVar1 < Global_40001.f_6CDC) && !Global_40001.f_6CAC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBC7C0A00)
	{
		if (!Global_40001.f_6CE0 && iVar1 < Global_40001.f_6CE3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x04F48FC4)
	{
		if (!Global_40001.f_6CE1 && iVar1 < Global_40001.f_6CE4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x56CDEE7D)
	{
		if (!Global_40001.f_6CE2 && iVar1 < Global_40001.f_6CE5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x817AFAAD)
	{
		if (!Global_40001.f_70CA && iVar1 < Global_40001.f_6F7B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x82E47E85)
	{
		if (!Global_40001.f_6F6D && iVar1 < Global_40001.f_6F82)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7F3415E3)
	{
		if (!Global_40001.f_6F6E && iVar1 < Global_40001.f_6F74)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x0409D787)
	{
		if (!Global_40001.f_70C8 && iVar1 < Global_40001.f_6F7C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4201A843)
	{
		if (!Global_40001.f_70C9 && iVar1 < Global_40001.f_6F7D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC98BBAD6)
	{
		if (!Global_40001.f_6F67 && iVar1 < Global_40001.f_6F7A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xDA5EC7DA)
	{
		if (!Global_40001.f_6F68 && iVar1 < Global_40001.f_6F83)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCE0B9F22)
	{
		if (!Global_40001.f_6F69 && iVar1 < Global_40001.f_6F79)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x94114926)
	{
		if (!Global_40001.f_6F6A && iVar1 < Global_40001.f_6F77)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAF0B8D48)
	{
		if (!Global_40001.f_70C4 && iVar1 < Global_40001.f_6F7E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x58F77553)
	{
		if (!Global_40001.f_70C5 && iVar1 < Global_40001.f_6F7F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4669D038)
	{
		if (!Global_40001.f_70C6 && iVar1 < Global_40001.f_6F80)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x98F65A5E)
	{
		if (!Global_40001.f_70C7 && iVar1 < Global_40001.f_6F81)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x665F785D)
	{
		if (!Global_40001.f_6F6B && iVar1 < Global_40001.f_6F76)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6B73A9BE)
	{
		if (!Global_40001.f_6F6C && iVar1 < Global_40001.f_6F78)
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_375()
{
	return 0x00000000;
}

int func_376()
{
	return 0x00000001;
}

int func_377()
{
	return 0x00000001;
}

int func_378()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_379()
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

void func_380(int iParam0, int iParam1, bool bParam2)
{
	if (Global_40001.f_27B3)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0x00000000)
	{
		*iParam1 = (Global_19801F[iParam0] - 0x00000001);
		if (bParam2)
		{
			if ((unk_0xF4CCC8CB6DE7F1AE() % 0x00000005) == 0x00000000)
			{
			}
		}
	}
	else
	{
		*iParam1 = 0xFFFFFFFF;
	}
}

int func_381(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000008:
			return 0x00000058;
			break;
		
		case 0x00000009:
			return 0x0000006C;
			break;
		
		case 0x0000000A:
			return 0x00000080;
			break;
		
		case 0x0000000B:
			return 0x00000094;
			break;
		
		case 0x00000006:
			return 0x00000041;
			break;
		
		case 0x00000007:
			return 0x0000004B;
			break;
		
		case 0x00000005:
			return 0xFFFFFFFF;
			break;
		
		case 0x0000000C:
			return 0x0000009F;
			break;
		
		case 0x0000000D:
			return 0x000000B3;
			break;
		
		case 0x0000000E:
			return 0x000000BF;
			break;
		
		case 0x0000000F:
			return 0x000000C0;
			break;
		
		case 0x00000010:
			return 0x000000CA;
			break;
		
		case 0x00000011:
			return 0x000000D4;
			break;
		
		case 0x00000012:
			return 0x000000E3;
			break;
		
		case 0x00000013:
			return 0x000000ED;
			break;
		
		case 0x00000014:
			return 0x000000F7;
			break;
		
		case 0x00000015:
			return 0x00000102;
			break;
		
		case 0x00000016:
			return 0x0000010C;
			break;
		
		case 0x00000017:
			return 0x00000119;
			break;
		
		case 0x00000018:
			return 0x00000126;
			break;
	}
	if (iParam0 >= 0x000003E8)
	{
		iVar0 = func_324(iParam0);
		return func_389(iVar0);
	}
	return (func_382(iParam0, 0xFFFFFFFF) * iParam0);
}

int func_382(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		if (iParam1 >= 0x00000001)
		{
			if (func_385(iParam1, 0x00000000, 0x00000000))
			{
				return 0x00000014;
			}
			else if (func_384(iParam1))
			{
				return 0x00000000;
			}
			else if (func_383(iParam1, 0xFFFFFFFF))
			{
				return 0x0000000A;
			}
			else if (iParam1 == 0x00000073)
			{
				return 0x00000008;
			}
			else if (iParam1 == 0x00000074)
			{
				return 0x00000014;
			}
			else if (iParam1 == 0x00000075)
			{
				return 0x00000007;
			}
			else if (iParam1 == 0x00000076)
			{
				return 0x00000001;
			}
			else if ((iParam1 == 0x00000077 || iParam1 == 0x00000078) || iParam1 == 0x00000079)
			{
				return 0x0000000A;
			}
			else if (iParam1 == 0x0000007A)
			{
				return 0x00000009;
			}
			else if (iParam1 == 0x0000007B || iParam1 == 0x0000007C)
			{
				return 0x0000000A;
			}
			else if (iParam1 == 0x0000007D)
			{
				return 0x0000000A;
			}
			else if (iParam1 == 0x0000007E)
			{
				return 0x0000000A;
			}
			else if (iParam1 <= 0x0000007E && iParam1 > 0x00000000)
			{
				if (Global_100542[iParam1 /*1951*/].f_21 == 0x00000002)
				{
					return 0x00000003;
				}
				else if (Global_100542[iParam1 /*1951*/].f_21 == 0x00000006)
				{
					return 0x00000008;
				}
				else if (Global_100542[iParam1 /*1951*/].f_21 == 0x0000000A)
				{
					return 0x0000000D;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000007:
		case 0x00000017:
		case 0x00000018:
			return 0x0000000D;
			break;
		
		case 0x00000005:
			return 0x00000000;
			break;
		
		case 0x00000006:
			return 0x0000000A;
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
			return 0x00000014;
			break;
		
		case 0x0000000B:
			return 0x00000008;
			break;
		
		case 0x0000000C:
			return 0x00000014;
			break;
		
		case 0x0000000D:
			return 0x00000007;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			return 0x0000000A;
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			return 0x0000000A;
			break;
		
		case 0x00000015:
			return 0x0000000A;
			break;
		
		case 0x00000016:
			return 0x0000000A;
			break;
	}
	return 0x00000000;
}

int func_383(int iParam0, int iParam1)
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

int func_384(int iParam0)
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

int func_385(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_386(unk_0xD803B885F5E47A62(), 0x00000000);
	}
	if (bParam1)
	{
		if (func_386(unk_0xD803B885F5E47A62(), 0x00000000))
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

bool func_386(int iParam0, bool bParam1)
{
	if (Global_184465 != func_11())
	{
		if (!func_388(Global_184465))
		{
			return 0x00000000;
		}
		if (bParam1)
		{
			if (unk_0xD803B885F5E47A62() != Global_184465)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_184465 /*421*/].f_C3, 0x00000018) || func_387(Global_184465))
				{
					return 0x00000001;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 0x00000018);
}

int func_387(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 0x00000009);
	}
	return 0x00000000;
}

int func_388(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 0x00000002);
	}
	return 0x00000000;
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000009C;
		
		case 0x00000002:
			return 0x000000DF;
		
		case 0x00000001:
			return 0x000000E0;
		
		default:
	}
	return 0xFFFFFFFF;
}

var func_390()
{
	var uVar0;
	
	uVar0 = func_391();
	if (!func_117())
	{
		if (func_137() != func_11())
		{
			uVar0 = func_424(func_137()) + 1;
		}
	}
	return uVar0;
}

int func_391()
{
	return func_424(unk_0xD803B885F5E47A62()) + 1;
}

int func_392()
{
	return func_28(0x000017E1, 0xFFFFFFFF, 0x00000000);
}

int func_393(int iParam0)
{
	if (func_240(iParam0, 0x00000001))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1C3;
	}
	return 0xFFFFFFFF;
}

void func_394(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
	}
	unk_0x09B65A782EA88A3D(&Global_198CFB);
	func_395();
}

void func_395()
{
	struct<44> Var0;
	
	Global_198CFB = { Var0 };
	Global_198CFB.f_17 = 0x00000000;
	Global_198CFB.f_18 = 0x00000000;
	Global_198CFB.f_10 = 0x00000000;
}

bool func_396(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 0x0000000C);
}

bool func_397(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 0x0000000D);
}

int func_398(int iParam0)
{
	if (iParam0 != func_11())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x0000000C) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x0000000D)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x0000000E))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_399(int iParam0)
{
	if (iParam0 != func_11())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_400(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (((((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000005)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000000)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_401(int iParam0, int iParam1)
{
	if (iParam1 == func_11())
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000000))
			{
				return 0x00000003;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000003))
			{
				return 0x00000002;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000006))
			{
				return 0x00000004;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000009))
			{
				return 0x00000001;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x0000000C))
			{
				return 0x00000007;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x0000000F))
			{
				return 0x00000005;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000012))
			{
				return 0x00000006;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000015))
			{
				return 0x00000000;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000018))
			{
				return 0x00000008;
			}
			break;
		
		case 0x00000001:
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000001))
			{
				return 0x00000003;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000004))
			{
				return 0x00000002;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000007))
			{
				return 0x00000004;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x0000000A))
			{
				return 0x00000001;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x0000000D))
			{
				return 0x00000007;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000010))
			{
				return 0x00000005;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000013))
			{
				return 0x00000006;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000016))
			{
				return 0x00000000;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000019))
			{
				return 0x00000008;
			}
			break;
		
		case 0x00000002:
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000002))
			{
				return 0x00000003;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000005))
			{
				return 0x00000002;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000008))
			{
				return 0x00000004;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x0000000B))
			{
				return 0x00000001;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x0000000E))
			{
				return 0x00000007;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000011))
			{
				return 0x00000005;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000014))
			{
				return 0x00000006;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x00000017))
			{
				return 0x00000000;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0x0000001A))
			{
				return 0x00000008;
			}
			break;
	}
	return 0x00000000;
}

int func_402(int iParam0)
{
	if (iParam0 != func_11())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000006) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000007)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000008))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_403(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 0x00000008);
}

bool func_404(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 0x00000007);
}

bool func_405(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 0x00000009);
}

bool func_406(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 0x0000000B);
}

bool func_407(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 0x0000000A);
}

int func_408(int iParam0, int iParam1)
{
	return func_28(func_409(iParam1), iParam0, 0x00000000);
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000F3A;
		
		case 0x00000001:
			return 0x00000F57;
		
		case 0x00000002:
			return 0x00000F5B;
		
		case 0x00000003:
			return 0x00000F5F;
		
		case 0x00000004:
			return 0x00000F63;
		
		case 0x00000005:
			return 0x0000154A;
		
		default:
	}
	return 0x00000F3A;
}

void func_410(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
	}
	unk_0x3315867670EACADD(&Global_198CBC);
	func_411();
}

void func_411()
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

void func_412(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
	}
	unk_0x9D44809E7CAF1A79(&Global_198C86);
	func_413();
}

void func_413()
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

int func_414(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_282(iParam0, iParam1, 0x00000002);
	bVar1 = func_282(iParam0, iParam1, 0x00000001);
	bVar2 = func_282(iParam0, iParam1, 0x00000000);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 0x00000007;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 0x00000006;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 0x00000005;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 0x00000004;
	}
	else if (bVar0)
	{
		return 0x00000003;
	}
	else if (bVar1)
	{
		return 0x00000002;
	}
	else if (bVar2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_415(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	if (func_274(iParam1))
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

int func_416(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_104(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_4523;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_4522;
		}
		else
		{
			iVar0 = Global_40001.f_4510;
		}
		iVar1 = 0x00000013;
	}
	else if (func_419(iParam0))
	{
		iVar0 = 0x00000006;
		iVar1 = 0x00000018;
	}
	else if (func_37(iParam0, 0x00000000))
	{
		if (bParam1)
		{
			iVar0 = Global_40001.f_450F;
			iVar1 = 0x00000014;
		}
	}
	else if (func_47(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_4523;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_4522;
		}
		else
		{
			iVar0 = Global_40001.f_4510;
		}
		iVar1 = 0x00000012;
	}
	if (iVar0 != 0x00000000)
	{
		unk_0xF9647457141B11A7(func_328(func_137()), func_327(func_137()), func_434(), func_433(), iVar1, iVar0);
	}
	func_418(iVar0);
	func_417(iVar0);
	return iVar0;
}

void func_417(int iParam0)
{
	int iVar0;
	
	iVar0 = func_28(0x00000F80, 0xFFFFFFFF, 0x00000000);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0x00000000)
	{
		iVar0 = 0x00000000;
	}
	if (iVar0 > 0x0000270F)
	{
		iVar0 = 0x0000270F;
	}
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1EA = iVar0;
	func_25(0x00000F80, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
}

void func_418(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 + iParam0);
	if (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 < 0xFFFFD8F1)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = 0x0000270F;
	}
	else if (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 > 0x0000270F)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = 0x0000270F;
	}
}

int func_419(int iParam0)
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

int func_420(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000000;
	}
	if (func_65(unk_0xD803B885F5E47A62()) || func_76(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_421(var uParam0)
{
	unk_0xC56A8C7E94A60EE3(&Global_198D8B);
	func_422();
}

void func_422()
{
	struct<36> Var0;
	
	Var0 = 0xFFFFFFFF;
	Var0.f_1 = 0xFFFFFFFF;
	Var0.f_2 = 0xFFFFFFFF;
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xFFFFFFFF;
	Var0.f_8 = 0xFFFFFFFF;
	Var0.f_9 = 0xFFFFFFFF;
	Var0.f_A = 0xFFFFFFFF;
	Var0.f_B = 0xFFFFFFFF;
	Var0.f_C = 0xFFFFFFFF;
	Var0.f_D = 0xFFFFFFFF;
	Var0.f_E = 0xFFFFFFFF;
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
	Var0.f_1D = 0xFFFFFFFF;
	Var0.f_1E = 0xFFFFFFFF;
	Var0.f_1F = 0xFFFFFFFF;
	Var0.f_20 = 0xFFFFFFFF;
	Var0.f_21 = 0xFFFFFFFF;
	Var0.f_22 = 0xFFFFFFFF;
	Global_198D8B = { Var0 };
}

int func_423(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_142 != 0x00000000;
	}
	return 0x00000000;
}

int func_424(int iParam0)
{
	if (func_85(iParam0) == func_11())
	{
		return 0x00000000;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_13;
}

int func_425()
{
	int iVar0;
	
	if (func_105())
	{
		return 0x00000004;
	}
	else if (func_117())
	{
		if (func_309(unk_0xD803B885F5E47A62()))
		{
			return 0x00000008;
		}
		return 0x00000006;
	}
	if (func_50(0x00000001))
	{
		iVar0 = func_393(unk_0xD803B885F5E47A62());
		if (iVar0 == 0xFFFFFFFF)
		{
			iVar0 = 0x00000005;
		}
		return iVar0;
	}
	else if (func_135(0x00000001))
	{
		if (func_309(func_137()))
		{
			return 0x00000009;
		}
		return 0x00000007;
	}
	return 0xFFFFFFFE;
}

int func_426(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_427(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0xFFFFFFFF;
	if (bParam0)
	{
		iVar0 = func_435(unk_0xD803B885F5E47A62());
	}
	else
	{
		iVar0 = func_44(unk_0xD803B885F5E47A62());
	}
	if (iVar0 != 0xFFFFFFFF)
	{
	}
	switch (iVar0)
	{
		case 0x000000EC:
			iVar2 = func_432(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 0x00000096:
			iVar2 = func_430(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 0x000000ED:
			iVar2 = func_429(unk_0xD803B885F5E47A62());
			if (func_91(func_92(unk_0xD803B885F5E47A62())))
			{
				iVar1 = 0x00000064;
			}
			else
			{
				iVar1 = 0x000000C8;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 0x000000FA:
			iVar2 = func_429(unk_0xD803B885F5E47A62());
			iVar1 = 0x0000012C;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 0x000000EE:
			iVar2 = func_428(unk_0xD803B885F5E47A62());
			iVar1 = 0x00000190;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 0x000000F9:
			iVar2 = func_428(unk_0xD803B885F5E47A62());
			iVar1 = 0x000001F4;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 0x000000EF:
			iVar1 = 0x00000258;
			break;
		
		case 0x000000F0:
			iVar1 = 0x000002BC;
			break;
		
		case 0x000000F1:
			iVar1 = 0x00000320;
			break;
		
		case 0x000000F2:
			iVar1 = 0x00000384;
			break;
		
		case 0x000000F4:
			iVar1 = 0x0000044C;
			break;
		
		case 0x000000F8:
			iVar1 = 0x000004B0;
			break;
	}
	return iVar1;
}

int func_428(int iParam0)
{
	if (func_44(unk_0xD803B885F5E47A62()) == 0x000000EE || func_44(unk_0xD803B885F5E47A62()) == 0x000000F9)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F3;
	}
	return 0xFFFFFFFF;
}

int func_429(int iParam0)
{
	if (func_44(unk_0xD803B885F5E47A62()) == 0x000000ED || func_44(unk_0xD803B885F5E47A62()) == 0x000000FA)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F2;
	}
	return 0xFFFFFFFF;
}

int func_430(int iParam0)
{
	return func_431(iParam0, 0x00000096);
}

int func_431(int iParam0, int iParam1)
{
	if (func_435(iParam0) == iParam1)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F0;
	}
	return 0xFFFFFFFF;
}

int func_432(int iParam0)
{
	return func_431(iParam0, 0x000000EC);
}

int func_433()
{
	if (Global_198C74.f_3 != 0x00000000)
	{
		return Global_198C74.f_3;
	}
	return 0xFFFFFFFF;
}

int func_434()
{
	if (Global_198C74.f_2 != 0x00000000)
	{
		return Global_198C74.f_2;
	}
	return 0xFFFFFFFF;
}

int func_435(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 0xFFFFFFFF;
}

bool func_436(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

void func_437(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_561(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 0xFFFFFFFF;
	iVar12 = 0xFFFFFFFF;
	iVar14 = 0x00000000;
	iVar15 = 0x00000000;
	uParam3->f_24 = 0x00000000;
	if (func_559() || iParam2 == 0x0000001C)
	{
		if (func_509(iParam1, iParam2, uParam3, Global_180529, 0x00000000, func_557(), sParam7))
		{
			func_508(0x00000001);
			if ((!func_506() && !func_504()) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
			{
				if (func_503())
				{
					func_499();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
					if (uParam3->f_1B == 0x00000000)
					{
						func_498(0x00000001);
						Global_180529 = 0x00000000;
						iVar19 = 0xFFFFFFFF;
						if (Global_180606 != 0x00000001)
						{
							func_497(iParam1, 0x00000000, 0x00000000);
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
								if (func_5(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
									if (!func_203(iVar3, 0x00000000))
									{
										if ((func_496(iVar3) || Global_25033E[iVar3 /*421*/].f_EC != 0xFFFFFFFF) || func_12(iVar3))
										{
											iVar9 = iVar3;
											if (func_118(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_495(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_494(unk_0xD803B885F5E47A62(), 0x00000000) && func_44(unk_0xD803B885F5E47A62()) != 0x000000BC)
						{
							bVar2 = iVar0 > 0x00000000;
						}
						iVar17 = 0x00000000;
						while (iVar17 < 0x00000020)
						{
							if (func_493())
							{
								if (func_5(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
								}
								else
								{
									iVar3 = func_11();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_492(iVar3) && func_488(iVar3, iParam2)) && func_5(iVar3, 0x00000000, 0x00000001))
							{
								iVar9 = iVar3;
								iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
								Var6 = { func_483(iVar3) };
								if (iVar3 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_160(iVar3) };
								iVar5 = func_477(iVar3);
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
									if (!func_493())
									{
										iVar15 = 0x00000001;
									}
								}
								if (iParam5 != 0xFFFFFFFF)
								{
									func_472(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_471(iParam5, 0x00000001, 0x00000000, 0x00000000), 16);
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
								iVar16 = func_469(iVar3, 0x00000000);
								if (bVar2)
								{
									if (func_240(iVar3, 0x00000001) && iVar1[iVar9] != 0xFFFFFFFF)
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
								if (func_468(iParam5))
								{
									func_467(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_467(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
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
							if (func_5(iVar3, 0x00000000, 0x00000001) && !unk_0xEAE0D21A50E6C7F4(iVar14, iVar3))
							{
								iVar3 = unk_0x117658E336116132(iVar17);
							}
							else
							{
								iVar3 = func_11();
							}
							if (func_492(iVar3))
							{
								if (func_5(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar9 = iVar3;
									iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
									Var6 = { func_483(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_160(iVar3) };
									iVar5 = func_477(iVar3);
									sVar4 = "";
									if (iVar5 != 0x00000000)
									{
										sVar4 = unk_0x5283D58F79627134(iVar5);
									}
									Global_180529++;
									iVar16 = func_469(iVar3, 0x00000001);
									if (bVar2)
									{
										if (func_240(iVar3, 0x00000001))
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
									func_450(iVar3, unk_0x6E524813889AECF8(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							func_447(uParam3, iParam1, iParam2);
						}
						func_8(&(uParam3->f_15));
						func_446();
						uParam3->f_1B = 0x00000002;
					}
					if (uParam3->f_1B == 0x00000002)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
						{
							func_445(uParam3, iParam1);
							func_444(iParam1, 0x00000000, 0x00000001);
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x00000007);
						}
						func_445(uParam3, iParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x0000000B);
						}
						if (func_440(uParam3))
						{
							Global_180606 = 0x00000001;
						}
						func_438(uParam3);
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
			func_446();
			func_498(0x00000000);
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

void func_438(var uParam0)
{
	if (!func_21(&(uParam0->f_15)))
	{
		func_20(&(uParam0->f_15), 0x00000000, 0x00000000);
	}
	else if (func_19(&(uParam0->f_15), 0x000000FA, 0x00000000))
	{
		func_8(&(uParam0->f_15));
		func_439(0x00000000);
	}
}

void func_439(bool bParam0)
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

int func_440(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0x00000000;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x117658E336116132(uParam0->f_25);
	if (iVar3 != func_11() && func_5(iVar3, 0x00000000, 0x00000001))
	{
		Var2 = { func_160(iVar3) };
		iVar1 = func_443(uParam0, uParam0->f_25);
		if (func_442(Var2))
		{
			switch (iVar1)
			{
				case 0x00000000:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_441(uParam0, iVar0, 0x00000002);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_441(uParam0, iVar0, 0x00000001);
					}
					break;
				
				case 0x00000002:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_441(uParam0, iVar0, 0x00000000);
						}
					}
					else
					{
						iVar4 = 0x00000001;
						func_441(uParam0, iVar0, 0x00000000);
					}
					break;
				
				case 0x00000001:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar4 = 0x00000001;
							func_441(uParam0, iVar0, 0x00000000);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_441(uParam0, iVar0, 0x00000000);
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

void func_441(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_442(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 0x0000000D);
}

var func_443(var uParam0, int iParam1)
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_444(int iParam0, bool bParam1, int iParam2)
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

void func_445(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x0000000A))
	{
		unk_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_23);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_21), 0x0000000A);
	}
}

void func_446()
{
	if (Global_180606 != 0x00000000)
	{
		Global_180606 = 0x00000000;
	}
}

void func_447(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_11())
		{
			if (func_5(iVar2, 0x00000000, 0x00000001))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 0xFFFFFFFF)
				{
					iVar1 = func_449(uParam0->f_26[iVar0 /*2*/], 0x00000000, iParam2);
					func_448(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_184507[iVar0 /*876*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_448(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_449(int iParam0, bool bParam1, int iParam2)
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

void func_450(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_466() && iParam4 < func_465())
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
				func_464("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_464(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_6C == 0x00000006)
			{
				func_464("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000041);
			}
			unk_0x3CAEA85DA607305E(0xFFFFFFFF);
			func_464("");
			if (uParam3->f_6C == 0x00000006)
			{
				func_464("");
			}
			else
			{
				func_464(&sParam5);
			}
			func_455(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_454(uParam3))
			{
				func_453("DPAD_FRIEND");
			}
			else if (func_452(uParam3))
			{
				func_453("DPAD_FRIEND");
			}
			else if (func_451(uParam3))
			{
				func_453("DPAD_CREW");
			}
			else
			{
				func_453("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_451(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000006);
}

bool func_452(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000005);
}

void func_453(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_454(var uParam0)
{
	if (func_452(uParam0) && func_451(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_455(var uParam0, int iParam1)
{
	if (func_463(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x00000079);
	}
	else if (func_459(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x0000007A);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1B, 0x0000000F) && iParam1 > 0xFFFFFFFF) && iParam1 < 0x00000020) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam1 /*421*/].f_19D, 0x00000000))
	{
		unk_0x3CAEA85DA607305E(0x0000007B);
	}
	else
	{
		if (func_456())
		{
			uParam0->f_24 = 0x00000000;
		}
		unk_0x1200CC973A2399C8(uParam0->f_24);
	}
}

int func_456()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_457() || func_229())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_457()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_229();
	}
	return func_458(Global_440000.f_2F9AE);
}

int func_458(int iParam0)
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

int func_459(int iParam0)
{
	if ((func_5(iParam0, 0x00000000, 0x00000001) && func_460()) && func_51(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_460()
{
	if (func_78(unk_0xD803B885F5E47A62()) || func_462())
	{
		if (!func_461(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_461(int iParam0)
{
	if (func_435(iParam0) == 0x000000EC || func_435(iParam0) == 0x00000096)
	{
		return func_67(iParam0);
	}
	return 0x00000000;
}

int func_462()
{
	switch (func_44(unk_0xD803B885F5E47A62()))
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

int func_463(int iParam0)
{
	if (func_456())
	{
		if (func_5(iParam0, 0x00000000, 0x00000001))
		{
			return func_118(iParam0);
		}
	}
	if ((func_5(iParam0, 0x00000000, 0x00000001) && func_460()) && func_41(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_464(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_465()
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

int func_466()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_18052B)
	{
		iVar0 = 0x00000010;
	}
	return iVar0;
}

void func_467(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_466() && iParam3 < func_465())
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
					func_464("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_6C == 0x00000006 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_453(sParam16);
				}
				else
				{
					func_464(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_6C == 0x00000006)
				{
					func_464("");
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
				if (func_493())
				{
					func_464("");
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
						func_453(&(uParam2->f_68));
					}
					else
					{
						func_464("");
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
					func_464("");
				}
				if (uParam2->f_6C == 0x00000006)
				{
					func_464("");
				}
				else
				{
					func_464(&sParam4);
				}
				func_455(uParam2, iParam0);
				if (iParam12 == 0x00000001 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_464("");
					func_464("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_454(uParam2))
				{
					func_453("DPAD_FRIEND");
				}
				else if (func_452(uParam2))
				{
					func_453("DPAD_FRIEND");
				}
				else if (func_451(uParam2))
				{
					func_453("DPAD_CREW");
				}
				else
				{
					func_453("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_468(int iParam0)
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

int func_469(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000074;
	if ((!bParam1 && func_78(iParam0)) && !func_76(iParam0))
	{
		iVar0 = func_470();
	}
	iVar1 = func_225(iParam0);
	if (!iVar1 == 0xFFFFFFFF)
	{
		return func_223(iVar1);
	}
	return iVar0;
}

int func_470()
{
	return 0x00000015;
}

char* func_471(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_472(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_476(iParam3))
	{
		*fParam1 = (func_473(iParam3, iParam2) / 10f);
		return 0x00000001;
	}
	if (func_468(iParam3))
	{
		*fParam1 = (func_473(iParam3, iParam2) / 1000f);
		return 0x00000001;
	}
	*uParam0 = iParam2;
	return 0x00000000;
}

float func_473(int iParam0, int iParam1)
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
				return func_475(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 0x00000002:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_474(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_474(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_475(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_476(int iParam0)
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

int func_477(int iParam0)
{
	int iVar0;
	
	iVar0 = func_480(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_478(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_478(int iParam0, bool bParam1)
{
	if (!func_5(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_480(iParam0) != 0xFFFFFFFF)
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
	if (func_479(iParam0))
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

int func_479(int iParam0)
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

int func_480(int iParam0)
{
	int iVar0;
	
	if (!func_5(iParam0, 0x00000000, 0x00000001))
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
			func_481(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_481(int iParam0)
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
	func_482(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_482(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_483(int iParam0)
{
	char cVar0[32];
	
	if (func_5(iParam0, 0x00000000, 0x00000001))
	{
		Global_265942 = { func_160(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_442(Global_265942))
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
		if (func_487(&Global_265942))
		{
			Global_2658FC = { func_485(iParam0) };
			func_484(&Global_2658FC, &cVar0);
		}
	}
	return cVar0;
}

void func_484(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 0x00000023, sParam1);
}

struct<35> func_485(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_486(iParam0))
	{
		return Global_14088D[unk_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_160(iParam0) };
	unk_0xD9DA83C40D038174(&Var1, 0x00000023, &Var0);
	return Var1;
}

int func_486(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_487(var uParam0)
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

int func_488(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000001B)
	{
		if ((func_77(iParam0) || func_491(iParam0)) || func_490(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_489(iParam0))
	{
		return 0x00000000;
	}
	if ((!func_496(iParam0) && Global_25033E[iParam0 /*421*/].f_EC == 0xFFFFFFFF) && !func_12(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_489(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 0x00000016);
}

bool func_490(int iParam0)
{
	if (func_77(iParam0))
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008);
}

int func_491(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A) || unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000009));
	}
	return 0x00000000;
}

int func_492(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	if (func_203(iParam0, 0x00000000))
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

int func_493()
{
	switch (func_44(unk_0xD803B885F5E47A62()))
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
	switch (func_435(unk_0xD803B885F5E47A62()))
	{
		case 0x00000083:
		case 0x0000008C:
		case 0x0000008A:
		case 0x00000092:
			return 0x00000001;
			break;
	}
	if (func_76(unk_0xD803B885F5E47A62()))
	{
		switch (func_44(unk_0xD803B885F5E47A62()))
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
	if (func_461(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_494(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF && func_36(Global_18D84D[iParam0 /*615*/].f_B.f_21))
	{
		return 0x00000001;
	}
	if (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF)
	{
		if (func_36(Global_18D84D[iParam0 /*615*/].f_B.f_20))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_495(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_5(unk_0x117658E336116132(iVar0), 0x00000000, 0x00000001))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_203(iVar1, 0x00000000))
			{
				if ((func_496(iVar1) || Global_25033E[iVar1 /*421*/].f_EC != 0xFFFFFFFF) || func_12(iVar1))
				{
					if (func_664(iVar1, iParam1, 0x00000000))
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

int func_496(int iParam0)
{
	if (func_5(iParam0, 0x00000000, 0x00000001))
	{
		if (func_5(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_44(iParam0) == 0x000000E9)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_497(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_498(bool bParam0)
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

void func_499()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
	{
		if (func_79())
		{
			func_500();
		}
	}
}

void func_500()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 != 0x00000000)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			func_501(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
		}
		iVar0++;
	}
}

void func_501(var uParam0, int iParam1)
{
	func_502(uParam0, iParam1);
}

void func_502(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_503()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000000) && func_79())
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001) && func_79())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_504()
{
	if (func_79())
	{
		if (func_505(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_505(int iParam0)
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

int func_506()
{
	if (func_79())
	{
		if (func_507(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_507(int iParam0)
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

void func_508(int iParam0)
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

int func_509(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
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
	bVar3 = func_556(iParam1);
	fVar4 = func_555();
	iVar5 = 0xFFFFFFFF;
	if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
	{
		if (func_554())
		{
			if (func_553() > 0x00000000 && Global_18052B)
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
		if (!func_536())
		{
			func_535(iParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001A))
	{
		func_535(iParam0, uParam2, 0x00000001);
		return 0x00000000;
	}
	if (!func_21(&(uParam2->f_13)))
	{
		if (func_553() == 0x00000001)
		{
			func_534(bVar3, iParam0, 0x00000000);
			func_20(&(uParam2->f_13), 0x00000000, 0x00000000);
			func_535(iParam0, uParam2, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 0x00000005);
		}
	}
	if (func_21(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(0x0000000A);
		if (func_19(&(uParam2->f_13), 0x00002710, 0x00000000) || (func_553() == 0x00000000 && !bParam5))
		{
			func_535(iParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
		else
		{
			if (bVar2 == 0x00000000)
			{
				func_533();
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
					func_533();
					if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(0x00000012);
				}
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (func_534(bVar3, iParam0, 0x00000000))
				{
					func_497(iParam0, 0x00000000, 0x00000000);
					sVar1 = func_531(iParam1, &(Global_440000.f_2F9B5), bParam4);
					Var0 = { func_529(iParam1) };
					if (bParam4)
					{
						func_526(iParam0, sVar1, "", 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
					}
					else if (iParam1 == 0x0000001B)
					{
						func_519(iParam0, func_523(uParam2), func_520(uParam2), 0xFFFFFFFF);
					}
					else if (iParam1 == 0x0000001C)
					{
						sVar6 = func_517(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar6 = sParam6;
						}
						func_515(iParam0, sVar6, func_516(), 0xFFFFFFFF);
					}
					else if (func_456())
					{
						uParam2->f_22 = Global_18052A;
						func_526(iParam0, sVar1, &Var0, 0x00000001, 0xFFFFFFFF, Global_18052A, 0x00000001);
					}
					else if (bVar2)
					{
						iVar5 = func_510(iParam1);
						uParam2->f_22 = Global_18052A;
						func_526(iParam0, sVar1, "", 0x00000000, iVar5, Global_18052A, 0x00000001);
					}
					else
					{
						iVar5 = func_510(iParam1);
						func_526(iParam0, sVar1, &Var0, 0x00000001, iVar5, 0xFFFFFFFF, 0x00000001);
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

int func_510(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (func_514())
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
			if (func_513(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000014;
			}
			if (func_512(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000013;
			}
			break;
	}
	if (func_511(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 0x00000002;
	}
	if (func_183())
	{
		iVar0 = 0x00000014;
	}
	return iVar0;
}

bool func_511(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000004;
}

bool func_512(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

bool func_513(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_514()
{
	return Global_440000.f_1 == 0x00000000;
}

void func_515(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_453(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_453("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_516()
{
	switch (func_44(unk_0xD803B885F5E47A62()))
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

char* func_517(var uParam0)
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
	switch (func_44(unk_0xD803B885F5E47A62()))
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
			if (func_39())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 0x00000097:
			if (func_50(0x00000001))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 0x00000098:
			return "PIM_MAGM204";
			break;
		
		case 0x00000099:
			if (func_50(0x00000001))
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
			if (func_518(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_518(int iParam0)
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

void func_519(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_453(sParam1);
		}
		else if (func_435(unk_0xD803B885F5E47A62()) == 0x00000085)
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
		func_453("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_520(var uParam0)
{
	int iVar0;
	
	iVar0 = func_435(unk_0xD803B885F5E47A62());
	if (func_522())
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
			switch (func_521())
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

int func_521()
{
	if (func_435(unk_0xD803B885F5E47A62()) == 0x00000085)
	{
		return Global_26B66F.f_13B5;
	}
	return 0xFFFFFFFF;
}

bool func_522()
{
	return Global_184488;
}

char* func_523(var uParam0)
{
	int iVar0;
	
	iVar0 = func_435(unk_0xD803B885F5E47A62());
	if (func_522())
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
			if (func_525() == 0x00000000)
			{
				return "CPC_TILEL";
			}
			else if (func_525() == 0x00000001)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 0x00000085:
			switch (func_521())
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
			if (func_524() == 0x00000001)
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

int func_524()
{
	return Global_26B66F.f_13B8;
}

int func_525()
{
	if (func_435(unk_0xD803B885F5E47A62()) == 0x00000084)
	{
		return Global_26B66F.f_13B3;
	}
	return 0xFFFFFFFF;
}

void func_526(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_464(sParam1);
		}
		else if (iParam5 != 0xFFFFFFFF)
		{
			unk_0x7ACC3006A87F8B39(sParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_453(sParam1);
		}
		if (func_554() && iParam6)
		{
			if (func_528())
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
			func_453(sParam2);
		}
		if (iParam4 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_527(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(0x000000A6);
			}
			else if (func_185())
			{
				unk_0x3CAEA85DA607305E(0x000000DC);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_527(int iParam0)
{
	if (func_513(iParam0) || func_512(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_528()
{
	return Global_18052B;
}

struct<4> func_529(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_530(unk_0xD803B885F5E47A62()) || func_511(unk_0xD803B885F5E47A62()))
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
	if (func_456() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_CC, 16);
	}
	return Var0;
}

bool func_530(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000005;
}

char* func_531(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 0x00000014 && (!func_456() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_532();
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

char* func_532()
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

void func_533()
{
	Global_A56F = 0x00000001;
}

bool func_534(bool bParam0, int iParam1, bool bParam2)
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

void func_535(int iParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_21), 0x00000007);
	Global_180529 = 0x00000000;
	func_446();
	Global_180528 = 0x00000000;
	uParam1->f_1B = 0x00000000;
	if (bParam2)
	{
		if (func_21(&(uParam1->f_13)))
		{
			func_8(&(uParam1->f_13));
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

int func_536()
{
	if (func_552())
	{
		return 0x00000000;
	}
	if (func_551())
	{
		return 0x00000000;
	}
	if (!func_549())
	{
		return 0x00000000;
	}
	if (!func_547())
	{
		return 0x00000000;
	}
	if (func_546(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000000;
	}
	if (func_553() == 0x00000002)
	{
		return 0x00000000;
	}
	if (Global_26B66F.f_11BF)
	{
		return 0x00000000;
	}
	if (func_545())
	{
		return 0x00000000;
	}
	else if (!func_542(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && Global_1403E4[0x00000000 /*4*/] > 0x00000000)
	{
		return 0x00000000;
	}
	if (((func_541(0x00000001) || func_539(0x00000001)) || Global_56C3.f_7C) || Global_56C3)
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (func_538() && Global_19DEEC == 0x00000002)
	{
		return 0x00000000;
	}
	if (func_235(unk_0xD803B885F5E47A62()) && !func_538())
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
	if (func_193(0x00000000))
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
	if (func_537(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if ((Global_14E899 || Global_14E89A) || Global_14E89B)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_537(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_4, 0x00000006);
}

bool func_538()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 0x0000000C) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000000));
}

int func_539(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_540(unk_0x16F2683693E537C9()))
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

int func_540(int iParam0)
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

bool func_541(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

int func_542(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_543(iParam0))
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

bool func_543(int iParam0)
{
	return func_544(iParam0);
}

bool func_544(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

bool func_545()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

bool func_546(int iParam0, int iParam1)
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

int func_547()
{
	if (func_548() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_548()
{
	return Global_1406D3.f_12;
}

int func_549()
{
	if (func_550())
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

bool func_550()
{
	return Global_1406B8;
}

bool func_551()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000005;
}

bool func_552()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_553()
{
	return Global_150392.f_44;
}

int func_554()
{
	if (Global_18052A > 0x00000010)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_555()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_556(int iParam0)
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

int func_557()
{
	if (func_558(unk_0xD803B885F5E47A62()))
	{
		return Global_1420BD;
	}
	return 0x00000000;
}

int func_558(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_203(iParam0, 0x00000000))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0x00000000;
}

int func_559()
{
	if (func_557())
	{
		return 0x00000001;
	}
	if (func_490(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_522())
	{
		return 0x00000001;
	}
	if (func_78(unk_0xD803B885F5E47A62()))
	{
		switch (func_435(unk_0xD803B885F5E47A62()))
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
				if (!func_560(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000081:
				if (!func_560(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x000000AE:
				if (!func_560(unk_0xD803B885F5E47A62()))
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

bool func_560(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000004);
}

int func_561(int iParam0)
{
	if (iParam0 == 0x0000001C)
	{
		if ((func_78(unk_0xD803B885F5E47A62()) && !func_76(unk_0xD803B885F5E47A62())) && !func_461(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x0000001B)
	{
		if (func_45(unk_0xD803B885F5E47A62(), 0x00000000) && func_76(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
		if (func_63(unk_0xD803B885F5E47A62()) == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_562(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_435(unk_0xD803B885F5E47A62());
		Global_198D8B = iVar0;
		Global_198D8B.f_1 = iParam0;
		if (func_137() != func_11())
		{
			Global_198D8B.f_2 = func_328(func_137());
			Global_198D8B.f_3 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198D8B.f_2), &(Global_198D8B.f_3));
		}
		Global_198D8B.f_7 = unk_0xDD0E7998AE8AD485();
		Global_198D8B.f_1C = func_423(unk_0xD803B885F5E47A62());
		Global_198D8B.f_D = 0x00000000;
		Global_198D8B.f_E = 0x00000000;
		if (func_240(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			Global_198D8B.f_17 = func_426(func_50(0x00000001));
		}
	}
	else
	{
		iVar0 = func_44(unk_0xD803B885F5E47A62());
	}
	if (iParam2 || func_47(iVar0))
	{
		if (iParam3 != 0xFFFFFFFF && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_198C86 = iVar0;
		if (func_104(iVar0))
		{
			Global_198C86.f_1 = 0x00000004;
		}
		else if (func_419(iVar0))
		{
			Global_198C86.f_1 = 0x00000005;
		}
		else if (func_37(iVar0, 0x00000000))
		{
			Global_198C86.f_1 = 0x00000002;
			if (func_99(iVar0))
			{
				Global_198C86.f_1 = 0x00000003;
			}
		}
		else
		{
			Global_198C86.f_1 = 0x00000001;
		}
		if (func_137() != func_11())
		{
			Global_198C86.f_4 = func_328(func_137());
			Global_198C86.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198C86.f_6), &(Global_198C86.f_7));
		}
		Global_198C86.f_9 = unk_0xDD0E7998AE8AD485();
		if (iVar0 == 0x00000094 || iVar0 == 0x000000B3)
		{
			Global_198C86.f_1B = 0x00000001;
			Global_198C86.f_1C = 0x00000001;
		}
		if (iParam0 != 0xFFFFFFFF)
		{
			Global_198C86.f_1A = iParam0;
		}
		if (iParam1 != 0x00000000)
		{
			Global_198C86.f_28 = func_131(iParam1);
			Global_198C86.f_29 = func_584();
			Global_198C86.f_2A = func_285(unk_0xD803B885F5E47A62(), iParam1);
			Global_198C86.f_2C = func_415(unk_0xD803B885F5E47A62(), iParam1);
		}
		if (!func_117() || iVar0 != 0x000000C0)
		{
			Global_198C86.f_35 = 0x00000000;
		}
	}
	else if (func_97(iVar0))
	{
		if (iVar0 == 0x000000E1 || iVar0 == 0x000000E2)
		{
			Global_198CFB = iParam0 + 1;
		}
		else if (iVar0 == 0x000000E3)
		{
			Global_198CFB = iParam0 + 1;
		}
		else
		{
			Global_198CFB = func_583(unk_0xD803B885F5E47A62());
		}
		switch (iVar0)
		{
			case 0x000000E1:
				if (func_93(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					Global_198CFB.f_1 = 0x00000000;
				}
				else
				{
					Global_198CFB.f_1 = 0x00000001;
				}
				break;
			
			case 0x000000E2:
				Global_198CFB.f_1 = 0x00000002;
				break;
			
			case 0x000000E3:
				Global_198CFB.f_1 = 0x00000003;
				break;
		}
		Global_198CFB.f_15 = 0x00000001;
		Global_198CFB.f_16 = 0x00000001;
		if (func_137() != func_11())
		{
			Global_198CFB.f_4 = func_328(func_137());
			Global_198CFB.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198CFB.f_4), &(Global_198CFB.f_5));
		}
		Global_198CFB.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 0xFFFFFFFF)
		{
			Global_198CFB.f_14 = iParam0;
		}
	}
	else if (func_55(iVar0))
	{
		if (iParam3 != 0xFFFFFFFF && iParam2)
		{
		}
		Global_198CBC = iVar0;
		Global_198C86.f_1 = 0x00000001;
		if (func_137() != func_11())
		{
			Global_198CBC.f_4 = func_328(func_137());
			Global_198CBC.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198CBC.f_6), &(Global_198CBC.f_7));
		}
		Global_198CBC.f_9 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 0xFFFFFFFF)
		{
			Global_198CBC.f_15 = iParam0;
		}
	}
	else if (func_96(iVar0))
	{
		Global_198D27 = iVar0;
		Global_198D27.f_1 = iParam0;
		Global_198D27.f_15 = 0x00000001;
		Global_198D27.f_16 = 0x00000001;
		if (func_137() != func_11())
		{
			Global_198D27.f_4 = func_328(func_137());
			Global_198D27.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198D27.f_4), &(Global_198D27.f_5));
		}
		Global_198D27.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 0xFFFFFFFF)
		{
			Global_198D27.f_14 = iParam0;
		}
		Global_198D27.f_1B = func_408(func_27(), 0x00000005);
		Global_198D27.f_1C = func_426(func_582(unk_0xD803B885F5E47A62()));
		Global_198D27.f_1D = func_28(0x000017DB, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_1E = func_28(0x000017D7, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_1F = func_28(0x000017D8, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_20 = func_28(0x000017DA, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_21 = func_28(0x000017D9, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_22 = func_28(0x000017DC, 0xFFFFFFFF, 0x00000000);
		Global_198D27.f_7 = func_425();
		Global_198D27.f_33 = func_426(bParam4);
	}
	else if (func_95(iVar0))
	{
		Global_198D5D = iVar0;
		Global_198D5D.f_1 = iParam0;
		Global_198D5D.f_15 = 0x00000001;
		Global_198D5D.f_16 = 0x00000001;
		if (func_137() != func_11())
		{
			Global_198D5D.f_4 = func_328(func_137());
			Global_198D5D.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198D5D.f_4), &(Global_198D5D.f_5));
		}
		Global_198D5D.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 0xFFFFFFFF)
		{
			Global_198D5D.f_14 = iParam0;
		}
		Global_198D5D.f_18 = func_28(0x0000180D, 0xFFFFFFFF, 0x00000000);
		Global_198D5D.f_19 = func_28(0x00001812, 0xFFFFFFFF, 0x00000000);
		Global_198D5D.f_1A = func_28(0x00001813, 0xFFFFFFFF, 0x00000000);
		Global_198D5D.f_1B = func_426((((func_367() || func_366()) || func_365()) || func_364(unk_0xD803B885F5E47A62())));
		Global_198D5D.f_1C = func_28(0x00001814, 0xFFFFFFFF, 0x00000000);
		Global_198D5D.f_1D = func_426(func_363());
		Global_198D5D.f_1F = 0x00000000;
		Global_198D5D.f_1E = 0x00000000;
		Global_198D5D.f_20 = 0x00000000;
		Global_198D5D.f_21 = 0x00000000;
		Global_198D5D.f_22 = 0x00000000;
		Global_198D5D.f_10 = 0x00000000;
		Global_198D5D.f_7 = func_425();
	}
	else if (((((((((iVar0 == 0x000000FA || iVar0 == 0x000000EE) || iVar0 == 0x000000F2) || iVar0 == 0x000000F4) || iVar0 == 0x000000F8) || iVar0 == 0x000000F1) || iVar0 == 0x000000EF) || iVar0 == 0x000000F0) || iVar0 == 0x000000F9) || (iVar0 == 0x000000ED && func_91(func_92(unk_0xD803B885F5E47A62()))))
	{
		Global_198DE5 = iVar0;
		Global_198DE5.f_1 = iParam0;
		Global_198DE5.f_15 = 0x00000001;
		Global_198DE5.f_16 = 0x00000001;
		Global_198DE5.f_7 = func_425();
		if (func_137() != func_11())
		{
			Global_198DE5.f_4 = func_328(func_137());
			Global_198DE5.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198DE5.f_4), &(Global_198DE5.f_5));
		}
		if (func_137() != 0xFFFFFFFF)
		{
			Global_198DE5.f_11 = func_360(func_137());
		}
		Global_198DE5.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198DE5.f_1C = func_423(unk_0xD803B885F5E47A62());
		Global_198DE5.f_10 = 0x00000000;
		Global_198DE5.f_18 = 0x00000000;
		Global_198DE5.f_17 = 0x00000000;
		if (func_240(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			Global_198DE5.f_21 = func_426(func_50(0x00000001));
		}
	}
	else if (iVar0 == 0x000000ED)
	{
		Global_198DAF = iVar0;
		Global_198DAF.f_1 = iParam0;
		Global_198DAF.f_15 = 0x00000001;
		Global_198DAF.f_16 = 0x00000001;
		Global_198DAF.f_7 = func_425();
		Global_198DAF.f_18 = 0x00000000;
		Global_198DAF.f_17 = 0x00000000;
		Global_198DAF.f_10 = 0x00000000;
		if (func_137() != func_11())
		{
			Global_198DAF.f_4 = func_328(func_137());
			Global_198DAF.f_5 = func_327(func_137());
		}
		Global_198DAF.f_1C = func_423(unk_0xD803B885F5E47A62());
		if (Global_198DAF.f_1C)
		{
			Global_198DAF.f_1D = func_354(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_198DAF.f_1D = 0x00000000;
		}
		Global_198DAF.f_1E = func_338(unk_0xD803B885F5E47A62(), 0x00000004, 0xFFFFFFFF);
		Global_198DAF.f_1F = func_357(unk_0xD803B885F5E47A62());
		Global_198DAF.f_20 = func_426(func_337(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_21 = func_426(func_336(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_22 = func_426(func_335(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_23 = func_426(func_334(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_24 = func_333(unk_0xD803B885F5E47A62());
		Global_198DAF.f_25 = func_332(unk_0xD803B885F5E47A62());
		Global_198DAF.f_27 = func_331(unk_0xD803B885F5E47A62());
		if (func_240(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			Global_198DAF.f_29 = func_426(func_50(0x00000001));
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198DAF.f_4), &(Global_198DAF.f_5));
		}
		Global_198DAF.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198DAF.f_1C = func_423(unk_0xD803B885F5E47A62());
	}
	else if (func_89(iVar0))
	{
		Global_198E39 = iVar0;
		Global_198E39.f_1 = func_93(unk_0xD803B885F5E47A62());
		Global_198E39.f_2 = func_434();
		Global_198E39.f_3 = func_433();
		Global_198E39.f_4 = func_328(func_137());
		Global_198E39.f_5 = func_327(func_137());
		Global_198E39.f_7 = func_425();
		Global_198E39.f_8 = unk_0xDD0E7998AE8AD485();
		if (func_137() != 0xFFFFFFFF)
		{
			Global_198E39.f_11 = func_360(func_137());
		}
		Global_198E39.f_15 = 0x00000001;
		Global_198E39.f_16 = 0x00000001;
		Global_198E39.f_19 = iParam0;
		Global_198E39.f_1B = func_426(func_325(unk_0xD803B885F5E47A62()));
		Global_198E39.f_1C = func_322(0x00000015, 0xFFFFFFFF);
	}
	else if (func_88(iVar0))
	{
		Global_198E84 = Global_C0073.f_1;
		Global_198E84.f_2 = Global_C0073;
		Global_198E84.f_6 = func_328(func_137());
		Global_198E84.f_7 = func_327(func_137());
		if (func_240(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			Global_198E84.f_8 = func_426(func_50(0x00000001));
		}
		if (func_137() != 0xFFFFFFFF)
		{
			Global_198E84.f_9 = func_360(func_137());
		}
		Global_198E84.f_A = func_425();
		Global_198E84.f_13 = 0x00000001;
		Global_198E84.f_14 = 0x00000001;
		Global_198E84.f_15 = 0x00000000;
		Global_198E84.f_16 = 0x00000000;
		Global_198E84.f_17 = 0x00000000;
		Global_19FC3D = unk_0xDD0E7998AE8AD485();
	}
	else
	{
		if (func_137() != func_11())
		{
			Global_198C74 = func_328(func_137());
			Global_198C74.f_1 = func_327(func_137());
		}
		Global_198C74.f_5 = unk_0xDD0E7998AE8AD485();
		Global_198C74.f_D = func_581();
		Global_198C74.f_F = 0x00000000;
		if (func_135(0x00000001))
		{
			if (func_29() == func_137())
			{
				Global_198C74.f_F = 0x00000001;
			}
		}
		if (func_580())
		{
			Global_198CFB.f_1C = 0x00000001;
		}
		if (((((func_579() || func_578()) || func_577()) || func_576()) || func_575()) || func_574(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_1E = 0x00000001;
		}
		if (func_572(func_573(0x8FD54EBB)))
		{
			Global_198CFB.f_20 = 0x00000001;
		}
		if (func_566(func_571(joaat("caddy"))))
		{
			Global_198CFB.f_1F = 0x00000001;
		}
		if (func_407(unk_0xD803B885F5E47A62()) || func_406(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_1D = 0x00000001;
		}
		if (func_403(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_21 = 0x00000001;
			Global_198CFB.f_22 = 0x00000001;
		}
		if (func_404(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_24 = 0x00000001;
		}
		if (func_401(0x00000000, unk_0xD803B885F5E47A62()) == 0x00000001)
		{
			Global_198CFB.f_23 = 0x00000001;
		}
		if (func_565(unk_0xD803B885F5E47A62(), 0x00000003, &uVar1))
		{
			Global_198CFB.f_25 = 0x00000001;
		}
		if (func_565(unk_0xD803B885F5E47A62(), 0x00000007, &uVar1))
		{
			Global_198CFB.f_26 = 0x00000001;
		}
		if (func_564(unk_0xD803B885F5E47A62()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000006)
			{
				iVar3 = func_563(unk_0xD803B885F5E47A62(), iVar2);
				if (func_282(unk_0xD803B885F5E47A62(), iVar3, 0x00000000))
				{
					Global_198CFB.f_27 = 0x00000001;
				}
				if (func_282(unk_0xD803B885F5E47A62(), iVar3, 0x00000002))
				{
					Global_198CFB.f_28 = 0x00000001;
				}
				if (func_282(unk_0xD803B885F5E47A62(), iVar3, 0x00000001))
				{
					Global_198CFB.f_29 = 0x00000001;
				}
				iVar2++;
			}
		}
	}
}

int func_563(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000006)
	{
		return 0x00000000;
	}
	if (func_274(Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/]))
	{
		uVar0 = Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/];
	}
	return uVar0;
}

int func_564(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000005)
	{
		if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] != 0x00000000)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_565(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_11())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (iParam1 == func_401(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_566(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_322(0x0000000B, 0xFFFFFFFF) == 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		iVar0 = 0xFFFFFFFF;
		iVar1 = (iParam0 + func_381(0x0000000B));
		func_380(iVar1, &iVar0, 0x00000001);
		iVar2 = func_322(func_568(iVar1), 0xFFFFFFFF);
		if (iVar2 > 0x00000000)
		{
		}
		else if (iVar0 >= 0x00000000)
		{
		}
		if (iVar0 >= 0x00000000)
		{
			iVar3 = func_28(func_567(0x00000004, iVar0), 0xFFFFFFFF, 0x00000000);
			if (iVar2 > 0x00000000)
			{
			}
			if (iVar3 != 0x00000000)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_567(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000065D;
				
				case 0x00000001:
					return 0x00000664;
				
				case 0x00000002:
					return 0x0000066B;
				
				case 0x00000003:
					return 0x00000672;
				
				case 0x00000004:
					return 0x00000679;
				
				case 0x00000005:
					return 0x00000680;
				
				case 0x00000006:
					return 0x00000687;
				
				case 0x00000007:
					return 0x0000068E;
				
				case 0x00000008:
					return 0x00000695;
				
				case 0x00000009:
					return 0x0000069C;
				
				case 0x0000000A:
					return 0x000006A3;
				
				case 0x0000000B:
					return 0x000006A9;
				
				case 0x0000000C:
					return 0x000006AF;
				
				case 0x0000000D:
					return 0x000006B5;
				
				case 0x0000000E:
					return 0x00000703;
				
				case 0x0000000F:
					return 0x0000070A;
				
				case 0x00000010:
					return 0x00000711;
				
				case 0x00000011:
					return 0x00000718;
				
				case 0x00000012:
					return 0x0000071F;
				
				case 0x00000013:
					return 0x00000726;
				
				case 0x00000014:
					return 0x0000072D;
				
				case 0x00000015:
					return 0x00000734;
				
				case 0x00000016:
					return 0x0000073B;
				
				case 0x00000017:
					return 0x00000742;
				
				case 0x00000018:
					return 0x00000748;
				
				case 0x00000019:
					return 0x0000074E;
				
				case 0x0000001A:
					return 0x00000875;
				
				case 0x0000001B:
					return 0x0000087C;
				
				case 0x0000001C:
					return 0x00000883;
				
				case 0x0000001D:
					return 0x0000088A;
				
				case 0x0000001E:
					return 0x00000891;
				
				case 0x0000001F:
					return 0x00000898;
				
				case 0x00000020:
					return 0x0000089F;
				
				case 0x00000021:
					return 0x000008A6;
				
				case 0x00000022:
					return 0x000008AD;
				
				case 0x00000023:
					return 0x000008B4;
				
				case 0x00000024:
					return 0x000008BB;
				
				case 0x00000025:
					return 0x000008C1;
				
				case 0x00000026:
					return 0x000008C7;
				
				case 0x00000027:
					return 0x00000B0C;
				
				case 0x00000028:
					return 0x00000B13;
				
				case 0x00000029:
					return 0x00000B1A;
				
				case 0x0000002A:
					return 0x00000B21;
				
				case 0x0000002B:
					return 0x00000B28;
				
				case 0x0000002C:
					return 0x00000B2F;
				
				case 0x0000002D:
					return 0x00000B36;
				
				case 0x0000002E:
					return 0x00000B3D;
				
				case 0x0000002F:
					return 0x00000B44;
				
				case 0x00000030:
					return 0x00000B4B;
				
				case 0x00000031:
					return 0x00000B52;
				
				case 0x00000032:
					return 0x00000B58;
				
				case 0x00000033:
					return 0x00000B5E;
				
				case 0x00000034:
					return 0x00000B88;
				
				case 0x00000035:
					return 0x00000B8F;
				
				case 0x00000036:
					return 0x00000B96;
				
				case 0x00000037:
					return 0x00000B9D;
				
				case 0x00000038:
					return 0x00000BA4;
				
				case 0x00000039:
					return 0x00000BAB;
				
				case 0x0000003A:
					return 0x00000BB2;
				
				case 0x0000003B:
					return 0x00000BB9;
				
				case 0x0000003C:
					return 0x00000BC0;
				
				case 0x0000003D:
					return 0x00000BC7;
				
				case 0x0000003E:
					return 0x00000BCE;
				
				case 0x0000003F:
					return 0x00000BD4;
				
				case 0x00000040:
					return 0x00000BDA;
				
				case 0x00000041:
					return 0x00000CA3;
				
				case 0x00000042:
					return 0x00000CAB;
				
				case 0x00000043:
					return 0x00000CB3;
				
				case 0x00000044:
					return 0x00000CBB;
				
				case 0x00000045:
					return 0x00000CC3;
				
				case 0x00000046:
					return 0x00000CCB;
				
				case 0x00000047:
					return 0x00000CD3;
				
				case 0x00000048:
					return 0x00000CDB;
				
				case 0x00000049:
					return 0x00000CE3;
				
				case 0x0000004A:
					return 0x00000CEB;
				
				case 0x0000004B:
					return 0x00000CF3;
				
				case 0x0000004C:
					return 0x00000CFB;
				
				case 0x0000004D:
					return 0x00000D03;
				
				case 0x0000004E:
					return 0x00000D0B;
				
				case 0x0000004F:
					return 0x00000D13;
				
				case 0x00000050:
					return 0x00000D1B;
				
				case 0x00000051:
					return 0x00000D23;
				
				case 0x00000052:
					return 0x00000D2B;
				
				case 0x00000053:
					return 0x00000D33;
				
				case 0x00000054:
					return 0x00000D3B;
				
				case 0x00000055:
					return 0x00000D43;
				
				case 0x00000056:
					return 0x00000D4A;
				
				case 0x00000057:
					return 0x00000D51;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000058:
					return 0x00000FBF;
				
				case 0x00000059:
					return 0x00000FC7;
				
				case 0x0000005A:
					return 0x00000FCF;
				
				case 0x0000005B:
					return 0x00000FD7;
				
				case 0x0000005C:
					return 0x00000FDF;
				
				case 0x0000005D:
					return 0x00000FE7;
				
				case 0x0000005E:
					return 0x00000FEF;
				
				case 0x0000005F:
					return 0x00000FF7;
				
				case 0x00000060:
					return 0x00000FFF;
				
				case 0x00000061:
					return 0x00001007;
				
				case 0x00000062:
					return 0x0000100F;
				
				case 0x00000063:
					return 0x00001017;
				
				case 0x00000064:
					return 0x0000101F;
				
				case 0x00000065:
					return 0x00001027;
				
				case 0x00000066:
					return 0x0000102F;
				
				case 0x00000067:
					return 0x00001037;
				
				case 0x00000068:
					return 0x0000103F;
				
				case 0x00000069:
					return 0x00001047;
				
				case 0x0000006A:
					return 0x0000104F;
				
				case 0x0000006B:
					return 0x00001057;
				
				case 0x0000006C:
					return 0x0000105F;
				
				case 0x0000006D:
					return 0x00001067;
				
				case 0x0000006E:
					return 0x0000106F;
				
				case 0x0000006F:
					return 0x00001077;
				
				case 0x00000070:
					return 0x0000107F;
				
				case 0x00000071:
					return 0x00001087;
				
				case 0x00000072:
					return 0x0000108F;
				
				case 0x00000073:
					return 0x00001097;
				
				case 0x00000074:
					return 0x0000109F;
				
				case 0x00000075:
					return 0x000010A7;
				
				case 0x00000076:
					return 0x000010AF;
				
				case 0x00000077:
					return 0x000010B7;
				
				case 0x00000078:
					return 0x000010BF;
				
				case 0x00000079:
					return 0x000010C7;
				
				case 0x0000007A:
					return 0x000010CF;
				
				case 0x0000007B:
					return 0x000010D7;
				
				case 0x0000007C:
					return 0x000010DF;
				
				case 0x0000007D:
					return 0x000010E7;
				
				case 0x0000007E:
					return 0x000010EF;
				
				case 0x0000007F:
					return 0x000010F7;
				
				case 0x00000080:
					return 0x000010FF;
				
				case 0x00000081:
					return 0x00001107;
				
				case 0x00000082:
					return 0x0000110F;
				
				case 0x00000083:
					return 0x00001117;
				
				case 0x00000084:
					return 0x0000111F;
				
				case 0x00000085:
					return 0x00001127;
				
				case 0x00000086:
					return 0x0000112F;
				
				case 0x00000087:
					return 0x00001137;
				
				case 0x00000088:
					return 0x0000113F;
				
				case 0x00000089:
					return 0x00001147;
				
				case 0x0000008A:
					return 0x0000114F;
				
				case 0x0000008B:
					return 0x00001157;
				
				case 0x0000008C:
					return 0x0000115F;
				
				case 0x0000008D:
					return 0x00001167;
				
				case 0x0000008E:
					return 0x0000116F;
				
				case 0x0000008F:
					return 0x00001177;
				
				case 0x00000090:
					return 0x0000117F;
				
				case 0x00000091:
					return 0x00001187;
				
				case 0x00000092:
					return 0x0000118F;
				
				case 0x00000093:
					return 0x00001197;
				
				case 0x00000094:
					return 0x0000119F;
				
				case 0x00000095:
					return 0x000011A7;
				
				case 0x00000096:
					return 0x000011AF;
				
				case 0x00000097:
					return 0x000011B7;
				
				case 0x00000098:
					return 0x000011BF;
				
				case 0x00000099:
					return 0x000011C7;
				
				case 0x0000009A:
					return 0x000011CF;
				
				case 0x0000009B:
					return 0x000011D7;
				
				case 0x0000009C:
					return 0x000011DF;
				
				case 0x0000009D:
					return 0x000011E7;
				
				case 0x0000009E:
					return 0x00001564;
				
				default:
			}
			switch (iParam1)
			{
				case 0x0000009F:
					return 0x00001725;
				
				case 0x000000A0:
					return 0x0000172C;
				
				case 0x000000A1:
					return 0x00001733;
				
				case 0x000000A2:
					return 0x0000173A;
				
				case 0x000000A3:
					return 0x00001741;
				
				case 0x000000A4:
					return 0x00001748;
				
				case 0x000000A5:
					return 0x0000174F;
				
				case 0x000000A6:
					return 0x00001756;
				
				case 0x000000A7:
					return 0x0000175D;
				
				case 0x000000A8:
					return 0x00001764;
				
				case 0x000000A9:
					return 0x0000176B;
				
				case 0x000000AA:
					return 0x00001772;
				
				case 0x000000AB:
					return 0x00001779;
				
				case 0x000000AC:
					return 0x00001780;
				
				case 0x000000AD:
					return 0x00001787;
				
				case 0x000000AE:
					return 0x0000178E;
				
				case 0x000000AF:
					return 0x00001795;
				
				case 0x000000B0:
					return 0x0000179C;
				
				case 0x000000B1:
					return 0x000017A3;
				
				case 0x000000B2:
					return 0x000017AA;
				
				case 0x000000B3:
					return 0x000017B1;
				
				case 0x000000B4:
					return 0x000017B8;
				
				case 0x000000B5:
					return 0x000017BF;
				
				case 0x000000B6:
					return 0x000017C6;
				
				case 0x000000B7:
					return 0x000017CD;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000B8:
					return 0x0000181A;
				
				case 0x000000B9:
					return 0x00001821;
				
				case 0x000000BA:
					return 0x00001828;
				
				case 0x000000BB:
					return 0x0000182F;
				
				case 0x000000BC:
					return 0x00001836;
				
				case 0x000000BD:
					return 0x0000183D;
				
				case 0x000000BE:
					return 0x00001844;
				
				case 0x000000BF:
					return 0x0000184B;
				
				case 0x000000C0:
					return 0x00001852;
				
				case 0x000000C1:
					return 0x00001859;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000C2:
					return 0x000019A7;
				
				case 0x000000C3:
					return 0x000019AE;
				
				case 0x000000C4:
					return 0x000019B5;
				
				case 0x000000C5:
					return 0x000019BC;
				
				case 0x000000C6:
					return 0x000019C3;
				
				case 0x000000C7:
					return 0x000019CA;
				
				case 0x000000C8:
					return 0x000019D1;
				
				case 0x000000C9:
					return 0x000019D8;
				
				case 0x000000CA:
					return 0x000019DF;
				
				case 0x000000CB:
					return 0x000019E6;
				
				case 0x000000CC:
					return 0x000019ED;
				
				case 0x000000CD:
					return 0x000019F4;
				
				case 0x000000CE:
					return 0x000019FB;
				
				case 0x000000CF:
					return 0x00001A02;
				
				case 0x000000D0:
					return 0x00001A09;
				
				case 0x000000D1:
					return 0x00001A10;
				
				case 0x000000D2:
					return 0x00001A17;
				
				case 0x000000D3:
					return 0x00001A1E;
				
				case 0x000000D4:
					return 0x00001A25;
				
				case 0x000000D5:
					return 0x00001A2C;
				
				case 0x000000D6:
					return 0x00001A33;
				
				case 0x000000D7:
					return 0x00001A3A;
				
				case 0x000000D8:
					return 0x00001A41;
				
				case 0x000000D9:
					return 0x00001A48;
				
				case 0x000000DA:
					return 0x00001A4F;
				
				case 0x000000DB:
					return 0x00001A56;
				
				case 0x000000DC:
					return 0x00001A5D;
				
				case 0x000000DD:
					return 0x00001A64;
				
				case 0x000000DE:
					return 0x00001A6B;
				
				case 0x000000DF:
					return 0x00001A72;
				
				case 0x000000E0:
					return 0x00001A79;
				
				case 0x000000E1:
					return 0x00001A80;
				
				case 0x000000E2:
					return 0x00001A87;
				
				case 0x000000E3:
					return 0x00001A8E;
				
				case 0x000000E4:
					return 0x00001A95;
				
				case 0x000000E5:
					return 0x00001A9C;
				
				case 0x000000E6:
					return 0x00001AA3;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000E7:
					return 0x00001C79;
				
				case 0x000000E8:
					return 0x00001C80;
				
				case 0x000000E9:
					return 0x00001C87;
				
				case 0x000000EA:
					return 0x00001C8E;
				
				case 0x000000EB:
					return 0x00001C95;
				
				case 0x000000EC:
					return 0x00001C9C;
				
				case 0x000000ED:
					return 0x00001CA3;
				
				case 0x000000EE:
					return 0x00001CAA;
				
				case 0x000000EF:
					return 0x00001CB1;
				
				case 0x000000F0:
					return 0x00001CB8;
				
				case 0x000000F1:
					return 0x00001CBF;
				
				case 0x000000F2:
					return 0x00001CC6;
				
				case 0x000000F3:
					return 0x00001CCD;
				
				case 0x000000F4:
					return 0x00001CD4;
				
				case 0x000000F5:
					return 0x00001CDB;
				
				case 0x000000F6:
					return 0x00001CE2;
				
				case 0x000000F7:
					return 0x00001CE9;
				
				case 0x000000F8:
					return 0x00001CF0;
				
				case 0x000000F9:
					return 0x00001CF7;
				
				case 0x000000FA:
					return 0x00001CFE;
				
				case 0x000000FB:
					return 0x00001D05;
				
				case 0x000000FC:
					return 0x00001D0C;
				
				case 0x000000FD:
					return 0x00001D13;
				
				case 0x000000FE:
					return 0x00001D1A;
				
				case 0x000000FF:
					return 0x00001D21;
				
				case 0x00000100:
					return 0x00001D28;
				
				case 0x00000101:
					return 0x00001D2F;
				
				case 0x00000102:
					return 0x00001D36;
				
				case 0x00000103:
					return 0x00001D3D;
				
				case 0x00000104:
					return 0x00001D44;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000105:
					return 0x00001F4C;
				
				case 0x00000106:
					return 0x00001F53;
				
				case 0x00000107:
					return 0x00001F5A;
				
				case 0x00000108:
					return 0x00001F61;
				
				case 0x00000109:
					return 0x00001F68;
				
				case 0x0000010A:
					return 0x00001F6F;
				
				case 0x0000010B:
					return 0x00001F76;
				
				case 0x0000010C:
					return 0x00001F7D;
				
				case 0x0000010D:
					return 0x00001F84;
				
				case 0x0000010E:
					return 0x00001F8B;
				
				case 0x0000010F:
					return 0x00002158;
				
				case 0x00000110:
					return 0x0000215F;
				
				case 0x00000111:
					return 0x00002166;
				
				case 0x00000112:
					return 0x0000216D;
				
				case 0x00000113:
					return 0x00002174;
				
				case 0x00000114:
					return 0x0000217B;
				
				case 0x00000115:
					return 0x00002182;
				
				case 0x00000116:
					return 0x00002189;
				
				case 0x00000117:
					return 0x00002190;
				
				case 0x00000118:
					return 0x00002197;
				
				case 0x00000119:
					return 0x00002315;
				
				case 0x0000011A:
					return 0x0000231C;
				
				case 0x0000011B:
					return 0x00002323;
				
				case 0x0000011C:
					return 0x0000232A;
				
				case 0x0000011D:
					return 0x00002331;
				
				case 0x0000011E:
					return 0x00002338;
				
				case 0x0000011F:
					return 0x0000233F;
				
				case 0x00000120:
					return 0x00002346;
				
				case 0x00000121:
					return 0x0000234D;
				
				case 0x00000122:
					return 0x00002354;
				
				case 0x00000123:
					return 0x0000235B;
				
				case 0x00000124:
					return 0x00002361;
				
				case 0x00000125:
					return 0x00002367;
				
				case 0x00000126:
					return 0x0000236D;
				
				case 0x00000127:
					return 0x00002374;
				
				case 0x00000128:
					return 0x0000237B;
				
				case 0x00000129:
					return 0x00002382;
				
				case 0x0000012A:
					return 0x00002389;
				
				case 0x0000012B:
					return 0x00002390;
				
				case 0x0000012C:
					return 0x00002397;
				
				case 0x0000012D:
					return 0x0000239E;
				
				case 0x0000012E:
					return 0x000023A5;
				
				case 0x0000012F:
					return 0x000023AC;
				
				case 0x00000130:
					return 0x000023B3;
				
				case 0x00000131:
					return 0x000023B9;
				
				case 0x00000132:
					return 0x000023BF;
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000065E;
				
				case 0x00000001:
					return 0x00000665;
				
				case 0x00000002:
					return 0x0000066C;
				
				case 0x00000003:
					return 0x00000673;
				
				case 0x00000004:
					return 0x0000067A;
				
				case 0x00000005:
					return 0x00000681;
				
				case 0x00000006:
					return 0x00000688;
				
				case 0x00000007:
					return 0x0000068F;
				
				case 0x00000008:
					return 0x00000696;
				
				case 0x00000009:
					return 0x0000069D;
				
				case 0x0000000A:
					return 0x000006A4;
				
				case 0x0000000B:
					return 0x000006AA;
				
				case 0x0000000C:
					return 0x000006B0;
				
				case 0x0000000D:
					return 0x000006B6;
				
				case 0x0000000E:
					return 0x00000704;
				
				case 0x0000000F:
					return 0x0000070B;
				
				case 0x00000010:
					return 0x00000712;
				
				case 0x00000011:
					return 0x00000719;
				
				case 0x00000012:
					return 0x00000720;
				
				case 0x00000013:
					return 0x00000727;
				
				case 0x00000014:
					return 0x0000072E;
				
				case 0x00000015:
					return 0x00000735;
				
				case 0x00000016:
					return 0x0000073C;
				
				case 0x00000017:
					return 0x00000743;
				
				case 0x00000018:
					return 0x00000749;
				
				case 0x00000019:
					return 0x0000074F;
				
				case 0x0000001A:
					return 0x00000876;
				
				case 0x0000001B:
					return 0x0000087D;
				
				case 0x0000001C:
					return 0x00000884;
				
				case 0x0000001D:
					return 0x0000088B;
				
				case 0x0000001E:
					return 0x00000892;
				
				case 0x0000001F:
					return 0x00000899;
				
				case 0x00000020:
					return 0x000008A0;
				
				case 0x00000021:
					return 0x000008A7;
				
				case 0x00000022:
					return 0x000008AE;
				
				case 0x00000023:
					return 0x000008B5;
				
				case 0x00000024:
					return 0x000008BC;
				
				case 0x00000025:
					return 0x000008C2;
				
				case 0x00000026:
					return 0x000008C8;
				
				case 0x00000027:
					return 0x00000B0D;
				
				case 0x00000028:
					return 0x00000B14;
				
				case 0x00000029:
					return 0x00000B1B;
				
				case 0x0000002A:
					return 0x00000B22;
				
				case 0x0000002B:
					return 0x00000B29;
				
				case 0x0000002C:
					return 0x00000B30;
				
				case 0x0000002D:
					return 0x00000B37;
				
				case 0x0000002E:
					return 0x00000B3E;
				
				case 0x0000002F:
					return 0x00000B45;
				
				case 0x00000030:
					return 0x00000B4C;
				
				case 0x00000031:
					return 0x00000B53;
				
				case 0x00000032:
					return 0x00000B59;
				
				case 0x00000033:
					return 0x00000B5F;
				
				case 0x00000034:
					return 0x00000B89;
				
				case 0x00000035:
					return 0x00000B90;
				
				case 0x00000036:
					return 0x00000B97;
				
				case 0x00000037:
					return 0x00000B9E;
				
				case 0x00000038:
					return 0x00000BA5;
				
				case 0x00000039:
					return 0x00000BAC;
				
				case 0x0000003A:
					return 0x00000BB3;
				
				case 0x0000003B:
					return 0x00000BBA;
				
				case 0x0000003C:
					return 0x00000BC1;
				
				case 0x0000003D:
					return 0x00000BC8;
				
				case 0x0000003E:
					return 0x00000BCF;
				
				case 0x0000003F:
					return 0x00000BD5;
				
				case 0x00000040:
					return 0x00000BDB;
				
				case 0x00000041:
					return 0x00000CA4;
				
				case 0x00000042:
					return 0x00000CAC;
				
				case 0x00000043:
					return 0x00000CB4;
				
				case 0x00000044:
					return 0x00000CBC;
				
				case 0x00000045:
					return 0x00000CC4;
				
				case 0x00000046:
					return 0x00000CCC;
				
				case 0x00000047:
					return 0x00000CD4;
				
				case 0x00000048:
					return 0x00000CDC;
				
				case 0x00000049:
					return 0x00000CE4;
				
				case 0x0000004A:
					return 0x00000CEC;
				
				case 0x0000004B:
					return 0x00000CF4;
				
				case 0x0000004C:
					return 0x00000CFC;
				
				case 0x0000004D:
					return 0x00000D04;
				
				case 0x0000004E:
					return 0x00000D0C;
				
				case 0x0000004F:
					return 0x00000D14;
				
				case 0x00000050:
					return 0x00000D1C;
				
				case 0x00000051:
					return 0x00000D24;
				
				case 0x00000052:
					return 0x00000D2C;
				
				case 0x00000053:
					return 0x00000D34;
				
				case 0x00000054:
					return 0x00000D3C;
				
				case 0x00000055:
					return 0x00000D44;
				
				case 0x00000056:
					return 0x00000D4B;
				
				case 0x00000057:
					return 0x00000D52;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000058:
					return 0x00000FC0;
				
				case 0x00000059:
					return 0x00000FC8;
				
				case 0x0000005A:
					return 0x00000FD0;
				
				case 0x0000005B:
					return 0x00000FD8;
				
				case 0x0000005C:
					return 0x00000FE0;
				
				case 0x0000005D:
					return 0x00000FE8;
				
				case 0x0000005E:
					return 0x00000FF0;
				
				case 0x0000005F:
					return 0x00000FF8;
				
				case 0x00000060:
					return 0x00001000;
				
				case 0x00000061:
					return 0x00001008;
				
				case 0x00000062:
					return 0x00001010;
				
				case 0x00000063:
					return 0x00001018;
				
				case 0x00000064:
					return 0x00001020;
				
				case 0x00000065:
					return 0x00001028;
				
				case 0x00000066:
					return 0x00001030;
				
				case 0x00000067:
					return 0x00001038;
				
				case 0x00000068:
					return 0x00001040;
				
				case 0x00000069:
					return 0x00001048;
				
				case 0x0000006A:
					return 0x00001050;
				
				case 0x0000006B:
					return 0x00001058;
				
				case 0x0000006C:
					return 0x00001060;
				
				case 0x0000006D:
					return 0x00001068;
				
				case 0x0000006E:
					return 0x00001070;
				
				case 0x0000006F:
					return 0x00001078;
				
				case 0x00000070:
					return 0x00001080;
				
				case 0x00000071:
					return 0x00001088;
				
				case 0x00000072:
					return 0x00001090;
				
				case 0x00000073:
					return 0x00001098;
				
				case 0x00000074:
					return 0x000010A0;
				
				case 0x00000075:
					return 0x000010A8;
				
				case 0x00000076:
					return 0x000010B0;
				
				case 0x00000077:
					return 0x000010B8;
				
				case 0x00000078:
					return 0x000010C0;
				
				case 0x00000079:
					return 0x000010C8;
				
				case 0x0000007A:
					return 0x000010D0;
				
				case 0x0000007B:
					return 0x000010D8;
				
				case 0x0000007C:
					return 0x000010E0;
				
				case 0x0000007D:
					return 0x000010E8;
				
				case 0x0000007E:
					return 0x000010F0;
				
				case 0x0000007F:
					return 0x000010F8;
				
				case 0x00000080:
					return 0x00001100;
				
				case 0x00000081:
					return 0x00001108;
				
				case 0x00000082:
					return 0x00001110;
				
				case 0x00000083:
					return 0x00001118;
				
				case 0x00000084:
					return 0x00001120;
				
				case 0x00000085:
					return 0x00001128;
				
				case 0x00000086:
					return 0x00001130;
				
				case 0x00000087:
					return 0x00001138;
				
				case 0x00000088:
					return 0x00001140;
				
				case 0x00000089:
					return 0x00001148;
				
				case 0x0000008A:
					return 0x00001150;
				
				case 0x0000008B:
					return 0x00001158;
				
				case 0x0000008C:
					return 0x00001160;
				
				case 0x0000008D:
					return 0x00001168;
				
				case 0x0000008E:
					return 0x00001170;
				
				case 0x0000008F:
					return 0x00001178;
				
				case 0x00000090:
					return 0x00001180;
				
				case 0x00000091:
					return 0x00001188;
				
				case 0x00000092:
					return 0x00001190;
				
				case 0x00000093:
					return 0x00001198;
				
				case 0x00000094:
					return 0x000011A0;
				
				case 0x00000095:
					return 0x000011A8;
				
				case 0x00000096:
					return 0x000011B0;
				
				case 0x00000097:
					return 0x000011B8;
				
				case 0x00000098:
					return 0x000011C0;
				
				case 0x00000099:
					return 0x000011C8;
				
				case 0x0000009A:
					return 0x000011D0;
				
				case 0x0000009B:
					return 0x000011D8;
				
				case 0x0000009C:
					return 0x000011E0;
				
				case 0x0000009D:
					return 0x000011E8;
				
				case 0x0000009E:
					return 0x00001565;
				
				default:
			}
			switch (iParam1)
			{
				case 0x0000009F:
					return 0x00001726;
				
				case 0x000000A0:
					return 0x0000172D;
				
				case 0x000000A1:
					return 0x00001734;
				
				case 0x000000A2:
					return 0x0000173B;
				
				case 0x000000A3:
					return 0x00001742;
				
				case 0x000000A4:
					return 0x00001749;
				
				case 0x000000A5:
					return 0x00001750;
				
				case 0x000000A6:
					return 0x00001757;
				
				case 0x000000A7:
					return 0x0000175E;
				
				case 0x000000A8:
					return 0x00001765;
				
				case 0x000000A9:
					return 0x0000176C;
				
				case 0x000000AA:
					return 0x00001773;
				
				case 0x000000AB:
					return 0x0000177A;
				
				case 0x000000AC:
					return 0x00001781;
				
				case 0x000000AD:
					return 0x00001788;
				
				case 0x000000AE:
					return 0x0000178F;
				
				case 0x000000AF:
					return 0x00001796;
				
				case 0x000000B0:
					return 0x0000179D;
				
				case 0x000000B1:
					return 0x000017A4;
				
				case 0x000000B2:
					return 0x000017AB;
				
				case 0x000000B3:
					return 0x000017B2;
				
				case 0x000000B4:
					return 0x000017B9;
				
				case 0x000000B5:
					return 0x000017C0;
				
				case 0x000000B6:
					return 0x000017C7;
				
				case 0x000000B7:
					return 0x000017CE;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000B8:
					return 0x0000181B;
				
				case 0x000000B9:
					return 0x00001822;
				
				case 0x000000BA:
					return 0x00001829;
				
				case 0x000000BB:
					return 0x00001830;
				
				case 0x000000BC:
					return 0x00001837;
				
				case 0x000000BD:
					return 0x0000183E;
				
				case 0x000000BE:
					return 0x00001845;
				
				case 0x000000BF:
					return 0x0000184C;
				
				case 0x000000C0:
					return 0x00001853;
				
				case 0x000000C1:
					return 0x0000185A;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000C2:
					return 0x000019A8;
				
				case 0x000000C3:
					return 0x000019AF;
				
				case 0x000000C4:
					return 0x000019B6;
				
				case 0x000000C5:
					return 0x000019BD;
				
				case 0x000000C6:
					return 0x000019C4;
				
				case 0x000000C7:
					return 0x000019CB;
				
				case 0x000000C8:
					return 0x000019D2;
				
				case 0x000000C9:
					return 0x000019D9;
				
				case 0x000000CA:
					return 0x000019E0;
				
				case 0x000000CB:
					return 0x000019E7;
				
				case 0x000000CC:
					return 0x000019EE;
				
				case 0x000000CD:
					return 0x000019F5;
				
				case 0x000000CE:
					return 0x000019FC;
				
				case 0x000000CF:
					return 0x00001A03;
				
				case 0x000000D0:
					return 0x00001A0A;
				
				case 0x000000D1:
					return 0x00001A11;
				
				case 0x000000D2:
					return 0x00001A18;
				
				case 0x000000D3:
					return 0x00001A1F;
				
				case 0x000000D4:
					return 0x00001A26;
				
				case 0x000000D5:
					return 0x00001A2D;
				
				case 0x000000D6:
					return 0x00001A34;
				
				case 0x000000D7:
					return 0x00001A3B;
				
				case 0x000000D8:
					return 0x00001A42;
				
				case 0x000000D9:
					return 0x00001A49;
				
				case 0x000000DA:
					return 0x00001A50;
				
				case 0x000000DB:
					return 0x00001A57;
				
				case 0x000000DC:
					return 0x00001A5E;
				
				case 0x000000DD:
					return 0x00001A65;
				
				case 0x000000DE:
					return 0x00001A6C;
				
				case 0x000000DF:
					return 0x00001A73;
				
				case 0x000000E0:
					return 0x00001A7A;
				
				case 0x000000E1:
					return 0x00001A81;
				
				case 0x000000E2:
					return 0x00001A88;
				
				case 0x000000E3:
					return 0x00001A8F;
				
				case 0x000000E4:
					return 0x00001A96;
				
				case 0x000000E5:
					return 0x00001A9D;
				
				case 0x000000E6:
					return 0x00001AA4;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000E7:
					return 0x00001C7A;
				
				case 0x000000E8:
					return 0x00001C81;
				
				case 0x000000E9:
					return 0x00001C88;
				
				case 0x000000EA:
					return 0x00001C8F;
				
				case 0x000000EB:
					return 0x00001C96;
				
				case 0x000000EC:
					return 0x00001C9D;
				
				case 0x000000ED:
					return 0x00001CA4;
				
				case 0x000000EE:
					return 0x00001CAB;
				
				case 0x000000EF:
					return 0x00001CB2;
				
				case 0x000000F0:
					return 0x00001CB9;
				
				case 0x000000F1:
					return 0x00001CC0;
				
				case 0x000000F2:
					return 0x00001CC7;
				
				case 0x000000F3:
					return 0x00001CCE;
				
				case 0x000000F4:
					return 0x00001CD5;
				
				case 0x000000F5:
					return 0x00001CDC;
				
				case 0x000000F6:
					return 0x00001CE3;
				
				case 0x000000F7:
					return 0x00001CEA;
				
				case 0x000000F8:
					return 0x00001CF1;
				
				case 0x000000F9:
					return 0x00001CF8;
				
				case 0x000000FA:
					return 0x00001CFF;
				
				case 0x000000FB:
					return 0x00001D06;
				
				case 0x000000FC:
					return 0x00001D0D;
				
				case 0x000000FD:
					return 0x00001D14;
				
				case 0x000000FE:
					return 0x00001D1B;
				
				case 0x000000FF:
					return 0x00001D22;
				
				case 0x00000100:
					return 0x00001D29;
				
				case 0x00000101:
					return 0x00001D30;
				
				case 0x00000102:
					return 0x00001D37;
				
				case 0x00000103:
					return 0x00001D3E;
				
				case 0x00000104:
					return 0x00001D45;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000105:
					return 0x00001F4D;
				
				case 0x00000106:
					return 0x00001F54;
				
				case 0x00000107:
					return 0x00001F5B;
				
				case 0x00000108:
					return 0x00001F62;
				
				case 0x00000109:
					return 0x00001F69;
				
				case 0x0000010A:
					return 0x00001F70;
				
				case 0x0000010B:
					return 0x00001F77;
				
				case 0x0000010C:
					return 0x00001F7E;
				
				case 0x0000010D:
					return 0x00001F85;
				
				case 0x0000010E:
					return 0x00001F8C;
				
				case 0x0000010F:
					return 0x00002159;
				
				case 0x00000110:
					return 0x00002160;
				
				case 0x00000111:
					return 0x00002167;
				
				case 0x00000112:
					return 0x0000216E;
				
				case 0x00000113:
					return 0x00002175;
				
				case 0x00000114:
					return 0x0000217C;
				
				case 0x00000115:
					return 0x00002183;
				
				case 0x00000116:
					return 0x0000218A;
				
				case 0x00000117:
					return 0x00002191;
				
				case 0x00000118:
					return 0x00002198;
				
				case 0x00000119:
					return 0x00002316;
				
				case 0x0000011A:
					return 0x0000231D;
				
				case 0x0000011B:
					return 0x00002324;
				
				case 0x0000011C:
					return 0x0000232B;
				
				case 0x0000011D:
					return 0x00002332;
				
				case 0x0000011E:
					return 0x00002339;
				
				case 0x0000011F:
					return 0x00002340;
				
				case 0x00000120:
					return 0x00002347;
				
				case 0x00000121:
					return 0x0000234E;
				
				case 0x00000122:
					return 0x00002355;
				
				case 0x00000123:
					return 0x0000235C;
				
				case 0x00000124:
					return 0x00002362;
				
				case 0x00000125:
					return 0x00002368;
				
				case 0x00000126:
					return 0x0000236E;
				
				case 0x00000127:
					return 0x00002375;
				
				case 0x00000128:
					return 0x0000237C;
				
				case 0x00000129:
					return 0x00002383;
				
				case 0x0000012A:
					return 0x0000238A;
				
				case 0x0000012B:
					return 0x00002391;
				
				case 0x0000012C:
					return 0x00002398;
				
				case 0x0000012D:
					return 0x0000239F;
				
				case 0x0000012E:
					return 0x000023A6;
				
				case 0x0000012F:
					return 0x000023AD;
				
				case 0x00000130:
					return 0x000023B4;
				
				case 0x00000131:
					return 0x000023BA;
				
				case 0x00000132:
					return 0x000023C0;
				
				default:
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000065F;
				
				case 0x00000001:
					return 0x00000666;
				
				case 0x00000002:
					return 0x0000066D;
				
				case 0x00000003:
					return 0x00000674;
				
				case 0x00000004:
					return 0x0000067B;
				
				case 0x00000005:
					return 0x00000682;
				
				case 0x00000006:
					return 0x00000689;
				
				case 0x00000007:
					return 0x00000690;
				
				case 0x00000008:
					return 0x00000697;
				
				case 0x00000009:
					return 0x0000069E;
				
				case 0x0000000A:
					return 0x000006A5;
				
				case 0x0000000B:
					return 0x000006AB;
				
				case 0x0000000C:
					return 0x000006B1;
				
				case 0x0000000D:
					return 0x000006B7;
				
				case 0x0000000E:
					return 0x00000705;
				
				case 0x0000000F:
					return 0x0000070C;
				
				case 0x00000010:
					return 0x00000713;
				
				case 0x00000011:
					return 0x0000071A;
				
				case 0x00000012:
					return 0x00000721;
				
				case 0x00000013:
					return 0x00000728;
				
				case 0x00000014:
					return 0x0000072F;
				
				case 0x00000015:
					return 0x00000736;
				
				case 0x00000016:
					return 0x0000073D;
				
				case 0x00000017:
					return 0x00000744;
				
				case 0x00000018:
					return 0x0000074A;
				
				case 0x00000019:
					return 0x00000750;
				
				case 0x0000001A:
					return 0x00000877;
				
				case 0x0000001B:
					return 0x0000087E;
				
				case 0x0000001C:
					return 0x00000885;
				
				case 0x0000001D:
					return 0x0000088C;
				
				case 0x0000001E:
					return 0x00000893;
				
				case 0x0000001F:
					return 0x0000089A;
				
				case 0x00000020:
					return 0x000008A1;
				
				case 0x00000021:
					return 0x000008A8;
				
				case 0x00000022:
					return 0x000008AF;
				
				case 0x00000023:
					return 0x000008B6;
				
				case 0x00000024:
					return 0x000008BD;
				
				case 0x00000025:
					return 0x000008C3;
				
				case 0x00000026:
					return 0x000008C9;
				
				case 0x00000027:
					return 0x00000B0E;
				
				case 0x00000028:
					return 0x00000B15;
				
				case 0x00000029:
					return 0x00000B1C;
				
				case 0x0000002A:
					return 0x00000B23;
				
				case 0x0000002B:
					return 0x00000B2A;
				
				case 0x0000002C:
					return 0x00000B31;
				
				case 0x0000002D:
					return 0x00000B38;
				
				case 0x0000002E:
					return 0x00000B3F;
				
				case 0x0000002F:
					return 0x00000B46;
				
				case 0x00000030:
					return 0x00000B4D;
				
				case 0x00000031:
					return 0x00000B54;
				
				case 0x00000032:
					return 0x00000B5A;
				
				case 0x00000033:
					return 0x00000B60;
				
				case 0x00000034:
					return 0x00000B8A;
				
				case 0x00000035:
					return 0x00000B91;
				
				case 0x00000036:
					return 0x00000B98;
				
				case 0x00000037:
					return 0x00000B9F;
				
				case 0x00000038:
					return 0x00000BA6;
				
				case 0x00000039:
					return 0x00000BAD;
				
				case 0x0000003A:
					return 0x00000BB4;
				
				case 0x0000003B:
					return 0x00000BBB;
				
				case 0x0000003C:
					return 0x00000BC2;
				
				case 0x0000003D:
					return 0x00000BC9;
				
				case 0x0000003E:
					return 0x00000BD0;
				
				case 0x0000003F:
					return 0x00000BD6;
				
				case 0x00000040:
					return 0x00000BDC;
				
				case 0x00000041:
					return 0x00000CA5;
				
				case 0x00000042:
					return 0x00000CAD;
				
				case 0x00000043:
					return 0x00000CB5;
				
				case 0x00000044:
					return 0x00000CBD;
				
				case 0x00000045:
					return 0x00000CC5;
				
				case 0x00000046:
					return 0x00000CCD;
				
				case 0x00000047:
					return 0x00000CD5;
				
				case 0x00000048:
					return 0x00000CDD;
				
				case 0x00000049:
					return 0x00000CE5;
				
				case 0x0000004A:
					return 0x00000CED;
				
				case 0x0000004B:
					return 0x00000CF5;
				
				case 0x0000004C:
					return 0x00000CFD;
				
				case 0x0000004D:
					return 0x00000D05;
				
				case 0x0000004E:
					return 0x00000D0D;
				
				case 0x0000004F:
					return 0x00000D15;
				
				case 0x00000050:
					return 0x00000D1D;
				
				case 0x00000051:
					return 0x00000D25;
				
				case 0x00000052:
					return 0x00000D2D;
				
				case 0x00000053:
					return 0x00000D35;
				
				case 0x00000054:
					return 0x00000D3D;
				
				case 0x00000055:
					return 0x00000D45;
				
				case 0x00000056:
					return 0x00000D4C;
				
				case 0x00000057:
					return 0x00000D53;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000058:
					return 0x00000FC1;
				
				case 0x00000059:
					return 0x00000FC9;
				
				case 0x0000005A:
					return 0x00000FD1;
				
				case 0x0000005B:
					return 0x00000FD9;
				
				case 0x0000005C:
					return 0x00000FE1;
				
				case 0x0000005D:
					return 0x00000FE9;
				
				case 0x0000005E:
					return 0x00000FF1;
				
				case 0x0000005F:
					return 0x00000FF9;
				
				case 0x00000060:
					return 0x00001001;
				
				case 0x00000061:
					return 0x00001009;
				
				case 0x00000062:
					return 0x00001011;
				
				case 0x00000063:
					return 0x00001019;
				
				case 0x00000064:
					return 0x00001021;
				
				case 0x00000065:
					return 0x00001029;
				
				case 0x00000066:
					return 0x00001031;
				
				case 0x00000067:
					return 0x00001039;
				
				case 0x00000068:
					return 0x00001041;
				
				case 0x00000069:
					return 0x00001049;
				
				case 0x0000006A:
					return 0x00001051;
				
				case 0x0000006B:
					return 0x00001059;
				
				case 0x0000006C:
					return 0x00001061;
				
				case 0x0000006D:
					return 0x00001069;
				
				case 0x0000006E:
					return 0x00001071;
				
				case 0x0000006F:
					return 0x00001079;
				
				case 0x00000070:
					return 0x00001081;
				
				case 0x00000071:
					return 0x00001089;
				
				case 0x00000072:
					return 0x00001091;
				
				case 0x00000073:
					return 0x00001099;
				
				case 0x00000074:
					return 0x000010A1;
				
				case 0x00000075:
					return 0x000010A9;
				
				case 0x00000076:
					return 0x000010B1;
				
				case 0x00000077:
					return 0x000010B9;
				
				case 0x00000078:
					return 0x000010C1;
				
				case 0x00000079:
					return 0x000010C9;
				
				case 0x0000007A:
					return 0x000010D1;
				
				case 0x0000007B:
					return 0x000010D9;
				
				case 0x0000007C:
					return 0x000010E1;
				
				case 0x0000007D:
					return 0x000010E9;
				
				case 0x0000007E:
					return 0x000010F1;
				
				case 0x0000007F:
					return 0x000010F9;
				
				case 0x00000080:
					return 0x00001101;
				
				case 0x00000081:
					return 0x00001109;
				
				case 0x00000082:
					return 0x00001111;
				
				case 0x00000083:
					return 0x00001119;
				
				case 0x00000084:
					return 0x00001121;
				
				case 0x00000085:
					return 0x00001129;
				
				case 0x00000086:
					return 0x00001131;
				
				case 0x00000087:
					return 0x00001139;
				
				case 0x00000088:
					return 0x00001141;
				
				case 0x00000089:
					return 0x00001149;
				
				case 0x0000008A:
					return 0x00001151;
				
				case 0x0000008B:
					return 0x00001159;
				
				case 0x0000008C:
					return 0x00001161;
				
				case 0x0000008D:
					return 0x00001169;
				
				case 0x0000008E:
					return 0x00001171;
				
				case 0x0000008F:
					return 0x00001179;
				
				case 0x00000090:
					return 0x00001181;
				
				case 0x00000091:
					return 0x00001189;
				
				case 0x00000092:
					return 0x00001191;
				
				case 0x00000093:
					return 0x00001199;
				
				case 0x00000094:
					return 0x000011A1;
				
				case 0x00000095:
					return 0x000011A9;
				
				case 0x00000096:
					return 0x000011B1;
				
				case 0x00000097:
					return 0x000011B9;
				
				case 0x00000098:
					return 0x000011C1;
				
				case 0x00000099:
					return 0x000011C9;
				
				case 0x0000009A:
					return 0x000011D1;
				
				case 0x0000009B:
					return 0x000011D9;
				
				case 0x0000009C:
					return 0x000011E1;
				
				case 0x0000009D:
					return 0x000011E9;
				
				case 0x0000009E:
					return 0x00001566;
				
				default:
			}
			switch (iParam1)
			{
				case 0x0000009F:
					return 0x00001727;
				
				case 0x000000A0:
					return 0x0000172E;
				
				case 0x000000A1:
					return 0x00001735;
				
				case 0x000000A2:
					return 0x0000173C;
				
				case 0x000000A3:
					return 0x00001743;
				
				case 0x000000A4:
					return 0x0000174A;
				
				case 0x000000A5:
					return 0x00001751;
				
				case 0x000000A6:
					return 0x00001758;
				
				case 0x000000A7:
					return 0x0000175F;
				
				case 0x000000A8:
					return 0x00001766;
				
				case 0x000000A9:
					return 0x0000176D;
				
				case 0x000000AA:
					return 0x00001774;
				
				case 0x000000AB:
					return 0x0000177B;
				
				case 0x000000AC:
					return 0x00001782;
				
				case 0x000000AD:
					return 0x00001789;
				
				case 0x000000AE:
					return 0x00001790;
				
				case 0x000000AF:
					return 0x00001797;
				
				case 0x000000B0:
					return 0x0000179E;
				
				case 0x000000B1:
					return 0x000017A5;
				
				case 0x000000B2:
					return 0x000017AC;
				
				case 0x000000B3:
					return 0x000017B3;
				
				case 0x000000B4:
					return 0x000017BA;
				
				case 0x000000B5:
					return 0x000017C1;
				
				case 0x000000B6:
					return 0x000017C8;
				
				case 0x000000B7:
					return 0x000017CF;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000B8:
					return 0x0000181C;
				
				case 0x000000B9:
					return 0x00001823;
				
				case 0x000000BA:
					return 0x0000182A;
				
				case 0x000000BB:
					return 0x00001831;
				
				case 0x000000BC:
					return 0x00001838;
				
				case 0x000000BD:
					return 0x0000183F;
				
				case 0x000000BE:
					return 0x00001846;
				
				case 0x000000BF:
					return 0x0000184D;
				
				case 0x000000C0:
					return 0x00001854;
				
				case 0x000000C1:
					return 0x0000185B;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000C2:
					return 0x000019A9;
				
				case 0x000000C3:
					return 0x000019B0;
				
				case 0x000000C4:
					return 0x000019B7;
				
				case 0x000000C5:
					return 0x000019BE;
				
				case 0x000000C6:
					return 0x000019C5;
				
				case 0x000000C7:
					return 0x000019CC;
				
				case 0x000000C8:
					return 0x000019D3;
				
				case 0x000000C9:
					return 0x000019DA;
				
				case 0x000000CA:
					return 0x000019E1;
				
				case 0x000000CB:
					return 0x000019E8;
				
				case 0x000000CC:
					return 0x000019EF;
				
				case 0x000000CD:
					return 0x000019F6;
				
				case 0x000000CE:
					return 0x000019FD;
				
				case 0x000000CF:
					return 0x00001A04;
				
				case 0x000000D0:
					return 0x00001A0B;
				
				case 0x000000D1:
					return 0x00001A12;
				
				case 0x000000D2:
					return 0x00001A19;
				
				case 0x000000D3:
					return 0x00001A20;
				
				case 0x000000D4:
					return 0x00001A27;
				
				case 0x000000D5:
					return 0x00001A2E;
				
				case 0x000000D6:
					return 0x00001A35;
				
				case 0x000000D7:
					return 0x00001A3C;
				
				case 0x000000D8:
					return 0x00001A43;
				
				case 0x000000D9:
					return 0x00001A4A;
				
				case 0x000000DA:
					return 0x00001A51;
				
				case 0x000000DB:
					return 0x00001A58;
				
				case 0x000000DC:
					return 0x00001A5F;
				
				case 0x000000DD:
					return 0x00001A66;
				
				case 0x000000DE:
					return 0x00001A6D;
				
				case 0x000000DF:
					return 0x00001A74;
				
				case 0x000000E0:
					return 0x00001A7B;
				
				case 0x000000E1:
					return 0x00001A82;
				
				case 0x000000E2:
					return 0x00001A89;
				
				case 0x000000E3:
					return 0x00001A90;
				
				case 0x000000E4:
					return 0x00001A97;
				
				case 0x000000E5:
					return 0x00001A9E;
				
				case 0x000000E6:
					return 0x00001AA5;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000E7:
					return 0x00001C7B;
				
				case 0x000000E8:
					return 0x00001C82;
				
				case 0x000000E9:
					return 0x00001C89;
				
				case 0x000000EA:
					return 0x00001C90;
				
				case 0x000000EB:
					return 0x00001C97;
				
				case 0x000000EC:
					return 0x00001C9E;
				
				case 0x000000ED:
					return 0x00001CA5;
				
				case 0x000000EE:
					return 0x00001CAC;
				
				case 0x000000EF:
					return 0x00001CB3;
				
				case 0x000000F0:
					return 0x00001CBA;
				
				case 0x000000F1:
					return 0x00001CC1;
				
				case 0x000000F2:
					return 0x00001CC8;
				
				case 0x000000F3:
					return 0x00001CCF;
				
				case 0x000000F4:
					return 0x00001CD6;
				
				case 0x000000F5:
					return 0x00001CDD;
				
				case 0x000000F6:
					return 0x00001CE4;
				
				case 0x000000F7:
					return 0x00001CEB;
				
				case 0x000000F8:
					return 0x00001CF2;
				
				case 0x000000F9:
					return 0x00001CF9;
				
				case 0x000000FA:
					return 0x00001D00;
				
				case 0x000000FB:
					return 0x00001D07;
				
				case 0x000000FC:
					return 0x00001D0E;
				
				case 0x000000FD:
					return 0x00001D15;
				
				case 0x000000FE:
					return 0x00001D1C;
				
				case 0x000000FF:
					return 0x00001D23;
				
				case 0x00000100:
					return 0x00001D2A;
				
				case 0x00000101:
					return 0x00001D31;
				
				case 0x00000102:
					return 0x00001D38;
				
				case 0x00000103:
					return 0x00001D3F;
				
				case 0x00000104:
					return 0x00001D46;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000105:
					return 0x00001F4E;
				
				case 0x00000106:
					return 0x00001F55;
				
				case 0x00000107:
					return 0x00001F5C;
				
				case 0x00000108:
					return 0x00001F63;
				
				case 0x00000109:
					return 0x00001F6A;
				
				case 0x0000010A:
					return 0x00001F71;
				
				case 0x0000010B:
					return 0x00001F78;
				
				case 0x0000010C:
					return 0x00001F7F;
				
				case 0x0000010D:
					return 0x00001F86;
				
				case 0x0000010E:
					return 0x00001F8D;
				
				case 0x0000010F:
					return 0x0000215A;
				
				case 0x00000110:
					return 0x00002161;
				
				case 0x00000111:
					return 0x00002168;
				
				case 0x00000112:
					return 0x0000216F;
				
				case 0x00000113:
					return 0x00002176;
				
				case 0x00000114:
					return 0x0000217D;
				
				case 0x00000115:
					return 0x00002184;
				
				case 0x00000116:
					return 0x0000218B;
				
				case 0x00000117:
					return 0x00002192;
				
				case 0x00000118:
					return 0x00002199;
				
				case 0x00000119:
					return 0x00002317;
				
				case 0x0000011A:
					return 0x0000231E;
				
				case 0x0000011B:
					return 0x00002325;
				
				case 0x0000011C:
					return 0x0000232C;
				
				case 0x0000011D:
					return 0x00002333;
				
				case 0x0000011E:
					return 0x0000233A;
				
				case 0x0000011F:
					return 0x00002341;
				
				case 0x00000120:
					return 0x00002348;
				
				case 0x00000121:
					return 0x0000234F;
				
				case 0x00000122:
					return 0x00002356;
				
				case 0x00000123:
					return 0x0000235D;
				
				case 0x00000124:
					return 0x00002363;
				
				case 0x00000125:
					return 0x00002369;
				
				case 0x00000126:
					return 0x0000236F;
				
				case 0x00000127:
					return 0x00002376;
				
				case 0x00000128:
					return 0x0000237D;
				
				case 0x00000129:
					return 0x00002384;
				
				case 0x0000012A:
					return 0x0000238B;
				
				case 0x0000012B:
					return 0x00002392;
				
				case 0x0000012C:
					return 0x00002399;
				
				case 0x0000012D:
					return 0x000023A0;
				
				case 0x0000012E:
					return 0x000023A7;
				
				case 0x0000012F:
					return 0x000023AE;
				
				case 0x00000130:
					return 0x000023B5;
				
				case 0x00000131:
					return 0x000023BB;
				
				case 0x00000132:
					return 0x000023C1;
				
				default:
			}
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000660;
				
				case 0x00000001:
					return 0x00000667;
				
				case 0x00000002:
					return 0x0000066E;
				
				case 0x00000003:
					return 0x00000675;
				
				case 0x00000004:
					return 0x0000067C;
				
				case 0x00000005:
					return 0x00000683;
				
				case 0x00000006:
					return 0x0000068A;
				
				case 0x00000007:
					return 0x00000691;
				
				case 0x00000008:
					return 0x00000698;
				
				case 0x00000009:
					return 0x0000069F;
				
				case 0x0000000A:
					return 0x000006A6;
				
				case 0x0000000B:
					return 0x000006AC;
				
				case 0x0000000C:
					return 0x000006B2;
				
				case 0x0000000D:
					return 0x000006B8;
				
				case 0x0000000E:
					return 0x00000706;
				
				case 0x0000000F:
					return 0x0000070D;
				
				case 0x00000010:
					return 0x00000714;
				
				case 0x00000011:
					return 0x0000071B;
				
				case 0x00000012:
					return 0x00000722;
				
				case 0x00000013:
					return 0x00000729;
				
				case 0x00000014:
					return 0x00000730;
				
				case 0x00000015:
					return 0x00000737;
				
				case 0x00000016:
					return 0x0000073E;
				
				case 0x00000017:
					return 0x00000745;
				
				case 0x00000018:
					return 0x0000074B;
				
				case 0x00000019:
					return 0x00000751;
				
				case 0x0000001A:
					return 0x00000878;
				
				case 0x0000001B:
					return 0x0000087F;
				
				case 0x0000001C:
					return 0x00000886;
				
				case 0x0000001D:
					return 0x0000088D;
				
				case 0x0000001E:
					return 0x00000894;
				
				case 0x0000001F:
					return 0x0000089B;
				
				case 0x00000020:
					return 0x000008A2;
				
				case 0x00000021:
					return 0x000008A9;
				
				case 0x00000022:
					return 0x000008B0;
				
				case 0x00000023:
					return 0x000008B7;
				
				case 0x00000024:
					return 0x000008BE;
				
				case 0x00000025:
					return 0x000008C4;
				
				case 0x00000026:
					return 0x000008CA;
				
				case 0x00000027:
					return 0x00000B0F;
				
				case 0x00000028:
					return 0x00000B16;
				
				case 0x00000029:
					return 0x00000B1D;
				
				case 0x0000002A:
					return 0x00000B24;
				
				case 0x0000002B:
					return 0x00000B2B;
				
				case 0x0000002C:
					return 0x00000B32;
				
				case 0x0000002D:
					return 0x00000B39;
				
				case 0x0000002E:
					return 0x00000B40;
				
				case 0x0000002F:
					return 0x00000B47;
				
				case 0x00000030:
					return 0x00000B4E;
				
				case 0x00000031:
					return 0x00000B55;
				
				case 0x00000032:
					return 0x00000B5B;
				
				case 0x00000033:
					return 0x00000B61;
				
				case 0x00000034:
					return 0x00000B8B;
				
				case 0x00000035:
					return 0x00000B92;
				
				case 0x00000036:
					return 0x00000B99;
				
				case 0x00000037:
					return 0x00000BA0;
				
				case 0x00000038:
					return 0x00000BA7;
				
				case 0x00000039:
					return 0x00000BAE;
				
				case 0x0000003A:
					return 0x00000BB5;
				
				case 0x0000003B:
					return 0x00000BBC;
				
				case 0x0000003C:
					return 0x00000BC3;
				
				case 0x0000003D:
					return 0x00000BCA;
				
				case 0x0000003E:
					return 0x00000BD1;
				
				case 0x0000003F:
					return 0x00000BD7;
				
				case 0x00000040:
					return 0x00000BDD;
				
				case 0x00000041:
					return 0x00000CA6;
				
				case 0x00000042:
					return 0x00000CAE;
				
				case 0x00000043:
					return 0x00000CB6;
				
				case 0x00000044:
					return 0x00000CBE;
				
				case 0x00000045:
					return 0x00000CC6;
				
				case 0x00000046:
					return 0x00000CCE;
				
				case 0x00000047:
					return 0x00000CD6;
				
				case 0x00000048:
					return 0x00000CDE;
				
				case 0x00000049:
					return 0x00000CE6;
				
				case 0x0000004A:
					return 0x00000CEE;
				
				case 0x0000004B:
					return 0x00000CF6;
				
				case 0x0000004C:
					return 0x00000CFE;
				
				case 0x0000004D:
					return 0x00000D06;
				
				case 0x0000004E:
					return 0x00000D0E;
				
				case 0x0000004F:
					return 0x00000D16;
				
				case 0x00000050:
					return 0x00000D1E;
				
				case 0x00000051:
					return 0x00000D26;
				
				case 0x00000052:
					return 0x00000D2E;
				
				case 0x00000053:
					return 0x00000D36;
				
				case 0x00000054:
					return 0x00000D3E;
				
				case 0x00000055:
					return 0x00000D46;
				
				case 0x00000056:
					return 0x00000D4D;
				
				case 0x00000057:
					return 0x00000D54;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000058:
					return 0x00000FC2;
				
				case 0x00000059:
					return 0x00000FCA;
				
				case 0x0000005A:
					return 0x00000FD2;
				
				case 0x0000005B:
					return 0x00000FDA;
				
				case 0x0000005C:
					return 0x00000FE2;
				
				case 0x0000005D:
					return 0x00000FEA;
				
				case 0x0000005E:
					return 0x00000FF2;
				
				case 0x0000005F:
					return 0x00000FFA;
				
				case 0x00000060:
					return 0x00001002;
				
				case 0x00000061:
					return 0x0000100A;
				
				case 0x00000062:
					return 0x00001012;
				
				case 0x00000063:
					return 0x0000101A;
				
				case 0x00000064:
					return 0x00001022;
				
				case 0x00000065:
					return 0x0000102A;
				
				case 0x00000066:
					return 0x00001032;
				
				case 0x00000067:
					return 0x0000103A;
				
				case 0x00000068:
					return 0x00001042;
				
				case 0x00000069:
					return 0x0000104A;
				
				case 0x0000006A:
					return 0x00001052;
				
				case 0x0000006B:
					return 0x0000105A;
				
				case 0x0000006C:
					return 0x00001062;
				
				case 0x0000006D:
					return 0x0000106A;
				
				case 0x0000006E:
					return 0x00001072;
				
				case 0x0000006F:
					return 0x0000107A;
				
				case 0x00000070:
					return 0x00001082;
				
				case 0x00000071:
					return 0x0000108A;
				
				case 0x00000072:
					return 0x00001092;
				
				case 0x00000073:
					return 0x0000109A;
				
				case 0x00000074:
					return 0x000010A2;
				
				case 0x00000075:
					return 0x000010AA;
				
				case 0x00000076:
					return 0x000010B2;
				
				case 0x00000077:
					return 0x000010BA;
				
				case 0x00000078:
					return 0x000010C2;
				
				case 0x00000079:
					return 0x000010CA;
				
				case 0x0000007A:
					return 0x000010D2;
				
				case 0x0000007B:
					return 0x000010DA;
				
				case 0x0000007C:
					return 0x000010E2;
				
				case 0x0000007D:
					return 0x000010EA;
				
				case 0x0000007E:
					return 0x000010F2;
				
				case 0x0000007F:
					return 0x000010FA;
				
				case 0x00000080:
					return 0x00001102;
				
				case 0x00000081:
					return 0x0000110A;
				
				case 0x00000082:
					return 0x00001112;
				
				case 0x00000083:
					return 0x0000111A;
				
				case 0x00000084:
					return 0x00001122;
				
				case 0x00000085:
					return 0x0000112A;
				
				case 0x00000086:
					return 0x00001132;
				
				case 0x00000087:
					return 0x0000113A;
				
				case 0x00000088:
					return 0x00001142;
				
				case 0x00000089:
					return 0x0000114A;
				
				case 0x0000008A:
					return 0x00001152;
				
				case 0x0000008B:
					return 0x0000115A;
				
				case 0x0000008C:
					return 0x00001162;
				
				case 0x0000008D:
					return 0x0000116A;
				
				case 0x0000008E:
					return 0x00001172;
				
				case 0x0000008F:
					return 0x0000117A;
				
				case 0x00000090:
					return 0x00001182;
				
				case 0x00000091:
					return 0x0000118A;
				
				case 0x00000092:
					return 0x00001192;
				
				case 0x00000093:
					return 0x0000119A;
				
				case 0x00000094:
					return 0x000011A2;
				
				case 0x00000095:
					return 0x000011AA;
				
				case 0x00000096:
					return 0x000011B2;
				
				case 0x00000097:
					return 0x000011BA;
				
				case 0x00000098:
					return 0x000011C2;
				
				case 0x00000099:
					return 0x000011CA;
				
				case 0x0000009A:
					return 0x000011D2;
				
				case 0x0000009B:
					return 0x000011DA;
				
				case 0x0000009C:
					return 0x000011E2;
				
				case 0x0000009D:
					return 0x000011EA;
				
				case 0x0000009E:
					return 0x00001567;
				
				default:
			}
			switch (iParam1)
			{
				case 0x0000009F:
					return 0x00001728;
				
				case 0x000000A0:
					return 0x0000172F;
				
				case 0x000000A1:
					return 0x00001736;
				
				case 0x000000A2:
					return 0x0000173D;
				
				case 0x000000A3:
					return 0x00001744;
				
				case 0x000000A4:
					return 0x0000174B;
				
				case 0x000000A5:
					return 0x00001752;
				
				case 0x000000A6:
					return 0x00001759;
				
				case 0x000000A7:
					return 0x00001760;
				
				case 0x000000A8:
					return 0x00001767;
				
				case 0x000000A9:
					return 0x0000176E;
				
				case 0x000000AA:
					return 0x00001775;
				
				case 0x000000AB:
					return 0x0000177C;
				
				case 0x000000AC:
					return 0x00001783;
				
				case 0x000000AD:
					return 0x0000178A;
				
				case 0x000000AE:
					return 0x00001791;
				
				case 0x000000AF:
					return 0x00001798;
				
				case 0x000000B0:
					return 0x0000179F;
				
				case 0x000000B1:
					return 0x000017A6;
				
				case 0x000000B2:
					return 0x000017AD;
				
				case 0x000000B3:
					return 0x000017B4;
				
				case 0x000000B4:
					return 0x000017BB;
				
				case 0x000000B5:
					return 0x000017C2;
				
				case 0x000000B6:
					return 0x000017C9;
				
				case 0x000000B7:
					return 0x000017D0;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000B8:
					return 0x0000181D;
				
				case 0x000000B9:
					return 0x00001824;
				
				case 0x000000BA:
					return 0x0000182B;
				
				case 0x000000BB:
					return 0x00001832;
				
				case 0x000000BC:
					return 0x00001839;
				
				case 0x000000BD:
					return 0x00001840;
				
				case 0x000000BE:
					return 0x00001847;
				
				case 0x000000BF:
					return 0x0000184E;
				
				case 0x000000C0:
					return 0x00001855;
				
				case 0x000000C1:
					return 0x0000185C;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000C2:
					return 0x000019AA;
				
				case 0x000000C3:
					return 0x000019B1;
				
				case 0x000000C4:
					return 0x000019B8;
				
				case 0x000000C5:
					return 0x000019BF;
				
				case 0x000000C6:
					return 0x000019C6;
				
				case 0x000000C7:
					return 0x000019CD;
				
				case 0x000000C8:
					return 0x000019D4;
				
				case 0x000000C9:
					return 0x000019DB;
				
				case 0x000000CA:
					return 0x000019E2;
				
				case 0x000000CB:
					return 0x000019E9;
				
				case 0x000000CC:
					return 0x000019F0;
				
				case 0x000000CD:
					return 0x000019F7;
				
				case 0x000000CE:
					return 0x000019FE;
				
				case 0x000000CF:
					return 0x00001A05;
				
				case 0x000000D0:
					return 0x00001A0C;
				
				case 0x000000D1:
					return 0x00001A13;
				
				case 0x000000D2:
					return 0x00001A1A;
				
				case 0x000000D3:
					return 0x00001A21;
				
				case 0x000000D4:
					return 0x00001A28;
				
				case 0x000000D5:
					return 0x00001A2F;
				
				case 0x000000D6:
					return 0x00001A36;
				
				case 0x000000D7:
					return 0x00001A3D;
				
				case 0x000000D8:
					return 0x00001A44;
				
				case 0x000000D9:
					return 0x00001A4B;
				
				case 0x000000DA:
					return 0x00001A52;
				
				case 0x000000DB:
					return 0x00001A59;
				
				case 0x000000DC:
					return 0x00001A60;
				
				case 0x000000DD:
					return 0x00001A67;
				
				case 0x000000DE:
					return 0x00001A6E;
				
				case 0x000000DF:
					return 0x00001A75;
				
				case 0x000000E0:
					return 0x00001A7C;
				
				case 0x000000E1:
					return 0x00001A83;
				
				case 0x000000E2:
					return 0x00001A8A;
				
				case 0x000000E3:
					return 0x00001A91;
				
				case 0x000000E4:
					return 0x00001A98;
				
				case 0x000000E5:
					return 0x00001A9F;
				
				case 0x000000E6:
					return 0x00001AA6;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000E7:
					return 0x00001C7C;
				
				case 0x000000E8:
					return 0x00001C83;
				
				case 0x000000E9:
					return 0x00001C8A;
				
				case 0x000000EA:
					return 0x00001C91;
				
				case 0x000000EB:
					return 0x00001C98;
				
				case 0x000000EC:
					return 0x00001C9F;
				
				case 0x000000ED:
					return 0x00001CA6;
				
				case 0x000000EE:
					return 0x00001CAD;
				
				case 0x000000EF:
					return 0x00001CB4;
				
				case 0x000000F0:
					return 0x00001CBB;
				
				case 0x000000F1:
					return 0x00001CC2;
				
				case 0x000000F2:
					return 0x00001CC9;
				
				case 0x000000F3:
					return 0x00001CD0;
				
				case 0x000000F4:
					return 0x00001CD7;
				
				case 0x000000F5:
					return 0x00001CDE;
				
				case 0x000000F6:
					return 0x00001CE5;
				
				case 0x000000F7:
					return 0x00001CEC;
				
				case 0x000000F8:
					return 0x00001CF3;
				
				case 0x000000F9:
					return 0x00001CFA;
				
				case 0x000000FA:
					return 0x00001D01;
				
				case 0x000000FB:
					return 0x00001D08;
				
				case 0x000000FC:
					return 0x00001D0F;
				
				case 0x000000FD:
					return 0x00001D16;
				
				case 0x000000FE:
					return 0x00001D1D;
				
				case 0x000000FF:
					return 0x00001D24;
				
				case 0x00000100:
					return 0x00001D2B;
				
				case 0x00000101:
					return 0x00001D32;
				
				case 0x00000102:
					return 0x00001D39;
				
				case 0x00000103:
					return 0x00001D40;
				
				case 0x00000104:
					return 0x00001D47;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000105:
					return 0x00001F4F;
				
				case 0x00000106:
					return 0x00001F56;
				
				case 0x00000107:
					return 0x00001F5D;
				
				case 0x00000108:
					return 0x00001F64;
				
				case 0x00000109:
					return 0x00001F6B;
				
				case 0x0000010A:
					return 0x00001F72;
				
				case 0x0000010B:
					return 0x00001F79;
				
				case 0x0000010C:
					return 0x00001F80;
				
				case 0x0000010D:
					return 0x00001F87;
				
				case 0x0000010E:
					return 0x00001F8E;
				
				case 0x0000010F:
					return 0x0000215B;
				
				case 0x00000110:
					return 0x00002162;
				
				case 0x00000111:
					return 0x00002169;
				
				case 0x00000112:
					return 0x00002170;
				
				case 0x00000113:
					return 0x00002177;
				
				case 0x00000114:
					return 0x0000217E;
				
				case 0x00000115:
					return 0x00002185;
				
				case 0x00000116:
					return 0x0000218C;
				
				case 0x00000117:
					return 0x00002193;
				
				case 0x00000118:
					return 0x0000219A;
				
				case 0x00000119:
					return 0x00002318;
				
				case 0x0000011A:
					return 0x0000231F;
				
				case 0x0000011B:
					return 0x00002326;
				
				case 0x0000011C:
					return 0x0000232D;
				
				case 0x0000011D:
					return 0x00002334;
				
				case 0x0000011E:
					return 0x0000233B;
				
				case 0x0000011F:
					return 0x00002342;
				
				case 0x00000120:
					return 0x00002349;
				
				case 0x00000121:
					return 0x00002350;
				
				case 0x00000122:
					return 0x00002357;
				
				case 0x00000123:
					return 0x0000235E;
				
				case 0x00000124:
					return 0x00002364;
				
				case 0x00000125:
					return 0x0000236A;
				
				case 0x00000126:
					return 0x00002370;
				
				case 0x00000127:
					return 0x00002377;
				
				case 0x00000128:
					return 0x0000237E;
				
				case 0x00000129:
					return 0x00002385;
				
				case 0x0000012A:
					return 0x0000238C;
				
				case 0x0000012B:
					return 0x00002393;
				
				case 0x0000012C:
					return 0x0000239A;
				
				case 0x0000012D:
					return 0x000023A1;
				
				case 0x0000012E:
					return 0x000023A8;
				
				case 0x0000012F:
					return 0x000023AF;
				
				case 0x00000130:
					return 0x000023B6;
				
				case 0x00000131:
					return 0x000023BC;
				
				case 0x00000132:
					return 0x000023C2;
				
				default:
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000661;
				
				case 0x00000001:
					return 0x00000668;
				
				case 0x00000002:
					return 0x0000066F;
				
				case 0x00000003:
					return 0x00000676;
				
				case 0x00000004:
					return 0x0000067D;
				
				case 0x00000005:
					return 0x00000684;
				
				case 0x00000006:
					return 0x0000068B;
				
				case 0x00000007:
					return 0x00000692;
				
				case 0x00000008:
					return 0x00000699;
				
				case 0x00000009:
					return 0x000006A0;
				
				case 0x0000000A:
					return 0x000006A7;
				
				case 0x0000000B:
					return 0x000006AD;
				
				case 0x0000000C:
					return 0x000006B3;
				
				case 0x0000000D:
					return 0x000006B9;
				
				case 0x0000000E:
					return 0x00000707;
				
				case 0x0000000F:
					return 0x0000070E;
				
				case 0x00000010:
					return 0x00000715;
				
				case 0x00000011:
					return 0x0000071C;
				
				case 0x00000012:
					return 0x00000723;
				
				case 0x00000013:
					return 0x0000072A;
				
				case 0x00000014:
					return 0x00000731;
				
				case 0x00000015:
					return 0x00000738;
				
				case 0x00000016:
					return 0x0000073F;
				
				case 0x00000017:
					return 0x00000746;
				
				case 0x00000018:
					return 0x0000074C;
				
				case 0x00000019:
					return 0x00000752;
				
				case 0x0000001A:
					return 0x00000879;
				
				case 0x0000001B:
					return 0x00000880;
				
				case 0x0000001C:
					return 0x00000887;
				
				case 0x0000001D:
					return 0x0000088E;
				
				case 0x0000001E:
					return 0x00000895;
				
				case 0x0000001F:
					return 0x0000089C;
				
				case 0x00000020:
					return 0x000008A3;
				
				case 0x00000021:
					return 0x000008AA;
				
				case 0x00000022:
					return 0x000008B1;
				
				case 0x00000023:
					return 0x000008B8;
				
				case 0x00000024:
					return 0x000008BF;
				
				case 0x00000025:
					return 0x000008C5;
				
				case 0x00000026:
					return 0x000008CB;
				
				case 0x00000027:
					return 0x00000B10;
				
				case 0x00000028:
					return 0x00000B17;
				
				case 0x00000029:
					return 0x00000B1E;
				
				case 0x0000002A:
					return 0x00000B25;
				
				case 0x0000002B:
					return 0x00000B2C;
				
				case 0x0000002C:
					return 0x00000B33;
				
				case 0x0000002D:
					return 0x00000B3A;
				
				case 0x0000002E:
					return 0x00000B41;
				
				case 0x0000002F:
					return 0x00000B48;
				
				case 0x00000030:
					return 0x00000B4F;
				
				case 0x00000031:
					return 0x00000B56;
				
				case 0x00000032:
					return 0x00000B5C;
				
				case 0x00000033:
					return 0x00000B62;
				
				case 0x00000034:
					return 0x00000B8C;
				
				case 0x00000035:
					return 0x00000B93;
				
				case 0x00000036:
					return 0x00000B9A;
				
				case 0x00000037:
					return 0x00000BA1;
				
				case 0x00000038:
					return 0x00000BA8;
				
				case 0x00000039:
					return 0x00000BAF;
				
				case 0x0000003A:
					return 0x00000BB6;
				
				case 0x0000003B:
					return 0x00000BBD;
				
				case 0x0000003C:
					return 0x00000BC4;
				
				case 0x0000003D:
					return 0x00000BCB;
				
				case 0x0000003E:
					return 0x00000BD2;
				
				case 0x0000003F:
					return 0x00000BD8;
				
				case 0x00000040:
					return 0x00000BDE;
				
				case 0x00000041:
					return 0x00000CA7;
				
				case 0x00000042:
					return 0x00000CAF;
				
				case 0x00000043:
					return 0x00000CB7;
				
				case 0x00000044:
					return 0x00000CBF;
				
				case 0x00000045:
					return 0x00000CC7;
				
				case 0x00000046:
					return 0x00000CCF;
				
				case 0x00000047:
					return 0x00000CD7;
				
				case 0x00000048:
					return 0x00000CDF;
				
				case 0x00000049:
					return 0x00000CE7;
				
				case 0x0000004A:
					return 0x00000CEF;
				
				case 0x0000004B:
					return 0x00000CF7;
				
				case 0x0000004C:
					return 0x00000CFF;
				
				case 0x0000004D:
					return 0x00000D07;
				
				case 0x0000004E:
					return 0x00000D0F;
				
				case 0x0000004F:
					return 0x00000D17;
				
				case 0x00000050:
					return 0x00000D1F;
				
				case 0x00000051:
					return 0x00000D27;
				
				case 0x00000052:
					return 0x00000D2F;
				
				case 0x00000053:
					return 0x00000D37;
				
				case 0x00000054:
					return 0x00000D3F;
				
				case 0x00000055:
					return 0x00000D47;
				
				case 0x00000056:
					return 0x00000D4E;
				
				case 0x00000057:
					return 0x00000D55;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000058:
					return 0x00000FC3;
				
				case 0x00000059:
					return 0x00000FCB;
				
				case 0x0000005A:
					return 0x00000FD3;
				
				case 0x0000005B:
					return 0x00000FDB;
				
				case 0x0000005C:
					return 0x00000FE3;
				
				case 0x0000005D:
					return 0x00000FEB;
				
				case 0x0000005E:
					return 0x00000FF3;
				
				case 0x0000005F:
					return 0x00000FFB;
				
				case 0x00000060:
					return 0x00001003;
				
				case 0x00000061:
					return 0x0000100B;
				
				case 0x00000062:
					return 0x00001013;
				
				case 0x00000063:
					return 0x0000101B;
				
				case 0x00000064:
					return 0x00001023;
				
				case 0x00000065:
					return 0x0000102B;
				
				case 0x00000066:
					return 0x00001033;
				
				case 0x00000067:
					return 0x0000103B;
				
				case 0x00000068:
					return 0x00001043;
				
				case 0x00000069:
					return 0x0000104B;
				
				case 0x0000006A:
					return 0x00001053;
				
				case 0x0000006B:
					return 0x0000105B;
				
				case 0x0000006C:
					return 0x00001063;
				
				case 0x0000006D:
					return 0x0000106B;
				
				case 0x0000006E:
					return 0x00001073;
				
				case 0x0000006F:
					return 0x0000107B;
				
				case 0x00000070:
					return 0x00001083;
				
				case 0x00000071:
					return 0x0000108B;
				
				case 0x00000072:
					return 0x00001093;
				
				case 0x00000073:
					return 0x0000109B;
				
				case 0x00000074:
					return 0x000010A3;
				
				case 0x00000075:
					return 0x000010AB;
				
				case 0x00000076:
					return 0x000010B3;
				
				case 0x00000077:
					return 0x000010BB;
				
				case 0x00000078:
					return 0x000010C3;
				
				case 0x00000079:
					return 0x000010CB;
				
				case 0x0000007A:
					return 0x000010D3;
				
				case 0x0000007B:
					return 0x000010DB;
				
				case 0x0000007C:
					return 0x000010E3;
				
				case 0x0000007D:
					return 0x000010EB;
				
				case 0x0000007E:
					return 0x000010F3;
				
				case 0x0000007F:
					return 0x000010FB;
				
				case 0x00000080:
					return 0x00001103;
				
				case 0x00000081:
					return 0x0000110B;
				
				case 0x00000082:
					return 0x00001113;
				
				case 0x00000083:
					return 0x0000111B;
				
				case 0x00000084:
					return 0x00001123;
				
				case 0x00000085:
					return 0x0000112B;
				
				case 0x00000086:
					return 0x00001133;
				
				case 0x00000087:
					return 0x0000113B;
				
				case 0x00000088:
					return 0x00001143;
				
				case 0x00000089:
					return 0x0000114B;
				
				case 0x0000008A:
					return 0x00001153;
				
				case 0x0000008B:
					return 0x0000115B;
				
				case 0x0000008C:
					return 0x00001163;
				
				case 0x0000008D:
					return 0x0000116B;
				
				case 0x0000008E:
					return 0x00001173;
				
				case 0x0000008F:
					return 0x0000117B;
				
				case 0x00000090:
					return 0x00001183;
				
				case 0x00000091:
					return 0x0000118B;
				
				case 0x00000092:
					return 0x00001193;
				
				case 0x00000093:
					return 0x0000119B;
				
				case 0x00000094:
					return 0x000011A3;
				
				case 0x00000095:
					return 0x000011AB;
				
				case 0x00000096:
					return 0x000011B3;
				
				case 0x00000097:
					return 0x000011BB;
				
				case 0x00000098:
					return 0x000011C3;
				
				case 0x00000099:
					return 0x000011CB;
				
				case 0x0000009A:
					return 0x000011D3;
				
				case 0x0000009B:
					return 0x000011DB;
				
				case 0x0000009C:
					return 0x000011E3;
				
				case 0x0000009D:
					return 0x000011EB;
				
				case 0x0000009E:
					return 0x00001568;
				
				default:
			}
			switch (iParam1)
			{
				case 0x0000009F:
					return 0x00001729;
				
				case 0x000000A0:
					return 0x00001730;
				
				case 0x000000A1:
					return 0x00001737;
				
				case 0x000000A2:
					return 0x0000173E;
				
				case 0x000000A3:
					return 0x00001745;
				
				case 0x000000A4:
					return 0x0000174C;
				
				case 0x000000A5:
					return 0x00001753;
				
				case 0x000000A6:
					return 0x0000175A;
				
				case 0x000000A7:
					return 0x00001761;
				
				case 0x000000A8:
					return 0x00001768;
				
				case 0x000000A9:
					return 0x0000176F;
				
				case 0x000000AA:
					return 0x00001776;
				
				case 0x000000AB:
					return 0x0000177D;
				
				case 0x000000AC:
					return 0x00001784;
				
				case 0x000000AD:
					return 0x0000178B;
				
				case 0x000000AE:
					return 0x00001792;
				
				case 0x000000AF:
					return 0x00001799;
				
				case 0x000000B0:
					return 0x000017A0;
				
				case 0x000000B1:
					return 0x000017A7;
				
				case 0x000000B2:
					return 0x000017AE;
				
				case 0x000000B3:
					return 0x000017B5;
				
				case 0x000000B4:
					return 0x000017BC;
				
				case 0x000000B5:
					return 0x000017C3;
				
				case 0x000000B6:
					return 0x000017CA;
				
				case 0x000000B7:
					return 0x000017D1;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000B8:
					return 0x0000181E;
				
				case 0x000000B9:
					return 0x00001825;
				
				case 0x000000BA:
					return 0x0000182C;
				
				case 0x000000BB:
					return 0x00001833;
				
				case 0x000000BC:
					return 0x0000183A;
				
				case 0x000000BD:
					return 0x00001841;
				
				case 0x000000BE:
					return 0x00001848;
				
				case 0x000000BF:
					return 0x0000184F;
				
				case 0x000000C0:
					return 0x00001856;
				
				case 0x000000C1:
					return 0x0000185D;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000C2:
					return 0x000019AB;
				
				case 0x000000C3:
					return 0x000019B2;
				
				case 0x000000C4:
					return 0x000019B9;
				
				case 0x000000C5:
					return 0x000019C0;
				
				case 0x000000C6:
					return 0x000019C7;
				
				case 0x000000C7:
					return 0x000019CE;
				
				case 0x000000C8:
					return 0x000019D5;
				
				case 0x000000C9:
					return 0x000019DC;
				
				case 0x000000CA:
					return 0x000019E3;
				
				case 0x000000CB:
					return 0x000019EA;
				
				case 0x000000CC:
					return 0x000019F1;
				
				case 0x000000CD:
					return 0x000019F8;
				
				case 0x000000CE:
					return 0x000019FF;
				
				case 0x000000CF:
					return 0x00001A06;
				
				case 0x000000D0:
					return 0x00001A0D;
				
				case 0x000000D1:
					return 0x00001A14;
				
				case 0x000000D2:
					return 0x00001A1B;
				
				case 0x000000D3:
					return 0x00001A22;
				
				case 0x000000D4:
					return 0x00001A29;
				
				case 0x000000D5:
					return 0x00001A30;
				
				case 0x000000D6:
					return 0x00001A37;
				
				case 0x000000D7:
					return 0x00001A3E;
				
				case 0x000000D8:
					return 0x00001A45;
				
				case 0x000000D9:
					return 0x00001A4C;
				
				case 0x000000DA:
					return 0x00001A53;
				
				case 0x000000DB:
					return 0x00001A5A;
				
				case 0x000000DC:
					return 0x00001A61;
				
				case 0x000000DD:
					return 0x00001A68;
				
				case 0x000000DE:
					return 0x00001A6F;
				
				case 0x000000DF:
					return 0x00001A76;
				
				case 0x000000E0:
					return 0x00001A7D;
				
				case 0x000000E1:
					return 0x00001A84;
				
				case 0x000000E2:
					return 0x00001A8B;
				
				case 0x000000E3:
					return 0x00001A92;
				
				case 0x000000E4:
					return 0x00001A99;
				
				case 0x000000E5:
					return 0x00001AA0;
				
				case 0x000000E6:
					return 0x00001AA7;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000E7:
					return 0x00001C7D;
				
				case 0x000000E8:
					return 0x00001C84;
				
				case 0x000000E9:
					return 0x00001C8B;
				
				case 0x000000EA:
					return 0x00001C92;
				
				case 0x000000EB:
					return 0x00001C99;
				
				case 0x000000EC:
					return 0x00001CA0;
				
				case 0x000000ED:
					return 0x00001CA7;
				
				case 0x000000EE:
					return 0x00001CAE;
				
				case 0x000000EF:
					return 0x00001CB5;
				
				case 0x000000F0:
					return 0x00001CBC;
				
				case 0x000000F1:
					return 0x00001CC3;
				
				case 0x000000F2:
					return 0x00001CCA;
				
				case 0x000000F3:
					return 0x00001CD1;
				
				case 0x000000F4:
					return 0x00001CD8;
				
				case 0x000000F5:
					return 0x00001CDF;
				
				case 0x000000F6:
					return 0x00001CE6;
				
				case 0x000000F7:
					return 0x00001CED;
				
				case 0x000000F8:
					return 0x00001CF4;
				
				case 0x000000F9:
					return 0x00001CFB;
				
				case 0x000000FA:
					return 0x00001D02;
				
				case 0x000000FB:
					return 0x00001D09;
				
				case 0x000000FC:
					return 0x00001D10;
				
				case 0x000000FD:
					return 0x00001D17;
				
				case 0x000000FE:
					return 0x00001D1E;
				
				case 0x000000FF:
					return 0x00001D25;
				
				case 0x00000100:
					return 0x00001D2C;
				
				case 0x00000101:
					return 0x00001D33;
				
				case 0x00000102:
					return 0x00001D3A;
				
				case 0x00000103:
					return 0x00001D41;
				
				case 0x00000104:
					return 0x00001D48;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000105:
					return 0x00001F50;
				
				case 0x00000106:
					return 0x00001F57;
				
				case 0x00000107:
					return 0x00001F5E;
				
				case 0x00000108:
					return 0x00001F65;
				
				case 0x00000109:
					return 0x00001F6C;
				
				case 0x0000010A:
					return 0x00001F73;
				
				case 0x0000010B:
					return 0x00001F7A;
				
				case 0x0000010C:
					return 0x00001F81;
				
				case 0x0000010D:
					return 0x00001F88;
				
				case 0x0000010E:
					return 0x00001F8F;
				
				case 0x0000010F:
					return 0x0000215C;
				
				case 0x00000110:
					return 0x00002163;
				
				case 0x00000111:
					return 0x0000216A;
				
				case 0x00000112:
					return 0x00002171;
				
				case 0x00000113:
					return 0x00002178;
				
				case 0x00000114:
					return 0x0000217F;
				
				case 0x00000115:
					return 0x00002186;
				
				case 0x00000116:
					return 0x0000218D;
				
				case 0x00000117:
					return 0x00002194;
				
				case 0x00000118:
					return 0x0000219B;
				
				case 0x00000119:
					return 0x00002319;
				
				case 0x0000011A:
					return 0x00002320;
				
				case 0x0000011B:
					return 0x00002327;
				
				case 0x0000011C:
					return 0x0000232E;
				
				case 0x0000011D:
					return 0x00002335;
				
				case 0x0000011E:
					return 0x0000233C;
				
				case 0x0000011F:
					return 0x00002343;
				
				case 0x00000120:
					return 0x0000234A;
				
				case 0x00000121:
					return 0x00002351;
				
				case 0x00000122:
					return 0x00002358;
				
				case 0x00000123:
					return 0x0000235F;
				
				case 0x00000124:
					return 0x00002365;
				
				case 0x00000125:
					return 0x0000236B;
				
				case 0x00000126:
					return 0x00002371;
				
				case 0x00000127:
					return 0x00002378;
				
				case 0x00000128:
					return 0x0000237F;
				
				case 0x00000129:
					return 0x00002386;
				
				case 0x0000012A:
					return 0x0000238D;
				
				case 0x0000012B:
					return 0x00002394;
				
				case 0x0000012C:
					return 0x0000239B;
				
				case 0x0000012D:
					return 0x000023A2;
				
				case 0x0000012E:
					return 0x000023A9;
				
				case 0x0000012F:
					return 0x000023B0;
				
				case 0x00000130:
					return 0x000023B7;
				
				case 0x00000131:
					return 0x000023BD;
				
				case 0x00000132:
					return 0x000023C3;
				
				default:
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000663;
				
				case 0x00000001:
					return 0x0000066A;
				
				case 0x00000002:
					return 0x00000671;
				
				case 0x00000003:
					return 0x00000678;
				
				case 0x00000004:
					return 0x0000067F;
				
				case 0x00000005:
					return 0x00000686;
				
				case 0x00000006:
					return 0x0000068D;
				
				case 0x00000007:
					return 0x00000694;
				
				case 0x00000008:
					return 0x0000069B;
				
				case 0x00000009:
					return 0x000006A2;
				
				case 0x0000000D:
					return 0x000006BB;
				
				case 0x0000000E:
					return 0x00000709;
				
				case 0x0000000F:
					return 0x00000710;
				
				case 0x00000010:
					return 0x00000717;
				
				case 0x00000011:
					return 0x0000071E;
				
				case 0x00000012:
					return 0x00000725;
				
				case 0x00000013:
					return 0x0000072C;
				
				case 0x00000014:
					return 0x00000733;
				
				case 0x00000015:
					return 0x0000073A;
				
				case 0x00000016:
					return 0x00000741;
				
				case 0x0000001A:
					return 0x0000087B;
				
				case 0x0000001B:
					return 0x00000882;
				
				case 0x0000001C:
					return 0x00000889;
				
				case 0x0000001D:
					return 0x00000890;
				
				case 0x0000001E:
					return 0x00000897;
				
				case 0x0000001F:
					return 0x0000089E;
				
				case 0x00000020:
					return 0x000008A5;
				
				case 0x00000021:
					return 0x000008AC;
				
				case 0x00000022:
					return 0x000008B3;
				
				case 0x00000023:
					return 0x000008BA;
				
				case 0x00000027:
					return 0x00000B12;
				
				case 0x00000028:
					return 0x00000B19;
				
				case 0x00000029:
					return 0x00000B20;
				
				case 0x0000002A:
					return 0x00000B27;
				
				case 0x0000002B:
					return 0x00000B2E;
				
				case 0x0000002C:
					return 0x00000B35;
				
				case 0x0000002D:
					return 0x00000B3C;
				
				case 0x0000002E:
					return 0x00000B43;
				
				case 0x0000002F:
					return 0x00000B4A;
				
				case 0x00000030:
					return 0x00000B51;
				
				case 0x00000034:
					return 0x00000B8E;
				
				case 0x00000035:
					return 0x00000B95;
				
				case 0x00000036:
					return 0x00000B9C;
				
				case 0x00000037:
					return 0x00000BA3;
				
				case 0x00000038:
					return 0x00000BAA;
				
				case 0x00000039:
					return 0x00000BB1;
				
				case 0x0000003A:
					return 0x00000BB8;
				
				case 0x0000003B:
					return 0x00000BBF;
				
				case 0x0000003C:
					return 0x00000BC6;
				
				case 0x0000003D:
					return 0x00000BCD;
				
				case 0x00000041:
					return 0x00000CAA;
				
				case 0x00000042:
					return 0x00000CB2;
				
				case 0x00000043:
					return 0x00000CBA;
				
				case 0x00000044:
					return 0x00000CC2;
				
				case 0x00000045:
					return 0x00000CCA;
				
				case 0x00000046:
					return 0x00000CD2;
				
				case 0x00000047:
					return 0x00000CDA;
				
				case 0x00000048:
					return 0x00000CE2;
				
				case 0x00000049:
					return 0x00000CEA;
				
				case 0x0000004A:
					return 0x00000CF2;
				
				case 0x0000004B:
					return 0x00000CFA;
				
				case 0x0000004C:
					return 0x00000D02;
				
				case 0x0000004D:
					return 0x00000D0A;
				
				case 0x0000004E:
					return 0x00000D12;
				
				case 0x0000004F:
					return 0x00000D1A;
				
				case 0x00000050:
					return 0x00000D22;
				
				case 0x00000051:
					return 0x00000D2A;
				
				case 0x00000052:
					return 0x00000D32;
				
				case 0x00000053:
					return 0x00000D3A;
				
				case 0x00000054:
					return 0x00000D42;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000058:
					return 0x00000FC6;
				
				case 0x00000059:
					return 0x00000FCE;
				
				case 0x0000005A:
					return 0x00000FD6;
				
				case 0x0000005B:
					return 0x00000FDE;
				
				case 0x0000005C:
					return 0x00000FE6;
				
				case 0x0000005D:
					return 0x00000FEE;
				
				case 0x0000005E:
					return 0x00000FF6;
				
				case 0x0000005F:
					return 0x00000FFE;
				
				case 0x00000060:
					return 0x00001006;
				
				case 0x00000061:
					return 0x0000100E;
				
				case 0x00000062:
					return 0x00001016;
				
				case 0x00000063:
					return 0x0000101E;
				
				case 0x00000064:
					return 0x00001026;
				
				case 0x00000065:
					return 0x0000102E;
				
				case 0x00000066:
					return 0x00001036;
				
				case 0x00000067:
					return 0x0000103E;
				
				case 0x00000068:
					return 0x00001046;
				
				case 0x00000069:
					return 0x0000104E;
				
				case 0x0000006A:
					return 0x00001056;
				
				case 0x0000006B:
					return 0x0000105E;
				
				case 0x0000006C:
					return 0x00001066;
				
				case 0x0000006D:
					return 0x0000106E;
				
				case 0x0000006E:
					return 0x00001076;
				
				case 0x0000006F:
					return 0x0000107E;
				
				case 0x00000070:
					return 0x00001086;
				
				case 0x00000071:
					return 0x0000108E;
				
				case 0x00000072:
					return 0x00001096;
				
				case 0x00000073:
					return 0x0000109E;
				
				case 0x00000074:
					return 0x000010A6;
				
				case 0x00000075:
					return 0x000010AE;
				
				case 0x00000076:
					return 0x000010B6;
				
				case 0x00000077:
					return 0x000010BE;
				
				case 0x00000078:
					return 0x000010C6;
				
				case 0x00000079:
					return 0x000010CE;
				
				case 0x0000007A:
					return 0x000010D6;
				
				case 0x0000007B:
					return 0x000010DE;
				
				case 0x0000007C:
					return 0x000010E6;
				
				case 0x0000007D:
					return 0x000010EE;
				
				case 0x0000007E:
					return 0x000010F6;
				
				case 0x0000007F:
					return 0x000010FE;
				
				case 0x00000080:
					return 0x00001106;
				
				case 0x00000081:
					return 0x0000110E;
				
				case 0x00000082:
					return 0x00001116;
				
				case 0x00000083:
					return 0x0000111E;
				
				case 0x00000084:
					return 0x00001126;
				
				case 0x00000085:
					return 0x0000112E;
				
				case 0x00000086:
					return 0x00001136;
				
				case 0x00000087:
					return 0x0000113E;
				
				case 0x00000088:
					return 0x00001146;
				
				case 0x00000089:
					return 0x0000114E;
				
				case 0x0000008A:
					return 0x00001156;
				
				case 0x0000008B:
					return 0x0000115E;
				
				case 0x0000008C:
					return 0x00001166;
				
				case 0x0000008D:
					return 0x0000116E;
				
				case 0x0000008E:
					return 0x00001176;
				
				case 0x0000008F:
					return 0x0000117E;
				
				case 0x00000090:
					return 0x00001186;
				
				case 0x00000091:
					return 0x0000118E;
				
				case 0x00000092:
					return 0x00001196;
				
				case 0x00000093:
					return 0x0000119E;
				
				case 0x00000094:
					return 0x000011A6;
				
				case 0x00000095:
					return 0x000011AE;
				
				case 0x00000096:
					return 0x000011B6;
				
				case 0x00000097:
					return 0x000011BE;
				
				case 0x00000098:
					return 0x000011C6;
				
				case 0x00000099:
					return 0x000011CE;
				
				case 0x0000009A:
					return 0x000011D6;
				
				case 0x0000009B:
					return 0x000011DE;
				
				case 0x0000009C:
					return 0x000011E6;
				
				case 0x0000009D:
					return 0x000011EE;
				
				case 0x0000009E:
					return 0x0000156B;
				
				default:
			}
			switch (iParam1)
			{
				case 0x0000009F:
					return 0x0000172B;
				
				case 0x000000A0:
					return 0x00001732;
				
				case 0x000000A1:
					return 0x00001739;
				
				case 0x000000A2:
					return 0x00001740;
				
				case 0x000000A3:
					return 0x00001747;
				
				case 0x000000A4:
					return 0x0000174E;
				
				case 0x000000A5:
					return 0x00001755;
				
				case 0x000000A6:
					return 0x0000175C;
				
				case 0x000000A7:
					return 0x00001763;
				
				case 0x000000A8:
					return 0x0000176A;
				
				case 0x000000A9:
					return 0x00001771;
				
				case 0x000000AA:
					return 0x00001778;
				
				case 0x000000AB:
					return 0x0000177F;
				
				case 0x000000AC:
					return 0x00001786;
				
				case 0x000000AD:
					return 0x0000178D;
				
				case 0x000000AE:
					return 0x00001794;
				
				case 0x000000AF:
					return 0x0000179B;
				
				case 0x000000B0:
					return 0x000017A2;
				
				case 0x000000B1:
					return 0x000017A9;
				
				case 0x000000B2:
					return 0x000017B0;
				
				case 0x000000B3:
					return 0x000017B7;
				
				case 0x000000B4:
					return 0x000017BE;
				
				case 0x000000B5:
					return 0x000017C5;
				
				case 0x000000B6:
					return 0x000017CC;
				
				case 0x000000B7:
					return 0x000017D3;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000B8:
					return 0x00001820;
				
				case 0x000000B9:
					return 0x00001827;
				
				case 0x000000BA:
					return 0x0000182E;
				
				case 0x000000BB:
					return 0x00001835;
				
				case 0x000000BC:
					return 0x0000183C;
				
				case 0x000000BD:
					return 0x00001843;
				
				case 0x000000BE:
					return 0x0000184A;
				
				case 0x000000BF:
					return 0x00001851;
				
				case 0x000000C0:
					return 0x00001858;
				
				case 0x000000C1:
					return 0x0000185F;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000C2:
					return 0x000019AD;
				
				case 0x000000C3:
					return 0x000019B4;
				
				case 0x000000C4:
					return 0x000019BB;
				
				case 0x000000C5:
					return 0x000019C2;
				
				case 0x000000C6:
					return 0x000019C9;
				
				case 0x000000C7:
					return 0x000019D0;
				
				case 0x000000C8:
					return 0x000019D7;
				
				case 0x000000C9:
					return 0x000019DE;
				
				case 0x000000CA:
					return 0x000019E5;
				
				case 0x000000CB:
					return 0x000019EC;
				
				case 0x000000CC:
					return 0x000019F3;
				
				case 0x000000CD:
					return 0x000019FA;
				
				case 0x000000CE:
					return 0x00001A01;
				
				case 0x000000CF:
					return 0x00001A08;
				
				case 0x000000D0:
					return 0x00001A0F;
				
				case 0x000000D1:
					return 0x00001A16;
				
				case 0x000000D2:
					return 0x00001A1D;
				
				case 0x000000D3:
					return 0x00001A24;
				
				case 0x000000D4:
					return 0x00001A2B;
				
				case 0x000000D5:
					return 0x00001A32;
				
				case 0x000000D6:
					return 0x00001A39;
				
				case 0x000000D7:
					return 0x00001A40;
				
				case 0x000000D8:
					return 0x00001A47;
				
				case 0x000000D9:
					return 0x00001A4E;
				
				case 0x000000DA:
					return 0x00001A55;
				
				case 0x000000DB:
					return 0x00001A5C;
				
				case 0x000000DC:
					return 0x00001A63;
				
				case 0x000000DD:
					return 0x00001A6A;
				
				case 0x000000DE:
					return 0x00001A71;
				
				case 0x000000DF:
					return 0x00001A78;
				
				case 0x000000E0:
					return 0x00001A7F;
				
				case 0x000000E1:
					return 0x00001A86;
				
				case 0x000000E2:
					return 0x00001A8D;
				
				case 0x000000E3:
					return 0x00001A94;
				
				case 0x000000E4:
					return 0x00001A9B;
				
				case 0x000000E5:
					return 0x00001AA2;
				
				case 0x000000E6:
					return 0x00001AA9;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000E7:
					return 0x00001C7F;
				
				case 0x000000E8:
					return 0x00001C86;
				
				case 0x000000E9:
					return 0x00001C8D;
				
				case 0x000000EA:
					return 0x00001C94;
				
				case 0x000000EB:
					return 0x00001C9B;
				
				case 0x000000EC:
					return 0x00001CA2;
				
				case 0x000000ED:
					return 0x00001CA9;
				
				case 0x000000EE:
					return 0x00001CB0;
				
				case 0x000000EF:
					return 0x00001CB7;
				
				case 0x000000F0:
					return 0x00001CBE;
				
				case 0x000000F1:
					return 0x00001CC5;
				
				case 0x000000F2:
					return 0x00001CCC;
				
				case 0x000000F3:
					return 0x00001CD3;
				
				case 0x000000F4:
					return 0x00001CDA;
				
				case 0x000000F5:
					return 0x00001CE1;
				
				case 0x000000F6:
					return 0x00001CE8;
				
				case 0x000000F7:
					return 0x00001CEF;
				
				case 0x000000F8:
					return 0x00001CF6;
				
				case 0x000000F9:
					return 0x00001CFD;
				
				case 0x000000FA:
					return 0x00001D04;
				
				case 0x000000FB:
					return 0x00001D0B;
				
				case 0x000000FC:
					return 0x00001D12;
				
				case 0x000000FD:
					return 0x00001D19;
				
				case 0x000000FE:
					return 0x00001D20;
				
				case 0x000000FF:
					return 0x00001D27;
				
				case 0x00000100:
					return 0x00001D2E;
				
				case 0x00000101:
					return 0x00001D35;
				
				case 0x00000102:
					return 0x00001D3C;
				
				case 0x00000103:
					return 0x00001D43;
				
				case 0x00000104:
					return 0x00001D4A;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000105:
					return 0x00001F52;
				
				case 0x00000106:
					return 0x00001F59;
				
				case 0x00000107:
					return 0x00001F60;
				
				case 0x00000108:
					return 0x00001F67;
				
				case 0x00000109:
					return 0x00001F6E;
				
				case 0x0000010A:
					return 0x00001F75;
				
				case 0x0000010B:
					return 0x00001F7C;
				
				case 0x0000010C:
					return 0x00001F83;
				
				case 0x0000010D:
					return 0x00001F8A;
				
				case 0x0000010E:
					return 0x00001F91;
				
				case 0x0000010F:
					return 0x0000215E;
				
				case 0x00000110:
					return 0x00002165;
				
				case 0x00000111:
					return 0x0000216C;
				
				case 0x00000112:
					return 0x00002173;
				
				case 0x00000113:
					return 0x0000217A;
				
				case 0x00000114:
					return 0x00002181;
				
				case 0x00000115:
					return 0x00002188;
				
				case 0x00000116:
					return 0x0000218F;
				
				case 0x00000117:
					return 0x00002196;
				
				case 0x00000118:
					return 0x0000219D;
				
				case 0x00000119:
					return 0x0000231B;
				
				case 0x0000011A:
					return 0x00002322;
				
				case 0x0000011B:
					return 0x00002329;
				
				case 0x0000011C:
					return 0x00002330;
				
				case 0x0000011D:
					return 0x00002337;
				
				case 0x0000011E:
					return 0x0000233E;
				
				case 0x0000011F:
					return 0x00002345;
				
				case 0x00000120:
					return 0x0000234C;
				
				case 0x00000121:
					return 0x00002353;
				
				case 0x00000122:
					return 0x0000235A;
				
				case 0x00000126:
					return 0x00002373;
				
				case 0x00000127:
					return 0x0000237A;
				
				case 0x00000128:
					return 0x00002381;
				
				case 0x00000129:
					return 0x00002388;
				
				case 0x0000012A:
					return 0x0000238F;
				
				case 0x0000012B:
					return 0x00002396;
				
				case 0x0000012C:
					return 0x0000239D;
				
				case 0x0000012D:
					return 0x000023A4;
				
				case 0x0000012E:
					return 0x000023AB;
				
				case 0x0000012F:
					return 0x000023B2;
				
				default:
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000662;
				
				case 0x00000001:
					return 0x00000669;
				
				case 0x00000002:
					return 0x00000670;
				
				case 0x00000003:
					return 0x00000677;
				
				case 0x00000004:
					return 0x0000067E;
				
				case 0x00000005:
					return 0x00000685;
				
				case 0x00000006:
					return 0x0000068C;
				
				case 0x00000007:
					return 0x00000693;
				
				case 0x00000008:
					return 0x0000069A;
				
				case 0x00000009:
					return 0x000006A1;
				
				case 0x0000000A:
					return 0x000006A8;
				
				case 0x0000000B:
					return 0x000006AE;
				
				case 0x0000000C:
					return 0x000006B4;
				
				case 0x0000000D:
					return 0x000006BA;
				
				case 0x0000000E:
					return 0x00000708;
				
				case 0x0000000F:
					return 0x0000070F;
				
				case 0x00000010:
					return 0x00000716;
				
				case 0x00000011:
					return 0x0000071D;
				
				case 0x00000012:
					return 0x00000724;
				
				case 0x00000013:
					return 0x0000072B;
				
				case 0x00000014:
					return 0x00000732;
				
				case 0x00000015:
					return 0x00000739;
				
				case 0x00000016:
					return 0x00000740;
				
				case 0x00000017:
					return 0x00000747;
				
				case 0x00000018:
					return 0x0000074D;
				
				case 0x00000019:
					return 0x00000753;
				
				case 0x0000001A:
					return 0x0000087A;
				
				case 0x0000001B:
					return 0x00000881;
				
				case 0x0000001C:
					return 0x00000888;
				
				case 0x0000001D:
					return 0x0000088F;
				
				case 0x0000001E:
					return 0x00000896;
				
				case 0x0000001F:
					return 0x0000089D;
				
				case 0x00000020:
					return 0x000008A4;
				
				case 0x00000021:
					return 0x000008AB;
				
				case 0x00000022:
					return 0x000008B2;
				
				case 0x00000023:
					return 0x000008B9;
				
				case 0x00000024:
					return 0x000008C0;
				
				case 0x00000025:
					return 0x000008C6;
				
				case 0x00000026:
					return 0x000008CC;
				
				case 0x00000027:
					return 0x00000B11;
				
				case 0x00000028:
					return 0x00000B18;
				
				case 0x00000029:
					return 0x00000B1F;
				
				case 0x0000002A:
					return 0x00000B26;
				
				case 0x0000002B:
					return 0x00000B2D;
				
				case 0x0000002C:
					return 0x00000B34;
				
				case 0x0000002D:
					return 0x00000B3B;
				
				case 0x0000002E:
					return 0x00000B42;
				
				case 0x0000002F:
					return 0x00000B49;
				
				case 0x00000030:
					return 0x00000B50;
				
				case 0x00000031:
					return 0x00000B57;
				
				case 0x00000032:
					return 0x00000B5D;
				
				case 0x00000033:
					return 0x00000B63;
				
				case 0x00000034:
					return 0x00000B8D;
				
				case 0x00000035:
					return 0x00000B94;
				
				case 0x00000036:
					return 0x00000B9B;
				
				case 0x00000037:
					return 0x00000BA2;
				
				case 0x00000038:
					return 0x00000BA9;
				
				case 0x00000039:
					return 0x00000BB0;
				
				case 0x0000003A:
					return 0x00000BB7;
				
				case 0x0000003B:
					return 0x00000BBE;
				
				case 0x0000003C:
					return 0x00000BC5;
				
				case 0x0000003D:
					return 0x00000BCC;
				
				case 0x0000003E:
					return 0x00000BD3;
				
				case 0x0000003F:
					return 0x00000BD9;
				
				case 0x00000040:
					return 0x00000BDF;
				
				case 0x00000041:
					return 0x00000CA8;
				
				case 0x00000042:
					return 0x00000CB0;
				
				case 0x00000043:
					return 0x00000CB8;
				
				case 0x00000044:
					return 0x00000CC0;
				
				case 0x00000045:
					return 0x00000CC8;
				
				case 0x00000046:
					return 0x00000CD0;
				
				case 0x00000047:
					return 0x00000CD8;
				
				case 0x00000048:
					return 0x00000CE0;
				
				case 0x00000049:
					return 0x00000CE8;
				
				case 0x0000004A:
					return 0x00000CF0;
				
				case 0x0000004B:
					return 0x00000CF8;
				
				case 0x0000004C:
					return 0x00000D00;
				
				case 0x0000004D:
					return 0x00000D09;
				
				case 0x0000004E:
					return 0x00000D11;
				
				case 0x0000004F:
					return 0x00000D18;
				
				case 0x00000050:
					return 0x00000D20;
				
				case 0x00000051:
					return 0x00000D28;
				
				case 0x00000052:
					return 0x00000D30;
				
				case 0x00000053:
					return 0x00000D38;
				
				case 0x00000054:
					return 0x00000D40;
				
				case 0x00000055:
					return 0x00000D48;
				
				case 0x00000056:
					return 0x00000D4F;
				
				case 0x00000057:
					return 0x00000D56;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000058:
					return 0x00000FC4;
				
				case 0x00000059:
					return 0x00000FCC;
				
				case 0x0000005A:
					return 0x00000FD4;
				
				case 0x0000005B:
					return 0x00000FDC;
				
				case 0x0000005C:
					return 0x00000FE4;
				
				case 0x0000005D:
					return 0x00000FEC;
				
				case 0x0000005E:
					return 0x00000FF4;
				
				case 0x0000005F:
					return 0x00000FFC;
				
				case 0x00000060:
					return 0x00001004;
				
				case 0x00000061:
					return 0x0000100C;
				
				case 0x00000062:
					return 0x00001014;
				
				case 0x00000063:
					return 0x0000101C;
				
				case 0x00000064:
					return 0x00001025;
				
				case 0x00000065:
					return 0x0000102D;
				
				case 0x00000066:
					return 0x00001034;
				
				case 0x00000067:
					return 0x0000103C;
				
				case 0x00000068:
					return 0x00001044;
				
				case 0x00000069:
					return 0x0000104C;
				
				case 0x0000006A:
					return 0x00001054;
				
				case 0x0000006B:
					return 0x0000105C;
				
				case 0x0000006C:
					return 0x00001064;
				
				case 0x0000006D:
					return 0x0000106C;
				
				case 0x0000006E:
					return 0x00001074;
				
				case 0x0000006F:
					return 0x0000107C;
				
				case 0x00000070:
					return 0x00001084;
				
				case 0x00000071:
					return 0x0000108C;
				
				case 0x00000072:
					return 0x00001094;
				
				case 0x00000073:
					return 0x0000109C;
				
				case 0x00000074:
					return 0x000010A4;
				
				case 0x00000075:
					return 0x000010AC;
				
				case 0x00000076:
					return 0x000010B4;
				
				case 0x00000077:
					return 0x000010BC;
				
				case 0x00000078:
					return 0x000010C5;
				
				case 0x00000079:
					return 0x000010CD;
				
				case 0x0000007A:
					return 0x000010D4;
				
				case 0x0000007B:
					return 0x000010DC;
				
				case 0x0000007C:
					return 0x000010E4;
				
				case 0x0000007D:
					return 0x000010EC;
				
				case 0x0000007E:
					return 0x000010F4;
				
				case 0x0000007F:
					return 0x000010FC;
				
				case 0x00000080:
					return 0x00001104;
				
				case 0x00000081:
					return 0x0000110C;
				
				case 0x00000082:
					return 0x00001114;
				
				case 0x00000083:
					return 0x0000111C;
				
				case 0x00000084:
					return 0x00001124;
				
				case 0x00000085:
					return 0x0000112C;
				
				case 0x00000086:
					return 0x00001134;
				
				case 0x00000087:
					return 0x0000113C;
				
				case 0x00000088:
					return 0x00001144;
				
				case 0x00000089:
					return 0x0000114C;
				
				case 0x0000008A:
					return 0x00001154;
				
				case 0x0000008B:
					return 0x0000115C;
				
				case 0x0000008C:
					return 0x00001165;
				
				case 0x0000008D:
					return 0x0000116D;
				
				case 0x0000008E:
					return 0x00001174;
				
				case 0x0000008F:
					return 0x0000117C;
				
				case 0x00000090:
					return 0x00001184;
				
				case 0x00000091:
					return 0x0000118C;
				
				case 0x00000092:
					return 0x00001194;
				
				case 0x00000093:
					return 0x0000119C;
				
				case 0x00000094:
					return 0x000011A4;
				
				case 0x00000095:
					return 0x000011AC;
				
				case 0x00000096:
					return 0x000011B4;
				
				case 0x00000097:
					return 0x000011BC;
				
				case 0x00000098:
					return 0x000011C4;
				
				case 0x00000099:
					return 0x000011CC;
				
				case 0x0000009A:
					return 0x000011D4;
				
				case 0x0000009B:
					return 0x000011DC;
				
				case 0x0000009C:
					return 0x000011E4;
				
				case 0x0000009D:
					return 0x000011EC;
				
				case 0x0000009E:
					return 0x00001569;
				
				default:
			}
			switch (iParam1)
			{
				case 0x0000009F:
					return 0x0000172A;
				
				case 0x000000A0:
					return 0x00001731;
				
				case 0x000000A1:
					return 0x00001738;
				
				case 0x000000A2:
					return 0x0000173F;
				
				case 0x000000A3:
					return 0x00001746;
				
				case 0x000000A4:
					return 0x0000174D;
				
				case 0x000000A5:
					return 0x00001754;
				
				case 0x000000A6:
					return 0x0000175B;
				
				case 0x000000A7:
					return 0x00001762;
				
				case 0x000000A8:
					return 0x00001769;
				
				case 0x000000A9:
					return 0x00001770;
				
				case 0x000000AA:
					return 0x00001777;
				
				case 0x000000AB:
					return 0x0000177E;
				
				case 0x000000AC:
					return 0x00001785;
				
				case 0x000000AD:
					return 0x0000178C;
				
				case 0x000000AE:
					return 0x00001793;
				
				case 0x000000AF:
					return 0x0000179A;
				
				case 0x000000B0:
					return 0x000017A1;
				
				case 0x000000B1:
					return 0x000017A8;
				
				case 0x000000B2:
					return 0x000017AF;
				
				case 0x000000B3:
					return 0x000017B6;
				
				case 0x000000B4:
					return 0x000017BD;
				
				case 0x000000B5:
					return 0x000017C4;
				
				case 0x000000B6:
					return 0x000017CB;
				
				case 0x000000B7:
					return 0x000017D2;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000B8:
					return 0x0000181F;
				
				case 0x000000B9:
					return 0x00001826;
				
				case 0x000000BA:
					return 0x0000182D;
				
				case 0x000000BB:
					return 0x00001834;
				
				case 0x000000BC:
					return 0x0000183B;
				
				case 0x000000BD:
					return 0x00001842;
				
				case 0x000000BE:
					return 0x00001849;
				
				case 0x000000BF:
					return 0x00001850;
				
				case 0x000000C0:
					return 0x00001857;
				
				case 0x000000C1:
					return 0x0000185E;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000C2:
					return 0x000019AC;
				
				case 0x000000C3:
					return 0x000019B3;
				
				case 0x000000C4:
					return 0x000019BA;
				
				case 0x000000C5:
					return 0x000019C1;
				
				case 0x000000C6:
					return 0x000019C8;
				
				case 0x000000C7:
					return 0x000019CF;
				
				case 0x000000C8:
					return 0x000019D6;
				
				case 0x000000C9:
					return 0x000019DD;
				
				case 0x000000CA:
					return 0x000019E4;
				
				case 0x000000CB:
					return 0x000019EB;
				
				case 0x000000CC:
					return 0x000019F2;
				
				case 0x000000CD:
					return 0x000019F9;
				
				case 0x000000CE:
					return 0x00001A00;
				
				case 0x000000CF:
					return 0x00001A07;
				
				case 0x000000D0:
					return 0x00001A0E;
				
				case 0x000000D1:
					return 0x00001A15;
				
				case 0x000000D2:
					return 0x00001A1C;
				
				case 0x000000D3:
					return 0x00001A23;
				
				case 0x000000D4:
					return 0x00001A2A;
				
				case 0x000000D5:
					return 0x00001A31;
				
				case 0x000000D6:
					return 0x00001A38;
				
				case 0x000000D7:
					return 0x00001A3F;
				
				case 0x000000D8:
					return 0x00001A46;
				
				case 0x000000D9:
					return 0x00001A4D;
				
				case 0x000000DA:
					return 0x00001A54;
				
				case 0x000000DB:
					return 0x00001A5B;
				
				case 0x000000DC:
					return 0x00001A62;
				
				case 0x000000DD:
					return 0x00001A69;
				
				case 0x000000DE:
					return 0x00001A70;
				
				case 0x000000DF:
					return 0x00001A77;
				
				case 0x000000E0:
					return 0x00001A7E;
				
				case 0x000000E1:
					return 0x00001A85;
				
				case 0x000000E2:
					return 0x00001A8C;
				
				case 0x000000E3:
					return 0x00001A93;
				
				case 0x000000E4:
					return 0x00001A9A;
				
				case 0x000000E5:
					return 0x00001AA1;
				
				case 0x000000E6:
					return 0x00001AA8;
				
				default:
			}
			switch (iParam1)
			{
				case 0x000000E7:
					return 0x00001C7E;
				
				case 0x000000E8:
					return 0x00001C85;
				
				case 0x000000E9:
					return 0x00001C8C;
				
				case 0x000000EA:
					return 0x00001C93;
				
				case 0x000000EB:
					return 0x00001C9A;
				
				case 0x000000EC:
					return 0x00001CA1;
				
				case 0x000000ED:
					return 0x00001CA8;
				
				case 0x000000EE:
					return 0x00001CAF;
				
				case 0x000000EF:
					return 0x00001CB6;
				
				case 0x000000F0:
					return 0x00001CBD;
				
				case 0x000000F1:
					return 0x00001CC4;
				
				case 0x000000F2:
					return 0x00001CCB;
				
				case 0x000000F3:
					return 0x00001CD2;
				
				case 0x000000F4:
					return 0x00001CD9;
				
				case 0x000000F5:
					return 0x00001CE0;
				
				case 0x000000F6:
					return 0x00001CE7;
				
				case 0x000000F7:
					return 0x00001CEE;
				
				case 0x000000F8:
					return 0x00001CF5;
				
				case 0x000000F9:
					return 0x00001CFC;
				
				case 0x000000FA:
					return 0x00001D03;
				
				case 0x000000FB:
					return 0x00001D0A;
				
				case 0x000000FC:
					return 0x00001D11;
				
				case 0x000000FD:
					return 0x00001D18;
				
				case 0x000000FE:
					return 0x00001D1F;
				
				case 0x000000FF:
					return 0x00001D26;
				
				case 0x00000100:
					return 0x00001D2D;
				
				case 0x00000101:
					return 0x00001D34;
				
				case 0x00000102:
					return 0x00001D3B;
				
				case 0x00000103:
					return 0x00001D42;
				
				case 0x00000104:
					return 0x00001D49;
				
				default:
			}
			switch (iParam1)
			{
				case 0x00000105:
					return 0x00001F51;
				
				case 0x00000106:
					return 0x00001F58;
				
				case 0x00000107:
					return 0x00001F5F;
				
				case 0x00000108:
					return 0x00001F66;
				
				case 0x00000109:
					return 0x00001F6D;
				
				case 0x0000010A:
					return 0x00001F74;
				
				case 0x0000010B:
					return 0x00001F7B;
				
				case 0x0000010C:
					return 0x00001F82;
				
				case 0x0000010D:
					return 0x00001F89;
				
				case 0x0000010E:
					return 0x00001F90;
				
				case 0x0000010F:
					return 0x0000215D;
				
				case 0x00000110:
					return 0x00002164;
				
				case 0x00000111:
					return 0x0000216B;
				
				case 0x00000112:
					return 0x00002172;
				
				case 0x00000113:
					return 0x00002179;
				
				case 0x00000114:
					return 0x00002180;
				
				case 0x00000115:
					return 0x00002187;
				
				case 0x00000116:
					return 0x0000218E;
				
				case 0x00000117:
					return 0x00002195;
				
				case 0x00000118:
					return 0x0000219C;
				
				case 0x00000119:
					return 0x0000231A;
				
				case 0x0000011A:
					return 0x00002321;
				
				case 0x0000011B:
					return 0x00002328;
				
				case 0x0000011C:
					return 0x0000232F;
				
				case 0x0000011D:
					return 0x00002336;
				
				case 0x0000011E:
					return 0x0000233D;
				
				case 0x0000011F:
					return 0x00002344;
				
				case 0x00000120:
					return 0x0000234B;
				
				case 0x00000121:
					return 0x00002352;
				
				case 0x00000122:
					return 0x00002359;
				
				case 0x00000123:
					return 0x00002360;
				
				case 0x00000124:
					return 0x00002366;
				
				case 0x00000125:
					return 0x0000236C;
				
				case 0x00000126:
					return 0x00002372;
				
				case 0x00000127:
					return 0x00002379;
				
				case 0x00000128:
					return 0x00002380;
				
				case 0x00000129:
					return 0x00002387;
				
				case 0x0000012A:
					return 0x0000238E;
				
				case 0x0000012B:
					return 0x00002395;
				
				case 0x0000012C:
					return 0x0000239C;
				
				case 0x0000012D:
					return 0x000023A3;
				
				case 0x0000012E:
					return 0x000023AA;
				
				case 0x0000012F:
					return 0x000023B1;
				
				case 0x00000130:
					return 0x000023B8;
				
				case 0x00000131:
					return 0x000023BE;
				
				case 0x00000132:
					return 0x000023C4;
				
				default:
			}
			break;
	}
	return 0x0000065D;
}

int func_568(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000133)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000019)
		{
			if (iParam0 >= func_381(iVar0) && iParam0 < func_569(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0xFFFFFFFF;
}

int func_569(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000008:
			return 0x0000006C;
			break;
		
		case 0x00000009:
			return 0x00000080;
			break;
		
		case 0x0000000A:
			return 0x00000094;
			break;
		
		case 0x0000000B:
			return 0x0000009C;
			break;
		
		case 0x00000006:
			return 0x0000004B;
			break;
		
		case 0x00000007:
			return 0x00000058;
			break;
		
		case 0x00000005:
			return 0xFFFFFFFF;
			break;
		
		case 0x0000000C:
			return 0x000000B3;
			break;
		
		case 0x0000000D:
			return 0x000000BA;
			break;
		
		case 0x0000000E:
			return 0x000000C0;
			break;
		
		case 0x0000000F:
			return 0x000000CA;
			break;
		
		case 0x00000010:
			return 0x000000D4;
			break;
		
		case 0x00000011:
			return 0x000000DE;
			break;
		
		case 0x00000012:
			return 0x000000EC;
			break;
		
		case 0x00000013:
			return 0x000000F6;
			break;
		
		case 0x00000014:
			return 0x00000100;
			break;
		
		case 0x00000015:
			return 0x0000010C;
			break;
		
		case 0x00000016:
			return 0x00000116;
			break;
		
		case 0x00000017:
			return 0x00000126;
			break;
		
		case 0x00000018:
			return 0x00000133;
			break;
	}
	if (iParam0 >= 0x000003E8)
	{
		iVar0 = func_324(iParam0);
		return func_570(iVar0);
	}
	return (func_382(iParam0, 0xFFFFFFFF) * iParam0 + 1);
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000009D;
		
		case 0x00000002:
			return 0x000000E0;
		
		case 0x00000001:
			return 0x000000E3;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_571(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0x00000000;
			break;
		
		case joaat("boxville5"):
			return 0x00000001;
			break;
		
		case joaat("wastelander"):
			return 0x00000002;
			break;
		
		case joaat("phantom2"):
			return 0x00000003;
			break;
		
		case joaat("voltic2"):
			return 0x00000004;
			break;
		
		case joaat("dune4"):
			return 0x00000005;
			break;
		
		case joaat("dune5"):
			return 0x00000005;
			break;
		
		case joaat("ruiner2"):
			return 0x00000006;
			break;
		
		case joaat("blazer5"):
			return 0x00000007;
			break;
	}
	return 0xFFFFFFFF;
}

int func_572(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		iVar0 = 0xFFFFFFFF;
		iVar1 = iParam0 + 157;
		func_380(iVar1, &iVar0, 0x00000001);
		if (iVar0 >= 0x00000000)
		{
			iVar2 = func_28(func_567(0x00000004, iVar0), 0xFFFFFFFF, 0x00000000);
			if (iVar2 != 0x00000000)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 0x8FD54EBB:
			return 0x00000000;
			break;
	}
	return 0xFFFFFFFF;
}

int func_574(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_184507[iParam0 /*876*/].f_112.f_153 != 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_575()
{
	return func_28(0x0000198E, 0xFFFFFFFF, 0x00000000) != 0x00000000;
}

bool func_576()
{
	return func_28(0x00001813, 0xFFFFFFFF, 0x00000000) != 0x00000000;
}

bool func_577()
{
	return func_28(0x00001504, 0xFFFFFFFF, 0x00000000) != 0x00000000;
}

bool func_578()
{
	return func_28(0x00000EF4, 0xFFFFFFFF, 0x00000000) != 0x00000000;
}

bool func_579()
{
	return func_28(0x00000C97, 0xFFFFFFFF, 0x00000000) != 0x00000000;
}

bool func_580()
{
	return func_28(0x00001503, 0xFFFFFFFF, 0x00000000) != 0x00000000;
}

int func_581()
{
	int iVar0;
	
	iVar0 = func_137();
	if (iVar0 != func_11())
	{
		return Global_18D84D[iVar0 /*615*/].f_B.f_62;
	}
	return 0x00000000;
}

int func_582(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_108 != 0x00000000;
	}
	return 0x00000000;
}

int func_583(int iParam0)
{
	if (func_44(iParam0) == 0x000000E1 || func_44(iParam0) == 0x000000E2)
	{
		return func_93(iParam0);
	}
	return 0xFFFFFFFF;
}

var func_584()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_284(unk_0xD803B885F5E47A62(), iVar0))
		{
			unk_0x5D96D8530B3D0904(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_585()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_586())
	{
		return;
	}
	if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000001))
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(func_16())))
	{
		return;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(func_16()), 0x00000000) };
	vVar1 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), 0x00000000) };
	fVar2 = SYSTEM::VDIST(vVar0, vVar1);
	if (fVar2 < 25f)
	{
		unk_0x922D0EFFF8F2403B(0x00000002, vVar0 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uLocal_94[0x00000000], uLocal_94[0x00000001], uLocal_94[0x00000002], 0x00000064, 0x00000001, 0x00000001, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
}

int func_586()
{
	if (((func_624(0x000000A4) || func_68()) || !func_587(0x00000001, 0x00000001, 0x00000001, 0x00000000)) || iLocal_80 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_587(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_623(unk_0xD803B885F5E47A62(), 0x0000001D))
	{
		return 0x00000000;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0x00000015))
	{
		return 0x00000000;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0x00000019))
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
	if (!func_489(unk_0xD803B885F5E47A62()))
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
	if (func_622(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_621())
	{
		return 0x00000000;
	}
	if (func_551())
	{
		return 0x00000000;
	}
	if (func_620())
	{
		return 0x00000000;
	}
	if (func_545())
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	if (func_543(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!func_547())
	{
		return 0x00000000;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0x00000000) || func_71(unk_0xD803B885F5E47A62(), 0x00000003))
	{
		return 0x00000000;
	}
	if ((func_71(unk_0xD803B885F5E47A62(), 0x0000000C) || func_71(unk_0xD803B885F5E47A62(), 0x0000000E)) || func_71(unk_0xD803B885F5E47A62(), 0x0000000D))
	{
		return 0x00000000;
	}
	if (func_613(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
	{
		if (!func_598())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (func_597())
		{
			return 0x00000000;
		}
	}
	if (Global_195C36)
	{
		return 0x00000000;
	}
	if (func_596(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_595())
	{
		return 0x00000000;
	}
	if (func_594(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if ((func_593(unk_0xD803B885F5E47A62()) && func_592(unk_0xD803B885F5E47A62()) == 0x0000007B) && !bParam3)
	{
		return 0x00000000;
	}
	if (func_591())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000004))
	{
		return 0x00000000;
	}
	if (func_590(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_589(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!func_76(unk_0xD803B885F5E47A62()))
	{
		if (func_588(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_588(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_19FCF7[iVar0 /*13*/].f_C != 0x00000000;
	}
	return 0x00000000;
}

int func_589(int iParam0)
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

int func_590(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_105.f_4 != 0x00000000 || Global_25033E[iParam0 /*421*/].f_105.f_5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_591()
{
	return Global_199459.f_10CF != 0xFFFFFFFF;
}

int func_592(int iParam0)
{
	if (iParam0 != func_11() && func_5(iParam0, 0x00000001, 0x00000001))
	{
		return Global_25033E[iParam0 /*421*/].f_136.f_E;
	}
	return 0xFFFFFFFF;
}

int func_593(int iParam0)
{
	if (iParam0 != func_11() && func_5(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000003);
	}
	return 0x00000000;
}

int func_594(int iParam0)
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

int func_595()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_596(int iParam0)
{
	if (!func_5(iParam0, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

bool func_597()
{
	return Global_181EC.f_15A > 0x00000000;
}

int func_598()
{
	int iVar0;
	
	iVar0 = func_44(unk_0xD803B885F5E47A62());
	if (((func_384(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C) || func_612(unk_0xD803B885F5E47A62())) || func_611(unk_0xD803B885F5E47A62())) || func_610(unk_0xD803B885F5E47A62()))
	{
		if (((iVar0 == 0x000000A7 || iVar0 == 0x000000A8) || iVar0 == 0x000000B2) || iVar0 == 0x000000BC)
		{
			return 0x00000001;
		}
	}
	if (func_609(unk_0xD803B885F5E47A62()))
	{
		if (func_104(iVar0) || func_419(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_61(unk_0xD803B885F5E47A62()))
	{
		if (func_419(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_608(unk_0xD803B885F5E47A62()))
	{
		if (func_97(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_607(unk_0xD803B885F5E47A62()))
	{
		if (func_96(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_606(unk_0xD803B885F5E47A62()))
	{
		if (func_95(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_605(unk_0xD803B885F5E47A62()))
	{
		if (func_604(iVar0))
		{
			return 0x00000001;
		}
	}
	if (func_603(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (func_602(iVar0))
		{
			if (func_600(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
		}
	}
	if (func_599(unk_0xD803B885F5E47A62()))
	{
		if (func_88(iVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_599(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

int func_600(int iParam0)
{
	if (func_601(iParam0) != func_11())
	{
		return func_601(iParam0) == func_85(iParam0);
	}
	return 0x00000000;
}

int func_601(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_602(int iParam0)
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

int func_603(int iParam0, bool bParam1)
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
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_11())
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000C;
			}
		}
	}
	return 0x00000000;
}

int func_604(int iParam0)
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

int func_605(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_606(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000009;
			}
		}
	}
	return 0x00000000;
}

int func_607(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000007;
			}
		}
	}
	return 0x00000000;
}

int func_608(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000004;
			}
		}
	}
	return 0x00000000;
}

int func_609(int iParam0)
{
	if (func_383(Global_184507[iParam0 /*876*/].f_112.f_1C, 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_610(int iParam0)
{
	if (func_385(Global_184507[iParam0 /*876*/].f_112.f_1C, 0x00000000, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_611(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_612(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_613(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_612(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam3)
	{
		if (func_61(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam4)
	{
		if (func_611(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam5)
	{
		if (func_608(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam6)
	{
		if (func_607(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam7)
	{
		if (func_606(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam8)
	{
		if (func_619(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam9)
	{
		if (func_605(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam10)
	{
		if (func_618(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam11)
	{
		if (func_603(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (!bParam12)
	{
		if (func_617(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam13)
	{
		if (func_599(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam14)
	{
		if (func_616(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam15)
	{
		if (func_615(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam16)
	{
		if (func_614(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_614(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000011;
			}
		}
	}
	return 0x00000000;
}

int func_615(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000010;
			}
		}
	}
	return 0x00000000;
}

int func_616(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000F;
			}
		}
	}
	return 0x00000000;
}

int func_617(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000D;
			}
		}
	}
	return 0x00000000;
}

int func_618(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_619(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_11())
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000008;
			}
		}
	}
	return 0x00000000;
}

bool func_620()
{
	return Global_14086D;
}

bool func_621()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

int func_622(int iParam0)
{
	if (func_542(iParam0, 0x00000001, 0x00000000))
	{
		if (Global_184507[iParam0 /*876*/] != 0x00000006)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_623(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_5, iParam1);
}

int func_624(int iParam0)
{
	if (!func_117() && !func_240(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (!func_65(unk_0xD803B885F5E47A62()))
		{
			if (func_68())
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

void func_625()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000000))
	{
		return;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(func_16()), 0x00000000) };
	vVar1 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), 0x00000000) };
	fVar2 = SYSTEM::VDIST(vVar0, vVar1);
	if (fVar2 < 25f)
	{
		if (fVar2 < 5f)
		{
			fVar4 = 175f;
		}
		else
		{
			fVar3 = (1f - (func_627(fVar2, 5f, 25f) / 25f));
			fVar4 = func_626(26f, 175f, fVar3);
		}
		unk_0x5E858A00EAFA5B24(0x00000000, 0x000003E8, SYSTEM::ROUND(fVar4));
	}
}

float func_626(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_627(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_628(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 > 0x0000001F)
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[iParam0 /*3*/].f_2, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_629(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset");
	}
	unk_0x5D96D8530B3D0904(&iVar0, iParam1);
	unk_0xB7E567188872123E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset", iVar0);
}

int func_630(int iParam0, int iParam1)
{
	if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
	{
		if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"))
		{
			if (unk_0xEAE0D21A50E6C7F4(unk_0x1E2DFB0EF4BB4566(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"), iParam1))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_631()
{
	if (!func_632(unk_0xD803B885F5E47A62()))
	{
		func_80(0x00000019);
	}
}

bool func_632(int iParam0)
{
	return func_436(iParam0, 0x00000019);
}

void func_633(int iParam0)
{
	if (iLocal_80 != 0x00000002 && iLocal_80 != 0x00000003)
	{
		func_500();
		return;
	}
	if (func_586())
	{
		func_500();
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_656(0x00000056, "GB_HTB_BMT0", "GB_HTB_BMS0", func_657(func_16()), iLocal_81, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000002, 0xFFFFFFFF);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000056, "GB_HTB_BMT0", "GB_HTB_BMS1", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000056, "GB_HTB_BMT0", "GB_HTB_BMS2", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_654(0x00000057, Local_107.f_5, 0xFFFFFFFF, "GB_HTB_BMS3", "GB_WINNER", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_654(0x00000058, func_6(), 0xFFFFFFFF, "GB_HTB_BMS4", "GB_WORK_OVER", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x00000005:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000057, "GB_WINNER", "GB_HTB_BMS5", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x00000006:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000058, "GB_WORK_OVER", "GB_HTB_BMS5", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x00000007:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000058, "GB_WORK_OVER", "GB_HTB_BMS6", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x00000008:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_654(0x00000058, func_6(), 0xFFFFFFFF, "GB_HTB_BMS7", "GB_WORK_OVER", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x00000009:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_634(0x00000058, "GB_WORK_OVER", "GB_HTB_BMS8", func_648(), iLocal_81, func_6(), 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000002, 0xFFFFFFFF, 0x00000002);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x0000000A:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000057, "GB_WINNER", "GB_HTB_BMS9", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x0000000B:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000057, "GB_WINNER", "GB_HTB_BMS10", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x0000000C:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000058, "GB_WORK_OVER", "GB_HTB_BMS11", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x0000000D:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000058, "GB_WORK_OVER", "GB_HTB_BMS12", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x0000000E:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000058, "GB_WORK_OVER", "GB_HTB_BMS13", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x0000000F:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000058, "GB_WORK_OVER", "GB_HTB_BMS14", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x00000010:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(0x00000058, "GB_WORK_OVER", "GB_HTB_BMS15", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 0x00000011:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_654(0x00000058, func_6(), 0xFFFFFFFF, "GB_HTB_BMS16", "GB_WORK_OVER", 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
	}
}

int func_634(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
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
	func_647(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = iParam4;
	Var0.f_47 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_48 = iParam12;
	if (iParam14 != 0x00000002)
	{
		Var0.f_47 = iParam14;
	}
	func_501(&(Var0.f_45), 0x00000004);
	return func_635(&Var0);
}

int func_635(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 0x00000001)
	{
		if (Global_2537E2.f_BE5)
		{
			return 0x00000000;
		}
	}
	func_646(uParam0, uParam0->f_11);
	func_645(uParam0);
	if (func_185())
	{
		func_645(uParam0);
	}
	if (func_644(uParam0->f_1))
	{
		func_637();
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
				func_637();
			}
			return 0x00000001;
		}
		else
		{
			if (uParam0->f_1 == 0x00000001)
			{
				func_501(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000002);
				Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			}
			if (uParam0->f_1 == 0x00000056 && !func_636(uParam0->f_45, 0x00000080))
			{
				if (func_505(Global_2537E2.f_AA3[iVar0 /*80*/].f_1))
				{
					Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
					func_501(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_636(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_637()
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
	func_638();
	if (bVar0)
	{
		Global_12C5A = 0x00000000;
	}
}

void func_638()
{
	Global_2537E2.f_BE7 = 0x00000000;
	Global_2537E2.f_BE7.f_242 = 0x00000000;
	func_642(&(Global_2537E2.f_BE7.f_1));
	Global_2537E2.f_BE7.f_1.f_1 = 0x00000000;
	func_639(&(Global_2537E2.f_BE7.f_1));
}

void func_639(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_641(0x00000000))
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
			}
		}
	}
	func_640(0x00000000);
}

void func_640(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_641(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_642(var uParam0)
{
	func_643(uParam0);
	uParam0->f_23A = 0x00000000;
	uParam0->f_1F = 0x00000000;
	uParam0->f_38 = 0x00000000;
	uParam0->f_237 = 0x00000000;
	uParam0->f_239 = 0x00000000;
}

void func_643(var uParam0)
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

int func_644(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 0x00000003 || iParam0 == 0x00000004) || iParam0 == 0x00000005) || iParam0 == 0x00000006) || iParam0 == 0x0000000B) || iParam0 == 0x0000000C) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E) || iParam0 == 0x00000018) || iParam0 == 0x00000020) || iParam0 == 0x0000001F) || iParam0 == 0x0000001A) || iParam0 == 0x00000019) || iParam0 == 0x00000038) || iParam0 == 0x00000007) || iParam0 == 0x00000008) || iParam0 == 0x00000009) || iParam0 == 0x0000000A) || iParam0 == 0x00000068) || iParam0 == 0x00000064) || iParam0 == 0x00000067) || iParam0 == 0x00000069) || iParam0 == 0x0000006E)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_645(var uParam0)
{
	if (func_507(uParam0->f_1))
	{
		uParam0->f_48 = func_470();
	}
}

void func_646(var uParam0, int iParam1)
{
	if (func_507(uParam0->f_1))
	{
		uParam0->f_49 = 0x00000001;
	}
	if (iParam1 == func_11() || !func_5(iParam1, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_505(uParam0->f_1))
	{
		if (uParam0->f_47 == 0x00000001)
		{
			uParam0->f_49 = func_208(iParam1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
		}
	}
}

void func_647(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_11 = func_11();
	uParam1->f_12 = func_11();
	uParam1->f_13 = func_11();
	uParam1->f_14 = func_11();
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

char* func_648()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_85(unk_0xD803B885F5E47A62());
	if (iVar0 != func_11())
	{
		if (iVar0 != unk_0xD803B885F5E47A62())
		{
			if (((func_436(iVar0, 0x0000001C) || func_436(unk_0xD803B885F5E47A62(), 0x0000001C)) || func_653(iVar0)) && !func_652(iVar0))
			{
				return func_650(iVar0, 0x00000000);
			}
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0x00000000, 0xFFFFFFFF, 0x00000001))
			{
				return func_650(iVar0, 0x00000000);
			}
		}
		sVar1 = func_649(&(Global_18D84D[iVar0 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar1))
		{
			return func_650(iVar0, 0x00000000);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_649(var uParam0)
{
	return uParam0;
}

char* func_650(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_51(iParam0, 0x00000001))
		{
			return func_651();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_651()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

int func_652(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_160(iParam0) };
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

int func_653(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_11())
	{
		Var0 = { func_160(iParam0) };
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

int func_654(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_647(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_11 = iParam1;
	Var0.f_47 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_48 = iParam7;
	if (iParam8 != 0x00000000)
	{
		func_501(&(Var0.f_45), iParam8);
	}
	return func_635(&Var0);
}

int func_655(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_647(iParam0, &Var0, 0xFFFFFFFF, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	if (iParam7 != 0x00000000)
	{
		func_501(&(Var0.f_45), iParam7);
	}
	return func_635(&Var0);
}

int func_656(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_11();
	iVar1 = func_11();
	iVar2 = func_11();
	return func_634(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 0x00000002);
}

char* func_657(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		sVar0 = func_649(&(Global_18D84D[iParam0 /*615*/].f_B.f_68));
		return sVar0;
	}
	if (Global_18D84D[iParam0 /*615*/].f_B.f_78 != Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_78)
	{
		sVar0 = func_650(iParam0, 0x00000000);
		return sVar0;
	}
	if (((func_436(iParam0, 0x0000001C) || func_436(unk_0xD803B885F5E47A62(), 0x0000001C)) || func_653(iParam0)) && !func_652(iParam0))
	{
		return func_650(iParam0, 0x00000000);
	}
	iVar1 = func_85(iParam0);
	if (iVar1 != func_11())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0x00000000, 0xFFFFFFFF, 0x00000001))
			{
				return func_650(iVar1, 0x00000000);
			}
		}
	}
	if (iVar1 != func_11())
	{
		sVar0 = func_649(&(Global_18D84D[iVar1 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar0))
		{
			return func_650(iVar1, 0x00000000);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_658()
{
	if (((((((func_661("GB_HTB_HR1", func_657(func_16()), func_662(func_16())) || func_660("GB_HTB_HR0", func_657(func_16()), func_662(func_16()), "GB_HTB_BLP", func_662(func_16()))) || func_659("GB_HTB_HG0", "GB_HTB_BLP", func_662(func_16()))) || func_34("GB_HTB_HELP2")) || func_34("GB_HTB_HELP3")) || func_34("GB_HTB_HELP4")) || func_34("GB_HTB_HELP5")) || func_34("GB_HTB_HELP7"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
}

bool func_659(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	if (!iParam2 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0x6B012227B3921E18(sParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

bool func_660(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	unk_0xCECE25C7ECD44603(sParam0);
	if (!iParam2 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	if (!iParam4 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam4);
	}
	unk_0x6B012227B3921E18(sParam3);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

bool func_661(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	if (!iParam2 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_662(int iParam0)
{
	int iVar0;
	
	iVar0 = func_225(iParam0);
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_223(iVar0);
	}
	return 0x00000001;
}

int func_663()
{
	if ((func_5(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) && !unk_0x798A3F1296751F46()) && !func_552())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_664(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_11())
	{
		if (!bParam2)
		{
			if (func_665(iParam0, iParam1))
			{
				return 0x00000000;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_11())
		{
			return iParam1 == Global_18D84D[iParam0 /*615*/].f_B;
		}
	}
	return 0x00000000;
}

int func_665(int iParam0, int iParam1)
{
	if (iParam1 != func_11())
	{
		if (iParam0 != func_11())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_11())
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

void func_666(int iParam0)
{
	if (func_586())
	{
		func_658();
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0x00000000))
				{
					func_671("GB_HTB_HB0", "GB_HTB_BLP", func_662(func_16()), 0xFFFFFFFF);
					func_49(0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0x00000000))
				{
					func_670("GB_HTB_HR0", func_657(func_16()), func_662(func_16()), "GB_HTB_BLP", func_662(func_16()), 0xFFFFFFFF);
					func_49(0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0x00000000))
				{
					func_53("GB_HTB_HELP2", 0xFFFFFFFF);
					func_49(0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0x00000000))
				{
					func_53("GB_HTB_HELP3", 0xFFFFFFFF);
					func_49(0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 0x00000004:
			if (func_672(0x00000000))
			{
				func_53("GB_HTB_HELP4", 0xFFFFFFFF);
				func_49(0x00000000);
			}
			break;
		
		case 0x00000005:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0x00000000))
				{
					func_53("GB_HTB_HELP5", 0xFFFFFFFF);
					func_49(0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 0x00000006:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0x00000000))
				{
					func_671("GB_HTB_HG0", "GB_HTB_BLP", func_662(func_16()), 0xFFFFFFFF);
					func_49(0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 0x00000007:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0x00000000))
				{
					func_53("GB_HTB_HELP7", 0xFFFFFFFF);
					func_49(0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
					func_668(0x9AECC412, func_669(0x00000000));
				}
			}
			break;
		
		case 0x00000008:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0x00000000))
				{
					func_667("GB_HTB_HR1", func_657(func_16()), func_662(func_16()), 0xFFFFFFFF);
					func_49(0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
					func_668(0x9AECC412, func_669(0x00000000));
				}
			}
			break;
	}
}

void func_667(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam3);
}

void func_668(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = 0x231D58EE;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000270F);
	if (!iParam1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2())
		{
			unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000004, iParam1);
		}
	}
}

int func_669(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_5(iVar2, 0x00000000, 0x00000000))
		{
			if (bParam0)
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_108[iVar1 /*3*/].f_2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
			else if (iVar2 != Local_107.f_5)
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_108[iVar1 /*3*/].f_2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_670(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	if (!iParam4 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam4);
	}
	unk_0x6B012227B3921E18(sParam3);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam5);
}

void func_671(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0x00000000)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam3);
}

int func_672(bool bParam0)
{
	if ((((!func_552() && !unk_0x798A3F1296751F46()) && !unk_0x0178C60FEA5C5A75()) && func_5(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !func_79())
	{
		if (bParam0)
		{
			if (!unk_0xFEBC1E4EC9E001F0())
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

int func_673()
{
	if (unk_0xD803B885F5E47A62() == func_16())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_674()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	
	iVar0 = 0x00000001;
	iLocal_106 = iLocal_106;
	if (func_21(&(Local_107.f_C)))
	{
		if (func_683(Local_107.f_C, (Global_40001.f_30CA - 0x000088B8), 0x00000000))
		{
			func_682(&iLocal_105, 0x00000003, 0x00000001);
		}
		if (func_683(Local_107.f_C, (Global_40001.f_30CA - 0x00007530), 0x00000000))
		{
			func_682(&iLocal_105, 0x00000004, 0x00000001);
		}
		if (func_683(Local_107.f_C, (Global_40001.f_30CA - 0x00006978), 0x00000000))
		{
			func_682(&iLocal_105, 0x00000005, 0x00000001);
		}
		if (func_683(Local_107.f_C, Global_40001.f_30CA, 0x00000000))
		{
			func_682(&iLocal_105, 0x00000002, 0x00000001);
		}
	}
	if (func_680(unk_0xD803B885F5E47A62(), Global_40001.f_30CE, &uVar1, func_682(&iLocal_105, 0x0000000D, 0xFFFFFFFF), 0x42F00000, 0x00000000))
	{
		func_682(&iLocal_105, 0x0000000D, 0x00000001);
	}
	else
	{
		func_682(&iLocal_105, 0x0000000D, 0x00000000);
	}
	if (bLocal_97 || (!func_678() && !func_682(&iLocal_105, 0x0000000D, 0xFFFFFFFF)))
	{
		iVar0 = 0x00000000;
	}
	switch (func_677(unk_0x57270EE11514DC67()))
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!func_682(&iLocal_105, 0x0000000C, 0x00000001))
			{
				iLocal_106 = unk_0x2B6E0A53779D29EA();
			}
			if (iVar0 && !func_682(&iLocal_105, 0x00000003, 0xFFFFFFFF))
			{
				if (!func_682(&iLocal_105, 0x00000001, 0xFFFFFFFF))
				{
					sVar2 = func_676(func_678(), "BG_HUNT_BOSS_DEFEND_START", "BG_HUNT_BOSS_ATTACK_START");
					if (unk_0x13896FDECC859926(sVar2) && func_682(&iLocal_105, 0x0000000B, 0xFFFFFFFF))
					{
						unk_0xC92DB9682A650680(sVar2);
						func_682(&iLocal_105, 0x00000001, 0x00000001);
					}
					if (!func_682(&iLocal_105, 0x0000000B, 0xFFFFFFFF))
					{
						func_675(0x00000001);
					}
				}
			}
			else if (func_682(&iLocal_105, 0x00000001, 0xFFFFFFFF) && !func_682(&iLocal_105, 0x00000003, 0xFFFFFFFF))
			{
				if (unk_0x13896FDECC859926("BG_HUNT_STOP"))
				{
					unk_0xC92DB9682A650680("BG_HUNT_STOP");
					func_675(0x00000000);
					func_682(&iLocal_105, 0x00000001, 0x00000000);
				}
			}
			if (func_682(&iLocal_105, 0x00000003, 0xFFFFFFFF))
			{
				if (func_682(&iLocal_105, 0x00000001, 0xFFFFFFFF))
				{
					if (unk_0x13896FDECC859926("APT_PRE_COUNTDOWN_STOP"))
					{
						unk_0xC92DB9682A650680("APT_PRE_COUNTDOWN_STOP");
						func_682(&iLocal_105, 0x00000001, 0x00000000);
					}
				}
			}
			if (func_682(&iLocal_105, 0x00000004, 0xFFFFFFFF))
			{
				if ((!func_682(&iLocal_105, 0x00000007, 0xFFFFFFFF) && !func_682(&iLocal_105, 0x00000005, 0xFFFFFFFF)) && !(func_586() || iLocal_80 != 0x00000003))
				{
					if (unk_0x13896FDECC859926("APT_COUNTDOWN_30S"))
					{
						unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000001);
						unk_0xC92DB9682A650680("APT_COUNTDOWN_30S");
						func_682(&iLocal_105, 0x00000007, 0x00000001);
					}
				}
				if ((!func_682(&iLocal_105, 0x00000006, 0xFFFFFFFF) && !func_682(&iLocal_105, 0x00000005, 0xFFFFFFFF)) && func_682(&iLocal_105, 0x00000007, 0xFFFFFFFF))
				{
					unk_0xBEF52C1D400C0A44(0x00000000);
					func_682(&iLocal_105, 0x00000006, 0x00000001);
				}
			}
			break;
		
		case 0x00000002:
			if (!func_682(&iLocal_105, 0x00000008, 0xFFFFFFFF) && func_682(&iLocal_105, 0x00000007, 0xFFFFFFFF))
			{
				if (unk_0x13896FDECC859926("APT_FADE_IN_RADIO"))
				{
					unk_0xC92DB9682A650680("APT_FADE_IN_RADIO");
					func_682(&iLocal_105, 0x00000008, 0x00000001);
				}
			}
			if (func_682(&iLocal_105, 0x00000001, 0xFFFFFFFF))
			{
				if (unk_0x13896FDECC859926("BG_HUNT_STOP"))
				{
					unk_0x38DC636F3D2D2FA8("APT_COUNTDOWN_30S_KILL");
					unk_0xC92DB9682A650680("BG_HUNT_STOP");
					func_682(&iLocal_105, 0x00000001, 0x00000000);
				}
			}
			if (func_682(&iLocal_105, 0x00000007, 0xFFFFFFFF) && !func_682(&iLocal_105, 0x00000002, 0xFFFFFFFF))
			{
				if (unk_0x13896FDECC859926("APT_COUNTDOWN_30S_KILL"))
				{
					func_682(&iLocal_105, 0x00000007, 0x00000000);
					unk_0xC92DB9682A650680("APT_COUNTDOWN_30S_KILL");
				}
			}
			if (func_682(&iLocal_105, 0x0000000B, 0xFFFFFFFF))
			{
				func_675(0x00000000);
			}
			break;
	}
	if (func_682(&iLocal_105, 0x00000006, 0xFFFFFFFF) && (func_682(&iLocal_105, 0x00000005, 0xFFFFFFFF) || func_677(unk_0x57270EE11514DC67()) == 0x00000002))
	{
		unk_0xBEF52C1D400C0A44(0x00000001);
		unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000000);
		func_682(&iLocal_105, 0x00000006, 0x00000000);
	}
	if (func_21(&(Local_107.f_10)) && func_683(Local_107.f_10, 0x00002710, 0x00000000))
	{
		if (!func_682(&iLocal_105, 0x0000000A, 0xFFFFFFFF))
		{
			iLocal_104 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(iLocal_104, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0x00000000);
			func_682(&iLocal_105, 0x0000000A, 0x00000001);
		}
	}
	else if (func_682(&iLocal_105, 0x0000000A, 0xFFFFFFFF))
	{
		unk_0x55D0A2DB35045A35(iLocal_104);
		iLocal_104 = 0xFFFFFFFF;
		func_682(&iLocal_105, 0x0000000A, 0x00000000);
	}
}

void func_675(bool bParam0)
{
	if (bParam0)
	{
		unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000001);
		func_682(&iLocal_105, 0x0000000B, 0x00000001);
	}
	else
	{
		unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
		func_682(&iLocal_105, 0x0000000B, 0x00000000);
	}
}

char* func_676(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_677(int iParam0)
{
	return vLocal_108[iParam0 /*3*/].f_1;
}

bool func_678()
{
	return func_679(func_16(), 0x00000001);
}

int func_679(int iParam0, bool bParam1)
{
	return func_664(unk_0xD803B885F5E47A62(), iParam0, bParam1);
}

int func_680(int iParam0, int iParam1, var uParam2, bool bParam3, float fParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = unk_0x9539D44F3E4492F6(iParam0);
	fVar1 = func_681(bParam3, 30f, 0f);
	fVar2 = 4f;
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 0x00000000;
	}
	*uParam2 = func_15(iVar0, Local_107.f_7, 0x00000000);
	if (*uParam2 > (IntToFloat(iParam1) + (fVar1 * fVar2)))
	{
		return 0x00000000;
	}
	fVar3 = unk_0xEE9925602B29903C(iVar0);
	*uParam2 = func_14(*uParam2, fVar3);
	if (fVar3 > (fParam4 + fVar1) && !bParam5)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_681(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_682(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = unk_0xEAE0D21A50E6C7F4(*iParam0, iParam1);
	if (iParam2 == 0x00000000)
	{
		unk_0x0674E58A79778E99(iParam0, iParam1);
	}
	else if (iParam2 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(iParam0, iParam1);
	}
	return bVar0;
}

int func_683(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (unk_0x8CD06866876216F2() && !bParam3)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iParam0)) >= iParam2)
		{
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), iParam0)) >= iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_684()
{
	switch (vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0x00000001:
			if (func_673())
			{
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000003))
				{
					if (func_685(0x00000052, "GB_INTTXT_HBB", 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
					{
						unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000003);
					}
				}
			}
			else if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000003))
				{
					if (func_685(0x00000052, "GB_INTTXT_HBG", 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
					{
						unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000003);
					}
				}
			}
			break;
	}
}

int func_685(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000A);
	iVar0 = 0x00000000;
	sVar1 = "NULL";
	iVar2 = 0xFFFFFF9D;
	sVar3 = "NULL";
	iVar4 = 0x00000000;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 0x00000003;
	if (func_687(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
	{
		if (bParam7 == 0x00000001)
		{
			Global_1F7F = iParam6;
			Global_1F1E[0x00000003 /*6*/] = { func_686(iParam0) };
			Global_1F6B = iParam0;
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

struct<4> func_686(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_687(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_699();
	iVar0 = 0x00000000;
	switch (iParam16)
	{
		case 0x00000000:
			if (Global_4C1E == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_4C1E == 0x00000002)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_4C1E == 0x00000001)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000000;
			break;
	}
	if (iVar0 == 0x00000000)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0x00000000;
			}
		}
		if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000001)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0x00000000)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	if (func_698() == 0x00000000)
	{
		func_696();
		return 0x00000000;
	}
	func_695(Global_5570);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/]), sParam1, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_11 = uParam0;
	if (iParam2 == 0x00000000)
	{
	}
	else
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_18 = iParam2;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_19 = iParam7;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1A = uParam8;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1D = uParam9;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1E = uParam12;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1F = uParam11;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1C = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_21), sParam4, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_32), sParam5, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53), sParam15, 64);
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000A))
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000001;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000001;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000001;
		Global_1F7E = 0x00000004;
		func_694(0x00000000);
		func_694(0x00000002);
		func_694(0x00000001);
	}
	else
	{
		func_699();
		switch (iParam16)
		{
			case 0x00000003:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[Global_4C1E] = 0x00000001;
				break;
			
			case 0x00000000:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000001;
				break;
			
			case 0x00000002:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000001;
				break;
			
			case 0x00000001:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000001;
				break;
		}
		if (iParam16 == 0x00000003)
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					func_694(0x00000000);
					Global_1F7E = 0x00000000;
					break;
				
				case 0x00000001:
					func_694(0x00000001);
					Global_1F7E = 0x00000001;
					break;
				
				case 0x00000002:
					func_694(0x00000002);
					Global_1F7E = 0x00000002;
					break;
				
				case 0x00000003:
					func_694(0x00000003);
					Global_1F7E = 0x00000003;
					break;
				
				default:
					Global_1F7E = 0x00000004;
					break;
				}
			}
	}
	if (iParam7 == 0x00000001)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000A))
		{
			Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000001;
			Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000001;
			Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000001;
		}
		else
		{
			switch (iParam16)
			{
				case 0x00000003:
					Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000000:
					Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000002:
					Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000001:
					Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000001;
					break;
				}
			}
	}
	Global_5572[Global_5570] = 0x00000000;
	if (bParam10)
	{
		func_699();
		if (Global_4BE5)
		{
			StringCopy(&Global_4C13, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
					break;
				
				case 0x00000002:
					StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 0x00000001:
					StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000001)
		{
			if (!func_620())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_693(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_690(0x00000001);
			func_693(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_688(uParam0, sParam1);
	return 0x00000001;
}

void func_688(var uParam0, char* sParam1)
{
	if (!func_689())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0x629E0CB1, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

int func_689()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_11())
	{
		return 0x00000000;
	}
	if (func_76(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_690(int iParam0)
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
	
	Global_5571 = 0x00000000;
	Global_1F19 = iParam0;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		Global_1EF5[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		iVar1 = 0x00000000;
		if (func_692(0x0000000E))
		{
			while (iVar1 < 0x00000022)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0x00000000)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 0x00000003)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000003))
								{
									iVar2 = 0x0000002A;
									Global_4CD4 = 0x00000001;
								}
								else
								{
									iVar2 = 0x000000FF;
									Global_4CD4 = 0x00000000;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							Global_1EF5[iVar0] = 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 0x00000022)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0x00000000)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 0x00000001)
							{
								iVar3 = 0x00000000;
								while (iVar3 < 0x00000023)
								{
									if (Global_1B416.f_3738[iVar3 /*104*/].f_18 != 0x00000000)
									{
										if (Global_1B416.f_3738[iVar3 /*104*/].f_1C == 0x00000000)
										{
											if (Global_1B416.f_3738[iVar3 /*104*/].f_63[Global_4C1E] == 0x00000001)
											{
												Global_5571++;
											}
										}
									}
									iVar3++;
								}
								func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000007)
							{
								if (Global_12B4E)
								{
									iVar4 = 0x00000000;
									iVar4 = Global_4121D3;
									iVar5 = 0x00000000;
									while (iVar5 < 0x0000000C)
									{
										if (Global_4121D4[iVar5 /*104*/].f_18 != 0x00000000)
										{
											if (Global_4121D4[iVar5 /*104*/].f_1C == 0x00000000)
											{
												if (Global_4121D4[iVar5 /*104*/].f_63[Global_4C1E] == 0x00000001)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									switch (Global_4C1E)
									{
										case 0x00000000:
											iVar6 = Global_A66F;
											break;
										
										case 0x00000001:
											iVar6 = Global_A670;
											break;
										
										case 0x00000002:
											iVar6 = Global_A671;
											break;
										
										default:
											break;
									}
									func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(Global_1CC2);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000002)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000006))
								{
									iVar7 = 0x0000002A;
								}
								else
								{
									iVar7 = 0x000000FF;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000003)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000003))
								{
									iVar8 = 0x0000002A;
									Global_4CD4 = 0x00000001;
								}
								else
								{
									iVar8 = 0x000000FF;
									Global_4CD4 = 0x00000000;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000008)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 0x00000017 && unk_0x7F8A39872A07D2CE(&(Global_1CC3[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000006))
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							Global_1EF5[iVar0] = 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_691(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_453(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_453(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_453(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_453(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_453(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

bool func_692(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_693(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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
	unk_0x7E60D21B163E9D56();
}

void func_694(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1B416.f_36DE[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_695(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_1B416.f_3738[iParam0 /*104*/].f_12 = iVar0;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_696()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000018;
		iVar1 = 0x00000021;
	}
	else
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000014;
	}
	iVar2 = iVar0;
	Global_5570 = 0x00000022;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 0xFFFFFFFF;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (!func_697(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
		{
			Global_5570 = iVar2;
		}
		iVar2++;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_18 = 0x00000001;
}

int func_697(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0x00000000;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 0x00000001;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0x00000000;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 0x00000001;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 0x00015180);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 0x00015180);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_698()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000018;
		iVar1 = 0x00000021;
	}
	else
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000014;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000000)
		{
			Global_5570 = iVar2;
			return 0x00000001;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_5570 = 0x00000022;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 0xFFFFFFFF;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000000 || Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000001)
		{
			if (!func_697(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
			{
				Global_5570 = iVar2;
			}
		}
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000002)
		{
		}
		iVar2++;
	}
	if (Global_5570 == 0x00000022)
	{
		return 0x00000000;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000000;
	return 0x00000001;
}

void func_699()
{
	if (func_692(0x0000000E))
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
		Global_4C1E = func_700();
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

var func_700()
{
	func_701();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_701()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_704(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_703(unk_0x16F2683693E537C9());
			if (func_702(iVar0) && (!func_692(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_702(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_702(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_703(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_704(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_704(int iParam0)
{
	if (func_702(iParam0))
	{
		return func_705(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_705(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_706()
{
	if (func_586())
	{
		if (func_726())
		{
			func_725();
		}
		return;
	}
	if (iLocal_80 != 0x00000003)
	{
		if (func_726())
		{
			func_725();
		}
		return;
	}
	switch (func_677(unk_0x57270EE11514DC67()))
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (func_673())
			{
				if (func_21(&(Local_107.f_10)))
				{
					if (!func_723("GB_HTB_OT4"))
					{
						func_722("GB_HTB_OT4", 0x00000000);
					}
				}
				else if (!func_723("GB_HTB_OT1"))
				{
					func_722("GB_HTB_OT1", 0x00000000);
				}
			}
			else if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000000))
			{
				if (iLocal_80 == 0x00000003)
				{
					if (!func_723("GB_HTB_OT2"))
					{
						func_719("GB_HTB_OT2", "GB_BOSS_LC", iLocal_81, 0x00000000);
					}
				}
			}
			else if (func_628(unk_0x57270EE11514DC67()))
			{
				if (!func_723("GB_HTB_OT3"))
				{
					if (func_5(Local_107.f_5, 0x00000000, 0x00000001))
					{
						func_707("GB_HTB_OT3", Local_107.f_5, "GB_BOSS_LC", iLocal_81, 0x00000000);
					}
				}
			}
			break;
		
		case 0x00000002:
			if (func_726())
			{
				func_725();
			}
			break;
		
		case 0x00000003:
			if (func_726())
			{
				func_725();
			}
			break;
	}
}

void func_707(char* sParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if (func_708(sParam0, unk_0x6E524813889AECF8(iParam1), sParam2, bParam4, iParam3))
	{
		Global_140749 = 0x0000000E;
		Global_140749.f_38 = iParam3;
		Global_140749.f_36 = iParam1;
	}
}

int func_708(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
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
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam2) > 0x0000003F)
	{
		return 0x00000000;
	}
	if (func_718(sParam0, sParam1, sParam2) && Global_140749.f_38 == Global_140749.f_3A)
	{
		return 0x00000000;
	}
	func_712();
	Global_140749 = 0x0000000A;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	StringCopy(&(Global_140749.f_20), sParam2, 64);
	Global_140749.f_3A = uParam4;
	Global_140749.f_38 = uParam4;
	func_711();
	func_710(bParam3);
	func_709();
	return 0x00000001;
}

void func_709()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000001);
}

void func_710(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000000);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0x00000000);
}

void func_711()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x05265C00);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

void func_712()
{
	func_714();
	func_713(0x00000000);
}

void func_713(bool bParam0)
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

void func_714()
{
	if (!func_717())
	{
	}
	if (func_716())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_715();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_715()
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

int func_716()
{
	if (Global_140749 == 0x00000014)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_717()
{
	if (!func_716())
	{
		return 0x00000000;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_715();
	return unk_0xB165082A56EE6E7F();
}

bool func_718(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_716())
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
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C)))
	{
		return 0x00000000;
	}
	if (!unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_140749.f_10)))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam2) == unk_0x12AB0310C2281427(&(Global_140749.f_20));
}

void func_719(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_720(sParam0, sParam1, bParam3, iParam2))
	{
		Global_140749 = 0x00000013;
		Global_140749.f_38 = iParam2;
	}
}

int func_720(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
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
	if (func_721(sParam0, sParam1) && Global_140749.f_38 == Global_140749.f_3A)
	{
		return 0x00000000;
	}
	func_712();
	Global_140749 = 0x00000003;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	Global_140749.f_3A = uParam3;
	Global_140749.f_38 = uParam3;
	func_711();
	func_710(bParam2);
	func_709();
	return 0x00000001;
}

bool func_721(char* sParam0, char* sParam1)
{
	if (!func_716())
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

void func_722(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return;
	}
	if (func_723(sParam0))
	{
		return;
	}
	func_712();
	Global_140749 = 0x00000000;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_711();
	func_710(bParam1);
	func_709();
}

bool func_723(char* sParam0)
{
	if (!func_716())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		return func_724(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_724(char* sParam0)
{
	if (!func_716())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

void func_725()
{
	if (!func_716())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_712();
}

int func_726()
{
	if (!func_716())
	{
		return 0x00000000;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_727()
{
	int iVar0;
	
	if (func_586())
	{
		return;
	}
	if (iLocal_80 != 0x00000003)
	{
		return;
	}
	switch (func_677(unk_0x57270EE11514DC67()))
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (func_673())
			{
				if (func_21(&(Local_107.f_10)))
				{
					iVar0 = (0x00004E20 - func_731(&(Local_107.f_10), 0x00000000, 0x00000000));
					if (iVar0 > 0x00000000)
					{
						func_728(iVar0, "GB_HTB_TM2", 0x00000000, 0x00000000, 0x00004E20, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
					}
					else
					{
						func_728(0x00000000, "GB_HTB_TM2", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
					}
					return;
				}
			}
			if (func_21(&(Local_107.f_C)))
			{
				iVar0 = (Global_40001.f_30CA - func_731(&(Local_107.f_C), 0x00000000, 0x00000000));
				if (iVar0 > 0x00000000)
				{
					func_728(iVar0, "GB_WORK_END", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				else
				{
					func_728(0x00000000, "GB_WORK_END", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
			}
			break;
		
		case 0x00000002:
			if (iLocal_80 == 0x00000002 || iLocal_80 == 0x00000003)
			{
				if (func_21(&(Local_107.f_E)))
				{
					func_728(0x00000000, "GB_WORK_END", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
			}
			break;
	}
}

void func_728(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_730(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_729(0x00000007, iVar0);
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

void func_729(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_730(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_731(var uParam0, bool bParam1, bool bParam2)
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

void func_732()
{
	var uVar0;
	int iVar1;
	
	if (func_586())
	{
		func_751();
		return;
	}
	switch (vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0x00000000:
			if (!func_17(Local_107.f_7))
			{
				if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000001))
				{
					if (func_750(unk_0xD803B885F5E47A62(), Global_40001.f_30CE, &uVar0, 0x42F00000, 0x00000000))
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_90))
						{
							unk_0x142CC44DB769B57E(&iLocal_90);
						}
					}
					else if (!unk_0xE4EDC4B0E92C078B(iLocal_90))
					{
						iLocal_90 = unk_0x6CC513A908911CF0(Local_107.f_7);
						unk_0xF2D30B8ACAF12A39(iLocal_90, 0x00000001);
						unk_0xDC5B2F9D0CCE3A10(iLocal_90, "GB_HTB_BLIP1");
						unk_0xF412DD40DE84CE72(iLocal_90, 0x00000001);
						unk_0x0EC848EFF66DF45A(iLocal_90, 0x00001B58);
						unk_0xBC8E0A7390523199(iLocal_90, 0x000001CA);
						unk_0x2A065371C9D96655(iLocal_90, 0x0000000C);
						unk_0x516E63E474722206(iLocal_90, Global_40001.f_3043);
						func_749(&iLocal_90, iLocal_81);
					}
					if (!unk_0xE4EDC4B0E92C078B(iLocal_89))
					{
						iLocal_89 = unk_0x3F3860E60C44719E(Local_107.f_7, SYSTEM::TO_FLOAT((Global_40001.f_30CE - 0x00000001)));
						func_749(&iLocal_89, iLocal_81);
						unk_0xF2D30B8ACAF12A39(iLocal_89, 0x00000001);
						unk_0xA6B0C9C2D8FC9744(iLocal_89, 0x00000001);
						unk_0xDC5B2F9D0CCE3A10(iLocal_89, "GB_HTB_BLIP0");
					}
					if (func_748(Local_107.f_5) != iLocal_93)
					{
						iLocal_93 = func_748(Local_107.f_5);
						unk_0x7F010F50CE03A8AF(iLocal_89, iLocal_93);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (func_673())
			{
				func_746();
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000004))
				{
					if (!func_21(&(Local_107.f_10)) && !func_21(&(Local_107.f_12)))
					{
						if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000002))
						{
							func_745(0x00000001, 0x00000000);
							unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000002);
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000002))
					{
						func_745(0x00000000, 0x00000000);
						unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000002);
					}
				}
			}
			else
			{
				func_744();
				if (!func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000000))
				{
					if (bLocal_96)
					{
						if (vLocal_108[unk_0x7B9C1F53FE442D06(Local_107.f_5) /*3*/].f_1 == 0x00000001 && !unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x7B9C1F53FE442D06(Local_107.f_5) /*3*/].f_2, 0x00000002))
						{
							if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x0000000A))
							{
								func_742(Local_107.f_5, 0x000001B0, 0x00000001, 0x00000000);
								func_740(Local_107.f_5, func_741(iLocal_81), 0x00000001, 0x00000000);
								if (func_5(func_16(), 0x00000001, 0x00000001))
								{
									func_733(Local_107.f_5, 0x00000001, 0x00000000, 0x00000000);
								}
								unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x0000000A);
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x0000000A))
						{
							func_742(Local_107.f_5, 0x000001B0, 0x00000000, 0x00000000);
							func_740(Local_107.f_5, func_741(iLocal_81), 0x00000000, 0x00000000);
							if (func_5(func_16(), 0x00000001, 0x00000001))
							{
								func_733(Local_107.f_5, 0x00000000, 0x00000000, 0x00000000);
							}
							unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x0000000A);
						}
					}
				}
			}
			if (!func_17(Local_107.f_7))
			{
				if (func_750(unk_0xD803B885F5E47A62(), Global_40001.f_30CE, &uVar0, 0x42F00000, 0x00000000))
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_90))
					{
						unk_0x142CC44DB769B57E(&iLocal_90);
					}
				}
				else if (!unk_0xE4EDC4B0E92C078B(iLocal_90))
				{
					iLocal_90 = unk_0x6CC513A908911CF0(Local_107.f_7);
					unk_0xF2D30B8ACAF12A39(iLocal_90, 0x00000001);
					unk_0xDC5B2F9D0CCE3A10(iLocal_90, "GB_HTB_BLIP1");
					unk_0xF412DD40DE84CE72(iLocal_90, 0x00000001);
					unk_0x0EC848EFF66DF45A(iLocal_90, 0x00001B58);
					unk_0xBC8E0A7390523199(iLocal_90, 0x000001CA);
					unk_0x2A065371C9D96655(iLocal_90, 0x0000000C);
					unk_0x516E63E474722206(iLocal_90, Global_40001.f_3043);
					func_749(&iLocal_90, iLocal_81);
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_89))
				{
					iLocal_89 = unk_0x3F3860E60C44719E(Local_107.f_7, SYSTEM::TO_FLOAT((Global_40001.f_30CE - 0x00000001)));
					func_749(&iLocal_89, iLocal_81);
					unk_0xF2D30B8ACAF12A39(iLocal_89, 0x00000001);
					unk_0xA6B0C9C2D8FC9744(iLocal_89, 0x00000001);
					unk_0xDC5B2F9D0CCE3A10(iLocal_89, "GB_HTB_BLIP0");
					unk_0x7F010F50CE03A8AF(iLocal_89, Global_40001.f_2FCF);
				}
				if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000001) || func_240(unk_0xD803B885F5E47A62(), 0x00000001))
				{
					if (func_240(unk_0xD803B885F5E47A62(), 0x00000001))
					{
						iVar1 = func_85(unk_0xD803B885F5E47A62());
					}
					else
					{
						iVar1 = Local_107.f_5;
					}
					if (func_748(iVar1) != iLocal_93)
					{
						iLocal_93 = func_748(iVar1);
						unk_0x7F010F50CE03A8AF(iLocal_89, iLocal_93);
					}
				}
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			func_751();
			break;
	}
}

void func_733(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_736(iParam0))
	{
		return;
	}
	if (func_735(&(Global_24DDCF.f_333[iParam0]), &(Global_24DDCF.f_49E[iParam0]), &(Global_24DDCF.f_16F), bParam1, iParam0, bParam3, &uVar0))
	{
		func_734(iParam0, bParam2);
	}
}

void func_734(int iParam0, bool bParam1)
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

int func_735(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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

int func_736(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0x00000001;
	}
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_737())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_737()
{
	switch (func_739())
	{
		case 0x00000000:
			return func_738();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_738()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_739()
{
	return Global_7830;
}

void func_740(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_736(iParam0))
	{
		return;
	}
	if (func_735(&(Global_24DDCF.f_26D[iParam0]), &(Global_24DDCF.f_3D8[iParam0]), &(Global_24DDCF.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1C8[iParam0] = uParam1;
		}
	}
}

int func_741(int iParam0)
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

void func_742(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_736(iParam0))
	{
		return;
	}
	if (func_735(&(Global_24DDCF.f_24C[iParam0]), &(Global_24DDCF.f_3B7[iParam0]), &(Global_24DDCF.f_184), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1A7[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_743();
		}
	}
}

void func_743()
{
	Global_24DDCF.f_64E = 0x00000001;
}

void func_744()
{
	if (unk_0xEAE0D21A50E6C7F4(vLocal_108[func_16() /*3*/].f_2, 0x00000004))
	{
		if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000009))
		{
			if (func_16() != func_137())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Boss_Blipped", "GTAO_Magnate_Hunt_Boss_SoundSet", 0x00000000);
				unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000009);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000009))
	{
		unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000009);
	}
}

void func_745(bool bParam0, bool bParam1)
{
	if ((!unk_0x1727A44C562FBED2(Global_24DDCF.f_63B) || Global_24DDCF.f_63B == unk_0x0D0A574C76D769AC()) || bParam1)
	{
		if (bParam0)
		{
			Global_24DDCF.f_63B = unk_0x0D0A574C76D769AC();
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_2), 0x00000017);
		}
		else
		{
			Global_24DDCF.f_63B = 0xFFFFFFFF;
			unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_2), 0x00000017);
		}
	}
	else if (!bParam1)
	{
	}
}

void func_746()
{
	if (!func_673())
	{
		return;
	}
	if (func_21(&(Local_107.f_10)) && func_21(&(Local_107.f_12)))
	{
		if (func_21(&uLocal_102))
		{
			func_8(&uLocal_102);
		}
		return;
	}
	if (!func_21(&uLocal_100) && !func_21(&uLocal_102))
	{
		vLocal_98 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		func_20(&uLocal_100, 0x00000000, 0x00000000);
		iLocal_99 = 0x00000000;
	}
	else if (func_21(&uLocal_102))
	{
		if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000002))
		{
			func_745(0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000002);
		}
		if (func_19(&uLocal_102, SYSTEM::ROUND(Global_40001.f_30CD), 0x00000000))
		{
			func_8(&uLocal_102);
			unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000004);
			func_747(0x00000000, 0xFFFFFFFF, 0x000001F4, 0x000001F4, 0x00000000);
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000002))
			{
				func_745(0x00000001, 0x00000000);
				unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000002);
			}
		}
	}
	else if (func_731(&uLocal_100, 0x00000000, 0x00000000) > (0x000001F4 * iLocal_99))
	{
		if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_98) > IntToFloat(Global_40001.f_30CB))
		{
			func_8(&uLocal_100);
			if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000004))
			{
				func_20(&uLocal_102, 0x00000000, 0x00000000);
			}
		}
		else if (IntToFloat(func_731(&uLocal_100, 0x00000000, 0x00000000)) > Global_40001.f_30CC)
		{
			if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000002))
			{
				func_745(0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000002);
				func_666(0x00000007);
				func_747(0x00000001, 0xFFFFFFFF, 0x7FFFFFFF, 0x00000000, 0x00000000);
			}
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000004))
			{
				unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000004);
			}
		}
		iLocal_99++;
	}
}

void func_747(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if ((!unk_0x1727A44C562FBED2(Global_24DDCF.f_625) || Global_24DDCF.f_625 == unk_0x0D0A574C76D769AC()) || bParam4)
	{
		if (bParam0)
		{
			Global_24DDCF.f_625 = unk_0x0D0A574C76D769AC();
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_2), 0x00000013);
			Global_24DDCF.f_626 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			Global_24DDCF.f_625 = 0xFFFFFFFF;
			unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_2), 0x00000013);
		}
		Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_4 = iParam2;
		Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_5 = iParam3;
		Global_24DDCF.f_628 = iParam1;
	}
	else if (!bParam4)
	{
	}
}

int func_748(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_11())
	{
		if (!func_17(Local_107.f_7))
		{
			if (func_750(iParam0, Global_40001.f_30CE, &uVar0, 0x42F00000, 0x00000000))
			{
				return 0x00000046;
			}
		}
	}
	return Global_40001.f_2FCF;
}

void func_749(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		iVar0 = func_741(iParam1);
		unk_0x61755AC17D8F538E(*iParam0, iVar0);
	}
}

int func_750(int iParam0, int iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0x9539D44F3E4492F6(iParam0);
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 0x00000000;
	}
	*uParam2 = func_15(iVar0, Local_107.f_7, 0x00000000);
	if (*uParam2 > IntToFloat(iParam1))
	{
		return 0x00000000;
	}
	fVar1 = unk_0xEE9925602B29903C(iVar0);
	*uParam2 = func_14(*uParam2, fVar1);
	if (fVar1 > fParam3 && !bParam4)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_751()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_89))
	{
		unk_0x142CC44DB769B57E(&iLocal_89);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_90))
	{
		unk_0x142CC44DB769B57E(&iLocal_90);
	}
	if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x0000000A))
	{
		func_742(Local_107.f_5, 0x000001B0, 0x00000000, 0x00000000);
		func_740(Local_107.f_5, func_741(iLocal_81), 0x00000000, 0x00000000);
		func_733(Local_107.f_5, 0x00000000, 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x0000000A);
	}
}

void func_752()
{
	int iVar0;
	int iVar1;
	
	switch (func_677(unk_0x57270EE11514DC67()))
	{
		case 0x00000001:
			iVar0 = 0x00000000;
			while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
			{
				iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
				if (iVar1 == 0x000000B9)
				{
					func_753(iVar0);
				}
				iVar0++;
			}
			break;
	}
}

void func_753(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<6> Var4;
	int iVar5;
	
	iVar2 = func_11();
	iVar3 = func_11();
	unk_0x218F818E64020C17(0x00000001, iParam0, &Var4, 0x0000000D);
	if (unk_0xC844350D5D58C99A(Var4))
	{
		if (unk_0xEC560E589DF8370E(Var4))
		{
			iVar0 = unk_0x940C1429253D3B1B(Var4);
			if (unk_0x34BFC6F0CB887BC2(iVar0))
			{
				iVar2 = unk_0x83FACCC48B68F9D1(iVar0);
				if (unk_0xFB75B0F82CA525F6(iVar2))
				{
					if (iVar2 != func_11())
					{
						if (func_5(iVar2, 0x00000000, 0x00000000))
						{
						}
					}
				}
			}
		}
	}
	if (iVar2 == func_16())
	{
		if (unk_0xC844350D5D58C99A(Var4.f_1))
		{
			if (unk_0xEC560E589DF8370E(Var4.f_1))
			{
				iVar1 = unk_0x940C1429253D3B1B(Var4.f_1);
				if (unk_0x34BFC6F0CB887BC2(iVar1))
				{
					iVar3 = unk_0x83FACCC48B68F9D1(iVar1);
					if (unk_0xFB75B0F82CA525F6(iVar3))
					{
						if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x7B9C1F53FE442D06(iVar3) /*3*/].f_2, 0x00000000))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0x00000000, 0x00000000))
								{
								}
							}
						}
						else
						{
							return;
						}
					}
					else
					{
						return;
					}
				}
			}
		}
		if (iVar3 == unk_0xD803B885F5E47A62())
		{
			if (!func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000001))
			{
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000008))
				{
					func_631();
					unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000008);
				}
			}
		}
		if (!Var4.f_5)
		{
			if (unk_0xD803B885F5E47A62() == iVar3)
			{
				if (!func_436(unk_0xD803B885F5E47A62(), 0x00000014))
				{
					func_754(0x00000000);
				}
			}
		}
		else
		{
			if (!unk_0xBFF81ED3B99522C7())
			{
				return;
			}
			if (iVar3 == iVar2)
			{
				return;
			}
			if (iVar3 != func_11())
			{
				Local_107.f_6 = iVar3;
				unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0x00000003);
				func_18(0x00000002);
			}
		}
	}
	else if (iVar2 != func_11() && func_240(iVar2, 0x00000000))
	{
		iVar5 = func_85(iVar2);
		if (iVar5 == Local_107.f_5)
		{
			if (unk_0xC844350D5D58C99A(Var4.f_1))
			{
				if (unk_0xEC560E589DF8370E(Var4.f_1))
				{
					iVar1 = unk_0x940C1429253D3B1B(Var4.f_1);
					if (unk_0x34BFC6F0CB887BC2(iVar1))
					{
						iVar3 = unk_0x83FACCC48B68F9D1(iVar1);
						if (unk_0xFB75B0F82CA525F6(iVar3))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0x00000000, 0x00000000))
								{
								}
							}
						}
					}
				}
			}
			if (iVar3 == unk_0xD803B885F5E47A62())
			{
				if (!func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000001))
				{
					if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000008))
					{
						func_631();
						unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000008);
					}
				}
			}
		}
	}
}

void func_754(int iParam0)
{
	if (!func_76(unk_0xD803B885F5E47A62()))
	{
		if (iParam0 || func_63(unk_0xD803B885F5E47A62()) != 0x00000000)
		{
			func_80(0x00000014);
			func_755(func_757());
			if (func_78(unk_0xD803B885F5E47A62()))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000008))
				{
					unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000008);
				}
			}
		}
	}
}

void func_755(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_200000[func_756() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
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

int func_756()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

int func_757()
{
	int iVar0;
	
	iVar0 = func_44(unk_0xD803B885F5E47A62());
	if (func_758(iVar0) == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	if (func_100(iVar0))
	{
		return 0x00000041;
	}
	if (func_104(iVar0))
	{
		return 0x00000042;
	}
	if (func_602(iVar0))
	{
		return 0x0000003F;
	}
	return 0x00000040;
}

int func_758(int iParam0)
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

void func_759()
{
	var uVar0;
	
	switch (vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0x00000001:
			if (func_750(unk_0xD803B885F5E47A62(), (Global_40001.f_30CE - 0x00000001), &uVar0, 0x42F00000, 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000008))
				{
					func_631();
					unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000008);
				}
			}
			break;
	}
}

void func_760()
{
	var uVar0;
	
	if (!func_17(Local_107.f_7))
	{
		if (Local_107.f_1 >= 0x00000001 || func_137() == Local_107.f_5)
		{
			func_785(0x000000A4, Local_107.f_7, &uLocal_95, 0x43FA0000, 0x443B8000, 0x00000000);
		}
		if (iLocal_80 != func_63(unk_0xD803B885F5E47A62()))
		{
			iLocal_80 = func_63(unk_0xD803B885F5E47A62());
		}
	}
	if (func_673())
	{
		if (func_775())
		{
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x0000000B))
			{
				unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x0000000B);
			}
		}
	}
	switch (func_677(unk_0x57270EE11514DC67()))
	{
		case 0x00000001:
			bLocal_97 = (func_68() || func_770(func_673()));
			if (bLocal_97)
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000000))
				{
					unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000000);
					if (func_673())
					{
						func_764(0x00000000, 0x00000000);
						func_763(0x00000002);
					}
				}
			}
			else if (func_750(unk_0xD803B885F5E47A62(), 0x000001F4, &uVar0, 0x42F00000, 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000000);
					if (func_673())
					{
						func_764(0x00000001, 0x00000000);
						func_763(0x00000002);
					}
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000000))
			{
				unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0x00000000);
				if (func_673())
				{
					func_764(0x00000000, 0x00000000);
					func_762(0x00000002);
				}
			}
			if (!func_761())
			{
				if (func_750(unk_0xD803B885F5E47A62(), Global_40001.f_30CE, &uVar0, 0x42F00000, 0x00000000))
				{
					if (!func_436(unk_0xD803B885F5E47A62(), 0x00000014))
					{
						func_754(0x00000000);
					}
				}
			}
			break;
	}
}

int func_761()
{
	if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_762(int iParam0)
{
	unk_0x0674E58A79778E99(&Global_1801E0, iParam0);
}

void func_763(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_1801E0, iParam0);
}

void func_764(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_765(iVar0, bParam0, bParam1);
		iVar0++;
	}
}

void func_765(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_769(iParam0, 0x00000008, 0x00000001))
		{
			func_768(iParam0, 0x00000008, 0x00000001);
		}
		if (bParam2)
		{
			if (!func_769(iParam0, 0x0000001E, 0x00000001))
			{
				func_768(iParam0, 0x0000001E, 0x00000001);
			}
		}
		else if (func_769(iParam0, 0x0000001E, 0x00000001))
		{
			func_766(iParam0, 0x0000001E, 0x00000001);
		}
	}
	else
	{
		if (func_769(iParam0, 0x00000008, 0x00000001))
		{
			func_766(iParam0, 0x00000008, 0x00000001);
		}
		if (func_769(iParam0, 0x0000001E, 0x00000001))
		{
			func_766(iParam0, 0x0000001E, 0x00000001);
		}
	}
}

void func_766(int iParam0, int iParam1, bool bParam2)
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
		if (func_739() == 0x00000000)
		{
			iVar0 = func_28(func_767(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_25(func_767(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_767(int iParam0)
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

void func_768(int iParam0, int iParam1, bool bParam2)
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
		if (func_739() == 0x00000000)
		{
			iVar0 = func_28(func_767(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_25(func_767(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_769(int iParam0, int iParam1, bool bParam2)
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
		if (func_739() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_28(func_767(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_770(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000000;
	}
	if (func_613(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_771(0x00000004))
	{
		return 0x00000001;
	}
	if (func_545())
	{
		return 0x00000001;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000001;
	}
	if (func_597())
	{
		return 0x00000001;
	}
	if (unk_0xF929B1A0A409FF93())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_771(int iParam0)
{
	int iVar0;
	
	if (func_774())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000035)
		{
			if (func_773(iVar0) == iParam0)
			{
				if (func_772(iVar0))
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

bool func_772(int iParam0)
{
	return func_769(iParam0, 0x00000005, 0x00000001);
}

int func_773(int iParam0)
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

bool func_774()
{
	return Global_181EC.f_159 > 0x00000000;
}

int func_775()
{
	if (((((((((func_784() || func_783()) || func_782()) || func_545()) || (func_781() && !unk_0xA14BB9332558B949())) || (func_778() && !func_777())) || Global_248A6D) || Global_248A6D.f_1 != 0x00000000) || Global_248AB7 != 0x00000000) || (func_776() == 0x00000002 && !unk_0xA14BB9332558B949()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_776()
{
	return Global_EC6CD;
}

bool func_777()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000001B);
}

int func_778()
{
	if (func_780() || func_779())
	{
		return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 == 0x00000008;
	}
	return 0x00000000;
}

var func_779()
{
	return Global_2564C8.f_27B;
}

bool func_780()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

bool func_781()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000005);
}

bool func_782()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000002);
}

bool func_783()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000014);
}

bool func_784()
{
	return Global_2564C8.f_256;
}

void func_785(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_78(unk_0xD803B885F5E47A62()) && !func_77(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000008)) && (func_67(unk_0xD803B885F5E47A62()) || func_66(unk_0xD803B885F5E47A62()))) || func_17(vParam1))
	{
		return;
	}
	Global_198C6B = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vParam1);
	func_822(iParam0, fVar0);
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 0x0000000F)
	{
		if (func_65(unk_0xD803B885F5E47A62()) || func_821(unk_0xD803B885F5E47A62()))
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
		if (!(func_71(unk_0xD803B885F5E47A62(), 0x00000015) || func_71(unk_0xD803B885F5E47A62(), 0x00000019)))
		{
			func_820(vParam1, 0x00000001, 0x00000000);
		}
		if (!*uParam2 && func_5(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			*uParam2 = 0x00000001;
			if (func_819(iParam0))
			{
				unk_0x51B096AAC60548C1(func_818(iParam0));
				if (func_817(iParam0, 0xFFFFFFFF))
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
			if (func_816(iParam0))
			{
				fVar1 = func_815(iParam0);
				if (fVar1 != 1f)
				{
					func_814(fVar1);
					unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0x00000001);
				}
			}
			if (!Global_247C05)
			{
				if (func_813(iParam0) && func_65(unk_0xD803B885F5E47A62()))
				{
					func_811(0x00000001);
					func_810(0x00000002);
				}
			}
			func_80(0x00000013);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_436(unk_0xD803B885F5E47A62(), 0x00000013))
			{
				func_70(0x00000013);
			}
		}
		if (*uParam2 && func_5(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			*uParam2 = 0x00000000;
			if (func_819(iParam0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000000))
				{
					unk_0x51B096AAC60548C1(1f);
					unk_0x34D79252800B23FF(0x00000005);
					unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000000);
				}
			}
			if (func_816(iParam0))
			{
				func_809();
				unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000001);
			}
			if (iParam5 && !func_78(unk_0xD803B885F5E47A62()))
			{
				if (func_44(unk_0xD803B885F5E47A62()) != 0x00000098)
				{
					func_787();
				}
			}
			if (func_193(0x00000002))
			{
				func_811(0x00000000);
				func_786(0x00000002);
			}
		}
	}
}

void func_786(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_2D), iParam0);
}

void func_787()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_18), &Global_24C36F, 0x00000002);
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_1A), &Global_24C371, 0x00000013);
	func_807();
	func_790(0x00000001, 0x00000001, 0x00000000);
	func_788();
}

void func_788()
{
	func_789(0x00000000, 0x00000000);
}

void func_789(int iParam0, int iParam1)
{
	Global_24B2D0.f_16 = iParam0;
	Global_24B2D0.f_17 = iParam1;
}

void func_790(bool bParam0, bool bParam1, bool bParam2)
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
		func_806();
	}
	if (!bParam2)
	{
		func_793(0x00000000, 0x00000001, 0x00000000, 0x3F333333, 0x40C00000, 0x3F800000, 0x40E00000, 0x40A00000, 0x00000000, 0x3F8CCCCD, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x42200000);
	}
	func_792(0x00000000);
	func_791();
}

void func_791()
{
	struct<6> Var0;
	
	if (Global_24B2D0.f_1E7.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_24B2D0.f_1E7 = { Var0 };
	}
}

void func_792(bool bParam0)
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

void func_793(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_805())
		{
			func_804();
		}
		Global_24B2D0.f_2C2.f_206 = unk_0x0D0A574C76D769AC();
		Global_24B2D0.f_2C2.f_1F8 = iParam1;
		Global_24B2D0.f_2C2.f_1F9 = iParam2;
		Global_24B2D0.f_2C2.f_1FA = iParam10;
		func_802();
		func_797(0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
		func_794();
	}
}

void func_794()
{
	if (func_805() && !func_796())
	{
		func_804();
	}
	if (func_796())
	{
		func_795();
	}
	else
	{
		func_802();
		func_797(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		Global_24B2D0.f_6D1 = 0x00000000;
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

void func_795()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2C2), &(Global_24B2D0.f_4C9), 0x00000207);
	Global_24B2D0.f_1E7 = { Global_24B2D0.f_1ED };
	if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

int func_796()
{
	if ((Global_24B2D0.f_6D0 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_4C9.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_4C9.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_797(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2537E2.f_766.f_2BF.f_10 != func_11())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_2537E2.f_766.f_2BF.f_10 /*421*/].f_194, 0x00000000) && func_798())
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

int func_798()
{
	if ((((((func_44(unk_0xD803B885F5E47A62()) == 0x000000E5 || func_44(unk_0xD803B885F5E47A62()) == 0x000000BF) || func_801()) || func_800()) || func_589(unk_0xD803B885F5E47A62())) || Global_265BE2.f_E2 == 0x00000001) || (Global_24B2D0.f_6D1 && func_799(unk_0xD803B885F5E47A62())))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_799(int iParam0)
{
	if (func_67(iParam0))
	{
		return 0x00000001;
	}
	if (func_76(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_800()
{
	return Global_180605;
}

int func_801()
{
	if (Global_440000 == 0x00000006)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_802()
{
	if (func_805() && !func_796())
	{
		func_804();
	}
	func_803();
	Global_24B2D0.f_2C2 = 0x00000000;
}

void func_803()
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

void func_804()
{
	if (func_796())
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

int func_805()
{
	if ((Global_24B2D0.f_6D1 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_2C2.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_806()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_16D), &Global_24C4C4, 0x00000079);
}

void func_807()
{
	func_808();
	Global_24B2D0.f_8CE = 0x00000000;
}

void func_808()
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

void func_809()
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

void func_810(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_2D), iParam0);
}

void func_811(int iParam0)
{
	if (func_812() && iParam0)
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

int func_812()
{
	if ((((Global_EC6CD != 0xFFFFFFFF && Global_EC6CD != 0x00000021) && Global_EC6CD != 0x00000023) && Global_EC6CD != 0x00000025) && Global_EC6CD != 0x00000015)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_813(int iParam0)
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

void func_814(float fParam0)
{
	float fVar0;
	
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_737())
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

float func_815(int iParam0)
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

int func_816(int iParam0)
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

int func_817(int iParam0, int iParam1)
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

float func_818(int iParam0)
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

int func_819(int iParam0)
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

void func_820(vector3 vParam0, int iParam1, int iParam2)
{
	Global_24B2D0.f_2D.f_31 = { vParam0 };
	Global_24B2D0.f_2D.f_34 = iParam1;
	Global_24B2D0.f_2D.f_35 = iParam2;
}

int func_821(int iParam0)
{
	if (func_118(iParam0))
	{
		if (func_65(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_822(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_823(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_631();
	}
}

int func_823(int iParam0)
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

void func_824()
{
	switch (func_827())
	{
		case 0x00000001:
			if (func_677(unk_0x57270EE11514DC67()) != 0x00000001)
			{
				func_826(func_761());
				func_825(0x00000001);
			}
			break;
		
		case 0x00000002:
			if (func_677(unk_0x57270EE11514DC67()) != 0x00000002)
			{
				func_826(func_761());
				func_825(0x00000002);
			}
			break;
		
		case 0x00000003:
			if (func_677(unk_0x57270EE11514DC67()) != 0x00000003)
			{
				func_826(func_761());
				func_825(0x00000003);
			}
			break;
	}
}

void func_825(int iParam0)
{
	vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_1 = iParam0;
}

void func_826(bool bParam0)
{
	if (bParam0)
	{
		if (!func_436(unk_0xD803B885F5E47A62(), 0x00000009))
		{
			if (func_63(unk_0xD803B885F5E47A62()) != 0x00000000)
			{
				func_80(0x00000009);
			}
		}
	}
	else if (func_436(unk_0xD803B885F5E47A62(), 0x00000009))
	{
		func_70(0x00000009);
	}
}

int func_827()
{
	return Local_107.f_1;
}

void func_828()
{
	iLocal_80 = func_63(unk_0xD803B885F5E47A62());
	func_829(0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000);
	iLocal_81 = func_208(Local_107.f_5, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
	unk_0xA402F6C87C08815C(iLocal_81, &(uLocal_94[0x00000000]), &(uLocal_94[0x00000001]), &(uLocal_94[0x00000002]), &(uLocal_94[0x00000003]));
}

void func_829(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 != iParam0)
	{
		func_843(0xFFFFFFFF);
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 = iParam0;
		if (func_842() != 0xFFFFFFFF)
		{
			func_841(0xFFFFFFFF);
		}
		if (func_840() != 0xFFFFFFFF)
		{
			func_839(0xFFFFFFFF);
		}
		func_838(iParam2);
		func_836(iParam0);
		if (!func_816(iParam0))
		{
			fVar0 = func_815(iParam0);
			if (fVar0 != 1f)
			{
				func_814(fVar0);
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0x00000001);
			}
		}
		if (!func_819(iParam0) || iParam3)
		{
			if (func_817(iParam0, iParam2) && iParam3 == 0x00000001)
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
		if (func_75())
		{
			func_80(0x0000001B);
		}
		if (bParam1)
		{
			if (!func_68())
			{
				func_811(0x00000001);
			}
		}
		if ((((((iParam0 == 0x0000009F || iParam0 == 0x0000009D) || iParam0 == 0x00000099) || iParam0 == 0x0000009A) || iParam0 == 0x000000A4) || iParam0 == 0x0000009B) || iParam0 == 0x000000AB)
		{
			if ((unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0x00000001) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0x00000000))
			{
				func_198(0x00000006);
			}
			func_835();
		}
		if (((iParam0 == 0x000000A4 || iParam0 == 0x000000D0) || iParam0 == 0x000000FA) || iParam0 == 0x000000ED)
		{
			unk_0x15EA7F4313456B1D(0x00000003, 0x00000000);
			unk_0x15EA7F4313456B1D(0x00000005, 0x00000000);
		}
		if (func_78(unk_0xD803B885F5E47A62()) && func_65(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000008);
		}
		func_831();
		if (func_830(iParam0))
		{
			unk_0x15EA7F4313456B1D(0x00000003, 0x00000000);
			unk_0x15EA7F4313456B1D(0x00000005, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0x00000006);
		}
		Global_26B66F.f_19B3 = 0x00000000;
	}
}

int func_830(int iParam0)
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

void func_831()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_834();
	iVar2 = func_85(unk_0xD803B885F5E47A62());
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (func_664(iVar1, iVar2, 0x00000001) || func_832(iVar1, unk_0xD803B885F5E47A62()))
			{
				unk_0xD463D0CE3DC66332(unk_0xD803B885F5E47A62(), iVar1, iVar3);
				unk_0xD463D0CE3DC66332(iVar1, unk_0xD803B885F5E47A62(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_832(int iParam0, int iParam1)
{
	if (func_240(iParam0, 0x00000001) && func_240(iParam1, 0x00000001))
	{
		return (func_833(iParam0) == func_85(iParam1) || func_833(iParam1) == func_85(iParam0));
	}
	return 0x00000000;
}

int func_833(int iParam0)
{
	if (func_240(iParam0, 0x00000001))
	{
		return Global_18D84D[func_85(iParam0) /*615*/].f_B.f_1E4;
	}
	return func_11();
}

int func_834()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_137();
	if (iVar0 != func_11())
	{
		if (func_5(iVar0, 0x00000000, 0x00000001))
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

void func_835()
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

void func_836(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(0x00000ECF, 0xFFFFFFFF, 0x00000000);
	iVar1 = func_837(iParam0);
	if (iVar1 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&iVar0, iVar1);
		func_25(0x00000ECF, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
	}
}

int func_837(int iParam0)
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

void func_838(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (Global_18D84D[iVar0 /*615*/].f_B.f_B5 != iParam0)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_B5 = iParam0;
	}
}

void func_839(int iParam0)
{
	if (Global_26B66F.f_1404.f_154 != iParam0)
	{
		Global_26B66F.f_1404.f_154 = iParam0;
	}
}

int func_840()
{
	return Global_26B66F.f_1404.f_154;
}

void func_841(int iParam0)
{
	if (Global_26B66F.f_1404.f_153 != iParam0)
	{
		Global_26B66F.f_1404.f_153 = iParam0;
	}
}

int func_842()
{
	return Global_26B66F.f_1404.f_153;
}

void func_843(int iParam0)
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_20 = iParam0;
}

void func_844(int iParam0)
{
	vLocal_108[unk_0x57270EE11514DC67() /*3*/] = iParam0;
}

int func_845()
{
	return Local_107;
}

int func_846(int iParam0)
{
	return vLocal_108[iParam0 /*3*/];
}

int func_847(bool bParam0)
{
	if (func_850(0x00000001))
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
		if (func_29() == func_11() || !func_5(func_29(), 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (!func_600(unk_0xD803B885F5E47A62()))
	{
		if (func_849(unk_0xD803B885F5E47A62()) && func_848())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_848()
{
	switch (func_62(func_592(unk_0xD803B885F5E47A62())))
	{
		case 0x0000000B:
		case 0x0000000E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_849(int iParam0)
{
	if (iParam0 != func_11() && func_5(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000004);
	}
	return 0x00000000;
}

int func_850(bool bParam0)
{
	bool bVar0;
	
	if (!func_135(0x00000001))
	{
		bVar0 = 0x00000000;
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_11())
		{
			if (func_5(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 0x00000000, 0x00000001))
			{
				if ((Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 0x00000004 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 0x00000008) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 0x00000006)
				{
					bVar0 = 0x00000001;
				}
			}
		}
		else if (func_758(func_44(unk_0xD803B885F5E47A62())) == 0x00000000)
		{
			bVar0 = 0x00000001;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_198(0x0000001F);
				if (func_47(func_44(unk_0xD803B885F5E47A62())))
				{
					func_198(0x00000051);
				}
				if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_11() && unk_0x40B8C182D63932FC(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
				{
					Global_18D265 = func_208(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
					if (!func_40(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
					{
						func_198(0x00000058);
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

int func_851()
{
	var uVar0;
	
	func_855(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_854())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_853())
	{
		return 0x00000001;
	}
	if (func_852(0x0000009F))
	{
		if (!func_784())
		{
			return 0x00000001;
		}
	}
	if (func_852(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_737() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_737()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_852(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_853()
{
	return Global_258C08;
}

bool func_854()
{
	return Global_2564C8.f_251;
}

void func_855(var uParam0)
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
					func_856(iVar0);
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

void func_856(int iParam0)
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
						if (func_857(iVar2, &bVar3))
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

int func_857(int iParam0, var uParam1)
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

void func_858()
{
	SYSTEM::WAIT(0x00000000);
}

void func_859()
{
	if (func_673())
	{
		if (func_630(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			func_314(unk_0xD803B885F5E47A62(), 0x00000000);
		}
	}
	if (unk_0x57270EE11514DC67() != 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0x00000007))
		{
			func_316(0x00000000, 0x00000004, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
		}
	}
	if (func_906(0x00000002))
	{
		func_762(0x00000002);
	}
	if (func_682(&iLocal_105, 0x0000000A, 0xFFFFFFFF))
	{
		unk_0x55D0A2DB35045A35(iLocal_104);
		iLocal_104 = 0xFFFFFFFF;
		func_682(&iLocal_105, 0x0000000A, 0x00000000);
	}
	if (func_682(&iLocal_105, 0x0000000B, 0xFFFFFFFF))
	{
		func_675(0x00000000);
	}
	Global_198C74.f_2 = Local_107.f_14;
	Global_198C74.f_3 = Local_107.f_15;
	func_904(Local_107.f_4, 0xFFFFFFFF, 0xFFFFFFFF, 0xBF800000);
	func_764(0x00000000, 0x00000000);
	func_860(0x00000000, 0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_860(bool bParam0, int iParam1)
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
		func_902();
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000004);
	}
	if ((func_105() && iParam1 != 0x00000000) && Global_40001.f_4255)
	{
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 0x000000BE || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 0x000000C0)
		{
			func_884(unk_0xD803B885F5E47A62(), iParam1, 0x00000001, 0x00000000);
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
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000E) && !func_78(unk_0xD803B885F5E47A62()))
		{
			func_811(0x00000000);
		}
	}
	else if (func_882(unk_0xD803B885F5E47A62()) != 0xFFFFFFFF)
	{
		func_843(0xFFFFFFFF);
	}
	func_881(func_11());
	if (func_193(0x00000010))
	{
		func_786(0x00000010);
	}
	func_878(0x00000000);
	func_838(0xFFFFFFFF);
	func_877();
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		func_876(iVar0);
		iVar0++;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		func_873(iVar1);
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
	iVar2 = func_57();
	if ((func_36(iVar2) || iVar2 == 0x000000CD) || iVar2 == 0x000000D2)
	{
		func_872(0xFFFFFFFF);
	}
	else if (((iVar2 == 0x000000C9 || iVar2 == 0x000000C8) || iVar2 == 0x000000B3) || func_104(iVar2))
	{
		func_869(0xFFFFFFFF, 0x00000001);
	}
	else if (((((func_56(iVar2) || func_868(iVar2)) || func_867(iVar2)) || func_97(iVar2)) || func_96(iVar2)) || func_95(iVar2))
	{
	}
	else
	{
		func_869(0xFFFFFFFF, 0x00000001);
	}
	func_70(0x00000013);
	func_70(0x00000014);
	func_70(0x00000015);
	func_70(0x00000016);
	func_70(0x0000001B);
	func_786(0x00000003);
	func_786(0x00000004);
	func_786(0x00000007);
	func_866();
	if (func_65(unk_0xD803B885F5E47A62()))
	{
		func_826(0x00000000);
	}
	func_70(0x0000001D);
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_11();
	if (Global_26B66F.f_1404.f_29 != 0x00000000)
	{
		Global_26B66F.f_1404.f_29 = 0x00000000;
	}
	if (bParam0)
	{
		func_787();
	}
	if (!func_78(unk_0xD803B885F5E47A62()))
	{
		func_809();
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
		func_865("IMPEXP_SELFDES", 0x00000000);
		func_863("IMPEXP_SELFDES");
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000008);
	}
	func_861(iVar2, 0x00000000);
}

void func_861(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000009))
		{
			unk_0x8BC9595FD2792B5D(func_862(iParam0));
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0x00000009);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000009))
	{
		unk_0x8910D3D58E0132B8(func_862(iParam0));
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0x00000009);
	}
}

char* func_862(int iParam0)
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

void func_863(char* sParam0)
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
					func_699();
					Global_1B416.f_3738[iVar0 /*104*/].f_63[Global_4C1E] = 0x00000000;
					if (func_864(iVar0))
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

int func_864(int iParam0)
{
	if ((Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000000] == 0x00000001 || Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000001] == 0x00000001) || Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000002] == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_865(char* sParam0, int iParam1)
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

void func_866()
{
	if (func_632(unk_0xD803B885F5E47A62()))
	{
		func_70(0x00000019);
	}
}

int func_867(int iParam0)
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

int func_868(int iParam0)
{
	if ((iParam0 == 0x000000BF || iParam0 == 0x000000BE) || iParam0 == 0x000000C0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_869(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_57();
	}
	if (iParam0 > 0x00000000)
	{
		if (func_137() != func_11())
		{
			if (func_601(unk_0xD803B885F5E47A62()) == unk_0xD803B885F5E47A62())
			{
				Global_265EAE.f_5D[func_871(iParam0)] = 0x00000001;
			}
		}
		iVar0 = func_871(0x0000009F);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x0000009D);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x00000094);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000A4);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x0000008E);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x00000098);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000A6);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000AA);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000AD);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000B3);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000C8);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000C9);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000B6);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000B7);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000B9);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000BA);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000B4);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000C3);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000C5);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000C6);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000CF);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000D0);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000D1);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000D6);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000D7);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000D8);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000D9);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000DA);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000DB);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000DC);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000DD);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
	}
}

int func_870(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_436(unk_0xD803B885F5E47A62(), 0x00000013) && !func_436(unk_0xD803B885F5E47A62(), 0x00000014)) && !func_436(unk_0xD803B885F5E47A62(), 0x00000009))
		{
			return 0x00000000;
		}
	}
	if (Global_265EAE.f_5D[iParam0] == 0x00000001 && func_21(&(Global_265EAE[iParam0 /*2*/])))
	{
		if (func_731(&(Global_265EAE[iParam0 /*2*/]), 0x00000001, 0x00000000) < iParam1)
		{
			Global_265EAE.f_5D[iParam0] = 0x00000000;
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_871(int iParam0)
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

void func_872(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_57();
	}
	if (iParam0 > 0x00000000)
	{
		if (func_137() != func_11())
		{
			Global_265EAE.f_5D[func_871(iParam0)] = 0x00000001;
		}
		iVar0 = func_871(0x0000009B);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000A3);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000A0);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x00000099);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000A2);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x0000009A);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000AB);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000AC);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000C7);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000C2);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000C1);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000D2);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000CD);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000BD);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
		iVar0 = func_871(0x000000D3);
		if (func_870(iVar0, Global_40001.f_313F, 0x00000000))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 0x00000001, 0x00000000);
		}
	}
}

void func_873(int iParam0)
{
	if (!func_874(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/], func_875(), 0x00000000))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/] = { func_875() };
	}
	if (!func_874(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/], func_875(), 0x00000000))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/] = { func_875() };
	}
}

bool func_874(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_875()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_876(int iParam0)
{
	if (!func_874(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/], func_875(), 0x00000000))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/] = { func_875() };
	}
	if (!func_874(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/], func_875(), 0x00000000))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/] = { func_875() };
	}
}

void func_877()
{
	struct<20> Var0;
	
	Var0.f_2 = 0xFFFFFFFF;
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xFFFFFFFF;
	Var0.f_8 = 0xFFFFFFFF;
	Global_18040E = { Var0 };
	Global_18040E.f_D = func_11();
	if (unk_0xEAE0D21A50E6C7F4(Global_1801E0, 0x00000003))
	{
		unk_0x0674E58A79778E99(&Global_1801E0, 0x00000003);
	}
}

void func_878(bool bParam0)
{
	if (bParam0)
	{
		if (!func_623(unk_0xD803B885F5E47A62(), 0x0000000E))
		{
			func_880(0x0000000E);
		}
	}
	else if (func_623(unk_0xD803B885F5E47A62(), 0x0000000E))
	{
		func_879(0x0000000E);
	}
}

void func_879(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_880(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_881(int iParam0)
{
	if (func_118(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xD803B885F5E47A62() != iParam0)
		{
			if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 != iParam0)
			{
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 = iParam0;
				if (iParam0 != func_11())
				{
				}
			}
		}
	}
}

int func_882(int iParam0)
{
	if (func_883(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_20;
	}
	return 0xFFFFFFFF;
}

int func_883(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_884(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_284(iParam0, iParam1) && func_901(iParam0, iParam1))
	{
		iVar0 = func_283(iParam0, iParam1);
		func_888(iVar0, bParam2, bParam3);
		func_885(iVar0, 0x00000001);
	}
}

void func_885(int iParam0, bool bParam1)
{
	if (!func_887(iParam0))
	{
		return;
	}
	func_267(func_886(iParam0), bParam1, 0xFFFFFFFF, 0x00000001);
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_6 = bParam1;
}

int func_886(int iParam0)
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

bool func_887(int iParam0)
{
	return (iParam0 >= 0x00000000 && iParam0 < 0x00000006);
}

void func_888(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = 0x00000000;
	iVar2 = func_563(unk_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_900(iParam0, 0x00000000, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_265A43[iParam0];
		iVar0 = func_899(iParam0, bParam2);
		if (iVar0 < 0x00000000)
		{
			iVar0 = 0x00000000;
		}
		if (!bParam2)
		{
			Global_1993C9 = 0xFFFFFFFF;
		}
		func_898(iParam0, 0x00000000, bParam2);
	}
	else if (func_896(iParam0, bParam2))
	{
		iVar0 = func_895(iVar2, 0x00000000);
		iVar3 = func_415(unk_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_894(iVar2, bParam2);
		iVar5 = func_895(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0x00000000)
		{
			iVar0 = iVar5;
		}
		if (func_893(iVar2) && func_892(unk_0xD803B885F5E47A62(), iVar2) == 0x00000002)
		{
			iVar0 = (iVar0 / 0x00000002);
			bVar1 = 0x00000001;
		}
		func_900(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_891(unk_0xD803B885F5E47A62(), iVar2) > 0x00000000)
		{
			func_890(iParam0, (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 - (func_894(iVar2, bParam2) / 0x00000002)));
		}
		iVar0 = (func_895(iVar2, bParam2) / func_891(unk_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_893(iVar2) && func_892(unk_0xD803B885F5E47A62(), iVar2) == 0x00000002)
		{
			iVar0 = (iVar0 / 0x00000002);
			bVar1 = 0x00000001;
		}
	}
	func_889(unk_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

void func_889(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return;
	}
	if (func_274(iParam1))
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

void func_890(int iParam0, int iParam1)
{
	if (iParam0 != 0xFFFFFFFF && iParam1 != Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2)
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_891(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	if (func_274(iParam1))
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

int func_892(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0x00000000;
	}
	if (func_274(iParam1) && func_893(iParam1))
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

bool func_893(int iParam0)
{
	return func_131(iParam0) == 0x00000005;
}

int func_894(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_131(iParam0);
	switch (iVar1)
	{
		case 0x00000001:
			uVar0 = Global_40001.f_4236;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				uVar0 = Global_40001.f_423B;
			}
			break;
		
		case 0x00000003:
			uVar0 = Global_40001.f_4235;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				uVar0 = Global_40001.f_423A;
			}
			break;
		
		case 0x00000004:
			uVar0 = Global_40001.f_4234;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				uVar0 = Global_40001.f_4239;
			}
			break;
		
		case 0x00000000:
			uVar0 = Global_40001.f_4232;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				uVar0 = Global_40001.f_4237;
			}
			break;
		
		case 0x00000002:
			uVar0 = Global_40001.f_4233;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				uVar0 = Global_40001.f_4238;
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				uVar0 = Global_40001.f_5252;
				if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
				{
					uVar0 = Global_40001.f_5253;
				}
			}
			else
			{
				uVar0 = Global_40001.f_5242;
				if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
				{
					uVar0 = Global_40001.f_5243;
				}
			}
			break;
	}
	return uVar0;
}

int func_895(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_131(iParam0);
	switch (iVar1)
	{
		case 0x00000001:
			iVar0 = Global_40001.f_4223;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				iVar0 = (iVar0 - Global_40001.f_422C);
			}
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
			{
				iVar0 = (iVar0 - Global_40001.f_4231);
			}
			break;
		
		case 0x00000003:
			iVar0 = Global_40001.f_4224;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				iVar0 = (iVar0 - Global_40001.f_422B);
			}
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
			{
				iVar0 = (iVar0 - Global_40001.f_4230);
			}
			break;
		
		case 0x00000004:
			iVar0 = Global_40001.f_4225;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				iVar0 = (iVar0 - Global_40001.f_422A);
			}
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
			{
				iVar0 = (iVar0 - Global_40001.f_422F);
			}
			break;
		
		case 0x00000000:
			iVar0 = Global_40001.f_4226;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				iVar0 = (iVar0 - Global_40001.f_4228);
			}
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
			{
				iVar0 = (iVar0 - Global_40001.f_422D);
			}
			break;
		
		case 0x00000002:
			iVar0 = Global_40001.f_4227;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
			{
				iVar0 = (iVar0 - Global_40001.f_4229);
			}
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
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
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000000))
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
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0x00000001))
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
			if (func_892(unk_0xD803B885F5E47A62(), iParam0) == 0x00000002)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_896(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_268(0x00003C18, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	return func_268(func_897(iParam0), 0xFFFFFFFF, 0xFFFFFFFF);
}

int func_897(int iParam0)
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

void func_898(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_267(0x00003C18, bParam1, 0xFFFFFFFF, 0x00000001);
		return;
	}
	func_267(func_897(iParam0), bParam1, 0xFFFFFFFF, 0x00000001);
}

int func_899(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_265A43[iParam0];
	iVar1 = func_563(unk_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_265A4A;
	}
	if (func_893(iVar1))
	{
		if (func_892(unk_0xD803B885F5E47A62(), iVar1) == 0x00000002)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_900(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_265A4A = iParam1;
		return;
	}
	Global_265A43[iParam0] = iParam1;
}

int func_901(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_284(iParam0, iParam1))
	{
		iVar0 = func_283(iParam0, iParam1);
		if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_4 > 0x00000000 && Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_7)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_902()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 0x0000001C);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 0x0000001D);
	func_903(0x00000018);
}

void func_903(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

void func_904(var uParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = unk_0xBB0808A181D4745C();
	Var1 = Global_198C74;
	Var1.f_1 = Global_198C74.f_1;
	Var1.f_2 = Global_198C74.f_2;
	Var1.f_3 = Global_198C74.f_3;
	Var1.f_4 = Global_198C74.f_4;
	Var1.f_5 = Global_198C74.f_5;
	Var1.f_6 = Global_198C74.f_6;
	Var1.f_7 = Global_198C74.f_7;
	Var1.f_8 = Global_198C74.f_8;
	Var1.f_9 = Global_198C74.f_9;
	Var1.f_A = Global_198C74.f_A;
	Var1.f_B = Global_198C74.f_B;
	Var1.f_C = Global_198C74.f_C;
	Var1.f_D = Global_198C74.f_E;
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0x7F8A39872A07D2CE(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_E = Global_198C74.f_F;
			Var2.f_F = Global_198C74.f_10;
			Var2.f_10 = Global_198C74.f_11;
			unk_0x28C4917D9A295449(&Var2);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_E = Global_198C74.f_F;
			Var3.f_F = uParam0;
			Var3.f_10 = iParam1;
			unk_0x9E59224EB51EDA45(&Var3);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_E = Global_198C74.f_F;
			Var4.f_F = uParam0;
			unk_0xB1DA4601C652C7C5(&Var4);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_E = Global_198C74.f_F;
			Var5.f_F = uParam0;
			Var5.f_10 = iParam1;
			unk_0xBC121608DEC826ED(&Var5);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_E = Global_198C74.f_F;
			Var6.f_F = uParam0;
			unk_0x8CE98B2741F42F3A(&Var6);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_E = Global_198C74.f_F;
			Var7.f_F = uParam0;
			Var7.f_10 = iParam1;
			Var7.f_11 = iParam2;
			unk_0xD97D13FD5AE7CC65(&Var7);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_E = uParam0;
			Var8.f_F = iParam1;
			Var8.f_10 = iParam2;
			Var8.f_11 = Global_198C74.f_F;
			unk_0x7E3D8B81F0B41A06(&Var8);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_F = uParam0;
			Var9.f_10 = iParam1;
			Var9.f_11 = iParam2;
			Var9.f_E = iParam3;
			Var9.f_12 = Global_198C74.f_F;
			unk_0xAB72C270A0CBFA80(&Var9);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_E = uParam0;
			Var10.f_F = iParam1;
			Var10.f_10 = iParam2;
			Var10.f_11 = Global_198C74.f_F;
			unk_0x4C3BFB72890DD032(&Var10);
		}
	}
	func_905();
}

void func_905()
{
	struct<18> Var0;
	
	Global_198C74 = { Var0 };
}

bool func_906(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1801E0, iParam0);
}

int func_907(struct<21> Param0)
{
	func_952(func_953(Param0), Param0);
	func_911(0x000000A4, 0x00000000, 0x00000000);
	unk_0x3A4967AE7C71F999(0x00000000);
	func_908(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_107, 0x00000016);
	unk_0x35B62793EAE9ADDF(&vLocal_108, 0x00000061);
	unk_0x256D93AFAE851A7A(0x00000000);
	return 0x00000001;
}

int func_908(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_910();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_909())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_910();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_854())
				{
					if (!bParam2)
					{
						func_910();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_852(0x0000009D))
				{
					if (!bParam2)
					{
						func_910();
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
					func_910();
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
				func_910();
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
			func_910();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_909()
{
	return Global_140856;
}

void func_910()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_911(int iParam0, int iParam1, bool bParam2)
{
	func_951();
	if (func_600(unk_0xD803B885F5E47A62()))
	{
		func_913(0x00000001);
	}
	if ((iParam0 != 0x00000000 && unk_0x40B8C182D63932FC(iParam1)) && func_679(iParam1, 0x00000001))
	{
		switch (iParam0)
		{
			case 0x0000009D:
				unk_0x5D96D8530B3D0904(&Global_198C66, 0x00000000);
				break;
			}
	}
	if (!func_117() && !func_240(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (func_73())
		{
			func_810(0x00000003);
		}
	}
	func_810(0x00000004);
	if (func_135(0x00000000))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_137();
	}
	if (func_47(iParam0))
	{
		func_413();
		Global_198C86.f_12 = func_393(func_29());
	}
	else if (func_55(func_882(unk_0xD803B885F5E47A62())))
	{
		func_411();
		Global_198CBC.f_12 = func_393(func_29());
	}
	if (bParam2)
	{
		if (!func_68())
		{
			func_811(0x00000001);
		}
	}
	func_912();
}

void func_912()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		Global_14DB79.f_216[iVar0 /*42*/].f_1 = func_11();
		Global_14DB79.f_216[iVar0 /*42*/].f_9 = 0x00000000;
		iVar0++;
	}
}

void func_913(bool bParam0)
{
	int iVar0;
	
	func_903(0x00000021);
	func_903(0x00000022);
	func_903(0x00000023);
	func_903(0x00000024);
	func_903(0x00000025);
	func_903(0x00000026);
	func_903(0x00000027);
	func_903(0x00000028);
	func_903(0x0000002B);
	func_903(0x00000029);
	func_903(0x00000036);
	func_903(0x0000002A);
	func_903(0x0000002F);
	func_950(0x00000017);
	func_950(0x00000018);
	func_903(0x0000005C);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 0x00000002);
	func_949();
	func_944();
	func_939();
	func_934();
	func_923();
	func_919();
	func_915();
	if (bParam0)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000002)
		{
			Global_26B66F.f_1404.f_E[iVar0] = 0x00000000;
			iVar0++;
		}
	}
	else if (func_914(0x00000003))
	{
		func_950(0x00000003);
	}
	else if (func_914(0x00000004))
	{
		func_950(0x00000004);
	}
	else if (func_914(0x00000005))
	{
		func_950(0x00000005);
	}
	else if (func_914(0x00000006))
	{
		func_950(0x00000006);
	}
	else if (func_914(0x00000007))
	{
		func_950(0x00000007);
	}
	else if (((((((((((((((((func_914(0x00000000) || func_914(0x00000001)) || func_914(0x00000002)) || func_914(0x00000008)) || func_914(0x00000009)) || func_914(0x0000000A)) || func_914(0x0000000B)) || func_914(0x0000000C)) || func_914(0x0000000D)) || func_914(0x0000000E)) || func_914(0x0000000F)) || func_914(0x00000010)) || func_914(0x00000011)) || func_914(0x00000012)) || func_914(0x00000013)) || func_914(0x00000014)) || func_914(0x00000015)) || func_914(0x00000016))
	{
		func_950(0x00000008);
		func_950(0x00000000);
		func_950(0x00000001);
		func_950(0x00000002);
		func_950(0x00000009);
		func_950(0x0000000A);
		func_950(0x0000000B);
		func_950(0x0000000C);
		func_950(0x0000000D);
		func_950(0x0000000E);
		func_950(0x0000000F);
		func_950(0x00000010);
		func_950(0x00000011);
		func_950(0x00000012);
		func_950(0x00000013);
		func_950(0x00000014);
		func_950(0x00000015);
		func_950(0x00000016);
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

bool func_914(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_E[iVar0], iVar1);
}

void func_915()
{
	if (func_917())
	{
		func_916(0x00000000);
		func_916(0x00000001);
		func_916(0x00000002);
		func_916(0x00000003);
	}
}

void func_916(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_21[iVar0]), iVar1);
}

int func_917()
{
	if (((func_918(0x00000000) || func_918(0x00000001)) || func_918(0x00000002)) || func_918(0x00000003))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_918(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_21[iVar0], iVar1);
}

void func_919()
{
	if (func_921())
	{
		func_920(0x00000004);
		func_920(0x00000005);
		func_920(0x00000006);
		func_920(0x00000007);
	}
}

void func_920(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1F[iVar0]), iVar1);
}

int func_921()
{
	if (((func_922(0x00000004) || func_922(0x00000005)) || func_922(0x00000006)) || func_922(0x00000007))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_922(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1F[iVar0], iVar1);
}

void func_923()
{
	int iVar0;
	
	if (func_933())
	{
		func_932(0x00000008);
		func_932(0x00000009);
		func_932(0x0000000A);
		func_932(0x0000000C);
		func_932(0x0000000D);
		func_932(0x0000000E);
		func_932(0x00000013);
		func_932(0x00000014);
		func_932(0x00000015);
		func_932(0x00000016);
		func_932(0x00000017);
		func_932(0x00000018);
		func_932(0x00000019);
		func_932(0x0000001A);
		func_932(0x0000000F);
		func_932(0x00000010);
		func_932(0x00000011);
		func_932(0x00000012);
		func_932(0x00000023);
		func_932(0x0000002D);
		func_932(0x0000002E);
		if (func_931(0x0000000B))
		{
			func_932(0x0000000B);
			iVar0 = func_28(0x00001C3A, 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
			func_25(0x00001C3A, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	if (func_931(0x00000030))
	{
		if (func_929(0x00000097, 0x00000003))
		{
			func_927(0x00000097, 0x00000003);
		}
		func_932(0x00000030);
	}
	if (func_931(0x00000031))
	{
		if (func_929(0x00000098, 0x00000003))
		{
			func_927(0x00000098, 0x00000003);
		}
		func_932(0x00000031);
	}
	if (func_931(0x00000032))
	{
		if (func_929(0x00000099, 0x00000003))
		{
			func_927(0x00000099, 0x00000003);
		}
		func_932(0x00000032);
	}
	if (func_931(0x00000033))
	{
		if (func_929(func_924(), 0x00000003))
		{
			func_927(func_924(), 0x00000003);
		}
		func_932(0x00000033);
	}
}

int func_924()
{
	if (func_926())
	{
		func_925(0x0000009A, Global_4C1E, 0x00000001);
	}
	return 0x0000009A;
}

void func_925(int iParam0, int iParam1, int iParam2)
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

int func_926()
{
	int iVar0;
	
	iVar0 = func_85(unk_0xD803B885F5E47A62());
	if (((iVar0 != unk_0xD803B885F5E47A62() && iVar0 != func_11()) && unk_0x40B8C182D63932FC(iVar0)) && iVar0 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_927(int iParam0, int iParam1)
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
			func_928(iParam0, iVar0, 0x00000000);
			func_925(iParam0, iVar0, 0x00000000);
		}
	}
}

void func_928(int iParam0, int iParam1, int iParam2)
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

int func_929(int iParam0, int iParam1)
{
	if (func_930(iParam0, iParam1) == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_930(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

bool func_931(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1A[iVar0], iVar1);
}

void func_932(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1A[iVar0]), iVar1);
}

int func_933()
{
	if (((((((((((((((((((((func_931(0x00000008) || func_931(0x00000009)) || func_931(0x0000000A)) || func_931(0x0000000C)) || func_931(0x0000000B)) || func_931(0x0000000D)) || func_931(0x0000000E)) || func_931(0x00000013)) || func_931(0x00000014)) || func_931(0x00000015)) || func_931(0x00000016)) || func_931(0x00000017)) || func_931(0x00000018)) || func_931(0x00000019)) || func_931(0x0000001A)) || func_931(0x0000000F)) || func_931(0x00000010)) || func_931(0x00000011)) || func_931(0x00000012)) || func_931(0x00000023)) || func_931(0x0000002D)) || func_931(0x0000002E))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_934()
{
	if (func_938())
	{
		func_937(0x00000000);
		func_937(0x00000001);
		func_937(0x00000002);
		func_937(0x00000003);
		func_937(0x00000004);
		func_937(0x00000005);
		if (func_936(0x00000020))
		{
			if (func_929(func_935(), 0x00000003))
			{
				func_927(func_935(), 0x00000003);
			}
			func_937(0x00000020);
		}
	}
}

int func_935()
{
	if (func_926())
	{
		func_925(0x0000000C, Global_4C1E, 0x00000001);
	}
	return 0x0000000C;
}

bool func_936(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_17[iVar0], iVar1);
}

void func_937(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_17[iVar0]), iVar1);
}

int func_938()
{
	if ((((func_936(0x00000001) || func_936(0x00000000)) || func_936(0x00000002)) || func_936(0x00000004)) || func_936(0x00000005))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_939()
{
	if (func_943())
	{
		func_942(0x00000000);
		func_942(0x00000001);
		func_942(0x00000002);
		func_942(0x00000003);
		func_942(0x00000004);
		func_942(0x00000005);
		func_942(0x00000006);
		func_942(0x00000007);
		if (func_941(0x00000008))
		{
			func_942(0x00000008);
		}
		if (func_941(0x0000000F))
		{
			if (func_929(func_940(), 0x00000003))
			{
				func_927(func_940(), 0x00000003);
			}
			func_942(0x0000000F);
		}
	}
}

int func_940()
{
	if (func_926())
	{
		func_925(0x00000014, Global_4C1E, 0x00000001);
	}
	return 0x00000014;
}

bool func_941(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_15[iVar0], iVar1);
}

void func_942(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_15[iVar0]), iVar1);
}

int func_943()
{
	if ((((((((func_941(0x00000000) || func_941(0x00000001)) || func_941(0x00000002)) || func_941(0x00000003)) || func_941(0x00000004)) || func_941(0x00000005)) || func_941(0x00000006)) || func_941(0x00000007)) || func_941(0x00000008))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_944()
{
	if (func_948())
	{
		func_947(0x00000000);
		func_947(0x00000001);
		func_947(0x00000002);
		func_947(0x00000003);
		func_947(0x00000004);
		func_947(0x00000005);
		func_947(0x00000006);
		func_947(0x00000007);
		func_947(0x00000008);
		func_947(0x00000009);
		func_947(0x0000000A);
		func_947(0x0000000B);
		func_947(0x0000000C);
		if (func_946(0x0000000D))
		{
			if (func_929(func_945(), 0x00000003))
			{
				func_927(func_945(), 0x00000003);
			}
			func_947(0x0000000D);
		}
	}
}

int func_945()
{
	if (func_926())
	{
		func_925(0x0000004C, Global_4C1E, 0x00000001);
	}
	return 0x0000004C;
}

bool func_946(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_13[iVar0], iVar1);
}

void func_947(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_13[iVar0]), iVar1);
}

int func_948()
{
	if ((((((((((((func_946(0x00000000) || func_946(0x00000001)) || func_946(0x00000002)) || func_946(0x00000003)) || func_946(0x00000004)) || func_946(0x00000005)) || func_946(0x00000006)) || func_946(0x00000007)) || func_946(0x00000008)) || func_946(0x00000009)) || func_946(0x0000000A)) || func_946(0x0000000B)) || func_946(0x0000000C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_949()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		Global_26B66F.f_1404.f_11[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_950(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_E[iVar0]), iVar1);
}

void func_951()
{
	struct<14> Var0;
	
	Global_198C74 = { Var0 };
	Global_198C74.f_E = 0x00000000;
	Global_198C74.f_F = 0x00000000;
}

void func_952(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_910();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_953(int iParam0)
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

