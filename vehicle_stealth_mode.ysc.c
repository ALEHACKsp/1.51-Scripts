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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	iLocal_28 = 0x00000003;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	if (func_88(&iLocal_46))
	{
		while (!func_76())
		{
			func_64(&iLocal_46);
			if (func_54(&iLocal_46))
			{
			}
			else
			{
				func_14(&iLocal_46);
				SYSTEM::WAIT(0x00000000);
			}
		}
	}
	func_1();
}

void func_1()
{
	func_13();
	if (func_10())
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (func_8(&iLocal_46))
	{
		func_4(&iLocal_46);
	}
	unk_0x34D79252800B23FF(0x00000005);
	func_3();
	unk_0x7126AEBCB4199143(unk_0xD803B885F5E47A62(), 0x00000000);
	func_2();
}

void func_2()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_3()
{
	unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_354), 0x00000003);
}

void func_4(int iParam0)
{
	func_7(0x00000000, 0x00000001);
	func_6(0x00000000, 0xFFFFFFFF, 0x00000001);
	func_5(&(iParam0->f_6), 0x00000005);
}

void func_5(int iParam0, int iParam1)
{
	unk_0x0674E58A79778E99(iParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!unk_0x1727A44C562FBED2(Global_24DDCF.f_62B) || Global_24DDCF.f_62B == unk_0x0D0A574C76D769AC()) || bParam2)
	{
		if (bParam0)
		{
			Global_24DDCF.f_62B = unk_0x0D0A574C76D769AC();
			Global_24DDCF.f_62C = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			Global_24DDCF.f_62B = 0xFFFFFFFF;
		}
		Global_24DDCF.f_62E = iParam1;
		Global_24DDCF.f_630 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
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

bool func_8(int iParam0)
{
	return func_9(&(iParam0->f_6), 0x00000005);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, iParam1);
}

bool func_10()
{
	return ((((func_12("STEALTH_ON") || func_12("STEALTH_OFF")) || func_12(func_11())) || func_12("STEALTH_ON_P")) || func_12("STEALTH_OFF_P"));
}

char* func_11()
{
	return "STEALTH_WARN";
}

bool func_12(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_13()
{
	unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_354), 0x00000001);
}

void func_14(int iParam0)
{
	func_51(iParam0);
	func_50(iParam0);
	if (func_49(iParam0))
	{
		if (((func_48(iParam0) && !func_47(iParam0)) && unk_0xAFE0D3608EDA7039(iParam0->f_1)) && !func_46())
		{
			func_45(iParam0, 0x00000001, 0x00000000);
			func_44(iParam0);
		}
		else if (func_9(&(iParam0->f_6), 0x00000006) && func_47(iParam0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0->f_1) && !func_46())
			{
				func_45(iParam0, 0x00000000, 0x00000000);
				func_5(&(iParam0->f_6), 0x00000006);
				func_5(&(iParam0->f_6), 0x00000002);
			}
		}
	}
	if (func_43(iParam0))
	{
		unk_0x7126AEBCB4199143(unk_0xD803B885F5E47A62(), 0x00000001);
		func_42();
		func_41(iParam0);
	}
	else if (func_40(iParam0))
	{
		unk_0x7126AEBCB4199143(unk_0xD803B885F5E47A62(), 0x00000000);
		func_13();
		func_41(iParam0);
		func_39(iParam0, 0x00000005);
	}
	if (func_47(iParam0) && !func_48(iParam0))
	{
		func_37(iParam0);
		func_36();
		func_39(iParam0, 0x00000002);
		if (func_33(iParam0))
		{
			func_32();
		}
	}
	else
	{
		func_15(iParam0);
	}
	func_3();
	unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_354), 0x00000004);
}

void func_15(int iParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0x00000000) && !func_9(&(iParam0->f_6), 0x00000002)) && !unk_0xFEBC1E4EC9E001F0()) && func_31(iParam0)) && !func_30(0x00000000)) && !func_29()) && func_27()) && unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(iParam0->f_1, 0xFFFFFFFF, 0x00000000)))
	{
		func_21(iParam0, 0x00000001);
		func_20(&(iParam0->f_6), 0x00000003);
		iVar0 = func_19(iParam0->f_6.f_2, 0x00000D05, 0x00002710);
		iParam0->f_6.f_2 = 0x00000000;
		func_17(func_18(iParam0), iVar0);
		func_16(iParam0);
		func_20(&(iParam0->f_6), 0x00000000);
	}
}

