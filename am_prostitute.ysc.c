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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	vector3 vLocal_58[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<21> Local_59 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x8CD06866876216F2())
	{
		func_51(ScriptParam_59);
	}
	else
	{
		func_46();
	}
	iLocal_53 = unk_0x1C0640BA9A7327B3();
	while (0x00000001)
	{
		func_45();
		if (((func_34() || unk_0x09BE1E6DF7B80B43()) || (func_33(unk_0xD803B885F5E47A62()) || func_32(unk_0xD803B885F5E47A62()))) || func_29(unk_0xD803B885F5E47A62()))
		{
			func_46();
		}
		if (unk_0x8CD06866876216F2())
		{
			func_2();
			func_1();
			iLocal_54++;
			if (iLocal_54 >= unk_0x54EABC0DD106045B())
			{
				iLocal_54 = 0x00000000;
			}
		}
		else
		{
			func_46();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x6E61BE9E61434AC1();
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if ((iLocal_54 % iVar0) == 0x00000000)
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				iVar2 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0)));
				if (!unk_0x437347B10A200C4B(iVar2, 0x00000000))
				{
					if (vLocal_58[iVar0 /*3*/].f_2)
					{
						if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iVar2, 0x00000001)) <= 22500f)
						{
							if (!iLocal_56)
							{
								unk_0x3F423BF5B8125A50("mini@prostitutes@sexlow_veh");
								unk_0x3F423BF5B8125A50("mini@prostitutes@sexnorm_veh");
								unk_0x3F423BF5B8125A50("mini@prostitutes@sexlow_veh_first_person");
								unk_0x3F423BF5B8125A50("mini@prostitutes@sexnorm_veh_first_person");
								unk_0x3F423BF5B8125A50("anim@mini@prostitutes@sex@veh_vstr@");
								iLocal_56 = 0x00000001;
							}
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_55, iVar0))
							{
								unk_0x5D96D8530B3D0904(&iLocal_55, iVar0);
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(iLocal_55, iVar0))
						{
							unk_0x0674E58A79778E99(&iLocal_55, iVar0);
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(iLocal_55, iVar0))
					{
						unk_0x0674E58A79778E99(&iLocal_55, iVar0);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_55, iVar0))
				{
					unk_0x0674E58A79778E99(&iLocal_55, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_55 == 0x00000000 && iLocal_56) && !vLocal_58[iVar1 /*3*/].f_2)
	{
		unk_0x8D17794CE3273D70("mini@prostitutes@sexlow_veh");
		unk_0x8D17794CE3273D70("mini@prostitutes@sexnorm_veh");
		unk_0x8D17794CE3273D70("mini@prostitutes@sexlow_veh_first_person");
		unk_0x8D17794CE3273D70("mini@prostitutes@sexnorm_veh_first_person");
		unk_0x8D17794CE3273D70("anim@mini@prostitutes@sex@veh_vstr@");
		iLocal_56 = 0x00000000;
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return;
	}
	if (iLocal_53 > unk_0x1C0640BA9A7327B3())
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar2 = unk_0x6E61BE9E61434AC1();
	bVar3 = 0x00000000;
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar1 = unk_0x16F2683693E537C9();
			if (func_28(&iVar1))
			{
				bVar3 = 0x00000001;
			}
		}
	}
	switch (iLocal_52)
	{
		case 0x00000000:
			if (((func_25(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) || func_24()) || !bVar3) || func_17())
			{
				iLocal_52 = 0x00000004;
			}
			else
			{
				iVar0 = func_13();
				if (iVar0 != func_12(iVar2) && iVar0 != 0x00000000)
				{
					func_11(iVar0);
					iLocal_53 = unk_0x1C0640BA9A7327B3();
					iLocal_52 = 0x00000002;
				}
				else
				{
					iLocal_53 = unk_0x1C0640BA9A7327B3() + 500;
				}
			}
			break;
		
		case 0x00000002:
			if (func_4())
			{
				Global_78C9 = 0f;
				unk_0x92DCE5C81176D2B4("pb_prostitute");
				iLocal_53 = unk_0x1C0640BA9A7327B3() + 250;
				vLocal_58[iVar2 /*3*/].f_2 = 0x00000000;
				iLocal_52 = 0x00000003;
			}
			else
			{
				iLocal_53 = unk_0x1C0640BA9A7327B3() + 250;
			}
			break;
		
		case 0x00000003:
			if ((unk_0x1FBF08B001C4788A("pb_prostitute") && unk_0x8A22C4C08282BF26(joaat("pb_prostitute")) <= 0x00000000) && !unk_0xADC2AA9A68E522A1("pb_prostitute", unk_0x6E61BE9E61434AC1(), 0x00000001, 0x00000000))
			{
				iVar4 = func_12(iVar2);
				iLocal_57 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("pb_prostitute", &iVar4, 0x00000001, 0x00000802);
				unk_0x5E8C29AE121DF1C7("pb_prostitute");
				iLocal_52 = 0x00000000;
			}
			iLocal_53 = unk_0x1C0640BA9A7327B3();
			break;
		
		case 0x00000004:
			if (func_4())
			{
				vLocal_58[iVar2 /*3*/].f_2 = 0x00000000;
				iLocal_53 = unk_0x1C0640BA9A7327B3() + 250;
				iLocal_52 = 0x00000005;
			}
			else
			{
				iLocal_53 = unk_0x1C0640BA9A7327B3() + 500;
			}
			break;
		
		case 0x00000005:
			if (((!func_25(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && !func_24()) && bVar3) && !func_3())
			{
				iLocal_53 = unk_0x1C0640BA9A7327B3() + 250;
				iLocal_52 = 0x00000000;
			}
			else
			{
				iLocal_53 = unk_0x1C0640BA9A7327B3() + 500;
			}
			break;
	}
}

