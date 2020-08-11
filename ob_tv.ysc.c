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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	vector3 vLocal_31 = { 0f, 0f, 0f };
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char cLocal_44[64] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	char cLocal_53[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
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
	iLocal_21 = 0x00000003;
	iLocal_25 = 0x00000001;
	iLocal_33 = 0xFFFFFFFF;
	iLocal_40 = 0xFFFFFFFF;
	iLocal_41 = 0xFFFFFFFF;
	iLocal_42 = 0xFFFFFFFF;
	StringCopy(&cLocal_44, "NULL", 64);
	StringCopy(&cLocal_53, "NULL", 64);
	if (unk_0x2EBF608FFE6CA406(0x00000002))
	{
		func_68();
	}
	if (unk_0xC844350D5D58C99A(iScriptParam_69))
	{
		iLocal_35 = iScriptParam_69;
		iLocal_38 = iScriptParam_69;
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_67();
		if (unk_0xC844350D5D58C99A(iScriptParam_69))
		{
			if ((iLocal_41 != 0xFFFFFFFF && (func_66() && !func_65())) && !func_64(iLocal_41))
			{
				func_68();
			}
			if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 0x00000003) && unk_0x00A15D69BCAA5267() == 0x00000003)
			{
				func_68();
			}
			if (func_63(0x0000000D) || func_63(0x0000000E))
			{
				func_68();
			}
			if (unk_0x713261485D0F1B6C(iScriptParam_69, 0x00000000))
			{
				func_68();
			}
			if (unk_0x63D2C15453688621(iScriptParam_69))
			{
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					func_62();
					if (unk_0x7F6DC62EA9922664(iScriptParam_69) < 0x000003B6)
					{
						func_68();
					}
					switch (iLocal_29)
					{
						case 0x00000000:
							func_59();
							if (iLocal_41 == 0x00000005)
							{
								if (func_58(0x00000012) == 0x00000001 && func_58(0x00000014) == 0x00000000)
								{
									uLocal_39 = unk_0x57651D42225429CC(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0xB39672D8C1F6BB48(uLocal_39))
									{
										unk_0xCADC8175C61F28E5(uLocal_39, 0x00000009);
									}
									unk_0x10FAF14A60A0DBE1();
								}
							}
							if (iLocal_41 == 0xFFFFFFFF)
							{
								func_68();
							}
							else
							{
								func_57();
								unk_0xE98E714BAA9A8D42("SAFEHOUSE_MICHAEL_SIT_SOFA", 0x00000000, 0xFFFFFFFF);
								unk_0x9CBC55A05A07FC47(0x00000000);
								Global_786C[iLocal_41 /*11*/].f_2 = 0x00000000;
								Global_786C[iLocal_41 /*11*/].f_6 = 0x00000001;
								Global_786C[iLocal_41 /*11*/] = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
								Global_786C[iLocal_41 /*11*/].f_1 = 0x00000000;
								Global_786C[iLocal_41 /*11*/].f_4 = 0x00000000;
								Global_786C[iLocal_41 /*11*/].f_7 = 0x00000000;
								Global_786C[iLocal_41 /*11*/].f_8 = 0x00000000;
								Global_786C[iLocal_41 /*11*/].f_A = 0x00000000;
								fLocal_30 = -4f;
								func_55(&iLocal_26);
								func_53();
								func_52();
								SYSTEM::WAIT(0x00000000);
								iLocal_29 = 0x00000001;
							}
							break;
						
						case 0x00000001:
							if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
							{
								SYSTEM::WAIT(0x00000000);
							}
							else if (unk_0xC57D0A75AFA332A3(iLocal_35) && unk_0x10BA239D3B8FDC7F(iLocal_35, 0x42B40000))
							{
								if (func_44() || Global_786C[iLocal_41 /*11*/].f_5)
								{
									iLocal_29 = 0x00000002;
								}
							}
							else
							{
								func_43(&iLocal_40);
							}
							break;
						
						case 0x00000002:
							func_53();
							if (!func_64(iLocal_41))
							{
								func_43(&iLocal_40);
								if (func_42("TV_HLP1"))
								{
									unk_0xA37A90C62806D848(0x00000001);
								}
							}
							if (unk_0xC844350D5D58C99A(iLocal_35))
							{
								if (!unk_0x4FC40AB0ECCE6E18(iLocal_35))
								{
									unk_0x4A4806F9D471E491(iLocal_35, 0x00000001, 0x00000000);
								}
							}
							if (unk_0xC844350D5D58C99A(iLocal_37))
							{
								if (!unk_0x4FC40AB0ECCE6E18(iLocal_37))
								{
									unk_0x4A4806F9D471E491(iLocal_37, 0x00000001, 0x00000000);
								}
							}
							if (unk_0xC844350D5D58C99A(iLocal_36))
							{
								if (unk_0x4FC40AB0ECCE6E18(iLocal_36))
								{
									unk_0x4A4806F9D471E491(iLocal_36, 0x00000000, 0x00000000);
								}
							}
							if (!unk_0x7F8A39872A07D2CE(&cLocal_44, "NULL"))
							{
								unk_0x837C600ECEE8ABA2(&cLocal_44, 0x00000000);
							}
							unk_0x187EF8E398A98A81(0x00000000);
							SYSTEM::WAIT(0x00000000);
							if (unk_0xC844350D5D58C99A(iLocal_38))
							{
								unk_0x2CD9DD012B079672(iLocal_38);
							}
							if (!func_64(iLocal_41))
							{
								if ((Global_786C[iLocal_41 /*11*/] == 0x00000003 || Global_786C[iLocal_41 /*11*/] == 0x00000002) || Global_786C[iLocal_41 /*11*/] == 0xFFFFFFFF)
								{
									Global_786C[iLocal_41 /*11*/] = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
								}
								unk_0x188BA9B758DB0D5E(Global_786C[iLocal_41 /*11*/]);
								unk_0x2DF5312E3DA3CB39(fLocal_30);
							}
							else
							{
								iLocal_42 = Global_786C[iLocal_41 /*11*/];
								iLocal_43 = Global_786C[iLocal_41 /*11*/].f_1;
								unk_0xACBA63CD73292795(iLocal_42, func_41(iLocal_43), Global_786C[iLocal_41 /*11*/].f_9);
								unk_0x188BA9B758DB0D5E(iLocal_42);
								if (Global_786C[iLocal_41 /*11*/].f_7)
								{
									Global_786C[iLocal_41 /*11*/].f_5 = 0x00000000;
									Global_786C[iLocal_41 /*11*/].f_7 = 0x00000000;
								}
							}
							Global_786C[iLocal_41 /*11*/].f_2 = 0x00000001;
							func_40(0x00000085, 0x00000001);
							func_40(0x00000083, 0x00000001);
							func_40(0x00000084, 0x00000001);
							iLocal_29 = 0x00000003;
							break;
						
						case 0x00000003:
							if (Global_786C[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 0x00000006;
							}
							if (Global_786C[iLocal_41 /*11*/].f_7 && func_64(iLocal_41))
							{
								Global_786C[iLocal_41 /*11*/].f_7 = 0x00000000;
								iLocal_29 = 0x00000006;
							}
							if (!func_38(iLocal_41))
							{
								func_37();
								iLocal_29 = 0x00000005;
							}
							else
							{
								func_35();
								if (unk_0x04639A879AC88653() == 0xFFFFFFFF)
								{
									unk_0x188BA9B758DB0D5E(Global_786C[iLocal_41 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 0x00000006;
								}
							}
							break;
						
						case 0x00000005:
							if (func_38(iLocal_41))
							{
								iLocal_29 = 0x00000002;
							}
							if (Global_786C[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 0x00000006;
							}
							break;
						
						case 0x00000006:
							func_1();
							if (iLocal_40 != 0xFFFFFFFF)
							{
								func_43(&iLocal_40);
							}
							Global_786C[iLocal_41 /*11*/].f_5 = 0x00000000;
							Global_786C[iLocal_41 /*11*/].f_4 = 0x00000000;
							Global_786C[iLocal_41 /*11*/].f_1 = 0x00000000;
							Global_786C[iLocal_41 /*11*/].f_2 = 0x00000000;
							Global_786C[iLocal_41 /*11*/].f_7 = 0x00000000;
							Global_786C[iLocal_41 /*11*/].f_8 = 0x00000000;
							Global_786C[iLocal_41 /*11*/].f_A = 0x00000000;
							iLocal_29 = 0x00000001;
							break;
						}
					}
			}
		}
		else
		{
			func_68();
			unk_0x10FAF14A60A0DBE1();
		}
	}
	func_68();
	unk_0x10FAF14A60A0DBE1();
}

void func_1()
{
	if (iLocal_41 != 0xFFFFFFFF)
	{
		Global_786C[iLocal_41 /*11*/] = unk_0x04639A879AC88653();
	}
	fLocal_30 = unk_0x16EA32E2BE4AB9D3();
	unk_0x188BA9B758DB0D5E(0xFFFFFFFF);
	func_4();
	if (unk_0x8A22C4C08282BF26(joaat("family5")) == 0x00000000)
	{
		if (!unk_0x7F8A39872A07D2CE(&cLocal_44, "NULL"))
		{
			unk_0x837C600ECEE8ABA2(&cLocal_44, 0x00000001);
		}
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	func_3();
	func_52();
	if (unk_0xC844350D5D58C99A(iLocal_36))
	{
		if (!unk_0x4FC40AB0ECCE6E18(iLocal_36))
		{
			unk_0x4A4806F9D471E491(iLocal_36, 0x00000001, 0x00000000);
		}
	}
	unk_0xD251FFCFFF3A13CC(0x00000000);
	func_2();
}

void func_2()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (iLocal_67 == 0x00000001)
		{
			unk_0xA68C4874B560B1C0();
			iLocal_67 = 0x00000000;
		}
	}
}

