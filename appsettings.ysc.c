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
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	int iLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_38 = 0.82f;
	fLocal_39 = 0.42f;
	fLocal_40 = 0f;
	fLocal_41 = 0f;
	unk_0xB57F88F0123F4C38();
	func_46(Global_4C0B, "SET_DATA_SLOT_EMPTY", 13f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_45();
	if (Global_4BE7 == 0x00000000)
	{
		fLocal_43 = 0.75f;
		fLocal_44 = 0.8f;
	}
	else
	{
		fLocal_43 = 0.65f;
		fLocal_44 = 0.77f;
	}
	Global_1FE1[Global_4C1E /*2811*/][0x00000002 /*281*/].f_103 = Global_1B416.f_36DE[Global_4C1E /*20*/].f_6;
	Global_1FE1[Global_4C1E /*2811*/][0x00000004 /*281*/].f_103 = Global_1B416.f_36DE[Global_4C1E /*20*/].f_9;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (Global_12B4E)
		{
			Global_1FE1[Global_4C1E /*2811*/][0x00000001 /*281*/].f_103 = func_44(0x000004AE, 0xFFFFFFFF, 0x00000000);
			Global_1FE1[Global_4C1E /*2811*/][0x00000002 /*281*/].f_103 = func_44(0x000007EC, 0xFFFFFFFF, 0x00000000);
			Global_1FE1[Global_4C1E /*2811*/][0x00000004 /*281*/].f_103 = func_44(0x000007EB, 0xFFFFFFFF, 0x00000000);
		}
		else if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_36DE[Global_4C1E /*20*/].f_B), &(Global_1FE1[Global_4C1E /*2811*/][0x00000001 /*281*/].f_90[iVar0 /*6*/])))
		{
			Global_1FE1[Global_4C1E /*2811*/][0x00000001 /*281*/].f_103 = iVar0;
		}
		iVar0++;
	}
	if (Global_12B4E)
	{
		Global_1B416.f_36DE[0x00000003 /*20*/].f_A = func_44(0x000004AD, 0xFFFFFFFF, 0x00000000);
	}
	Global_1FE1[Global_4C1E /*2811*/][0x00000003 /*281*/].f_103 = Global_1B416.f_36DE[Global_4C1E /*20*/].f_A;
	func_43();
	if (Global_12B4E)
	{
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/] = 0x000000BE;
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_1 = 0x000000BE;
		StringCopy(&(Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_2), "CELL_701", 16);
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_6 = 0x00000013;
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_118 = 0x00000001;
		StringCopy(&(Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_7[0x00000000 /*4*/]), "CELL_704", 16);
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_7C[0x00000000] = 0x00000001;
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_54[0x00000000] = 0x000000AA;
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_68[0x00000000] = 0x00000013;
		StringCopy(&(Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_7[0x00000001 /*4*/]), "CELL_703", 16);
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_7C[0x00000001] = 0x00000001;
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_54[0x00000001] = 0x000000AF;
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_68[0x00000001] = 0x00000013;
		StringCopy(&(Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_7[0x00000002 /*4*/]), "CELL_801", 16);
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_7C[0x00000002] = 0x00000000;
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_54[0x00000002] = 0x000000BE;
		Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_68[0x00000002] = 0x0000001A;
		if (func_44(0x0000082A, 0xFFFFFFFF, 0x00000000) == 0x00000000)
		{
			Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
		}
		else
		{
			Global_1FE1[0x00000003 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000001;
		}
	}
	func_33();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (iLocal_30)
		{
			if (SYSTEM::TIMERB() > 0x00000DAC)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0x3AAC2C1927573C34(unk_0x16F2683693E537C9());
				}
				iLocal_30 = 0x00000000;
			}
		}
		if (Global_4C1E.f_1 != 0x00000009)
		{
			switch (Global_4C1E.f_1)
			{
				case 0x00000007:
					func_28();
					func_26();
					break;
				
				case 0x00000008:
					if (bLocal_36 || iLocal_37)
					{
						if (bLocal_36)
						{
							bLocal_36 = 0x00000000;
							SYSTEM::SETTIMERB(0x00000000);
							Global_1B416.f_36DE.f_52 = 0x00000001;
							iLocal_37 = 0x00000001;
						}
						else if (SYSTEM::TIMERB() > 0x00001D4C)
						{
							iLocal_37 = 0x00000000;
							unk_0xA37A90C62806D848(0x00000001);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_33)
						{
							func_11();
						}
						if (func_10(0x00000002, Global_4BFE, 0x00000000))
						{
							if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
							{
								unk_0x3AAC2C1927573C34(unk_0x16F2683693E537C9());
							}
							iLocal_33 = 0x00000000;
							func_9();
							Global_4C08 = 0x00000001;
							func_46(Global_4C0B, "SET_DATA_SLOT_EMPTY", 13f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
							func_33();
							if (Global_4C1E.f_1 > 0x00000003)
							{
								Global_4C1E.f_1 = 0x00000007;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_4C20 = 0x00000006;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000003) || Global_4C1E.f_1 == 0x00000000) || Global_4BE6 == 0x00000001)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_2()
{
	func_7();
	if (func_4(0x00000000))
	{
		func_3();
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x3AAC2C1927573C34(unk_0x16F2683693E537C9());
	}
	if (bLocal_36)
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (Global_1B416.f_36DE.f_53 == 0x00000000 || Global_1B416.f_36DE.f_52 == 0x00000000)
	{
		func_3();
	}
	unk_0x21387C9EECC2B220(0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_3()
{
	if (Global_1FE1[0x00000000 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000000 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	if (Global_1FE1[0x00000001 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000001 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	if (Global_1FE1[0x00000002 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000002 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000019);
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
}

int func_4(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_5(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_A1D7);
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000000F)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000010:
			switch (iParam1)
			{
				case 0x00000009:
				case 0x0000000A:
				case 0x00000007:
				case 0x0000000D:
				case 0x0000000E:
					return 0x00000000;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000004:
			if (iParam1 == 0x00000011)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
		case 0x00000008:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000007:
			if (iParam1 == 0x00000006)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000A:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			switch (iParam1)
			{
				case 0x00000011:
				case 0x0000000C:
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000012:
		case 0x0000000C:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
	}
	return 0x00000000;
}

void func_7()
{
	func_45();
	Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_7C[0x00000002] = 0x00000001;
}

int func_8()
{
	if (Global_1F1A == 0x00000001 || Global_4C1E.f_1 < 0x00000007)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_9()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Back", &Global_4C13, 0x00000001);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 0x00000001 && unk_0xD245978525608929(iParam0, iParam1)))
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0xDAC65F45B0B2D176() == 0x00000000 || (unk_0x4FD68D5821EE3E19() && unk_0x91E3F625EF57450D(0x00000002)))
			{
				return 0x00000000;
			}
		}
		if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_11()
{
	int iVar0;
	
	iLocal_34 = unk_0x1C0640BA9A7327B3();
	iVar0 = (iLocal_34 - iLocal_35);
	if ((iVar0 % 0x00000258) <= 0x0000012C && iVar0 < 0x00000BB8)
	{
		unk_0x5E858A00EAFA5B24(0x00000000, 0x00000064, 0x00000064);
	}
}

void func_12()
{
	int iVar0;
	var uVar1;
	struct<13> Var2;
	int iVar3;
	
	if (iLocal_23 == 0x00000001)
	{
		if (iLocal_32)
		{
			iLocal_34 = unk_0x1C0640BA9A7327B3();
			if ((iLocal_34 - iLocal_35) > 0x000003E8)
			{
				iLocal_31 = 0x00000001;
				iLocal_32 = 0x00000000;
			}
		}
		if (unk_0x91E3F625EF57450D(0x00000002))
		{
			if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B4))
			{
				iLocal_45 = 0x00000001;
				iLocal_46 = 0x00000000;
			}
			if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B5))
			{
				iLocal_45 = 0x00000000;
				iLocal_46 = 0x00000001;
			}
		}
		if ((((func_10(0x00000002, Global_4C06, 0x00000000) || func_10(0x00000002, Global_4C07, 0x00000000)) || iLocal_31) || iLocal_45 == 0x00000001) || iLocal_46 == 0x00000001)
		{
			iLocal_45 = 0x00000000;
			iLocal_46 = 0x00000000;
			iLocal_31 = 0x00000000;
			iLocal_32 = 0x00000000;
			SYSTEM::SETTIMERB(0x00000000);
			iLocal_30 = 0x00000001;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(uLocal_21))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iLocal_27 = iLocal_18[unk_0xA52833FE33F41C53(uLocal_21)];
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x3AAC2C1927573C34(unk_0x16F2683693E537C9());
				SYSTEM::WAIT(0x00000064);
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (!unk_0xDCB451BA868A1028(unk_0x16F2683693E537C9()))
					{
						if (unk_0x7F8A39872A07D2CE(&(Global_1FE1[Global_4C1E /*2811*/][0x00000001 /*281*/].f_90[iLocal_27 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0x81B32D11FDBFF60F(&(Global_1FE1[Global_4C1E /*2811*/][0x00000001 /*281*/].f_90[iLocal_27 /*6*/]), unk_0x16F2683693E537C9(), 0x00000001);
						}
					}
				}
			}
		}
	}
	if (Global_4C08 == 0x00000000)
	{
		if (func_10(0x00000002, Global_4BFF, 0x00000000))
		{
			func_23();
			Global_4C08 = 0x00000001;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(uLocal_21))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iLocal_26 = unk_0xA52833FE33F41C53(uLocal_21);
			if (iLocal_26 < 0x00000000)
			{
				iLocal_26 = 0x00000000;
			}
			Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
			if (iLocal_23 == 0x00000002)
			{
				iVar0 = Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_103;
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_6 = Global_1FE1[Global_4C1E /*2811*/][0x00000002 /*281*/].f_104[iVar0];
				func_46(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				if (Global_12B4E)
				{
					Global_4127D9 = Global_1FE1[0x00000003 /*2811*/][0x00000002 /*281*/].f_103;
					func_20(0x000007EC, Global_1FE1[0x00000003 /*2811*/][0x00000002 /*281*/].f_103, 0xFFFFFFFF, 0x00000001, 0x00000000);
					func_46(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_4127D9), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				}
				else
				{
					func_46(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				}
				func_19();
				func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000016), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(0x00000017), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000016), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(0x00000030), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				iLocal_25 = iLocal_26;
				func_46(Global_4C0B, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), 0xBF800000, 0xBF800000, 0xBF800000);
			}
			if (iLocal_23 == 0x00000004)
			{
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_9 = Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_103;
				if (Global_12B4E)
				{
					Global_4127DA = Global_1FE1[0x00000003 /*2811*/][0x00000004 /*281*/].f_103;
					func_20(0x000007EB, Global_1FE1[0x00000003 /*2811*/][0x00000004 /*281*/].f_103, 0xFFFFFFFF, 0x00000001, 0x00000000);
					if (Global_4127DA == 0x00000000)
					{
						Var2 = { func_17(unk_0xD803B885F5E47A62()) };
						iVar3 = 0x00000000;
						if (unk_0x4DEB7B48DD0AABA4(0x00000000) == 0x00000000)
						{
						}
						if ((unk_0xF2EC2A39FF9E838D(&Var2) && unk_0x4DEB7B48DD0AABA4(0x00000000)) && Global_4127DD == 0x00000000)
						{
							SYSTEM::SETTIMERA(0x00000000);
							while (!unk_0x205FB5BBF81D8900(&Var2, &uVar1) && SYSTEM::TIMERA() < 0x00000BB8)
							{
								SYSTEM::WAIT(0x00000000);
								if (SYSTEM::TIMERA() > 0x00000BB7)
								{
									iVar3 = 0x00000001;
								}
							}
							if (iVar3 == 0x00000000)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x7ACC3006A87F8B39("CELL_2000");
								unk_0xD06AC7C87A34A6AD(&uVar1);
								unk_0x779B34565F4D71B1();
								unk_0x7E60D21B163E9D56();
							}
						}
						else
						{
							func_46(Global_4C0B, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0x00000000), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						}
					}
					else
					{
						func_46(Global_4C0B, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4127DA), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
					}
				}
				else
				{
					func_46(Global_4C0B, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_9), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				}
				func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000016), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(0x00000017), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000016), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(0x00000030), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				iLocal_25 = iLocal_26;
				func_46(Global_4C0B, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), 0xBF800000, 0xBF800000, 0xBF800000);
			}
			if (iLocal_23 == 0x00000001)
			{
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_B = { Global_1FE1[Global_4C1E /*2811*/][0x00000001 /*281*/].f_90[Global_1FE1[Global_4C1E /*2811*/][0x00000001 /*281*/].f_103 /*6*/] };
				if (Global_12B4E)
				{
					func_20(0x000004AE, Global_1FE1[0x00000003 /*2811*/][0x00000001 /*281*/].f_103, 0xFFFFFFFF, 0x00000001, 0x00000000);
				}
				func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000016), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(0x00000012), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000016), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(0x00000030), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				iLocal_25 = iLocal_26;
				func_46(Global_4C0B, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), 0xBF800000, 0xBF800000, 0xBF800000);
			}
			if (iLocal_23 == 0x00000003)
			{
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_A = Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_103;
				if (Global_12B4E)
				{
					func_20(0x000004AD, Global_1B416.f_36DE[0x00000003 /*20*/].f_A, 0xFFFFFFFF, 0x00000001, 0x00000000);
				}
				if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_A == 0x00000001)
				{
					iLocal_33 = 0x00000001;
					iLocal_35 = unk_0x1C0640BA9A7327B3();
				}
				else
				{
					iLocal_33 = 0x00000000;
				}
			}
			if (iLocal_23 == 0x00000000)
			{
				if (Global_12B4E == 0x00000001)
				{
					Global_1FE1[0x00000003 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000016), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(0x00000013), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000016), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(0x00000030), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_25 = iLocal_26;
					func_46(Global_4C0B, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), 0xBF800000, 0xBF800000, 0xBF800000);
					func_20(0x0000082A, Global_1FE1[0x00000003 /*2811*/][iLocal_23 /*281*/].f_103, 0xFFFFFFFF, 0x00000001, 0x00000000);
				}
				else
				{
					Global_1FE1[0x00000000 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					Global_1FE1[0x00000001 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					Global_1FE1[0x00000002 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
					{
						if (Global_A1D7 == 0x0000000F)
						{
							if (Global_1B416.f_36DE.f_52 == 0x00000000)
							{
								unk_0xA37A90C62806D848(0x00000001);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = 0x00000001;
							}
							else
							{
								func_46(Global_4C0B, "SET_SLEEP_MODE", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
								unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000019);
								unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
								if (Global_1B416.f_36DE.f_53 == 0x00000000)
								{
									unk_0xA37A90C62806D848(0x00000001);
									func_15("CELL_7051", 0xFFFFFFFF);
									Global_1B416.f_36DE.f_53 = 0x00000001;
								}
							}
						}
					}
					else
					{
						func_46(Global_4C0B, "SET_SLEEP_MODE", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						unk_0x0674E58A79778E99(&Global_1CBC, 0x00000019);
						unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
					}
				}
			}
			func_13(Global_4C0B, "SET_HEADER", &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			if (func_4(0x00000000))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_14(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_14(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_14(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_14(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_14(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_15(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_16(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

struct<13> func_17(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_14(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_14(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_14(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_14(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_14(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_19()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (Global_4C1E == 0x00000000)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 0x00000001)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 0x00000002)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 0x00000003)
		{
			switch (Global_4127D9)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_22();
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

var func_22()
{
	return Global_1407E9;
}

void func_23()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Accept", &Global_4C13, 0x00000001);
		func_24();
	}
}

void func_24()
{
	if (func_25())
	{
		unk_0x5A963FB0365294C8(0x00000005);
	}
}

int func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		return 0x00000000;
	}
	iVar2 = 0x00000000;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 0x00000004)
	{
		iVar2 = 0x00000001;
	}
	if (Global_4127DB || iVar2)
	{
		return 0x00000001;
	}
	return 0x00000001;
}

void func_26()
{
	if (Global_4C08 == 0x00000000)
	{
		if (func_10(0x00000002, Global_4BFF, 0x00000000))
		{
			func_23();
			Global_4C08 = 0x00000001;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(uLocal_21))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iLocal_24 = unk_0xA52833FE33F41C53(uLocal_21);
			iLocal_23 = iLocal_18[iLocal_24];
			switch (iLocal_23)
			{
				case 0x00000000:
					if (Global_12B4E == 0x00000000)
					{
						if (Global_A1D7 == 0x0000000F)
						{
							if (Global_1B416.f_36DE.f_52 == 0x00000000)
							{
								unk_0xA37A90C62806D848(0x00000001);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = 0x00000001;
							}
						}
					}
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					break;
			}
			if (Global_4C1E.f_1 > 0x00000003)
			{
				Global_4C1E.f_1 = 0x00000008;
			}
			func_27();
			iLocal_32 = 0x00000001;
			iLocal_35 = unk_0x1C0640BA9A7327B3();
		}
	}
}

void func_27()
{
	int iVar0[19];
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	func_46(Global_4C0B, "SET_DATA_SLOT_EMPTY", 22f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	iLocal_19 = 0x00000000;
	iVar1 = 0x00000000;
	if (Global_12B4E)
	{
		StringCopy(&(Global_1FE1[0x00000003 /*2811*/][0x00000004 /*281*/].f_7[0x00000000 /*4*/]), "CELL_CREWEMB", 16);
		Var2 = { func_17(unk_0xD803B885F5E47A62()) };
		if (!unk_0xF2EC2A39FF9E838D(&Var2))
		{
			StringCopy(&(Global_1FE1[0x00000003 /*2811*/][0x00000004 /*281*/].f_7[0x00000000 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar1 < 0x00000013)
	{
		iVar3 = 0x00000000;
		iVar4 = 0x00000012;
		Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_54[iVar4] = 0x00001388;
		while (iVar3 < 0x00000013)
		{
			if (Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7C[iVar3] == 0x00000001)
			{
				if (iVar0[iVar3] == 0x00000000)
				{
					if (Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_54[iVar3] < Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_54[iVar4])
					{
						iVar4 = iVar3;
						func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000016), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_68[iVar4]), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			iVar3++;
		}
		iLocal_18[iVar1] = iVar4;
		iVar0[iVar4] = 0x00000001;
		if (unk_0x7F8A39872A07D2CE(&(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/])))
		{
			iLocal_28 = iVar1;
			if (iLocal_28 < 0x00000000)
			{
				iLocal_28 = 0x00000000;
			}
			if ((iLocal_23 == 0x00000001 || iLocal_23 == 0x00000004) || iLocal_23 == 0x00000002)
			{
				func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000016), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(0x00000030), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				iLocal_25 = iVar1;
			}
			if (iLocal_23 == 0x00000000 && Global_12B4E == 0x00000001)
			{
				func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000016), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(0x00000030), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				iLocal_25 = iVar1;
			}
		}
		if (Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7C[iVar1] == 0x00000001)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_46(Global_4C0B, "DISPLAY_VIEW", 22f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_13(Global_4C0B, "SET_HEADER", &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (Global_4C12)
	{
		func_18(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_18(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_18(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_18(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	func_18(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
}

void func_28()
{
	if (iLocal_42)
	{
		if (SYSTEM::TIMERA() > 0x00000032)
		{
			iLocal_42 = 0x00000000;
		}
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (func_10(0x00000002, 0x000000B5, 0x00000000))
		{
			if (iLocal_20 > 0x00000000)
			{
				iLocal_20 = (iLocal_20 - 0x00000001);
			}
			func_31();
		}
		if (func_10(0x00000002, 0x000000B4, 0x00000000))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0x00000000;
			}
			func_29();
		}
	}
	if (iLocal_42 == 0x00000000)
	{
		if (func_10(0x00000002, Global_4C06, 0x00000000))
		{
			if (iLocal_20 > 0x00000000)
			{
				iLocal_20 = (iLocal_20 - 0x00000001);
			}
			func_31();
			iLocal_42 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
		if (func_10(0x00000002, Global_4C07, 0x00000000))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0x00000000;
			}
			func_29();
			iLocal_42 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
	}
}

void func_29()
{
	func_46(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000003), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_30();
}

void func_30()
{
	if (func_25())
	{
		if (Global_4CD5 == 0x00000000)
		{
			unk_0x5A963FB0365294C8(0x00000002);
		}
		else
		{
			unk_0x5A963FB0365294C8(0x00000001);
		}
	}
}

void func_31()
{
	func_46(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_32();
}

void func_32()
{
	if (func_25())
	{
		if (Global_4CD5 == 0x00000000)
		{
			unk_0x5A963FB0365294C8(0x00000001);
		}
		else
		{
			unk_0x5A963FB0365294C8(0x00000002);
		}
	}
}

void func_33()
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000009)
	{
		iVar2 = 0x00000000;
		iVar3 = 0x00000009;
		Global_1FE1[Global_4C1E /*2811*/][iVar3 /*281*/] = 0x00001388;
		if (unk_0x0A4C9A3D51EAE31F(0x00000002) == 0x00000000)
		{
			Global_1FE1[Global_4C1E /*2811*/][0x00000003 /*281*/].f_118 = 0x00000000;
		}
		else
		{
			Global_1FE1[Global_4C1E /*2811*/][0x00000003 /*281*/].f_118 = 0x00000001;
		}
		while (iVar2 < 0x00000009)
		{
			if (Global_1FE1[Global_4C1E /*2811*/][iVar2 /*281*/].f_118 == 0x00000001)
			{
				if (iVar0[iVar2] == 0x00000000)
				{
					if (Global_1FE1[Global_4C1E /*2811*/][iVar2 /*281*/] < Global_1FE1[Global_4C1E /*2811*/][iVar3 /*281*/])
					{
						if (Global_12B4E)
						{
							if (iVar2 == 0x00000000)
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x0000000D), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iVar3 /*281*/].f_2), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x0000000D), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iVar3 /*281*/].f_2), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else if (func_34() == 0x00000002)
						{
							if (iVar2 == 0x00000004 || iVar2 == 0x00000005)
							{
							}
							else
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x0000000D), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iVar3 /*281*/].f_2), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else if (iVar2 == 0x00000005)
						{
						}
						else
						{
							iVar3 = iVar2;
							func_42(iVar2, iVar3);
							func_18(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x0000000D), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iVar3 /*281*/].f_2), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 0x00000001;
		if (Global_1FE1[Global_4C1E /*2811*/][iVar1 /*281*/].f_118 == 0x00000001)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_46(Global_4C0B, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_24), 0xBF800000, 0xBF800000, 0xBF800000);
	func_13(Global_4C0B, "SET_HEADER", "CELL_16", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (Global_4C12)
	{
		func_18(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_18(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_18(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_18(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	func_18(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
}

int func_34()
{
	if (Global_12B4E)
	{
		Global_4C1E = 0x00000003;
	}
	else
	{
		Global_4C1E = func_35();
	}
	if (Global_4C1E > 0x00000003)
	{
		Global_4C1E = 0x00000003;
	}
	return Global_1B416.f_36DE[Global_4C1E /*20*/].f_7;
}

var func_35()
{
	func_36();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_36()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_40(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_39(unk_0x16F2683693E537C9());
			if (func_38(iVar0) && (!func_37(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_38(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_37(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_38(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_41(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_41(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_12B4E)
			{
				iLocal_29 = 0x00000013;
			}
			else if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
			{
				iLocal_29 = 0x0000001A;
			}
			else
			{
				iLocal_29 = 0x00000019;
			}
			break;
		
		case 0x00000003:
			if (Global_1FE1[Global_4C1E /*2811*/][0x00000003 /*281*/].f_103 == 0x00000001)
			{
				iLocal_29 = 0x00000014;
			}
			else
			{
				iLocal_29 = 0x00000015;
			}
			break;
		
		default:
			iLocal_29 = Global_1FE1[Global_4C1E /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_43()
{
	if (Global_A1D7 != 0x0000000F)
	{
		func_45();
		Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_7C[0x00000002] = 0x00000000;
	}
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_21(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

void func_45()
{
	if (func_37(0x0000000E))
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
		Global_4C1E = func_35();
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

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