bool func_3()
{
	return Global_19D9B7;
}

int func_4()
{
	if (unk_0x8A22C4C08282BF26(joaat("pb_prostitute")) <= 0x00000000 && !unk_0xADC2AA9A68E522A1("pb_prostitute", unk_0x6E61BE9E61434AC1(), 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (iLocal_57 == 0x00000000)
	{
		return 0x00000001;
	}
	if (unk_0x8CD06866876216F2())
	{
		func_5();
	}
	else
	{
		unk_0x92C09D86742BFBDB("pb_prostitute", 0x00000001);
	}
	return 0x00000000;
}

void func_5()
{
	struct<2> Var0;
	int iVar1;
	
	Var0 = 0x9299659D;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	iVar1 = func_6(0x00000001, 0x00000001);
	if (iVar1 != 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000002, iVar1);
	}
}

var func_6(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_10(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_7(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_8(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1407E9;
}

int func_10(int iParam0, bool bParam1, bool bParam2)
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

void func_11(int iParam0)
{
	vLocal_58[unk_0x6E61BE9E61434AC1() /*3*/] = iParam0;
}

int func_12(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return vLocal_58[unk_0x6E61BE9E61434AC1() /*3*/];
	}
	return vLocal_58[iParam0 /*3*/];
}

int func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	
	iVar0 = func_14();
	iVar1 = unk_0x6E61BE9E61434AC1();
	if (!unk_0xC844350D5D58C99A(func_12(iVar1)))
	{
		func_11(0x00000000);
		return iVar0;
	}
	if (iLocal_57 != 0x00000000 && unk_0x1727A44C562FBED2(iLocal_57))
	{
		if (vLocal_58[iVar1 /*3*/].f_2)
		{
			return func_12(iVar1);
		}
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar2 = unk_0x16F2683693E537C9();
				if (func_28(&iVar2))
				{
					iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xC844350D5D58C99A(iVar3))
					{
						if (func_12(iVar1) == unk_0xA30B8362589C124A(iVar3, 0x00000000, 0x00000000) || unk_0xC42A92762C58E1B9(func_12(iVar1), iVar3, 0x00000001))
						{
							vLocal_58[iVar1 /*3*/].f_2 = 0x00000001;
							return func_12(iVar1);
						}
					}
					if (iVar0 == 0x00000000)
					{
						return func_12(iVar1);
					}
					vVar4 = { unk_0x68F4C0EC296D3901(func_12(iVar1), 0x00000000) };
					vVar5 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000000) };
					vVar6 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
					fVar7 = SYSTEM::VDIST(vVar4, vVar6);
					fVar8 = SYSTEM::VDIST(vVar6, vVar5);
					if (fVar7 > fVar8)
					{
						if ((fVar7 - fVar8) > 25f)
						{
							return iVar0;
						}
						else if (fVar8 < 6f && fVar7 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_12(iVar1);
						}
					}
					else
					{
						return func_12(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_14()
{
	int iVar0;
	var uVar1[8];
	int iVar2;
	int iVar3;
	
	iVar0 = 0x00000000;
	iVar2 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar1, 0xFFFFFFFF);
	if (iVar2 > 0x00000000)
	{
		iVar3 = 0x00000000;
		while (iVar3 <= 0x00000007)
		{
			if (!unk_0xEB6A8945D1AC98A1(uVar1[iVar3]))
			{
				if (unk_0xD3658E8B80B4DE3E(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0xD3658E8B80B4DE3E(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_16(uVar1[iVar3]))
					{
						if (!func_15(uVar1[iVar3]))
						{
							if (!unk_0xE9FDA1035CFEA94F(uVar1[iVar3]))
							{
								return uVar1[iVar3];
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

int func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000001F)
	{
		if (vLocal_58[iVar0 /*3*/] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_16(int iParam0)
{
	var uVar0;
	char* sVar1;
	
	sVar1 = unk_0xA712FAE854841798(iParam0, &uVar0);
	if (!unk_0xEA6BC48857E0AC4C(sVar1))
	{
		if (unk_0x7F8A39872A07D2CE(sVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0x00000000;
		}
		if (unk_0x7F8A39872A07D2CE(sVar1, "BUSINESS_BATTLES_SELL"))
		{
			return 0x00000000;
		}
		if (unk_0x7F8A39872A07D2CE(sVar1, "BUSINESS_BATTLES"))
		{
			return 0x00000000;
		}
		if (unk_0x7F8A39872A07D2CE(sVar1, "GB_CASINO"))
		{
			return 0x00000000;
		}
		if (unk_0x7F8A39872A07D2CE(sVar1, "GB_CASINO_HEIST"))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_17()
{
	if (func_3())
	{
		return 0x00000001;
	}
	if (func_22(unk_0xD803B885F5E47A62()) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (func_18(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_18(int iParam0)
{
	if (func_19(func_20(iParam0)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000F3:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_20(int iParam0)
{
	if (func_21(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_21(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_22(int iParam0)
{
	if (func_20(iParam0) == 0x000000ED || func_20(iParam0) == 0x000000FA)
	{
		return func_23(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_23(int iParam0)
{
	if (func_21(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

bool func_24()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

int func_25(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_26(iParam0))
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

bool func_26(int iParam0)
{
	return func_27(iParam0);
}

bool func_27(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

int func_28(int iParam0)
{
	if (unk_0x405E212DDE472467(*iParam0, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(unk_0x3C66DF04E6EA3587(*iParam0), 0xFFFFFFFF, 0x00000000) == *iParam0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_29(int iParam0)
{
	if (iParam0 != func_31())
	{
		if (func_10(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_30(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_30(int iParam0)
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

int func_31()
{
	return 0xFFFFFFFF;
}

bool func_32(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

bool func_33(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

int func_34()
{
	var uVar0;
	
	func_42(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_41())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_40())
	{
		return 0x00000001;
	}
	if (func_39(0x0000009F))
	{
		if (!func_38())
		{
			return 0x00000001;
		}
	}
	if (func_39(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_35() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_35()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_35()
{
	switch (func_37())
	{
		case 0x00000000:
			return func_36();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_36()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_37()
{
	return Global_7830;
}

bool func_38()
{
	return Global_2564C8.f_256;
}

int func_39(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_40()
{
	return Global_258C08;
}

bool func_41()
{
	return Global_2564C8.f_251;
}

void func_42(var uParam0)
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
					func_43(iVar0);
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

void func_43(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_10(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_44(iVar2, &bVar3))
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

int func_44(int iParam0, var uParam1)
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

void func_45()
{
	SYSTEM::WAIT(0x00000000);
}

void func_46()
{
	if (iLocal_56)
	{
		unk_0x8D17794CE3273D70("mini@prostitutes@sexlow_veh");
		unk_0x8D17794CE3273D70("mini@prostitutes@sexnorm_veh");
		unk_0x8D17794CE3273D70("mini@prostitutes@sexlow_veh_first_person");
		unk_0x8D17794CE3273D70("mini@prostitutes@sexnorm_veh_first_person");
		unk_0x8D17794CE3273D70("anim@mini@prostitutes@sex@veh_vstr@");
	}
	if (!func_50(unk_0xD803B885F5E47A62()) && !func_49(unk_0xD803B885F5E47A62()))
	{
		func_48();
	}
	func_4();
	if (unk_0x8CD06866876216F2())
	{
		func_5();
	}
	else
	{
		unk_0x92C09D86742BFBDB("pb_prostitute", 0x00000001);
	}
	Global_26B66F.f_4 = 0x00000000;
	func_47();
}

void func_47()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_48()
{
	Global_2537E2.f_484.f_A = 0x00000000;
}

int func_49(int iParam0)
{
	if (iParam0 != func_31())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 0x0000001D);
	}
	return 0x00000000;
}

int func_50(int iParam0)
{
	if (iParam0 != func_31())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_189.f_2, 0x00000010);
	}
	return 0x00000000;
}

void func_51(struct<21> Param0)
{
	func_54(func_55(Param0), Param0);
	func_52(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x35B62793EAE9ADDF(&vLocal_58, 0x00000061);
	if (unk_0x8CD06866876216F2())
	{
		func_5();
	}
	else
	{
		unk_0x92C09D86742BFBDB("pb_prostitute", 0x00000001);
	}
	unk_0x256D93AFAE851A7A(0x00000000);
}

int func_52(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_47();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_53())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_41())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_39(0x0000009D))
				{
					if (!bParam2)
					{
						func_47();
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
					func_47();
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
				func_47();
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
			func_47();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_53()
{
	return Global_140856;
}

void func_54(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_47();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_55(int iParam0)
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

