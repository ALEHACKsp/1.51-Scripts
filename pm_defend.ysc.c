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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<91> Local_36 = { 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_37 = 0;
	var uLocal_38 = 3;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 3;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	struct<122> Local_53[5];
	var uLocal_54 = 3;
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
	iLocal_20 = 0x00000003;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	unk_0x7798376279BB5369(0x00000001);
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		if (!unk_0xEA6BC48857E0AC4C(Local_36.f_58))
		{
			unk_0xC92DB9682A650680(Local_36.f_58);
		}
		func_41(0x00000002);
		func_37(&Local_36);
	}
	while (0x00000001)
	{
		if (iLocal_52 > unk_0x1C0640BA9A7327B3())
		{
			unk_0x9501364A300048C6();
		}
		switch (Local_36)
		{
			case 0x00000000:
				func_27();
				break;
			
			case 0x00000001:
				func_4();
				break;
			
			case 0x00000002:
				func_1();
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	switch (Local_36.f_1)
	{
		case 0x00000001:
			func_3();
			break;
		
		case 0x00000002:
			func_2();
			break;
	}
}

void func_2()
{
	if (!unk_0xEA6BC48857E0AC4C(Local_36.f_58))
	{
		unk_0xC92DB9682A650680(Local_36.f_58);
	}
	func_41(0x00000002);
	func_37(&Local_36);
}

void func_3()
{
	if (!unk_0xEA6BC48857E0AC4C(Local_36.f_57))
	{
		unk_0xC92DB9682A650680(Local_36.f_57);
	}
	func_41(0x00000001);
	func_37(&Local_36);
}

void func_4()
{
	switch (Local_36.f_3)
	{
		case 0x00000009:
			unk_0x10FEEAFF01E32639(1435f, -2385f, 1690f, -1885f);
			break;
	}
	switch (Local_36.f_53)
	{
		case 0x00000000:
			if (func_26(&Local_36))
			{
				Local_36.f_44 = 0x00000000;
				Local_36.f_53++;
			}
			break;
		
		case 0x00000001:
			if (func_25(&Local_36))
			{
				Local_36.f_44 = 0x00000000;
				Local_36.f_53++;
			}
			break;
		
		case 0x00000002:
			func_23();
			func_22();
			func_21(&Local_53);
			func_6(&Local_53);
			break;
	}
	if (Local_36.f_46 >= Local_36.f_45)
	{
		Local_36 = 0x00000002;
		Local_36.f_1 = 0x00000001;
	}
	if (unk_0x0EB28750412C3A5A(func_5(Local_36.f_3), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001) > 300f)
	{
		Local_36 = 0x00000002;
		Local_36.f_1 = 0x00000002;
	}
}

Vector3 func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000002:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 0x00000009:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 0x0000000A:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 0x00000001:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 0x00000004:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 0x00000003:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0x00000000:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 0x00000008:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 0x00000005:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 0x00000006:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 0x00000007:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 0x0000000B:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 0x0000000C:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 0x0000000D:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 0x0000000E:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

void func_6(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar3;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000005)
	{
		switch ((*iParam0)[iVar1 /*122*/])
		{
			case 0x00000001:
				switch ((iParam0[iVar1 /*122*/])->f_1)
				{
					case 0x00000000:
						if (Local_36.f_46 >= (iParam0[iVar1 /*122*/])->f_74)
						{
							(iParam0[iVar1 /*122*/])->f_1 = 0x00000001;
						}
						break;
					
					case 0x00000001:
						if (func_18(&vVar2, &uVar3))
						{
							(iParam0[iVar1 /*122*/])->f_1 = 0x00000002;
							(iParam0[iVar1 /*122*/])->f_76 = { vVar2 };
							(iParam0[iVar1 /*122*/])->f_79 = uVar3;
						}
						break;
					
					case 0x00000002:
						if (func_16(iParam0, iVar1))
						{
							if (func_13(iParam0, iVar1))
							{
								func_12(iParam0, iVar1);
								(iParam0[iVar1 /*122*/])->f_1 = 0x00000003;
							}
						}
						break;
					
					case 0x00000003:
						iVar0 = 0x00000000;
						while (iVar0 < 0x00000004)
						{
							if (unk_0xC844350D5D58C99A((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/]))
							{
								if (!unk_0x437347B10A200C4B((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000000))
								{
									switch ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9)
									{
										case 0x00000001:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 == 0x00000000)
											{
												unk_0xB35CCEC0D4946813((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000000);
												unk_0x3CC33E4E9CE523F4((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000002);
												unk_0xAFF39FB306F8E232((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000001, unk_0x405E212DDE472467((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000000));
												unk_0xAFF39FB306F8E232((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000003, !unk_0x405E212DDE472467((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000000));
												if ((iParam0[iVar1 /*122*/])->f_75 == iVar0)
												{
													unk_0x67415F01577A142E((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x0000000D, 10f);
													unk_0xAFF39FB306F8E232((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x0000001F, 0x00000001);
												}
												if ((iParam0[iVar1 /*122*/])->f_75 != iVar0)
												{
													unk_0x05FE17D2660001CF((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], (iParam0[iVar1 /*122*/])->f_2[(iParam0[iVar1 /*122*/])->f_75 /*20*/], 0f, 0f, 0f, 5f, 0x00000000);
												}
												unk_0x7C8478BF70C1E072((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0x00000000);
												unk_0x11AD11297DC58CC7((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000000);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_11 = unk_0x1C0640BA9A7327B3();
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 = 0x00000001;
											}
											if ((iParam0[iVar1 /*122*/])->f_75 != iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_11 != 0x00000000)
												{
													if ((unk_0x1C0640BA9A7327B3() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_11) > 0x00002710)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 = 0x00000000;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 0x00000003;
													}
												}
											}
											if ((iParam0[iVar1 /*122*/])->f_75 == iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_11 != 0x00000000)
												{
													if ((unk_0x1C0640BA9A7327B3() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_11) > 0x000061A8 || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000001), 0x00000001) < 25f)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 = 0x00000000;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 0x00000003;
													}
												}
											}
											break;
										
										case 0x00000003:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 == 0x00000000)
											{
												unk_0xB3F77607A42FF835((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000000);
												unk_0x3CC33E4E9CE523F4((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000002);
												unk_0xAFF39FB306F8E232((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000001, 0x00000000);
												unk_0xAFF39FB306F8E232((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000003, 0x00000001);
												unk_0x7C8478BF70C1E072((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0x00000000);
												unk_0x11AD11297DC58CC7((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0x00000000);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 = 0x00000001;
											}
											break;
									}
									func_10(iParam0, iVar1, iVar0, Local_36.f_54);
								}
								else
								{
									func_8(iParam0, iVar1, iVar0);
									func_7(&Local_36);
								}
							}
							iVar0++;
						}
						break;
				}
				break;
		}
		iVar1++;
	}
}

void func_7(var uParam0)
{
	uParam0->f_46++;
}

void func_8(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC844350D5D58C99A((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]))
	{
		if (!unk_0x437347B10A200C4B((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], 0x00000000))
		{
			unk_0xFADC0A217229F6B5((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]));
		func_9(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1));
	}
}

void func_9(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
		bVar0 = 0x00000001;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_1));
		bVar0 = 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_7))
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_7, 0x00000000))
		{
			if (unk_0x3C583F939C836C5C(iParam0->f_7))
			{
				unk_0xA29E145196B9739D(iParam0->f_7, 0x00000000);
			}
		}
		bVar0 = 0x00000001;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_10(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_11((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], &((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1), 0xFFFFFFFF, 0x00000000, !bParam3, 0x00000000, 300f, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
}

int func_11(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0x00000000)
	{
		iParam3 = unk_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x3C583F939C836C5C(iParam0))
		{
			if (iParam8 == 0xFFFFFFFF)
			{
				unk_0xA29E145196B9739D(iParam0, 0x00000001);
			}
			else
			{
				unk_0xE23B4401F4442A7E(iParam0, 0x00000001, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x03E7282D82C7B3B6(iParam0, iParam2);
			unk_0xF8BE15A7B963DB56(iParam0, fParam6);
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x2A065371C9D96655(*uParam1, 0x00000007);
			}
		}
		if (!iParam9 == 0xFFFFFFFF)
		{
			unk_0xFABCB9076292E3BA(iParam0, iParam9);
		}
		unk_0xF947FFD8DA795A7F(iParam0, bParam4);
		unk_0xB46A36D2F28E60DE(iParam0, iParam5);
		*uParam1 = unk_0x380B922C6BB1F223(iParam0);
		if (!iParam9 == 0xFFFFFFFF)
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!iParam8 == 0xFFFFFFFF)
				{
					unk_0x61755AC17D8F538E(*uParam1, iParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						unk_0xD06AC7C87A34A6AD(sParam7);
					}
					else
					{
						unk_0x6B012227B3921E18(sParam7);
					}
					unk_0x4FA118D51B4F2476(*uParam1);
				}
				unk_0x2A065371C9D96655(*uParam1, 0x00000007);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 0x00000002))
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_6), 0x00000002);
			}
		}
		if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			uParam1->f_1 = unk_0x498C79575FE5BBCE(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 0x00000003))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!iParam8 == 0xFFFFFFFF)
					{
						unk_0x61755AC17D8F538E(uParam1->f_1, iParam8);
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam7))
					{
						unk_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							unk_0xD06AC7C87A34A6AD(sParam7);
						}
						else
						{
							unk_0x6B012227B3921E18(sParam7);
						}
						unk_0x4FA118D51B4F2476(uParam1->f_1);
					}
					unk_0x2A065371C9D96655(uParam1->f_1, 0x00000007);
					unk_0x5D96D8530B3D0904(&(uParam1->f_6), 0x00000003);
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0x00000000;
				unk_0x0674E58A79778E99(&(uParam1->f_6), 0x00000003);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0x00000000;
			unk_0x0674E58A79778E99(&(uParam1->f_6), 0x00000003);
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_12(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < (iParam0[iParam1 /*122*/])->f_6F)
	{
		(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 0x00000001;
		iVar0++;
	}
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0[iParam1 /*122*/])->f_71 == (iParam0[iParam1 /*122*/])->f_6F)
	{
		return 0x00000001;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_71;
		if (!unk_0xC844350D5D58C99A((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/]))
		{
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_A = { (iParam0[iParam1 /*122*/])->f_76 };
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_D = (iParam0[iParam1 /*122*/])->f_79;
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/] = func_15(iParam0, iParam1, iVar0);
			func_14((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/], Local_36, (iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_F);
			(iParam0[iParam1 /*122*/])->f_71++;
		}
	}
	return 0x00000000;
}

