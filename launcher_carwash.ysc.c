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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<24> Local_40[2];
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	vector3 vLocal_59[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_60[2] = { 0, 0 };
	int iLocal_61[2] = { 0, 0 };
	struct<2> Local_62 = { 0, 5 } ;
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
	var uLocal_78 = 5;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	int iVar3;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 0x00000003;
	vVar2 = { ScriptParam_62.f_1[0x00000000 /*3*/] };
	if (unk_0x8A22C4C08282BF26(joaat("launcher_carwash")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0xB57F88F0123F4C38();
		unk_0x256D93AFAE851A7A(0x00000000);
	}
	else if (unk_0x2EBF608FFE6CA406(0x00000063))
	{
		func_71();
	}
	if (Global_28006E)
	{
		if (unk_0x8A22C4C08282BF26(0xC76215BA) == 0x00000000)
		{
			unk_0x8CFFBE74CB5C864A(0xC76215BA);
			while (!unk_0x64EF15C5E09BAD76(0xC76215BA))
			{
				SYSTEM::WAIT(0x00000000);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(0xC76215BA, &ScriptParam_62, 0x00000017, 0x00000590);
		}
		unk_0x10FAF14A60A0DBE1();
	}
	if (func_70(unk_0x16F2683693E537C9()))
	{
	}
	func_64();
	while (0x00000001)
	{
		func_70(unk_0x16F2683693E537C9());
		if (func_63(unk_0x16F2683693E537C9(), vVar2, 0x00000000) > (100f + 20f))
		{
			func_71();
		}
		bVar0 = 0x00000000;
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			bVar0 = (func_60(iVar1) || func_59(iVar1));
			bLocal_58 = unk_0xD7B43F1BE8526992(iVar1);
			func_58(bLocal_58);
		}
		iVar3 = 0x00000000;
		while (iVar3 < Local_40)
		{
			func_57(iVar3);
			iVar3++;
		}
		if (func_1(&Local_40, &uLocal_41, bVar0, 0x00000000, 0x00000001, 0x00000590))
		{
			func_71();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_A)
	{
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < *iParam0)
		{
			func_52(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_D)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			if (func_45(uParam1->f_10))
			{
				iVar0 = 0x00000000;
				while (iVar0 < *iParam0)
				{
					if (func_42(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_C = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0x2C1AA3A291786CDC() && uParam1->f_10 == 0x00000000))
						{
							func_41(uParam1, 0x00000006);
						}
						else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
						{
							func_41(uParam1, 0x00000008);
						}
						else if (bParam2)
						{
							func_41(uParam1, 0x00000003);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_41(uParam1, 0x00000002);
						}
						else if (func_30() < (iParam0[uParam1->f_C /*24*/])->f_9)
						{
							func_41(uParam1, 0x00000001);
						}
						else if (func_25())
						{
							func_41(uParam1, 0x00000007);
						}
						else
						{
							func_41(uParam1, 0x00000004);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		
		case 0x00000002:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_C /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0x00000000)
			{
				func_41(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000001:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_C /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_C /*24*/]) || func_30() >= (iParam0[uParam1->f_C /*24*/])->f_9)
			{
				func_41(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_C /*24*/]) || !func_45(uParam1->f_10))
			{
				func_41(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_C /*24*/]) || bParam2 == 0x00000000) || !func_45(uParam1->f_10))
			{
				func_41(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000007:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_C /*24*/]) || !func_45(uParam1->f_10))
			{
				func_41(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000008:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_C /*24*/]) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				func_41(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000009:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_C /*24*/]) || func_9(iParam0[uParam1->f_C /*24*/]))
			{
				func_41(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000004:
			unk_0x558EC149EB2BC0A2(0x00000002, 0x00000033);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000065, 0x00000001);
			func_8();
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				func_41(uParam1, 0x00000008);
				return 0x00000000;
			}
			if ((iParam0[uParam1->f_C /*24*/])->f_8)
			{
				func_41(uParam1, 0x00000002);
				return 0x00000000;
			}
			if (func_18(iParam0[uParam1->f_C /*24*/]) || !func_45(uParam1->f_10))
			{
				func_41(uParam1, 0x00000000);
				return 0x00000000;
			}
			if (Global_12061)
			{
				return 0x00000000;
			}
			if (func_5(0x00000001))
			{
				return 0x00000000;
			}
			if ((iParam0[uParam1->f_C /*24*/])->f_6 == 0x00000001)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || func_4(unk_0x16F2683693E537C9(), 0x00000000) != 0xFFFFFFFF)
				{
					func_41(uParam1, 0x00000000);
					return 0x00000000;
				}
			}
			if ((iParam0[uParam1->f_C /*24*/])->f_7 || (unk_0x2C1AA3A291786CDC() && uParam1->f_10 == 0x00000000))
			{
				func_41(uParam1, 0x00000006);
				return 0x00000000;
			}
			if (func_25())
			{
				func_41(uParam1, 0x00000007);
				return 0x00000000;
			}
			if (func_30() < (iParam0[uParam1->f_C /*24*/])->f_9)
			{
				func_41(uParam1, 0x00000001);
				return 0x00000000;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_C /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_C /*24*/])->f_6 == 0x00000001)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
			}
			if (unk_0x798A3F1296751F46() || unk_0x1A72D8C9F025E5E3())
			{
				return 0x00000000;
			}
			if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
			{
				if ((unk_0x92444005288A72ED(unk_0x16F2683693E537C9()) || unk_0x9832A1748E6D3DBF(unk_0x16F2683693E537C9())) || unk_0x7F69A7C512ACACFD(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if ((unk_0x4580010DFDF4D53F(unk_0x16F2683693E537C9()) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0xA48EBBEA418ADC94(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x39E5E51C6E21A69B(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x82F88FD400E98881(unk_0x16F2683693E537C9()) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 0.05f)
				{
					return 0x00000000;
				}
			}
			if (unk_0xBFC0798A6E3417F9(0x00000002, 0x00000033) && uParam1->f_9 == 0x00000001)
			{
				if (!func_9(iParam0[uParam1->f_C /*24*/]))
				{
					func_41(uParam1, 0x00000009);
				}
				else
				{
					func_41(uParam1, 0x00000005);
				}
			}
			break;
		
		case 0x00000005:
			func_24(uParam1);
			(iParam0[uParam1->f_C /*24*/])->f_8 = 0x00000000;
			if (!bParam4)
			{
				func_41(uParam1, 0x00000000);
				return 0x00000001;
			}
			unk_0xA37A90C62806D848(0x00000001);
			unk_0x679C321F8CAA2CFA(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 20f, 0x00000000);
			if (!unk_0xEA6BC48857E0AC4C((iParam0[uParam1->f_C /*24*/])->f_5))
			{
				unk_0x92DCE5C81176D2B4((iParam0[uParam1->f_C /*24*/])->f_5);
				while (!unk_0x1FBF08B001C4788A((iParam0[uParam1->f_C /*24*/])->f_5))
				{
					func_8();
					if (func_70(unk_0x16F2683693E537C9()))
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !Global_12B4E)
						{
							func_2(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 2f, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000);
							unk_0xACCB31D58716FE8F(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
						}
					}
					unk_0x558EC149EB2BC0A2(0x00000002, 0x00000033);
					unk_0x92DCE5C81176D2B4((iParam0[uParam1->f_C /*24*/])->f_5);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000065, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000017, 0x00000001);
					SYSTEM::WAIT(0x00000000);
				}
				if (bParam3)
				{
					unk_0x53491B90E4FD0E56(0x000000FA);
				}
				if (unk_0x1FBF08B001C4788A((iParam0[uParam1->f_C /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0x757EF87A33649210())
						{
							if (func_70(unk_0x16F2683693E537C9()))
							{
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !Global_12B4E)
								{
									func_2(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 2f, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000);
									unk_0xACCB31D58716FE8F(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
								}
							}
							unk_0x558EC149EB2BC0A2(0x00000002, 0x00000033);
							unk_0x38C3A68D7861DCFD(0x00000000, 0x00000065, 0x00000001);
							unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
							unk_0x38C3A68D7861DCFD(0x00000000, 0x00000017, 0x00000001);
							func_8();
							SYSTEM::WAIT(0x00000000);
						}
					}
					SYSTEM::START_NEW_SCRIPT((iParam0[uParam1->f_C /*24*/])->f_5, iParam5);
					unk_0x5E8C29AE121DF1C7((iParam0[uParam1->f_C /*24*/])->f_5);
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000047, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000048, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000049, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003C, 0x00000001);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000045, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000046, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000056, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000051, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000052, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000088, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000072, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000057, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000058, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000071, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000073, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000074, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000075, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000076, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000077, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000160, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000083, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000084, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000081, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000082, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000085, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000086, 0x00000001);
	unk_0xCFAE3195DD6AE715();
	func_3(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_1D) > 0x000001F4)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_3(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0x00000000);
			}
		}
	}
}

