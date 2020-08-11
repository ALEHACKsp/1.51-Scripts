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
	struct<11> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_62 = 0;
	vector3 vLocal_63[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<21> Local_73 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_69 = 0x00000014;
	if (unk_0x8CD06866876216F2() && func_71(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
	{
		func_64(ScriptParam_73);
	}
	else
	{
		func_60();
	}
	while (0x00000001)
	{
		func_59();
		if (func_48() || func_44(0x00000009))
		{
			func_60();
		}
		if (unk_0x09BE1E6DF7B80B43())
		{
			func_60();
		}
		switch (func_43(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_42() == 0x00000001)
				{
					func_41();
					vLocal_63[unk_0x57270EE11514DC67() /*3*/] = 0x00000001;
				}
				else if (func_42() == 0x00000004)
				{
					vLocal_63[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
				}
				break;
			
			case 0x00000001:
				if (func_42() == 0x00000001)
				{
					func_39();
				}
				else if (func_42() == 0x00000004)
				{
					vLocal_63[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
				}
				break;
			
			case 0x00000003:
				func_37(&(Local_61.f_A));
				if (func_36(&(Local_61.f_A)))
				{
					vLocal_63[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
				}
				break;
			
			case 0x00000002:
				vLocal_63[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
			
			case 0x00000004:
				func_60();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_42())
			{
				case 0x00000000:
					if (func_35())
					{
						if (func_8())
						{
							Local_61 = 0x00000001;
						}
					}
					break;
				
				case 0x00000001:
					func_7();
					func_6();
					if (func_1())
					{
						Local_61 = 0x00000004;
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
	if (Local_61.f_9 == 0x00000000)
	{
		if (!func_4(Local_61.f_2))
		{
			return 0x00000001;
		}
		else if (func_3(Local_61.f_3))
		{
			return 0x00000001;
		}
		else
		{
			if (iLocal_72 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_61.f_1, 0x00000000))
				{
					return 0x00000001;
				}
			}
			if (!unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_61.f_3), unk_0xB177666FAB6F4417(Local_61.f_2), 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_3(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 0x00000001;
}

int func_4(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_5(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0x00000000;
}

int func_5(int iParam0)
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

void func_6()
{
	switch (Local_61.f_9)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_71 == 0x00000000)
	{
		iLocal_72 = 0x00000000;
		unk_0x5D96D8530B3D0904(&(Local_61.f_1), 0x00000000);
	}
	if (func_4(Local_61.f_2))
	{
		iVar0 = 0x00000001;
	}
	if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_71)))
	{
		iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_71));
		iVar2 = unk_0x9539D44F3E4492F6(iVar1);
		if (func_71(iVar1, 0x00000001, 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_61.f_1, 0x00000000))
			{
				if (iVar0 == 0x00000001)
				{
					if (unk_0x12DE711B1C681E9E(iVar2, unk_0xB177666FAB6F4417(Local_61.f_2), 250f, 250f, 250f, 0x00000000, 0x00000001, 0x00000000))
					{
						unk_0x0674E58A79778E99(&(Local_61.f_1), 0x00000000);
					}
				}
				else
				{
					unk_0x0674E58A79778E99(&(Local_61.f_1), 0x00000000);
				}
			}
		}
	}
	iLocal_71++;
	if (iLocal_71 == unk_0x54EABC0DD106045B())
	{
		iLocal_71 = 0x00000000;
		iLocal_72 = 0x00000001;
	}
}

int func_8()
{
	if (unk_0x2358623ECCDB11B3(0x00000001, 0x00000001, 0x00000000, 0x00000000))
	{
		if (func_34(Local_61.f_4) && func_34(Local_61.f_5))
		{
			if (func_12() && func_9())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_9()
{
	int iVar0;
	
	if ((!unk_0xE9F78D191AD5EDBA(Local_61.f_3) && func_34(Local_61.f_5)) && unk_0xE9F78D191AD5EDBA(Local_61.f_2))
	{
		if (func_4(Local_61.f_2))
		{
			if (func_11(&(Local_61.f_3), Local_61.f_2, 0x00000016, Local_61.f_5, 0xFFFFFFFF, 0x00000001, 0x00000001, 0x00000001))
			{
				unk_0xC743BD39A24D0583(unk_0x1B50683925F00106(Local_61.f_3), 0x00000000);
				if (func_10())
				{
					unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_61.f_3), Global_18085A);
				}
				else
				{
					unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_61.f_3), Global_18085D);
				}
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_61.f_3), 0x00000001);
				if (func_10())
				{
					iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
					if (iVar0 < 0x00000005)
					{
						unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_61.f_3), joaat("weapon_pistol"), 0x000061A8, func_10());
					}
					else if (iVar0 > 0x00000006)
					{
						unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_61.f_3), joaat("weapon_microsmg"), 0x000061A8, func_10());
					}
					else
					{
						unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_61.f_3), joaat("weapon_pumpshotgun"), 0x000061A8, func_10());
					}
				}
				iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
				if (iVar0 == 0x00000000 || iVar0 == 0x00000001)
				{
					unk_0x083F03A847B640E9(unk_0x1B50683925F00106(Local_61.f_3), 0x00000000);
				}
				else if ((iVar0 == 0x00000002 || iVar0 == 0x00000003) || iVar0 == 0x00000004)
				{
					unk_0x083F03A847B640E9(unk_0x1B50683925F00106(Local_61.f_3), 0x00000002);
				}
				else
				{
					unk_0x083F03A847B640E9(unk_0x1B50683925F00106(Local_61.f_3), 0x00000001);
				}
				iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
				if (iVar0 == 0x00000000)
				{
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_61.f_3), 0x00000005, 0x00000001);
				}
				else if (iVar0 == 0x00000001)
				{
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_61.f_3), 0x00000011, 0x00000001);
				}
				else if (iVar0 == 0x00000002)
				{
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_61.f_3), 0x0000000D, 0x00000001);
				}
				if (func_10())
				{
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_61.f_3), 0x00000014, 0x00000001);
				}
				if (func_10())
				{
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_61.f_3), 0x00000002, 0x00000001);
				}
				iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
				if (iVar0 == 0x00000000)
				{
					unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_61.f_3), 0x00000002);
				}
				else if (iVar0 == 0x00000001)
				{
					unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_61.f_3), 0x00000001);
				}
				else if (iVar0 == 0x00000002)
				{
					unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_61.f_3), 0x00000003);
				}
				unk_0x5B318B6EBD0A7F3E(unk_0x1B50683925F00106(Local_61.f_3), 0x00000001);
				unk_0x579B0182884711E5(unk_0x1B50683925F00106(Local_61.f_3), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_61.f_3), 0x0000001D, 0x00000001);
				unk_0x545E1397F38D9D5A(unk_0x1B50683925F00106(Local_61.f_3), 0x00000003);
				unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_61.f_3), SYSTEM::ROUND((200f * Global_40001.f_9A)), 0x00000000);
				unk_0x0218D9089D75EFEE(unk_0xB177666FAB6F4417(Local_61.f_2), 0x00000001);
				unk_0xDC2C59BD0989562B(unk_0xB177666FAB6F4417(Local_61.f_2), 0x00000001);
				func_41();
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_61.f_3), iLocal_65);
				unk_0x71199B01895C6202(Local_61.f_5);
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_61.f_3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_10()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_11(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_12()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0xE9F78D191AD5EDBA(Local_61.f_2))
	{
		if (func_34(Local_61.f_4))
		{
			if (func_16(&vVar0, &fVar1))
			{
				if (func_13(&(Local_61.f_2), Local_61.f_4, vVar0, fVar1, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_61.f_2), 0x00000001, 0x00000001, 0x00000000);
					unk_0x71A357CDEB34742E(unk_0xB177666FAB6F4417(Local_61.f_2), 0x00000001);
					unk_0x750A9DEB80D6992C(unk_0xB177666FAB6F4417(Local_61.f_2), 0x00000001);
					unk_0x2E1E5367A885F9B7(unk_0xB177666FAB6F4417(Local_61.f_2), "JOYRIDER_GROUP", 0f);
					unk_0x71199B01895C6202(Local_61.f_4);
				}
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_61.f_2))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_13(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
			func_14(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_14(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_15(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
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

int func_15(int iParam0, vector3 vParam1, int iParam2)
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

bool func_16(var uParam0, float fParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!bVar0)
	{
		if (unk_0x8F91E660145F47FF(&(Local_61.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0x00000000, 0x00000001, 0x00000001))
		{
			unk_0x4A13F7D4B1E239A0(*uParam0, 0x00000001, uParam0, fParam1, &iVar1, 0x00000004, 0x40400000, 0x00000000);
			if (iVar1 >= 0x00000001 || unk_0x20EED0F7126363D7(*uParam0) == 0xEEC15169)
			{
				if (unk_0x0EB28750412C3A5A(-1367.557f, -3220.598f, 12.9448f, Local_61.f_6, 0x00000001) >= 600f && unk_0x0EB28750412C3A5A(750f, -3200f, 6f, Local_61.f_6, 0x00000001) >= 700f)
				{
					if (unk_0x0EB28750412C3A5A(func_33(unk_0xD803B885F5E47A62()), *uParam0, 0x00000001) <= (250f - 50f))
					{
						if (iLocal_70 <= 0x00000005)
						{
							if (func_17(*uParam0, 0x40C00000, 0x3F800000, 0x3F800000, 0x40A00000, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								bVar0 = 0x00000001;
							}
						}
						else
						{
							Local_61 = 0x00000004;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_69 += 4;
		if (iLocal_69 >= 0x00000050)
		{
			iLocal_69 = 0x00000014;
			iLocal_70++;
		}
	}
	return bVar0;
}

int func_17(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_24B2D0.f_2 = 0x00000000;
	if (fParam1 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0, fParam1))
		{
			return 0x00000000;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xEA19D5D9230DBB67(vParam0, fParam2))
		{
			return 0x00000000;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam3, iParam16))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam11)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 2.5f) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (fParam12 > 0f)
	{
		if (func_26(vParam0, fParam12, 0x00000001, 0x00000001, bParam13, bParam15, bParam9, bParam13))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_18(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0x00000000;
			}
		}
	}
	Global_24B2D0.f_2++;
	return 0x00000001;
}

int func_18(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_71(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_23(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if (func_71(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_20(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_19(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0x00000000 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x0EB28750412C3A5A(func_23(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
								{
									if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
									{
										return 0x00000001;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam6 || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
						{
							if (unk_0x0EB28750412C3A5A(func_23(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_19(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_20(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_21(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1407E9;
}

Vector3 func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_25() && Global_184507[iVar0 /*876*/].f_34F) && !func_24(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_33(iParam0);
}

int func_24(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_25()
{
	return Global_2564C8.f_11;
}

int func_26(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam6 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0x00000000)
		{
			if (func_71(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_19(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && uParam7) && bParam4) && func_27(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_33(iVar1), vParam0, 0x00000001) < fParam1)
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_27(int iParam0)
{
	if (func_32(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	Global_265942 = { func_31(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 0x00000001;
	}
	if (func_28(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_30(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_29()
{
	return 0xFFFFFFFF;
}

int func_30(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_29();
}

struct<13> func_31(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_32(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_31(iParam0) };
		Global_26594F = { func_31(iParam1) };
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

Vector3 func_33(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

bool func_34(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

bool func_35()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_64, 0x00000001))
	{
		if (unk_0x4490D017C57827E9(func_33(unk_0xD803B885F5E47A62()), iLocal_68, &(Local_61.f_6), 0x00000004, 0x40400000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&iLocal_64, 0x00000001);
		}
		else
		{
			iLocal_68++;
		}
	}
	return unk_0xEAE0D21A50E6C7F4(iLocal_64, 0x00000001);
}

int func_36(var uParam0)
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

void func_37(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_38(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_38(var uParam0, bool bParam1, bool bParam2)
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

void func_39()
{
	switch (vLocal_63[unk_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0x00000000:
			func_41();
			func_40();
			if (Local_61.f_9 > 0x00000000)
			{
				vLocal_63[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_60();
			break;
	}
}

void func_40()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_63[unk_0x57270EE11514DC67() /*3*/].f_1, 0x00000000))
	{
		if (func_4(Local_61.f_2) && !func_3(Local_61.f_3))
		{
			iVar0 = unk_0x7F6DC62EA9922664(unk_0xB177666FAB6F4417(Local_61.f_2));
			fVar1 = unk_0x9C66D99E63E8E24C(unk_0xB177666FAB6F4417(Local_61.f_2));
			if (iVar0 < 0x000000C8)
			{
				func_41();
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_61.f_3), iLocal_67);
				unk_0x5D96D8530B3D0904(&(vLocal_63[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000000);
			}
			else if (fVar1 < 3f)
			{
				if ((((unk_0x377BE9A1BF38C7CE(unk_0xB177666FAB6F4417(Local_61.f_2)) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_61.f_2), 0x00000003, 0x00002710)) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_61.f_2), 0x00000001, 0x00002710)) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_61.f_2), 0x00000000, 0x00002710)) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_61.f_2), 0x00000002, 0x00002710))
				{
					func_41();
					unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_61.f_3), iLocal_66);
					unk_0x5D96D8530B3D0904(&(vLocal_63[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000000);
				}
			}
		}
	}
}

void func_41()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_64, 0x00000000))
	{
		if (func_4(Local_61.f_2))
		{
			unk_0xDD353D0E9C789D0E(&iLocal_65);
			unk_0x132B85BCE016BCA0(0x00000000, unk_0xB177666FAB6F4417(Local_61.f_2), Local_61.f_6, 0x0000000E, 30f, 0x000C0024, 15f, 1f, 0x00000000);
			unk_0xE072601B4380E9DF(0x00000000, unk_0xB177666FAB6F4417(Local_61.f_2), 30f, 0x000C0024);
			unk_0x75ABDC5F81978924(iLocal_65);
			unk_0xDD353D0E9C789D0E(&iLocal_66);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000001);
			unk_0x75ABDC5F81978924(iLocal_66);
			unk_0xDD353D0E9C789D0E(&iLocal_67);
			unk_0x132B85BCE016BCA0(0x00000000, unk_0xB177666FAB6F4417(Local_61.f_2), Local_61.f_6, 0x00000005, 30f, 0x000C0024, 99999f, 1f, 0x00000000);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000001);
			unk_0x75ABDC5F81978924(iLocal_67);
			unk_0x5D96D8530B3D0904(&iLocal_64, 0x00000000);
		}
	}
}

int func_42()
{
	return Local_61;
}

int func_43(int iParam0)
{
	return vLocal_63[iParam0 /*3*/];
}

bool func_44(int iParam0)
{
	return !func_45(iParam0);
}

int func_45(int iParam0)
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
			if (func_47(unk_0xD803B885F5E47A62(), 0x00000007))
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
			if (func_47(unk_0xD803B885F5E47A62(), 0x00000007))
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
			if (func_47(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000F:
			if (func_46(0x00000004))
			{
				return 0x00000000;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000011:
			if (func_46(0x00000004))
			{
				return 0x00000000;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000010:
			if (func_46(0x00000004))
			{
				return 0x00000000;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 0x00000007))
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
			if (func_46(0x00000004))
			{
				return 0x00000000;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000013:
			if (func_46(0x00000004))
			{
				return 0x00000000;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000014:
			if (func_46(0x00000004))
			{
				return 0x00000000;
			}
			if (func_47(unk_0xD803B885F5E47A62(), 0x00000007))
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

int func_46(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_71(unk_0x117658E336116132(iVar0), 0x00000000, 0x00000001))
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

bool func_47(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

int func_48()
{
	var uVar0;
	
	func_56(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_55())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_54())
	{
		return 0x00000001;
	}
	if (func_53(0x0000009F))
	{
		if (!func_52())
		{
			return 0x00000001;
		}
	}
	if (func_53(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_49() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_49()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_49()
{
	switch (func_51())
	{
		case 0x00000000:
			return func_50();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_50()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_51()
{
	return Global_7830;
}

bool func_52()
{
	return Global_2564C8.f_256;
}

int func_53(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_54()
{
	return Global_258C08;
}

bool func_55()
{
	return Global_2564C8.f_251;
}

void func_56(var uParam0)
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
					func_57(iVar0);
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

void func_57(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_71(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_58(iVar2, &bVar3))
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

int func_58(int iParam0, var uParam1)
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

void func_59()
{
	SYSTEM::WAIT(0x00000000);
}

void func_60()
{
	func_63();
	if (func_42() == 0x00000004 && Local_61.f_4 != 0x00000000)
	{
		unk_0xAB8E2DDC7AF955E0(Local_61.f_4, 0x00000000);
	}
	if (func_4(Local_61.f_2))
	{
		unk_0x06FF977AA95DCCE3(unk_0xB177666FAB6F4417(Local_61.f_2), 0f);
	}
	unk_0x8910D3D58E0132B8("JOYRIDER_RADIO_SCENE");
	func_62(0x00000009, 0x00000000);
	func_61();
}

void func_61()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_62(int iParam0, bool bParam1)
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

void func_63()
{
	unk_0xF82EA857DA10E0CD(&iLocal_65);
}

void func_64(struct<21> Param0)
{
	int iVar0;
	
	func_69(func_70(Param0), Param0);
	unk_0x0BEC04ECA8485A3A(0x00000001);
	unk_0x28E5F00F131890E3(0x00000001);
	func_67(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_61, 0x0000000C);
	unk_0x35B62793EAE9ADDF(&vLocal_63, 0x00000061);
	if (!func_66())
	{
		func_60();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0x00000000);
		if (unk_0xBFF81ED3B99522C7())
		{
			if (Global_26B66F.f_1122 == 0x00000000)
			{
				iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000007);
				switch (iVar0)
				{
					case 0x00000000:
						Local_61.f_4 = joaat("stingergt");
						break;
					
					case 0x00000001:
						Local_61.f_4 = joaat("entityxf");
						break;
					
					case 0x00000002:
						Local_61.f_4 = joaat("feltzer2");
						break;
					
					case 0x00000003:
						Local_61.f_4 = joaat("monroe");
						break;
					
					case 0x00000004:
						Local_61.f_4 = joaat("cogcabrio");
						break;
					
					case 0x00000005:
						Local_61.f_4 = joaat("superd");
						break;
					
					case 0x00000006:
						Local_61.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_61.f_4 = Global_26B66F.f_1122;
				Global_26B66F.f_1122 = 0x00000000;
			}
			unk_0xAB8E2DDC7AF955E0(Local_61.f_4, 0x00000001);
			Local_61.f_5 = func_65(0x00000001);
		}
		func_62(0x00000009, 0x00000001);
		unk_0x8BC9595FD2792B5D("JOYRIDER_RADIO_SCENE");
		vLocal_63[unk_0x57270EE11514DC67() /*3*/] = 0x00000000;
	}
	else
	{
		func_60();
	}
}

int func_65(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000020);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0x00000000:
				return joaat("a_m_m_eastsa_01");
			
			case 0x00000001:
				return joaat("a_m_m_bevhills_01");
			
			case 0x00000002:
				return joaat("a_m_m_bevhills_02");
			
			case 0x00000003:
				return joaat("a_m_m_business_01");
			
			case 0x00000004:
				return joaat("a_m_m_malibu_01");
			
			case 0x00000005:
				return joaat("a_m_m_eastsa_02");
			
			case 0x00000006:
				return joaat("a_m_m_hillbilly_01");
			
			case 0x00000007:
				return joaat("a_m_m_hillbilly_02");
			
			case 0x00000008:
				return joaat("a_m_m_og_boss_01");
			
			case 0x00000009:
				return joaat("a_m_m_stlat_02");
			
			case 0x0000000A:
				return joaat("a_m_y_beachvesp_01");
			
			case 0x0000000B:
				return joaat("a_m_y_epsilon_01");
			
			case 0x0000000C:
				return joaat("a_m_m_prolhost_01");
			
			case 0x0000000D:
				return joaat("a_m_m_salton_01");
			
			case 0x0000000E:
				return joaat("a_m_m_skater_01");
			
			case 0x0000000F:
				return joaat("a_m_y_skater_02");
			
			case 0x00000010:
				return joaat("a_m_y_methhead_01");
			
			case 0x00000011:
				return joaat("a_m_m_skidrow_01");
			
			case 0x00000012:
				return joaat("a_m_m_soucent_01");
			
			case 0x00000013:
				return joaat("a_m_m_soucent_02");
			
			case 0x00000014:
				return joaat("a_m_m_soucent_03");
			
			case 0x00000015:
				return joaat("a_m_y_genstreet_02");
			
			case 0x00000016:
				return joaat("a_m_y_roadcyc_01");
			
			case 0x00000017:
				return joaat("a_m_m_afriamer_01");
			
			case 0x00000018:
				return joaat("a_m_m_beach_01");
			
			case 0x00000019:
				return joaat("a_m_m_farmer_01");
			
			case 0x0000001A:
				return joaat("a_m_m_fatlatin_01");
			
			case 0x0000001B:
				return joaat("a_m_m_genfat_01");
			
			case 0x0000001C:
				return joaat("a_m_m_indian_01");
			
			case 0x0000001D:
				return joaat("a_m_m_ktown_01");
			
			case 0x0000001E:
				return joaat("a_m_m_socenlat_01");
			
			case 0x0000001F:
				return joaat("a_m_m_mexlabor_01");
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0x00000000:
				return joaat("a_f_m_bevhills_01");
			
			case 0x00000001:
				return joaat("a_f_m_bevhills_02");
			
			case 0x00000002:
				return joaat("a_f_m_beach_01");
			
			case 0x00000003:
				return joaat("a_f_m_ktown_02");
			
			case 0x00000004:
				return joaat("a_f_m_prolhost_01");
			
			case 0x00000005:
				return joaat("a_f_m_bodybuild_01");
			
			case 0x00000006:
				return joaat("a_f_m_business_02");
			
			case 0x00000007:
				return joaat("a_f_m_downtown_01");
			
			case 0x00000008:
				return joaat("a_f_m_eastsa_01");
			
			case 0x00000009:
				return joaat("a_f_m_eastsa_02");
			
			case 0x0000000A:
				return joaat("a_f_m_fatwhite_01");
			
			case 0x0000000B:
				return joaat("a_f_m_ktown_01");
			
			case 0x0000000C:
				return joaat("a_f_m_ktown_02");
			
			case 0x0000000D:
				return joaat("a_f_m_salton_01");
			
			case 0x0000000E:
				return joaat("a_f_m_skidrow_01");
			
			case 0x0000000F:
				return joaat("a_f_m_soucent_01");
			
			case 0x00000010:
				return joaat("a_f_m_soucent_02");
			
			case 0x00000011:
				return joaat("a_f_m_soucentmc_01");
			
			case 0x00000012:
				return joaat("a_f_m_tramp_01");
			
			case 0x00000013:
				return joaat("a_f_m_trampbeac_01");
			
			case 0x00000014:
				return joaat("a_f_y_yoga_01");
			
			case 0x00000015:
				return joaat("a_f_y_vinewood_02");
			
			case 0x00000016:
				return joaat("a_f_y_vinewood_03");
			
			case 0x00000017:
				return joaat("a_f_y_vinewood_04");
			
			case 0x00000018:
				return joaat("a_f_y_tennis_01");
			
			case 0x00000019:
				return joaat("a_f_y_tourist_01");
			
			case 0x0000001A:
				return joaat("a_f_y_hipster_01");
			
			case 0x0000001B:
				return joaat("a_f_y_golfer_01");
			
			case 0x0000001C:
				return joaat("a_f_y_fitness_01");
			
			case 0x0000001D:
				return joaat("a_f_y_scdressy_01");
			
			case 0x0000001E:
				return joaat("a_f_y_epsilon_01");
			
			case 0x0000001F:
				return joaat("a_f_y_hiker_01");
			
			default:
		}
	}
	return joaat("a_f_m_bevhills_01");
}

int func_66()
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
		if (func_55())
		{
			return 0x00000000;
		}
		if (func_53(0x0000009D))
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

int func_67(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_61();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_68())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_61();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_55())
				{
					if (!bParam2)
					{
						func_61();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_53(0x0000009D))
				{
					if (!bParam2)
					{
						func_61();
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
					func_61();
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
				func_61();
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
			func_61();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_68()
{
	return Global_140856;
}

void func_69(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_61();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_70(int iParam0)
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

int func_71(int iParam0, bool bParam1, bool bParam2)
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