void func_16(int iParam0)
{
	func_20(&(iParam0->f_6), 0x00000002);
}

void func_17(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

char* func_18(int iParam0)
{
	if (func_49(iParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_19(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_20(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(iParam0, iParam1);
}

void func_21(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_49(iParam0))
	{
		switch (iParam0->f_2)
		{
			case 0x46699F47:
				iVar0 = (func_24(0x00004A3C, 0xFFFFFFFF, 0xFFFFFFFF) + iParam1);
				if (iVar0 >= 0x00000000)
				{
					func_22(0x00004A3C, iVar0, 0xFFFFFFFF, 0x00000001);
				}
				break;
			}
	}
}

var func_22(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_23();
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

int func_23()
{
	return Global_1407E9;
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_23();
	}
	iVar0 = 0x00000000;
	iVar1 = func_26(iParam0, iParam1);
	iVar2 = func_25(iParam0);
	if (0x00000000 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 0x00000008, iParam2))
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_25(int iParam0)
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

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_23();
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

bool func_27()
{
	return (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_354, 0x00000004) && !func_28());
}

bool func_28()
{
	return ((Global_440000.f_127B9 == 0x00000006 || Global_440000.f_127B9 == 0x00000007) && Global_440000.f_2 == 0x00000014);
}

bool func_29()
{
	return Global_12061;
}

int func_30(int iParam0)
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

int func_31(int iParam0)
{
	if (func_49(iParam0))
	{
		switch (iParam0->f_2)
		{
			case 0x46699F47:
				return func_24(0x00004A3C, 0xFFFFFFFF, 0xFFFFFFFF) < 0x00000003;
			}
		
		default:
	}
	return 0x00000001;
}

void func_32()
{
	if (!unk_0xFEBC1E4EC9E001F0())
	{
		func_17("STEALTH_WARN", 0x00000BB8);
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (func_30(0x00000000) || func_29())
	{
		return 0x00000000;
	}
	iVar0 = func_34(iParam0);
	switch (iVar0)
	{
		case 0x00000001:
			if ((unk_0xD245978525608929(0x00000000, 0x00000072) || unk_0xD245978525608929(0x00000000, 0x00000063)) || unk_0xD245978525608929(0x00000000, 0x00000064))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000000:
			if (unk_0xD245978525608929(0x00000000, 0x00000072))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (unk_0xD245978525608929(0x00000000, 0x0000005C))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			if (unk_0xD245978525608929(0x00000000, 0x00000044))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_34(int iParam0)
{
	if (!func_35(iParam0))
	{
		return 0x00000004;
	}
	switch (iParam0->f_2)
	{
		case 0x46699F47:
			switch (iParam0->f_4)
			{
				case 0xFFFFFFFF:
					return 0x00000001;
				
				case 0x00000000:
					return 0x00000002;
				
				default:
			}
			return 0x00000004;
		
		default:
	}
	return 0x00000004;
}

bool func_35(int iParam0)
{
	return (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000));
}

void func_36()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000018, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000042, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000043, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000072, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000045, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000046, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000005B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000005C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000064, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
}

void func_37(int iParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0x00000000) && !func_9(&(iParam0->f_6), 0x00000001)) && !unk_0xFEBC1E4EC9E001F0()) && func_9(&(iParam0->f_6), 0x00000003)) && !func_30(0x00000000)) && !func_29()) && func_27()) && unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(iParam0->f_1, 0xFFFFFFFF, 0x00000000)))
	{
		iVar0 = func_19(iParam0->f_6.f_2, 0x00000D05, 0x00002710);
		iParam0->f_6.f_2 = 0x00000000;
		func_17(func_38(iParam0), iVar0);
		func_44(iParam0);
		func_20(&(iParam0->f_6), 0x00000000);
	}
}

char* func_38(int iParam0)
{
	if (func_49(iParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_39(int iParam0, int iParam1)
{
	if (func_48(iParam0))
	{
		return;
	}
	if (unk_0x02A813E6E0380440() != iParam1)
	{
		unk_0x34D79252800B23FF(iParam1);
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > iParam1)
	{
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), iParam1, 0x00000000);
	}
}

bool func_40(int iParam0)
{
	return (!func_9(iParam0, 0x00000000) && func_9(iParam0, 0x00000001));
}

void func_41(int iParam0)
{
	func_5(&(iParam0->f_6), 0x00000000);
	if (func_10())
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (!func_49(iParam0))
	{
		if (func_47(iParam0))
		{
			func_5(&(iParam0->f_6), 0x00000001);
		}
		else
		{
			func_5(&(iParam0->f_6), 0x00000002);
		}
	}
}

void func_42()
{
	unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_354), 0x00000001);
}