int func_4(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 0x00000001)
				{
					iVar3 = 0xFFFFFFFF;
					return iVar3;
				}
				iVar2 = 0x00000000;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 0x00000001);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0x00000000))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0x00000000) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_7())
		{
			return 0x00000001;
		}
	}
	if (func_6(0x0000000E))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_6(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_7()
{
	if (Global_1AFF7)
	{
		return 0x00000001;
	}
	if (!func_6(0x0000000E) && unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_8()
{
	Global_56C3.f_6 = 0x00000001;
}

int func_9(var uParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0x16F2683693E537C9();
	if (uParam0->f_F == 360f)
	{
		return 0x00000001;
	}
	if (func_11(uParam0->f_C))
	{
		return 0x00000001;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_70(iVar1))
		{
			vVar0 = { unk_0x835730A2D89F6093(iVar1, 0x00000002) };
			if (vVar0.y > 45f || vVar0.y < -45f)
			{
				return 0x00000000;
			}
			iVar2 = iVar1;
		}
	}
	vVar0 = { unk_0x08D89CE2E20AE305(iVar2) };
	if (func_10(uParam0->f_C, vVar0) > SYSTEM::COS(uParam0->f_F))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_10(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

int func_11(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_12()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		return unk_0x10BA239D3B8FDC7F(iVar0, 0x42B40000);
	}
	return unk_0x10BA239D3B8FDC7F(unk_0x16F2683693E537C9(), 0x42B40000);
}

int func_13(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (func_15(uParam0) || !unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(0x00000001);
		func_14(sParam1, iParam2);
		uParam0->f_E = sParam1;
		uParam0->f_F = iParam2;
		uParam0->f_9 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_14(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

int func_15(var uParam0)
{
	if (unk_0xEA6BC48857E0AC4C(uParam0->f_E))
	{
		return 0x00000000;
	}
	if (!unk_0xFEBC1E4EC9E001F0())
	{
		return 0x00000000;
	}
	if (unk_0x7F8A39872A07D2CE(*uParam0, uParam0->f_E) || unk_0x7F8A39872A07D2CE(uParam0->f_2, uParam0->f_E))
	{
		return func_17(uParam0->f_E, uParam0->f_F);
	}
	return func_16(uParam0->f_E);
}

var func_16(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

var func_17(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

bool func_18(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 0x00000002;
	if (uParam0->f_6 == 0x00000000)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000001;
		}
	}
	else if (uParam0->f_6 == 0x00000001)
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000001;
		}
		if (func_4(unk_0x16F2683693E537C9(), 0x00000000) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
	}
	if (uParam0->f_B == 0x00000000)
	{
		return !func_21(unk_0x16F2683693E537C9(), uParam0->f_1, (uParam0->f_A + 2f));
	}
	Var0 = { func_19(uParam0->f_10, 2f) };
	return !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Var0[0x00000000 /*3*/], Var0[0x00000001 /*3*/], Var0.f_7, 0x00000000, 0x00000001, 0x00000000);
}

struct<8> func_19(struct<8> Param0, float fParam1)
{
	struct<8> Var0;
	vector3 vVar1;
	
	Var0 = 0x00000002;
	vVar1 = { func_20(Param0[0x00000001 /*3*/] - Param0[0x00000000 /*3*/]) * Vector(fParam1, fParam1, fParam1) };
	Var0[0x00000000 /*3*/] = { Param0[0x00000000 /*3*/] - vVar1 };
	Var0[0x00000001 /*3*/] = { Param0[0x00000001 /*3*/] + vVar1 };
	Var0.f_7 = (Param0.f_7 + (fParam1 * 2f));
	return Var0;
}

Vector3 func_20(vector3 vParam0)
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

bool func_21(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1) <= (fParam2 * fParam2);
}

int func_22(var uParam0, char* sParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (func_15(uParam0) || !unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(0x00000001);
		func_23(sParam1);
		uParam0->f_E = sParam1;
		uParam0->f_F = 0x00000000;
		uParam0->f_9 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_23(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

void func_24(var uParam0)
{
	if (func_15(uParam0))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	uParam0->f_E = 0x00000000;
	uParam0->f_F = 0x00000000;
	if (uParam0->f_9 == 0x00000001)
	{
		uParam0->f_9 = 0x00000000;
	}
}

bool func_25()
{
	int iVar0;
	
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (unk_0x4E861BC5B1EDA7BD(iVar0))
	{
		return 0x00000001;
	}
	if (func_29(iVar0))
	{
		return 0x00000001;
	}
	if (func_26(iVar0, 0x00000003))
	{
		return 0x00000001;
	}
	return !unk_0xDF1306B443CD3D15(iVar0, 0x00000000);
}

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_27(iParam0))
	{
		iVar0 = 0x00000000;
		if (unk_0x464B3D84B739AE72(iParam0, 0x00000000, 0x00000000) && unk_0x464B3D84B739AE72(iParam0, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0x464B3D84B739AE72(iParam0, 0x00000004, 0x00000000) && unk_0x464B3D84B739AE72(iParam0, 0x00000005, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0x464B3D84B739AE72(iParam0, 0x00000000, 0x00000000))
		{
			iVar0++;
		}
		if (unk_0x464B3D84B739AE72(iParam0, 0x00000001, 0x00000000))
		{
			iVar0++;
		}
		if (unk_0x464B3D84B739AE72(iParam0, 0x00000004, 0x00000000))
		{
			iVar0++;
		}
		if (unk_0x464B3D84B739AE72(iParam0, 0x00000005, 0x00000000))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_27(int iParam0)
{
	if (func_28(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_28(int iParam0)
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

int func_29(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
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

int func_30()
{
	if (unk_0x8CD06866876216F2())
	{
		return func_38(unk_0xD803B885F5E47A62());
	}
	switch (func_32())
	{
		case 0x00000002:
			return func_31(0x00000002);
		
		case 0x00000000:
			return func_31(0x00000000);
		
		case 0x00000001:
			return func_31(0x00000001);
		
		default:
	}
	return 0x00000000;
}

var func_31(int iParam0)
{
	return Global_E53E[iParam0];
}

int func_32()
{
	func_33();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_33()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_36(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_35(unk_0x16F2683693E537C9());
			if (func_34(iVar0) && (!func_6(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_34(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_34(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_37(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = func_39(iParam0);
	return uVar0;
}

int func_39(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return unk_0x62F8C2EDB26F57B3(0xFFFFFFFF);
		}
		else if (func_40(iParam0))
		{
			return Global_184507[iParam0 /*876*/].f_D3.f_3;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_40(int iParam0)
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

void func_41(var uParam0, int iParam1)
{
	uParam0->f_D = iParam1;
	func_24(uParam0);
}

bool func_42(var uParam0)
{
	func_70(unk_0x16F2683693E537C9());
	if (*uParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_44(0x00000000))
	{
		return 0x00000000;
	}
	if (func_43())
	{
		return 0x00000000;
	}
	if (uParam0->f_6 == 0x00000000)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000000;
		}
	}
	else if (uParam0->f_6 == 0x00000001)
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000000;
		}
		if (func_4(unk_0x16F2683693E537C9(), 0x00000000) != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
	}
	if (uParam0->f_B == 0x00000001)
	{
		return unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), uParam0->f_10[0x00000000 /*3*/], uParam0->f_10[0x00000001 /*3*/], uParam0->f_10.f_7, 0x00000000, 0x00000001, 0x00000000);
	}
	return func_21(unk_0x16F2683693E537C9(), uParam0->f_1, uParam0->f_A);
}

bool func_43()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

bool func_44(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

int func_45(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		if (func_51())
		{
			return 0x00000000;
		}
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (unk_0x1A72D8C9F025E5E3())
	{
		return 0x00000000;
	}
	if (func_43())
	{
		return 0x00000000;
	}
	if (Global_F042)
	{
		return 0x00000000;
	}
	if (func_44(0x00000000))
	{
		return 0x00000000;
	}
	if (func_50(0x00000000))
	{
		return 0x00000000;
	}
	if (func_46(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_46(int iParam0)
{
	if (func_49(iParam0))
	{
		return 0x00000001;
	}
	if (func_47(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_48(iParam0, 0x00000009);
	}
	return 0x00000000;
}

bool func_48(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

int func_50(int iParam0)
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

int func_51()
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_52(var uParam0)
{
	if (uParam0->f_B == 0x00000001)
	{
		func_54(&(uParam0->f_10), 0x000000FF, 0x00000064, 0x00000000, 0x00000064);
	}
	else
	{
		func_53(uParam0->f_1, uParam0->f_A, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF, 0x00000020);
	}
}

void func_53(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar1 = (360f / SYSTEM::TO_FLOAT(iParam6));
	vVar2 = { vParam0 };
	vVar3 = { vParam0 };
	fVar4 = 0f;
	vVar2 = { vParam0 };
	vVar2.x = (vVar2.x + (SYSTEM::SIN((fVar4 - fVar1)) * fParam1));
	vVar2.y = (vVar2.y + (SYSTEM::COS((fVar4 - fVar1)) * fParam1));
	iVar0 = 0x00000000;
	while (iVar0 <= iParam6)
	{
		vVar3 = { vParam0 };
		vVar3.x = (vVar3.x + (SYSTEM::SIN(fVar4) * fParam1));
		vVar3.y = (vVar3.y + (SYSTEM::COS(fVar4) * fParam1));
		unk_0x4ADCCF23C40DC113(vVar2, vVar3, iParam2, iParam3, iParam4, iParam5);
		vVar2 = { vVar3 };
		fVar4 = (fVar4 + fVar1);
		iVar0++;
	}
}

void func_54(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_55(*(uParam0[0x00000000 /*3*/]), *(uParam0[0x00000001 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_55(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5[8];
	int iVar6;
	
	if (fParam2 == 0f)
	{
		return;
	}
	vVar0 = { func_20(vParam1 - vParam0) };
	vVar1 = { func_56(vVar0, 0f, 0f, 1f) };
	fVar2 = (fParam2 / 2f);
	vVar3 = { vParam0 };
	vVar4 = { vParam1 };
	vVar4.z = vParam0.z;
	vVar5[0x00000000 /*3*/] = { vVar3 - vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[0x00000001 /*3*/] = { vVar3 + vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[0x00000002 /*3*/] = { vVar4 + vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[0x00000003 /*3*/] = { vVar4 - vVar1 * Vector(fVar2, fVar2, fVar2) };
	unk_0x4ADCCF23C40DC113(vVar5[0x00000000 /*3*/], vVar5[0x00000001 /*3*/], uParam3, uParam4, uParam5, uParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000001 /*3*/], vVar5[0x00000002 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000002 /*3*/], vVar5[0x00000003 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000003 /*3*/], vVar5[0x00000000 /*3*/], iParam3, iParam4, iParam5, iParam6);
	iVar6 = 0x00000000;
	while (iVar6 <= 0x00000003)
	{
		vVar5[(0x00000004 + iVar6) /*3*/] = { vVar5[iVar6 /*3*/] };
		vVar5[(0x00000004 + iVar6) /*3*/].f_2 = vParam1.z;
		iVar6++;
	}
	unk_0x4ADCCF23C40DC113(vVar5[0x00000004 /*3*/], vVar5[0x00000005 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000005 /*3*/], vVar5[0x00000006 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000006 /*3*/], vVar5[0x00000007 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000007 /*3*/], vVar5[0x00000004 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000000 /*3*/], vVar5[0x00000004 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000001 /*3*/], vVar5[0x00000005 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000002 /*3*/], vVar5[0x00000006 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000003 /*3*/], vVar5[0x00000007 /*3*/], iParam3, iParam4, iParam5, iParam6);
}

Vector3 func_56(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_57(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (!func_42(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0x00000000;
		iLocal_61[iParam0] = 0x00000000;
		return;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		Local_40[iParam0 /*24*/].f_8 = 0x00000000;
		iLocal_61[iParam0] = 0x00000000;
		return;
	}
	if (iLocal_61[iParam0] == 0x00000000)
	{
		if (unk_0x1C0640BA9A7327B3() > uLocal_60[iParam0])
		{
			iLocal_61[iParam0] = unk_0xD7C553FB028E03E7(vLocal_59[iParam0 /*3*/], vLocal_59[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 0x00000002, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000004);
		}
	}
	else
	{
		iVar0 = unk_0x1EC301670B54C6DE(iLocal_61[iParam0], &iVar4, &uVar2, &uVar3, &iVar1);
		if (iVar0 == 0x00000002)
		{
			Local_40[iParam0 /*24*/].f_8 = 0x00000000;
			if (iVar4 > 0x00000000)
			{
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					if (unk_0xE2F1E99DD161A861(iVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 0x00000001;
					}
				}
			}
			iLocal_61[iParam0] = 0x00000000;
		}
		if (iVar0 == 0x00000000)
		{
			iLocal_61[iParam0] = 0x00000000;
		}
		uLocal_60[iParam0] = unk_0x1C0640BA9A7327B3() + 250;
	}
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_59(int iParam0)
{
	if (!unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 0x00000001;
	}
	if (unk_0x1150BCE24B1630AC(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x1150BCE24B1630AC(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x1150BCE24B1630AC(iParam0, 0x00000002))
	{
		return 0x00000001;
	}
	if (unk_0x1150BCE24B1630AC(iParam0, 0x00000003))
	{
		return 0x00000001;
	}
	if (unk_0x587993B327460A82(iParam0, 0x00000001))
	{
		if (unk_0x74A7D92E3874B5C7(iParam0) == 0x00000006)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_60(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_28(iParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xD7B43F1BE8526992(iParam0))
	{
		return 0x00000001;
	}
	if (unk_0x6CFEA4CFD9C496C8(iParam0))
	{
		return 0x00000001;
	}
	if (!unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iParam0)))
	{
		return 0x00000001;
	}
	if (unk_0x4E861BC5B1EDA7BD(iParam0))
	{
		return 0x00000001;
	}
	if (func_61(iParam0))
	{
		return 0x00000001;
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar0, &vVar1);
	if (unk_0x755FF954DAE327E1((vVar1.x - vVar0.x)) > 3.4f)
	{
		return 0x00000001;
	}
	if (unk_0x755FF954DAE327E1((vVar1.z - vVar0.z)) > 2.9f)
	{
		return 0x00000001;
	}
	if (Global_12B4E)
	{
		if (!unk_0xAFE0D3608EDA7039(iParam0))
		{
			return 0x00000000;
		}
	}
	if (unk_0x587993B327460A82(iParam0, 0x00000001) && !unk_0xD7B43F1BE8526992(iParam0))
	{
		return 0x00000001;
	}
	if (!unk_0x587993B327460A82(iParam0, 0x00000001) && !unk_0xD7B43F1BE8526992(iParam0))
	{
		return 0x00000001;
	}
	if (unk_0x134B62B726CEC8E6(iParam0) == joaat("btype") || unk_0x134B62B726CEC8E6(iParam0) == joaat("btype3"))
	{
		if (((((func_28(unk_0xA30B8362589C124A(iParam0, 0x00000003, 0x00000000)) || func_28(unk_0xA30B8362589C124A(iParam0, 0x00000004, 0x00000000))) || func_28(unk_0xA30B8362589C124A(iParam0, 0x00000005, 0x00000000))) || func_28(unk_0xA30B8362589C124A(iParam0, 0x00000006, 0x00000000))) || func_28(unk_0xA30B8362589C124A(iParam0, 0x00000007, 0x00000000))) || func_28(unk_0xA30B8362589C124A(iParam0, 0x00000008, 0x00000000)))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if (func_62(iVar0))
	{
		return 0x00000001;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0xDD62D560CFE11A27(iParam0, 0x00000002))
		{
			return 0x00000001;
		}
		if (unk_0xDD62D560CFE11A27(iParam0, 0x00000003) && unk_0xDD62D560CFE11A27(iParam0, 0x00000004))
		{
			return 0x00000001;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	if (iVar0 == joaat("peyote") && unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	if (iVar0 == joaat("coquette") && !unk_0xD7B43F1BE8526992(iParam0))
	{
		return 0x00000001;
	}
	if (iVar0 == joaat("manana") && unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	if (iVar0 == joaat("mesa") && !unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	if (iVar0 == joaat("voltic") && unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0xDD62D560CFE11A27(iParam0, 0x00000003) && !unk_0xDD62D560CFE11A27(iParam0, 0x00000007))
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iVar0 == 0x0409D787)
	{
		if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000005) == 0x00000004)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_62(int iParam0)
{
	if (!unk_0x8E39AC3C76C8AA58(iParam0))
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case 0x711D4738:
		case joaat("dune4"):
		case joaat("dune5"):
		case 0xB5EF4C33:
		case 0x586765FB:
		case 0x4ABEBF23:
		case 0xD9F0503D:
		case 0x79DD18AE:
		case 0xAF966F3C:
		case 0xC7E55211:
		case 0xF38C4245:
		case 0xD757D97D:
		case 0x1446590A:
		case 0x97553C28:
		case 0x4C8DBA51:
		case 0x185E2FF3:
		case 0x2C1FEA99:
		case 0x8B213907:
		case 0xB53C6C52:
		case 0x4201A843:
		case 0x6B73A9BE:
		case 0x58F77553:
		case 0x4669D038:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

float func_63(int iParam0, vector3 vParam1, int iParam2)
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
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, iParam2);
}

void func_64()
{
	func_68(&(Local_40[0x00000000 /*24*/]), 0x00000001, "Carwash1", func_69(0x0000009C), 0x0000000F, "", 0x00000000, 4f);
	func_68(&(Local_40[0x00000001 /*24*/]), 0x00000001, "Carwash2", func_69(0x0000009D), 0x0000000F, "", 0x00000000, 4f);
	func_66(&(Local_40[0x00000000 /*24*/]), -1f, 0f, 0f, 360f);
	func_66(&(Local_40[0x00000001 /*24*/]), 0f, -1f, 0f, 360f);
	func_65(&uLocal_41, 0x00000000);
	vLocal_59[0x00000000 /*3*/] = { 47.6f, -1392f, 29.4f };
	vLocal_59[0x00000001 /*3*/] = { -700f, -925.3f, 19f };
}

void func_65(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_10 = iParam1;
	if (!Global_12B4E)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_66(var uParam0, vector3 vParam1, float fParam2)
{
	uParam0->f_C = { func_20(vParam1 * Vector(5f, 5f, 5f)) };
	uParam0->f_F = func_67(fParam2, 0f, 360f);
}

float func_67(float fParam0, float fParam1, float fParam2)
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

void func_68(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { vParam3 };
	uParam0->f_4 = sParam5;
	uParam0->f_9 = iParam4;
	uParam0->f_7 = iParam6;
	uParam0->f_6 = iParam1;
	uParam0->f_B = 0x00000000;
	*uParam0 = 0x00000001;
	uParam0->f_C = { 0f, 0f, 0f };
	uParam0->f_F = 360f;
	if (iParam1 == 0x00000000)
	{
		uParam0->f_A = 2.75f;
	}
	else
	{
		uParam0->f_A = (2.75f * 2f);
	}
	if (fParam7 > 0f)
	{
		uParam0->f_A = fParam7;
	}
}

Vector3 func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_79AA[iVar0 /*23*/][0x00000000 /*3*/];
}

bool func_70(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

void func_71()
{
	func_72(&Local_40);
	func_24(&uLocal_41);
	unk_0x10FAF14A60A0DBE1();
}

void func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_73(var uParam0)
{
	*uParam0 = 0x00000000;
}

