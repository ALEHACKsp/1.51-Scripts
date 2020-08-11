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
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_61 = 0;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	bool bLocal_68 = 0;
	struct<21> Local_69 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x8CD06866876216F2())
	{
		if (!func_232(ScriptParam_69))
		{
			func_226();
		}
		if (ScriptParam_69.f_10 >= 0x00000020)
		{
			if (func_225(unk_0xD803B885F5E47A62()) != 0x00000001 && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_35B.f_7, 0x00000000))
			{
				func_226();
			}
		}
	}
	uLocal_64 = ScriptParam_69.f_13;
	while (0x00000001)
	{
		func_224();
		if (func_214())
		{
			func_226();
		}
		if (ScriptParam_69.f_10 >= 0x00000020)
		{
			if (func_225(unk_0xD803B885F5E47A62()) != 0x00000001 && Global_18D266 == 0x00000000)
			{
				func_226();
			}
		}
		if (unk_0x09BE1E6DF7B80B43() != bLocal_68)
		{
			func_226();
		}
		unk_0x0F6D9B8ED0147392();
		switch (func_213(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (func_212())
				{
					if (func_211() == 0x00000001)
					{
						vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000001;
					}
					else if (func_211() == 0x00000004)
					{
						vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
					}
				}
				break;
			
			case 0x00000001:
				if (func_211() == 0x00000001)
				{
					func_185();
				}
				else if (func_211() == 0x00000004)
				{
					vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000003;
				}
				if (vLocal_62[unk_0x57270EE11514DC67() /*3*/].f_2 == 0x00000000)
				{
					if ((!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_60.f_3, 500f, 500f, 500f, 0x00000000, 0x00000001, 0x00000000) && func_225(unk_0xD803B885F5E47A62()) != 0x00000001) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_35B.f_7, 0x00000000))
					{
						vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
					}
				}
				break;
			
			case 0x00000003:
				func_183(&(Local_60.f_9));
				if (func_182(&(Local_60.f_9)))
				{
					vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
				}
				break;
			
			case 0x00000002:
				vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000004;
			
			case 0x00000004:
				func_226();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_211())
			{
				case 0x00000000:
					if (func_7())
					{
						Local_60 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					func_6();
					func_5();
					if (func_1())
					{
						Local_60 = 0x00000004;
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
	if (Local_60.f_7 >= 0x00000020 && func_225(unk_0xD803B885F5E47A62()) == 0x00000001)
	{
		if (func_4(Global_26B66F.f_35B.f_1))
		{
			return 0x00000001;
		}
	}
	if (func_3(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (Local_60.f_8 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_3(int iParam0)
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

int func_4(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_5()
{
	switch (Local_60.f_8)
	{
		case 0x00000000:
			if (!unk_0xE9F78D191AD5EDBA(Local_60.f_2) || Local_60.f_6 != 0xFFFFFFFF)
			{
				Local_60.f_8 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			Local_60.f_8 = 0x00000002;
			break;
		
		case 0x00000002:
			break;
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (Local_60.f_6 == 0xFFFFFFFF)
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_62[iVar0 /*3*/].f_1, 0x00000000))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 0x00000007))
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_62[iVar0 /*3*/].f_1, 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&(Local_60.f_1), 0x00000007);
				}
			}
		}
		iVar0++;
	}
}