void func_14(int iParam0, struct<61> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, int iParam32)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			iVar0 = Param1.f_3C[unk_0x09AC81E49EA267F7(0x00000000, 0x00000003)];
			if (iParam32 != 0x00000000)
			{
				iVar0 = iParam32;
			}
			unk_0x262EF6C6306BEA6C(iParam0, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x5745EA6329A91E29(iParam0, iVar0, 0x00000001);
			unk_0xDAB3108F02A4255A(iParam0, 0x00000001, iVar0);
		}
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x36F2404464202779(0x0000001A, Local_36.f_35[0x00000000], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_A, (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_D, 0x00000001, 0x00000001);
	unk_0x1365063FA6365BE8(iVar0, 0x00000001);
	unk_0x20EC6650986ACDC7(iVar0, 0x00000001);
	unk_0x6DF7BF67E86AAE86(iVar0, Local_36.f_34);
	unk_0xE2F0767314863BD8(iVar0, 0x00000001, 0x00000000);
	unk_0xAFF39FB306F8E232(iVar0, 0x00000005, 0x00000001);
	unk_0x26A6B1686E33113F(iVar0, 0x00000001);
	unk_0x4E885A246A9D983A(iVar0, 0x0000002A, 0x00000001);
	unk_0x4E885A246A9D983A(iVar0, 0x00000084, 0x00000001);
	unk_0x67415F01577A142E(iVar0, 0x0000000C, 30f);
	unk_0x298903DD96203C2C(iVar0, 0x00000005);
	if ((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_12 != 0xFFFFFFFF && (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_13 != 0xFFFFFFFE)
	{
		iVar1 = (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_12;
		if (unk_0xC844350D5D58C99A((iParam0[iParam1 /*122*/])->f_53[iVar1 /*9*/]))
		{
			if (!unk_0x437347B10A200C4B((iParam0[iParam1 /*122*/])->f_53[iVar1 /*9*/], 0x00000000))
			{
				unk_0xF821F915BC24D246(iVar0, (iParam0[iParam1 /*122*/])->f_53[iVar1 /*9*/], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_13);
			}
		}
	}
	iLocal_52 = unk_0x1C0640BA9A7327B3() + 1000;
	return iVar0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0[iParam1 /*122*/])->f_72 == (iParam0[iParam1 /*122*/])->f_70)
	{
		return 0x00000001;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_72;
		if (!unk_0xC844350D5D58C99A((iParam0[iParam1 /*122*/])->f_53[iVar0 /*9*/]))
		{
			(iParam0[iParam1 /*122*/])->f_53[iVar0 /*9*/].f_1 = { (iParam0[iParam1 /*122*/])->f_76 };
			(iParam0[iParam1 /*122*/])->f_53[iVar0 /*9*/].f_7 = (iParam0[iParam1 /*122*/])->f_79;
			(iParam0[iParam1 /*122*/])->f_53[iVar0 /*9*/] = func_17(iParam0, iParam1, iVar0);
			(iParam0[iParam1 /*122*/])->f_72++;
		}
	}
	return 0x00000000;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = unk_0x122AAB0B1D6F55AD((iParam0[iParam1 /*122*/])->f_53[iParam2 /*9*/].f_8, (iParam0[iParam1 /*122*/])->f_53[iParam2 /*9*/].f_1, (iParam0[iParam1 /*122*/])->f_53[iParam2 /*9*/].f_7, 0x00000001, 0x00000001, 0x00000000);
	unk_0x67E3D6EA8D96FD85(iVar0, 0x00000000);
	return iVar0;
}

int func_18(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
	vVar1 = { Local_36.f_8[iVar0 /*3*/] };
	if (func_19(vVar1, 0x40C00000, 0x3F800000, 0x3F800000, 0x40A00000, 0x00000001, 0x42F00000, 0x00000001, 0x41C80000))
	{
		*uParam0 = { vVar1 };
		*uParam1 = Local_36.f_27[iVar0];
		return 0x00000001;
	}
	return 0x00000000;
}

int func_19(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, float fParam8)
{
	if (func_20(vParam0))
	{
		return 0x00000000;
	}
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
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam3, 0x00000000))
		{
			return 0x00000000;
		}
	}
	if (iParam7 == 0x00000001)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 1.5f) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	if (iParam5 == 0x00000001)
	{
		if (fParam4 > 0f)
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vParam0, 0x00000001) <= (fParam6 + fParam4))
			{
				if (unk_0x8E28E832BEAC3DCE(vParam0, fParam4))
				{
					return 0x00000000;
				}
			}
		}
	}
	if (fParam8 > 0f)
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vParam0, 0x00000001) < fParam8)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_20(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		switch ((*iParam0)[iVar0 /*122*/])
		{
			case 0x00000000:
				iVar1 = 0x00000000;
				while (iVar1 < 0x00000004)
				{
					if (unk_0xC844350D5D58C99A((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/]))
					{
						if (!unk_0x437347B10A200C4B((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0x00000000))
						{
							switch ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9)
							{
								case 0x00000002:
									if (unk_0x4734A6196B611C3B((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0x00000000) || Local_36.f_54 == 0x00000001)
									{
										Local_36.f_54 = 0x00000001;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_10 = 0x00000000;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9 = 0x00000003;
									}
									break;
								
								case 0x00000003:
									if ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_10 == 0x00000000)
									{
										unk_0x7C8478BF70C1E072((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 150f, 0x00000000);
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_10 = 0x00000001;
									}
									break;
							}
							func_10(iParam0, iVar0, iVar1, Local_36.f_54);
						}
						else
						{
							func_8(iParam0, iVar0, iVar1);
							func_7(&Local_36);
						}
					}
					iVar1++;
				}
				break;
		}
		iVar0++;
	}
}

