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
	vector3 vLocal_21 = { 0f, 0f, 0f };
	struct<18> Local_22 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_41 = 0;
	struct<178> Local_42[27];
	var uLocal_43 = 0;
	struct<24> Local_44[30];
	var uLocal_45 = 0;
	struct<24> Local_46[24];
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
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
	iLocal_41 = 0x0000001D;
	fLocal_49 = 0.075f;
	fLocal_50 = 0.725f;
	iLocal_57 = 0x00000001;
	iLocal_58 = 0x00000001;
	bLocal_64 = 0x00000001;
	unk_0x7798376279BB5369(0x00000001);
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_42();
	}
	unk_0x53491B90E4FD0E56(0x00000000);
	unk_0x752C7D5696C0D8A0(0x00000001);
	func_35(0x00000001);
	bLocal_64 = 0x00000000;
	unk_0xAE1670DD12E839C3("fos_ep_1_p1", 0x00000008);
	func_18(0x00000000);
	func_8(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	while (0x00000001)
	{
		unk_0xD60411959D5D930B(0f);
		unk_0x6A36BC55C7F6D023(0f);
		func_7(unk_0x16F2683693E537C9());
		if (func_2())
		{
			func_42();
		}
		if (bLocal_56)
		{
			unk_0xD3539A877EC25E86(0.5f, 0.5f);
			func_1(0.1f, 0.1f, "NUMBER", 0x00000001, 0x00000000);
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

int func_2()
{
	unk_0x71592C07333285FE(vLocal_21.x, vLocal_21.y, vLocal_21.z);
	unk_0x068D69E275339485(-1f);
	switch (iLocal_59)
	{
		case 0x00000000:
			unk_0x82E51BCA72537B6C(0x00000000);
			func_6();
			unk_0x82E51BCA72537B6C(0x000001F4);
			unk_0x4C902758BEA97C68(0x00000000);
			iLocal_59++;
			break;
		
		case 0x00000001:
			if (!unk_0x154B5473FBFD0156())
			{
				if (bLocal_64)
				{
					func_4();
				}
				unk_0x3039591AD3E735CE(uLocal_53);
				unk_0xEF45C43067063F18(iLocal_51, 0.2f, 0.34f, 0.410001f, 0.69f, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
				unk_0x3039591AD3E735CE(uLocal_54);
				if (bLocal_55)
				{
					unk_0x7E60C62A7CE58FC8(iLocal_52, "SET_TEXT");
					func_3("KEYNOTE_NAME");
					func_3("KEYNOTE_TITLE");
					unk_0x7E60D21B163E9D56();
					unk_0xEF45C43067063F18(iLocal_52, 0.5f, 0.5f, 1f, 1f, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
				}
			}
			else
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_3(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_4()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8F677B1F58B4741C();
	iVar1 = 0x00000000;
	while (iVar1 <= (0x00000010 - 0x00000001))
	{
		if (Local_22[iVar1] != 0xFFFFFFFF)
		{
			if ((!unk_0xEAE0D21A50E6C7F4(iLocal_39, iVar1) && iVar0 >= Local_22[iVar1]) && iVar0 < Local_22.f_11[iVar1])
			{
				func_5();
				unk_0x5D96D8530B3D0904(&iLocal_39, iVar1);
			}
		}
		iVar1++;
	}
}

void func_5()
{
}

void func_6()
{
}

bool func_7(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

void func_8(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_17(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_16())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_15(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_17(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_15(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_13(unk_0xD803B885F5E47A62())) && !func_10(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_9()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_13(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_9()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_10(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_11(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_11(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1407E9;
}

int func_13(int iParam0)
{
	if (func_10(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_14())
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

bool func_14()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_15(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

int func_16()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_17(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000D);
	}
}

void func_18(bool bParam0)
{
	int iVar0;
	
	if (func_7(unk_0x16F2683693E537C9()))
	{
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 689.1f, 586.5f, 130.5f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0x745CE398A4B0A3C6(689.1f, 586.5f, 130.5f, 500f, 0x00000000);
		unk_0xE3A2D2E900FEFBE7(unk_0x16F2683693E537C9(), 0x00000001);
	}
	func_34(0x00000000);
	func_33(&iLocal_63, 0x00000000);
	unk_0x9E632F16E887F781(689.1f, 586.5f, 130.5f, 80f, 0x00000000);
	while (!unk_0x68367101660E33F0())
	{
		SYSTEM::WAIT(0x00000000);
	}
	unk_0x486B4ADE317F0689();
	if (bParam0)
	{
		unk_0x2404539258C5376B("LInvader");
		while (!unk_0xBCFF5481C5F58C19("LInvader"))
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
	unk_0xB8D67B901BB44E97("EXTRASUNNY");
	iLocal_40[0x00000000] = joaat("a_m_y_hipster_01");
	iLocal_40[0x00000001] = joaat("a_m_y_hipster_02");
	iLocal_40[0x00000002] = joaat("a_m_y_hipster_03");
	iLocal_40[0x00000003] = joaat("a_f_y_hipster_01");
	iLocal_40[0x00000004] = joaat("a_f_y_hipster_02");
	iLocal_40[0x00000005] = joaat("a_f_y_hipster_03");
	iLocal_40[0x00000006] = joaat("a_f_y_hipster_04");
	iLocal_40[0x00000007] = joaat("a_f_y_bevhills_01");
	iLocal_40[0x00000008] = joaat("a_m_m_business_01");
	iLocal_40[0x00000009] = joaat("a_m_m_bevhills_02");
	iLocal_40[0x0000000A] = joaat("a_m_m_skater_01");
	iLocal_40[0x0000000B] = joaat("a_m_y_beachvesp_01");
	iLocal_40[0x0000000C] = joaat("a_m_y_bevhills_01");
	iLocal_40[0x0000000D] = joaat("a_f_m_bevhills_01");
	iLocal_40[0x0000000E] = joaat("a_m_m_ktown_01");
	iLocal_40[0x0000000F] = joaat("a_m_y_busicas_01");
	iLocal_40[0x00000010] = joaat("a_m_y_business_02");
	iLocal_40[0x00000011] = joaat("a_m_y_gay_01");
	iLocal_40[0x00000012] = joaat("a_m_y_ktown_02");
	iLocal_40[0x00000013] = joaat("a_m_m_bevhills_02");
	iLocal_40[0x00000014] = joaat("a_m_y_business_03");
	iLocal_40[0x00000015] = joaat("a_m_y_gay_02");
	iLocal_40[0x00000016] = joaat("a_m_m_malibu_01");
	iLocal_40[0x00000016] = joaat("a_m_y_gay_02");
	iLocal_40[0x00000017] = joaat("a_m_y_eastsa_02");
	iLocal_40[0x00000018] = joaat("a_m_y_soucent_02");
	iLocal_40[0x00000019] = joaat("a_m_y_vinewood_01");
	iLocal_40[0x0000001A] = joaat("a_m_y_vinewood_02");
	iLocal_40[0x0000001B] = joaat("a_m_y_vinewood_03");
	iLocal_40[0x0000001C] = joaat("a_m_y_vinewood_04");
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000C)
	{
		func_31(func_32(iVar0), 0x00000001);
		iVar0++;
	}
	func_31("misslester1b_crowdlow@14@", 0x00000001);
	func_31("misslester1b_crowdlow@24@", 0x00000001);
	func_30("BREAKING_NEWS", &iLocal_52, 0x00000001);
	func_30("lifeinvader_presentation", &iLocal_51, 0x00000001);
	func_29("LEST1", 0x00000000, 0x00000001, 0x00000000);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000001A)
	{
		func_23(&(Local_42[iVar0 /*178*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000001D)
	{
		func_22(&(Local_44[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000017)
	{
		func_21(&(Local_46[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	unk_0x268029E44B2B3E36("Big_Disp", 0x00000000);
	unk_0x064E7408AD6E15E5(joaat("prop_huge_display_01"));
	unk_0x064E7408AD6E15E5(joaat("prop_huge_display_02"));
	uLocal_53 = unk_0x3FF702268B97B673("Big_Disp");
	uLocal_54 = unk_0x1D14FD94FCD601B4();
	while (unk_0x4B111E6C3450F2E0(unk_0x16F2683693E537C9()))
	{
		SYSTEM::WAIT(0x00000000);
	}
	while (!unk_0x62A1F4500E8F07E0())
	{
		SYSTEM::WAIT(0x00000000);
	}
	SYSTEM::WAIT(0x000007D0);
	iLocal_59 = 0x00000000;
	vLocal_21.x = 0x0000000C;
	vLocal_21.y = 0x00000000;
	vLocal_21.z = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000010 - 0x00000001))
	{
		func_19(iVar0);
		iVar0++;
	}
	if (bLocal_56)
	{
	}
}

void func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_20(iParam0, 0x00000000, 0x00002710);
			break;
		
		case 0x00000001:
			func_20(iParam0, 0x00002328, 0x00002710);
			break;
		
		case 0x00000002:
			func_20(iParam0, 0x00006978, 0x00007D00);
			break;
		
		case 0x00000003:
			func_20(iParam0, 0x00007D00, 0x0000A410);
			break;
		
		case 0x00000004:
			func_20(iParam0, 0x0000C738, 0x0000F618);
			break;
		
		case 0x00000005:
			func_20(iParam0, 0x0000F870, 0x00010D88);
			break;
		
		case 0x00000006:
			func_20(iParam0, 0x000101D0, 0x00011238);
			break;
		
		case 0x00000007:
			func_20(iParam0, 0x00010FE0, 0x00013560);
			break;
		
		case 0x00000008:
			func_20(iParam0, 0x00012E58, 0x00014820);
			break;
		
		case 0x0000000C:
			func_20(iParam0, 0x00013C68, 0x00016DA0);
			break;
		
		case 0x00000009:
			func_20(iParam0, 0xFFFFFFFF, 0xFFFFFFFF);
			break;
		
		case 0x0000000B:
			func_20(iParam0, 0x00015F90, 0x00025A58);
			break;
		
		case 0x0000000A:
			func_20(iParam0, 0x0001FA40, 0x00020850);
			break;
		
		case 0x0000000D:
			func_20(iParam0, 0x000234D8, 0x00025A58);
			break;
		
		case 0x0000000E:
			func_20(iParam0, 0x0002547C, 0x00025A58);
			break;
		
		case 0x0000000F:
			func_20(iParam0, 0x00025A58, 0x00025A58);
			break;
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	Local_22[iParam0] = iParam1;
	Local_22.f_11[iParam0] = iParam2;
}

void func_21(var uParam0, int iParam1)
{
	uParam0->f_16 = 0x00000000;
	unk_0x0674E58A79778E99(&uLocal_47, iParam1);
	if (iParam1 == 0x00000000 && uParam0->f_16 == 0x00000000)
	{
	}
}

void func_22(var uParam0, int iParam1)
{
	uParam0->f_16 = 0x00000000;
	unk_0x0674E58A79778E99(&uLocal_45, iParam1);
	if (iParam1 == 0x00000000 && uParam0->f_16 == 0x00000000)
	{
	}
}

void func_23(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	func_28(uParam0);
	unk_0x0674E58A79778E99(&uLocal_43, iParam1);
	switch (iParam1)
	{
		case 0x00000000:
			vVar0 = { 0f, 0f, (func_27(-4.29f) + 180f) };
			func_25(uParam0, 0x04E3F356, 667.319f, 572.133f, 128.521f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x04F64628, 666.312f, 571.675f, 128.521f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x0443699A, 665.235f, 571.183f, 128.521f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x02F84AE2, 664.124f, 570.679f, 128.521f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x04AEF750, 663.029f, 570.181f, 128.521f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x00B9236E, 661.937f, 569.685f, 128.521f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x055830D6, 660.839f, 569.194f, 128.521f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x03EEF09A, 659.537f, 569.392f, 128.521f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x0143FF2A, 658.187f, 569.572f, 128.523f, vVar0, 0x00000004, 0x00000000, 1f);
			func_24(&(uParam0->f_9B[0x00000000 /*11*/]), 659.867f, 571.539f, 128.531f, vVar0, 0x00000000, 0.5f, -1.5f);
			func_24(&(uParam0->f_9B[0x00000001 /*11*/]), 660.646f, 567.108f, 128.521f, vVar0, 0x00000000, 0.5f, -1.5f);
			break;
		
		case 0x00000001:
			vVar0 = { 0f, 0f, (func_27(-3.98f) + 180f) };
			func_25(uParam0, 0x0141D682, 670.312f, 568.023f, 128.521f, vVar0, 0x00000005, 0x00000000, 0.5f);
			func_25(uParam0, 0x05CF76FA, 669.189f, 567.502f, 128.522f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x03FABDD0, 668.28f, 566.688f, 128.522f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x04EFEDD2, 667.384f, 565.885f, 128.522f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x02013F04, 666.491f, 565.085f, 128.522f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x015B6FE8, 665.595f, 564.282f, 128.522f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			vVar0 = { 0f, 0f, (func_27(-3.78f) + 180f) };
			func_25(uParam0, 0x0573E2B8, 673.7f, 564.799f, 128.521f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x03DFC3E0, 672.996f, 563.847f, 128.521f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x01D6D034, 672.271f, 562.865f, 128.521f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x05E56E06, 671.557f, 561.897f, 128.521f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x045F5790, 670.258f, 561.366f, 128.522f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_24(&(uParam0->f_9B[0x00000000 /*11*/]), 669.564f, 563.469f, 128.521f, vVar0, 0x00000002, -1.5f, -1.5f);
			func_24(&(uParam0->f_9B[0x00000001 /*11*/]), 672.34f, 559.914f, 128.522f, vVar0, 0x00000002, -1.5f, -1.5f);
			break;
		
		case 0x00000003:
			vVar0 = { 0f, 0f, (func_27(-3.38f) + 180f) };
			func_25(uParam0, 0x05588D2E, 681.517f, 555.801f, 128.522f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x043C3E68, 681.796f, 556.967f, 128.522f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x018FE0B6, 682.076f, 558.137f, 128.522f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x03782E74, 682.36f, 559.342f, 128.522f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x0299A028, 682.635f, 560.475f, 128.522f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			break;
		
		case 0x00000004:
			vVar0 = { 0f, 0f, (func_27(-3.17f) + 180f) };
			func_25(uParam0, 0x04AEA930, 687.841f, 559.785f, 128.522f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x00BC0E44, 687.807f, 558.602f, 128.522f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x003E4E0A, 687.771f, 557.382f, 128.522f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x001EDA5C, 688.465f, 556.159f, 128.522f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x0141D682, 688.431f, 554.961f, 128.521f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_24(&(uParam0->f_9B[0x00000000 /*11*/]), 685.931f, 556.306f, 128.522f, vVar0, 0x00000000, 0.5f, -1.5f);
			func_24(&(uParam0->f_9B[0x00000001 /*11*/]), 685.897f, 555.108f, 128.521f, vVar0, 0x00000001, -1.5f, -1.5f);
			break;
		
		case 0x00000005:
			vVar0 = { 0f, 0f, (func_27(-2.97f) + 180f) };
			func_25(uParam0, 0x01E08570, 692.632f, 559.992f, 128.522f, vVar0, 0x00000005, 0x00000002, -0.5f);
			func_25(uParam0, 0x020CCCFC, 693.189f, 558.886f, 128.522f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x05A5F794, 693.396f, 557.684f, 128.522f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x05ADEB0C, 693.6f, 556.498f, 128.522f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x05822BAC, 693.803f, 555.317f, 128.522f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x0331D398, 694.007f, 554.131f, 128.522f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			break;
		
		case 0x00000006:
			vVar0 = { 0f, 0f, (func_27(-2.7f) + 180f) };
			func_25(uParam0, 0x0522D9FE, 697.492f, 561.188f, 128.522f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x03B5D3B4, 697.964f, 560.188f, 128.522f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x029A474E, 698.467f, 559.116f, 128.522f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x01F61B56, 698.988f, 558.013f, 128.522f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x0438E254, 699.502f, 556.925f, 128.522f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x040A8D1E, 700.014f, 555.841f, 128.522f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x02735FA8, 701.184f, 555.063f, 128.521f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x05DDEF46, 701.005f, 553.758f, 128.522f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_24(&(uParam0->f_9B[0x00000000 /*11*/]), 698.861f, 554.048f, 128.521f, vVar0, 0x00000000, 0.5f, -1.5f);
			func_24(&(uParam0->f_9B[0x00000001 /*11*/]), 703.267f, 554.91f, 128.522f, vVar0, 0x00000000, 0.5f, -1.5f);
			break;
		
		case 0x00000007:
			vVar0 = { 0f, 0f, (func_27(-3.99f) + 180f) };
			func_25(uParam0, 0x00C8EF92, 652.833f, 570.052f, 128.529f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x057DC224, 652.006f, 569.319f, 128.528f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x03145584, 651.136f, 568.538f, 128.729f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x0224011A, 650.242f, 567.746f, 128.729f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x029149DC, 649.661f, 566.94f, 128.929f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x014BF5FE, 648.426f, 566.137f, 128.929f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000008:
			vVar0 = { 0f, 0f, (func_27(-3.9f) + 180f) };
			func_25(uParam0, 0x0138D276, 656.955f, 565.868f, 128.53f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x009A56DC, 656.193f, 565.067f, 128.53f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x00C13F9A, 655.358f, 564.19f, 128.73f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x01F6E09A, 654.534f, 563.324f, 128.73f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x00B5034C, 653.696f, 562.443f, 128.93f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x053BDD0A, 652.862f, 561.566f, 128.93f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000009:
			vVar0 = { 0f, 0f, (func_27(-3.76f) + 180f) };
			func_25(uParam0, 0x047B013E, 662.947f, 560.965f, 128.529f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x03B5CFCC, 662.306f, 560.065f, 128.529f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x04FCA162, 661.603f, 559.079f, 128.73f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x014FF0AA, 660.91f, 558.106f, 128.73f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x027E8838, 660.204f, 557.116f, 128.929f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x009897DE, 659.502f, 556.13f, 128.929f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x0000000A:
			vVar0 = { 0f, 0f, (func_27(-3.68f) + 180f) };
			func_25(uParam0, 0x052DA7E4, 667.872f, 557.785f, 128.53f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x01536604, 667.31f, 556.833f, 128.53f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x0599DB8A, 666.693f, 555.791f, 128.73f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x00B8A592, 666.086f, 554.762f, 128.73f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x0134B81C, 665.467f, 553.715f, 128.93f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x03708B6A, 664.852f, 552.673f, 128.93f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x0000000B:
			vVar0 = { 0f, 0f, (func_27(-3.53f) + 180f) };
			func_25(uParam0, 0x00C8597E, 674.882f, 554.326f, 128.529f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x05D50232, 674.46f, 553.305f, 128.529f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x00BC6146, 673.997f, 552.186f, 128.73f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x054F9336, 673.541f, 551.081f, 128.73f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x00B91C52, 673.076f, 549.958f, 128.929f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x03139D9C, 672.613f, 548.839f, 128.929f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x0000000C:
			vVar0 = { 0f, 0f, (func_27(-3.45f) + 180f) };
			func_25(uParam0, 0x039CEE44, 680.396f, 552.335f, 128.53f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x022C6BFC, 680.063f, 551.281f, 128.53f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x0408D23A, 679.697f, 550.127f, 128.73f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x0446790A, 679.336f, 548.988f, 128.73f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x02D5F6C2, 678.969f, 547.829f, 128.93f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x04B25D00, 678.603f, 546.674f, 128.93f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x0000000D:
			vVar0 = { 0f, 0f, (func_27(-3.31f) + 180f) };
			func_25(uParam0, 0x00AFA73A, 688.034f, 550.483f, 128.529f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x0105339E, 687.853f, 549.393f, 128.529f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x056F9EBA, 687.653f, 548.199f, 128.73f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x00BA5856, 687.457f, 547.02f, 128.73f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x0160D898, 687.257f, 545.821f, 128.929f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x030E2F56, 687.058f, 544.627f, 128.929f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x0000000E:
			vVar0 = { 0f, 0f, (func_27(-3.22f) + 180f) };
			func_25(uParam0, 0x00ECBFDA, 693.855f, 549.783f, 128.53f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x03682A06, 693.767f, 548.682f, 128.53f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x0575BACA, 693.67f, 547.474f, 128.73f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x00F770F6, 693.575f, 546.283f, 128.73f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x03D31528, 693.478f, 545.071f, 128.93f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x03AD0900, 693.381f, 543.865f, 128.93f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x0000000F:
			vVar0 = { 0f, 0f, (func_27(-3.08f) + 180f) };
			func_25(uParam0, 0x012FF494, 701.652f, 549.708f, 128.529f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x00125818, 701.721f, 548.605f, 128.529f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x01E8EC42, 701.795f, 547.396f, 128.729f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x013AA5B0, 701.869f, 546.203f, 128.729f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x007D433A, 701.944f, 544.99f, 128.929f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x00203A78, 702.019f, 543.781f, 128.929f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000010:
			vVar0 = { 0f, 0f, (func_27(-2.99f) + 180f) };
			func_25(uParam0, 0x016E9438, 707.482f, 550.335f, 128.53f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x0293DAD0, 707.644f, 549.242f, 128.53f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x0287C5EC, 707.821f, 548.044f, 128.73f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x01794554, 707.996f, 546.862f, 128.73f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x02E039A2, 708.174f, 545.659f, 128.929f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x00265688, 708.351f, 544.461f, 128.929f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000011:
			vVar0 = { 0f, 0f, (func_27(-3.98f) + 180f) };
			func_25(uParam0, 0x02C9CADC, 646.434f, 564.522f, 128.927f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x0594E198, 645.612f, 563.784f, 128.927f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x0211EE62, 644.71f, 562.975f, 129.127f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x01B3BCCA, 643.821f, 562.177f, 129.127f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x047D85F8, 642.916f, 561.365f, 129.327f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x050F0C6C, 642.015f, 560.557f, 129.327f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000012:
			vVar0 = { 0f, 0f, (func_27(-3.91f) + 180f) };
			func_25(uParam0, 0x03E2AD1C, 651.092f, 559.707f, 128.926f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x05375D5C, 650.325f, 558.912f, 128.926f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x02C06F32, 649.483f, 558.04f, 128.127f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x00BFA950, 648.654f, 557.18f, 129.127f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x01A90820, 647.809f, 556.306f, 129.326f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x05D14750, 646.968f, 555.435f, 129.326f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000013:
			vVar0 = { 0f, 0f, (func_27(-3.75f) + 180f) };
			func_25(uParam0, 0x0349F392, 657.925f, 554.108f, 128.927f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x047AAE50, 657.29f, 553.204f, 128.927f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x054BFB04, 656.593f, 552.213f, 129.127f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x03DE8D22, 655.906f, 551.235f, 129.127f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x04344C1C, 655.207f, 550.241f, 129.327f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x0104F1FE, 654.512f, 549.25f, 129.327f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000014:
			vVar0 = { 0f, 0f, (func_27(-3.68f) + 180f) };
			func_25(uParam0, 0x0494F1E8, 663.545f, 550.463f, 128.926f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x01EA898A, 662.977f, 549.515f, 128.926f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x05D2350C, 662.353f, 548.477f, 129.127f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x00B8BD3E, 661.738f, 547.453f, 129.127f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x03A05F98, 661.111f, 546.411f, 129.326f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x01A83ED6, 660.489f, 545.373f, 129.326f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000015:
			vVar0 = { 0f, 0f, (func_27(-3.53f) + 180f) };
			func_25(uParam0, 0x01250048, 671.531f, 546.515f, 128.927f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x01533D64, 671.116f, 545.491f, 128.927f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x03230750, 670.66f, 544.369f, 129.127f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x01BF215A, 670.211f, 543.262f, 129.127f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x01640DCE, 669.753f, 542.135f, 129.327f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x022B0546, 669.298f, 541.014f, 129.327f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000016:
			vVar0 = { 0f, 0f, (func_27(-3.46f) + 180f) };
			func_25(uParam0, 0x0116FD40, 677.828f, 544.227f, 128.926f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x051E1978, 677.487f, 543.176f, 128.926f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x04B3C3AC, 677.112f, 542.024f, 129.127f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x057ABB2E, 676.744f, 540.888f, 129.127f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x02F4CA2A, 676.368f, 539.731f, 129.326f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x05E67B98, 675.994f, 538.58f, 129.326f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000017:
			vVar0 = { 0f, 0f, (func_27(-3.3f) + 180f) };
			func_25(uParam0, 0x00C3826E, 686.526f, 542.118f, 128.927f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x01CBC3BA, 686.352f, 541.027f, 128.927f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x01457D8C, 686.16f, 539.831f, 129.127f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x00CE338A, 685.972f, 538.652f, 129.127f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x0236AED2, 685.779f, 537.451f, 129.327f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x0572ACC2, 685.588f, 536.256f, 129.327f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000018:
			vVar0 = { 0f, 0f, (func_27(-3.23f) + 180f) };
			func_25(uParam0, 0x01022212, 693.176f, 541.306f, 128.926f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x043E004A, 693.08f, 540.205f, 128.926f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x01E45736, 692.975f, 538.998f, 129.127f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x010CD392, 692.871f, 537.808f, 129.127f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x04B83194, 692.765f, 536.597f, 129.326f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x014D20A0, 692.66f, 535.391f, 129.326f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x00000019:
			vVar0 = { 0f, 0f, (func_27(-3.07f) + 180f) };
			func_25(uParam0, 0x014556CC, 702.065f, 541.218f, 128.927f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x00E82E52, 702.14f, 540.116f, 128.927f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x044D69AE, 702.223f, 538.907f, 129.127f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x015007E8, 702.304f, 537.715f, 129.127f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x01531974, 702.387f, 536.502f, 129.327f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x0284B7E4, 703.116f, 526.841f, 129.618f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		case 0x0000001A:
			vVar0 = { 0f, 0f, (func_27(-3f) + 180f) };
			func_25(uParam0, 0x01826F6C, 708.727f, 541.922f, 128.926f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x034B24BA, 709.881f, 539.828f, 128.926f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x045385BE, 709.05f, 539.628f, 129.127f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			func_25(uParam0, 0x018D2088, 709.217f, 538.445f, 129.127f, vVar0, 0x00000006, 0x00000000, 0x00000000);
			func_25(uParam0, 0x03B60FDC, 709.386f, 537.241f, 129.326f, vVar0, 0x00000006, 0x00000001, 0x00000000);
			func_25(uParam0, 0x028AD3EA, 709.555f, 536.043f, 129.326f, vVar0, 0x00000006, 0x00000002, 0x00000000);
			break;
		
		default:
			break;
	}
}

void func_24(var uParam0, vector3 vParam1, vector3 vParam2, int iParam3, float fParam4, float fParam5)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = iParam3;
	*uParam0 = 0x00000001;
	uParam0->f_8 = fParam4;
	uParam0->f_9 = fParam5;
}

void func_25(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, int iParam4, int iParam5, int iParam6)
{
	if (uParam0->f_9A >= *uParam0)
	{
		return;
	}
	func_26(uParam0[uParam0->f_9A /*17*/], iParam1, vParam2, vParam3, iParam4, iParam5, iParam6);
	uParam0->f_9A++;
}

void func_26(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, var uParam4, var uParam5, var uParam6)
{
	*uParam0 = { vParam2 };
	uParam0->f_3 = { vParam3 };
	uParam0->f_6 = uParam4;
	uParam0->f_7 = uParam1;
	uParam0->f_8 = uParam5;
	uParam0->f_9 = uParam6;
}

float func_27(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_28(var uParam0)
{
	uParam0->f_9A = 0x00000000;
	uParam0->f_9B[0x00000000 /*11*/] = 0x00000000;
	uParam0->f_9B[0x00000001 /*11*/] = 0x00000000;
}

int func_29(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x1C0640BA9A7327B3() + 7500;
	unk_0xD7992BEF7A9D109E(sParam0, iParam1);
	if (unk_0x67C1D9E5B91B2E37(iParam1) && !bParam3)
	{
		return 0x00000001;
	}
	if (iParam2 == 0x00000000)
	{
		return 0x00000001;
	}
	while (!unk_0x67C1D9E5B91B2E37(iParam1))
	{
		SYSTEM::WAIT(0x00000000);
		if (unk_0x1C0640BA9A7327B3() > iVar0 && !unk_0x67C1D9E5B91B2E37(iParam1))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_30(char* sParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1C0640BA9A7327B3() + 7500;
	if (*uParam1 == 0x00000000)
	{
		*uParam1 = unk_0xB01F55A0FD1CFD49(sParam0);
	}
	if (unk_0x83D8570832F172A7(*uParam1))
	{
		return 0x00000001;
	}
	if (iParam2 == 0x00000000)
	{
		return 0x00000001;
	}
	while (!unk_0x83D8570832F172A7(*uParam1))
	{
		SYSTEM::WAIT(0x00000000);
		if (unk_0x1C0640BA9A7327B3() > iVar0 && !unk_0x83D8570832F172A7(*uParam1))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_31(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1C0640BA9A7327B3() + 7500;
	unk_0x3F423BF5B8125A50(sParam0);
	if (unk_0xB4AE0788C1587752(sParam0))
	{
		return 0x00000001;
	}
	if (iParam1 == 0x00000000)
	{
		return 0x00000001;
	}
	while (!unk_0xB4AE0788C1587752(sParam0))
	{
		SYSTEM::WAIT(0x00000000);
		if (unk_0x1C0640BA9A7327B3() > iVar0 && !unk_0xB4AE0788C1587752(sParam0))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

char* func_32(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "misslester1b_crowd@a_";
			break;
		
		case 0x00000001:
			sVar0 = "misslester1b_crowd@b_";
			break;
		
		case 0x00000002:
			sVar0 = "misslester1b_crowd@c_";
			break;
		
		case 0x00000003:
			sVar0 = "misslester1b_crowd@d_";
			break;
		
		case 0x00000004:
			sVar0 = "misslester1b_crowd@e_";
			break;
		
		case 0x00000005:
			sVar0 = "misslester1b_crowd@f_";
			break;
		
		case 0x00000006:
			sVar0 = "misslester1b_crowd@g_";
			break;
		
		case 0x00000007:
			sVar0 = "misslester1b_crowd@h_";
			break;
		
		case 0x00000008:
			sVar0 = "misslester1b_crowd@i_";
			break;
		
		case 0x00000009:
			sVar0 = "misslester1b_crowd@j_";
			break;
		
		case 0x0000000A:
			sVar0 = "misslester1b_crowd@k_";
			break;
		
		case 0x0000000B:
			sVar0 = "misslester1b_crowd@l_";
			break;
		
		case 0x0000000C:
			sVar0 = "misslester1b_crowd@m_";
			break;
	}
	return sVar0;
}

void func_33(int iParam0, int iParam1)
{
	unk_0xFF42993F8A095C58(0x00000000);
	unk_0x2733E1E56786AB9E(0x00000001);
	unk_0xC83E7A5E408DF68C(0x00000000);
	unk_0x3F50EAA916065520(0x00000001);
	unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x060F249A9A3E3F4E(0x00000000);
	unk_0xCE1730371ACDCCFC(0x00000001);
	*iParam0 = unk_0x7D6CA5F52B3748BF(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	unk_0xCD7D80FD792F9954("DRIVE", 0x00000000);
	unk_0xE342F209E49C5314(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0x00000000, 0x00000001);
	unk_0x21688103CC7F9B19(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0x00000000);
	if (func_7(unk_0x16F2683693E537C9()) && iParam1 == 0x00000001)
	{
		unk_0x745CE398A4B0A3C6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 500f, 0x00000000);
	}
}

void func_34(bool bParam0)
{
	unk_0x15EA7F4313456B1D(0x00000002, bParam0);
	unk_0x15EA7F4313456B1D(0x00000003, bParam0);
	unk_0x15EA7F4313456B1D(0x00000004, bParam0);
	unk_0x15EA7F4313456B1D(0x00000005, bParam0);
	unk_0x15EA7F4313456B1D(0x00000006, bParam0);
	unk_0x15EA7F4313456B1D(0x00000007, bParam0);
	unk_0x15EA7F4313456B1D(0x00000008, bParam0);
	unk_0x15EA7F4313456B1D(0x00000009, bParam0);
	unk_0x15EA7F4313456B1D(0x0000000A, bParam0);
	unk_0x15EA7F4313456B1D(0x0000000B, bParam0);
	unk_0x15EA7F4313456B1D(0x0000000C, bParam0);
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
		func_41();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_40(0x00000000))
		{
			func_36(0x00000000);
		}
	}
	else if (Global_4C1E.f_1 == 0x00000001)
	{
		if (!Global_4C1E.f_1 == 0x00000000)
		{
			Global_4C1E.f_1 = 0x00000003;
		}
	}
}

void func_36(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_38())
		{
			func_37(0x00000001, 0x00000001);
		}
		else
		{
			func_37(0x00000000, 0x00000000);
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
	if (!func_16())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_40(0x00000000))
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

bool func_38()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_39()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_40(int iParam0)
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

void func_41()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_42()
{
	func_43();
	func_8(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_43()
{
	int iVar0;
	
	if (unk_0x39B7A3CCD2467CAB())
	{
		if (unk_0x22A8E52414415B76())
		{
			unk_0x152C90FB9FE48DAC();
		}
		unk_0x5C8D148FC238F38A();
	}
	func_53(&iLocal_60);
	unk_0x683413D9B7010687("Big_Disp");
	unk_0x81CF20E10AAD5FD5("LInvader");
	unk_0xE17FDF9E3068281B(&iLocal_51);
	unk_0xE17FDF9E3068281B(&iLocal_52);
	unk_0x96D521DDDB9AD218();
	iVar0 = 0x00000000;
	while (iVar0 < Local_42)
	{
		func_50(&(Local_42[iVar0 /*178*/]));
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Local_44)
	{
		func_47(&(Local_44[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Local_46)
	{
		func_47(&(Local_46[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_40)
	{
		func_46(iLocal_40[iVar0]);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000C)
	{
		func_45(func_32(iVar0));
		iVar0++;
	}
	func_44(iLocal_63);
	func_8(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
}

void func_44(int iParam0)
{
	unk_0x2733E1E56786AB9E(0x00000000);
	unk_0xFF42993F8A095C58(0x00000003);
	unk_0x3F50EAA916065520(0x00000000);
	unk_0xC83E7A5E408DF68C(0x00000003);
	unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000001);
	unk_0x060F249A9A3E3F4E(0x00000001);
	unk_0xCE1730371ACDCCFC(0x00000000);
	unk_0x2952D66A502EA873(iParam0, 0x00000000);
	unk_0xCD7D80FD792F9954("DRIVE", 0x00000001);
	unk_0xE342F209E49C5314(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0x00000001, 0x00000001);
}

void func_45(char* sParam0)
{
	unk_0x8D17794CE3273D70(sParam0);
}

void func_46(int iParam0)
{
	if (iParam0 != 0x00000000)
	{
		unk_0x71199B01895C6202(iParam0);
	}
}

void func_47(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	sVar1 = func_49(uParam0->f_10);
	sVar2 = func_48(uParam0->f_10);
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_11)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_11[iVar0]) && !unk_0x437347B10A200C4B(uParam0->f_11[iVar0], 0x00000000))
		{
			unk_0x7720CBBC7DD82563(uParam0->f_11[iVar0], sVar2, sVar1, -1000f);
		}
		func_53(&(uParam0->f_11[iVar0]));
		iVar0++;
	}
}

char* func_48(int iParam0)
{
	char* sVar0;
	
	if (iParam0 == 0x00000000)
	{
	}
	sVar0 = "001077_01_14";
	return sVar0;
}

char* func_49(int iParam0)
{
	char* sVar0;
	
	if (iParam0 == 0x00000000)
	{
	}
	sVar0 = "misslester1b_crowdlow@14@";
	return sVar0;
}

void func_50(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_52(uParam0[iVar0 /*17*/]);
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_9B)
	{
		func_51(&(uParam0->f_9B[iVar0 /*11*/].f_A));
		iVar0++;
	}
}

void func_51(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0x00000000))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

void func_52(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_A)
	{
		func_51(&(uParam0->f_A[iVar0]));
		iVar0++;
	}
}

void func_53(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
		}
		unk_0xF690C84DADBB3551(iParam0);
	}
}