bool func_43(int iParam0)
{
	return (func_9(iParam0, 0x00000000) && !func_9(iParam0, 0x00000001));
}

void func_44(int iParam0)
{
	func_20(&(iParam0->f_6), 0x00000001);
}

void func_45(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0->f_2)
	{
		case 0x46699F47:
			unk_0x14F219E1B81AE5CE(iParam0->f_1, !bParam1, iParam2);
			break;
	}
}

bool func_46()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_354, 0x00000003);
}

bool func_47(int iParam0)
{
	return func_9(iParam0, 0x00000000);
}

bool func_48(int iParam0)
{
	return func_9(iParam0, 0x00000002);
}

bool func_49(int iParam0)
{
	return ((func_35(iParam0) && iParam0->f_3 == unk_0x16F2683693E537C9()) || unk_0xA30B8362589C124A(iParam0->f_1, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9());
}

void func_50(int iParam0)
{
	if (func_10() && (func_30(0x00000000) || func_29()))
	{
		iParam0->f_6.f_2 = 0x00000001;
		unk_0xA37A90C62806D848(0x00000001);
		func_5(&(iParam0->f_6), 0x00000000);
		if (func_47(iParam0))
		{
			func_5(&(iParam0->f_6), 0x00000001);
		}
		else
		{
			func_5(&(iParam0->f_6), 0x00000002);
			if (func_49(iParam0))
			{
				func_21(iParam0, 0xFFFFFFFF);
			}
		}
	}
}

void func_51(int iParam0)
{
	if (func_47(iParam0))
	{
		if (func_8(iParam0))
		{
			if (func_53())
			{
				func_4(iParam0);
			}
		}
		else if (!func_53())
		{
			func_52(iParam0);
		}
	}
	else if (func_8(iParam0))
	{
		func_4(iParam0);
	}
	unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_354), 0x00000002);
}

void func_52(int iParam0)
{
	func_7(0x00000001, 0x00000001);
	func_6(0x00000001, 0xFFFFFFFF, 0x00000001);
	func_20(&(iParam0->f_6), 0x00000005);
}

bool func_53()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_354, 0x00000002);
}

