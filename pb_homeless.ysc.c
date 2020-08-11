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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_48 = { 0f, 0f, 0f };
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<2> Local_54 = { 0, 5 } ;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 5;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 0x00000003;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	vLocal_47 = { ScriptParam_54.f_1[0x00000000 /*3*/] };
	iLocal_44 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
	func_28();
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		func_28();
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (unk_0x338D6FF72D84D90F())
		{
			if (func_8(0x00000003))
			{
				switch (iLocal_43)
				{
					case 0x00000000:
						if (iLocal_45 == 0x00000001)
						{
							iLocal_43 = 0x00000001;
						}
						else
						{
							func_7();
						}
						break;
					
					case 0x00000001:
						if (!unk_0x437347B10A200C4B(iLocal_50, 0x00000000))
						{
							if (iLocal_46 == 0x00000000)
							{
								if (func_2(iLocal_50, 0x00000000, 0x3F000000, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_46 = 0x00000001;
								}
							}
						}
						if (iLocal_52 == 0x00000000)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				func_28();
			}
		}
		else
		{
			func_28();
		}
	}
}

void func_1()
{
	if (SYSTEM::TIMERB() > 0x00002710)
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_47, 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			SYSTEM::SETTIMERB(0x00000000);
			if (!unk_0x437347B10A200C4B(iLocal_50, 0x00000000))
			{
				if (iLocal_44 == 0x00000000)
				{
					if (iLocal_46 == 0x00000000)
					{
					}
					unk_0xDD353D0E9C789D0E(&iLocal_53);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "amb@drug_dealer", "beckon_03", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_53);
					unk_0x78ADC381772E3D54(iLocal_50, iLocal_53);
					unk_0xF82EA857DA10E0CD(&iLocal_53);
				}
				else if (!unk_0x437347B10A200C4B(iLocal_51, 0x00000000))
				{
					unk_0xF96A174EE26D7588(iLocal_50, iLocal_51, 0x00000000);
					if (iLocal_46 == 0x00000000)
					{
					}
					unk_0x01E4BB5190DF7317(iLocal_51, 0x471C4000, 0x00000000);
					iLocal_44 = 0x00000000;
				}
			}
		}
	}
}

int func_2(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	float fVar0;
	
	if (iParam4 == 0x00000002)
	{
		fVar0 = 150f;
	}
	else if (iParam4 == 0x00000001)
	{
		fVar0 = 100f;
	}
	else if (iParam4 == 0x00000000)
	{
		fVar0 = 40f;
	}
	switch (iParam3)
	{
		case 0x00000002:
			if (func_3(iParam0, func_6(iParam1, 0x00000002, fParam2), fVar0, fParam2, bParam5))
			{
				return 0x00000001;
			}
			if (func_3(iParam0, func_6(iParam1, 0x00000003, fParam2), fVar0, fParam2, bParam5))
			{
				return 0x00000001;
			}
			if (func_3(iParam0, func_6(iParam1, 0x00000005, fParam2), fVar0, fParam2, bParam5))
			{
				return 0x00000001;
			}
			if (func_3(iParam0, func_6(iParam1, 0x00000006, fParam2), fVar0, fParam2, bParam5))
			{
				return 0x00000001;
			}
			if (func_3(iParam0, func_6(iParam1, 0x00000007, fParam2), fVar0, fParam2, bParam5))
			{
				return 0x00000001;
			}
			if (func_3(iParam0, func_6(iParam1, 0x00000008, fParam2), fVar0, fParam2, bParam5))
			{
				return 0x00000001;
			}
		
		case 0x00000001:
			if (func_3(iParam0, func_6(iParam1, 0x00000001, fParam2), fVar0, fParam2, bParam5))
			{
				return 0x00000001;
			}
		
		case 0x00000000:
			if (func_3(iParam0, func_6(iParam1, 0x00000000, fParam2), fVar0, fParam2, bParam5))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_3(int iParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	vector3 vVar1;
	
	if (fParam3 < 1f)
	{
		fVar0 = (1f + 0.5f);
	}
	else
	{
		fVar0 = (fParam3 + 0.5f);
	}
	vVar1 = { (fParam3 + 0.2f), (fParam3 + 0.2f), fVar0 };
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if ((((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iParam0, vParam1), vVar1, 0x00000000, 0x00000001, 0x00000000) && unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iParam0, 0x00000001), fParam2)) && func_5(bParam4)) && !unk_0x869EFD0BC0868856(iParam0)) && !unk_0xA48EBBEA418ADC94(iParam0))
		{
			func_4(iParam0, 0x00000001);
			return 0x00000001;
		}
		else
		{
			func_4(iParam0, 0x00000000);
		}
	}
	return 0x00000000;
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
	}
}

int func_5(bool bParam0)
{
	if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		if (bParam0)
		{
			if (unk_0x504A57ECC0B1E81C(unk_0x16F2683693E537C9()) == 1f || unk_0x504A57ECC0B1E81C(unk_0x16F2683693E537C9()) == 0f)
			{
				return 0x00000001;
			}
		}
		else if (unk_0x504A57ECC0B1E81C(unk_0x16F2683693E537C9()) == 1f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_6(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0x00000000:
			if (iParam0 == 0x00000000)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 0x00000001)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 0x00000003)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 0x00000002)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 0x00000001:
			if (iParam0 == 0x00000003)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 0x00000002)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 0x00000000)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 0x00000001)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 0x00000002:
			if (iParam0 == 0x00000002)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 0x00000003)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 0x00000001)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 0x00000000)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 0x00000003:
			if (iParam0 == 0x00000001)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 0x00000000)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 0x00000002)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 0x00000003)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 0x00000005:
			if (iParam0 == 0x00000001)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0x00000000)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0x00000003)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 0x00000002)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 0x00000006:
			if (iParam0 == 0x00000000)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0x00000002)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0x00000001)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 0x00000003)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 0x00000007:
			if (iParam0 == 0x00000003)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0x00000001)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0x00000002)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 0x00000000)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 0x00000008:
			if (iParam0 == 0x00000002)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0x00000003)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0x00000000)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 0x00000001)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
	}
	if (fParam2 < 0f)
	{
		fParam2 = (fParam2 * -1f);
	}
	return vVar0;
}