void func_3()
{
	if (!iLocal_33 == 0xFFFFFFFF)
	{
		unk_0x3039591AD3E735CE(iLocal_33);
		if (unk_0xC844350D5D58C99A(iLocal_35))
		{
			if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x4A4806F9D471E491(iLocal_35, 0x00000000, 0x00000000);
				if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0xC1032CAC14DE468A(0.5f, 0.5f, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
				}
			}
			else
			{
				unk_0xC1032CAC14DE468A(0.5f, 0.5f, 1f, 1f, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_37))
	{
		unk_0x4A4806F9D471E491(iLocal_37, 0x00000000, 0x00000000);
	}
}

void func_4()
{
	if (iLocal_65)
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		if (unk_0xFBB4F23D534EB790(iLocal_62))
		{
			unk_0xE3BB8E05FCEB3FBE(iLocal_62, 0x00000000);
		}
		unk_0x9A8DDC7C522F5BF5(iLocal_62, 0x00000000);
		unk_0x2FB9A57162E54BAB(0f);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), vLocal_31, 0x00000001, 0x00000000, 0x00000002);
			if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				if (bLocal_34 == 0x00000001)
				{
					bLocal_34 = 0x00000000;
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				}
			}
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
		}
		if (!unk_0x7F8A39872A07D2CE(&cLocal_53, "NULL"))
		{
			if (unk_0x562F77A7F33D2E46(&cLocal_53))
			{
				unk_0x8910D3D58E0132B8(&cLocal_53);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_37))
		{
			unk_0x4A4806F9D471E491(iLocal_37, 0x00000001, 0x00000000);
		}
		func_5(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xD251FFCFFF3A13CC(0x00000000);
		iLocal_65 = 0x00000000;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_14(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_13())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_12(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_14(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_12(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_10(unk_0xD803B885F5E47A62())) && !func_7(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_6()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_10(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_6()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
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

int func_10(int iParam0)
{
	if (func_7(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_11())
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

bool func_11()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_12(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_13()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_14(int iParam0)
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

int func_15()
{
	if (!func_64(iLocal_41))
	{
		if (((((((func_31(&iLocal_26) >= 1f && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_68, 1f, 1f, 1.5f, 0x00000000, 0x00000001, 0x00000000)) && unk_0x4D570FEF9D230CE7(iLocal_35) == unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())) && !func_30(0x00000008, 0xFFFFFFFF)) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), vLocal_31, 90f)) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !unk_0x991B1F0980C62628())
		{
			if (iLocal_40 == 0xFFFFFFFF)
			{
				func_29();
				func_28(&iLocal_40, 0x00000003, "TV_HLP5", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (func_26(iLocal_40, 0x00000001))
			{
				func_43(&iLocal_40);
				func_55(&iLocal_26);
				Global_786C[iLocal_41 /*11*/].f_7 = 0x00000000;
				if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0x00000000, 0xFFFFFFFF))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "MICHAEL_SOFA_TV_ON_MASTER", 0x00000000, 0x00000001);
				}
				return 0x00000001;
			}
			func_16();
		}
		else
		{
			if (func_42("TV_HLP5"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			func_2();
			func_43(&iLocal_40);
		}
	}
	return 0x00000000;
}

void func_16()
{
	if (iLocal_65 == 0x00000000)
	{
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000DE);
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000DE))
		{
			func_43(&iLocal_40);
			func_28(&iLocal_40, 0x00000003, "TV_HLP6", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_25();
		}
	}
	else
	{
		unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
		if (unk_0x4FC40AB0ECCE6E18(unk_0x16F2683693E537C9()))
		{
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
		}
		if (bLocal_34)
		{
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			}
		}
		unk_0x3FC8DBCC154CA56B();
		unk_0x47C6DEE1E7231AC3(unk_0x16F2683693E537C9());
		func_23(0x00000001, 0x00000001);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000DE);
		func_17(0x00000000);
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000DE) || (unk_0x91E3F625EF57450D(0x00000002) && unk_0x9A01369A10646AFE(0x00000002, 0x000000C8)))
		{
			func_43(&iLocal_40);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_21(0x00000000))
		{
			func_18(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_18(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_20())
		{
			func_19(0x00000001, 0x00000001);
		}
		else
		{
			func_19(0x00000000, 0x00000000);
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
	if (!func_13())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0x00000000))
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

bool func_20()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_21(int iParam0)
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

bool func_22()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_23(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0x00000040;
	if (bParam0)
	{
		if (func_24(0x00000000))
		{
			if (!iLocal_22)
			{
				if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0x00000000, 0xFFFFFFFF))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0x00000000, 0x00000001);
				}
				if (unk_0x04639A879AC88653() == 0x00000000)
				{
					unk_0x188BA9B758DB0D5E(0x00000001);
				}
				else
				{
					unk_0x188BA9B758DB0D5E(0x00000000);
				}
				iLocal_22 = 0x00000001;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0x00000000;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000DB) - 0x0000007F);
		if (!iLocal_23)
		{
			if (iVar1 > (0x00000000 + iVar0))
			{
				fVar2 = unk_0x16EA32E2BE4AB9D3();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x2DF5312E3DA3CB39(fVar2);
				iLocal_24 = unk_0x1C0640BA9A7327B3();
				iLocal_23 = 0x00000001;
			}
			if (iVar1 < (0x00000000 - iVar0))
			{
				fVar2 = unk_0x16EA32E2BE4AB9D3();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x2DF5312E3DA3CB39(fVar2);
				iLocal_24 = unk_0x1C0640BA9A7327B3();
				iLocal_23 = 0x00000001;
			}
			if (iVar1 < (0x00000000 + iVar0) && iVar1 > (0x00000000 - iVar0))
			{
				iLocal_25 = 0x00000001;
			}
			else if (iLocal_25)
			{
				if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0x00000000, 0xFFFFFFFF))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0x00000000, 0x00000001);
					}
					iLocal_25 = 0x00000000;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0x00000000 || unk_0x1C0640BA9A7327B3() > iLocal_24 + 24)
			{
				iLocal_23 = 0x00000000;
			}
		}
	}
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000040;
	iVar1 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000DA) - 0x0000007F);
	if (iParam0 || SYSTEM::TIMERA() > 0x0000012C)
	{
		if (iVar1 > (0x00000000 + iVar0) || iVar1 < (0x00000000 - iVar0))
		{
			SYSTEM::SETTIMERA(0x00000000);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_25()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_65 == 0x00000000)
	{
		iLocal_62 = unk_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", vLocal_63, vLocal_64, fVar0, 0x00000000, 0x00000002);
		unk_0x1EC4A41E2AED1EE1(iLocal_62, 100f);
		unk_0xE3BB8E05FCEB3FBE(iLocal_62, 0x00000001);
		unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		if (unk_0xC844350D5D58C99A(iLocal_37))
		{
			unk_0x4A4806F9D471E491(iLocal_37, 0x00000000, 0x00000000);
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				bLocal_34 = 0x00000001;
			}
			unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), vLocal_31, 0xFFFFFFFF, 0x00000000, 0x00000002);
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
		}
		if (!unk_0x7F8A39872A07D2CE(&cLocal_53, "NULL"))
		{
			if (!unk_0x562F77A7F33D2E46(&cLocal_53))
			{
				unk_0x8BC9595FD2792B5D(&cLocal_53);
			}
		}
		func_5(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xD251FFCFFF3A13CC(0x00000001);
		iLocal_65 = 0x00000001;
	}
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_21(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/] == 0x00000001 && Global_A4A7[iVar0 /*32*/].f_4 == 0x00000001)
		{
			if (bParam1)
			{
				if (Global_A4A7[iVar0 /*32*/].f_1D)
				{
					return 0x00000000;
				}
			}
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000001;
			return 0x00000001;
		}
		else
		{
			if (Global_A4A7[iVar0 /*32*/] == 0x00000000)
			{
			}
			if (Global_A4A7[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0x00000000;
}

int func_27(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_28(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == 0xFFFFFFFF)
		{
			func_43(iParam0);
		}
		return;
	}
	if (!*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (!Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/] = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1 = Global_A570;
			Global_A570++;
			Global_A4A7[iVar0 /*32*/].f_4 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_A4A7[iVar0 /*32*/].f_8), sParam2, 16);
			Global_A4A7[iVar0 /*32*/].f_6 = iParam3;
			Global_A4A7[iVar0 /*32*/].f_1F = unk_0x0D0A574C76D769AC();
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000001;
				StringCopy(&(Global_A4A7[iVar0 /*32*/].f_D), sParam4, 64);
				Global_A4A7[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000000;
				Global_A4A7[iVar0 /*32*/].f_1E = 0x00000000;
			}
			*iParam0 = Global_A4A7[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_29()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (iLocal_67 == 0x00000000)
		{
			unk_0x6787351639998696("TV_Controls");
			iLocal_67 = 0x00000001;
		}
	}
}