int func_7()
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	struct<35> Var7;
	
	if (!unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		if (func_212())
		{
			if (unk_0x081C8BC5094A7B76(0x00000001))
			{
				fVar3 = 250f;
				vVar4 = { Local_60.f_3 };
				if (unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 0x00000008))
				{
					vVar0 = { Global_26B66F.f_35B.f_1 };
					fVar1 = Global_26B66F.f_35B.f_4;
				}
				if (func_225(unk_0xD803B885F5E47A62()) == 0x00000007)
				{
					iVar6 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
					if (Global_440000.f_10F[iVar6 /*15700*/].f_88B[0x00000000 /*36*/].f_17 > 0f)
					{
						vVar4 = { Global_440000.f_10F[iVar6 /*15700*/].f_88B[0x00000000 /*36*/].f_10 };
						vVar5 = { Global_440000.f_10F[iVar6 /*15700*/].f_88B[0x00000000 /*36*/].f_13 };
						fVar3 = Global_440000.f_10F[iVar6 /*15700*/].f_88B[0x00000000 /*36*/].f_17;
						iVar2 = 0x00000001;
					}
					else if (Global_440000.f_10F[iVar6 /*15700*/].f_88B[0x00000000 /*36*/].f_16 > 0f)
					{
						vVar4 = { Global_440000.f_10F[iVar6 /*15700*/].f_88B[0x00000000 /*36*/].f_D };
						fVar3 = Global_440000.f_10F[iVar6 /*15700*/].f_88B[0x00000000 /*36*/].f_16;
					}
				}
				Var7.f_5 = 0x42820000;
				Var7.f_D = 0x00000002;
				Var7.f_14 = 0x00000002;
				Var7.f_20 = 0xBF800000;
				Var7.f_22 = 0x00000001;
				Var7.f_4 = 0x00000001;
				Var7.f_5 = 30f;
				Var7.f_A = 0x00000001;
				if (iVar2 == 0x00000000)
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 0x00000008) || func_181(vVar4, fVar3, &vVar0, &fVar1, &Var7))
					{
						if (Local_60.f_7 >= 0x00000020 || func_225(unk_0xD803B885F5E47A62()) == 0x00000001)
						{
							Local_60.f_2 = unk_0x4193A2DE62BC07C0(unk_0xEC03378782221D46(joaat("pickup_portable_package"), vVar0, 0x00000001, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = unk_0x4193A2DE62BC07C0(unk_0xE2E04D27E0E84BD7(joaat("pickup_portable_package"), vVar0, 0x00000001, joaat("prop_drug_package_02")));
						}
						unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_60.f_2), fVar1);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 0x00000008) || func_8(vVar4, vVar5, fVar3, &vVar0, &fVar1, Var7))
				{
					if (Local_60.f_7 >= 0x00000020 || func_225(unk_0xD803B885F5E47A62()) == 0x00000001)
					{
						Local_60.f_2 = unk_0x4193A2DE62BC07C0(unk_0xEC03378782221D46(joaat("pickup_portable_package"), vVar0, 0x00000001, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = unk_0x4193A2DE62BC07C0(unk_0xE2E04D27E0E84BD7(joaat("pickup_portable_package"), vVar0, 0x00000001, joaat("prop_drug_package_02")));
					}
					unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_60.f_2), fVar1);
				}
			}
		}
	}
	if (unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_8(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3, float fParam4, struct<8> Param5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)
{
	struct<17> Var0;
	struct<25> Var1;
	
	if (Param5.f_5 < 20f)
	{
		Param5.f_5 = 20f;
	}
	Var0 = 0x00000005;
	Var0.f_10 = 0x00000005;
	Var0.f_16 = 0x00000005;
	Var0.f_1C = 0x00000005;
	Var1.f_10 = 0x00000001;
	Var1.f_16 = 0x00000001;
	Var1.f_17 = 0x00000001;
	Var1.f_18 = 0x00000001;
	Var1.f_5 = 0x00000000;
	Var1.f_6 = 0x00000001;
	Var1.f_7 = 0x00000002;
	Var1.f_8 = { vParam0 };
	Var1.f_B = { vParam1 };
	Var1.f_E = fParam2;
	Var1.f_F = 0x00000000;
	Var1.f_10 = 0x00000001;
	Var1.f_11 = 0x00000000;
	Param5.f_7 = 0x00000000;
	if (func_9(&Var1, &Param5, &Var0))
	{
		*uParam3 = { Var0[0x00000000 /*3*/] };
		*fParam4 = Var0.f_10[0x00000000];
		return 0x00000001;
	}
	return 0x00000000;
}

int func_9(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = 0x00000000;
	switch (uParam0->f_7)
	{
		case 0x00000000:
			if (((!Global_24B2D0.f_99A == *uParam0 || !Global_24B2D0.f_99A.f_1 == uParam0->f_1) || !Global_24B2D0.f_99A.f_2 == uParam0->f_2) || !Global_24B2D0.f_99D == uParam0->f_4)
			{
				bVar13 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (((((!Global_24B2D0.f_9A8 == uParam0->f_8 || !Global_24B2D0.f_9A8.f_1 == uParam0->f_8.f_1) || !Global_24B2D0.f_9A8.f_2 == uParam0->f_8.f_2) || !Global_24B2D0.f_9AB == uParam0->f_B) || !Global_24B2D0.f_9AB.f_1 == uParam0->f_B.f_1) || !Global_24B2D0.f_9AB.f_2 == uParam0->f_B.f_2)
			{
				bVar13 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			if ((((((!Global_24B2D0.f_9A8 == uParam0->f_8 || !Global_24B2D0.f_9A8.f_1 == uParam0->f_8.f_1) || !Global_24B2D0.f_9A8.f_2 == uParam0->f_8.f_2) || !Global_24B2D0.f_9AB == uParam0->f_B) || !Global_24B2D0.f_9AB.f_1 == uParam0->f_B.f_1) || !Global_24B2D0.f_9AB.f_2 == uParam0->f_B.f_2) || !Global_24B2D0.f_9AE == uParam0->f_E)
			{
				bVar13 = 0x00000001;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_24B2D0.f_998 == 0x00000001)
		{
			if (unk_0x1727A44C562FBED2(Global_24B2D0.f_9A1))
			{
				if (Global_24B2D0.f_9A1 == unk_0x0D0A574C76D769AC())
				{
					if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99E) < func_180(0x00000000))
					{
						return 0x00000000;
					}
				}
				else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99E) < func_180(0x00000000))
				{
					return 0x00000000;
				}
			}
			unk_0xDEED9606C7D093F7();
			unk_0x0FB2CEE58DA4A6EE();
			func_179();
		}
		Global_24B2D0.f_998 = 0x00000000;
	}
	else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99E) > func_180(0x00000000))
	{
		Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
		func_173();
	}
	switch (uParam0->f_7)
	{
		case 0x00000000:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 0x00000001:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_B;
			}
			else
			{
				fVar2 = uParam0->f_B;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_B.f_1;
			}
			else
			{
				fVar3 = uParam0->f_B.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 0x00000002:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_B + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar2 = (uParam0->f_B - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_E));
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_B.f_1 + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar3 = (uParam0->f_B.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_E));
			}
			break;
	}
	unk_0x10FEEAFF01E32639(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0x00000000)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_B * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_24B2D0.f_998)
	{
		unk_0xDEED9606C7D093F7();
		unk_0x0FB2CEE58DA4A6EE();
		func_179();
		if (uParam1->f_7 && uParam0->f_7 == 0x00000000)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_172(*uParam0, 6f, 1f, 1f, 5f, 0x00000001, 0x00000001, 0x00000001, 120f, 0x00000000, 0xFFFFFFFF, 0x00000001, uParam1->f_5, uParam0->f_11, 0x00000000, 0x00000000, 0x00000000))
				{
					*(uParam2[0x00000000 /*3*/]) = { *uParam0 };
					uParam2->f_10[0x00000000] = uParam0->f_3;
					return 0x00000001;
				}
			}
		}
		if (!unk_0xC79C8A78EC708587())
		{
			Global_24B2D0.f_9AF = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0x00000000:
					Global_24B2D0.f_99A = { *uParam0 };
					Global_24B2D0.f_99D = uParam0->f_4;
					break;
				
				case 0x00000001:
					Global_24B2D0.f_9A8 = { uParam0->f_8 };
					Global_24B2D0.f_9AB = { uParam0->f_B };
					Global_24B2D0.f_9AE = 0f;
					Global_24B2D0.f_99A = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
				
				case 0x00000002:
					Global_24B2D0.f_9A8 = { uParam0->f_8 };
					Global_24B2D0.f_9AB = { uParam0->f_B };
					Global_24B2D0.f_9AE = uParam0->f_E;
					Global_24B2D0.f_99A = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_171(vVar6.x, vVar6.y);
			}
			Global_24B2D0.f_999 = 0x00000001;
			Global_24B2D0.f_998 = 0x00000001;
			Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
			Global_24B2D0.f_99E = unk_0x2B6E0A53779D29EA();
			Global_24B2D0.f_9A1 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			return 0x00000000;
		}
	}
	if (Global_24B2D0.f_998)
	{
		if (Global_24B2D0.f_999 == 0x00000001)
		{
			if (unk_0xD1B4D22E0BA9B0C8(fVar2, fVar3, fVar4, fVar5) || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99F) > 0x00001388)
			{
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_15)
					{
						*(uParam2[0x00000000 /*3*/]) = { uParam0->f_12 };
					}
					else
					{
						*(uParam2[0x00000000 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 0x40800000;
					Var14.f_7 = 0x461C3C00;
					Var14.f_8 = 0x00000001;
					Var14.f_A = 0x00000001;
					Var14.f_D = 0x00000001;
					Var14.f_F = 0x00000001;
					Var14.f_10 = 0x00000001;
					Var14.f_1F = 0x00000001;
					Var14.f_22 = joaat("tailgater");
					Var14.f_26 = 0x00000002;
					Var14.f_2D = 0x00000002;
					Var14.f_31 = 0x42F00000;
					Var14.f_35 = 0x000003E7;
					Var14.f_36 = 0x461C3F9A;
					Var14.f_37 = 0x00000001;
					Var14.f_38 = 0x00000001;
					Var14.f_39 = 0x00000001;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_B = uParam1->f_9;
					Var14.f_12 = 0x00000001;
					if (uParam1->f_20 > 0f)
					{
						Var14.f_6 = uParam1->f_20;
					}
					switch (uParam0->f_7)
					{
						case 0x00000000:
							Var14.f_13 = { *uParam0 };
							Var14.f_19 = uParam0->f_4;
							break;
						
						case 0x00000001:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = 0f;
							break;
						
						case 0x00000002:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = uParam0->f_E;
							break;
					}
					Var14.f_1A = uParam0->f_7;
					Var14.f_C = uParam0->f_F;
					if (uParam0->f_15)
					{
						Var14.f_1E = 0x00000001;
						Var14.f_20 = 0x00000001;
					}
					iVar9 = 0x00000000;
					while (iVar9 < 0x00000002)
					{
						Var14.f_26[iVar9 /*3*/] = { uParam1->f_D[iVar9 /*3*/] };
						Var14.f_2D[iVar9] = uParam1->f_14[iVar9];
						iVar9++;
					}
					Var14.f_33 = uParam1->f_1E;
					Var14.f_37 = uParam0->f_10;
					if (uParam0->f_1A)
					{
						Var14.f_A = 0x00000000;
					}
					if (func_170(Global_440000.f_38DB3))
					{
						Var14.f_9 = 0x00000001;
					}
					func_145(uParam2[0x00000000 /*3*/], &(uParam2->f_10[0x00000000]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0x00000000)
					{
						if (!func_144(*(uParam2[0x00000000 /*3*/]), *uParam0, uParam0->f_4, 0x00000001, 0x00000001))
						{
							*(uParam2[0x00000000 /*3*/]) = { *uParam0 };
							uParam2->f_10[0x00000000] = uParam0->f_3;
						}
					}
					Global_24B2D0.f_999 = 0x00000009;
				}
				else
				{
					Global_24B2D0.f_999 = 0x00000002;
				}
			}
		}
		if (Global_24B2D0.f_999 == 0x00000002)
		{
			if ((unk_0xF8A3B10A1B8ACCDD(vVar7, vVar8) || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99F) > 0x00003A98) || unk_0x7D293360C866EB8E(vVar7, vVar8) == 0x00000000)
			{
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				if (uParam0->f_5 && !func_141(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					Global_24B2D0.f_999 = 0x00000003;
				}
				else
				{
					Global_24B2D0.f_999 = 0x00000004;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_9A3) > 0x00001B58)
			{
				func_140(vVar6.x, vVar6.y);
			}
		}
		if (Global_24B2D0.f_999 == 0x00000003)
		{
			if (func_139() || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99F) > 0x00002710)
			{
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				Global_24B2D0.f_999 = 0x00000004;
			}
		}
		if (Global_24B2D0.f_999 == 0x00000004)
		{
			if (unk_0xC79C8A78EC708587())
			{
				unk_0xDEED9606C7D093F7();
				unk_0x0FB2CEE58DA4A6EE();
			}
			else
			{
				iVar0 = 0x00000000;
				func_173();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0x00000000:
							if (unk_0xAFED075B5A62767B(unk_0xD803B885F5E47A62(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
								Global_24B2D0.f_999 = 0x00000005;
							}
							break;
						
						case 0x00000001:
							func_138(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							if (unk_0xD4B5AAF3676F3DE0(unk_0xD803B885F5E47A62(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
								Global_24B2D0.f_999 = 0x00000005;
							}
							break;
						
						case 0x00000002:
							if (unk_0xD4B5AAF3676F3DE0(unk_0xD803B885F5E47A62(), uParam0->f_8, uParam0->f_B, uParam0->f_E, *uParam1, iVar0))
							{
								Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
								Global_24B2D0.f_999 = 0x00000005;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_A)
					{
						iVar0 += 32;
					}
					Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
					Global_24B2D0.f_999 = 0x00000005;
					switch (uParam0->f_7)
					{
						case 0x00000000:
							unk_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 0x00001388);
							break;
						
						case 0x00000001:
							func_138(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							unk_0x1814612955640FD9(vVar10, vVar11, uVar12, iVar0, 2f, 0x00001388);
							break;
						
						case 0x00000002:
							unk_0x1814612955640FD9(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 0x00001388);
							break;
						}
					}
				}
		}
		if (Global_24B2D0.f_999 == 0x00000005)
		{
			if (func_64(uParam2, uParam0, uParam1, 0x00000000))
			{
				if (Global_24B2D0.f_9B3.f_5)
				{
					Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
					Global_24B2D0.f_999 = 0x00000006;
				}
				else
				{
					Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0x00000000 /*3*/]) };
							uParam2->f_10[0x00000000] = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						}
					}
					Global_24B2D0.f_999 = 0x00000009;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99F) > 0x00004E20)
			{
				unk_0xDEED9606C7D093F7();
				unk_0x0FB2CEE58DA4A6EE();
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				Global_24B2D0.f_999 = 0x00000008;
			}
		}
		if (Global_24B2D0.f_999 == 0x00000006)
		{
			iVar0 = 0x00000000;
			Global_24B2D0.f_9B3.f_1 = 0x00000000;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0x00000000)
			{
				if (!func_63(uParam0->f_4))
				{
					if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_62(uParam0->f_8, uParam0->f_B, uParam0->f_E))
			{
				if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_A)
			{
				iVar0 += 32;
			}
			if (uParam0->f_F)
			{
				iVar0 += 16;
			}
			Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
			Global_24B2D0.f_999 = 0x00000007;
			switch (uParam0->f_7)
			{
				case 0x00000000:
					unk_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 0x00001388);
					break;
				
				case 0x00000001:
					func_138(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
					unk_0x1814612955640FD9(vVar10, vVar11, uVar12, iVar0, 2f, 0x00001388);
					break;
				
				case 0x00000002:
					unk_0x1814612955640FD9(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 0x00001388);
					break;
				}
		}
		if (Global_24B2D0.f_999 == 0x00000007)
		{
			if (func_64(uParam2, uParam0, uParam1, 0x00000001))
			{
				if (SYSTEM::VMAG(*(uParam2[0x00000000 /*3*/])) == 0f)
				{
					iVar9 = 0x00000000;
					while (iVar9 < 0x00000003)
					{
						if (SYSTEM::VMAG(*(uParam2[0x00000000 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_24B2D0.f_A39[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0x00000000:
										if (func_144(Global_24B2D0.f_A39[iVar9 /*3*/], *uParam0, uParam0->f_4, 0x00000000, 0x00000000))
										{
											*(uParam2[0x00000000 /*3*/]) = { Global_24B2D0.f_A39[iVar9 /*3*/] };
										}
										break;
									
									case 0x00000001:
										if (func_60(Global_24B2D0.f_A39[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, 0x00000000, 0x00000000))
										{
											*(uParam2[0x00000000 /*3*/]) = { Global_24B2D0.f_A39[iVar9 /*3*/] };
										}
										break;
									
									case 0x00000002:
										if (unk_0x0399732A9EBC368E(Global_24B2D0.f_A39[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, uParam0->f_E, 0x00000000, 0x00000001))
										{
											*(uParam2[0x00000000 /*3*/]) = { Global_24B2D0.f_A39[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0x00000000 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0x00000000:
								vVar1 = { *uParam0 };
								break;
							
							case 0x00000001:
							case 0x00000002:
								vVar1 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
								break;
						}
						func_12(&vVar1, 0x00000000, 0x00000001, 0x00000001, 0x00000000, uParam0, uParam1);
						*(uParam2[0x00000000 /*3*/]) = { vVar1 };
					}
				}
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0x00000000;
					while (iVar9 < 0x00000005)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_10[iVar9] = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_24B2D0.f_999 = 0x00000009;
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99F) > 0x00004E20)
			{
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				Global_24B2D0.f_999 = 0x00000008;
			}
		}
		if (Global_24B2D0.f_999 == 0x00000008)
		{
			if (uParam0->f_5)
			{
				if (func_11(Global_24B2D0.f_1E6))
				{
				}
			}
			else if (Global_24B2D0.f_9B3.f_2)
			{
				func_10(uParam2, &(Global_24B2D0.f_9B3.f_6));
			}
			else
			{
				if (uParam0->f_F)
				{
					bVar15 = 0x00000000;
				}
				else
				{
					bVar15 = 0x00000001;
				}
				*(uParam2[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
				func_12(uParam2[0x00000000 /*3*/], 0x00000000, bVar15, 0x00000000, 0x00000000, uParam0, uParam1);
			}
			Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
			Global_24B2D0.f_999 = 0x00000009;
		}
		if (Global_24B2D0.f_999 == 0x00000009)
		{
			Global_24B2D0.f_998 = 0x00000000;
			unk_0xDEED9606C7D093F7();
			unk_0x0FB2CEE58DA4A6EE();
			func_179();
			return 0x00000001;
		}
		Global_24B2D0.f_99E = unk_0x2B6E0A53779D29EA();
	}
	return 0x00000000;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_16[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 0x00000003 || iParam0 == 0x0000001A)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_12(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 0x40800000;
	Var2.f_7 = 0x461C3C00;
	Var2.f_8 = 0x00000001;
	Var2.f_A = 0x00000001;
	Var2.f_D = 0x00000001;
	Var2.f_F = 0x00000001;
	Var2.f_10 = 0x00000001;
	Var2.f_1F = 0x00000001;
	Var2.f_22 = joaat("tailgater");
	Var2.f_26 = 0x00000002;
	Var2.f_2D = 0x00000002;
	Var2.f_31 = 0x42F00000;
	Var2.f_35 = 0x000003E7;
	Var2.f_36 = 0x461C3F9A;
	Var2.f_37 = 0x00000001;
	Var2.f_38 = 0x00000001;
	Var2.f_39 = 0x00000001;
	if (bParam1)
	{
		iVar6 = 0x00000000;
	}
	else
	{
		iVar6 = 0x00000010;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_16)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0x00000000:
						vVar7 = { *uParam5 };
						if (func_63(uParam5->f_4) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 0x00000001:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_B, 0f) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 0x00000002:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_62(uParam5->f_8, uParam5->f_B, uParam5->f_E) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_28(*uParam0, &vVar0, iVar6, iParam3, 0x00000001))
	{
	}
	else
	{
		bVar5 = 0x00000001;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 0x00000001;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_A = 0x00000000;
		}
		else
		{
			Var2.f_A = 0x00000001;
		}
		Var2.f_D = uParam5->f_F;
		Var2.f_F = iParam3;
		if (uParam6->f_20 > 0f)
		{
			Var2.f_6 = uParam6->f_20;
		}
		if (bParam4)
		{
			Var2.f_12 = 0x00000001;
			Var2.f_1A = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0x00000000:
					Var2.f_13 = { *uParam5 };
					Var2.f_19 = uParam5->f_4;
					break;
				
				case 0x00000001:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = 0f;
					break;
				
				case 0x00000002:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = uParam5->f_E;
					break;
				}
		}
		iVar4 = 0x00000000;
		while (iVar4 < 0x00000002)
		{
			Var2.f_26[iVar4 /*3*/] = { uParam6->f_D[iVar4 /*3*/] };
			Var2.f_2D[iVar4] = uParam6->f_14[iVar4];
			iVar4++;
		}
		Var2.f_33 = uParam6->f_1E;
		Var2.f_37 = uParam5->f_10;
		if (func_24(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			Var2.f_9 = 0x00000001;
		}
		func_145(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0x00000000:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 0x00000001:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				break;
			
			case 0x00000002:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				fVar10 = uParam5->f_E;
				break;
		}
		if (!func_23(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_28(*uParam0, &vVar0, iVar6, iParam3, 0x00000000))
			{
				if (!func_23(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 0x00000002 || uParam5->f_7 == 0x00000001)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (unk_0xE82754C349C7B581(vVar0, &uVar3, 0x00000000, 0x00000000))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else if (func_13(uParam0, 0x00000001, 0x00000001, 0x00000001, 0x00000001))
			{
				func_12(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 0x00000002 || uParam5->f_7 == 0x00000001)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (unk_0xE82754C349C7B581(vVar0, &uVar3, 0x00000000, 0x00000000))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_24B2D0.f_295 = 0x00000001;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		if (Global_24C600[iVar0 /*17*/].f_9 == 0x00000001)
		{
			if (!bParam2 || (bParam2 && Global_24C600[iVar0 /*17*/].f_10))
			{
				if (func_22(*uParam0, &(Global_24C600[iVar0 /*17*/]), 0x3C23D70A, bParam4, 0x00000000))
				{
					if (bParam1)
					{
						if (Global_24C600[iVar0 /*17*/].f_C)
						{
							*uParam0 = { Global_24C600[iVar0 /*17*/].f_D };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_14(&vVar1, &(Global_24C600[iVar0 /*17*/]), 0x3DCCCCCD, 0x00000000, bParam3);
							if (func_13(&vVar1, 0x00000000, 0x00000000, 0x00000000, 0x00000001))
							{
								vVar1 = { *uParam0 };
								func_14(&vVar1, &(Global_24C600[iVar0 /*17*/]), 0x3DCCCCCD, 0x00000001, 0x00000000);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_14(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_A)
		{
			case 0x00000000:
				*uParam0 = { func_21(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_24B2D0.f_AA6) * uParam1->f_8)), 0x00000000, fParam2, bParam3) };
				break;
			
			case 0x00000001:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, 0f, 0x00000001, fParam2, bParam3) };
				break;
			
			case 0x00000002:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000002, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_A)
		{
			case 0x00000000:
				func_19(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_24B2D0.f_AA6) * uParam1->f_8)), fParam2, bParam3, 0x00000000);
				break;
			
			case 0x00000001:
				func_18(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 0x00000002:
				func_15(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_15(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_17(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_16(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_16(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_17(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_17(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(unk_0x07AB02F3C4AE2B04(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_16(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_16(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (SYSTEM::VDIST(vVar4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_16(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_17(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_18(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

void func_19(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_20(&vVar0, 0f, 0f, unk_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_20(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

void func_20(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_21(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0x00000000:
			func_19(&vParam0, vParam1, fParam3, fParam5, bParam6, 0x00000000);
			break;
		
		case 0x00000001:
			func_18(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 0x00000002:
			func_15(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000028)
	{
		unk_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 0x00000001, 0f, 0f);
		switch (iParam4)
		{
			case 0x00000000:
				if (!func_144(vVar1, vParam1, fParam3, 0x00000000, 0x00000000))
				{
					return vVar1;
				}
				break;
			
			case 0x00000001:
				if (!func_60(vVar1, vParam1, vParam2, 0x00000000, 0x00000000))
				{
					return vVar1;
				}
				break;
			
			case 0x00000002:
				if (!unk_0x0399732A9EBC368E(vVar1, vParam1, vParam2, fParam3, 0x00000000, 0x00000001))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_22(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_A)
	{
		case 0x00000000:
			return func_144(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_24B2D0.f_AA6) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 0x00000001:
			return func_60(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 0x00000002:
			if (bParam3 && bParam4)
			{
				return unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000000, 0x00000000);
			}
			else if (bParam3)
			{
				if (unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000000, 0x00000000) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000000;
				}
			}
			else if (bParam4)
			{
				if (unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000000, 0x00000000) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000000, 0x00000001);
			}
			break;
	}
	return 0x00000000;
}

int func_23(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	switch (iParam1)
	{
		case 0x00000000:
			if (SYSTEM::VDIST(vParam0, vParam2) <= fParam4)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			return func_60(vParam0, vParam2, vParam3, 0x00000000, 0x00000000);
			break;
		
		case 0x00000002:
			return unk_0x0399732A9EBC368E(vParam0, vParam2, vParam3, fParam4, 0x00000000, 0x00000001);
			break;
	}
	return 0x00000000;
}

int func_24(int iParam0, bool bParam1)
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
	if (iParam0 != func_27())
	{
		if (func_26(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_27())
			{
				return func_25(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000C;
			}
		}
	}
	return 0x00000000;
}

int func_25(int iParam0)
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

int func_26(int iParam0, bool bParam1, bool bParam2)
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

int func_27()
{
	return 0xFFFFFFFF;
}

int func_28(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_59(vParam0, uParam1))
	{
		if (func_29(vParam0, uParam1, iParam3, bParam4))
		{
			return 0x00000001;
		}
	}
	if (unk_0xB885EF0389689E54(vParam0, 0x00000000, uParam1, iParam2))
	{
		if (func_29(vParam0, uParam1, iParam3, bParam4))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_29(vector3 vParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 0x00000002;
		uVar2 = 0x00000002;
		if ((iParam2 == 0x00000001 && !func_45(Global_24B2D0.f_1FD, uParam1, &uVar1, &uVar2, bParam3, 0x00000001)) || iParam2 == 0x00000000)
		{
			if (!func_33(*uParam1, 0x3F000000))
			{
				if (!func_30(uParam1, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_30(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_32(vVar1);
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CBC3[iVar2])
	{
		if (func_31(vVar1, &(Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/], Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/].f_3, Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/].f_6, 0x3DCCCCCD, 0x00000000);
				*uParam0 = { vVar1 };
			}
			return 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CBC3[0x00000008])
	{
		if (func_31(vVar1, &(Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/], Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/].f_3, Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/].f_6, 0x3DCCCCCD, 0x00000000);
				*uParam0 = { vVar1 };
			}
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_31(vector3 vParam0, var uParam1)
{
	return unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000000, 0x00000001);
}

int func_32(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_24CBCD[0x00000000])
	{
		return 0x00000000;
	}
	if (Param0.f_1 > Global_24CBCD[0x00000001])
	{
		if (Param0 < Global_24CBD1[0x00000000])
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000002;
		}
	}
	if (Param0.f_1 > Global_24CBCD[0x00000002])
	{
		if (Param0 < Global_24CBD1[0x00000001])
		{
			return 0x00000003;
		}
		else if (Param0 < Global_24CBD1[0x00000002])
		{
			return 0x00000004;
		}
		else if (Param0 < Global_24CBD1[0x00000003])
		{
			return 0x00000005;
		}
		else
		{
			return 0x00000006;
		}
	}
	return 0x00000007;
}

int func_33(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_42(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
	{
		if (Global_440000.f_16738 > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_440000.f_16738)
			{
				if (Global_440000.f_16739[iVar0 /*107*/].f_7 != 0x00000000)
				{
					if (func_34(vParam0, Global_440000.f_16739[iVar0 /*107*/], Global_440000.f_16739[iVar0 /*107*/].f_6, Global_440000.f_16739[iVar0 /*107*/].f_7, fParam1))
					{
						return 0x00000001;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_1319F > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_440000.f_1319F)
			{
				if (Global_440000.f_131A2[iVar0 /*266*/].f_F != 0x00000000)
				{
					if (func_34(vParam0, Global_440000.f_131A2[iVar0 /*266*/], Global_440000.f_131A2[iVar0 /*266*/].f_3, Global_440000.f_131A2[iVar0 /*266*/].f_F, 0.5f))
					{
						return 0x00000001;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_1E49D > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_440000.f_1E49D)
			{
				if (Global_440000.f_1E4A1[iVar0 /*325*/].f_C != 0x00000000)
				{
					if (func_34(vParam0, Global_440000.f_1E4A1[iVar0 /*325*/], Global_440000.f_1E4A1[iVar0 /*325*/].f_3, Global_440000.f_1E4A1[iVar0 /*325*/].f_C, 0.5f))
					{
						return 0x00000001;
					}
				}
				iVar0++;
			}
		}
		if (Global_EC947.f_10C > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_EC947.f_10C)
			{
				if (unk_0xC844350D5D58C99A(Global_EC947.f_E9[iVar0]) && !unk_0x437347B10A200C4B(Global_EC947.f_E9[iVar0], 0x00000000))
				{
					if (func_34(vParam0, unk_0x68F4C0EC296D3901(Global_EC947.f_E9[iVar0], 0x00000001), unk_0xD9522BA9E27E1349(Global_EC947.f_E9[iVar0]), unk_0x134B62B726CEC8E6(Global_EC947.f_E9[iVar0]), 0.5f))
					{
						return 0x00000001;
					}
				}
				iVar0++;
			}
		}
		if (Global_EC947.f_10A > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_EC947.f_10A)
			{
				if (unk_0xC844350D5D58C99A(Global_EC947.f_77[iVar0]) && !unk_0x437347B10A200C4B(Global_EC947.f_77[iVar0], 0x00000000))
				{
					if (func_34(vParam0, unk_0x68F4C0EC296D3901(Global_EC947.f_77[iVar0], 0x00000001), unk_0xD9522BA9E27E1349(Global_EC947.f_77[iVar0]), unk_0x134B62B726CEC8E6(Global_EC947.f_77[iVar0]), 0.5f))
					{
						return 0x00000001;
					}
				}
				iVar0++;
			}
		}
	}
	return 0x00000000;
}

int func_34(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_41(iParam3, 0x3C23D70A))
	{
		func_35(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0x0399732A9EBC368E(vParam0, vVar0, vVar1, fVar2, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_35(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_36(iParam2, &vVar1, &vVar2, 0x40C00000, 0x40600000, 0x40400000);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * unk_0x755FF954DAE327E1((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * unk_0x755FF954DAE327E1((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0x755FF954DAE327E1((vVar2.x - vVar1.x));
}

void func_36(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x468C1AC3ABF95C57(iParam0))
	{
		unk_0xA6B02C1DB14DDA13(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_39(iParam0);
		if (iVar0 != 0x00000000)
		{
			func_37(iVar0, uParam1, uParam2, 0x40C00000, 0x40600000, 0x40400000);
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

void func_37(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_38(iParam0, &Global_1413E4);
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

void func_38(int iParam0, var uParam1)
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

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = (0x000003E8 + iParam0);
	return iVar0;
}

float func_41(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0x00000000)
	{
		return 5f;
	}
	func_36(iParam0, &vVar0, &vVar1, 0x40C00000, 0x40600000, 0x40400000);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_43(iParam0))
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

bool func_43(int iParam0)
{
	return func_44(iParam0);
}

bool func_44(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

int func_45(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_52(vParam0))
	{
		if (func_13(uParam1, bParam4, 0x00000000, 0x00000001, 0x00000001))
		{
			if (bParam4)
			{
			}
			return 0x00000001;
		}
	}
	if (func_47(uParam1, bParam4, 0x00000001))
	{
		if (bParam4)
		{
		}
		return 0x00000001;
	}
	if (bParam5)
	{
		if (func_46(*uParam1, 0x3F000000))
		{
			return 0x00000001;
		}
	}
	bVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_19(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 0x3DCCCCCD, 0x00000000, 0x00000000);
			}
			bVar1 = 0x00000001;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_46(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001E)
	{
		if (SYSTEM::VDIST(vParam0, Global_24B2D0.f_AA8[iVar0 /*3*/]) < fParam1)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_47(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_49(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_14(&vVar2, &(Global_24B2D0.f_16D[iVar0 /*12*/]), 0x3DCCCCCD, 0x00000000, bParam2);
			if (func_49(vVar2, &uVar1) || func_48(vVar2))
			{
				vVar2 = { *uParam0 };
				func_14(&vVar2, &(Global_24B2D0.f_16D[iVar0 /*12*/]), 0x3DCCCCCD, 0x00000001, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_48(vector3 vParam0)
{
	float fVar0;
	
	if (Global_24B2D0.f_24E > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_24B2D0.f_24B);
		if (fVar0 < Global_24B2D0.f_24E)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_49(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return 0x00000000;
	}
	iVar1 = func_50();
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (Global_24B2D0.f_16D[iVar0 /*12*/].f_9 == 0x00000001)
		{
			if (func_22(vParam0, &(Global_24B2D0.f_16D[iVar0 /*12*/]), 0x3C23D70A, 0x00000000, 0x00000000))
			{
				*uParam1 = iVar0;
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (Global_24B2D0.f_16D[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_51()
{
	return Global_199459.f_1DA;
}

int func_52(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_24B2D0.f_200 && !Global_24B2D0.f_201)
	{
		if (!Global_24B2D0.f_2D.f_13A)
		{
			if (!func_56(unk_0xD803B885F5E47A62(), 0x00000001))
			{
				return 0x00000001;
			}
			if (!func_55(vParam0, 0x3C23D70A))
			{
				if (!func_13(&vParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000001))
				{
					return 0x00000001;
				}
				else if (func_13(&vParam0, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
				{
					return 0x00000001;
				}
			}
			else
			{
				iVar0 = func_54(vParam0, 0x3C23D70A);
				if (iVar0 > 0xFFFFFFFF)
				{
					vVar1 = { func_53(&(Global_24B2D0.f_2D[iVar0 /*12*/])) };
					if (!func_13(&vVar1, 0x00000000, 0x00000000, 0x00000000, 0x00000001))
					{
						if (!func_13(&vParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000001))
						{
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

Vector3 func_53(var uParam0)
{
	switch (uParam0->f_A)
	{
		case 0x00000000:
			return *uParam0;
			break;
		
		case 0x00000001:
		case 0x00000002:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_54(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (Global_24B2D0.f_2D[iVar0 /*12*/].f_9)
		{
			if (func_22(vParam0, &(Global_24B2D0.f_2D[iVar0 /*12*/]), fParam1, 0x00000000, 0x00000000))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_55(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (Global_24B2D0.f_2D[iVar0 /*12*/].f_9)
		{
			if (func_22(vParam0, &(Global_24B2D0.f_2D[iVar0 /*12*/]), fParam1, 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_56(int iParam0, bool bParam1)
{
	if (func_58() != 0x00000000)
	{
		return func_57(iParam0) != 0x00000000;
	}
	return func_42(iParam0, bParam1, 0x00000000);
}

int func_57(int iParam0)
{
	if (func_26(iParam0, 0x00000000, 0x00000001))
	{
		return Global_25033E[iParam0 /*421*/].f_1;
	}
	return 0x00000000;
}

int func_58()
{
	return Global_7830;
}

int func_59(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 0xFFFFFFFF;
	fVar2 = 999999.9f;
	if (Global_24B2D0.f_8CE > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_24B2D0.f_8CE)
		{
			fVar3 = SYSTEM::VDIST(Global_24B2D0.f_8CF[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == 0xFFFFFFFF)
		{
			*uParam1 = { Global_24B2D0.f_8CF[iVar1 /*4*/] };
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_60(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	func_61(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0x00000000;
	}
	if (bParam3 && bParam4)
	{
		return 0x00000001;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 0x00000001;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 0x00000001;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_61(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_62(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar1 - vVar0) > 100f)
	{
		return 0x00000001;
	}
	if (fParam2 > 50f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_63(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_64(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_24B2D0.f_9B3.f_1 == 0x00000000 && Global_24B2D0.f_9B3 == 0x00000000)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xB1275034A6871D62(&(Global_24B2D0.f_9B3.f_1)))
			{
				case 0x00000000:
					func_136(uParam1, uParam2);
					if (!Global_24B2D0.f_9B3.f_2)
					{
						if (uParam2->f_7 && Global_24B2D0.f_228.f_7 == 0x00000000)
						{
							*(uParam0[0x00000000 /*3*/]) = { *uParam1 };
							uParam0->f_10[0x00000000] = uParam1->f_3;
							return 0x00000001;
						}
						else
						{
							if (uParam1->f_15)
							{
								*(uParam0[0x00000000 /*3*/]) = { uParam1->f_12 };
							}
							else
							{
								*(uParam0[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
							}
							if (uParam1->f_5 && func_11(Global_24B2D0.f_1E6))
							{
								if (!Global_24B2D0.f_9B3.f_5)
								{
									Global_24B2D0.f_9B3.f_5 = 0x00000001;
								}
								else
								{
									func_12(uParam0[0x00000000 /*3*/], 0x00000001, 0x00000000, 0x00000001, 0x00000001, uParam1, uParam2);
								}
							}
							else
							{
								func_12(uParam0[0x00000000 /*3*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000, uParam1, uParam2);
							}
							uParam0->f_10[0x00000000] = unk_0x79833B02DBD2A244(0f, 360f);
							return 0x00000001;
						}
					}
					break;
				
				case 0x00000001:
					func_136(uParam1, uParam2);
					break;
				
				case 0x00000002:
					return 0x00000000;
					break;
				
				case 0x00000003:
					return 0x00000000;
					break;
			}
		}
		else if (unk_0xC79C8A78EC708587())
		{
			if (!unk_0xFA2A5CC35287E5B8())
			{
				if (unk_0x4FC9A1459CD5C324())
				{
					func_136(uParam1, uParam2);
					Global_24B2D0.f_9B3.f_1 = unk_0xEAD4FBE79458D592();
				}
				else
				{
					return 0x00000000;
				}
			}
			else
			{
				unk_0x0FB2CEE58DA4A6EE();
				func_136(uParam1, uParam2);
				if (!Global_24B2D0.f_9B3.f_2)
				{
					Global_24B2D0.f_9B3.f_5 = 0x00000001;
					return 0x00000001;
				}
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	if (uParam1->f_5)
	{
		func_133(Global_24B2D0.f_228, &(Global_24B2D0.f_9B3.f_39), &(Global_24B2D0.f_9B3.f_5A));
	}
	if (uParam2->f_7 && !Global_24B2D0.f_9B3.f_4)
	{
		Global_24B2D0.f_9B3.f_4 = 0x00000001;
		func_72(*uParam1, uParam1->f_3, uParam1, uParam2, 0x00000001, 0xFFFFFFFF);
	}
	iVar4 = 0x00000000;
	if (uParam1->f_5)
	{
		iVar5 = 0x00000040;
	}
	else
	{
		iVar5 = 0x00000020;
	}
	if (Global_24B2D0.f_9B3.f_1 > 0x00000000 || Global_24B2D0.f_9B3 > 0x00000000)
	{
		if (uParam1->f_5 || unk_0xC79C8A78EC708587())
		{
			iVar2 = 0x00000000;
			while (iVar2 < Global_24B2D0.f_9B3.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_24B2D0.f_9B3.f_3)
					{
						iVar2 = Global_24B2D0.f_9B3.f_3 + 1;
					}
					if (iVar2 > (Global_24B2D0.f_9B3.f_1 - 0x00000001))
					{
						iVar2 = (Global_24B2D0.f_9B3.f_1 - 0x00000001);
					}
					if (iVar2 < 0x00000000)
					{
						iVar2 = 0x00000000;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xE0463990929F9949(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0xB2C5D6F8163D4A45(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x00C66A3E05649B75(iVar2);
					}
					else
					{
						unk_0xD38A4489EFBF773A(iVar2, &iVar3);
					}
					func_72(vVar0, fVar1, uParam1, uParam2, 0x00000000, iVar3);
					iVar4++;
					Global_24B2D0.f_9B3.f_3 = iVar2;
				}
				else
				{
					return 0x00000000;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_24B2D0.f_9B3.f_1;
		}
		if (Global_24B2D0.f_9B3.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_24B2D0.f_B40)
			{
				func_66(&(Global_24B2D0.f_9B3.f_6[0x00000000 /*10*/]), &(Global_24B2D0.f_9B3.f_6[0x00000001 /*10*/]), &(Global_24B2D0.f_9B3.f_6[0x00000002 /*10*/]));
			}
			if (uParam1->f_5 && func_11(Global_24B2D0.f_1E6))
			{
				if (Global_24B2D0.f_9B3.f_2)
				{
					func_10(uParam0, &(Global_24B2D0.f_9B3.f_6));
					func_65(*(uParam0[0x00000000 /*3*/]));
					return 0x00000001;
				}
				else
				{
					*(uParam0[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
					func_12(uParam0[0x00000000 /*3*/], 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam1, uParam2);
					uParam0->f_10[0x00000000] = unk_0x79833B02DBD2A244(0f, 360f);
					func_65(*(uParam0[0x00000000 /*3*/]));
					return 0x00000001;
				}
			}
			else if (Global_24B2D0.f_9B3.f_2)
			{
				func_10(uParam0, &(Global_24B2D0.f_9B3.f_6));
				func_65(*(uParam0[0x00000000 /*3*/]));
				return 0x00000001;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x09AC81E49EA267F7(0x00000000, Global_24B2D0.f_9B3.f_1);
				unk_0xE0463990929F9949(iVar2, uParam0[0x00000000 /*3*/], &(uParam0->f_10[0x00000000]));
				if (!func_30(uParam0[0x00000000 /*3*/], 0x00000000))
				{
					uParam0->f_10[0x00000000] = (uParam0->f_10[0x00000000] * 57.29578f);
					func_65(*(uParam0[0x00000000 /*3*/]));
					return 0x00000001;
				}
				else
				{
					*(uParam0[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
					func_12(uParam0[0x00000000 /*3*/], 0x00000001, 0x00000000, 0x00000001, 0x00000001, uParam1, uParam2);
					uParam0->f_10[0x00000000] = unk_0x79833B02DBD2A244(0f, 360f);
					func_65(*(uParam0[0x00000000 /*3*/]));
					return 0x00000001;
				}
			}
			else
			{
				*(uParam0[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
				func_12(uParam0[0x00000000 /*3*/], 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam1, uParam2);
				uParam0->f_10[0x00000000] = unk_0x79833B02DBD2A244(0f, 360f);
				func_65(*(uParam0[0x00000000 /*3*/]));
				return 0x00000001;
			}
		}
	}
	else
	{
		*(uParam0[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
		if (uParam1->f_5 && func_11(Global_24B2D0.f_1E6))
		{
			if (!Global_24B2D0.f_9B3.f_5)
			{
				Global_24B2D0.f_9B3.f_5 = 0x00000001;
			}
			else
			{
				func_12(uParam0[0x00000000 /*3*/], 0x00000001, 0x00000000, 0x00000001, 0x00000001, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_F)
			{
				bVar6 = 0x00000000;
			}
			else
			{
				bVar6 = 0x00000001;
			}
			func_12(uParam0[0x00000000 /*3*/], 0x00000000, bVar6, 0x00000000, 0x00000000, uParam1, uParam2);
		}
		uParam0->f_10[0x00000000] = unk_0x79833B02DBD2A244(0f, 360f);
		func_65(*(uParam0[0x00000000 /*3*/]));
		return 0x00000001;
	}
	return 0x00000000;
}

void func_65(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (iVar0 > 0x00000000)
		{
			Global_24B2D0.f_A39[(0x00000003 - iVar0) /*3*/] = { Global_24B2D0.f_A39[(0x00000003 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_24B2D0.f_A39[0x00000000 /*3*/] = { vParam0 };
}

void func_66(var uParam0, var uParam1, var uParam2)
{
	if (func_11(Global_24B2D0.f_1E6) && func_71() < 0x00001000)
	{
		func_70(uParam0, 0f);
		func_70(uParam1, uParam0->f_2);
		func_70(uParam2, uParam1->f_2);
	}
	else
	{
		func_69(uParam0);
		func_68(uParam2, uParam0->f_4);
		func_67(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_67(var uParam0, vector3 vParam1, vector3 vParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 0x461C3F9A;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > 0x00000000)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE46[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_24BE46[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_24BE46[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_24BE46[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_68(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 0x461C3F9A;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > 0x00000000)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE46[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_24BE46[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_24BE46[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_69(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 0x461C3F9A;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > 0x00000000)
		{
			if (Global_24BE46[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_24BE46[iVar0 /*10*/].f_1;
				Var2 = { Global_24BE46[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_70(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 0x461C3F9A;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > 0x00000000)
		{
			if (Global_24BE46[iVar0 /*10*/].f_2 < fVar1 && Global_24BE46[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_24BE46[iVar0 /*10*/].f_2;
				Var2 = { Global_24BE46[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_24BE46[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_72(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0x00000000;
	iVar8 = 0x00000000;
	bVar9 = 0x00000000;
	if (uParam2->f_5)
	{
		if (Global_24B2D0.f_1E6 == 0x00000001)
		{
			if (unk_0x755FF954DAE327E1((Global_24B2D0.f_1FD.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_129(unk_0xD803B885F5E47A62()))
		{
			if (iParam5 == 0xFFFFFFFF)
			{
				bVar9 = 0x00000001;
			}
			else if (!iParam5 & 0x00000001 == 0x00000000)
			{
				bVar9 = 0x00000001;
			}
		}
		else if (iParam5 == 0xFFFFFFFF)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 0x00000001 == 0x00000000)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_128(vParam0, 0x40A00000, 0x42F00000, 0x00000000))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0xE5DF6192D54A65A1(unk_0x16F2683693E537C9(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0xE5DF6192D54A65A1(unk_0x16F2683693E537C9(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_127(vParam0, uParam3->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = 0x00000001;
	iVar11 = 0x00000000;
	while (iVar11 < 0x00000002)
	{
		if (SYSTEM::VMAG(uParam3->f_D[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam3->f_D[iVar11 /*3*/]) > uParam3->f_14[iVar11])
			{
				bVar13 = 0x00000000;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_17) > 0f && SYSTEM::VMAG(uParam3->f_1A) > 0f) && uParam3->f_1D > 0f)
		{
			if (unk_0x0399732A9EBC368E(vParam0, uParam3->f_17, uParam3->f_1A, uParam3->f_1D, 0x00000000, 0x00000001))
			{
				bVar13 = 0x00000000;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_121(vParam0, fParam1, uParam2->f_F, func_126(0x00000001), uParam2->f_10, 0x00000000, 0x42F00000, 0x41A00000, 0x41A00000, 0x40A00000, 0x41200000, 0x00000000, 0x00000000, 0x00000000))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_24B2D0.f_3;
		}
	}
	else if (!func_118(vParam0, 25f, unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (uParam2->f_F)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_115(vParam0, fVar1, 0x00000001, 0x00000001, 120f, 0x00000000, 0xFFFFFFFF, 0f, 0x00000001))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_115(vParam0, fVar1, 0x00000001, 0x00000001, 60f, 0x00000000, 0xFFFFFFFF, 0f, 0x00000001))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2D0.f_2B5)
		{
			vVar12 = { Global_24B2D0.f_1FD };
			if (Global_24B2D0.f_1E6 == 0x0000001A)
			{
				vVar12 = { Global_24B2D0.f_228.f_12 };
			}
			if (!func_46(vParam0, 0.5f))
			{
				if (func_52(vVar12))
				{
					if (!func_13(&vParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000001) && !func_114(&vParam0, 0x00000000))
					{
						iVar8 += 512;
					}
				}
				else if (!func_114(&vParam0, 0x00000000))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_113(vParam0, 2.5f, 0x00000003))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_112(unk_0xD803B885F5E47A62()) && func_110(unk_0xD803B885F5E47A62())))
		{
			if (!func_109(&vParam0, &(Global_24B2D0.f_9B3.f_5A), 0x00000000, 0x3F800000))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_110(unk_0xD803B885F5E47A62()))
		{
			if (!func_108(vParam0, &(Global_24B2D0.f_9B3.f_39), &(Global_24B2D0.f_9B3.f_5A), 0x40000000))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_107(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_11(Global_24B2D0.f_1E6))
			{
				if (func_55(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_106(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_24B2D0.f_2D.f_37)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 0x00000001 == 0x00000000)
		{
			if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 0x00000002 == 0x00000000)
	{
		if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2D0.f_2B5)
		{
			if (!func_47(&vParam0, 0x00000000, 0x00000000))
			{
				iVar8 = (iVar8 + 0x00008000);
			}
		}
		else
		{
			iVar8 = (iVar8 + 0x00008000);
		}
	}
	else
	{
		iVar8 = (iVar8 + 0x00008000);
	}
	if (!func_30(&vParam0, 0x00000000))
	{
		iVar8 = (iVar8 + 0x00010000);
	}
	else
	{
		iVar14 = func_54(vParam0, 0x3C23D70A);
		if (iVar14 > 0xFFFFFFFF)
		{
			func_105(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_100(&(Global_24B2D0.f_2D[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = 0xFFFFFFFF;
			}
		}
		else
		{
			iVar8 = 0xFFFFFFFF;
		}
	}
	if (func_33(vParam0, 0x3F000000))
	{
		iVar8 = 0xFFFFFFFF;
	}
	if (uParam3->f_21)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = 0xFFFFFFFF;
		}
	}
	if (uParam3->f_22)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = 0xFFFFFFFF;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_99(vParam0, 0x00000001, 0x00000000, uParam2->f_F, 0x3F333333, 0x40C00000, 0x3F800000, 0x40E00000))
	{
		iVar8 = 0x00000000;
	}
	Var19.f_2 = 0x461C3F9A;
	bVar20 = 0x00000000;
	bVar21 = 0x00000000;
	if (Global_24B2D0.f_B40 && uParam2->f_5)
	{
		if (iVar8 > 0x00000000)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0x00000000;
				bVar4 = 0x00000000;
			}
			else
			{
				bVar4 = 0x00000001;
			}
			if (uParam2->f_15)
			{
				fVar0 = func_91(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_91(vParam0, Global_24B2D0.f_99A, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_11(Global_24B2D0.f_1E6) && iVar8 < 0x00001000)
			{
				Var19.f_2 = func_89(vParam0);
			}
			uVar7 = func_78(vParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_77(Var19);
			Global_24B2D0.f_9B3.f_2 = 0x00000001;
		}
	}
	else
	{
		iVar18 = 0x00000000;
		while (iVar18 < 0x00000005)
		{
			if (iVar8 >= Global_24B2D0.f_9B3.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0x00000000;
							bVar4 = 0x00000000;
						}
						else
						{
							bVar4 = 0x00000001;
						}
						if (uParam2->f_15)
						{
							fVar0 = func_91(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_91(vParam0, Global_24B2D0.f_99A, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = 0x00000001;
					}
					if ((func_11(Global_24B2D0.f_1E6) && iVar8 == Global_24B2D0.f_9B3.f_6[iVar18 /*10*/]) && iVar8 < 0x00001000)
					{
						if (!bVar21)
						{
							fVar2 = func_89(vParam0);
							bVar21 = 0x00000001;
						}
						if (fVar2 < Global_24B2D0.f_9B3.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_76(Var19, iVar18);
							Global_24B2D0.f_9B3.f_2 = 0x00000001;
							return;
						}
					}
					else if (iVar8 > Global_24B2D0.f_9B3.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2D0.f_9B3.f_6[iVar18 /*10*/] && fVar0 > Global_24B2D0.f_9B3.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_76(Var19, iVar18);
						Global_24B2D0.f_9B3.f_2 = 0x00000001;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_F)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_74(vParam0, fVar1, 0x00000001, 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000001);
						fVar6 = func_78(vParam0, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = 0x00000001;
					}
					if (iVar8 > Global_24B2D0.f_9B3.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2D0.f_9B3.f_6[iVar18 /*10*/] && fVar3 > Global_24B2D0.f_9B3.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_76(Var19, iVar18);
						Global_24B2D0.f_9B3.f_2 = 0x00000001;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_73(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_74(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = 0x00000000;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_26(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = 0x00000001;
					}
				}
			}
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_141(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if (func_75(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0x00000000 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar1), 0x00000000));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = 0x00000001;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam5 || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
						{
							if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar1), 0x00000000));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_75(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_76(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 0x461C3F9A;
	Var0 = { Global_24B2D0.f_9B3.f_6[iParam1 /*10*/] };
	Global_24B2D0.f_9B3.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 0x00000004)
	{
		func_76(Var0, iParam1 + 1);
	}
}

void func_77(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 0x461C3F9A;
	iVar2 = func_71();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] < iVar2)
		{
			Global_24BE46[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] == 0x00000000)
		{
			Global_24BE46[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > 0x00000000)
		{
			if (Global_24BE46[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_24BE46[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > 0xFFFFFFFF)
	{
		Global_24BE46[iVar4 /*10*/] = { Param0 };
	}
}

float func_78(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar7 = iVar0;
		if (func_26(iVar7, 0x00000001, 0x00000001) || (iParam5 == 0x00000001 && func_26(iVar7, 0x00000000, 0x00000000)))
		{
			if (!iVar7 == unk_0xD803B885F5E47A62() || iParam3 == 0x00000001)
			{
				bVar4 = 0x00000000;
				if (bParam1)
				{
					if (func_80(iVar7))
					{
						bVar4 = 0x00000001;
					}
				}
				if (bParam2)
				{
					if (unk_0x08067D4957B73C02(iVar7) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0x08067D4957B73C02(iVar7) == 0xFFFFFFFF || !func_56(unk_0xD803B885F5E47A62(), 0x00000001))
						{
							bVar4 = 0x00000001;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar7) || !bParam4)
					{
						if (func_75(iVar7))
						{
							vVar5 = { func_79(iVar7) };
							if (!iVar7 == unk_0xD803B885F5E47A62())
							{
								vVar6 = { unk_0x088E3BBDA11FE175(unk_0x9539D44F3E4492F6(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar5, 0x00000001);
							fVar2 = unk_0x0EB28750412C3A5A(vParam0, vVar6, 0x00000001);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_79(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_80(int iParam0)
{
	if (func_26(iParam0, 0x00000000, 0x00000001))
	{
		if (!func_87(iParam0))
		{
			if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (!unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
				{
					if (func_42(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
					{
						if (!func_86(unk_0x08067D4957B73C02(iParam0), unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()), 0x00000000))
						{
							return 0x00000001;
						}
					}
					else
					{
						return 0x00000001;
					}
				}
				else if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
				{
					if (!func_42(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
					{
						if (!func_81(iParam0))
						{
							return 0x00000001;
						}
					}
					else
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_81(int iParam0)
{
	if (func_85(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	Global_265942 = { func_84(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 0x00000001;
	}
	if (func_82(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_83(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_83(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_27();
}

struct<13> func_84(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_85(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_84(iParam0) };
		Global_26594F = { func_84(iParam1) };
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

int func_86(int iParam0, int iParam1, int iParam2)
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

int func_87(int iParam0)
{
	if (func_141(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_88())
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

bool func_88()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

float func_89(vector3 vParam0)
{
	var uVar0;
	
	return func_90(vParam0, &(Global_24B2D0.f_2D), &uVar0);
}

float func_90(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0xFFFFFFFF;
	fVar2 = 1E+07f;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_A)
			{
				case 0x00000000:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_24B2D0.f_AA6) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 0x00000001:
				case 0x00000002:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_91(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0x00000000)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(0x00000008));
	}
	if (bParam2)
	{
		fVar0 = func_73(SYSTEM::VDIST(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_78(vParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
	fVar0 = func_73(fVar4, 0f, func_98(), func_96(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_94(vParam0);
	fVar0 = func_73(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && !func_56(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		fVar5 = 1f;
	}
	fVar4 = func_93(vParam0, unk_0xD803B885F5E47A62(), 0x00000000);
	fVar0 = func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_92(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_73(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_73(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_73(SYSTEM::VDIST(Global_24B2D0.f_1FD, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_92(vector3 vParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0x8529439EA7EEBA65(vParam0, 0x00000001, &uVar3, &uVar2, 0x00000001, 3f, 0f);
	if (unk_0x5DD62183BBF151CD(iVar1))
	{
		unk_0x8502D8EBA9E78216(iVar1, &vVar0);
		*uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = unk_0x755FF954DAE327E1((vParam0.z - vVar0.z));
		return 0x00000001;
	}
	return 0x00000000;
}

float func_93(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_26(iParam1, 0x00000000, 0x00000001))
	{
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000020)
		{
			if (!iParam1 == iVar2 || iParam2 == 0x00000001)
			{
				iVar3 = iVar2;
				if (func_26(iVar3, 0x00000000, 0x00000001))
				{
					if (unk_0x08067D4957B73C02(iVar3) != unk_0x08067D4957B73C02(iParam1) || (unk_0x08067D4957B73C02(iVar3) == 0xFFFFFFFF && unk_0x08067D4957B73C02(iParam1) == 0xFFFFFFFF))
					{
						if (Global_24E4E9.f_105[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_24E4E9.f_83[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_94(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar4, 0x00000002);
	fVar0 = 1E+07f;
	iVar2 = 0x00000000;
	while (iVar2 < iVar5)
	{
		if (unk_0xC844350D5D58C99A(uVar4[iVar2]))
		{
			if (!unk_0x437347B10A200C4B(uVar4[iVar2], 0x00000000))
			{
				if (func_95(uVar4[iVar2]))
				{
					vVar3 = { unk_0x68F4C0EC296D3901(uVar4[iVar2], 0x00000001) };
					fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar3, 0x00000001);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_24B2D0.f_B6D)
	{
		if (Global_EC947.f_10B > 0x00000000)
		{
			iVar2 = 0x00000000;
			while (iVar2 < Global_EC947.f_10B)
			{
				if (unk_0xC844350D5D58C99A(Global_EC947.f_98[iVar2]))
				{
					if (!unk_0x437347B10A200C4B(Global_EC947.f_98[iVar2], 0x00000000))
					{
						if (func_95(Global_EC947.f_98[iVar2]))
						{
							vVar3 = { unk_0x68F4C0EC296D3901(Global_EC947.f_98[iVar2], 0x00000001) };
							fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar3, 0x00000001);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xD09DF7101876AFB8(iParam0);
	switch (unk_0x256517DE1B6755D4(iVar0, 0x6F0783F5))
	{
		case 0x00000003:
		case 0x00000005:
			return 0x00000001;
			break;
	}
	if (unk_0x1C43D178459D5730(Global_180837[unk_0xD803B885F5E47A62()]))
	{
		switch (unk_0x256517DE1B6755D4(iVar0, Global_180837[unk_0xD803B885F5E47A62()]))
		{
			case 0x00000003:
			case 0x00000005:
				return 0x00000001;
				break;
			}
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000000)
	{
		iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
		if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000004)
		{
			if (unk_0x1C43D178459D5730(Global_180715[iVar1]))
			{
				switch (unk_0x256517DE1B6755D4(iVar0, Global_180715[iVar1]))
				{
					case 0x00000003:
					case 0x00000005:
						return 0x00000001;
						break;
					}
				}
			}
	}
	return 0x00000000;
}

float func_96()
{
	if (func_97())
	{
		if ((unk_0xC41A9202669A24C4(Global_24B2D0.f_2D.f_43) || unk_0xAFB8495D36825275(Global_24B2D0.f_2D.f_43)) || Global_24B2D0.f_2D.f_43 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_97()
{
	if (Global_24B2D0.f_2D.f_41 && !Global_24B2D0.f_2D.f_12D)
	{
		if (!func_87(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_98()
{
	if (func_97())
	{
		if ((unk_0xC41A9202669A24C4(Global_24B2D0.f_2D.f_43) || unk_0xAFB8495D36825275(Global_24B2D0.f_2D.f_43)) || Global_24B2D0.f_2D.f_43 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_99(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x558ADED8B93EA0F6(vParam0, fParam5)) || (fVar0 > 0f && unk_0xEA19D5D9230DBB67(vParam0, fVar0))) || ((iParam2 == 0x00000001 && fParam6 > 0f) && unk_0x9DD97B5335E52CB9(vParam0, fParam6, 0x00000000))) || ((iParam1 == 0x00000001 && fParam7 > 0f) && unk_0x9DD97B5335E52CB9(vParam0, fParam7, 0x00000001)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_100(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	switch (uParam0->f_A)
	{
		case 0x00000000:
			if (func_104(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_103(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (func_101(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_101(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)
{
	vector3 vVar0[8];
	int iVar1;
	
	func_102(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000008)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0x00000000, 0x00000001))
		{
			return 0x00000000;
		}
		iVar1++;
	}
	return 0x00000001;
}

void func_102(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_17(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(SYSTEM::VMAG(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0x00000000 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[0x00000001 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[0x00000002 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[0x00000003 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[0x00000004 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[0x00000005 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[0x00000006 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[0x00000007 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_103(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0x00000000 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[0x00000001 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[0x00000002 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[0x00000003 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[0x00000004 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[0x00000005 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[0x00000006 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[0x00000007 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000008)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0x00000000, 0x00000001))
		{
			return 0x00000000;
		}
		iVar1++;
	}
	return 0x00000001;
}

int func_104(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0x00000000 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[0x00000001 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[0x00000002 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[0x00000003 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0x00000000, 0x00000001))
		{
			return 0x00000000;
		}
		iVar1++;
	}
	return 0x00000001;
}

void func_105(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_32(vVar1);
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CBC3[iVar2])
	{
		if (func_31(vVar1, &(Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CBC3[0x00000008])
	{
		if (func_31(vVar1, &(Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_106(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_24B2D0.f_2D.f_37)
	{
		if (unk_0x31609A585163CBAC(Global_24B2D0.f_2D.f_38))
		{
			if (!unk_0xD1BF3090E1F8300E(vParam0))
			{
				iVar0 = unk_0xFBD08BECC9B87937(vParam0);
				if (unk_0x31609A585163CBAC(iVar0))
				{
					iVar1 = unk_0x7C3DA83DB15FFBEB(iVar0);
					if (!iVar1 == Global_24B2D0.f_2D.f_39)
					{
						return 0x00000000;
					}
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
	}
	return 0x00000001;
}

int func_107(vector3 vParam0)
{
	switch (Global_24B2D0.f_9AF)
	{
		case 0x00000000:
			return func_144(vParam0, Global_24B2D0.f_99A, Global_24B2D0.f_99D, 0x00000000, 0x00000000);
			break;
		
		case 0x00000001:
			return func_60(vParam0, Global_24B2D0.f_9A8, Global_24B2D0.f_9AB, 0x00000000, 0x00000000);
			break;
		
		case 0x00000002:
			return unk_0x0399732A9EBC368E(vParam0, Global_24B2D0.f_9A8, Global_24B2D0.f_9AB, Global_24B2D0.f_9AE, 0x00000000, 0x00000001);
			break;
	}
	return 0x00000000;
}

int func_108(vector3 vParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 0x00000001;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0x00000000;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x0399732A9EBC368E(vParam0, vVar2, vVar3, fVar4, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		iVar1++;
	}
	return 0x00000000;
}

int func_109(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_19(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 0x3DCCCCCD, 0x00000000, 0x00000000);
				*uParam0 = { vVar1 };
			}
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_110(int iParam0)
{
	switch (func_58())
	{
		case 0x00000000:
			if (!func_111(iParam0))
			{
				if (Global_184507[iParam0 /*876*/] == 0x00000000)
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

bool func_111(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0x00000000;
}

int func_112(int iParam0)
{
	if (func_42(iParam0, 0x00000001, 0x00000000))
	{
		if (Global_184507[iParam0 /*876*/] != 0x00000006)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_113(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_24B2D0.f_A39[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_114(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_48(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = unk_0x79833B02DBD2A244(0.01f, 360f);
			func_19(&vVar1, Global_24B2D0.f_24B, Global_24B2D0.f_24E, 0x3DCCCCCD, 0x00000000, fVar2);
			if (func_49(vVar1, &uVar0) || func_48(vVar1))
			{
				vVar1 = { *uParam0 };
				func_19(&vVar1, Global_24B2D0.f_24B, Global_24B2D0.f_24E, 0x3DCCCCCD, 0x00000001, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0x00000000;
}

int func_115(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_26(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_116(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
		if (func_26(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_141(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_75(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
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
								if (unk_0x0EB28750412C3A5A(func_116(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_116(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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

Vector3 func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_117() && Global_184507[iVar0 /*876*/].f_34F) && !func_4(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_79(iParam0);
}

var func_117()
{
	return Global_2564C8.f_11;
}

int func_118(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(vParam0, fParam1, iParam2, iParam3, 0x00000000) || func_119(vParam0, iParam2, iParam4))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_119(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (!iParam1 == iVar0 || iParam2 == 0x00000001)
		{
			iVar2 = iVar0;
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000002)
			{
				if (!Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0x00000000)
				{
					if (func_34(vParam0, Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4, 0x3DCCCCCD))
					{
						if (func_26(iVar2, 0x00000000, 0x00000001) && func_26(iParam1, 0x00000000, 0x00000001))
						{
							return 0x00000001;
						}
						else
						{
							return 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_120(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (!iParam2 == iVar0 || iParam3 == 0x00000001)
		{
			iVar1 = iVar0;
			bVar2 = 0x00000000;
			if (bParam4)
			{
				if (func_26(iVar1, 0x00000000, 0x00000001) && func_26(iParam2, 0x00000000, 0x00000001))
				{
					if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(iParam2))
					{
						bVar2 = 0x00000001;
					}
				}
			}
			if (!bVar2)
			{
				if (func_26(iVar1, 0x00000000, 0x00000001) && func_26(iParam2, 0x00000000, 0x00000001))
				{
					if (Global_24E4E9.f_105[iVar0])
					{
						if (SYSTEM::VDIST(Global_24E4E9.f_83[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 0x00000001;
						}
					}
					else if (SYSTEM::VDIST(func_79(iVar1), vParam0) < 1f)
					{
						return 0x00000001;
					}
				}
				else if (Global_24E4E9.f_105[iVar0])
				{
					if (SYSTEM::VDIST(Global_24E4E9.f_83[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 0x00000001;
					}
				}
				else if (func_26(iVar1, 0x00000000, 0x00000001))
				{
					if (SYSTEM::VDIST(func_79(iVar1), vParam0) < 1f)
					{
						return 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_121(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_24B2D0.f_3 = 0x00000000;
	if (!func_118(vParam0, 0.5f, unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000))
	{
		Global_24B2D0.f_3++;
		if (bParam3)
		{
			if (func_172(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0x00000000, bParam4, iParam5, fParam6, bParam13, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, fParam11, bParam12, 0x00000000))
			{
				Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
				if (!func_125(vParam0, fParam10))
				{
					Global_24B2D0.f_3++;
					if (!func_33(vParam0, 0x3F000000))
					{
						Global_24B2D0.f_3++;
						return 0x00000001;
					}
				}
			}
			else
			{
				Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_172(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0x00000000, bParam4, iParam5, fParam6, bParam13, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, fParam11, bParam12, 0x00000000))
			{
				Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
				if (!func_125(vParam0, fParam10))
				{
					Global_24B2D0.f_3++;
					if (!func_122(vParam0, fParam1, fParam7, fParam8, 0x40A00000))
					{
						Global_24B2D0.f_3++;
						if (!func_33(vParam0, 0x3F000000))
						{
							Global_24B2D0.f_3++;
							return 0x00000001;
						}
					}
				}
			}
			else
			{
				Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
			}
		}
		else if (func_172(vParam0, 6f, 5f, 5f, 5f, 0x00000000, bParam4, iParam5, fParam6, bParam13, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, fParam11, bParam12, 0x00000000))
		{
			Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
			if (!func_125(vParam0, fParam10))
			{
				Global_24B2D0.f_3++;
				if (!func_122(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_24B2D0.f_3++;
					if (!func_33(vParam0, 0x3F000000))
					{
						Global_24B2D0.f_3++;
						return 0x00000001;
					}
				}
			}
		}
		else
		{
			Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
		}
	}
	return 0x00000000;
}

int func_122(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if (!unk_0xD803B885F5E47A62() == iVar1)
		{
			if ((func_26(iVar1, 0x00000001, 0x00000001) && func_75(iVar1)) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (!func_124(unk_0xD803B885F5E47A62(), iVar1, 0xFFFFFFFE, 0x00000000))
				{
					if (func_123(func_79(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_123(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = SYSTEM::SIN(fParam2);
	vVar0.y = SYSTEM::COS(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return unk_0x0399732A9EBC368E(vParam0, vParam1, vVar1, fParam4, 0x00000000, 0x00000001);
}

bool func_124(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_125(vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((func_26(iVar1, 0x00000001, 0x00000001) && func_75(iVar1)) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
		{
			if ((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF) && !func_56(unk_0xD803B885F5E47A62(), 0x00000001))
			{
				return 0x00000000;
			}
			else if ((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && !unk_0xD803B885F5E47A62() == iVar1) || !func_124(unk_0xD803B885F5E47A62(), iVar1, 0xFFFFFFFE, 0x00000000))
			{
				if (SYSTEM::VDIST(vParam0, func_79(iVar1)) < fParam1)
				{
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_126(int iParam0)
{
	if ((Global_24B2D0.f_1E6 == 0x00000009 || Global_24B2D0.f_1E6 == 0x00000009) || (Global_24B2D0.f_1E6 == 0x0000000F && iParam0 == 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_127(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam6 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0x00000000)
		{
			if (func_26(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && iParam7) && bParam4) && func_81(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_79(iVar1), vParam0, 0x00000001) < fParam1)
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

int func_128(vector3 vParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	if (!iVar3 == 0xFFFFFFFF)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 0x00000001, 0x00000001))
			{
				if ((!func_141(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1)) && iVar1 != unk_0xD803B885F5E47A62())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
						{
							if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x08067D4957B73C02(iVar1) == iVar3)
					{
						if (unk_0x0EB28750412C3A5A(func_79(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
						{
							if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
							{
								return 0x00000001;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_129(int iParam0)
{
	if (((func_56(iParam0, 0x00000001) || func_132(iParam0)) || func_131(iParam0, 0x00000000)) || func_130(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_130(int iParam0)
{
	if (!func_26(iParam0, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

int func_131(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/] != 0xFFFFFFFF;
	}
	return 0x00000000;
}

void func_133(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_1403FD)
	{
		iVar0 = 0x00000000;
		while (iVar0 < *uParam1)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar1 /*26*/].f_C, 0x0000000B))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2401A9[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2401A9[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2401A9[iVar1 /*26*/].f_6.f_2;
					func_135(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000000F)
	{
		iVar0 = 0x00000000;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_176F[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_40001.f_176F[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_135(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000000E)
	{
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000006)
		{
			iVar0 = 0x00000000;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_179D[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_40001.f_179D[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_135(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_1403DA)
	{
		iVar0 = 0x00000000;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_140131[iVar1 /*8*/].f_1 + Global_140131[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar5, vParam0) < SYSTEM::VDIST(vVar6, vParam0))
			{
				Var4 = { Global_140131[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_140131[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_140131[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_240065[iVar1 /*3*/] };
				func_134(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_134(var uParam0, var uParam1, int iParam2)
{
	Global_24CFB0 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_134(&Global_24CFB0, uParam1, iParam2 + 1);
	}
}

void func_135(var uParam0, var uParam1, int iParam2)
{
	Global_24CFAC = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_135(&Global_24CFAC, uParam1, iParam2 + 1);
	}
}

void func_136(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_24B2D0.f_8CE > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_24B2D0.f_8CE)
		{
			if (func_137(Global_24B2D0.f_8CF[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_24B2D0.f_8CF[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_24B2D0.f_8CF[iVar0 /*4*/] };
					fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
				}
				func_72(Global_24B2D0.f_8CF[iVar0 /*4*/], fVar2, uParam0, uParam1, 0x00000000, 0xFFFFFFFF);
				Global_24B2D0.f_9B3++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_24B2D0.f_B40)
	{
		func_66(&(Global_24B2D0.f_9B3.f_6[0x00000000 /*10*/]), &(Global_24B2D0.f_9B3.f_6[0x00000001 /*10*/]), &(Global_24B2D0.f_9B3.f_6[0x00000002 /*10*/]));
	}
}

int func_137(vector3 vParam0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0x00000000:
			return func_23(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 0x00000001:
		case 0x00000002:
			return func_23(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_B, uParam1->f_E);
		
		default:
	}
	return 0x00000000;
}

void func_138(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_61(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_139()
{
	return Global_14010B.f_4;
}

void func_140(var uParam0, var uParam1)
{
	func_179();
	func_171(uParam0, uParam1);
}

bool func_141(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_142(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_142(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_143();
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

int func_143()
{
	return Global_1407E9;
}

bool func_144(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_145(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_24B2D0.f_6D2 > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (func_167(uParam0, uParam1, uParam2) == 0x00000000 && iVar0 < 0x00000002)
		{
			iVar0++;
		}
		if (iVar0 == 0x00000002)
		{
			uParam2->f_21 = 0x00000000;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0x00000000;
	while (func_146(uParam0, uParam1, uParam2) == 0x00000000 && iVar0 < 0x00000006)
	{
		iVar0++;
	}
}

int func_146(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0x00000000;
	if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
	{
		uParam2->f_23 = { *uParam0 };
	}
	if (uParam2->f_F)
	{
		if (func_45(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 0x00000001, 0x00000001))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_33)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_30)
	{
		if (func_166(uParam0, 0x00000001))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0x00000000;
	iVar8 = 0x00000001;
	if (uParam2->f_B)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0x00000000;
	}
	else if (uParam2->f_A == 0x00000000 || (uParam2->f_21 > 0x00000000 && uParam2->f_10))
	{
		iVar3++;
		iVar8 = 0x00000000;
	}
	iVar3 += 4;
	iVar11 = 3f;
	iVar12 = 5f;
	switch (uParam2->f_21)
	{
		case 0x00000000:
			iVar11 = 3f;
			iVar12 = 5f;
			break;
		
		case 0x00000001:
			iVar11 = 2.75f;
			iVar12 = 7.5f;
			break;
		
		default:
			iVar11 = 2.5f;
			iVar12 = 10f;
			break;
	}
	iVar13 = 0x00000000;
	Global_24CFBA.f_A2 = 0x00000000;
	Global_24CFBA.f_A3 = 0x00000000;
	Global_24CFBA.f_A4 = 0xFFFFFF9D;
	Global_24CFBA.f_A5 = { 0f, 0f, 0f };
	iVar14 = 0x00000000;
	while (iVar14 < 0x00000028)
	{
		Global_24CFBA[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_24CFBA.f_79[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 0x00000001;
	if (func_39(uParam2->f_22) != 0x00000000)
	{
		iVar15 = 0x00000003;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_12 = 0x00000000;
	}
	while (0x00000001)
	{
		iVar6 = unk_0x8529439EA7EEBA65(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, iVar11, iVar12);
		if (unk_0x5DD62183BBF151CD(iVar6))
		{
			unk_0x8502D8EBA9E78216(iVar6, &vVar1);
			bVar10 = 0x00000000;
			if (Global_24CFBA.f_A4 == iVar6)
			{
				bVar10 = 0x00000001;
			}
			Global_24CFBA.f_A5 = { vVar1 };
			if (((uParam2->f_A || uParam2->f_21 > 0x00000000) || !unk_0x5B33870CBB8B6AC1(iVar6)) || unk_0xD9DC3EBC8290FF92(iVar6))
			{
				unk_0x968116EE0D84C042(vVar1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(vVar1, uParam2->f_23) > uParam2->f_4)
				{
					if (!func_114(&vVar1, 0x00000000))
					{
						if ((uParam2->f_D || uVar5 & 0x00000040 == 0x00000000) || uParam2->f_21 == 0x00000001)
						{
							if (uParam2->f_E || uVar5 & 0x00000010 == 0x00000000)
							{
								if ((uVar5 & 0x00000080 == 0x00000000 && uVar5 & 0x00000100 == 0x00000000) && uVar5 & 0x00000200 == 0x00000000)
								{
									if (!func_165(vVar1))
									{
										vVar1 = { func_161(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, bVar10, 0x00000001, uParam2->f_33) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_33(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_23.f_2 - uParam2->f_7) || uParam2->f_21 >= 0x00000002)
												{
													if (vVar1.z <= (uParam2->f_23.f_2 + uParam2->f_6) || uParam2->f_21 >= 0x00000002)
													{
														if (func_160(vVar1, uParam2))
														{
															if ((uParam2->f_30 && !func_166(&vVar1, 0x00000000)) || uParam2->f_30 == 0x00000000)
															{
																bVar16 = 0x00000001;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + 0xFFFFFFFF);
																		bVar16 = 0x00000000;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_21 >= 0x00000002)
																	{
																		if ((uParam2->f_C && !func_156(vVar1, fVar2, uParam2->f_22, unk_0xD803B885F5E47A62(), 0x00000000, uParam2->f_38)) || !uParam2->f_C)
																		{
																			if (!uParam2->f_F || !func_45(uParam2->f_23, &vVar1, &(uParam2->f_26), &(uParam2->f_2D), 0x00000000, 0x00000001))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_1F;
																					bVar18 = 0x00000001;
																					iVar19 = 0x00000001;
																					fVar20 = uParam2->f_31;
																					if (!uParam2->f_37)
																					{
																						iVar17 = 0x00000000;
																						bVar18 = 0x00000000;
																						iVar19 = 0x00000000;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_11)
																					{
																						iVar17 = 0x00000000;
																						bVar18 = 0x00000000;
																						iVar19 = 0x00000000;
																						if (uParam2->f_21 == 0x00000001)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = 0x00000001;
																						iVar19 = 0x00000001;
																						if (uParam2->f_1C)
																						{
																							if (uParam2->f_21 == 0x00000001)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0x00000000;
																					if (!func_155(vVar1, fVar2, uParam2->f_22))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_172(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 0xFFFFFFFF, 0x00000001, uParam2->f_3, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
																							{
																								iVar21 = 0x00000001;
																							}
																						}
																						else if (func_172(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 0xFFFFFFFF, 0x00000001, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000) && !func_153(vVar1, fVar2, uParam2->f_22, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
																						{
																							iVar21 = 0x00000001;
																						}
																					}
																					if (iVar21 || uParam2->f_21 >= 0x00000002)
																					{
																						if (((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34) || uParam2->f_21 >= 0x00000002)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_34)
																							{
																								iVar22 = func_152(vVar1, uParam2->f_36, &fVar23);
																							}
																							if (!uParam2->f_34 || (uParam2->f_34 && iVar22 <= uParam2->f_35))
																							{
																								if (uParam2->f_34)
																								{
																									if (iVar22 < uParam2->f_35)
																									{
																										iVar14 = 0x00000000;
																										while (iVar14 < Global_24CFBA.f_A2)
																										{
																											Global_24CFBA[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_24CFBA.f_79[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_24CFBA.f_A2 = 0x00000000;
																										uParam2->f_35 = iVar22;
																									}
																								}
																								if (uParam2->f_1E)
																								{
																									if (Global_24CFBA.f_A2 == 0x00000000)
																									{
																										Global_24CFBA[0x00000000 /*3*/] = { vVar1 };
																										Global_24CFBA.f_79[0x00000000] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0x00000000;
																										while (iVar14 < Global_24CFBA.f_A2 + 1)
																										{
																											if (iVar14 < 0x00000028)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_23) < SYSTEM::VDIST2(Global_24CFBA[iVar14 /*3*/], uParam2->f_23))
																												{
																													func_151(vVar1, fVar2, iVar14);
																													iVar14 = Global_24CFBA.f_A2 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_24CFBA.f_A2++;
																									if (Global_24CFBA.f_A2 >= 0x00000005)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0x00000000) || uParam2->f_34 == 0x00000000)
																										{
																											iVar0 = 0x00000064;
																										}
																										else if (Global_24CFBA.f_A2 == 0x00000028)
																										{
																											iVar0 = 0x00000064;
																										}
																									}
																								}
																								else
																								{
																									Global_24CFBA[Global_24CFBA.f_A2 /*3*/] = { vVar1 };
																									Global_24CFBA.f_79[Global_24CFBA.f_A2] = fVar2;
																									Global_24CFBA.f_A2++;
																									if (func_160(vVar1, uParam2))
																									{
																										Global_24CFBA.f_A3++;
																									}
																									if (Global_24CFBA.f_A2 >= 0x0000000A)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0x00000000) || uParam2->f_34 == 0x00000000)
																										{
																											iVar0 = 0x00000064;
																										}
																										else if (Global_24CFBA.f_A2 == 0x00000028)
																										{
																											iVar0 = 0x00000064;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 0x00000001;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 0x00000001;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 0x00000064;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_20)
														{
															iVar0 = 0x00000064;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (0x00000028 + iVar13) || iVar0 >= 0x00000064)
			{
				if (Global_24CFBA.f_A2 > 0x00000000 && ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 0x00000002))
				{
					if (uParam2->f_1E)
					{
						*uParam0 = { Global_24CFBA[0x00000000 /*3*/] };
						*uParam1 = Global_24CFBA.f_79[0x00000000];
						return 0x00000001;
					}
					else
					{
						if (Global_24CFBA.f_A3 > 0x00000000 && !Global_24CFBA.f_A3 == Global_24CFBA.f_A2)
						{
							func_149(0x00000000, uParam2);
						}
						iVar24 = unk_0x09AC81E49EA267F7(0x00000000, Global_24CFBA.f_A2);
						if (uParam2->f_12 && uParam2->f_1E)
						{
							iVar24 = 0x00000000;
						}
						vVar25 = { Global_24CFBA[0x00000000 /*3*/] };
						uVar26 = Global_24CFBA.f_79[0x00000000];
						Global_24CFBA[0x00000000 /*3*/] = { Global_24CFBA[iVar24 /*3*/] };
						Global_24CFBA.f_79[0x00000000] = Global_24CFBA.f_79[iVar24];
						Global_24CFBA[iVar24 /*3*/] = { vVar25 };
						Global_24CFBA.f_79[iVar24] = uVar26;
						*uParam0 = { Global_24CFBA[0x00000000 /*3*/] };
						*uParam1 = Global_24CFBA.f_79[0x00000000];
						return 0x00000001;
					}
				}
				else
				{
					uParam2->f_21++;
					if (uParam2->f_21 < 0x00000003)
					{
						return 0x00000000;
					}
					else
					{
						func_148(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, iVar11, iVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_32)
						{
							bVar29 = 0x00000001;
						}
						else
						{
							bVar29 = 0x00000000;
						}
						if (func_45(uParam2->f_23, &vVar27, &(uParam2->f_26), &(uParam2->f_2D), bVar29, 0x00000001) || func_166(&vVar27, bVar29))
						{
							if (!uParam2->f_32)
							{
								uParam2->f_21 = 0x00000000;
								uParam2->f_32 = 0x00000001;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0x00000000;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 0x00000001;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 0x00000001;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 0x00000003)
			{
				return 0x00000000;
			}
			else
			{
				func_147(&Global_14053D, uParam0, uParam1, *uParam0);
				if (uParam2->f_B)
				{
					uParam2->f_1B = 0x00000001;
				}
				return 0x00000001;
			}
		}
		Global_24CFBA.f_A4 = iVar6;
	}
	return 0x00000000;
}

void func_147(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0xFFFFFFFF;
	iVar2 = 0x00000000;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_118(*(uParam0[iVar2 /*4*/]), 5f, unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == 0xFFFFFFFF)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_148(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001E)
	{
		*iParam2 = unk_0x09AC81E49EA267F7((0x00000001 + iParam0), (0x00000028 + iParam0));
		unk_0x4A13F7D4B1E239A0(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, iParam9, iParam10);
		*uParam3 = { func_161(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_B, uParam5->f_22, &bParam11, 0x00000000, 0x00000000, uParam5->f_33) };
		if (!func_165(*uParam3))
		{
			iVar0 = 0x000003E7;
			return;
		}
		iVar0++;
	}
}

void func_149(int iParam0, var uParam1)
{
	if (!func_160(Global_24CFBA[iParam0 /*3*/], uParam1))
	{
		Global_24CFBA.f_A2 = (Global_24CFBA.f_A2 - 0x00000001);
		func_150(iParam0);
		if (Global_24CFBA.f_A2 > Global_24CFBA.f_A3)
		{
			func_149(iParam0, uParam1);
		}
	}
	else if (iParam0 < 0x00000027)
	{
		func_149(iParam0 + 1, uParam1);
	}
}

void func_150(int iParam0)
{
	while (iParam0 < 0x00000027)
	{
		if (iParam0 < 0x00000027)
		{
			Global_24CFBA[iParam0 /*3*/] = { Global_24CFBA[iParam0 + 1 /*3*/] };
			Global_24CFBA.f_79[iParam0] = Global_24CFBA.f_79[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_151(vector3 vParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_24CFBA[iParam2 /*3*/] };
	uVar1 = Global_24CFBA.f_79[iParam2];
	Global_24CFBA[iParam2 /*3*/] = { vParam0 };
	Global_24CFBA.f_79[iParam2] = fParam1;
	if (iParam2 <= Global_24CFBA.f_A2 && iParam2 < 0x00000027)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_151(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_152(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar3 = iVar0;
		if (func_80(iVar3))
		{
			vVar1 = { func_79(iVar3) };
			fVar5 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_153(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam7 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam7 == 0x00000000)
		{
			if (func_26(iVar1, bParam3, bParam4))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam6 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && iParam8) && bParam5) && func_81(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar1), 0x00000000))
								{
									iVar3 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar1), 0x00000000);
									if (unk_0xC844350D5D58C99A(iVar3) && !unk_0x437347B10A200C4B(iVar3, 0x00000000))
									{
										iVar4 = unk_0x134B62B726CEC8E6(iVar3);
										vVar5 = { unk_0x68F4C0EC296D3901(iVar3, 0x00000000) };
										fVar6 = unk_0xD9522BA9E27E1349(iVar3);
										if (func_154(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0x00000000))
										{
											return 0x00000001;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_34(func_79(iVar1), vParam0, fParam1, iParam2, fVar2))
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

int func_154(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_34(vParam0, vParam3, fParam4, iParam5, 0x3DCCCCCD))
	{
		return 0x00000001;
	}
	func_36(iParam2, &vVar2, &vVar3, 0x40C00000, 0x40600000, 0x40400000);
	vVar4 = { 0f, vVar3.y, 0f };
	func_20(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_20(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0x755FF954DAE327E1((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_20(&vVar6, 0f, 0f, fParam1);
	vVar1[0x00000000 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0x00000000 /*3*/].f_2 = (vVar1[0x00000000 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	vVar1[0x00000001 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[0x00000001 /*3*/].f_2 = (vVar1[0x00000001 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	vVar1[0x00000002 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[0x00000002 /*3*/].f_2 = (vVar1[0x00000002 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	vVar1[0x00000003 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[0x00000003 /*3*/].f_2 = (vVar1[0x00000003 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (func_34(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 0x3DCCCCCD))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_154(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_155(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 0x00000001;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 0x00020004);
	iVar1 = unk_0x83C1D4B63BBD91F6(vParam0, 30f, 0x00000000, iVar0);
	if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0x00000000))
	{
		iVar2 = unk_0x134B62B726CEC8E6(iVar1);
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000000) };
		fVar4 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_154(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0x00000000))
		{
			return 0x00000001;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x83C1D4B63BBD91F6(vParam0, 30f, 0x00000000, iVar0);
	if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0x00000000))
	{
		iVar2 = unk_0x134B62B726CEC8E6(iVar1);
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000000) };
		fVar4 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_154(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_156(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_159(vParam0, fParam1, iParam2, iParam3, iParam4) || func_157(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_157(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (!iParam3 == iVar0 || iParam4 == 0x00000001)
		{
			iVar2 = iVar0;
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000002)
			{
				if (func_158(vParam0, iParam2, Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_154(vParam0, fParam1, iParam2, Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4, 0x00000000))
					{
						if (func_26(iVar2, 0x00000000, 0x00000001) && func_26(iParam3, 0x00000000, 0x00000001))
						{
							return 0x00000001;
						}
						else
						{
							return 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_158(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_41(iParam1, 0x3C23D70A);
	fVar1 = func_41(iParam3, 0x3C23D70A);
	fVar2 = SYSTEM::VDIST(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_159(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (!iParam3 == iVar0 || iParam4 == 0x00000001)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 0x00000000, 0x00000001) && func_26(iParam3, 0x00000000, 0x00000001))
			{
				if (Global_24E4E9.f_105[iVar0])
				{
					if (func_34(Global_24E4E9.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 0x3DCCCCCD))
					{
						return 0x00000001;
					}
				}
				else if (func_34(func_79(iVar1), vParam0, fParam1, iParam2, 0x3DCCCCCD))
				{
					return 0x00000001;
				}
			}
			else if (Global_24E4E9.f_105[iVar0])
			{
				if (func_34(Global_24E4E9.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 0x3DCCCCCD))
				{
					return 0x00000001;
				}
			}
			else if (func_26(iVar1, 0x00000000, 0x00000000))
			{
				if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
				{
					if (func_34(func_79(iVar1), vParam0, fParam1, iParam2, 0x3DCCCCCD))
					{
						return 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_160(vector3 vParam0, var uParam1)
{
	if (uParam1->f_12)
	{
		switch (uParam1->f_1A)
		{
			case 0x00000000:
				if (func_144(vParam0, uParam1->f_13, uParam1->f_19, 0x00000000, 0x00000000))
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (func_60(vParam0, uParam1->f_13, uParam1->f_16, 0x00000000, 0x00000000))
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000002:
				if (unk_0x0399732A9EBC368E(vParam0, uParam1->f_13, uParam1->f_16, uParam1->f_19, 0x00000000, 0x00000001))
				{
					return 0x00000001;
				}
				break;
		}
		return 0x00000000;
	}
	return 0x00000001;
}

Vector3 func_161(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(vParam4) > 0f)
		{
			if (!func_164(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	unk_0x968116EE0D84C042(vParam0, &uVar1, &uVar2);
	if (uVar2 & 0x00000400 == 0x00000000 && !bParam6)
	{
		unk_0xC05DA9D35DAF88FD(vParam0, 1f, 0x00000001, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 0x00000001;
		}
		if (bParam10)
		{
			if (!uVar2 & 0x00000080 == 0x00000000)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 0x00000100 == 0x00000000)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 0x00000200 == 0x00000000)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0xAFB8495D36825275(iParam7) && func_163(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = 0x00000001;
		}
		else
		{
			bVar8 = 0x00000000;
		}
		bVar9 = 0x00000000;
		if (bVar8)
		{
			if (iVar4 == 0x00000000)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = 0x00000001;
			}
		}
		else if (iVar5 == 0x00000000)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = 0x00000001;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 0x00000002)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 0x00000002)) * 1f));
					}
				}
				else if (iVar4 > 0x00000001)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 0x00000001)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 0x00000002)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 0x00000002)) * 1f));
					}
				}
				else if (iVar5 > 0x00000001)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 0x00000001)) * 1f));
				}
			}
			if (!uVar2 & 0x00000040 == 0x00000000)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 0x00000004 == 0x00000000 || !uVar2 & 0x00000008 == 0x00000000)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 0x00000020 == 0x00000000 && uVar2 & 0x00000004 == 0x00000000) && uVar2 & 0x00000008 == 0x00000000)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 0x00000008 == 0x00000000)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0x00000000)
			{
				if (uVar2 & 0x00000008 != 0x00000000)
				{
					fVar10 = func_162(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_162(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam4) > 0f)
	{
		if (!func_164(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 0x00000400 != 0x00000000 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { unk_0x8A5E176FF719A014(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x2E466A8362971293(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0x00000000)
			{
				vVar13 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
				if (uVar2 & 0x00000008 != 0x00000000)
				{
					fVar10 = func_162(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_162(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_162(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_36(iParam0, &fVar0, &fVar1, 0x40C00000, 0x40600000, 0x40400000);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_163(vector3 vParam0)
{
	float fVar0;
	
	if (unk_0xE82754C349C7B581(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0x00000000, 0x00000000))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_164(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_16(vVar1, vVar0) >= 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_165(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_32(vParam0);
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CE95[iVar1])
	{
		if (func_31(vParam0, &(Global_24CBD6[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CE95[0x00000008])
	{
		if (func_31(vParam0, &(Global_24CBD6[0x00000008 /*78*/][iVar0 /*7*/])))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_166(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (Global_24B2D0.f_1A.f_12)
	{
		switch (Global_24B2D0.f_1A.f_11)
		{
			case 0x00000000:
				if (func_144(*uParam0, Global_24B2D0.f_1A.f_A, Global_24B2D0.f_1A.f_10, 0x00000000, 0x00000000))
				{
					bVar0 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (func_60(*uParam0, Global_24B2D0.f_1A.f_A, Global_24B2D0.f_1A.f_D, 0x00000000, 0x00000000))
				{
					bVar0 = 0x00000001;
				}
				break;
			
			case 0x00000002:
				if (unk_0x0399732A9EBC368E(*uParam0, Global_24B2D0.f_1A.f_A, Global_24B2D0.f_1A.f_D, Global_24B2D0.f_1A.f_10, 0x00000000, 0x00000001))
				{
					bVar0 = 0x00000001;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_21(*uParam0, Global_24B2D0.f_1A.f_A, Global_24B2D0.f_1A.f_D, Global_24B2D0.f_1A.f_10, Global_24B2D0.f_1A.f_11, 0x3DCCCCCD, 0x00000000) };
			}
		}
	}
	return bVar0;
}

int func_167(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_24B2D0.f_6D2 > 0x00000000)
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000000;
		if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
		{
			uParam2->f_23 = { *uParam0 };
		}
		if (uParam2->f_F)
		{
			if (func_45(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 0x00000001, 0x00000001))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_30)
		{
			if (func_166(uParam0, 0x00000001))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_24CFBA.f_A2 = 0x00000000;
		Global_24CFBA.f_A3 = 0x00000000;
		iVar4 = 0x00000000;
		while (iVar4 < 0x00000028)
		{
			Global_24CFBA[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_24CFBA.f_79[iVar4] = 0f;
			iVar4++;
		}
		func_168(*uParam0);
		iVar0 = 0x00000000;
		while (iVar0 < Global_24B2D0.f_6D2)
		{
			iVar1 = Global_24B2D0.f_868[iVar0];
			if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000065)
			{
				vVar2 = { Global_24B2D0.f_6D3[iVar1 /*4*/] };
				fVar3 = Global_24B2D0.f_6D3[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_39 && SYSTEM::VDIST(vVar2, uParam2->f_23) > uParam2->f_4) || uParam2->f_39 == 0x00000000)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_C && !func_156(vVar2, fVar3, uParam2->f_22, unk_0xD803B885F5E47A62(), 0x00000000, uParam2->f_38)) || !uParam2->f_C)
							{
								if (!uParam2->f_F || !func_45(uParam2->f_23, &vVar2, &(uParam2->f_26), &(uParam2->f_2D), 0x00000000, 0x00000001))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_1F;
										bVar6 = 0x00000001;
										iVar7 = 0x00000001;
										fVar8 = uParam2->f_31;
										if (!uParam2->f_37)
										{
											iVar5 = 0x00000000;
											bVar6 = 0x00000000;
											iVar7 = 0x00000000;
											fVar8 = 1f;
										}
										else if (uParam2->f_11)
										{
											iVar5 = 0x00000000;
											bVar6 = 0x00000000;
											iVar7 = 0x00000000;
											if (uParam2->f_21 == 0x00000001)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = 0x00000001;
											iVar7 = 0x00000001;
											if (uParam2->f_1C)
											{
												if (uParam2->f_21 == 0x00000001)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = 0x00000000;
										if (!func_155(vVar2, fVar3, uParam2->f_22))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_172(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 0xFFFFFFFF, 0x00000001, uParam2->f_3, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
												{
													bVar9 = 0x00000001;
												}
											}
											else if (func_172(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 0xFFFFFFFF, 0x00000001, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000) && !func_153(vVar2, fVar3, uParam2->f_22, 0x00000001, 0x00000001, 0x00000000, 0x00000000, uParam2->f_3A, 0x00000000))
											{
												bVar9 = 0x00000001;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34)
											{
												fVar11 = 0f;
												if (uParam2->f_34)
												{
													iVar10 = func_152(vVar2, uParam2->f_36, &fVar11);
												}
												if (!uParam2->f_34 || (uParam2->f_34 && iVar10 <= uParam2->f_35))
												{
													if (uParam2->f_34)
													{
														if (iVar10 < uParam2->f_35)
														{
															iVar4 = 0x00000000;
															while (iVar4 < Global_24CFBA.f_A2)
															{
																Global_24CFBA[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_24CFBA.f_79[iVar4] = 0f;
																iVar4++;
															}
															Global_24CFBA.f_A2 = 0x00000000;
															uParam2->f_35 = iVar10;
														}
													}
													if (uParam2->f_1E)
													{
														if (Global_24CFBA.f_A2 == 0x00000000)
														{
															Global_24CFBA[0x00000000 /*3*/] = { vVar2 };
															Global_24CFBA.f_79[0x00000000] = fVar3;
														}
														else
														{
															iVar4 = 0x00000000;
															while (iVar4 < Global_24CFBA.f_A2 + 1)
															{
																if (iVar4 < 0x00000028)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_23) < SYSTEM::VDIST2(Global_24CFBA[iVar4 /*3*/], uParam2->f_23))
																	{
																		func_151(vVar2, fVar3, iVar4);
																		iVar4 = Global_24CFBA.f_A2 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_24CFBA.f_A2++;
														if (Global_24CFBA.f_A2 >= 0x00000005)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0x00000000) || uParam2->f_34 == 0x00000000)
															{
																iVar0 = Global_24B2D0.f_6D2;
															}
															else if (Global_24CFBA.f_A2 == 0x00000028)
															{
																iVar0 = Global_24B2D0.f_6D2;
															}
														}
													}
													else
													{
														Global_24CFBA[Global_24CFBA.f_A2 /*3*/] = { vVar2 };
														Global_24CFBA.f_79[Global_24CFBA.f_A2] = fVar3;
														Global_24CFBA.f_A2++;
														if (Global_24CFBA.f_A2 >= 0x0000000A)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0x00000000) || uParam2->f_34 == 0x00000000)
															{
																iVar0 = Global_24B2D0.f_6D2;
															}
															else if (Global_24CFBA.f_A2 == 0x00000028)
															{
																iVar0 = Global_24B2D0.f_6D2;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 0x00000001;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
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
		if (Global_24CFBA.f_A2 > 0x00000000)
		{
			if (uParam2->f_1E)
			{
				*uParam0 = { Global_24CFBA[0x00000000 /*3*/] };
				*uParam1 = Global_24CFBA.f_79[0x00000000];
				return 0x00000001;
			}
			else
			{
				if (Global_24CFBA.f_A3 > 0x00000000 && !Global_24CFBA.f_A3 == Global_24CFBA.f_A2)
				{
					func_149(0x00000000, uParam2);
				}
				iVar12 = unk_0x09AC81E49EA267F7(0x00000000, Global_24CFBA.f_A2);
				vVar13 = { Global_24CFBA[0x00000000 /*3*/] };
				uVar14 = Global_24CFBA.f_79[0x00000000];
				Global_24CFBA[0x00000000 /*3*/] = { Global_24CFBA[iVar12 /*3*/] };
				Global_24CFBA.f_79[0x00000000] = Global_24CFBA.f_79[iVar12];
				Global_24CFBA[iVar12 /*3*/] = { vVar13 };
				Global_24CFBA.f_79[iVar12] = uVar14;
				*uParam0 = { Global_24CFBA[0x00000000 /*3*/] };
				*uParam1 = Global_24CFBA.f_79[0x00000000];
				return 0x00000001;
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 0x00000002)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

void func_168(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_24B2D0.f_6D2)
	{
		uVar1 = func_169(vParam0, fVar0, &fVar0);
		Global_24B2D0.f_868[iVar2] = uVar1;
		iVar2++;
	}
}

int func_169(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 0xFFFFFFFF;
	fVar1 = 1E+08f;
	iVar3 = 0x00000000;
	while (iVar3 < Global_24B2D0.f_6D2)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_24B2D0.f_6D3[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_170(int iParam0)
{
	return iParam0 == 0x00000032;
}

void func_171(var uParam0, var uParam1)
{
	unk_0x8A1BBF3B7D62C45F(uParam0, uParam1, 0.1f);
	Global_24B2D0.f_9A2 = unk_0x0D0A574C76D769AC();
	Global_24B2D0.f_9A0 = 0x00000001;
	Global_24B2D0.f_9A3 = unk_0x2B6E0A53779D29EA();
}

int func_172(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_127(vParam0, fParam12, 0x00000001, 0x00000001, bParam13, bParam15, bParam9, bParam13))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_115(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0x00000000;
			}
		}
	}
	Global_24B2D0.f_2++;
	return 0x00000001;
}

void func_173()
{
	func_178();
	func_177();
	func_176();
	func_175();
	func_174();
}

void func_174()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 0x461C3F9A;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000080)
	{
		Global_24BE46[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_175()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		Global_24B2D0.f_9B3.f_5A[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_176()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000008)
	{
		Global_24B2D0.f_9B3.f_39[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_177()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 0x461C3F9A;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000005)
	{
		Global_24B2D0.f_9B3.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_178()
{
	struct<6> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Global_24B2D0.f_9B3 = { Var0 };
}

void func_179()
{
	if (Global_24B2D0.f_9A0)
	{
		if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_9A2)
		{
			unk_0xDA46A23FFDBCF876();
		}
		else
		{
			unk_0xDA46A23FFDBCF876();
		}
		Global_24B2D0.f_9A0 = 0x00000000;
	}
}

int func_180(bool bParam0)
{
	if (unk_0x757EF87A33649210())
	{
		return 0x00002710;
	}
	if (bParam0)
	{
		return 0x00001388;
	}
	return 0x000003E8;
}

int func_181(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 0x00000005;
	Var0.f_10 = 0x00000005;
	Var0.f_16 = 0x00000005;
	Var0.f_1C = 0x00000005;
	Var1.f_10 = 0x00000001;
	Var1.f_16 = 0x00000001;
	Var1.f_17 = 0x00000001;
	Var1.f_18 = 0x00000001;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_B;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0x00000000;
	Var1.f_6 = 0x00000001;
	Var1.f_7 = 0x00000000;
	Var1.f_F = 0x00000000;
	Var1.f_10 = 0x00000001;
	Var1.f_11 = 0x00000000;
	if (func_9(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_C > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0x00000000 /*3*/] };
			if (vVar2.z > uParam4->f_C)
			{
				Var0[0x00000000 /*3*/] = { vParam0 };
				Var0.f_10[0x00000000] = uParam4->f_B;
			}
		}
		*uParam2 = { Var0[0x00000000 /*3*/] };
		*uParam3 = Var0.f_10[0x00000000];
		return 0x00000001;
	}
	return 0x00000000;
}

int func_182(var uParam0)
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

void func_183(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_184(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_184(var uParam0, bool bParam1, bool bParam2)
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

void func_185()
{
	switch (vLocal_62[unk_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0x00000000:
			func_210();
			func_208();
			if (func_197())
			{
				func_189();
				func_188();
				func_186(0x00000023);
				vLocal_62[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000001;
			}
			else if (Local_60.f_8 >= 0x00000001)
			{
				func_188();
				vLocal_62[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Local_60.f_8 >= 0x00000002)
			{
				vLocal_62[unk_0x57270EE11514DC67() /*3*/].f_2 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			break;
	}
}

void func_186(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_200000[func_187() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
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

int func_187()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_188()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_65))
	{
		unk_0x142CC44DB769B57E(&iLocal_65);
	}
}

void func_189()
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_F37, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&(Global_2537E2.f_F37), 0x00000000);
		func_190();
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_2537E2.f_F37), 0x00000001);
	}
}

void func_190()
{
	func_191(0x000004A4, 0xFFFFFFFF);
}

void func_191(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_195(iParam0, func_196(iParam1), 0x00000000);
	iVar0++;
	if (!func_194(iParam0))
	{
		func_193(iParam0, iVar0, iParam1, 0x00000001, 0x00000000);
	}
	else
	{
		func_192(iParam0, iVar0, iParam1, 0x00000001);
	}
}

void func_192(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_196(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_196(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_196(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_196(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_196(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_196(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_196(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_196(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_196(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_196(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_196(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_196(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_196(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_196(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_194(int iParam0)
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

int func_195(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_196(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_196(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_143();
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

int func_197()
{
	struct<14> Var0;
	
	if (unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		if (unk_0xE5DBF9B6126856CA(Local_60.f_2))
		{
			if (unk_0x50B5F6F3C29E9380(unk_0x09AD4CE7DA179533(Local_60.f_2), unk_0x16F2683693E537C9()) && func_207(Local_60.f_2))
			{
				func_206(&(Local_60.f_2));
				if (unk_0xE4EDC4B0E92C078B(iLocal_65))
				{
					unk_0x142CC44DB769B57E(&iLocal_65);
				}
				if (!func_205(0x00000001))
				{
					func_200("ABB_BOXCT");
				}
				Var0.f_2 = 0x8F0DE98C;
				Var0.f_A = unk_0xD803B885F5E47A62();
				Var0.f_3 = uLocal_64;
				func_198(Var0, func_199(0x00000001));
				unk_0x5D96D8530B3D0904(&(vLocal_62[unk_0x57270EE11514DC67() /*3*/].f_1), 0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_198(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0x75BF07BC;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Param0, 0x0000000E, iParam13);
	}
}

int func_199(int iParam0)
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
			if (func_26(iVar2, 0x00000000, 0x00000000))
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

int func_200(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	unk_0x1E64CE678ED5F61E(sParam0);
	iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
	func_201(0x00000000, sParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	return iVar0;
}

void func_201(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_204() || !unk_0xA14BB9332558B949()) || !func_141(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = func_202(iParam2);
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

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Global_197EBE - 0x00000001))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_203(iVar0);
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

void func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000004;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 0x00000001) /*53*/] };
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

bool func_204()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return Global_18D266 > 0x00000000;
		
		case 0x00000002:
			return Global_18D266.f_1 > 0x00000000;
		
		case 0x00000003:
			return Global_18D266.f_2 > 0x00000000;
		
		case 0x00000004:
			return Global_18D266.f_4 > 0x00000000;
		
		case 0x00000005:
			return Global_18D266.f_3 > 0x00000000;
		
		default:
	}
	return 0x00000000;
}

void func_206(var uParam0)
{
	int iVar0;
	
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!unk_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
}

int func_207(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0x00000000;
}

void func_208()
{
	if (!unk_0xE4EDC4B0E92C078B(iLocal_65))
	{
		if (unk_0xE9F78D191AD5EDBA(Local_60.f_2))
		{
			iLocal_65 = unk_0x5C3B41825F6AC5A0(unk_0x09AD4CE7DA179533(Local_60.f_2));
			if (func_209())
			{
				unk_0x516E63E474722206(iLocal_65, 0.85f);
			}
			else
			{
				unk_0x516E63E474722206(iLocal_65, 1.2f);
			}
			unk_0xBC8E0A7390523199(iLocal_65, 0x00000193);
			unk_0x61755AC17D8F538E(iLocal_65, 0x00000002);
			unk_0xDC5B2F9D0CCE3A10(iLocal_65, "ABB_BLIPN");
		}
	}
}

bool func_209()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

void func_210()
{
	int iVar0;
	
	if (!unk_0xFEBC1E4EC9E001F0())
	{
		iVar0 = func_195(0x000004A6, 0xFFFFFFFF, 0x00000000);
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000E))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000E);
			func_193(0x000004A6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
}

int func_211()
{
	return Local_60;
}

int func_212()
{
	unk_0x523BCC9DC80CD82F(joaat("prop_drug_package_02"));
	if (unk_0xB87F6CF6E5628C67(joaat("prop_drug_package_02")))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_213(int iParam0)
{
	return vLocal_62[iParam0 /*3*/];
}

int func_214()
{
	var uVar0;
	
	func_221(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_220())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_219())
	{
		return 0x00000001;
	}
	if (func_218(0x0000009F))
	{
		if (!func_217())
		{
			return 0x00000001;
		}
	}
	if (func_218(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_215() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_215()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_215()
{
	switch (func_58())
	{
		case 0x00000000:
			return func_216();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_216()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_217()
{
	return Global_2564C8.f_256;
}

int func_218(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_219()
{
	return Global_258C08;
}

bool func_220()
{
	return Global_2564C8.f_251;
}

void func_221(var uParam0)
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
					func_222(iVar0);
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

void func_222(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_26(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_223(iVar2, &bVar3))
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

int func_223(int iParam0, var uParam1)
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

void func_224()
{
	SYSTEM::WAIT(0x00000000);
}

int func_225(int iParam0)
{
	return Global_184507[iParam0 /*876*/];
}

void func_226()
{
	Global_152E82 = 0xFFFFFFFF;
	if (unk_0xE4EDC4B0E92C078B(iLocal_65))
	{
		unk_0x142CC44DB769B57E(&iLocal_65);
	}
	func_229();
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			if (unk_0xE9F78D191AD5EDBA(Local_60.f_2) && unk_0x526BC32A660C89E6(Local_60.f_2))
			{
				func_206(&(Local_60.f_2));
			}
			Local_60 = 0x00000004;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 0x00000008))
	{
		func_228();
	}
	func_227();
}

void func_227()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_228()
{
	Global_26B66F.f_35B = 0x00000000;
	Global_26B66F.f_35B.f_1 = { 0f, 0f, 0f };
	Global_26B66F.f_35B.f_4 = 0f;
	Global_26B66F.f_35B.f_8 = 0x00000000;
	unk_0x0674E58A79778E99(&(Global_26B66F.f_35B.f_7), 0x00000000);
}

void func_229()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_63, 0x00000004))
	{
		unk_0x5BF70D3A674F3E1C(unk_0xD803B885F5E47A62(), 0.72f);
		unk_0xF7599E37AEBF26E7(unk_0xD803B885F5E47A62(), 1f, 0x00000001);
		unk_0x7EADCF510F11328E(unk_0xD803B885F5E47A62(), 1f);
		unk_0xD4455D6023C608A8(unk_0xD803B885F5E47A62(), 1f);
		func_230(0x00000001);
		unk_0x0674E58A79778E99(&iLocal_63, 0x00000005);
		unk_0x0674E58A79778E99(&iLocal_63, 0x00000007);
		unk_0x0674E58A79778E99(&iLocal_63, 0x00000004);
	}
}

void func_230(int iParam0)
{
	char* sVar0;
	
	sVar0 = func_231(iParam0, 0x00000000);
	unk_0x9A1335ECD7BD117F(sVar0);
}

char* func_231(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000001:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_232(struct<21> Param0)
{
	func_236(func_237(Param0), Param0);
	unk_0x3A4967AE7C71F999(0x00000001);
	func_234(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_60, 0x0000000B);
	unk_0x35B62793EAE9ADDF(&vLocal_62, 0x00000061);
	if (!func_233())
	{
		return 0x00000000;
	}
	unk_0x256D93AFAE851A7A(0x00000000);
	if (unk_0xBFF81ED3B99522C7())
	{
		Local_60.f_7 = Param0.f_10;
		Global_152E82 = Local_60.f_7;
		Local_60.f_3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
		if (!func_4(Global_26B66F.f_35B.f_1))
		{
			unk_0x5D96D8530B3D0904(&(Local_60.f_1), 0x00000008);
		}
	}
	bLocal_68 = unk_0x09BE1E6DF7B80B43();
	vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0x00000000;
	return 0x00000001;
}

int func_233()
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
		if (func_220())
		{
			return 0x00000000;
		}
		if (func_218(0x0000009D))
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

int func_234(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_227();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_235())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_227();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_220())
				{
					if (!bParam2)
					{
						func_227();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_218(0x0000009D))
				{
					if (!bParam2)
					{
						func_227();
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
					func_227();
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
				func_227();
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
			func_227();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_235()
{
	return Global_140856;
}

void func_236(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_227();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_237(int iParam0)
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

