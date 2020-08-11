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
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<8> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<11> Local_50[50];
	int iLocal_51 = 0;
	char* sLocal_52 = NULL;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57[4] = { NULL, NULL, NULL, NULL };
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
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
	iLocal_51 = 0x00000004;
	sLocal_52 = "id1_11_tunnel6_int";
	if (unk_0x2EBF608FFE6CA406(0x000000D2))
	{
		func_75();
	}
	if (unk_0x8A22C4C08282BF26(joaat("letterscraps")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_74(0x0000000C);
	if (func_73(0x0000006A) == 0x00000001)
	{
		func_72(0x0000000C);
		func_69(0x0000011F, 0x00000000, 0x00000000);
		func_68(0x0000006A, 0x00000001);
		func_67(0x000000A8, 0x00000000);
		func_75();
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_66(unk_0x16F2683693E537C9());
		switch (iLocal_42)
		{
			case 0x00000000:
				func_21();
				break;
			
			case 0x00000001:
				func_1();
				break;
		}
	}
}

void func_1()
{
	switch (iLocal_43)
	{
		case 0x00000000:
			if (unk_0x8A22C4C08282BF26(joaat("startup_positioning")) > 0x00000000)
			{
				iLocal_43 = 0x00000002;
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x0F1CCD77290EE12F())
				{
					if (!func_20())
					{
						if (((!unk_0x1EE04CEA36EF313B() && !func_14()) && !func_13()) && !func_12())
						{
							iLocal_58 = 0x00000000;
							iLocal_56 = 0x00000000;
							sLocal_57[0x00000000] = "LETTERS_PAGE_ONE";
							sLocal_57[0x00000001] = "LETTERS_PAGE_TWO";
							sLocal_57[0x00000002] = "LETTERS_PAGE_THREE";
							sLocal_57[0x00000003] = "LETTERS_PAGE_FOUR";
							iLocal_55 = unk_0xB01F55A0FD1CFD49("LETTER_SCRAPS");
							while (!unk_0x83D8570832F172A7(iLocal_55))
							{
								SYSTEM::WAIT(0x00000000);
							}
							unk_0x7E60C62A7CE58FC8(iLocal_55, "SET_LETTER_TEXT");
							func_11(sLocal_57[0x00000000]);
							unk_0x7E60D21B163E9D56();
							unk_0x5DD950F92F816F03(0x00000001);
							func_7(0x00000001);
							func_6(0x00000001, 0x00000001, 0x00000001, 0x00000000);
							unk_0x5827FCE0CA6A6269("LETTERS_HELP2", 0x00000000);
							unk_0x21387C9EECC2B220(0x00000001);
							unk_0xBFE31971E49FA500(0x00000000);
							iLocal_43 = 0x00000001;
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			func_3(0x00000000);
			unk_0x857E3CE01DEA2D26();
			unk_0x5DD950F92F816F03(0x00000001);
			unk_0xD9ACBBA59FD5A09E(0x00000001);
			if (iLocal_56 < 0x00000004)
			{
				if (!iLocal_58)
				{
					if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000BE))
					{
						if (iLocal_56 >= 0x00000000 && iLocal_56 < 0x00000003)
						{
							iLocal_56++;
							unk_0x7E60C62A7CE58FC8(iLocal_55, "SET_LETTER_TEXT");
							func_11(sLocal_57[iLocal_56]);
							unk_0x7E60D21B163E9D56();
						}
						iLocal_58 = 0x00000001;
					}
					else if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000BD))
					{
						if (iLocal_56 > 0x00000000 && iLocal_56 < 0x00000004)
						{
							iLocal_56 = (iLocal_56 - 0x00000001);
							unk_0x7E60C62A7CE58FC8(iLocal_55, "SET_LETTER_TEXT");
							func_11(sLocal_57[iLocal_56]);
							unk_0x7E60D21B163E9D56();
						}
						iLocal_58 = 0x00000001;
					}
					else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA))
					{
						iLocal_43 = 0x00000002;
					}
				}
				else if (!func_2())
				{
					iLocal_58 = 0x00000000;
				}
				unk_0x6567AE843FADBA94(iLocal_55, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			}
			else
			{
				iLocal_43 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			unk_0xBFE31971E49FA500(0x00000001);
			unk_0xA37A90C62806D848(0x00000001);
			func_6(0x00000000, 0x00000001, 0x00000001, 0x00000000);
			func_72(0x0000000C);
			func_75();
			break;
	}
}