bool func_30(int iParam0, int iParam1)
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

float func_31(int iParam0)
{
	if (func_34(iParam0))
	{
		if (func_33(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_32(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_32(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_33(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_34(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

void func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	func_36(&fVar0);
	unk_0x3039591AD3E735CE(iLocal_33);
	unk_0xD9ACBBA59FD5A09E(0x00000004);
	unk_0x5DD950F92F816F03(0x00000001);
	unk_0xAD77DDB686D4F8D3(0.5f, 0.5f, fVar0, 1f, 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
	unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
}

void func_36(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x33D480CCE15C991A(0x00000000);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()
{
	Global_786C[iLocal_41 /*11*/].f_7 = 0x00000000;
	Global_786C[iLocal_41 /*11*/] = unk_0x04639A879AC88653();
	fLocal_30 = unk_0x16EA32E2BE4AB9D3();
	if (unk_0x562F77A7F33D2E46(&cLocal_53))
	{
		unk_0x8910D3D58E0132B8(&cLocal_53);
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	func_43(&iLocal_40);
	unk_0x188BA9B758DB0D5E(0xFFFFFFFF);
	SYSTEM::WAIT(0x00000000);
	func_3();
	func_52();
}

int func_38(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_39(unk_0xD803B885F5E47A62()) };
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000006:
			return 0x00000001;
			break;
		
		case 0x00000004:
			if (vVar0.z < 74f)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			if (vVar0.z > 75f)
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

Vector3 func_39(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0x00000001)
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/])
	{
		unk_0x6FB46C25CCB7E6D5(Global_DFA6[iParam0 /*7*/].f_1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_DFA6[iParam0 /*7*/].f_1, iVar0, 0x00000001);
	}
}

char* func_41(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 0x00000002:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 0x00000003:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 0x00000004:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 0x00000007:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 0x00000008:
			sVar0 = "PL_SP_INV";
			break;
		
		case 0x00000009:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 0x00000005:
			sVar0 = "PL_LO_RS";
			break;
		
		case 0x00000006:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 0x0000000A:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 0x0000000B:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 0x0000000C:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 0x0000000D:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 0x0000000E:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_42(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_43(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_27(*iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		*iParam0 = 0xFFFFFFFF;
		return;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000001;
			*iParam0 = 0xFFFFFFFF;
			return;
		}
	}
	*iParam0 = 0xFFFFFFFF;
}

int func_44()
{
	if (func_31(&iLocal_26) < 1f)
	{
		func_43(&iLocal_40);
		return 0x00000000;
	}
	if ((!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_68, 1f, 1f, 1.5f, 0x00000000, 0x00000001, 0x00000000) || !unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), vLocal_31, 90f)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
	{
		func_43(&iLocal_40);
		return 0x00000000;
	}
	if (unk_0x4D570FEF9D230CE7(iLocal_35) != unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()))
	{
		func_43(&iLocal_40);
		return 0x00000000;
	}
	if (func_30(0x00000008, 0xFFFFFFFF))
	{
		func_43(&iLocal_40);
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		func_43(&iLocal_40);
		return 0x00000000;
	}
	if (Global_175B8)
	{
		func_43(&iLocal_40);
		return 0x00000000;
	}
	if (Global_786C[iLocal_41 /*11*/].f_8)
	{
		func_43(&iLocal_40);
		return 0x00000000;
	}
	if (iLocal_40 == 0xFFFFFFFF)
	{
		func_28(&iLocal_40, 0x00000003, "TV_HLP1", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		return 0x00000000;
	}
	if (func_26(iLocal_40, 0x00000001))
	{
		func_43(&iLocal_40);
		func_55(&iLocal_26);
		Global_786C[iLocal_41 /*11*/].f_7 = 0x00000001;
		if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0x00000000, 0xFFFFFFFF))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "MICHAEL_SOFA_TV_ON_MASTER", 0x00000000, 0x00000001);
		}
		func_45(0x00000135, 0x00000000, 0x00000000);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_45(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0x00000000)
	{
	}
	if (iParam0 == 0x00000141 || iParam0 > 0x00000141)
	{
	}
	else
	{
		func_51((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
	}
	bVar0 = 0x00000001;
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 0x00000001)
	{
		if (Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000B || Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000C)
		{
			bVar0 = 0x00000000;
		}
	}
	else
	{
		Global_1B416.f_27CD[iParam0 /*12*/].f_5 = 0x00000001;
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = iParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 0x0000011F)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000011E)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000012B)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 0x00000032, 0x00000000);
		}
	}
	if (bVar0)
	{
		func_46();
	}
}

