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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	var uLocal_48 = 0;
	struct<11> Local_49[10];
	char* sLocal_50[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 0x00000003;
	iLocal_37 = 0x00000001;
	iLocal_38 = 0x00000001;
	iLocal_40 = joaat("prop_time_capsule_01");
	if (unk_0x2EBF608FFE6CA406(0x000000D2))
	{
		func_50();
	}
	if (unk_0x8A22C4C08282BF26(joaat("epsilontract")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_49(0x00000009);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		switch (iLocal_39)
		{
			case 0x00000000:
				func_48();
				break;
			
			case 0x00000001:
				func_1();
				break;
			
			case 0x00000002:
				func_50();
				break;
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if ((func_47(unk_0x16F2683693E537C9()) && !func_46(0x0000000E)) && !unk_0x757EF87A33649210())
	{
		if (iLocal_41 < 0x0000000A)
		{
			if (iLocal_41 == 0x00000000)
			{
				if (!func_45(0x00000024) && (unk_0x1C0640BA9A7327B3() - iLocal_42) > iLocal_43)
				{
					func_44(0x00000000, 0x0000003C, sLocal_50[0x00000000], 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
					func_43(0x00000024);
					iLocal_42 = 0xFFFFFFFF;
				}
			}
			else if (iLocal_41 < 0x0000000A)
			{
				if (!iLocal_42 == 0xFFFFFFFF)
				{
					if ((unk_0x1C0640BA9A7327B3() - iLocal_42) > 0x00003A98)
					{
						func_44(0x00000000, 0x0000003C, sLocal_50[iLocal_41], 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
						iLocal_42 = 0xFFFFFFFF;
					}
				}
			}
			if (Local_49[iLocal_41 /*11*/].f_A)
			{
				if (unk_0xEB751B41BC4080D4(Local_49[iLocal_41 /*11*/].f_1) || func_42(Local_49[iLocal_41 /*11*/].f_1))
				{
					if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
					{
						unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
					}
					func_41(&(Local_49[iLocal_41 /*11*/].f_1));
					Local_49[iLocal_41 /*11*/].f_A = 0x00000000;
					unk_0x5E858A00EAFA5B24(0x00000000, 0x000000C8, 0x000000FA);
					iVar0 = (0x00000325 + iLocal_41);
					func_40(iVar0, 0x00000001, 0xFFFFFFFF, 0x00000001);
					unk_0x9505C13496579D28(joaat("num_hidden_packages_2"), 1f);
					bLocal_46 = 0x00000001;
					if (iLocal_41 < 0x0000000A)
					{
						iLocal_41++;
						iLocal_42 = unk_0x1C0640BA9A7327B3();
						func_39(0x00000001, 0x00000000);
						func_37();
					}
				}
				else if (unk_0x762119754C50557A(Local_49[iLocal_41 /*11*/].f_1))
				{
					func_35(Local_49[iLocal_41 /*11*/].f_3);
					func_34(&(Local_49[iLocal_41 /*11*/].f_1), &(Local_49[iLocal_41 /*11*/].f_A));
				}
			}
			else
			{
				while (func_33(0x00000004, iVar1) && iVar1 < 0x0000000A)
				{
					iVar1++;
				}
				if (iVar1 == iLocal_41)
				{
					func_31(&(Local_49[iLocal_41 /*11*/]), iLocal_40, joaat("pickup_custom_script"), 0x00000000, 0x00000000, 0x00000002);
				}
			}
		}
		else if (!bLocal_47 && !bLocal_46)
		{
			func_13();
		}
		func_2(&bLocal_46, &bLocal_47, &uLocal_48, 0x00000004, &uLocal_44, &iLocal_45, "TRACT_TITLE", "TRACT_COLLECT");
	}
}

void func_2(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4, int iParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_12(0x00000000);
	if (*bParam0)
	{
		switch (*uParam4)
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
					*uParam4++;
				}
				break;
			
			case 0x00000001:
				unk_0x7E60C62A7CE58FC8(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x7ACC3006A87F8B39(sParam6);
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39(sParam7);
				unk_0x6D99DF8263D35CE5(func_4(iParam3));
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
				*uParam2 = unk_0x1C0640BA9A7327B3();
				*uParam4++;
				break;
			
			case 0x00000002:
				if ((unk_0x1C0640BA9A7327B3() - *uParam2) > 0x00001B58)
				{
					unk_0x7E60C62A7CE58FC8(*iParam5, "SHARD_ANIM_OUT");
					unk_0x3CAEA85DA607305E(0x00000001);
					unk_0x7C19E5E4784BD7CF(0.33f);
					unk_0x7E60D21B163E9D56();
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_12(0x00000001);
						unk_0x6567AE843FADBA94(*iParam5, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
					}
				}
				break;
			
			case 0x00000003:
				if ((unk_0x1C0640BA9A7327B3() - *uParam2) > 0x00001D4C)
				{
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_12(0x00000001);
						unk_0x6567AE843FADBA94(*iParam5, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
					}
				}
				break;
			
			case 0x00000004:
				if (unk_0x83D8570832F172A7(*iParam5))
				{
					unk_0xE17FDF9E3068281B(iParam5);
				}
				func_12(0x00000000);
				*bParam1 = 0x00000000;
				*bParam0 = 0x00000000;
				*uParam4 = 0x00000000;
				break;
			}
	}
}

int func_3()
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

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000002)
	{
		iVar1 = 0x00000000;
		while (iVar1 < func_11(iParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_6C, func_10(func_11(iParam0), iVar1)))
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
		while (iVar1 < func_11(iParam0))
		{
			iVar2 = (func_9(iParam0) + iVar1);
			if (func_5(iVar2, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_8();
	}
	iVar1 = func_7(iParam0, iParam1);
	uVar2 = func_6(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_6(int iParam0)
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

int func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_8();
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

int func_8()
{
	return Global_1407E9;
}

int func_9(int iParam0)
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

int func_10(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000020)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_11(int iParam0)
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

void func_12(int iParam0)
{
	if (Global_12C59 != iParam0)
	{
		Global_12C59 = iParam0;
	}
}

void func_13()
{
	func_30(0x0000005F, 0x00000001);
	func_15(0x0000001B, 0x00000054, 0x00000000);
	func_14(0x00000009);
	iLocal_39 = 0x00000002;
}

int func_14(int iParam0)
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

int func_15(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_28(iParam0, 0x00000001);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (Global_CACB[iVar0 /*203*/].f_9 == 0x00000004)
	{
		return 0x00000000;
	}
	Global_CACB[iVar0 /*203*/].f_2 = iParam0;
	Global_CACB[iVar0 /*203*/].f_A[Global_CACB[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_CACB[iVar0 /*203*/].f_A[Global_CACB[iVar0 /*203*/].f_9 /*48*/].f_1 = 0x00000000;
	Global_CACB[iVar0 /*203*/].f_A[Global_CACB[iVar0 /*203*/].f_9 /*48*/].f_6 = 0x00000000;
	Global_CACB[iVar0 /*203*/].f_9++;
	iVar1 = 0x00000000;
	iVar2 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < Global_CACB[iVar0 /*203*/].f_3)
	{
		if (iVar2 == 0xFFFFFFFF)
		{
			if (Global_CACB[iVar0 /*203*/].f_4[iVar1] == Global_A677[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		if (Global_CACB[iVar0 /*203*/].f_3 == 0x00000004)
		{
			return 0x00000000;
		}
		else
		{
			Global_CACB[iVar0 /*203*/].f_4[Global_CACB[iVar0 /*203*/].f_3] = Global_A677[iParam1 /*12*/].f_3;
			Global_CACB[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0x00000000;
	iVar2 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < Global_CACB[iVar0 /*203*/].f_3)
	{
		if (iVar2 == 0xFFFFFFFF)
		{
			if (Global_CACB[iVar0 /*203*/].f_4[iVar1] == Global_A677[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		if (Global_CACB[iVar0 /*203*/].f_3 == 0x00000004)
		{
			return 0x00000000;
		}
		else
		{
			Global_CACB[iVar0 /*203*/].f_4[Global_CACB[iVar0 /*203*/].f_3] = Global_A677[iParam1 /*12*/].f_2;
			Global_CACB[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_CACB[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_CACB[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 0x00000003)
		{
			func_16(Global_CACB[iVar0 /*203*/].f_4[iVar1], Global_CACB[iVar0 /*203*/].f_1, 0x00000001, bParam2, 0x00000000);
		}
		iVar1++;
	}
	return 0x00000001;
}

void func_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 0x00000003)
	{
		return;
	}
	iVar0 = 0xFFFFFFFF;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_B374[iParam1 /*46*/].f_2A - 0x00000001);
		if (iVar4 < 0x00000000)
		{
			return;
		}
		iVar5 = Global_B374[iParam1 /*46*/].f_20[iVar4];
		iVar2 = iVar5;
		Var3 = { func_27(Global_A677[iVar5 /*12*/].f_1) };
		if (Global_A677[iVar5 /*12*/].f_2 == iParam0 && !Global_A677[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_A677[iVar5 /*12*/].f_2;
		iVar0 = Global_C961[iParam0 /*120*/];
		bVar6 = 0x00000000;
		while (iVar0 >= 0x00000010)
		{
			iVar0 = (iVar0 - 0x00000010);
			bVar6 = 0x00000001;
		}
		if (bVar6)
		{
			if (!Global_C961[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0x00000000:
						Global_A66F = (Global_A66F - 0x00000001);
						if (Global_A66F < 0x00000000)
						{
							Global_A66F = 0x00000000;
						}
						break;
					
					case 0x00000001:
						Global_A670 = (Global_A670 - 0x00000001);
						if (Global_A670 < 0x00000000)
						{
							Global_A670 = 0x00000000;
						}
						break;
					
					case 0x00000002:
						Global_A671 = (Global_A671 - 0x00000001);
						if (Global_A671 < 0x00000000)
						{
							Global_A671 = 0x00000000;
						}
						break;
					}
				}
		}
		Global_C961[iParam0 /*120*/].f_12[iVar0] = iParam1;
		Global_C961[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_C961[iParam0 /*120*/].f_23[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_56[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_45[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_C961[iParam0 /*120*/];
		bVar7 = 0x00000000;
		while (iVar0 >= 0x00000010)
		{
			iVar0 = (iVar0 - 0x00000010);
			bVar7 = 0x00000001;
		}
		if (bVar7)
		{
			if (!Global_C961[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0x00000000:
						Global_A66F = (Global_A66F - 0x00000001);
						if (Global_A66F < 0x00000000)
						{
							Global_A66F = 0x00000000;
						}
						break;
					
					case 0x00000001:
						Global_A670 = (Global_A670 - 0x00000001);
						if (Global_A670 < 0x00000000)
						{
							Global_A670 = 0x00000000;
						}
						break;
					
					case 0x00000002:
						Global_A671 = (Global_A671 - 0x00000001);
						if (Global_A671 < 0x00000000)
						{
							Global_A671 = 0x00000000;
						}
						break;
					}
				}
		}
		iVar8 = 0xFFFFFFFF;
		iVar9 = 0x00000000;
		iVar9 = 0x00000000;
		while (iVar9 < 0x00000007)
		{
			if (Global_CACB[iVar9 /*203*/].f_1 == iParam1 && Global_CACB[iVar9 /*203*/].f_9 > 0x00000000)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == 0xFFFFFFFF)
		{
			return;
		}
		Global_C961[iParam0 /*120*/].f_12[iVar0] = Global_CACB[iVar8 /*203*/].f_1;
		Global_C961[iParam0 /*120*/].f_1[iVar0] = (Global_CACB[iVar8 /*203*/].f_9 - 0x00000001);
		Global_C961[iParam0 /*120*/].f_23[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_56[iVar0] = 0x00000001;
		Global_C961[iParam0 /*120*/].f_45[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/]++;
		iVar10 = Global_C961[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_CACB[iVar8 /*203*/].f_A[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_A677[iVar11 /*12*/].f_2;
		if (Global_CACB[iVar8 /*203*/].f_A[(Global_CACB[iVar8 /*203*/].f_9 - 0x00000001) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_CACB[iVar8 /*203*/].f_A[(Global_CACB[iVar8 /*203*/].f_9 - 0x00000001) /*48*/].f_2}, 0x00000010);
		}
		else
		{
			Var3 = { func_27(Global_A677[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_C961[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0x00000000:
					func_17(0x00000000, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000001:
					if (iVar2 == 0x000000F9)
					{
						func_17(0x00000001, iVar1, iVar2, "PW_FEED_EM_1", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_17(0x00000001, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				
				case 0x00000002:
					func_17(0x00000002, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				}
			}
	}
}

void func_17(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x22A8E52414415B76())
	{
		return;
	}
	iVar0 = func_21();
	bVar1 = 0x00000000;
	StringCopy(&cVar2, func_20(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 0x00000048:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL1");
				break;
			
			case 0x00000049:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL3");
				break;
			
			case 0x0000004A:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x1E64CE678ED5F61E(sParam3);
				if (!unk_0xEA6BC48857E0AC4C(sParam4))
				{
					unk_0x6B012227B3921E18(sParam4);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam5))
				{
					unk_0x6B012227B3921E18(sParam5);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam6))
				{
					unk_0x6B012227B3921E18(sParam6);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x6B012227B3921E18(sParam7);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam8))
				{
					unk_0x6B012227B3921E18(sParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam9))
				{
					unk_0x6B012227B3921E18(sParam9);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam10))
				{
					unk_0x6B012227B3921E18(sParam10);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam11))
				{
					unk_0x6B012227B3921E18(sParam11);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam12))
				{
					unk_0x6B012227B3921E18(sParam12);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam13))
				{
					unk_0x6B012227B3921E18(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_18(unk_0x1AEA174B291A9906(&cVar2, &cVar2, 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_19(iParam1)), 0x00000000));
		}
		else
		{
			func_18(unk_0x1AEA174B291A9906("CHAR_DEFAULT", "CHAR_DEFAULT", 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_19(iParam1)), 0x00000000));
		}
		switch (Global_4C1E)
		{
			case 0x00000000:
				StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
				Global_A66F++;
				if (Global_A66F > 0x00000010)
				{
					Global_A66F = 0x00000010;
				}
				break;
			
			case 0x00000002:
				StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
				Global_A671++;
				if (Global_A671 > 0x00000010)
				{
					Global_A671 = 0x00000010;
				}
				break;
			
			case 0x00000001:
				StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
				Global_A670++;
				if (Global_A670 > 0x00000010)
				{
					Global_A670 = 0x00000010;
				}
				break;
			
			default:
				StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Notification", &Global_4C13, 0x00000001);
	}
}

void func_18(var uParam0)
{
	Global_A672[Global_A676] = uParam0;
	Global_5567 = 0x00000001;
	Global_5566 = uParam0;
	Global_A676++;
	if (Global_A676 == 0x00000003)
	{
		Global_A676 = 0x00000000;
	}
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "EMSTR_0";
		
		case 0x00000003:
			return "EMSTR_3";
		
		case 0x00000001:
			return "EMSTR_6";
		
		case 0x00000002:
			return "EMSTR_9";
		
		case 0x00000004:
			return "EMSTR_12";
		
		case 0x00000005:
			return "EMSTR_29";
		
		case 0x00000006:
			return "EMSTR_36";
		
		case 0x00000007:
			return "EMSTR_39";
		
		case 0x00000008:
			return "EMSTR_52";
		
		case 0x00000009:
			return "EMSTR_55";
		
		case 0x0000000A:
			return "EMSTR_58";
		
		case 0x0000000B:
			return "EMSTR_78";
		
		case 0x0000000C:
			return "EMSTR_81";
		
		case 0x0000000D:
			return "EMSTR_84";
		
		case 0x0000000E:
			return "EMSTR_87";
		
		case 0x0000000F:
			return "EMSTR_106";
		
		case 0x00000010:
			return "EMSTR_114";
		
		case 0x00000011:
			return "EMSTR_142";
		
		case 0x00000012:
			return "EMSTR_145";
		
		case 0x00000013:
			return "EMSTR_152";
		
		case 0x00000014:
			return "EMSTR_157";
		
		case 0x00000015:
			return "EMSTR_163";
		
		case 0x00000016:
			return "EMSTR_182";
		
		case 0x00000017:
			return "EMSTR_187";
		
		case 0x00000018:
			return "EMSTR_190";
		
		case 0x00000019:
			return "EMSTR_206";
		
		case 0x0000001A:
			return "EMSTR_219";
		
		case 0x0000001B:
			return "EMSTR_226";
		
		case 0x0000001C:
			return "EMSTR_233";
		
		case 0x0000001D:
			return "EMSTR_242";
		
		case 0x0000001E:
			return "EMSTR_249";
		
		case 0x0000001F:
			return "EMSTR_262";
		
		case 0x00000020:
			return "EMSTR_269";
		
		case 0x00000021:
			return "EMSTR_319";
		
		case 0x00000022:
			return "EMSTR_340";
		
		case 0x00000023:
			return "EMSTR_348";
		
		case 0x00000024:
			return "EMSTR_182";
		
		case 0x00000025:
			return "EMSTR_357";
		
		case 0x00000026:
			return "EMSTR_360";
		
		case 0x00000027:
			return "EMSTR_369";
		
		case 0x00000028:
			return "EMSTR_376";
		
		case 0x00000029:
			return "EMSTR_379";
		
		case 0x0000002A:
			return "EMSTR_382";
		
		case 0x0000002B:
			return "EMSTR_384";
		
		case 0x0000002C:
			return "EMSTR_387";
		
		case 0x0000002D:
			return "EMSTR_390";
		
		case 0x0000002E:
			return "EMSTR_393";
		
		case 0x0000002F:
			return "EMSTR_396";
		
		case 0x00000030:
			return "EMSTR_399";
		
		case 0x00000031:
			return "EMSTR_402";
		
		case 0x00000032:
			return "EMSTR_405";
		
		case 0x00000033:
			return "EMSTR_408";
		
		case 0x00000034:
			return "EMSTR_411";
		
		case 0x00000035:
			return "EMSTR_414";
		
		case 0x00000036:
			return "EMSTR_465";
		
		case 0x00000037:
			return "EMSTR_468";
		
		case 0x00000038:
			return "EMSTR_489";
		
		case 0x00000039:
			return "EMSTR_492";
		
		case 0x0000003A:
			return "EMSTR_495";
		
		case 0x0000003B:
			return "EMSTR_498";
		
		case 0x0000003C:
			return "EMSTR_501";
		
		case 0x0000003D:
			return "EMSTR_504";
		
		case 0x0000003E:
			return "EMSTR_507";
		
		case 0x0000003F:
			return "EMSTR_640";
		
		case 0x00000040:
			return "EMSTR_643";
		
		case 0x00000041:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_20(int iParam0, int iParam1)
{
	*iParam1 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000000 /*29*/].f_7));
		
		case 0x00000001:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000001 /*29*/].f_7));
		
		case 0x00000002:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000002 /*29*/].f_7));
		
		case 0x00000007:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000C /*29*/].f_7));
		
		case 0x00000004:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000003C /*29*/].f_7));
		
		case 0x00000006:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000003E /*29*/].f_7));
		
		case 0x00000003:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000E /*29*/].f_7));
		
		case 0x00000010:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000061 /*29*/].f_7));
		
		case 0x00000013:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000063 /*29*/].f_7));
		
		case 0x0000000F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000060 /*29*/].f_7));
		
		case 0x0000003F:
			return "CHAR_CARSITE2";
		
		case 0x00000040:
			return "CHAR_BOATSITE";
		
		case 0x00000008:
			return "CHAR_BANK_MAZE";
		
		case 0x00000009:
			return "CHAR_BANK_FLEECA";
		
		case 0x0000000A:
			return "CHAR_BANK_BOL";
		
		case 0x00000015:
			return "CHAR_MINOTAUR";
		
		case 0x00000019:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000F /*29*/].f_7));
		
		case 0x0000001A:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000001E /*29*/].f_7));
		
		case 0x0000001B:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000011 /*29*/].f_7));
		
		case 0x0000001D:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000014 /*29*/].f_7));
		
		case 0x0000001E:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000002B /*29*/].f_7));
		
		case 0x0000001F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000002C /*29*/].f_7));
		
		case 0x00000020:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000013 /*29*/].f_7));
		
		case 0x00000022:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000028 /*29*/].f_7));
		
		case 0x00000024:
			return unk_0x19C9F30A7697B43C("CELL_E_381");
		
		case 0x00000026:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000040 /*29*/].f_7));
		
		case 0x00000005:
			return "CHAR_EPSILON";
		
		case 0x0000000D:
			return "CHAR_MILSITE";
		
		case 0x0000000B:
			return "CHAR_CARSITE";
		
		case 0x0000000E:
			return "CHAR_BOATSITE";
		
		case 0x0000000C:
			return "CHAR_PLANESITE";
		
		case 0x00000018:
			return "CHAR_DR_FRIEDLANDER";
		
		case 0x00000037:
			return "CHAR_CARSITE2";
		
		case 0x00000036:
			return "CHAR_BIKESITE";
		
		case 0x00000027:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007A /*29*/].f_7));
		
		case 0x00000028:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007D /*29*/].f_7));
		
		case 0x00000029:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000071 /*29*/].f_7));
		
		case 0x0000002A:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007E /*29*/].f_7));
		
		case 0x0000002B:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007F /*29*/].f_7));
		
		case 0x0000002C:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007C /*29*/].f_7));
		
		case 0x0000002D:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000072 /*29*/].f_7));
		
		case 0x0000002E:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000073 /*29*/].f_7));
		
		case 0x0000002F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000074 /*29*/].f_7));
		
		case 0x00000030:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007B /*29*/].f_7));
		
		case 0x00000031:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000075 /*29*/].f_7));
		
		case 0x00000032:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000076 /*29*/].f_7));
		
		case 0x00000033:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000077 /*29*/].f_7));
		
		case 0x00000034:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000078 /*29*/].f_7));
		
		case 0x00000035:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000079 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0x00000000;
	return "ERROR!";
}

