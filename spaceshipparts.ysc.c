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
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[50];
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 0x00000003;
	bLocal_40 = 0x00000001;
	bLocal_41 = 0x00000001;
	iLocal_49 = 0x0000000F;
	if (unk_0x2EBF608FFE6CA406(0x000000D2))
	{
		func_55();
	}
	if (unk_0x8A22C4C08282BF26(joaat("spaceshipparts")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_54(0x0000000E);
	func_52();
	func_51(&Local_42, 0x00000000, joaat("prop_power_cell"), "SSHIP_COLLECT");
	func_49(&Local_42, joaat("num_hidden_packages_1"), 0x000002F3, 0x00000032);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_48(unk_0x16F2683693E537C9());
		if (func_16(&Local_42, &Local_48) || func_15(0x0000006B) == 0x00000001)
		{
			if (!bLocal_51)
			{
				bLocal_51 = func_11(0x15EAADA8, 0x00000001, 0x00000002, 0x00000045, 0x00001388, 0x00002710, 0xFFFFFFFF, 0x000000B3, 0xFFFFFFFF, 0x00000020, 0x00000001);
			}
			if (bLocal_51)
			{
				if (!func_4() == 0x00000001)
				{
					func_1("SSHIP_SWITCH", 0x00000001, 0x00000000, 0x00004E20, 0x00002710, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
				}
				func_55();
			}
		}
	}
}

void func_1(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_2(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_2(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x000001F4 && iParam5 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam4 < 0x00000000 && iParam4 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam6 < 0x00000001 || iParam6 > 0x00000007)
	{
		return;
	}
	if (iParam7 == 0x000000EB)
	{
		return;
	}
	if (iParam8 == 0x000000EB)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_1B416.f_4FB5.f_91 < 0x00000009)
	{
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_4), sParam1, 16);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_9 = iParam5;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_B = iParam6;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_C = uParam2;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_D = iParam7;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_E = iParam8;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 0xFFFFFFFF)
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = 0xFFFFFFFF;
		}
		Global_1B416.f_4FB5.f_91++;
		func_3();
	}
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000000))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000000])
			{
				Global_1B416.f_4FB5.f_92[0x00000000] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000001))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000001])
			{
				Global_1B416.f_4FB5.f_92[0x00000001] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000002))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000002])
			{
				Global_1B416.f_4FB5.f_92[0x00000002] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

int func_4()
{
	func_5();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_5()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_9(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_8(unk_0x16F2683693E537C9());
			if (func_7(iVar0) && (!func_6(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_7(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_6(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_7(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_9(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_9(int iParam0)
{
	if (func_7(iParam0))
	{
		return func_10(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_10(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_11(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<14> Var0;
	
	if (func_14(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam4 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam5 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam6 == 0x0000004C)
	{
		return 0x00000000;
	}
	if (iParam7 == 0x000000EB)
	{
		return 0x00000000;
	}
	if (iParam3 < 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, iParam3))
		{
			return 0x00000000;
		}
	}
	if (iParam2 < 0x00000001 || iParam2 > 0x00000007)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_2FC < 0x00000008)
	{
		Var0 = iParam0;
		Var0.f_3 = func_13(iParam1);
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_A = 0xFFFFFFFF;
		Var0.f_B = 0xFFFFFFFF;
		Var0.f_D = iParam10;
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000000);
		Global_1B416.f_1E03.f_28B[Global_1B416.f_1E03.f_2FC /*14*/] = { Var0 };
		Global_1B416.f_1E03.f_2FC++;
		func_12(0x00000000);
		func_12(0x00000001);
		func_12(0x00000002);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (!func_7(iParam0))
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_88)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_1B416.f_1E03[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0x00000000;
	while (iVar2 < Global_1B416.f_1E03.f_2FC)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_3 == 0x00000005)
			{
				iVar1 = 0x00000005;
			}
		}
		iVar2++;
	}
	Global_1B416.f_1E03.f_397[iParam0] = iVar1;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000004:
			return 0x00000005;
			break;
		
		case 0x00000007:
			return 0x00000004;
			break;
		
		case 0x00000002:
			return 0x00000003;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000005:
		case 0x00000006:
			return 0x00000000;
			break;
	}
	return 0x00000007;
}

bool func_14(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_15(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

int func_16(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	if (!func_6(0x0000000E) && !unk_0x757EF87A33649210())
	{
		unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9());
		vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000001)
		{
			bVar1 = func_47(&(uParam0->f_1), uParam0->f_A);
			if (!(iParam1[uParam0->f_A /*11*/])->f_A)
			{
				if (!bVar1)
				{
					if (uParam0->f_A == iLocal_49)
					{
						func_45(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0x00000001, 0x00000000, 0x00000002);
						if (unk_0x762119754C50557A((iParam1[uParam0->f_A /*11*/])->f_1))
						{
							unk_0x201D37E7F281A9D1((iParam1[uParam0->f_A /*11*/])->f_1, "GtaMloRoomTun5");
						}
					}
					else if ((((uParam0->f_A == 0x00000006 || uParam0->f_A == 0x0000000E) || uParam0->f_A == 0x00000015) || uParam0->f_A == 0x00000022) || uParam0->f_A == 0x00000027)
					{
						func_45(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0x00000000, 0x00000001, 0x00000002);
					}
					else
					{
						func_45(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0x00000000, 0x00000000, 0x00000002);
					}
				}
			}
			else if (!bVar1)
			{
				func_28(uParam0, iParam1, vVar2);
			}
			uParam0->f_A++;
			if (uParam0->f_A >= *iParam1)
			{
				uParam0->f_A = 0x00000000;
			}
			iVar0++;
		}
		if (!Global_12C52)
		{
			func_17(&(uParam0->f_B), &(uParam0->f_C), &(uParam0->f_9), 0x00000000, &iLocal_50, &iLocal_52, "SSHIP_TITLE", "SSHIP_COLLECT");
		}
		if (!bLocal_51)
		{
			if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
			{
				bLocal_51 = func_11(0x15EAADA8, 0x00000001, 0x00000002, 0x00000045, 0x00001388, 0x00002710, 0xFFFFFFFF, 0x000000B3, 0xFFFFFFFF, 0x00000020, 0x00000001);
			}
		}
		if (!uParam0->f_C && !uParam0->f_B)
		{
			return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
		}
	}
	return 0x00000000;
}

void func_17(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_27(0x00000000);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0x00000000:
				*iParam5 = unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
				if (unk_0x83D8570832F172A7(*iParam5))
				{
					iVar0 = unk_0xD68EA767274B7444();
					if (iParam3 == 0x00000006)
					{
						unk_0x4D7F4CC43D4D0DE3(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 0x00000001);
					}
					else
					{
						unk_0x4D7F4CC43D4D0DE3(iVar0, "COLLECTED", "HUD_AWARDS", 0x00000001);
					}
					*iParam4++;
				}
				break;
			
			case 0x00000001:
				unk_0x7E60C62A7CE58FC8(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x7ACC3006A87F8B39(sParam6);
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39(sParam7);
				unk_0x6D99DF8263D35CE5(func_19(iParam3));
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
				*uParam2 = unk_0x1C0640BA9A7327B3();
				*iParam4++;
				break;
			
			case 0x00000002:
				if ((unk_0x1C0640BA9A7327B3() - *uParam2) > 0x00001B58)
				{
					unk_0x7E60C62A7CE58FC8(*iParam5, "SHARD_ANIM_OUT");
					unk_0x3CAEA85DA607305E(0x00000001);
					unk_0x7C19E5E4784BD7CF(0.33f);
					unk_0x7E60D21B163E9D56();
					*iParam4++;
				}
				else if (!func_18())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_27(0x00000001);
						unk_0x6567AE843FADBA94(*iParam5, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
					}
				}
				break;
			
			case 0x00000003:
				if ((unk_0x1C0640BA9A7327B3() - *uParam2) > 0x00001D4C)
				{
					*iParam4++;
				}
				else if (!func_18())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_27(0x00000001);
						unk_0x6567AE843FADBA94(*iParam5, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
					}
				}
				break;
			
			case 0x00000004:
				if (unk_0x83D8570832F172A7(*iParam5))
				{
					unk_0xE17FDF9E3068281B(iParam5);
				}
				func_27(0x00000000);
				*uParam1 = 0x00000000;
				*uParam0 = 0x00000000;
				*iParam4 = 0x00000000;
				break;
			}
	}
}

int func_18()
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

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000002)
	{
		iVar1 = 0x00000000;
		while (iVar1 < func_26(iParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_6C, func_25(func_26(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 0x00000006)
	{
		unk_0x6FB46C25CCB7E6D5(joaat("num_hidden_packages_5"), &iVar0, 0xFFFFFFFF);
	}
	else if (iParam0 == 0x00000007)
	{
		unk_0x6FB46C25CCB7E6D5(joaat("num_hidden_packages_7"), &iVar0, 0xFFFFFFFF);
	}
	else if (iParam0 == 0x00000008)
	{
		unk_0x6FB46C25CCB7E6D5(joaat("num_hidden_packages_6"), &iVar0, 0xFFFFFFFF);
	}
	else
	{
		iVar1 = 0x00000000;
		while (iVar1 < func_26(iParam0))
		{
			iVar2 = (func_24(iParam0) + iVar1);
			if (func_20(iVar2, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_20(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_23();
	}
	iVar1 = func_22(iParam0, iParam1);
	uVar2 = func_21(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_21(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
	}
	return iVar0;
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_23();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_23()
{
	return Global_1407E9;
}

int func_24(int iParam0)
{
	if (iParam0 == 0x00000003)
	{
		return 0x0000032F;
	}
	if (iParam0 == 0x00000005)
	{
		return 0x0000034D;
	}
	if (iParam0 == 0x00000001)
	{
		return 0x000002C1;
	}
	if (iParam0 == 0x00000000)
	{
		return 0x000002F3;
	}
	return 0x00000325;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000020)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_26(int iParam0)
{
	if (iParam0 == 0x00000003)
	{
		return 0x0000001E;
	}
	if (iParam0 == 0x00000001)
	{
		return 0x00000032;
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000032;
	}
	if (iParam0 == 0x00000004)
	{
		return 0x0000000A;
	}
	if (iParam0 == 0x00000005)
	{
		return 0x0000001E;
	}
	return 0x0000000F;
}

void func_27(int iParam0)
{
	if (Global_12C59 != iParam0)
	{
		Global_12C59 = iParam0;
	}
}

int func_28(var uParam0, var uParam1, vector3 vParam2)
{
	int iVar0;
	
	iVar0 = uParam0->f_A;
	if ((uParam1[iVar0 /*11*/])->f_A)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0x00000000)
		{
			if (unk_0xEB751B41BC4080D4((uParam1[iVar0 /*11*/])->f_1) || func_43((uParam1[iVar0 /*11*/])->f_1))
			{
				func_30(uParam0, uParam1, iVar0);
				return 0x00000001;
			}
		}
	}
	if (unk_0x762119754C50557A((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(vParam2, unk_0xE925E52ACABA4CE7((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_6(0x0000000D)) || func_6(0x0000000E))
		{
			func_29(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0x00000000;
			(uParam1[iVar0 /*11*/])->f_A = 0x00000000;
		}
	}
	return 0x00000000;
}

void func_29(var uParam0)
{
	if (unk_0x762119754C50557A(*uParam0))
	{
		unk_0x40B7230FD4C59AA2(*uParam0);
	}
}

void func_30(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (func_24(*uParam0) + iParam2);
	func_29(&((uParam1[iParam2 /*11*/])->f_1));
	func_42(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0x00000000;
	(uParam1[iParam2 /*11*/])->f_A = 0x00000000;
	func_41(&(uParam0->f_1), iParam2, 0x00000001);
	if (*uParam0 == 0x00000001 || *uParam0 == 0x00000000)
	{
		func_40(*uParam0, iParam2, 0x00000001);
	}
	unk_0x5E858A00EAFA5B24(0x00000000, 0x000000C8, 0x000000FA);
	unk_0x9505C13496579D28(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_39(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_36(&(uParam0->f_1));
	}
	func_33();
	unk_0x9EA96DA1925F0CA2(iVar0);
	func_32(0x00000001, 0x00000000);
	func_31();
	uParam0->f_B = 0x00000001;
}

int func_31()
{
	if (func_14(0x00000000))
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

void func_32(int iParam0, int iParam1)
{
	Global_181DF.f_7 = iParam0;
	Global_181DF.f_8 = iParam1;
}

void func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(func_35(0x00000000), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_34(0x00000012, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_35(0x00000001), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_34(0x00000013, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_35(0x00000003), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_34(0x00000014, iVar0);
	}
	iVar2 = ((func_26(0x00000000) + func_26(0x00000001)) + func_26(0x00000003));
	if (iVar2 > 0x00000000)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xCDC520E5E48E63D9(joaat("percent_hidden_packages"), iVar3, 0x00000001);
}

int func_34(int iParam0, int iParam1)
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

int func_35(int iParam0)
{
	if (iParam0 == 0x00000003)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 0x00000001)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0x00000000)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 0x00000005)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_36(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	if (uParam0->f_3 <= 0x00000000)
	{
	}
	if (uParam0->f_2 <= 0x00000000)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_3)
	{
		if (func_47(uParam0, iVar0))
		{
			iVar1++;
			func_38((uParam0->f_2 + iVar0), 0x00000001, 0xFFFFFFFF, 0x00000001);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 0x000002C1)
	{
		func_37(0x000000A8, 0x00000000);
	}
}

void func_37(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

int func_38(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_23();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_39(var uParam0, int iParam1)
{
	if (uParam0->f_3 <= 0x00000000)
	{
	}
	if (uParam0->f_2 <= 0x00000000)
	{
	}
	if (bLocal_40)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_47(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_38((uParam0->f_2 + iParam1), 0x00000001, 0xFFFFFFFF, 0x00000001);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 0x000002C1)
	{
		func_37(0x000000A8, 0x00000000);
	}
}

void func_40(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000040)
	{
		return;
	}
	if (iParam0 == 0x00000001)
	{
		if (iParam1 <= 0x0000001F)
		{
			if (bParam2)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_7A), iParam1);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_273C.f_7A), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_7A.f_1), (iParam1 - 0x00000020));
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_273C.f_7A.f_1), (iParam1 - 0x00000020));
		}
	}
	else if (iParam0 == 0x00000000)
	{
		if (iParam1 <= 0x0000001F)
		{
			if (bParam2)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_7D), iParam1);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_273C.f_7D), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_7D.f_1), (iParam1 - 0x00000020));
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_273C.f_7D.f_1), (iParam1 - 0x00000020));
		}
	}
}

void func_41(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000040)
	{
		return;
	}
	if (iParam1 <= 0x0000001F)
	{
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(iParam0, iParam1);
		}
		else
		{
			unk_0x0674E58A79778E99(iParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(iParam0->f_1), (iParam1 - 0x00000020));
	}
	else
	{
		unk_0x0674E58A79778E99(&(iParam0->f_1), (iParam1 - 0x00000020));
	}
}

void func_42(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0x00000000;
	}
	if (func_44(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0xE925E52ACABA4CE7(iParam0)) < (5f * 5f) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x41486C7390D3EBBF(iParam0)))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_44(int iParam0)
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

void func_45(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!uParam0->f_A)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_6(0x0000000D) && !func_6(0x0000000E))
			{
				if (!unk_0x762119754C50557A(uParam0->f_1))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x523BCC9DC80CD82F(iParam1);
						while (!unk_0xB87F6CF6E5628C67(iParam1))
						{
							unk_0x523BCC9DC80CD82F(iParam1);
							SYSTEM::WAIT(0x00000000);
						}
						if (bParam3)
						{
							func_46(uParam0->f_3);
						}
						unk_0x536F1BE96C726C4B(uParam0->f_3, 2.5f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						if (bParam4)
						{
							unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
							uParam0->f_1 = unk_0x2D7B5CDDF12654D2(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, iVar0, 0xFFFFFFFF, iParam5, 0x00000001, iParam1);
						}
						else
						{
							unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
							unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
							unk_0x5D96D8530B3D0904(&iVar0, 0x00000008);
							unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
							uParam0->f_1 = unk_0xA6FF0828D17CF374(iParam2, uParam0->f_3, iVar0, 0xFFFFFFFF, 0x00000001, iParam1);
						}
						unk_0x71199B01895C6202(iParam1);
					}
				}
			}
			if (unk_0x762119754C50557A(uParam0->f_1))
			{
				uParam0->f_A = 0x00000001;
			}
		}
	}
}

