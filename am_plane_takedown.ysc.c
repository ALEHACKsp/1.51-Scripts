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
	struct<27> Local_73 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_74 = 0;
	vector3 vLocal_75[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<21> Local_79 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x8CD06866876216F2() && func_221(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
	{
		func_208(ScriptParam_79);
	}
	else
	{
		func_204();
	}
	while (0x00000001)
	{
		func_203();
		if (func_192() || func_188(0x0000000F))
		{
			func_204();
		}
		if (unk_0x09BE1E6DF7B80B43())
		{
			func_204();
		}
		switch (func_187(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_186() == 0x00000001)
				{
					if (func_185(0x0000EA60))
					{
						if (unk_0xE9F78D191AD5EDBA(Local_73.f_2))
						{
							if (unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000))
							{
								if (!func_183())
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000000))
									{
										func_182("PTD_HELP1", 0xFFFFFFFF);
									}
									else
									{
										func_182("PTD_HELP1H", 0xFFFFFFFF);
									}
								}
							}
						}
					}
					vLocal_75[unk_0x57270EE11514DC67() /*3*/] = 0x00000001;
				}
				else if (func_186() == 0x00000004)
				{
					vLocal_75[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
				}
				break;
			
			case 0x00000001:
				if (func_186() == 0x00000001)
				{
					func_22();
				}
				else if (func_186() == 0x00000004)
				{
					vLocal_75[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
				}
				break;
			
			case 0x00000003:
				func_21(&(Local_73.f_18));
				if (func_20(&(Local_73.f_18)))
				{
					vLocal_75[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
				}
				break;
			
			case 0x00000002:
				vLocal_75[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
			
			case 0x00000004:
				func_204();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_186())
			{
				case 0x00000000:
					if (func_11())
					{
						Local_73 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					func_10();
					func_9();
					if (func_1())
					{
						Local_73 = 0x00000004;
					}
					break;
				
				case 0x00000004:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_2()
{
	struct<14> Var0;
	struct<14> Var1;
	
	if (func_7(Local_73.f_2))
	{
		if (Local_73.f_16 > 0x00000000)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_73.f_2))
			{
				if (!unk_0x3D1053F9EB43B7AD(unk_0xB177666FAB6F4417(Local_73.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000000))
					{
						Var0.f_2 = 0x726D0B36;
					}
					else
					{
						Var0.f_2 = 0xE65B3563;
					}
					func_5(Var0, func_6(0x00000001));
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0x00000001);
					return 0x00000001;
				}
			}
		}
	}
	if (Local_73.f_17 == 0x00000000)
	{
		if (Local_73 != 0x00000004)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_73.f_2))
			{
				if (unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000))
				{
					if (func_3(&(Local_73.f_1A), 0x00000BB8, 0x00000000))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000000))
						{
							Var1.f_2 = 0xFE7E5F73;
						}
						else
						{
							Var1.f_2 = 0xA9832139;
						}
						func_5(Var1, func_6(0x00000001));
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
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

void func_5(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0x75BF07BC;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Param0, 0x0000000E, iParam13);
	}
}

int func_6(int iParam0)
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
			if (func_221(iVar2, 0x00000000, 0x00000000))
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

int func_7(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_8(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0x00000000;
}

int func_8(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_9()
{
	switch (Local_73.f_17)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
	}
}

void func_10()
{
	struct<14> Var0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000))
	{
		if (Local_73 != 0x00000004)
		{
			iLocal_77 = 0x00000000;
			while (iLocal_77 < unk_0x54EABC0DD106045B())
			{
				if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_77)))
				{
					iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_77));
					if (unk_0xEAE0D21A50E6C7F4(vLocal_75[iLocal_77 /*3*/].f_1, 0x00000000))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000000))
						{
							Var0.f_2 = 0x53130E9D;
						}
						else
						{
							Var0.f_2 = 0xADB79B6D;
						}
						Var0.f_A = iVar1;
						func_5(Var0, func_6(0x00000001));
						Local_73 = 0x00000004;
						return;
					}
					if (unk_0xEAE0D21A50E6C7F4(vLocal_75[iLocal_77 /*3*/].f_1, 0x00000001))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000002))
						{
							unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0x00000002);
						}
					}
				}
				iLocal_77++;
			}
		}
	}
}