void func_22()
{
	if (Local_36.f_59 == 0x00000000)
	{
		if (Local_36.f_47 == 0x00000001)
		{
			if (!unk_0xEA6BC48857E0AC4C(Local_36.f_55))
			{
				if (unk_0xC92DB9682A650680(Local_36.f_55))
				{
					Local_36.f_59 = 0x00000001;
				}
			}
		}
	}
	if (Local_36.f_5A == 0x00000000)
	{
		if (Local_36.f_54 == 0x00000001)
		{
			if (!unk_0xEA6BC48857E0AC4C(Local_36.f_56))
			{
				if (unk_0xC92DB9682A650680(Local_36.f_56))
				{
					Local_36.f_5A = 0x00000001;
				}
			}
		}
	}
}

void func_23()
{
	int iVar0;
	int iVar1;
	
	if (Local_36.f_47 == 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			if (iVar1 == 0x00000000)
			{
				if (unk_0xE4EDC4B0E92C078B(Local_53[0x00000000 /*122*/].f_2[iVar0 /*20*/].f_1))
				{
					func_24("PMD_OBJ", 0x00001D4C, 0x00000001);
					iVar1 = 0x00000001;
					Local_36.f_47 = 0x00000001;
				}
			}
			iVar0++;
		}
	}
}