var func_21()
{
	func_22();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_22()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_25(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_24(unk_0x16F2683693E537C9());
			if (func_23(iVar0) && (!func_46(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_23(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_23(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_26(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

struct<16> func_27(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_29(iParam0);
	if (iVar0 > 0xFFFFFFFF)
	{
		if (Global_CACB[iVar0 /*203*/].f_9 < 0x00000004)
		{
			return iVar0;
		}
	}
	iVar1 = 0x00000000;
	bVar2 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000007)
	{
		if (Global_CACB[iVar1 /*203*/] == 0x00000000)
		{
			bVar2 = 0x00000001;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0xFFFFFFFF;
	}
	bVar3 = 0x00000001;
	iVar1 = 0x00000000;
	iVar4 = 0xFFFFFFFF;
	iVar5 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000007)
	{
		if (Global_CACB[iVar1 /*203*/] == 0x00000000)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_CACB[iVar1 /*203*/].f_1;
				bVar3 = 0x00000000;
			}
			else if (iVar5 > Global_CACB[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_CACB[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_CACB[iVar4 /*203*/].f_9 > 0x00000000)
	{
		iVar1 = 0x00000000;
		iVar1 = 0x00000000;
		while (iVar1 < Global_CACB[iVar4 /*203*/].f_9)
		{
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x00000003)
			{
				iVar7 = Global_C961[iVar6 /*120*/];
				if (iVar7 > 0x00000010)
				{
					iVar7 = 0x00000010;
				}
				iVar8 = 0x00000000;
				iVar8 = 0x00000000;
				while (iVar8 < iVar7)
				{
					if (Global_C961[iVar6 /*120*/].f_56[iVar8])
					{
						if (!Global_C961[iVar6 /*120*/].f_45[iVar8])
						{
							if (Global_C961[iVar6 /*120*/].f_12[iVar8] == Global_CACB[iVar4 /*203*/].f_1)
							{
								if (Global_C961[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0x00000000:
											Global_A66F = (Global_A66F - 0x00000001);
											break;
										
										case 0x00000001:
											Global_A670 = (Global_A670 - 0x00000001);
											break;
										
										case 0x00000002:
											Global_A671 = (Global_A671 - 0x00000001);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_CACB[iVar4 /*203*/].f_2 = iParam0;
	Global_CACB[iVar4 /*203*/].f_3 = 0x00000000;
	if (!bParam1)
	{
		Global_CACB[iVar4 /*203*/] = 0x00000001;
	}
	Global_1B416.f_5228.f_136++;
	if (Global_1B416.f_5228.f_136 == 0x00000000)
	{
		Global_1B416.f_5228.f_136 = 0x00000001;
	}
	Global_CACB[iVar4 /*203*/].f_1 = Global_1B416.f_5228.f_136;
	Global_CACB[iVar4 /*203*/].f_9 = 0x00000000;
	return iVar4;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (Global_CACB[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_CACB[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_CACB[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != 0xFFFFFFFF && iVar2 != 0xFFFFFFFF)
	{
		return iVar1;
	}
	return 0xFFFFFFFF;
}

void func_30(int iParam0, int iParam1)
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

void func_31(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!uParam0->f_A)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_46(0x0000000D) && !func_46(0x0000000E))
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
							func_32(uParam0->f_3);
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

void func_32(vector3 vParam0)
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

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0x00000001)
	{
		iVar1 = 0x000002C1;
	}
	else if (iParam0 == 0x00000000)
	{
		iVar1 = 0x000002F3;
	}
	else if (iParam0 == 0x00000003)
	{
		iVar1 = 0x0000032F;
	}
	else if (iParam0 == 0x00000004)
	{
		iVar1 = 0x00000325;
	}
	else if (iParam0 == 0x00000005)
	{
		iVar1 = 0x0000034D;
	}
	iVar0 = (iVar1 + iParam1);
	return func_5(iVar0, 0xFFFFFFFF, 0xFFFFFFFF);
}

void func_34(var uParam0, var uParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0xE925E52ACABA4CE7(*uParam0), 0x00000001) >= 60f)
		{
			func_41(uParam0);
			*uParam0 = 0x00000000;
			*uParam1 = 0x00000000;
		}
	}
}

void func_35(vector3 vParam0)
{
	if (func_36(unk_0x16F2683693E537C9(), vParam0, 7f))
	{
		unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), vParam0, 0x00000064, 0x00000800, 0x00000001);
	}
}

bool func_36(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1) <= (fParam2 * fParam2);
}

int func_37()
{
	if (func_38(0x00000000))
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

bool func_38(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_39(int iParam0, int iParam1)
{
	Global_181DF.f_7 = iParam0;
	Global_181DF.f_8 = iParam1;
}

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_8();
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

void func_41(var uParam0)
{
	if (unk_0x762119754C50557A(*uParam0))
	{
		unk_0x40B7230FD4C59AA2(*uParam0);
	}
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0x00000000;
	}
	if (func_47(unk_0x16F2683693E537C9()))
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

void func_43(int iParam0)
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

int func_44(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000015;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000016;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000017;
			break;
		
		default:
			return 0x00000000;
			break;
	}
	StringCopy(&(Global_1B416.f_3738[iVar0 /*104*/]), sParam2, 64);
	Global_1B416.f_3738[iVar0 /*104*/].f_11 = iParam1;
	if (iParam3 == 0x00000000)
	{
		return 0x00000000;
	}
	else
	{
		Global_1B416.f_3738[iVar0 /*104*/].f_18 = iParam3;
	}
	Global_1B416.f_3738[iVar0 /*104*/].f_19 = iParam4;
	Global_1B416.f_3738[iVar0 /*104*/].f_1A = iParam5;
	Global_1B416.f_3738[iVar0 /*104*/].f_1D = iParam6;
	Global_1B416.f_3738[iVar0 /*104*/].f_1E = iParam8;
	Global_1B416.f_3738[iVar0 /*104*/].f_1F = iParam7;
	Global_1B416.f_3738[iVar0 /*104*/].f_1C = 0x00000000;
	return 0x00000001;
}

int func_45(int iParam0)
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

bool func_46(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_47(int iParam0)
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

void func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	if (Global_1B416.f_4889.f_184)
	{
		sLocal_50[0x00000000] = "TRACT_HINT1B";
		iLocal_43 = 0x000493E0;
	}
	else
	{
		sLocal_50[0x00000000] = "TRACT_HINT1";
		iLocal_43 = 0x00003E80;
	}
	Local_49[0x00000000 /*11*/].f_3 = { 501.9415f, 5604.429f, 796.9146f };
	Local_49[0x00000001 /*11*/].f_3 = { 2658.18f, -1361.14f, -21.63f };
	sLocal_50[0x00000001] = "TRACT_HINT2";
	Local_49[0x00000002 /*11*/].f_3 = { 24.7139f, 7644.334f, 18.0792f };
	sLocal_50[0x00000002] = "TRACT_HINT3";
	Local_49[0x00000003 /*11*/].f_3 = { -263.55f, 4729.6f, 137.37f };
	sLocal_50[0x00000003] = "TRACT_HINT4";
	Local_49[0x00000004 /*11*/].f_3 = { -771.98f, -685.22f, 28.86f };
	sLocal_50[0x00000004] = "TRACT_HINT5";
	Local_49[0x00000005 /*11*/].f_3 = { -1605.03f, 5256.55f, 1.08f };
	sLocal_50[0x00000005] = "TRACT_HINT6";
	Local_49[0x00000006 /*11*/].f_3 = { -1804.546f, 403.9298f, 112.1966f };
	sLocal_50[0x00000006] = "TRACT_HINT7";
	Local_49[0x00000007 /*11*/].f_3 = { 484.2701f, 5617.175f, 787.4708f };
	sLocal_50[0x00000007] = "TRACT_HINT8";
	Local_49[0x00000008 /*11*/].f_3 = { -75.1004f, -819.0673f, 325.3656f };
	sLocal_50[0x00000008] = "TRACT_HINT9";
	Local_49[0x00000009 /*11*/].f_3 = { -1725.34f, -189.95f, 57.52f };
	sLocal_50[0x00000009] = "TRACT_HINT10";
	iLocal_42 = unk_0x1C0640BA9A7327B3();
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		iVar1 = (0x00000325 + iVar0);
		if (func_5(iVar1, 0xFFFFFFFF, 0xFFFFFFFF))
		{
			iLocal_41++;
		}
		iVar0++;
	}
	iLocal_39 = 0x00000001;
}

int func_49(int iParam0)
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

void func_50()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		func_41(&(Local_49[iVar0 /*11*/].f_1));
		iVar0++;
	}
	unk_0x10FAF14A60A0DBE1();
}