int func_2()
{
	if ((unk_0x06F8112AA79C53D9(0x00000002, 0x000000BE) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BD)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000CA))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_3(int iParam0)
{
	if (func_5())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_4(0x00000000))
		{
			func_7(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

int func_4(int iParam0)
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

bool func_5()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_6(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && iParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

void func_7(int iParam0)
{
	if (func_5())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_10())
		{
			func_9(0x00000001, 0x00000001);
		}
		else
		{
			func_9(0x00000000, 0x00000000);
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
	if (!func_8())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_8()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_4(0x00000000))
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

bool func_10()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

void func_11(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_12()
{
	return Global_14134D;
}

int func_13()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (Global_258B8D[iVar1] != 0x00000000)
		{
			Global_14134E = iVar1;
			iVar0 = 0x00000001;
			iVar1 = 0x0000000A;
		}
		iVar1++;
	}
	return iVar0;
}

int func_14()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1AED2)
	{
		if (func_15(iVar0))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x7F8A39872A07D2CE(&(Global_1AED2[iParam0 /*28*/]), "") && !unk_0x2EBF5002C6B6A06C(&(Global_1AED2[iParam0 /*28*/])))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1AED2[iParam0 /*28*/].f_1B, 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1AED2[iParam0 /*28*/].f_1B, 0x00000002))
			{
				return func_19(iVar0, &(Global_1AED2[iParam0 /*28*/]), &(Global_1AED2[iParam0 /*28*/].f_4), Global_1AED2[iParam0 /*28*/].f_14);
			}
			else
			{
				return func_18(iVar0, &(Global_1AED2[iParam0 /*28*/]), &(Global_1AED2[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1AED2[iParam0 /*28*/].f_1B, 0x00000002))
		{
			return func_17(iVar0, &(Global_1AED2[iParam0 /*28*/]), Global_1AED2[iParam0 /*28*/].f_14);
		}
		else
		{
			return func_16(iVar0, &(Global_1AED2[iParam0 /*28*/]));
		}
	}
	return 0x00000000;
}

bool func_16(int iParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam1);
	return unk_0xE3789B9938DCEAE8((0x00000001 + iParam0));
}

bool func_17(int iParam0, char* sParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0xE3789B9938DCEAE8((0x00000001 + iParam0));
}