void func_46(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = unk_0xFBD08BECC9B87937(vParam0);
	if (unk_0x31609A585163CBAC(iVar0))
	{
		unk_0x0007C2367F4F23F3(iVar0);
		while (!unk_0xBD307E66C0669BFC(iVar0))
		{
			SYSTEM::WAIT(0x00000000);
		}
		SYSTEM::WAIT(0x00000000);
		unk_0x25BB71BA267FE042(iVar0);
	}
}

bool func_47(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000040)
	{
		return 0x00000000;
	}
	if (iParam1 <= 0x0000001F)
	{
		return unk_0xEAE0D21A50E6C7F4(*uParam0, iParam1);
	}
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1, (iParam1 - 0x00000020));
}

bool func_48(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_50(&(uParam0->f_1), iParam2, iParam3);
}

void func_50(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	*iParam0 = 0x00000000;
	iParam0->f_1 = 0x00000000;
	iParam0->f_2 = uParam1;
	iParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 < iParam0->f_3)
	{
		if (func_20((iParam0->f_2 + iVar0), 0xFFFFFFFF, 0xFFFFFFFF))
		{
			iVar1++;
			func_41(iParam0, iVar0, 0x00000001);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	iParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_51(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_A = 0x00000000;
}

void func_52()
{
	int iVar0;
	
	iLocal_50 = 0x00000000;
	Global_1B416.f_273C.f_7D.f_2 = 0x00000001;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000032)
	{
		Local_48[iVar0 /*11*/].f_3 = { func_53(iVar0, 0x00000000) };
		Local_48[iVar0 /*11*/].f_A = 0x00000000;
		iVar0++;
	}
	Local_48[0x00000000 /*11*/].f_9 = 179.4746f;
	Local_48[0x00000001 /*11*/].f_9 = 198f;
	Local_48[0x00000002 /*11*/].f_9 = 104f;
	Local_48[0x00000003 /*11*/].f_9 = 321.5f;
	Local_48[0x00000004 /*11*/].f_9 = 256.25f;
	Local_48[0x00000005 /*11*/].f_9 = 286.5f;
	Local_48[0x00000006 /*11*/].f_9 = 0f;
	Local_48[0x00000006 /*11*/].f_6 = { 0f, 0f, 1f };
	Local_48[0x00000007 /*11*/].f_9 = -165.6051f;
	Local_48[0x00000008 /*11*/].f_9 = 91.5f;
	Local_48[0x00000009 /*11*/].f_9 = 116f;
	Local_48[0x0000000A /*11*/].f_9 = 15f;
	Local_48[0x0000000B /*11*/].f_9 = 305.5f;
	Local_48[0x0000000C /*11*/].f_9 = 0f;
	Local_48[0x0000000D /*11*/].f_9 = 95f;
	Local_48[0x0000000E /*11*/].f_9 = 40f;
	Local_48[0x0000000F /*11*/].f_9 = 40f;
	Local_48[0x00000010 /*11*/].f_9 = 40f;
	Local_48[0x00000011 /*11*/].f_9 = 40f;
	Local_48[0x00000012 /*11*/].f_9 = 40f;
	Local_48[0x00000013 /*11*/].f_9 = 40f;
	Local_48[0x00000014 /*11*/].f_9 = 40f;
	Local_48[0x00000015 /*11*/].f_6 = { 90f, 0f, 57f };
	Local_48[0x00000016 /*11*/].f_9 = 40f;
	Local_48[0x00000017 /*11*/].f_9 = 40f;
	Local_48[0x00000018 /*11*/].f_9 = 40f;
	Local_48[0x00000019 /*11*/].f_9 = 40f;
	Local_48[0x0000001A /*11*/].f_9 = 40f;
	Local_48[0x0000001B /*11*/].f_9 = 40f;
	Local_48[0x0000001C /*11*/].f_9 = 40f;
	Local_48[0x0000001D /*11*/].f_9 = 40f;
	Local_48[0x0000001D /*11*/].f_6 = { -24.35f, 15.74f, 14.31f };
	Local_48[0x0000001E /*11*/].f_9 = 40f;
	Local_48[0x0000001F /*11*/].f_9 = 40f;
	Local_48[0x00000020 /*11*/].f_9 = 40f;
	Local_48[0x00000021 /*11*/].f_9 = 40f;
	Local_48[0x00000022 /*11*/].f_6 = { 0f, 0f, -15f };
	Local_48[0x00000023 /*11*/].f_9 = 40f;
	Local_48[0x00000024 /*11*/].f_9 = 40f;
	Local_48[0x00000025 /*11*/].f_9 = 40f;
	Local_48[0x00000026 /*11*/].f_9 = 40f;
	Local_48[0x00000026 /*11*/].f_6 = { 20.18f, -0.87f, 20.46f };
	Local_48[0x00000027 /*11*/].f_6 = { 0f, 0f, -4.39f };
	Local_48[0x00000028 /*11*/].f_9 = 40f;
	Local_48[0x00000029 /*11*/].f_9 = 80f;
	Local_48[0x0000002A /*11*/].f_9 = 198f;
	Local_48[0x0000002B /*11*/].f_9 = 198f;
	Local_48[0x0000002C /*11*/].f_9 = 198f;
	Local_48[0x0000002D /*11*/].f_9 = 198f;
	Local_48[0x0000002E /*11*/].f_9 = 198f;
	Local_48[0x0000002F /*11*/].f_9 = 198f;
	Local_48[0x00000030 /*11*/].f_9 = 198f;
	Local_48[0x00000031 /*11*/].f_9 = 198f;
}

Vector3 func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -1219f, -3495.9f, 12.9448f;
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000001)
			{
				return 606.8925f, -3250.188f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.79f, -16.5774f;
			}
			break;
		
		case 0x00000002:
			return 1590.6f, -2810.174f, 3.4494f;
			break;
		
		case 0x00000003:
			if (iParam1 == 0x00000001)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.106f, 42.6543f;
			}
			break;
		
		case 0x00000004:
			if (iParam1 == 0x00000001)
			{
				return 1134.422f, -2607.024f, 14.77071f;
			}
			else
			{
				return 1133.688f, -2605.073f, 14.9729f;
			}
			break;
		
		case 0x00000005:
			if (iParam1 == 0x00000001)
			{
				return 368.9316f, -2118.533f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.756f, 16.1688f;
			}
			break;
		
		case 0x00000006:
			if (iParam1 == 0x00000001)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.024f, -1618.777f, 111.8313f;
			}
			break;
		
		case 0x00000007:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		
		case 0x00000008:
			return 17.5926f, -1213.207f, 28.3678f;
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000001)
			{
				return -910.0172f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.551f, 31.8047f;
			}
			break;
		
		case 0x0000000A:
			if (iParam1 == 0x00000001)
			{
				return 1237.728f, -1099.15f, 37.52579f;
			}
			else
			{
				return 1231.973f, -1102.308f, 34.4289f;
			}
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000001)
			{
				return 87.69075f, 810.3736f, 210.1258f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		
		case 0x0000000C:
			if (iParam1 == 0x00000001)
			{
				return -1900.951f, 1389.582f, 218.1509f;
			}
			else
			{
				return -1907.515f, 1388.69f, 217.9728f;
			}
			break;
		
		case 0x0000000D:
			if (iParam1 == 0x00000001)
			{
				return 467.369f, -730.7552f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		
		case 0x0000000E:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		
		case 0x0000000F:
			if (iParam1 == 0x00000001)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		
		case 0x00000010:
			if (iParam1 == 0x00000001)
			{
				return -1183.152f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.538f, -525.5859f, 39.9114f;
			}
			break;
		
		case 0x00000011:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		
		case 0x00000012:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		
		case 0x00000013:
			if (iParam1 == 0x00000001)
			{
				return -1169.397f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.488f, -65.4649f, 44.6563f;
			}
			break;
		
		case 0x00000014:
			if (iParam1 == 0x00000001)
			{
				return 1679.056f, 39.44059f, 160.7736f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		
		case 0x00000015:
			if (iParam1 == 0x00000001)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		
		case 0x00000016:
			if (iParam1 == 0x00000001)
			{
				return 24.21706f, 637.1212f, 206.3897f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		
		case 0x00000017:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		
		case 0x00000018:
			if (iParam1 == 0x00000001)
			{
				return -1531.895f, 870.3203f, 180.6775f;
			}
			else
			{
				return -1529.722f, 871.4257f, 180.6421f;
			}
			break;
		
		case 0x00000019:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		
		case 0x0000001A:
			return -2809.354f, 1449.643f, 99.928f;
			break;
		
		case 0x0000001B:
			if (iParam1 == 0x00000001)
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			else
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			break;
		
		case 0x0000001C:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		
		case 0x0000001D:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		
		case 0x0000001E:
			if (iParam1 == 0x00000001)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		
		case 0x0000001F:
			return 1367.413f, 2180.632f, 96.6914f;
			break;
		
		case 0x00000020:
			if (iParam1 == 0x00000001)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.131f, 89.7842f;
			}
			break;
		
		case 0x00000021:
			return 889.3209f, 2870.052f, 55.2834f;
			break;
		
		case 0x00000022:
			if (iParam1 == 0x00000001)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		
		case 0x00000023:
			return -390.384f, 2963.26f, 18.2713f;
			break;
		
		case 0x00000024:
			return 71.6642f, 3279.368f, 30.3918f;
			break;
		
		case 0x00000025:
			return 1924.186f, 3471.256f, 50.3238f;
			break;
		
		case 0x00000026:
			return -583.1569f, 3580.375f, 266.2471f;
			break;
		
		case 0x00000027:
			if (iParam1 == 0x00000001)
			{
				return 2514.302f, 3789.519f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		
		case 0x00000028:
			if (iParam1 == 0x00000001)
			{
				return 1517.613f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.047f, 3857.217f, 22.2905f;
			}
			break;
		
		case 0x00000029:
			if (iParam1 == 0x00000001)
			{
				return -530.2739f, 4474.358f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.644f, 31.7384f;
			}
			break;
		
		case 0x0000002A:
			if (iParam1 == 0x00000001)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.813f, 4441.683f, 1.8007f;
			}
			break;
		
		case 0x0000002B:
			if (iParam1 == 0x00000001)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.055f, 4585.194f, 46.6362f;
			}
			break;
		
		case 0x0000002C:
			return 2437.545f, 4779.959f, 33.5101f;
			break;
		
		case 0x0000002D:
			return -1441.495f, 5414.888f, 23.3f;
			break;
		
		case 0x0000002E:
			return 2196.251f, 5599.034f, 52.7129f;
			break;
		
		case 0x0000002F:
			if (iParam1 == 0x00000001)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.61f, 48.8487f;
			}
			break;
		
		case 0x00000030:
			if (iParam1 == 0x00000001)
			{
				return -378.4192f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		
		case 0x00000031:
			return 440.9546f, 6459.642f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0x0000001F)
	{
		iVar0 = 0x00000009;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 0x0000000A;
		iVar1 = (iParam0 - 0x00000020);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		return 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
	return 0x00000001;
}

void func_55()
{
	int iVar0;
	
	Global_1B416.f_273C.f_7D.f_2 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Local_48)
	{
		func_42(&(Local_48[iVar0 /*11*/].f_2));
		func_29(&(Local_48[iVar0 /*11*/].f_1));
		iVar0++;
	}
	if (func_60(&(Local_42.f_1)) || func_15(0x0000006B) == 0x00000001)
	{
		func_59(0x0000006B, 0x00000001);
		func_57();
		func_56(0x0000000E);
	}
	unk_0x71199B01895C6202(Local_42.f_7);
	unk_0x10FAF14A60A0DBE1();
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0x0000001F)
	{
		iVar0 = 0x00000009;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 0x0000000A;
		iVar1 = (iParam0 - 0x00000020);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_57()
{
	int iVar0;
	
	iVar0 = func_58(0x0000003F);
	Global_24D752[iVar0 /*83*/] = 0x0000003F;
	StringCopy(&(Global_24D752[iVar0 /*83*/].f_12[0x00000000 /*16*/]), "", 64);
}

int func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000013;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000013)
	{
		if (Global_24D752[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		else if (Global_24D752[iVar1 /*83*/] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		iVar1++;
	}
	return iVar0;
}

void func_59(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1B416.f_2378.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_1B416.f_2378.f_63.f_3A[iParam0] = iParam1;
}

bool func_60(var uParam0)
{
	if (uParam0->f_3 <= 0x00000000)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