void func_24(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000000);
}

int func_25(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_42 == uParam0->f_40)
	{
		return 0x00000001;
	}
	else if (Local_53[uParam0->f_44 /*122*/] == 0x00000000)
	{
		if (Local_53[uParam0->f_44 /*122*/].f_71 == Local_53[uParam0->f_44 /*122*/].f_6F)
		{
			uParam0->f_44++;
		}
		else
		{
			iVar0 = Local_53[uParam0->f_44 /*122*/].f_71;
			if (!unk_0xC844350D5D58C99A(Local_53[uParam0->f_44 /*122*/].f_2[iVar0 /*20*/]))
			{
				Local_53[uParam0->f_44 /*122*/].f_2[iVar0 /*20*/] = func_15(&Local_53, uParam0->f_44, iVar0);
				func_14(Local_53[uParam0->f_44 /*122*/].f_2[iVar0 /*20*/], Local_36, Local_53[uParam0->f_44 /*122*/].f_2[iVar0 /*20*/].f_F);
				Local_53[uParam0->f_44 /*122*/].f_2[iVar0 /*20*/].f_9 = 0x00000002;
				Local_53[uParam0->f_44 /*122*/].f_71++;
				uParam0->f_42++;
			}
		}
	}
	else
	{
		uParam0->f_44++;
	}
	return 0x00000000;
}

