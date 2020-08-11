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
	struct<17> Local_40 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	struct<10> Local_41 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = -1;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<24> Local_49[1];
	struct<24> Local_50[1];
	struct<2> Local_51 = { 0, 5 } ;
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
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 5;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	vector3 vVar1;
	int iVar2[4];
	
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
	vVar1 = { ScriptParam_51.f_1[0x00000000 /*3*/] };
	func_77(vVar1);
	if (unk_0x2EBF608FFE6CA406(0x000000C3))
	{
		func_75();
	}
	if (unk_0x8A22C4C08282BF26(joaat("fairgroundhub")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (Global_28006E)
	{
		if (unk_0x8A22C4C08282BF26(0xCD79434F) == 0x00000000)
		{
			unk_0x8CFFBE74CB5C864A(0xCD79434F);
			while (!unk_0x64EF15C5E09BAD76(0xCD79434F))
			{
				SYSTEM::WAIT(0x00000000);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(0xCD79434F, &ScriptParam_51, 0x00000017, 0x00000590);
		}
		unk_0x10FAF14A60A0DBE1();
	}
	func_67();
	SYSTEM::WAIT(0x00000BB8);
	if (!unk_0xC844350D5D58C99A(iVar2[0x00000000]))
	{
		iVar2[0x00000000] = unk_0x4B72871A3BE7B474(-1643.524f, -1124.681f, 17.4326f, 0.3f, joaat("prop_roller_car_01"), 0x00000001, 0x00000000, 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(iVar2[0x00000001]))
	{
		iVar2[0x00000001] = unk_0x4B72871A3BE7B474(-1645.146f, -1126.613f, 17.4326f, 0.3f, joaat("prop_roller_car_02"), 0x00000001, 0x00000000, 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(iVar2[0x00000002]))
	{
		iVar2[0x00000002] = unk_0x4B72871A3BE7B474(-1646.768f, -1128.545f, 17.4326f, 0.3f, joaat("prop_roller_car_02"), 0x00000001, 0x00000000, 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(iVar2[0x00000003]))
	{
		iVar2[0x00000003] = unk_0x4B72871A3BE7B474(-1648.39f, -1130.478f, 17.4326f, 0.3f, joaat("prop_roller_car_02"), 0x00000001, 0x00000000, 0x00000001);
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < iVar2)
	{
		if (unk_0xC844350D5D58C99A(iVar2[iVar0]))
		{
			unk_0x1E9649458B15960F(iVar2[iVar0], 0x00000001);
			unk_0xE121AE1BBF90E186(iVar2[iVar0], 0x00000001);
		}
		iVar0++;
	}
	while (0x00000001)
	{
		func_66(unk_0x16F2683693E537C9());
		if (func_65(unk_0x16F2683693E537C9(), vVar1, 0x00000000) > (100f + 20f))
		{
			func_75();
		}
		if (!func_64(0x0000000E))
		{
			if (func_63())
			{
				func_75();
			}
			else if (Local_49[0x00000000 /*24*/].f_9 == 0x00000000)
			{
				Local_49[0x00000000 /*24*/].f_9 = 0x0000000F;
				Local_50[0x00000000 /*24*/].f_9 = 0x00000008;
				Local_40.f_9 = 0x00000000;
				Local_41.f_9 = 0x00000000;
			}
		}
		if (func_62(0x00000040) != 0x00000000)
		{
			func_54(0x00000040, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		}
		if (func_1(&Local_49, &Local_40, 0x00000000, 0x00000000, 0x00000001, 0x00000802))
		{
			func_75();
		}
		if (func_1(&Local_50, &Local_41, 0x00000000, 0x00000000, 0x00000001, 0x00000802))
		{
			func_75();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

int func_1(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_A)
	{
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < *uParam0)
		{
			func_49(uParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_D)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			if (func_43(uParam1->f_10))
			{
				iVar0 = 0x00000000;
				while (iVar0 < *uParam0)
				{
					if (func_40(uParam0[iVar0 /*24*/]) && (*uParam0)[iVar0 /*24*/])
					{
						uParam1->f_C = iVar0;
						if ((uParam0[iVar0 /*24*/])->f_7 || (unk_0x2C1AA3A291786CDC() && uParam1->f_10 == 0x00000000))
						{
							func_39(uParam1, 0x00000006);
						}
						else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
						{
							func_39(uParam1, 0x00000008);
						}
						else if (bParam2)
						{
							func_39(uParam1, 0x00000003);
						}
						else if ((uParam0[iVar0 /*24*/])->f_8)
						{
							func_39(uParam1, 0x00000002);
						}
						else if (func_28() < (uParam0[uParam1->f_C /*24*/])->f_9)
						{
							func_39(uParam1, 0x00000001);
						}
						else if (func_23())
						{
							func_39(uParam1, 0x00000007);
						}
						else
						{
							func_39(uParam1, 0x00000004);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_22(uParam1);
			}
			break;
		
		case 0x00000002:
			if (!uParam1->f_9)
			{
				func_20(uParam1, uParam1->f_6);
			}
			if (func_16(uParam0[uParam1->f_C /*24*/]) || (uParam0[iVar0 /*24*/])->f_8 == 0x00000000)
			{
				func_39(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000001:
			if (!uParam1->f_9)
			{
				func_11(uParam1, uParam1->f_2, (uParam0[uParam1->f_C /*24*/])->f_9);
			}
			if (func_16(uParam0[uParam1->f_C /*24*/]) || func_28() >= (uParam0[uParam1->f_C /*24*/])->f_9)
			{
				func_39(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (!uParam1->f_9)
			{
				func_20(uParam1, uParam1->f_1);
			}
			if (func_16(uParam0[uParam1->f_C /*24*/]) || !func_43(uParam1->f_10))
			{
				func_39(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (!uParam1->f_9)
			{
				func_20(uParam1, uParam1->f_3);
			}
			if ((func_16(uParam0[uParam1->f_C /*24*/]) || bParam2 == 0x00000000) || !func_43(uParam1->f_10))
			{
				func_39(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000007:
			if (!uParam1->f_9)
			{
				func_20(uParam1, uParam1->f_5);
			}
			if (func_16(uParam0[uParam1->f_C /*24*/]) || !func_43(uParam1->f_10))
			{
				func_39(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000008:
			if (!uParam1->f_9)
			{
				func_20(uParam1, uParam1->f_4);
			}
			if (func_16(uParam0[uParam1->f_C /*24*/]) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				func_39(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000009:
			if (!uParam1->f_9)
			{
				if (func_10())
				{
					func_20(uParam1, uParam1->f_7);
				}
				else
				{
					func_20(uParam1, uParam1->f_8);
				}
			}
			if (func_16(uParam0[uParam1->f_C /*24*/]) || func_8(uParam0[uParam1->f_C /*24*/]))
			{
				func_39(uParam1, 0x00000000);
				return 0x00000000;
			}
			break;
		
		case 0x00000004:
			unk_0x558EC149EB2BC0A2(0x00000002, 0x00000033);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000065, 0x00000001);
			func_7();
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				func_39(uParam1, 0x00000008);
				return 0x00000000;
			}
			if ((uParam0[uParam1->f_C /*24*/])->f_8)
			{
				func_39(uParam1, 0x00000002);
				return 0x00000000;
			}
			if (func_16(uParam0[uParam1->f_C /*24*/]) || !func_43(uParam1->f_10))
			{
				func_39(uParam1, 0x00000000);
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
			if ((uParam0[uParam1->f_C /*24*/])->f_6 == 0x00000001)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || func_4(unk_0x16F2683693E537C9(), 0x00000000) != 0xFFFFFFFF)
				{
					func_39(uParam1, 0x00000000);
					return 0x00000000;
				}
			}
			if ((uParam0[uParam1->f_C /*24*/])->f_7 || (unk_0x2C1AA3A291786CDC() && uParam1->f_10 == 0x00000000))
			{
				func_39(uParam1, 0x00000006);
				return 0x00000000;
			}
			if (func_23())
			{
				func_39(uParam1, 0x00000007);
				return 0x00000000;
			}
			if (func_28() < (uParam0[uParam1->f_C /*24*/])->f_9)
			{
				func_39(uParam1, 0x00000001);
				return 0x00000000;
			}
			if (!uParam1->f_9)
			{
				func_11(uParam1, *uParam1, (uParam0[uParam1->f_C /*24*/])->f_9);
			}
			if ((uParam0[uParam1->f_C /*24*/])->f_6 == 0x00000001)
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
				if (!func_8(uParam0[uParam1->f_C /*24*/]))
				{
					func_39(uParam1, 0x00000009);
				}
				else
				{
					func_39(uParam1, 0x00000005);
				}
			}
			break;
		
		case 0x00000005:
			func_22(uParam1);
			(uParam0[uParam1->f_C /*24*/])->f_8 = 0x00000000;
			if (!bParam4)
			{
				func_39(uParam1, 0x00000000);
				return 0x00000001;
			}
			unk_0xA37A90C62806D848(0x00000001);
			unk_0x679C321F8CAA2CFA(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 20f, 0x00000000);
			if (!unk_0xEA6BC48857E0AC4C((uParam0[uParam1->f_C /*24*/])->f_5))
			{
				unk_0x92DCE5C81176D2B4((uParam0[uParam1->f_C /*24*/])->f_5);
				while (!unk_0x1FBF08B001C4788A((uParam0[uParam1->f_C /*24*/])->f_5))
				{
					func_7();
					if (func_66(unk_0x16F2683693E537C9()))
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !Global_12B4E)
						{
							func_2(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 2f, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000);
							unk_0xACCB31D58716FE8F(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
						}
					}
					unk_0x558EC149EB2BC0A2(0x00000002, 0x00000033);
					unk_0x92DCE5C81176D2B4((uParam0[uParam1->f_C /*24*/])->f_5);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000065, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000017, 0x00000001);
					SYSTEM::WAIT(0x00000000);
				}
				if (bParam3)
				{
					unk_0x53491B90E4FD0E56(0x000000FA);
				}
				if (unk_0x1FBF08B001C4788A((uParam0[uParam1->f_C /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0x757EF87A33649210())
						{
							if (func_66(unk_0x16F2683693E537C9()))
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
							func_7();
							SYSTEM::WAIT(0x00000000);
						}
					}
					SYSTEM::START_NEW_SCRIPT((uParam0[uParam1->f_C /*24*/])->f_5, iParam5);
					unk_0x5E8C29AE121DF1C7((uParam0[uParam1->f_C /*24*/])->f_5);
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
		if (func_6())
		{
			return 0x00000001;
		}
	}
	if (func_64(0x0000000E))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_6()
{
	if (Global_1AFF7)
	{
		return 0x00000001;
	}
	if (!func_64(0x0000000E) && unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_7()
{
	Global_56C3.f_6 = 0x00000001;
}

int func_8(var uParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0x16F2683693E537C9();
	if (uParam0->f_F == 360f)
	{
		return 0x00000001;
	}
	if (func_77(uParam0->f_C))
	{
		return 0x00000001;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_66(iVar1))
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
	if (func_9(uParam0->f_C, vVar0) > SYSTEM::COS(uParam0->f_F))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_9(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

bool func_10()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		return unk_0x10BA239D3B8FDC7F(iVar0, 0x42B40000);
	}
	return unk_0x10BA239D3B8FDC7F(unk_0x16F2683693E537C9(), 0x42B40000);
}

int func_11(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (func_13(uParam0) || !unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(0x00000001);
		func_12(sParam1, iParam2);
		uParam0->f_E = sParam1;
		uParam0->f_F = iParam2;
		uParam0->f_9 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_12(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

int func_13(var uParam0)
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
		return func_15(uParam0->f_E, uParam0->f_F);
	}
	return func_14(uParam0->f_E);
}

bool func_14(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

bool func_15(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

bool func_16(var uParam0)
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
		return !func_19(unk_0x16F2683693E537C9(), uParam0->f_1, (uParam0->f_A + 2f));
	}
	Var0 = { func_17(uParam0->f_10, 2f) };
	return !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Var0[0x00000000 /*3*/], Var0[0x00000001 /*3*/], Var0.f_7, 0x00000000, 0x00000001, 0x00000000);
}

struct<8> func_17(struct<8> Param0, float fParam1)
{
	struct<8> Var0;
	vector3 vVar1;
	
	Var0 = 0x00000002;
	vVar1 = { func_18(Param0[0x00000001 /*3*/] - Param0[0x00000000 /*3*/]) * Vector(fParam1, fParam1, fParam1) };
	Var0[0x00000000 /*3*/] = { Param0[0x00000000 /*3*/] - vVar1 };
	Var0[0x00000001 /*3*/] = { Param0[0x00000001 /*3*/] + vVar1 };
	Var0.f_7 = (Param0.f_7 + (fParam1 * 2f));
	return Var0;
}

Vector3 func_18(vector3 vParam0)
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

bool func_19(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1) <= (fParam2 * fParam2);
}

int func_20(var uParam0, char* sParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (func_13(uParam0) || !unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(0x00000001);
		func_21(sParam1);
		uParam0->f_E = sParam1;
		uParam0->f_F = 0x00000000;
		uParam0->f_9 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_21(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

void func_22(var uParam0)
{
	if (func_13(uParam0))
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

bool func_23()
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
	if (func_27(iVar0))
	{
		return 0x00000001;
	}
	if (func_24(iVar0, 0x00000003))
	{
		return 0x00000001;
	}
	return !unk_0xDF1306B443CD3D15(iVar0, 0x00000000);
}

int func_24(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_25(iParam0))
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

int func_25(int iParam0)
{
	if (func_26(iParam0))
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

int func_26(int iParam0)
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

int func_27(int iParam0)
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

int func_28()
{
	if (unk_0x8CD06866876216F2())
	{
		return func_36(unk_0xD803B885F5E47A62());
	}
	switch (func_30())
	{
		case 0x00000002:
			return func_29(0x00000002);
		
		case 0x00000000:
			return func_29(0x00000000);
		
		case 0x00000001:
			return func_29(0x00000001);
		
		default:
	}
	return 0x00000000;
}

var func_29(int iParam0)
{
	return Global_E53E[iParam0];
}

int func_30()
{
	func_31();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_31()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_34(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_33(unk_0x16F2683693E537C9());
			if (func_32(iVar0) && (!func_64(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_32(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_32(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_34(int iParam0)
{
	if (func_32(iParam0))
	{
		return func_35(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_35(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = func_37(iParam0);
	return uVar0;
}

int func_37(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return unk_0x62F8C2EDB26F57B3(0xFFFFFFFF);
		}
		else if (func_38(iParam0))
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

int func_38(int iParam0)
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

void func_39(var uParam0, int iParam1)
{
	uParam0->f_D = iParam1;
	func_22(uParam0);
}

bool func_40(var uParam0)
{
	func_66(unk_0x16F2683693E537C9());
	if (*uParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_42(0x00000000))
	{
		return 0x00000000;
	}
	if (func_41())
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
	return func_19(unk_0x16F2683693E537C9(), uParam0->f_1, uParam0->f_A);
}

bool func_41()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

bool func_42(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

int func_43(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		if (func_63())
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
	if (func_41())
	{
		return 0x00000000;
	}
	if (Global_F042)
	{
		return 0x00000000;
	}
	if (func_42(0x00000000))
	{
		return 0x00000000;
	}
	if (func_48(0x00000000))
	{
		return 0x00000000;
	}
	if (func_44(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_44(int iParam0)
{
	if (func_47(iParam0))
	{
		return 0x00000001;
	}
	if (func_45(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_46(iParam0, 0x00000009);
	}
	return 0x00000000;
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_47(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

int func_48(int iParam0)
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

void func_49(var uParam0)
{
	if (uParam0->f_B == 0x00000001)
	{
		func_51(&(uParam0->f_10), 0x000000FF, 0x00000064, 0x00000000, 0x00000064);
	}
	else
	{
		func_50(uParam0->f_1, uParam0->f_A, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF, 0x00000020);
	}
}

void func_50(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_51(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_52(*(uParam0[0x00000000 /*3*/]), *(uParam0[0x00000001 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_52(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	vVar0 = { func_18(vParam1 - vParam0) };
	vVar1 = { func_53(vVar0, 0f, 0f, 1f) };
	fVar2 = (fParam2 / 2f);
	vVar3 = { vParam0 };
	vVar4 = { vParam1 };
	vVar4.z = vParam0.z;
	vVar5[0x00000000 /*3*/] = { vVar3 - vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[0x00000001 /*3*/] = { vVar3 + vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[0x00000002 /*3*/] = { vVar4 + vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[0x00000003 /*3*/] = { vVar4 - vVar1 * Vector(fVar2, fVar2, fVar2) };
	unk_0x4ADCCF23C40DC113(vVar5[0x00000000 /*3*/], vVar5[0x00000001 /*3*/], iParam3, iParam4, iParam5, iParam6);
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

Vector3 func_53(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_54(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 0x000000C6)
	{
		if (Global_12B4E)
		{
			Global_2537E2.f_4B.f_E3[iParam0] = iParam1;
		}
		else
		{
			Global_1B416.f_1C58.f_E3[iParam0] = iParam1;
		}
		Global_95FE[iParam0] = iParam2;
		Global_96C5[iParam0] = 0x00000001;
		func_57(iParam0, bParam3, iParam4, 0x00000000);
		func_55(iParam0, iParam1);
	}
}

void func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x0000000C:
			if (iParam1 == 0x00000000)
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0x00000001, 0x00000000);
			}
			break;
		
		case 0x00000047:
			if (iParam1 != 0x00000001)
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0x00000001, 0x00000000);
			}
			break;
		
		case 0x00000041:
			if (iParam1 == 0x00000001)
			{
				func_56(0x00000000, 0x00000000);
			}
			else
			{
				func_56(0x00000000, 0x00000001);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == 0x00000001)
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0x00000000, 0x00000000);
			}
			break;
		
		case 0x000000AE:
			if (iParam1 == 0x00000002)
			{
				unk_0x250BB9A851121D75("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 0x00000025:
			if (iParam1 == 0x00000001)
			{
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0x00000000);
			}
			break;
	}
}

void func_56(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_1AEC4, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1AEC4, iParam0);
	}
	Global_1AEC3 = 0x00000001;
}

bool func_57(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_193787 = 0x00000001;
	bVar0 = 0x00000000;
	Var3.f_4 = 0x00000003;
	Var3.f_8 = 0x00000003;
	Var3.f_40 = 0x00000003;
	Var3.f_4B = 0x00000003;
	Var3.f_5B = 0x00000003;
	func_61(&Var3, iParam0);
	if (func_58())
	{
		iVar1 = Global_1B416.f_1C58.f_E3[iParam0];
	}
	else
	{
		iVar1 = Global_2537E2.f_4B.f_E3[iParam0];
	}
	iVar2 = Global_978C[iParam0];
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !bParam3)
	{
		Global_193787 = 0x00000001;
	}
	else
	{
		bVar5 = 0x00000001;
		if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != unk_0x12AB0310C2281427("standard_global_reg"))
		{
			if (iParam2 == 0x00000000)
			{
				if (Global_95FE[iParam0] && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Var3, 0x00000001) < 200f)
				{
					bVar5 = 0x00000000;
					Global_193787 = 0x00000001;
				}
				if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0x946BFA82EB988C81(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x757EF87A33649210())
					{
						bVar5 = 0x00000000;
						Global_193787 = 0x00000001;
					}
				}
			}
		}
		if (unk_0xEB880D98B5988D0C() && (!unk_0x991B1F0980C62628() || unk_0x00A15D69BCAA5267() != 0x00000005))
		{
			bVar5 = 0x00000000;
			Global_193787 = 0x00000001;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0x00000000:
					if (iVar1 == 0x00000002)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0x00000000)
						{
							unk_0x77ADAEFF81EAE1E4(Var3, 10f, Var3.f_4[iVar1], 0x00000000);
						}
						if (Var3.f_4[iVar2] != 0x00000000)
						{
							unk_0x3124890FDA752DE4(Var3, 10f, Var3.f_4[iVar2], 0x00000001);
						}
						Global_9C38[iParam0] = 0x00000001;
					}
					bVar0 = 0x00000001;
					break;
				
				case 0x00000001:
					if (iVar1 == 0x00000000)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000001 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000002 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000000 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x2404539258C5376B(&(Var3.f_22));
								Global_193787 = 0x00000001;
							}
						}
					}
					else if (iVar1 == 0x00000001)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_22));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000000 /*8*/]));
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000002 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000001 /*8*/]));
							}
						}
					}
					else if (iVar1 == 0x00000002)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_22));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000000 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000001 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000002 /*8*/]));
							}
						}
					}
					Global_9B71[iParam0] = 0x00000001;
					Global_9C38[iParam0] = 0x00000001;
					bVar0 = 0x00000001;
					break;
				
				case 0x00000002:
					iVar6 = unk_0x0D1736C2E221BCEA(Var3, &(Var3.f_2A));
					if (iVar6 != 0x00000000)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_32)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_32)))
							{
								unk_0xFE3926923F5430AD(iVar6, &(Var3.f_32));
							}
						}
						if (iVar1 == 0x00000000)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
						}
						else if (iVar1 == 0x00000001)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
						}
						else if (iVar1 == 0x00000002)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xF1ABF0D4BF2D0A54(iVar6);
						}
					}
					Global_9C38[iParam0] = 0x00000001;
					Global_9B71[iParam0] = 0x00000001;
					bVar0 = 0x00000001;
					break;
				
				case 0x00000003:
					if (unk_0x0EB28750412C3A5A(Var3, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001) < 250f)
					{
						uVar4 = unk_0x57651D42225429CC(Var3, 25f, &(Var3.f_8[0x00000000 /*8*/]));
						if (unk_0xB39672D8C1F6BB48(uVar4))
						{
							if (iVar1 == 0x00000000)
							{
								unk_0xCADC8175C61F28E5(uVar4, 0x00000003);
								Global_9C38[iParam0] = 0x00000001;
								bVar0 = 0x00000001;
							}
							else if (iVar1 == 0x00000001)
							{
								if ((unk_0xD92EF3526CDA283F(uVar4) != 0x00000006 && unk_0xD92EF3526CDA283F(uVar4) != 0x00000007) && unk_0xD92EF3526CDA283F(uVar4) != 0x00000008)
								{
									unk_0xCADC8175C61F28E5(uVar4, 0x0000000A);
									Global_9C38[iParam0] = 0x00000001;
									bVar0 = 0x00000001;
								}
							}
							else if (iVar1 == 0x00000002)
							{
								bVar0 = 0x00000001;
							}
						}
					}
					break;
				
				case 0x00000004:
					if (iVar1 == 0x00000000)
					{
						unk_0x9E5FA221FDB148CD(Var3, 50f, Var3.f_4[0x00000001], Var3.f_4[0x00000000], 0x00000000);
						unk_0x0674E58A79778E99(&(Global_9500[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					}
					else if (iVar1 == 0x00000001)
					{
						unk_0x2192A5725EC5808C(Var3, 50f, Var3.f_4[0x00000000], Var3.f_4[0x00000001], 0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_9500[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					}
					bVar0 = 0x00000001;
					break;
			}
			if (bVar0)
			{
				Global_96C5[iParam0] = 0x00000000;
				Global_978C[iParam0] = iVar1;
				if (!func_58())
				{
					if (!Global_99E1[iParam0])
					{
						Global_99E1[iParam0] = 0x00000001;
						Global_9AA8++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_58()
{
	if ((func_60() == 0xFFFFFFFF || func_60() == 0x000003E7) && !func_59() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_59()
{
	return Global_7831;
}

int func_60()
{
	return Global_7830;
}

int func_61(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		uParam0->f_4[iVar0] = 0x00000000;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_40[iVar0] = 0x00000000;
		uParam0->f_4B[iVar0] = 0x00000000;
		uParam0->f_5B[iVar0] = 0x00000000;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0x00000000;
	uParam0->f_21 = 0x00000000;
	StringCopy(&(uParam0->f_22), "", 32);
	StringCopy(&(uParam0->f_2A), "", 32);
	StringCopy(&(uParam0->f_32), "", 32);
	uParam0->f_3A = { 0f, 0f, 0f };
	uParam0->f_3D = { 0f, 0f, 0f };
	uParam0->f_44 = { 0f, 0f, 0f };
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_4A = 0f;
	uParam0->f_4F = { 0f, 0f, 0f };
	uParam0->f_52 = { 0f, 0f, 0f };
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0x00000003:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0x00000004:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0x00000000:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 0x00000001:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 0x00000002:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_3A = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_3D = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_40[0x00000000] = 0x00000001;
			uParam0->f_40[0x00000001] = 0x00000000;
			break;
		
		case 0x00000005:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 0x000000C4:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			break;
		
		case 0x00000006:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 0x00000007:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x00000008:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x00000009:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x0000000A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x0000000B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 0x0000000C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "sunkcargoship", 32);
			uParam0->f_44 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_47 = { 190.75f, 31.25f, 21f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			break;
		
		case 0x0000000D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 0x0000000E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "smboat", 32);
			break;
		
		case 0x0000000F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 0x00000010:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000011:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000012:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000013:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000014:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 0x00000015:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_3A = { 814f, -1750f, 20f };
			uParam0->f_3D = { 790f, -1899f, 35f };
			uParam0->f_40[0x00000000] = 0x00000001;
			uParam0->f_40[0x00000001] = 0x00000000;
			uParam0->f_40[0x00000002] = 0x00000000;
			break;
		
		case 0x00000016:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 0x00000017:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 0x00000018:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 0x00000019:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 0x0000001A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 0x0000001B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x0000001C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x0000001D:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = joaat("dt1_05_build1_h");
			uParam0->f_4[0x00000001] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x0000001E:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = 0xF9526184;
			uParam0->f_4[0x00000001] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x0000001F:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = 0xF4E5BC6D;
			uParam0->f_4[0x00000001] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 0x00000020:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x00000021:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x00000022:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x00000023:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 0x00000024:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 0x00000025:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_4F = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_52 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_55 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_58 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			break;
		
		case 0x00000026:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 0x00000027:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 0x00000028:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 0x00000029:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 0x0000002A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 0x0000002B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 0x0000002C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 0x0000002D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 0x0000002E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 0x0000002F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 0x00000030:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_22), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_44 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_47 = { 13.6f, 20f, 8.9f };
			uParam0->f_4A = 48f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000001;
			break;
		
		case 0x00000031:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 0x00000032:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_4F = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_52 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 0x00000037:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 0x00000033:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "farm_burnt", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 0x00000034:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000035:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000036:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000038:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x00000039:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 0x0000003D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 0x0000003E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 0x0000003F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 0x00000040:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 0x00000041:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 0x00000042:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 0x00000043:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 0x00000044:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 0x00000045:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 0x00000046:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000047:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000048:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000049:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x0000004A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x0000004B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x0000004C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x00000069:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x0000006A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 0x0000006B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 0x0000006C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 0x0000006D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 0x0000006E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 0x0000006F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 0x00000070:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 0x0000004D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_55 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_58 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			uParam0->f_5B[0x00000002] = 0x00000000;
			break;
		
		case 0x0000004E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_21 = 0x00000000;
			break;
		
		case 0x0000004F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 0x00000050:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 0x00000071:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 0x00000072:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 0x00000073:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 0x00000057:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 0x00000058:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_4F = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_52 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 0x00000059:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 0x0000005A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 0x0000005B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 0x0000005E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 0x0000005F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_3A = { 1206.8f, 1803f, 43.9f };
			uParam0->f_3D = { 1329f, 2060.4f, 143.9f };
			uParam0->f_40[0x00000000] = 0x00000000;
			uParam0->f_40[0x00000001] = 0x00000001;
			uParam0->f_40[0x00000002] = 0x00000000;
			break;
		
		case 0x00000068:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 0x00000067:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 0x00000066:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 0x0000005C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 0x0000005D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 0x00000076:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 0x00000074:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 0x00000075:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x00000077:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x00000078:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x0000007A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 0x00000079:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x0000007B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x0000007C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x000000AA:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x000000AB:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 0x0000007D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 0x000000A4:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A5:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A6:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A7:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A8:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A9:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x0000007E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x0000007F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000080:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000081:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000082:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000083:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000084:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000085:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000086:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x000000B3:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_44 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_47 = { 5.5f, 3f, 2f };
			uParam0->f_4A = -10f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			break;
		
		case 0x000000AE:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_32), "csr_inMission", 32);
			uParam0->f_21 = 0x00000000;
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000AF:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_44 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_47 = { 2.5f, 3f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B0:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_44 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_47 = { 3f, 1f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B1:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_44 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_47 = { 1f, 3f, 2f };
			uParam0->f_4A = -45f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B2:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000AD:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "fakeint", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000B4:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 0x000000B5:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_2A), "v_hospital", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 0x00000087:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000088:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000089:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000090:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000091:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000092:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000093:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "vb_30_murder", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 0x00000094:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 0x00000095:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 0x00000096:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 0x00000097:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ufo", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 0x00000098:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ufo_eye", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 0x00000099:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x0000009A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x0000009B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x000000AC:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_2A), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 0x000000B6:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_4F = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_52 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_55 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_58 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			uParam0->f_5B[0x00000002] = 0x00000001;
			break;
		
		case 0x000000B7:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_4F = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_52 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 0x000000B8:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_4F = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_52 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 0x000000B9:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_4F = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_52 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 0x000000BB:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_4F = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_52 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 0x000000BA:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_4F = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_52 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 0x000000BC:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_4F = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_52 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 0x00000051:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 0x00000052:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 0x00000053:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 0x00000054:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 0x00000055:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 0x00000056:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 0x000000BD:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 0x000000BE:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 0x000000BF:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C0:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C1:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C2:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 0x00000061:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 0x00000062:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 0x00000063:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 0x00000064:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 0x00000065:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 0x000000C3:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 0x000000C5:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 0x0000009C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A3:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A1:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A2:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A0:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x00000060:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 0x00000001;
}

int func_62(int iParam0)
{
	if (iParam0 != 0x000000C6)
	{
		if (Global_12B4E)
		{
			return Global_2537E2.f_4B.f_E3[iParam0];
		}
		else
		{
			return Global_1B416.f_1C58.f_E3[iParam0];
		}
	}
	return 0x00000000;
}

int func_63()
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_64(int iParam0)
{
	return Global_A1D7 == iParam0;
}

float func_65(int iParam0, vector3 vParam1, int iParam2)
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

bool func_66(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

void func_67()
{
	if (func_64(0x0000000E))
	{
		func_73(&(Local_50[0x00000000 /*24*/]), 0x00000000, "Bigwheel", func_74(0x0000009E), 0x00000000, "", 0x00000000, 6.2f);
		func_68(&(Local_49[0x00000000 /*24*/]), 0x00000000, "Rollercoaster", -1651.641f, -1134.325f, 21.90398f, -1640.984f, -1121.59f, 16.50313f, 6.75f, 0x00000000, "", 0x00000000);
	}
	else
	{
		func_73(&(Local_50[0x00000000 /*24*/]), 0x00000000, "Bigwheel", func_74(0x0000009E), 0x00000008, "", 0x00000000, 6.2f);
		func_68(&(Local_49[0x00000000 /*24*/]), 0x00000000, "Rollercoaster", -1651.641f, -1134.325f, 21.90398f, -1640.984f, -1121.59f, 16.50313f, 6.75f, 0x0000000F, "", 0x00000000);
	}
	Local_40 = "LEV_RIDEHLP";
	Local_40.f_1 = "LEV_BROKEN";
	Local_40.f_2 = "LEV_NOMONEY";
	Local_40.f_4 = "LEV_WANTED";
	Local_40.f_3 = 0x00000000;
	Local_40.f_10 = 0x00000001;
	Local_41 = "BIGW_RIDEHLP";
	Local_41.f_1 = "BIGW_BROKEN";
	Local_41.f_2 = "BIGW_NOMONEY";
	Local_41.f_4 = "BIGW_WANTED";
	Local_41.f_3 = 0x00000000;
	Local_40.f_10 = 0x00000001;
}

void func_68(var uParam0, int iParam1, char* sParam2, vector3 vParam3, vector3 vParam4, float fParam5, int iParam6, char* sParam7, int iParam8)
{
	uParam0->f_5 = sParam2;
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_B = 0x00000001;
	uParam0->f_A = 0f;
	*uParam0 = 0x00000001;
	uParam0->f_C = { 0f, 0f, 0f };
	uParam0->f_F = 360f;
	func_72(&(uParam0->f_10), vParam3, vParam4, fParam5);
	uParam0->f_1 = { func_69(uParam0->f_10) };
}

Vector3 func_69(vector3[] vParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_70(vParam0[0x00000000 /*3*/], vParam0[0x00000001 /*3*/], 0.5f, 0x00000001);
}

Vector3 func_70(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		fParam2 = func_71(fParam2, 0f, 1f);
	}
	return vParam0 + Vector(fParam2, fParam2, fParam2) * vParam1 - vParam0;
}

float func_71(float fParam0, float fParam1, float fParam2)
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

void func_72(var uParam0, vector3 vParam1, vector3 vParam2, var uParam3)
{
	*(uParam0[0x00000000 /*3*/]) = { vParam1 };
	*(uParam0[0x00000001 /*3*/]) = { vParam2 };
	uParam0->f_7 = uParam3;
}

void func_73(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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

Vector3 func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_79AA[iVar0 /*23*/][0x00000000 /*3*/];
}

void func_75()
{
	func_76(&(Local_50[0x00000000 /*24*/]));
	func_76(&(Local_49[0x00000000 /*24*/]));
	func_22(&Local_40);
	func_22(&Local_41);
	unk_0x10FAF14A60A0DBE1();
}

void func_76(var uParam0)
{
	*uParam0 = 0x00000000;
}

int func_77(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