void func_7()
{
	if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_47, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
	{
		unk_0x523BCC9DC80CD82F(joaat("a_m_o_tramp_01"));
		unk_0x523BCC9DC80CD82F(joaat("g_m_y_strpunk_01"));
		unk_0x3F423BF5B8125A50("amb@drug_dealer");
		while ((!unk_0xB87F6CF6E5628C67(joaat("a_m_o_tramp_01")) || !unk_0xB87F6CF6E5628C67(joaat("g_m_y_strpunk_01"))) || !unk_0xB4AE0788C1587752("amb@drug_dealer"))
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0xF63400DBE3303D26("homeless", &iLocal_49);
		vLocal_48.z = (vLocal_47.z - 1f);
		iLocal_50 = unk_0x36F2404464202779(0x00000013, joaat("a_m_o_tramp_01"), vLocal_47.x, vLocal_47.y, vLocal_48.z, 0f, 0x00000001, 0x00000001);
		unk_0x6DF7BF67E86AAE86(iLocal_50, iLocal_49);
		if (iLocal_44 == 0x00000001)
		{
			vLocal_48 = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0.8f, 0.8f, -1f) };
			iLocal_51 = unk_0x36F2404464202779(0x00000005, joaat("g_m_y_strpunk_01"), vLocal_48, 0f, 0x00000001, 0x00000001);
			unk_0xF63400DBE3303D26("homeless", &iLocal_49);
			unk_0x6DF7BF67E86AAE86(iLocal_51, iLocal_49);
			if (!unk_0x437347B10A200C4B(iLocal_50, 0x00000000))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_53);
				unk_0x796BDF31572BB055(0x00000000, vLocal_48, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "amb@drug_dealer", "beckon_01", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_53);
				unk_0x78ADC381772E3D54(iLocal_50, iLocal_53);
				unk_0xF82EA857DA10E0CD(&iLocal_53);
			}
			if (!unk_0x437347B10A200C4B(iLocal_51, 0x00000000))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_53);
				unk_0x796BDF31572BB055(0x00000000, vLocal_47, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "amb@drug_dealer", "beckon_02", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_53);
				unk_0x78ADC381772E3D54(iLocal_51, iLocal_53);
				unk_0xF82EA857DA10E0CD(&iLocal_53);
			}
		}
		iLocal_45 = 0x00000001;
	}
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			if (func_27(0x00000006) || func_27(0x00000007))
			{
				return 0x00000001;
			}
			else
			{
				return func_8(0x00000003);
			}
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			if (func_25(0x00000005))
			{
				if (func_9(0x00000004))
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_20();
				if (!func_19(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_18()) || Global_1B05D) || Global_7832) || func_17()) || func_16(0x00000008, 0xFFFFFFFF)) || func_15()) || func_14()) || func_13()) || func_12()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_18()) || Global_7832) || func_17()) || func_16(0x00000008, 0xFFFFFFFF)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_18()) || Global_1B05D) || Global_7832) || func_17()) || func_16(0x00000008, 0xFFFFFFFF)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_18()) || Global_1B05D) || Global_7832) || func_17()) || func_16(0x00000008, 0xFFFFFFFF)) || func_15()) || func_14()) || func_12()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_18() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_16(0x00000008, 0xFFFFFFFF)) || func_12()) || func_11()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_16(0x00000008, 0xFFFFFFFF) || func_15()) || func_14()) || func_11()) || func_10())
						{
							return 0x00000000;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 0x00000003) && unk_0x00A15D69BCAA5267() < 0x00000008)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000006:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_18()) || Global_7832) || func_17()) || func_16(0x00000008, 0xFFFFFFFF)) || func_14()) || func_13()) || func_12()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_18()) || func_14()) || Global_1B05D) || Global_7832) || func_17()) || Global_A664) || func_16(0x00000008, 0xFFFFFFFF)) || func_13()) || func_11()) || func_12()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_18()) || Global_1B05D) || Global_7832) || func_17()) || func_16(0x00000008, 0xFFFFFFFF)) || func_13()) || func_11()) || func_15()) || func_14()) || func_12())
						{
							return 0x00000000;
						}
						break;
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
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_10()
{
	return Global_181DF.f_1;
}

int func_11()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_12()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_13()
{
	if (Global_12C52)
	{
		return 0x00000001;
	}
	else if (Global_F042 && !Global_F048)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_14()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_15()
{
	return Global_181EC.f_159 > 0x00000000;
}

bool func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam1 > 0xFFFFFFFF)
			{
				return Global_150392.f_CB[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_418, iParam0);
}

var func_17()
{
	return Global_14086D;
}

int func_18()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

bool func_19(int iParam0)
{
	return iParam0 < 0x00000003;
}

var func_20()
{
	func_21();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_21()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_23(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_22(unk_0x16F2683693E537C9());
			if (func_19(iVar0) && (!func_27(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_19(Global_1B416.f_936.f_21B.f_10E1))
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

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_23(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_24(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_25(int iParam0)
{
	return func_26(iParam0, Global_A1D7);
}

int func_26(int iParam0, int iParam1)
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

bool func_27(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_28()
{
	unk_0x10FAF14A60A0DBE1();
}