int func_26(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_43 == uParam0->f_41)
	{
		return 0x00000001;
	}
	else if (Local_53[uParam0->f_44 /*122*/] == 0x00000000)
	{
		if (Local_53[uParam0->f_44 /*122*/].f_72 == Local_53[uParam0->f_44 /*122*/].f_70)
		{
			uParam0->f_44++;
		}
		else
		{
			iVar0 = Local_53[uParam0->f_44 /*122*/].f_72;
			if (!unk_0xC844350D5D58C99A(Local_53[uParam0->f_44 /*122*/].f_53[iVar0 /*9*/]))
			{
				Local_53[uParam0->f_44 /*122*/].f_53[iVar0 /*9*/] = func_17(&Local_53, uParam0->f_44, iVar0);
				Local_53[uParam0->f_44 /*122*/].f_72++;
				uParam0->f_43++;
			}
		}
	}
	else
	{
		uParam0->f_44++;
	}
	return 0x00000000;
}

void func_27()
{
	switch (Local_36.f_33)
	{
		case 0x00000000:
			func_31(&Local_36, func_36());
			func_30(&Local_36);
			Local_36.f_33++;
			break;
		
		case 0x00000001:
			func_29(Local_36);
			Local_36.f_33++;
			break;
		
		case 0x00000002:
			if (func_28(Local_36))
			{
				Local_36.f_33++;
			}
			break;
		
		case 0x00000003:
			if (unk_0xF63400DBE3303D26("PMD_ENEMIES", &(Local_36.f_34)))
			{
				unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, Local_36.f_34);
				unk_0x0E2400AB9174FA81(0x00000005, Local_36.f_34, 0xA49E591C);
				unk_0x0E2400AB9174FA81(0x00000005, Local_36.f_34, 0x6F0783F5);
				unk_0x0E2400AB9174FA81(0x00000001, Local_36.f_34, Local_36.f_34);
			}
			Local_36 = 0x00000001;
			break;
	}
}