void func_46()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0x00000000;
	Global_1B30E = 0x00000000;
	Global_1B30F = 0x00000000;
	Global_1B310 = 0x00000000;
	Global_1B311 = 0x00000000;
	Global_1B312 = 0x00000000;
	Global_1B313 = 0x00000000;
	Global_1B314 = 0x00000000;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_1B416.f_27CD.f_F0D;
	Global_1B416.f_27CD.f_F0D = 0f;
	while (iVar0 < 0x00000141)
	{
		if (Global_1B416.f_27CD[iVar0 /*12*/].f_5 == 0x00000001)
		{
			switch (Global_1B416.f_27CD[iVar0 /*12*/].f_6)
			{
				case 0x00000001:
					Global_1B30E++;
					fVar1 = (fVar1 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000003:
					Global_1B30F++;
					fVar2 = (fVar2 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000005:
					Global_1B310++;
					fVar3 = (fVar3 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000007:
					Global_1B311++;
					fVar4 = (fVar4 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000009:
					Global_1B312++;
					fVar5 = (fVar5 + (Global_1B416.f_27CD[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 0x0000000B:
					Global_1B313++;
					fVar6 = (fVar6 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x0000000D:
					Global_1B314++;
					fVar7 = (fVar7 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_1B2FD > 0x00000000)
	{
		if (Global_1B30E == Global_1B2FD)
		{
			fVar1 = 55f;
		}
	}
	if (Global_1B2FE > 0x00000000)
	{
		if (Global_1B30F == Global_1B2FE)
		{
			fVar2 = 10f;
		}
	}
	if (Global_1B2FF > 0x00000000)
	{
		if (Global_1B310 == Global_1B2FF)
		{
			fVar3 = 0f;
		}
	}
	if (Global_1B300 > 0x00000000)
	{
		if (Global_1B311 == Global_1B300)
		{
			fVar4 = 10f;
		}
	}
	if (Global_1B301 > 0x00000000)
	{
		if (((Global_1B312 == Global_1B301 || (Global_1B301 * 10 / Global_1B312) < 0x00000029) || Global_1B312 > Global_1B304) || Global_1B312 == Global_1B304)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F10, 0x0000000E))
			{
				if (Global_1B312 == Global_1B301)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_1B301, 0x00000000);
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F10), 0x0000000E);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_1B302 > 0x00000000)
	{
		if (Global_1B313 == Global_1B302)
		{
			fVar6 = 15f;
		}
	}
	if (Global_1B303 > 0x00000000)
	{
		if (Global_1B314 == Global_1B303)
		{
			fVar7 = 5f;
		}
	}
	Global_1B416.f_27CD.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_1B312 > Global_1B304 || Global_1B312 == Global_1B304)
	{
		iVar9 = Global_1B304;
	}
	else
	{
		iVar9 = Global_1B312;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_1B30E, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_1B2FD, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_1B30F, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_1B2FE, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_1B310, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_1B2FF, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_1B311, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_1B300, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_1B304, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_1B314 + Global_1B313), 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_1B303 + Global_1B302), 0x00000001);
	Global_1B315 = (Global_1B30E * 100 / Global_1B2FD);
	Global_1B317 = ((Global_1B310 + Global_1B30F) * 100 / (Global_1B2FF + Global_1B2FE));
	Global_1B316 = ((Global_1B311 + iVar9) * 100 / (Global_1B300 + Global_1B304));
	Global_1B318 = ((Global_1B313 + Global_1B314) * 100 / (Global_1B302 + Global_1B303));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_1B416.f_27CD.f_F0D, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_1B315, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_1B316, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_1B317, 0x00000001);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D))
	{
		func_50(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_49() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()
{
	if (func_48(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_181DF.f_8)
	{
		if (Global_181DF.f_A > 0x00000000)
		{
			return 0x00000000;
		}
	}
	else if (Global_181DF.f_A > 0x00000001)
	{
		return 0x00000000;
	}
	Global_181DF.f_A++;
	return 0x00000001;
}

bool func_48(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_49()
{
	return Global_7830;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 > 0x0000004E)
	{
		return 0x00000000;
	}
	if (iParam1 <= 0x00000000 || iParam1 > 0x00000064)
	{
		return 0x00000000;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0x00000000;
}

int func_51(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_9();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_52()
{
	SYSTEM::WAIT(0x00000000);
	if (unk_0xE6CD5C6925050049("tvscreen"))
	{
		unk_0x683413D9B7010687("tvscreen");
		iLocal_33 = 0xFFFFFFFF;
		unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
	}
}

void func_53()
{
	int iVar0;
	
	if (iLocal_41 == 0x00000004)
	{
		func_54();
	}
	if (unk_0xE6CD5C6925050049("tvscreen"))
	{
		unk_0x683413D9B7010687("tvscreen");
	}
	SYSTEM::WAIT(0x00000000);
	if (!unk_0xC844350D5D58C99A(iLocal_35))
	{
		func_68();
	}
	iVar0 = unk_0x134B62B726CEC8E6(iLocal_35);
	unk_0x268029E44B2B3E36("tvscreen", 0x00000000);
	unk_0x064E7408AD6E15E5(iVar0);
	SYSTEM::WAIT(0x00000000);
	if (iLocal_41 != 0x00000004)
	{
		while (!unk_0x55CB69E8157C5B54(iVar0))
		{
			if (!unk_0xC844350D5D58C99A(iLocal_35))
			{
				func_68();
			}
			if (!unk_0x63D2C15453688621(iLocal_35))
			{
				func_68();
			}
			if (!unk_0xE6CD5C6925050049("tvscreen"))
			{
				unk_0x268029E44B2B3E36("tvscreen", 0x00000000);
			}
			if (!unk_0x55CB69E8157C5B54(iVar0))
			{
				unk_0x064E7408AD6E15E5(iVar0);
			}
			SYSTEM::WAIT(0x00000000);
		}
	}
	iLocal_33 = unk_0x3FF702268B97B673("tvscreen");
	func_3();
}

void func_54()
{
	if (unk_0xC844350D5D58C99A(iLocal_35))
	{
		if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_35 = 0x00000000;
	iLocal_35 = unk_0xB0BE3DFBBB59A620(joaat("v_ilev_mm_screen2"), vLocal_31, 0x00000001, 0x00000001, 0x00000000);
	unk_0xD8F6A53F4799FAFE(iLocal_35, fLocal_32);
	unk_0x1E9649458B15960F(iLocal_35, 0x00000001);
	unk_0x4A4806F9D471E491(iLocal_35, 0x00000000, 0x00000000);
	iLocal_37 = 0x00000000;
	iLocal_37 = unk_0xB0BE3DFBBB59A620(joaat("v_ilev_mm_screen2_vl"), vLocal_31, 0x00000001, 0x00000001, 0x00000000);
	unk_0xD8F6A53F4799FAFE(iLocal_37, fLocal_32);
	unk_0x1E9649458B15960F(iLocal_37, 0x00000001);
	unk_0x4A4806F9D471E491(iLocal_37, 0x00000000, 0x00000000);
}

void func_55(int iParam0)
{
	func_56(iParam0, 0f);
}

void func_56(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_32(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_57()
{
}

int func_58(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

void func_59()
{
	vLocal_31 = { unk_0x68F4C0EC296D3901(iLocal_35, 0x00000001) };
	fLocal_32 = unk_0xD9522BA9E27E1349(iLocal_35);
	func_61();
	if (unk_0x134B62B726CEC8E6(iLocal_35) == 0xCA7FAFEB)
	{
		if (SYSTEM::VDIST(vLocal_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_41 = 0x00000000;
			vLocal_63 = { -9.8135f, -1440.913f, 31.3654f };
			vLocal_64 = { 0f, 0f, -134.3211f };
			vLocal_68 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(vLocal_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_41 = 0x00000002;
			vLocal_63 = { 1978.23f, 3819.65f, 34.2724f };
			vLocal_64 = { 0f, 0f, -105.15f };
			vLocal_68 = { 1978.33f, 3819.717f, 32.4501f };
			func_60();
			StringCopy(&cLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(vLocal_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 0x00000001;
			vLocal_63 = { 2.5724f, 527.9989f, 176.1619f };
			vLocal_64 = { 0f, 0f, -29.9488f };
			vLocal_68 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x134B62B726CEC8E6(iLocal_35) == 0x4FECBC89)
	{
		if (SYSTEM::VDIST(vLocal_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_41 = 0x00000003;
			vLocal_63 = { -1160.502f, -1520.76f, 10.7393f };
			vLocal_64 = { 0f, 0f, 60.061f };
			vLocal_68 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_53, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(vLocal_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_41 = 0x00000004;
			vLocal_63 = { -802.8972f, 172.537f, 74.5801f };
			vLocal_64 = { 0f, 0f, -69.0273f };
			vLocal_68 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(vLocal_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 0x00000005;
			vLocal_63 = { -808.3051f, 171.2623f, 77.2822f };
			vLocal_64 = { 1.8886f, 0f, 110.9232f };
			vLocal_68 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_60()
{
	iLocal_36 = unk_0xB0BE3DFBBB59A620(joaat("prop_tt_screenstatic"), vLocal_31, 0x00000001, 0x00000001, 0x00000000);
	unk_0xD8F6A53F4799FAFE(iLocal_36, fLocal_32);
	unk_0x4A4806F9D471E491(iLocal_36, 0x00000001, 0x00000000);
	unk_0x1E9649458B15960F(iLocal_36, 0x00000001);
}

void func_61()
{
	unk_0xACBA63CD73292795(0x00000000, func_41(0x00000001), 0x00000000);
	if (func_58(0x00000016))
	{
		unk_0xACBA63CD73292795(0x00000001, func_41(0x0000000C), 0x00000000);
	}
	else
	{
		unk_0xACBA63CD73292795(0x00000001, func_41(0x00000002), 0x00000000);
	}
}

void func_62()
{
	if (iLocal_41 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_786C[iLocal_41 /*11*/].f_A == 0x00000000)
	{
		if (iLocal_66 == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(iLocal_38))
			{
				unk_0xE121AE1BBF90E186(iLocal_38, 0x00000000);
			}
			if (unk_0xC844350D5D58C99A(iLocal_35))
			{
				unk_0xE121AE1BBF90E186(iLocal_35, 0x00000000);
			}
			if (unk_0xC844350D5D58C99A(iLocal_37))
			{
				unk_0xE121AE1BBF90E186(iLocal_37, 0x00000000);
			}
			if (unk_0xC844350D5D58C99A(iLocal_36))
			{
				unk_0xE121AE1BBF90E186(iLocal_36, 0x00000000);
			}
			iLocal_66 = 0x00000000;
		}
	}
	else if (iLocal_66 == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_38))
		{
			unk_0xE121AE1BBF90E186(iLocal_38, 0x00000001);
		}
		if (unk_0xC844350D5D58C99A(iLocal_35))
		{
			unk_0xE121AE1BBF90E186(iLocal_35, 0x00000001);
		}
		if (unk_0xC844350D5D58C99A(iLocal_37))
		{
			unk_0xE121AE1BBF90E186(iLocal_37, 0x00000001);
		}
		if (unk_0xC844350D5D58C99A(iLocal_36))
		{
			unk_0xE121AE1BBF90E186(iLocal_36, 0x00000001);
		}
		iLocal_66 = 0x00000001;
	}
}

bool func_63(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_64(int iParam0)
{
	if (iParam0 != 0xFFFFFFFF)
	{
		if (Global_786C[iParam0 /*11*/].f_5)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_65()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_66()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

void func_67()
{
}

void func_68()
{
	if (iLocal_41 == 0xFFFFFFFF)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_43(&iLocal_40);
	if (iLocal_41 != 0xFFFFFFFF)
	{
		func_1();
		Global_786C[iLocal_41 /*11*/].f_6 = 0x00000000;
		Global_786C[iLocal_41 /*11*/].f_7 = 0x00000000;
		Global_786C[iLocal_41 /*11*/].f_8 = 0x00000000;
		Global_786C[iLocal_41 /*11*/].f_4 = 0x00000000;
		Global_786C[iLocal_41 /*11*/].f_5 = 0x00000000;
		Global_786C[iLocal_41 /*11*/].f_2 = 0x00000000;
		Global_786C[iLocal_41 /*11*/] = 0xFFFFFFFF;
		Global_786C[iLocal_41 /*11*/].f_1 = 0x00000000;
		Global_786C[iLocal_41 /*11*/].f_A = 0x00000000;
	}
	if ((func_42("TV_HLP1") || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	SYSTEM::WAIT(0x00000000);
	func_69();
	if (unk_0x562F77A7F33D2E46(&cLocal_53))
	{
		unk_0x8910D3D58E0132B8(&cLocal_53);
	}
	unk_0xB3EE19CC0D64759A();
	func_2();
	unk_0x10FAF14A60A0DBE1();
}

void func_69()
{
	func_52();
	if (unk_0xC844350D5D58C99A(iLocal_35))
	{
		if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xF690C84DADBB3551(&iLocal_35);
			unk_0x71199B01895C6202(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_37))
	{
		unk_0xF690C84DADBB3551(&iLocal_37);
		unk_0x71199B01895C6202(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xC844350D5D58C99A(iLocal_36))
	{
		unk_0xF690C84DADBB3551(&iLocal_36);
		unk_0x71199B01895C6202(joaat("prop_tt_screenstatic"));
	}
}