int func_54(int iParam0)
{
	if (!func_35(iParam0))
	{
		return 0x00000001;
	}
	if (!func_63(iParam0))
	{
		return 0x00000001;
	}
	if (!func_62(iParam0->f_2))
	{
		return 0x00000001;
	}
	if (func_61(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		return 0x00000001;
	}
	if (func_60(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (func_57(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (func_55(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_55(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (Global_25033E[iParam0 /*421*/].f_EC > 0xFFFFFFFF)
		{
			if (func_56(Global_25033E[iParam0 /*421*/].f_EC) == 0x00000004)
			{
				return 0x00000001;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 0x00000004))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_56(int iParam0)
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

int func_57(int iParam0)
{
	if (iParam0 != func_59() && func_58(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000003);
	}
	return 0x00000000;
}

int func_58(int iParam0, bool bParam1, bool bParam2)
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

int func_59()
{
	return 0xFFFFFFFF;
}

int func_60(int iParam0)
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

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_59())
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

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0x46699F47:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_63(int iParam0)
{
	return (unk_0xC844350D5D58C99A(iParam0->f_1) && unk_0xDF1306B443CD3D15(iParam0->f_1, 0x00000000));
}

void func_64(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(iParam0, 0x00000004);
	bVar1 = func_9(iParam0, 0x00000000);
	func_75(iParam0);
	if (bVar0)
	{
		func_20(iParam0, 0x00000003);
	}
	else
	{
		func_5(iParam0, 0x00000003);
	}
	if (bVar1)
	{
		func_20(iParam0, 0x00000001);
	}
	else
	{
		func_5(iParam0, 0x00000001);
	}
	if (func_35(iParam0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iParam0->f_1 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			if (func_63(iParam0))
			{
				iParam0->f_2 = unk_0x134B62B726CEC8E6(iParam0->f_1);
				if (unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002))
				{
					func_20(iParam0, 0x00000002);
				}
			}
		}
	}
	if (func_63(iParam0))
	{
		if (!unk_0xBBA8A868118C90ED(iParam0->f_1, 0xFFFFFFFF, 0x00000000))
		{
			iVar2 = unk_0xA30B8362589C124A(iParam0->f_1, 0xFFFFFFFF, 0x00000000);
			if ((unk_0xC844350D5D58C99A(iVar2) && !unk_0x437347B10A200C4B(iVar2, 0x00000000)) && unk_0x34BFC6F0CB887BC2(iVar2))
			{
				iParam0->f_3 = iVar2;
				if (iVar2 == unk_0x16F2683693E537C9())
				{
					func_20(iParam0, 0x00000004);
					if (!func_9(iParam0, 0x00000003))
					{
						func_20(&(iParam0->f_6), 0x00000006);
					}
				}
			}
		}
		if (func_35(iParam0))
		{
			iParam0->f_4 = func_74(unk_0x16F2683693E537C9(), 0x00000000);
		}
		if (func_49(iParam0))
		{
			if (func_73() && func_67(iParam0))
			{
				func_20(iParam0, 0x00000000);
			}
		}
		else
		{
			func_65(iParam0);
		}
	}
	if (func_43(iParam0))
	{
		iParam0->f_6.f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_65(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_3) && func_66(unk_0x83FACCC48B68F9D1(iParam0->f_3)))
	{
		func_20(iParam0, 0x00000000);
	}
	else
	{
		func_5(iParam0, 0x00000000);
	}
}

bool func_66(int iParam0)
{
	return (iParam0 != 0xFFFFFFFF && unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_354, 0x00000001));
}

bool func_67(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_72();
	if (unk_0xAFE0D3608EDA7039(iParam0->f_1))
	{
		func_71(iParam0);
		switch (iParam0->f_2)
		{
			case 0x46699F47:
				bVar0 = !unk_0xDE85FD29C72C3AA2(iParam0->f_1);
				break;
		}
	}
	else if (func_70(iParam0))
	{
		if (func_69(iParam0))
		{
			unk_0x0C8A454B494DAA0D(iParam0->f_1);
		}
	}
	else
	{
		func_68(iParam0);
	}
	return bVar0;
}

void func_68(var uParam0)
{
	func_20(&(uParam0->f_6), 0x00000004);
	uParam0->f_6.f_1 = unk_0x1C0640BA9A7327B3();
}

bool func_69(var uParam0)
{
	return (unk_0x1C0640BA9A7327B3() - uParam0->f_6.f_1) >= 0x000000C8;
}

bool func_70(var uParam0)
{
	return func_9(&(uParam0->f_6), 0x00000004);
}

void func_71(var uParam0)
{
	func_5(&(uParam0->f_6), 0x00000004);
}

bool func_72()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_354, 0x00000001);
}

bool func_73()
{
	return !func_28();
}

int func_74(int iParam0, int iParam1)
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

void func_75(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0xFFFFFFFF;
}

int func_76()
{
	if (func_77())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_77()
{
	var uVar0;
	
	func_85(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_84())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_83())
	{
		return 0x00000001;
	}
	if (func_82(0x0000009F))
	{
		if (!func_81())
		{
			return 0x00000001;
		}
	}
	if (func_82(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_78() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_78()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_78()
{
	switch (func_80())
	{
		case 0x00000000:
			return func_79();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_79()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_80()
{
	return Global_7830;
}

bool func_81()
{
	return Global_2564C8.f_256;
}

int func_82(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_83()
{
	return Global_258C08;
}

bool func_84()
{
	return Global_2564C8.f_251;
}

void func_85(var uParam0)
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
					func_86(iVar0);
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

void func_86(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_58(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_87(iVar2, &bVar3))
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

int func_87(int iParam0, var uParam1)
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

int func_88(int iParam0)
{
	func_64(iParam0);
	if (func_63(iParam0))
	{
		if (func_49(iParam0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0->f_1))
			{
				if (!func_46())
				{
					func_45(iParam0, 0x00000000, 0x00000000);
				}
				else
				{
					func_20(&(iParam0->f_6), 0x00000003);
				}
			}
		}
		else
		{
			func_20(&(iParam0->f_6), 0x00000003);
		}
	}
	return 0x00000001;
}