bool func_18(int iParam0, char* sParam1, char* sParam2)
{
	unk_0xCECE25C7ECD44603(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	return unk_0xE3789B9938DCEAE8((0x00000001 + iParam0));
}

bool func_19(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xCECE25C7ECD44603(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	return unk_0xE3789B9938DCEAE8((0x00000001 + iParam0));
}

int func_20()
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_21()
{
	switch (iLocal_43)
	{
		case 0x00000000:
			func_64();
			func_63(&Local_44, 0x00000001, joaat("prop_ld_scrap"), "LETTERS_COLLECT");
			func_61(&Local_44, joaat("num_hidden_packages_0"), 0x000002C1, 0x00000032);
			iLocal_43 = 0x00000001;
			iLocal_60 = 0x00000001;
			break;
		
		case 0x00000001:
			if (!func_60(0x0000000E) && !unk_0x757EF87A33649210())
			{
				if (func_23(&Local_44, &Local_50) || uLocal_59)
				{
					iLocal_43 = 0x00000002;
				}
				if (Local_44.f_1.f_4 == Local_44.f_1.f_3)
				{
					if (func_73(0x0000006A) == 0x00000000)
					{
						func_68(0x0000006A, 0x00000001);
						func_67(0x000000A8, 0x00000000);
					}
				}
			}
			break;
		
		case 0x00000002:
			func_68(0x0000006A, 0x00000001);
			func_67(0x000000A8, 0x00000000);
			func_22(0x00000001);
			break;
	}
}

void func_22(int iParam0)
{
	iLocal_42 = iParam0;
	iLocal_43 = 0x00000000;
}

int func_23(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar3;
	
	bVar3 = (!func_20() && !func_20());
	unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9());
	vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		bVar1 = func_59(&(uParam0->f_1), uParam0->f_A);
		if (!(iParam1[uParam0->f_A /*11*/])->f_A)
		{
			if (!bVar1)
			{
				if (((((((uParam0->f_A == 0x00000001 || uParam0->f_A == 0x00000005) || uParam0->f_A == 0x00000007) || uParam0->f_A == 0x0000000D) || uParam0->f_A == 0x00000012) || uParam0->f_A == 0x00000014) || uParam0->f_A == 0x00000025) || uParam0->f_A == 0x0000002A)
				{
					func_57(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0x00000000, 0x00000001, 0x00000002);
				}
				else if (uParam0->f_A == iLocal_51)
				{
					func_57(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0x00000000, 0x00000001, 0x00000002);
					if (unk_0x762119754C50557A((iParam1[uParam0->f_A /*11*/])->f_1))
					{
						unk_0x201D37E7F281A9D1((iParam1[uParam0->f_A /*11*/])->f_1, sLocal_52);
					}
				}
				else
				{
					func_57(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0x00000000, 0x00000000, 0x00000002);
				}
			}
		}
		else if (!bVar1)
		{
			if (func_40(uParam0, iParam1, vVar2))
			{
				if (bVar3)
				{
					if (!func_39(0x00000021))
					{
						func_36("LETTERS_FIRST", 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
						func_35(0x00000021);
					}
				}
			}
		}
		uParam0->f_A++;
		if (uParam0->f_A >= *iParam1)
		{
			uParam0->f_A = 0x00000000;
		}
		iVar0++;
	}
	if (uParam0->f_B)
	{
		if (!Global_12C52)
		{
			func_24(&(uParam0->f_B), &(uParam0->f_C), &(uParam0->f_9), 0x00000001, &iLocal_53, &iLocal_54, "LETTERS_TITLE", "LETTERS_COLLECT");
		}
	}
	if (!uParam0->f_C && !uParam0->f_B)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0x00000000;
}

void func_24(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_34(0x00000000);
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
				unk_0x6D99DF8263D35CE5(func_26(iParam3));
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
				else if (!func_25())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_34(0x00000001);
						unk_0x6567AE843FADBA94(*iParam5, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
					}
				}
				break;
			
			case 0x00000003:
				if ((unk_0x1C0640BA9A7327B3() - *uParam2) > 0x00001D4C)
				{
					*iParam4++;
				}
				else if (!func_25())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_34(0x00000001);
						unk_0x6567AE843FADBA94(*iParam5, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
					}
				}
				break;
			
			case 0x00000004:
				if (unk_0x83D8570832F172A7(*iParam5))
				{
					unk_0xE17FDF9E3068281B(iParam5);
				}
				func_34(0x00000000);
				*uParam1 = 0x00000000;
				*uParam0 = 0x00000000;
				*iParam4 = 0x00000000;
				break;
			}
	}
}

int func_25()
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

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000002)
	{
		iVar1 = 0x00000000;
		while (iVar1 < func_33(iParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_6C, func_32(func_33(iParam0), iVar1)))
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
		while (iVar1 < func_33(iParam0))
		{
			iVar2 = (func_31(iParam0) + iVar1);
			if (func_27(iVar2, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_30();
	}
	iVar1 = func_29(iParam0, iParam1);
	uVar2 = func_28(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_28(int iParam0)
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

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_30();
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

int func_30()
{
	return Global_1407E9;
}

int func_31(int iParam0)
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

int func_32(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000020)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_33(int iParam0)
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

void func_34(int iParam0)
{
	if (Global_12C59 != iParam0)
	{
		Global_12C59 = iParam0;
	}
}

void func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0x00000000;
	while (iVar0 > 0x0000001F)
	{
		iVar0 = (iVar0 - 0x00000020);
		iVar1++;
	}
	if (iVar1 < 0x00000003)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_4FB5.f_96[iVar1]), iVar0);
	}
}

void func_36(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_37(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_37(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_38();
	}
}

void func_38()
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

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0x00000000;
	while (iVar0 > 0x0000001F)
	{
		iVar0 = (iVar0 - 0x00000020);
		iVar1++;
	}
	if (iVar1 < 0x00000003)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5.f_96[iVar1], iVar0);
	}
	return 0x00000000;
}