int func_28(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	if (((((((((((Param0.f_35[0x00000000] == 0x00000000 || unk_0xB87F6CF6E5628C67(Param0.f_35[0x00000000])) && (Param0.f_35[0x00000001] == 0x00000000 || unk_0xB87F6CF6E5628C67(Param0.f_35[0x00000001]))) && (Param0.f_35[0x00000002] == 0x00000000 || unk_0xB87F6CF6E5628C67(Param0.f_35[0x00000002]))) && (Param0.f_39[0x00000000] == 0x00000000 || unk_0xB87F6CF6E5628C67(Param0.f_39[0x00000000]))) && (Param0.f_39[0x00000001] == 0x00000000 || unk_0xB87F6CF6E5628C67(Param0.f_39[0x00000001]))) && (Param0.f_39[0x00000000] == 0x00000000 || unk_0x1F04E7FA44219580(Param0.f_39[0x00000000]))) && (Param0.f_39[0x00000001] == 0x00000000 || unk_0x1F04E7FA44219580(Param0.f_39[0x00000001]))) && (Param0.f_3C[0x00000000] == 0x00000000 || unk_0x1787731C4D1D6B19(Param0.f_3C[0x00000000]))) && (Param0.f_3C[0x00000001] == 0x00000000 || unk_0x1787731C4D1D6B19(Param0.f_3C[0x00000001]))) && (Param0.f_3C[0x00000002] == 0x00000000 || unk_0x1787731C4D1D6B19(Param0.f_3C[0x00000002]))) && unk_0x67C1D9E5B91B2E37(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_29(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Param0.f_35[iVar0] != 0x00000000)
		{
			unk_0x523BCC9DC80CD82F(Param0.f_35[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (Param0.f_39[iVar0] != 0x00000000)
		{
			unk_0x523BCC9DC80CD82F(Param0.f_39[iVar0]);
			unk_0xD4D331DFE794EACD(Param0.f_39[iVar0], 0x00000003);
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Param0.f_3C[iVar0] != 0x00000000)
		{
			unk_0x6D0C93EE4FBA9307(Param0.f_3C[iVar0], 0x0000001F, 0x00000000);
		}
		iVar0++;
	}
	unk_0xD7992BEF7A9D109E("PMD", 0x00000000);
}

void func_30(var uParam0)
{
	if (!func_20(uParam0->f_4C) && !func_20(uParam0->f_4F))
	{
		uParam0->f_52 = unk_0x7D6CA5F52B3748BF((uParam0->f_4C - uParam0->f_4F), (uParam0->f_4C.f_1 - uParam0->f_4F.f_1), (uParam0->f_4C.f_2 - uParam0->f_4F.f_2), (uParam0->f_4C + uParam0->f_4F), (uParam0->f_4C.f_1 + uParam0->f_4F.f_1), (uParam0->f_4C.f_2 + uParam0->f_4F.f_2), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	}
	if (!func_20(uParam0->f_48) && !uParam0->f_4B <= 0f)
	{
		unk_0x536F1BE96C726C4B(uParam0->f_48, uParam0->f_4B, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
}

void func_31(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000009:
			uParam0->f_3 = 0x00000009;
			uParam0->f_4 = func_34();
			uParam0->f_5 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_2 = 0x00000004;
			uParam0->f_35[0x00000000] = joaat("g_m_y_lost_01");
			uParam0->f_35[0x00000001] = 0x00000000;
			uParam0->f_35[0x00000002] = 0x00000000;
			uParam0->f_39[0x00000000] = joaat("gburrito");
			uParam0->f_39[0x00000001] = joaat("hexer");
			uParam0->f_3C[0x00000000] = joaat("weapon_pistol");
			uParam0->f_3C[0x00000001] = joaat("weapon_sawnoffshotgun");
			uParam0->f_3C[0x00000002] = joaat("weapon_assaultrifle");
			uParam0->f_48 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_4B = 90f;
			uParam0->f_4C = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_4F = { 54f, 72f, 8f };
			uParam0->f_32 = 0x00000009;
			uParam0->f_8[0x00000000 /*3*/] = { 1578.134f, -2317.858f, 86.636f };
			uParam0->f_27[0x00000000] = 36.2503f;
			uParam0->f_8[0x00000001 /*3*/] = { 1571.414f, -2314.379f, 86.0904f };
			uParam0->f_27[0x00000001] = 37.4325f;
			uParam0->f_8[0x00000002 /*3*/] = { 1555.674f, -2321.857f, 85.2531f };
			uParam0->f_27[0x00000002] = 2.4637f;
			uParam0->f_8[0x00000003 /*3*/] = { 1516.694f, -1980.273f, 70.1538f };
			uParam0->f_27[0x00000003] = 203.6018f;
			uParam0->f_8[0x00000004 /*3*/] = { 1505.077f, -1978.409f, 69.794f };
			uParam0->f_27[0x00000004] = 217.0733f;
			uParam0->f_8[0x00000005 /*3*/] = { 1498.166f, -1981.469f, 69.5705f };
			uParam0->f_27[0x00000005] = 256.7048f;
			uParam0->f_8[0x00000006 /*3*/] = { 1670.858f, -2022.844f, 99.5899f };
			uParam0->f_27[0x00000006] = 142.5751f;
			uParam0->f_8[0x00000007 /*3*/] = { 1677.085f, -2035.785f, 98.5593f };
			uParam0->f_27[0x00000007] = 109.2985f;
			uParam0->f_8[0x00000008 /*3*/] = { 1659.187f, -2090.027f, 99.2239f };
			uParam0->f_27[0x00000008] = 9.0974f;
			Local_53[0x00000000 /*122*/] = 0x00000000;
			Local_53[0x00000000 /*122*/].f_6F = 0x00000004;
			Local_53[0x00000000 /*122*/].f_70 = 0x00000002;
			Local_53[0x00000000 /*122*/].f_53[0x00000000 /*9*/].f_1 = { 1533.375f, -2087.209f, 76.0832f };
			Local_53[0x00000000 /*122*/].f_53[0x00000000 /*9*/].f_7 = 152.9678f;
			Local_53[0x00000000 /*122*/].f_53[0x00000000 /*9*/].f_8 = joaat("gburrito");
			Local_53[0x00000000 /*122*/].f_53[0x00000001 /*9*/].f_1 = { 1547.824f, -2091.365f, 76.1018f };
			Local_53[0x00000000 /*122*/].f_53[0x00000001 /*9*/].f_7 = 55.5566f;
			Local_53[0x00000000 /*122*/].f_53[0x00000001 /*9*/].f_8 = joaat("gburrito");
			Local_53[0x00000000 /*122*/].f_2[0x00000000 /*20*/].f_A = { 1525.76f, -2092.838f, 76.0174f };
			Local_53[0x00000000 /*122*/].f_2[0x00000000 /*20*/].f_D = 232.9176f;
			Local_53[0x00000000 /*122*/].f_2[0x00000001 /*20*/].f_A = { 1527.138f, -2091.832f, 76.031f };
			Local_53[0x00000000 /*122*/].f_2[0x00000001 /*20*/].f_D = 190.6337f;
			Local_53[0x00000000 /*122*/].f_2[0x00000002 /*20*/].f_A = { 1523.108f, -2115.134f, 75.6351f };
			Local_53[0x00000000 /*122*/].f_2[0x00000002 /*20*/].f_D = 350.4627f;
			Local_53[0x00000000 /*122*/].f_2[0x00000003 /*20*/].f_A = { 1522.629f, -2112.768f, 75.6853f };
			Local_53[0x00000000 /*122*/].f_2[0x00000003 /*20*/].f_D = 264.9478f;
			Local_53[0x00000001 /*122*/] = 0x00000001;
			Local_53[0x00000001 /*122*/].f_6F = 0x00000004;
			Local_53[0x00000001 /*122*/].f_70 = 0x00000001;
			Local_53[0x00000001 /*122*/].f_74 = 0x00000002;
			Local_53[0x00000001 /*122*/].f_53[0x00000000 /*9*/].f_8 = joaat("gburrito");
			Local_53[0x00000001 /*122*/].f_2[0x00000000 /*20*/].f_12 = 0x00000000;
			Local_53[0x00000001 /*122*/].f_2[0x00000000 /*20*/].f_13 = 0xFFFFFFFF;
			Local_53[0x00000001 /*122*/].f_2[0x00000000 /*20*/].f_F = joaat("weapon_pistol");
			Local_53[0x00000001 /*122*/].f_2[0x00000001 /*20*/].f_12 = 0x00000000;
			Local_53[0x00000001 /*122*/].f_2[0x00000001 /*20*/].f_13 = 0x00000000;
			Local_53[0x00000001 /*122*/].f_2[0x00000001 /*20*/].f_F = joaat("weapon_pistol");
			Local_53[0x00000001 /*122*/].f_2[0x00000002 /*20*/].f_12 = 0x00000000;
			Local_53[0x00000001 /*122*/].f_2[0x00000002 /*20*/].f_13 = 0x00000001;
			Local_53[0x00000001 /*122*/].f_2[0x00000002 /*20*/].f_F = joaat("weapon_assaultrifle");
			Local_53[0x00000001 /*122*/].f_2[0x00000003 /*20*/].f_12 = 0x00000000;
			Local_53[0x00000001 /*122*/].f_2[0x00000003 /*20*/].f_13 = 0x00000002;
			Local_53[0x00000001 /*122*/].f_2[0x00000003 /*20*/].f_F = joaat("weapon_assaultrifle");
			Local_53[0x00000002 /*122*/] = 0x00000001;
			Local_53[0x00000002 /*122*/].f_6F = 0x00000004;
			Local_53[0x00000002 /*122*/].f_70 = 0x00000001;
			Local_53[0x00000002 /*122*/].f_74 = 0x00000003;
			Local_53[0x00000002 /*122*/].f_53[0x00000000 /*9*/].f_8 = joaat("gburrito");
			Local_53[0x00000002 /*122*/].f_2[0x00000000 /*20*/].f_12 = 0x00000000;
			Local_53[0x00000002 /*122*/].f_2[0x00000000 /*20*/].f_13 = 0xFFFFFFFF;
			Local_53[0x00000002 /*122*/].f_2[0x00000000 /*20*/].f_F = joaat("weapon_pistol");
			Local_53[0x00000002 /*122*/].f_2[0x00000001 /*20*/].f_12 = 0x00000000;
			Local_53[0x00000002 /*122*/].f_2[0x00000001 /*20*/].f_13 = 0x00000000;
			Local_53[0x00000002 /*122*/].f_2[0x00000001 /*20*/].f_F = joaat("weapon_pistol");
			Local_53[0x00000002 /*122*/].f_2[0x00000002 /*20*/].f_12 = 0x00000000;
			Local_53[0x00000002 /*122*/].f_2[0x00000002 /*20*/].f_13 = 0x00000001;
			Local_53[0x00000002 /*122*/].f_2[0x00000002 /*20*/].f_F = joaat("weapon_assaultrifle");
			Local_53[0x00000002 /*122*/].f_2[0x00000003 /*20*/].f_12 = 0x00000000;
			Local_53[0x00000002 /*122*/].f_2[0x00000003 /*20*/].f_13 = 0x00000002;
			Local_53[0x00000002 /*122*/].f_2[0x00000003 /*20*/].f_F = joaat("weapon_assaultrifle");
			break;
		
		default:
			uParam0->f_2 = 0x00000006;
			uParam0->f_35[0x00000000] = joaat("g_m_y_mexgoon_01");
			uParam0->f_35[0x00000001] = joaat("g_m_y_mexgoon_02");
			uParam0->f_35[0x00000002] = joaat("g_m_y_mexgoon_03");
			uParam0->f_3C[0x00000000] = joaat("weapon_pistol");
			uParam0->f_3C[0x00000001] = joaat("weapon_microsmg");
			uParam0->f_3C[0x00000002] = joaat("weapon_assaultrifle");
			uParam0->f_45 = 0x0000000A;
			break;
	}
	func_33(uParam0);
	func_32(uParam0);
}

void func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Local_53[iVar0 /*122*/] == 0x00000000)
		{
			uParam0->f_40 = (uParam0->f_40 + Local_53[iVar0 /*122*/].f_6F);
			uParam0->f_41 = (uParam0->f_41 + Local_53[iVar0 /*122*/].f_70);
		}
		uParam0->f_45 = (uParam0->f_45 + Local_53[iVar0 /*122*/].f_6F);
		iVar0++;
	}
}

void func_33(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 0x00000009:
			switch (uParam0->f_4)
			{
				case 0x00000000:
					uParam0->f_55 = "PM_CV1_START";
					uParam0->f_56 = "PM_CV1_GF";
					uParam0->f_57 = "PM_CV1_STOP";
					uParam0->f_58 = "PM_CV1_FAIL";
					uParam0->f_59 = 0x00000000;
					uParam0->f_5A = 0x00000000;
					break;
				
				case 0x00000001:
					uParam0->f_55 = "PM_CV2_START";
					uParam0->f_56 = "PM_CV2_GF";
					uParam0->f_57 = "PM_CV2_STOP";
					uParam0->f_58 = "PM_CV2_FAIL";
					uParam0->f_59 = 0x00000000;
					uParam0->f_5A = 0x00000000;
					break;
			}
			break;
	}
}

int func_34()
{
	return func_35(Global_1AF0C.f_14, Global_1AF0C.f_1D);
}

int func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x00000001;
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_36()
{
	return Global_1AF0C.f_14;
}

void func_37(var uParam0)
{
	func_40(*uParam0);
	func_39(&Local_53);
	func_38(&Local_53);
	if (uParam0->f_52 != 0x00000000)
	{
		unk_0x2952D66A502EA873(uParam0->f_52, 0x00000000);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_38(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A((uParam0[iVar0 /*122*/])->f_53[iVar1 /*9*/]))
			{
				unk_0x046C362CF15F1935(&((uParam0[iVar0 /*122*/])->f_53[iVar1 /*9*/]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			func_8(uParam0, iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_40(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Param0.f_35[iVar0] != 0x00000000)
		{
			unk_0x71199B01895C6202(Param0.f_35[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (Param0.f_39[iVar0] != 0x00000000)
		{
			unk_0x71199B01895C6202(Param0.f_39[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Param0.f_3C[iVar0] != 0x00000000)
		{
			unk_0x2914827AC2790D54(Param0.f_3C[iVar0]);
		}
		iVar0++;
	}
}

void func_41(int iParam0)
{
	Global_1AF0C.f_16 = iParam0;
}