int func_11()
{
	if (func_19(Local_73.f_4) && func_19(Local_73.f_5))
	{
		if (func_14() && func_12())
		{
			unk_0x71199B01895C6202(Local_73.f_4);
			unk_0x71199B01895C6202(Local_73.f_5);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_12()
{
	if ((!unk_0xE9F78D191AD5EDBA(Local_73.f_3) && func_19(Local_73.f_5)) && unk_0xE9F78D191AD5EDBA(Local_73.f_2))
	{
		if (func_7(Local_73.f_2))
		{
			if (func_13(&(Local_73.f_3), Local_73.f_2, 0x00000016, Local_73.f_5, 0xFFFFFFFF, 0x00000001, 0x00000001, 0x00000001))
			{
				unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_73.f_3), 0x00000001);
				unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_73.f_3), Global_18085A);
				unk_0xC743BD39A24D0583(unk_0x1B50683925F00106(Local_73.f_3), 0x00000000);
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73.f_3), 0x00000001);
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_73.f_3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_13(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!unk_0xA3FA8B6D2780D661(0x00000001))
	{
		return 0x00000000;
	}
	if (!unk_0xE9F78D191AD5EDBA(iParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iParam1), 0x00000000))
	{
		return 0x00000000;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), bParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_14()
{
	int iVar0;
	
	if (!unk_0xE9F78D191AD5EDBA(Local_73.f_2))
	{
		if (func_19(Local_73.f_4))
		{
			if (func_15(&(Local_73.f_2), Local_73.f_4, Local_73.f_6, func_18(Local_73.f_6, Local_73.f_9[0x00000000 /*3*/]), 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
			{
				unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000002);
				unk_0x1E9649458B15960F(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000);
				unk_0xEF190091B5B9F5EB(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000001);
				unk_0xAC0C6241732E36F6(unk_0xB177666FAB6F4417(Local_73.f_2));
				unk_0x1AEF7184B203A58D(unk_0xB177666FAB6F4417(Local_73.f_2), 30f);
				unk_0x873BCADC75FF6D20(unk_0xB177666FAB6F4417(Local_73.f_2));
				unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000001, 0x00000001, 0x00000000);
				unk_0xB422445CBCD0AEFB(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000);
				unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000);
				if (Local_73.f_4 == joaat("cuban800"))
				{
					unk_0xB58CA658A628ED02(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000003);
				}
				if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
				{
					if (unk_0x30F813723591D02E(unk_0xB177666FAB6F4417(Local_73.f_2), "MPBitset"))
					{
						iVar0 = unk_0x1E2DFB0EF4BB4566(unk_0xB177666FAB6F4417(Local_73.f_2), "MPBitset");
					}
					unk_0x5D96D8530B3D0904(&iVar0, 0x0000000A);
					unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_73.f_2), "MPBitset", iVar0);
				}
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_73.f_2))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_15(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xE75B31D140F2F10B(0x00000001))
	{
		return 0x00000000;
	}
	fVar0 = 1.5f;
	if (iParam1 == 0xFE0A508C)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_26B66F.f_1974 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam13)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 0x00000001);
			}
			unk_0x120A395B0ECB8EA5(iVar1, bParam8);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam6)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000000);
				}
				if (bParam11)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 0x00000001);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam7);
			unk_0x8E44A2B22BBBAFE4(iVar1, 0x00000001);
			if (bParam10)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 0x00000005, 0x00000005, 1f);
			}
			func_16(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_16(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_17(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
	{
		if ((Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 == iParam3 && Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_24B2D0.f_B60[0x00000001 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000002)
		{
			if (iVar0 < 0x00000001)
			{
				Global_24B2D0.f_B60[iVar0 /*6*/] = { Global_24B2D0.f_B60[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_24B2D0.f_B60[0x00000001 /*6*/] = { vParam0 };
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_3 = fParam1;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 = iParam2;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 = iParam3;
	}
}

int func_17(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > 0xFFFFFFFF)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000002)
		{
			if (Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return 0xFFFFFFFF;
}

float func_18(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

bool func_19(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_20(var uParam0)
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

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_4(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_22()
{
	switch (vLocal_75[unk_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0x00000000:
			func_180();
			func_23();
			if (Local_73.f_17 > 0x00000000)
			{
				vLocal_75[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_204();
			break;
	}
}

void func_23()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if (unk_0xE9F78D191AD5EDBA(Local_73.f_2))
	{
		if (!unk_0xEAE0D21A50E6C7F4(vLocal_75[unk_0x57270EE11514DC67() /*3*/].f_1, 0x00000000))
		{
			if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000))
			{
			}
			if (unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000))
			{
			}
			if (unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000))
			{
				if (unk_0xD803B885F5E47A62() == unk_0x39DDAA68EF6A6BF4(Local_73.f_2, &uVar0))
				{
					func_179(0x0000080D, 0xFFFFFFFF);
					iVar1 = func_178(0x0000080D, 0xFFFFFFFF, 0x00000000);
					iVar2 = iVar1;
					if (iVar2 > Global_40001.f_1FA3)
					{
						iVar2 = Global_40001.f_1FA3;
					}
					iVar3 = (Global_40001.f_1FA1 * iVar2);
					func_124(0x00000000, unk_0x16F2683693E537C9(), "XPT_KAIE", 0xCBCDA251, 0xB7532834, iVar3, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					if (iVar1 > Global_40001.f_1FA2)
					{
						iVar1 = Global_40001.f_1FA2;
					}
					iVar4 = (Global_40001.f_1FA0 * iVar1);
					func_120(iVar4, 0x00000001, 0x00000001, 0x41200000);
					Global_2594A0 = iVar4;
					func_61(&iVar4, 0x00000001);
					if (iVar4 > 0x00000000)
					{
						if (func_60())
						{
							func_48(0x6A22D039, iVar4, &uVar6, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							unk_0x9AC21D04D5646532(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
						}
					}
					func_43(0x00000041, 0x00000001, 0xFFFFFFFF);
					if (func_42())
					{
						func_29(0x00000002, "PTD_PASS0", 0x00000000, 0x00000000, 0xFFFFFF9D);
					}
					else
					{
						func_29(0x00000002, "PTD_PASS1", 0x00000000, 0x00000000, 0xFFFFFF9D);
					}
					unk_0x5D96D8530B3D0904(&(vLocal_75[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000000);
				}
			}
			else
			{
				if (unk_0xBFF81ED3B99522C7())
				{
					if (Local_73.f_16 < 0x00000004)
					{
						if (unk_0x5A91F08DF773C39D(unk_0xB177666FAB6F4417(Local_73.f_2), Local_73.f_9[Local_73.f_16 /*3*/], 50f, 50f, 500f, 0x00000000, 0x00000001, 0x00000000))
						{
							Local_73.f_16++;
						}
					}
				}
				if (unk_0x526BC32A660C89E6(Local_73.f_2))
				{
					func_27();
					if (func_26())
					{
						if (func_25(Local_73.f_2) && func_25(Local_73.f_3))
						{
							unk_0xCCB891029A74A633(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000001, 0x00000001, 0xFFFFFFFF);
							if (unk_0xE5DBF9B6126856CA(Local_73.f_2))
							{
								func_24(&(Local_73.f_2));
							}
							if (unk_0xE5DBF9B6126856CA(Local_73.f_3))
							{
								unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73.f_3), 0x00000001);
								func_24(&(Local_73.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_24(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_25(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0x00000000;
}

int func_26()
{
	if (unk_0xE9F78D191AD5EDBA(Local_73.f_2))
	{
		if (unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000, 0x00001B58))
		{
			return 0x00000001;
		}
		if (unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000001, 0x00009C40))
		{
			return 0x00000001;
		}
		if (unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000003, 0x00007530))
		{
			return 0x00000001;
		}
		if (unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000002, 0x00007530))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_27()
{
	vector3 vVar0;
	
	if (func_7(Local_73.f_2) && !func_28(Local_73.f_3))
	{
		if (unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_73.f_3), unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000))
		{
			if (Local_73.f_16 < 0x00000004)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000000))
				{
					unk_0x0C4243AF9A434F34(unk_0x1B50683925F00106(Local_73.f_3), unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000, 0x00000000, Local_73.f_9[Local_73.f_16 /*3*/] + Vector(120f, 0f, 0f), 0x00000004, 20f, 50f, -1f, 0x0000005A, 0x0000003C, 0x00000001);
				}
				else
				{
					unk_0x9AFA0796FDCABCD5(unk_0x1B50683925F00106(Local_73.f_3), unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000, 0x00000000, Local_73.f_9[Local_73.f_16 /*3*/] + Vector(120f, 0f, 0f), 0x00000004, 20f, 50f, -1f, 0x0000005A, 0x0000003C, 0xBF800000, 0x00000000);
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000002) && !unk_0xEAE0D21A50E6C7F4(vLocal_75[unk_0x57270EE11514DC67() /*3*/].f_1, 0x00000001))
			{
				vVar0 = { unk_0x68E4ADDDDCD7BDDE(unk_0xB177666FAB6F4417(Local_73.f_2), 0f, 12000f, 0f) };
				if (vVar0.x < -3700f)
				{
					vVar0.x = -3700f;
				}
				else if (vVar0.x > 4500f)
				{
					vVar0.x = 4500f;
				}
				if (vVar0.y < -3900f)
				{
					vVar0.y = -3900f;
				}
				else if (vVar0.y > 8000f)
				{
					vVar0.y = 8000f;
				}
				vVar0.z = 100f;
				if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000000))
				{
					unk_0x0C4243AF9A434F34(unk_0x1B50683925F00106(Local_73.f_3), unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000, 0x00000000, vVar0, 0x00000004, 20f, -1f, -1f, 0x00000064, 0x00000064, 0x00000001);
				}
				else
				{
					unk_0x9AFA0796FDCABCD5(unk_0x1B50683925F00106(Local_73.f_3), unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000, 0x00000000, vVar0, 0x00000004, 20f, -1f, -1f, 0x00000064, 0x00000064, 0xBF800000, 0x00000000);
				}
				unk_0x5D96D8530B3D0904(&(vLocal_75[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000001);
			}
		}
	}
}

int func_28(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 0x00000001;
}

void func_29(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_30(0x00000001, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_30(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = 0x00000000;
	func_31(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_31(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam1) > 0x0000000F)
	{
		return;
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		if (unk_0x7724E025FD444F45(sParam4) > 0x0000001F)
		{
			return;
		}
	}
	iVar0 = func_40();
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	func_39(iVar0);
	func_38(iVar0, uParam0);
	func_37(iVar0, uParam2, bParam3);
	func_36(iVar0, sParam1);
	if (unk_0xEA6BC48857E0AC4C(sParam4) && iParam6 == 0xFFFFFF9D)
	{
		return;
	}
	func_35(iVar0);
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_33(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == 0xFFFFFF9D)
	{
		func_32(iVar0, iParam6);
	}
}

void func_32(int iParam0, int iParam1)
{
	Global_14E99F.f_3B[iParam0 /*16*/].f_F = iParam1;
}

void func_33(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_14E99F.f_3B[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_34(iParam0);
}

void func_34(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_14E99F.f_3B[iParam0 /*16*/]), 0x00000005);
}

void func_35(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_14E99F.f_3B[iParam0 /*16*/]), 0x00000004);
}

void func_36(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_14E99F.f_3B[iParam0 /*16*/].f_3 = { Var0 };
}

void func_37(int iParam0, var uParam1, bool bParam2)
{
	Global_14E99F.f_3B[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_14E99F.f_3B[iParam0 /*16*/]), 0x00000002);
		unk_0x0674E58A79778E99(&(Global_14E99F.f_3B[iParam0 /*16*/]), 0x00000003);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_14E99F.f_3B[iParam0 /*16*/]), 0x00000003);
		unk_0x0674E58A79778E99(&(Global_14E99F.f_3B[iParam0 /*16*/]), 0x00000002);
	}
}

void func_38(int iParam0, var uParam1)
{
	Global_14E99F.f_3B[iParam0 /*16*/].f_1 = uParam1;
}

void func_39(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_14E99F.f_3B[iParam0 /*16*/]), 0x00000000);
}

int func_40()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (!func_41(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_41(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_14E99F.f_3B[iParam0 /*16*/], 0x00000000);
}

int func_42()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_45(iParam0, func_46(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_44(iParam0, iVar0, iParam2);
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_46(iParam2)];
	unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_46(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1407E9;
}

void func_48(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_60())
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
				func_49(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_49(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
				func_49(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_49(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_60())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_47()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_56(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
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
			func_55(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_50(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_50(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_51(iParam0);
	}
}

void func_51(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_60())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_54(iParam0))
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
		func_52(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_52(var uParam0)
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
	func_53(&(uParam0->f_E));
	func_53(&(uParam0->f_E.f_D));
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

void func_53(var uParam0)
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

int func_54(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_55(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_60())
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
				func_57(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_57(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_59(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_58();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_58()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_59(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_60()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0x00000000)
	{
		if (!func_119())
		{
			if (func_118(0x00000000))
			{
				if (!func_114(0x00000000))
				{
					if (unk_0x40B8C182D63932FC(func_113()))
					{
						if (func_112() == 0x00000064)
						{
							iVar0 = *iParam0;
							*iParam0 = 0x00000000;
						}
						else
						{
							iVar0 = ((*iParam0 / 0x00000064) * func_112());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_110(&iVar0, 0x00000000);
						if (iParam1 == 0x00000001)
						{
							func_66("GB_BCUT_TICK1", func_113(), iVar0, 0x00000000, 0x00000000, 0x00000001);
						}
						func_65(0x00000014);
						func_62(func_113(), iVar0, 0x00000001);
					}
				}
			}
		}
	}
}

void func_62(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_221(iParam0, 0x00000000, 0x00000001))
	{
		Var0 = 0xB2D63074;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_64(iParam0);
		func_63(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, func_59(iParam0));
	}
}

void func_63(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_64(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_66(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x3A820E495A7BA3E5(func_75(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		unk_0xD06AC7C87A34A6AD(func_73(&Var1));
		if (!iParam3 == 0x00000000)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		func_67(0x0000001B, sParam0, 0x00000001, &Var1, iParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_67(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_72() || !unk_0xA14BB9332558B949()) || !func_70(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = func_68(iParam2);
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

int func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Global_197EBE - 0x00000001))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_69(iVar0);
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

void func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000004;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 0x00000001) /*53*/] };
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

bool func_70(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_71(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_71(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_47();
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

bool func_72()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

var func_73(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_74(&cVar0);
}

var func_74(char[4] cParam0)
{
	return cParam0;
}

int func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_108(iParam0) && !bParam4)
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
	if (((func_108(unk_0xD803B885F5E47A62()) || (func_107() && func_106())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001F)) && !bParam4)
	{
		iVar1 = func_105();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 0xFFFFFFFF)
				{
					if (func_221(unk_0x83FACCC48B68F9D1(iVar1), 0x00000000, 0x00000001))
					{
						if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
						{
							if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
							{
								return func_103(iParam1, iParam0, 0x00000000);
							}
							else
							{
								return func_88(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_88(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
			{
				if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
				{
					return func_103(iParam1, iParam0, 0x00000000);
				}
				else
				{
					return func_76(0x00000000, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				return func_76(0x00000000, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
	if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
	{
		if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
		{
			return func_103(iParam1, iParam0, 0x00000000);
		}
		else
		{
			return func_88(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_88(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_76(bool bParam0, int iParam1, bool bParam2)
{
	return func_77(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_77(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 0x00000003;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_87() || (func_86() && func_84())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_83(iParam2, iVar0);
		}
		else
		{
			return func_83(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 0xFFFFFFFF)
		{
			if (func_82(iVar0, iParam2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012))
			{
				if (iVar0 == iParam2)
				{
					return func_81(0x00000001);
				}
				else
				{
					return func_81(0x00000000);
				}
			}
			else if (bParam3)
			{
				return 0x0000001C;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000014))
			{
				return func_78(iVar0, iParam2, 0x00000001, 0x00000004);
			}
			else
			{
				return func_78(iVar0, iParam2, 0x00000000, 0x00000004);
			}
		}
		return 0x0000001C;
	}
	if (iVar0 == iParam2 || iParam2 == 0xFFFFFFFF)
	{
		return func_81(0x00000001);
	}
	return func_81(0x00000000);
}

int func_78(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, iParam1, iParam3);
	if (func_79(Global_440000.f_2F9AE, 0x00000001))
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

int func_79(int iParam0, bool bParam1)
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

int func_80(int iParam0, int iParam1, int iParam2)
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
			if (!func_82(iParam0, iVar0, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_81(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000076;
	}
	return 0x00000074;
}

int func_82(int iParam0, int iParam1, int iParam2)
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

int func_83(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_80(iParam1, iParam0, 0x00000004);
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

bool func_84()
{
	if (func_85())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000004);
}

bool func_85()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_86()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

int func_87()
{
	if (func_85() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_88(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_98())
			{
				iVar3 = func_93(iParam0);
				if (!iVar3 == 0xFFFFFFFF)
				{
					return func_91(iVar3);
				}
			}
			if ((func_90(iParam1, iParam0, iVar0, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)) || ((func_82(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000017)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)))
			{
				return func_81(0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A))
			{
				return func_89(0x00000001);
			}
			else
			{
				return func_77(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0x00000000)
		{
			if (iParam0 == iParam1 || (Global_18060A == 0x00000001 && Global_180614 == 0x00000000))
			{
				return func_81(0x00000001);
			}
			else
			{
				return func_77(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 0x0000001C;
		}
	}
	iVar4 = func_93(iParam0);
	if (!iVar4 == 0xFFFFFFFF)
	{
		return func_91(iVar4);
	}
	if (bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_89(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000077;
	}
	return 0x00000074;
}

bool func_90(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_91(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_92(iParam0);
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

var func_92(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_93(int iParam0)
{
	if (!iParam0 == func_97())
	{
		if (func_95(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_94(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

int func_94(int iParam0)
{
	if (iParam0 != func_97())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_97();
}

bool func_95(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_96(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_97();
}

int func_96(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_97())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_97()
{
	return 0xFFFFFFFF;
}

int func_98()
{
	if (((func_102() || func_101()) || func_100()) || func_99())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_99()
{
	return Global_2564C8.f_13;
}

var func_100()
{
	return Global_2564C8.f_11;
}

var func_101()
{
	return Global_2564C8.f_10;
}

var func_102()
{
	return Global_2564C8.f_F;
}

int func_103(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_98())
	{
		iVar2 = func_93(iParam1);
		if (!iVar2 == 0xFFFFFFFF)
		{
			return func_91(iVar2);
		}
	}
	if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000011)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 0x00000018))
		{
			return 0x00000012;
		}
	}
	if (iParam0 > 0xFFFFFFFF && iParam1 != func_97())
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
			iVar0 = func_77(iParam1, !bParam2, iParam0, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 0x0000000D))
		{
			iVar0 = func_104(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 0x0000001D))
		{
			iVar0 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A) && !func_82(iParam0, unk_0x08067D4957B73C02(iParam1), 0x00000000))
		{
			iVar0 = func_89(0x00000001);
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_104(int iParam0)
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

var func_105()
{
	return Global_240006.f_2;
}

bool func_106()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000004);
}

bool func_107()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

int func_108(int iParam0)
{
	if (func_70(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_109())
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

bool func_109()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

void func_110(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_111(0x00000001);
	}
	else
	{
		iVar1 = func_111(0x00000000);
	}
	iVar0 = ((*iParam0 / 0x00000064) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_111(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_112()
{
	return Global_40001.f_3065;
}

int func_113()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_114(bool bParam0)
{
	return func_115(unk_0xD803B885F5E47A62(), bParam0);
}

int func_115(int iParam0, bool bParam1)
{
	return func_116(iParam0, bParam1, 0x00000001);
}

int func_116(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_97())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_117(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_97() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_117(int iParam0, int iParam1)
{
	if (iParam0 != func_97())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_97())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_118(bool bParam0)
{
	return func_95(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_119()
{
	return func_96(unk_0xD803B885F5E47A62());
}

void func_120(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_121(iParam0, iParam1, iParam2, fParam3);
}

void func_121(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_122(iParam0, iParam1, iParam2, fParam3);
}

void func_122(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 0x00000001)
	{
		iParam1 = 0x00000001;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0x00000000)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_4 = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 = (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 + iVar1);
	if (iParam2 == 0x00000001)
	{
		func_123(iVar1, 0x00000000);
	}
}

void func_123(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_124(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_125(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_125(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_135(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 0xDCB673B3 || iParam4 == 0x8DD87E4F)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_131(unk_0x64430C979F516F7A(iVar1, 0x0000796E, 0f, 0f, 0f), iVar0, 0x00000000, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_126(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_126(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_129(iParam0, 0x00000001) };
	if (iParam0 == func_128(unk_0x16F2683693E537C9()))
	{
		func_127(0x00000001);
	}
	func_131(vVar0, iParam1, 0x00000000, sParam2, iParam3);
}

void func_127(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_128(int iParam0)
{
	return iParam0;
}

Vector3 func_129(int iParam0, bool bParam1)
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
	if (iParam0 == func_130(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
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

int func_130(int iParam0)
{
	return iParam0;
}

void func_131(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_134(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_133();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_132();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_132()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0x00000000;
		return 0x00000001;
	}
	Global_2537E2.f_763 = 0x00000000;
	return 0x00000000;
}

var func_133()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 0x00000001;
	return uVar0;
}

float func_134(vector3 vParam0, var uParam1, var uParam2)
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

var func_135(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_136(iParam0, 0x00000000, sParam1, iParam4, iParam5, 0x00000000, iParam6, 0x00000001, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_136(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_177(unk_0xD803B885F5E47A62()) || func_176(unk_0xD803B885F5E47A62()))
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
	else if (func_174() || func_170(unk_0xD803B885F5E47A62()))
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
	if (func_169(sParam2))
	{
	}
	if (func_168())
	{
		if (iParam4 < 0x00000001)
		{
			iParam4 = 0x00000001;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_166(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_165(&iVar1);
		}
		if (iParam1 == 0x00000000)
		{
			switch (iParam0)
			{
				case 0x00000002:
					func_162(0x00000000, &iVar1);
					break;
				
				case 0x00000003:
					func_162(0x00000001, &iVar1);
					break;
				
				case 0x00000001:
					func_159(&iVar1);
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
			func_157(0x0000048C, iVar1, 0xFFFFFFFF);
			if (iParam1 == 0x00000000)
			{
				func_147((func_156(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0x00000000);
				if (iParam8 == 0x00000000)
				{
				}
				if (iParam9 == 0x00000000)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 0xFFFFFFFF)
				{
					func_157(0x0000048D, iVar1, 0xFFFFFFFF);
				}
				func_141(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 0xFFFFFFFF)
			{
				func_137((func_139(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_137((func_139(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_137(int iParam0)
{
	if (func_168())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_138(joaat("mpply_globalxp"), iParam0);
	}
}

void func_138(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_139(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_221(iParam0, 0x00000000, 0x00000001))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_140(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_140(joaat("mpply_globalxp"));
		}
	}
	return 0x00000000;
}

int func_140(int iParam0)
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

void func_141(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_146(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_144(func_145(&Var0));
			if (iVar1 == 0x00000000)
			{
				func_143(&Global_152D8B, iParam0);
				func_142(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 0x00000001)
			{
				func_143(&Global_152D8C, iParam0);
				func_142(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 0x00000002)
			{
				func_143(&Global_152D8D, iParam0);
				func_142(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 0x00000003)
			{
				func_143(&Global_152D8E, iParam0);
				func_142(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 0x00000004)
			{
				func_143(&Global_152D8F, iParam0);
				func_142(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_142(int iParam0, int iParam1)
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

void func_143(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_144(int iParam0)
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

int func_145(var uParam0)
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

struct<13> func_146(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	if (func_168())
	{
		if (iParam0 >= 0x6A8C4212)
		{
			iParam0 = 0x6A8C4212;
		}
		if (Global_40001.f_2583 == 0x00000000 && iParam1 != 0xBFCF576C)
		{
			if (iParam2 == 0x00000000)
			{
				if (iParam0 < Global_152E1C[func_46(0xFFFFFFFF)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 0xE0C5CB02, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_46(0xFFFFFFFF)])
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
		if (func_155(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_153(iParam0, 0x00000001);
		}
		func_152(0x0000027F, iParam0, 0xFFFFFFFF, 0x00000001);
		func_151(0x00000280, func_153(iParam0, 0x00000001), 0xFFFFFFFF, 0x00000001, 0x00000000);
		Global_152E1C[func_46(0xFFFFFFFF)] = iParam0;
		func_148(0xBDDC2B6E, 0x00000007, 0x00000000);
	}
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_150(iParam1, iParam2))
	{
		iVar0 = func_149();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_149()
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

int func_150(int iParam0, var uParam1)
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

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_152(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_46(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_46(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_46(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_46(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_46(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_46(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_46(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_46(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_46(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_46(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_46(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_153(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_154(iParam0, 0x00000000);
}

int func_154(int iParam0, int iParam1)
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

int func_155(int iParam0)
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

int func_156(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_46(0xFFFFFFFF)];
			}
			else if (func_155(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_46(0xFFFFFFFF)];
	}
	return 0x00000000;
}

void func_157(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_178(iParam0, func_46(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_158(iParam0))
	{
		func_151(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_152(iParam0, iVar0, iParam2, 0x00000001);
	}
}

int func_158(int iParam0)
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

void func_159(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_82(unk_0x08067D4957B73C02(iVar5), iVar1, 0x00000000))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_161(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_160(*iParam0, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 0x00000004)
	{
		iVar2 = 0x00000004;
	}
	if (iVar2 >= 0x00000002)
	{
		iVar7 = SYSTEM::ROUND((func_160(*iParam0, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_160(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_161(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_146(iParam0) };
		Global_26594F = { func_146(iParam1) };
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

void func_162(bool bParam0, int iParam1)
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
				if (func_221(iVar4, 0x00000000, 0x00000001))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_161(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_221(iVar4, 0x00000001, 0x00000001))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_163(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_161(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_160(*iParam1, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 0x00000004)
	{
		iVar1 = 0x00000004;
	}
	if (iVar1 >= 0x00000001)
	{
		iVar6 = SYSTEM::ROUND((func_160(*iParam1, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_163(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_164(iParam0), func_164(iParam1));
	return 0f;
}

Vector3 func_164(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_165(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 0x00000003)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_160(*iParam0, 0x00000064) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_166(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_156(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_156(unk_0xD803B885F5E47A62());
		}
	}
	if (func_167(0x00001F40, 0x00000000, 0x00000000) > 0x00000000)
	{
		if (func_167(0x00001F40, 0x00000000, 0x00000000) < (iParam0 + func_156(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_167(0x00001F40, 0x00000000, 0x00000000) - func_156(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_167(int iParam0, bool bParam1, int iParam2)
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

int func_168()
{
	return 0x00000001;
}

int func_169(char* sParam0)
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

int func_170(int iParam0)
{
	return func_171(func_172(iParam0));
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E9:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_172(int iParam0)
{
	if (func_173(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_173(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_174()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_100();
	}
	return func_175(Global_440000.f_2F9AE);
}

int func_175(int iParam0)
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

bool func_176(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_177(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

int func_178(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_46(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

void func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_178(iParam0, func_46(iParam1), 0x00000000);
	iVar0++;
	if (!func_158(iParam0))
	{
		func_151(iParam0, iVar0, iParam1, 0x00000001, 0x00000000);
	}
	else
	{
		func_152(iParam0, iVar0, iParam1, 0x00000001);
	}
}

void func_180()
{
	if (unk_0xE9F78D191AD5EDBA(Local_73.f_2) && !unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_73.f_2), 0x00000000))
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_78))
		{
			iLocal_78 = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(Local_73.f_2));
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000000))
			{
				unk_0xBC8E0A7390523199(iLocal_78, 0x00000133);
				unk_0xDC5B2F9D0CCE3A10(iLocal_78, "PTD_BLIPN");
			}
			else
			{
				unk_0xBC8E0A7390523199(iLocal_78, 0x00000040);
				unk_0xDC5B2F9D0CCE3A10(iLocal_78, "PTD_BLIPH");
			}
			unk_0x61755AC17D8F538E(iLocal_78, 0x00000001);
			unk_0x0EC848EFF66DF45A(iLocal_78, 0x00001B58);
			unk_0x2A065371C9D96655(iLocal_78, 0x00000006);
			if (func_183())
			{
				unk_0x9D7CDDB4B55142AF(iLocal_78, 0x00000000);
			}
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000000))
			{
				unk_0x436F3596830D7DC3(iLocal_78, SYSTEM::ROUND(unk_0xD9522BA9E27E1349(unk_0xB177666FAB6F4417(Local_73.f_2))));
			}
			if (func_183() || func_181())
			{
				unk_0x9D7CDDB4B55142AF(iLocal_78, 0x00000000);
			}
			else
			{
				unk_0x9D7CDDB4B55142AF(iLocal_78, 0x00000004);
			}
		}
	}
}

var func_181()
{
	return Global_24DDCF.f_714;
}

void func_182(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_183()
{
	if (func_184(0x00000013))
	{
		return 0x00000001;
	}
	if (func_184(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = func_178(0x000009B0, 0xFFFFFFFF, 0x00000000);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

bool func_185(int iParam0)
{
	return unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_24D547, unk_0x2B6E0A53779D29EA())) > iParam0;
}

int func_186()
{
	return Local_73;
}

int func_187(int iParam0)
{
	return vLocal_75[iParam0 /*3*/];
}

bool func_188(int iParam0)
{
	return !func_189(iParam0);
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			if (Global_40001.f_1A04)
			{
				return 0x00000000;
			}
			if (func_191(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000005:
			if (Global_40001.f_1A05)
			{
				return 0x00000000;
			}
			if (func_191(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (Global_40001.f_1A06)
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			if (Global_40001.f_1A07)
			{
				return 0x00000000;
			}
			if (func_191(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000F:
			if (func_190(0x00000004))
			{
				return 0x00000000;
			}
			if (func_191(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000011:
			if (func_190(0x00000004))
			{
				return 0x00000000;
			}
			if (func_191(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000010:
			if (func_190(0x00000004))
			{
				return 0x00000000;
			}
			if (func_191(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000012:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
			if (func_190(0x00000004))
			{
				return 0x00000000;
			}
			if (func_191(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000013:
			if (func_190(0x00000004))
			{
				return 0x00000000;
			}
			if (func_191(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000014:
			if (func_190(0x00000004))
			{
				return 0x00000000;
			}
			if (func_191(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			break;
		
		case 0x0000000C:
			break;
	}
	return 0x00000001;
}

int func_190(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_221(unk_0x117658E336116132(iVar0), 0x00000000, 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iVar0 /*421*/].f_D0, iParam0))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_191(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

int func_192()
{
	var uVar0;
	
	func_200(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_199())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_198())
	{
		return 0x00000001;
	}
	if (func_197(0x0000009F))
	{
		if (!func_196())
		{
			return 0x00000001;
		}
	}
	if (func_197(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_193() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_193()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_193()
{
	switch (func_195())
	{
		case 0x00000000:
			return func_194();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_194()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_195()
{
	return Global_7830;
}

bool func_196()
{
	return Global_2564C8.f_256;
}

int func_197(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_198()
{
	return Global_258C08;
}

bool func_199()
{
	return Global_2564C8.f_251;
}

void func_200(var uParam0)
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
					func_201(iVar0);
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

void func_201(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_221(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_202(iVar2, &bVar3))
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

int func_202(int iParam0, var uParam1)
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

void func_203()
{
	SYSTEM::WAIT(0x00000000);
}

void func_204()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_78))
	{
		unk_0x142CC44DB769B57E(&iLocal_78);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0x00000001))
	{
		func_29(0x00000002, "PTD_FAIL", 0x00000000, 0x00000000, 0xFFFFFF9D);
	}
	func_207();
	if (func_186() == 0x00000004 && Local_73.f_4 != 0x00000000)
	{
		unk_0xAB8E2DDC7AF955E0(Local_73.f_4, 0x00000000);
	}
	func_206(0x0000000F, 0x00000000);
	func_205();
}

void func_205()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_206(int iParam0, bool bParam1)
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

void func_207()
{
	unk_0xF82EA857DA10E0CD(&uLocal_76);
}

void func_208(struct<21> Param0)
{
	int iVar0;
	
	func_219(func_220(Param0), Param0);
	unk_0x0BEC04ECA8485A3A(0x00000001);
	unk_0x28E5F00F131890E3(0x00000001);
	func_217(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_73, 0x0000001C);
	unk_0x35B62793EAE9ADDF(&vLocal_75, 0x00000061);
	if (!func_216())
	{
		func_204();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0x00000000);
		if (unk_0xBFF81ED3B99522C7())
		{
			iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000006);
			switch (iVar0)
			{
				case 0x00000000:
					Local_73.f_4 = joaat("cuban800");
					Local_73.f_5 = joaat("a_m_m_skidrow_01");
					break;
				
				case 0x00000001:
					Local_73.f_4 = joaat("stunt");
					Local_73.f_5 = joaat("a_m_y_eastsa_02");
					break;
				
				case 0x00000002:
					Local_73.f_4 = joaat("duster");
					Local_73.f_5 = joaat("a_m_m_prolhost_01");
					break;
				
				case 0x00000003:
					Local_73.f_4 = joaat("mammatus");
					Local_73.f_5 = joaat("a_m_y_vinewood_02");
					break;
				
				case 0x00000004:
					Local_73.f_4 = joaat("maverick");
					Local_73.f_5 = joaat("a_m_m_eastsa_02");
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0x00000000);
					break;
				
				case 0x00000005:
					Local_73.f_4 = joaat("swift");
					Local_73.f_5 = joaat("a_m_y_busicas_01");
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0x00000000);
					break;
			}
			if (Local_73.f_4 != 0x00000000)
			{
				unk_0xAB8E2DDC7AF955E0(Local_73.f_4, 0x00000001);
			}
			func_215();
			func_209();
		}
		func_206(0x0000000F, 0x00000001);
		vLocal_75[unk_0x57270EE11514DC67() /*3*/] = 0x00000000;
	}
	else
	{
		func_204();
	}
}

void func_209()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		iVar1 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
		Local_73.f_9[iVar0 /*3*/] = { func_211(iVar1) };
		if (iVar0 > 0x00000000)
		{
			if (func_210(Local_73.f_9[iVar0 /*3*/], Local_73.f_9[(iVar0 - 0x00000001) /*3*/], 250f, 0x00000000))
			{
				Local_73.f_9[iVar0 /*3*/] = { func_211(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_210(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_211(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		iParam0 = 0x00000002;
	}
	else if (iParam0 > 0x00000002)
	{
		iParam0 = 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return func_214();
		
		case 0x00000001:
			return func_213();
		
		case 0x00000002:
			return func_212();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_212()
{
	switch (unk_0x09AC81E49EA267F7(0x00000000, 0x0000000D))
	{
		case 0x00000000:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 0x00000001:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 0x00000002:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 0x00000003:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 0x00000004:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 0x00000005:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 0x00000006:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 0x00000007:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 0x00000008:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 0x00000009:
			return 2811.453f, -668.671f, 1.581f;
		
		case 0x0000000A:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 0x0000000B:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 0x0000000C:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_213()
{
	switch (unk_0x09AC81E49EA267F7(0x00000000, 0x0000000D))
	{
		case 0x00000000:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 0x00000001:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 0x00000002:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 0x00000003:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 0x00000004:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 0x00000005:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 0x00000006:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 0x00000007:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 0x00000008:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 0x00000009:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 0x0000000A:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 0x0000000B:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 0x0000000C:
			return -498.3305f, 3006.906f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_214()
{
	switch (unk_0x09AC81E49EA267F7(0x00000000, 0x0000000D))
	{
		case 0x00000000:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 0x00000001:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 0x00000002:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 0x00000003:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 0x00000004:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 0x00000005:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 0x00000006:
			return 3800f, 4462f, 5f;
		
		case 0x00000007:
			return 3350f, 5152f, 20f;
		
		case 0x00000008:
			return 2200f, 5600f, 54f;
		
		case 0x00000009:
			return 1410f, 6560f, 20f;
		
		case 0x0000000A:
			return -330f, 6100f, 32f;
		
		case 0x0000000B:
			return -1365f, 4380f, 42f;
		
		case 0x0000000C:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_215()
{
	Local_73.f_6 = { func_211(unk_0x09AC81E49EA267F7(0x00000000, 0x00000003)) };
	Local_73.f_6 = { Local_73.f_6 + Vector(120f, 0f, 0f) };
}

int func_216()
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
		if (func_199())
		{
			return 0x00000000;
		}
		if (func_197(0x0000009D))
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

int func_217(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_205();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_218())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_205();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_199())
				{
					if (!bParam2)
					{
						func_205();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_197(0x0000009D))
				{
					if (!bParam2)
					{
						func_205();
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
					func_205();
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
				func_205();
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
			func_205();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_218()
{
	return Global_140856;
}

void func_219(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_205();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_220(int iParam0)
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

int func_221(int iParam0, bool bParam1, bool bParam2)
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