int func_40(var uParam0, var uParam1, vector3 vParam2)
{
	int iVar0;
	
	iVar0 = uParam0->f_A;
	if ((uParam1[iVar0 /*11*/])->f_A)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0x00000000)
		{
			if (unk_0xEB751B41BC4080D4((uParam1[iVar0 /*11*/])->f_1) || func_55((uParam1[iVar0 /*11*/])->f_1))
			{
				func_42(uParam0, uParam1, iVar0);
				return 0x00000001;
			}
		}
	}
	if (unk_0x762119754C50557A((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(vParam2, unk_0xE925E52ACABA4CE7((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_60(0x0000000D)) || func_60(0x0000000E))
		{
			func_41(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0x00000000;
			(uParam1[iVar0 /*11*/])->f_A = 0x00000000;
		}
	}
	return 0x00000000;
}

void func_41(var uParam0)
{
	if (unk_0x762119754C50557A(*uParam0))
	{
		unk_0x40B7230FD4C59AA2(*uParam0);
	}
}

void func_42(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (func_31(*uParam0) + iParam2);
	func_41(&((uParam1[iParam2 /*11*/])->f_1));
	func_54(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0x00000000;
	(uParam1[iParam2 /*11*/])->f_A = 0x00000000;
	func_53(&(uParam0->f_1), iParam2, 0x00000001);
	if (*uParam0 == 0x00000001 || *uParam0 == 0x00000000)
	{
		func_52(*uParam0, iParam2, 0x00000001);
	}
	unk_0x5E858A00EAFA5B24(0x00000000, 0x000000C8, 0x000000FA);
	unk_0x9505C13496579D28(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_51(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_49(&(uParam0->f_1));
	}
	func_46();
	unk_0x9EA96DA1925F0CA2(iVar0);
	func_45(0x00000001, 0x00000000);
	func_43();
	uParam0->f_B = 0x00000001;
}

int func_43()
{
	if (func_44(0x00000000))
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

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_45(int iParam0, int iParam1)
{
	Global_181DF.f_7 = iParam0;
	Global_181DF.f_8 = iParam1;
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(func_48(0x00000000), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_47(0x00000012, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_48(0x00000001), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_47(0x00000013, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_48(0x00000003), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_47(0x00000014, iVar0);
	}
	iVar2 = ((func_33(0x00000000) + func_33(0x00000001)) + func_33(0x00000003));
	if (iVar2 > 0x00000000)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xCDC520E5E48E63D9(joaat("percent_hidden_packages"), iVar3, 0x00000001);
}

int func_47(int iParam0, int iParam1)
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

int func_48(int iParam0)
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

void func_49(var uParam0)
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
		if (func_59(uParam0, iVar0))
		{
			iVar1++;
			func_50((uParam0->f_2 + iVar0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_67(0x000000A8, 0x00000000);
	}
}

int func_50(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_30();
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

void func_51(var uParam0, int iParam1)
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
	if (func_59(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_50((uParam0->f_2 + iParam1), 0x00000001, 0xFFFFFFFF, 0x00000001);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 0x000002C1)
	{
		func_67(0x000000A8, 0x00000000);
	}
}

void func_52(int iParam0, int iParam1, bool bParam2)
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

void func_53(int iParam0, int iParam1, bool bParam2)
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

void func_54(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

int func_55(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0x00000000;
	}
	if (func_56(unk_0x16F2683693E537C9()))
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

int func_56(int iParam0)
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

void func_57(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!uParam0->f_A)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_60(0x0000000D) && !func_60(0x0000000E))
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
							func_58(uParam0->f_3);
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

void func_58(vector3 vParam0)
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

bool func_59(var uParam0, int iParam1)
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

bool func_60(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_61(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_62(&(uParam0->f_1), iParam2, iParam3);
}

void func_62(int iParam0, var uParam1, var uParam2)
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
		if (func_27((iParam0->f_2 + iVar0), 0xFFFFFFFF, 0xFFFFFFFF))
		{
			iVar1++;
			func_53(iParam0, iVar0, 0x00000001);
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

void func_63(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_A = 0x00000000;
}

void func_64()
{
	int iVar0;
	
	Global_1B416.f_273C.f_7A.f_2 = 0x00000001;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000032)
	{
		Local_50[iVar0 /*11*/].f_3 = { func_65(iVar0, 0x00000000) };
		Local_50[iVar0 /*11*/].f_A = 0x00000000;
		iVar0++;
	}
	iLocal_53 = 0x00000000;
	Local_50[0x00000000 /*11*/].f_9 = 179.4746f;
	Local_50[0x00000001 /*11*/].f_6 = { 0f, 0f, 198f };
	Local_50[0x00000002 /*11*/].f_9 = 104f;
	Local_50[0x00000003 /*11*/].f_9 = 321.5f;
	Local_50[0x00000004 /*11*/].f_6 = { 0f, 0f, 49f };
	Local_50[0x00000005 /*11*/].f_6 = { 0f, 0f, 286.5f };
	Local_50[0x00000006 /*11*/].f_9 = 278.0092f;
	Local_50[0x00000007 /*11*/].f_6 = { 5.3f, -1801.4f, 15.57f };
	Local_50[0x00000008 /*11*/].f_9 = 80.5f;
	Local_50[0x00000009 /*11*/].f_9 = 116f;
	Local_50[0x0000000A /*11*/].f_9 = 15f;
	Local_50[0x0000000B /*11*/].f_9 = 305.5f;
	Local_50[0x0000000C /*11*/].f_9 = 0f;
	Local_50[0x0000000D /*11*/].f_9 = 95f;
	Local_50[0x0000000D /*11*/].f_6 = { -0.91f, -0.03f, -0.81f };
	Local_50[0x0000000E /*11*/].f_9 = 40f;
	Local_50[0x0000000F /*11*/].f_9 = 40f;
	Local_50[0x00000010 /*11*/].f_9 = 40f;
	Local_50[0x00000011 /*11*/].f_9 = 90f;
	Local_50[0x00000011 /*11*/].f_6 = { -0.55f, 0f, 0.78f };
	Local_50[0x00000012 /*11*/].f_6 = { 0f, 0f, 0f };
	Local_50[0x00000013 /*11*/].f_9 = 40f;
	Local_50[0x00000014 /*11*/].f_6 = { 0f, 2f, 15f };
	Local_50[0x00000015 /*11*/].f_9 = 40f;
	Local_50[0x00000016 /*11*/].f_9 = 40f;
	Local_50[0x00000017 /*11*/].f_9 = 40f;
	Local_50[0x00000018 /*11*/].f_9 = 40f;
	Local_50[0x00000019 /*11*/].f_9 = 40f;
	Local_50[0x0000001A /*11*/].f_9 = 40f;
	Local_50[0x0000001A /*11*/].f_6 = { -6f, 10f, 0f };
	Local_50[0x0000001B /*11*/].f_9 = 40f;
	Local_50[0x0000001B /*11*/].f_6 = { -4.66f, 8.7f, 67.03f };
	Local_50[0x0000001C /*11*/].f_9 = 40f;
	Local_50[0x0000001C /*11*/].f_6 = { 1.54f, -8.31f, -19.94f };
	Local_50[0x0000001D /*11*/].f_9 = 40f;
	Local_50[0x0000001E /*11*/].f_9 = 40f;
	Local_50[0x0000001E /*11*/].f_6 = { 27.21f, -3.11f, -2.09f };
	Local_50[0x0000001F /*11*/].f_9 = 40f;
	Local_50[0x00000020 /*11*/].f_9 = 40f;
	Local_50[0x00000021 /*11*/].f_9 = 40f;
	Local_50[0x00000021 /*11*/].f_6 = { -9.89f, 0.3f, -0.01f };
	Local_50[0x00000022 /*11*/].f_9 = 40f;
	Local_50[0x00000023 /*11*/].f_9 = 40f;
	Local_50[0x00000024 /*11*/].f_9 = 40f;
	Local_50[0x00000024 /*11*/].f_6 = { 6.5f, -4.41f, -0.62f };
	Local_50[0x00000025 /*11*/].f_6 = { -9f, 5.3f, -2f };
	Local_50[0x00000026 /*11*/].f_9 = 40f;
	Local_50[0x00000026 /*11*/].f_6 = { -13.32f, -0.57f, -0.15f };
	Local_50[0x00000027 /*11*/].f_9 = 40f;
	Local_50[0x00000027 /*11*/].f_6 = { 4.71f, -21.26f, -0.06f };
	Local_50[0x00000028 /*11*/].f_9 = 40f;
	Local_50[0x00000029 /*11*/].f_9 = 80f;
	Local_50[0x0000002A /*11*/].f_6 = { -2f, 9f, 1f };
	Local_50[0x0000002B /*11*/].f_9 = 198f;
	Local_50[0x0000002C /*11*/].f_9 = 198f;
	Local_50[0x0000002C /*11*/].f_6 = { 0f, -20f, 0f };
	Local_50[0x0000002D /*11*/].f_9 = 198f;
	Local_50[0x0000002E /*11*/].f_9 = 198f;
	Local_50[0x0000002F /*11*/].f_9 = 198f;
	Local_50[0x00000030 /*11*/].f_9 = 198f;
	Local_50[0x00000031 /*11*/].f_9 = 198f;
}

Vector3 func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000001)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000001)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000001)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 0x00000003:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 0x00000004:
			if (iParam1 == 0x00000001)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 0x00000005:
			if (iParam1 == 0x00000001)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 0x00000006:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 0x00000007:
			if (iParam1 == 0x00000001)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 0x00000008:
			if (iParam1 == 0x00000001)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 0x00000009:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 0x0000000A:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 0x0000000B:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 0x0000000C:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 0x0000000D:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 0x0000000E:
			if (iParam1 == 0x00000001)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 0x0000000F:
			if (iParam1 == 0x00000001)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 0x00000010:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 0x00000011:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 0x00000012:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 0x00000013:
			if (iParam1 == 0x00000001)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 0x00000014:
			if (iParam1 == 0x00000001)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 0x00000015:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 0x00000016:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 0x00000017:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 0x00000018:
			if (iParam1 == 0x00000001)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 0x00000019:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 0x0000001A:
			if (iParam1 == 0x00000001)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 0x0000001B:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 0x0000001C:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 0x0000001D:
			if (iParam1 == 0x00000001)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 0x0000001E:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 0x0000001F:
			if (iParam1 == 0x00000001)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 0x00000020:
			if (iParam1 == 0x00000001)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 0x00000021:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 0x00000022:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 0x00000023:
			if (iParam1 == 0x00000001)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 0x00000024:
			if (iParam1 == 0x00000001)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 0x00000025:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 0x00000026:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 0x00000027:
			if (iParam1 == 0x00000001)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 0x00000028:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 0x00000029:
			if (iParam1 == 0x00000001)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 0x0000002A:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 0x0000002B:
			if (iParam1 == 0x00000001)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 0x0000002C:
			if (iParam1 == 0x00000001)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 0x0000002D:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 0x0000002E:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 0x0000002F:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 0x00000030:
			if (iParam1 == 0x00000001)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 0x00000031:
			if (iParam1 == 0x00000001)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_66(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

void func_67(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

void func_68(int iParam0, int iParam1)
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

void func_69(int iParam0, int iParam1, int iParam2)
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
		func_50((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_70();
	}
}

void func_70()
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
		func_47(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_71() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_43();
				}
			}
		}
	}
}

int func_71()
{
	return Global_7830;
}

int func_72(int iParam0)
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

int func_73(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

int func_74(int iParam0)
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

void func_75()
{
	int iVar0;
	
	unk_0x5DD950F92F816F03(0x00000000);
	unk_0xE17FDF9E3068281B(&iLocal_55);
	unk_0x21387C9EECC2B220(0x00000000);
	Global_1B416.f_273C.f_7A.f_2 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Local_50)
	{
		func_54(&(Local_50[iVar0 /*11*/].f_2));
		func_41(&(Local_50[iVar0 /*11*/].f_1));
		Local_50[iVar0 /*11*/].f_1 = 0x00000000;
		iVar0++;
	}
	if (func_73(0x0000006A) == 0x00000001)
	{
		func_68(0x0000006A, 0x00000001);
		func_77();
		func_72(0x0000000C);
	}
	else if (func_76(&(Local_44.f_1)))
	{
		func_68(0x0000006A, 0x00000001);
		func_77();
		func_72(0x0000000C);
	}
	else
	{
		func_74(0x0000000C);
	}
	if (iLocal_60)
	{
		unk_0x71199B01895C6202(Local_44.f_7);
	}
	unk_0x10FAF14A60A0DBE1();
}

bool func_76(var uParam0)
{
	if (uParam0->f_3 <= 0x00000000)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

void func_77()
{
	int iVar0;
	
	iVar0 = func_78(0x00000040);
	Global_24D752[iVar0 /*83*/] = 0x00000040;
	StringCopy(&(Global_24D752[iVar0 /*83*/].f_12[0x00000000 /*16*/]), "", 64);
}

int func_78(int iParam0)
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

