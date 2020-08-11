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
#endregion

void __EntryFunction__()
{
	int iVar0[122];
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	
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
	if (unk_0x2EBF608FFE6CA406(0x00000022))
	{
		func_70();
	}
	func_69();
	func_68();
	Global_A66C = 0x00000000;
	iVar1 = func_61();
	iVar2 = func_61();
	iVar3 = 0x000007D0;
	Global_A66E = 0x00000001;
	bVar4 = 0x00000001;
	while (0x00000001)
	{
		iVar5 = 0x00000000;
		if (bVar4)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, (0x00000004 - 0x00000001)))
			{
				func_60(0x0000001A);
				bVar4 = 0x00000000;
			}
		}
		if (!Global_A66D && unk_0x1C0640BA9A7327B3() > Global_A3FE)
		{
			iVar5 = 0x00000000;
			while (iVar5 < 0x0000007A)
			{
				if ((Global_B374[iVar5 /*46*/] && !Global_B374[iVar5 /*46*/].f_1) && !Global_B374[iVar5 /*46*/].f_2D)
				{
					iVar0[iVar5] = (iVar0[iVar5] + iVar3);
					if (iVar0[iVar5] > Global_B374[iVar5 /*46*/].f_2B)
					{
						if (func_34(0x00000007, 0x00000090, 0x00000002, 0xFFFFFFFF, 0x00000000))
						{
							func_32(iVar5, 0x00000000);
							iVar0[iVar5] = 0x00000000;
							Global_A66E = 0x00000001;
						}
					}
				}
				SYSTEM::WAIT(0x00000000);
				iVar5++;
			}
			iVar1 = func_61();
			iVar6 = 0x00000000;
			iVar7 = 0x00000000;
			iVar8 = 0x00000000;
			func_20(iVar1, iVar2, &iVar7, &iVar7, &iVar6, &iVar7, &iVar7, &iVar7);
			if (iVar6 < 0x00000000)
			{
				iVar6 = (iVar6 * 0xFFFFFFFF);
			}
			if (iVar6 > 0x00000000 && Global_4C1E.f_1 == 0x00000003)
			{
				iVar2 = iVar1;
				if (Global_D059 > 0x00000000)
				{
					iVar9 = Global_D059;
					iVar10 = 0x00000000;
					while (iVar9 != 0x00000000)
					{
						if ((Global_D05A[iVar10 /*53*/].f_34 != 0x00000000 && iVar10 < 0x00000008) && Global_D05A[iVar10 /*53*/].f_4)
						{
							Global_D05A[iVar10 /*53*/].f_2 = (Global_D05A[iVar10 /*53*/].f_2 - iVar6);
							bVar11 = 0x00000000;
							bVar12 = 0x00000000;
							bVar13 = 0x00000000;
							iVar14 = 0x00000000;
							while (!bVar13)
							{
								if (Global_CACB[iVar14 /*203*/].f_1 != Global_D05A[iVar10 /*53*/].f_34)
								{
									iVar14++;
								}
								else
								{
									bVar12 = 0x00000001;
									bVar13 = 0x00000001;
								}
								if (iVar14 == 0x00000007)
								{
									bVar13 = 0x00000001;
									Global_D05A[iVar10 /*53*/].f_34 = 0x00000000;
									bVar11 = 0x00000001;
								}
							}
							if (!bVar12)
							{
								bVar11 = 0x00000001;
								Global_D05A[iVar10 /*53*/].f_4 = 0x00000000;
							}
							else if (Global_D05A[iVar10 /*53*/].f_2 < 0x00000001)
							{
								if (func_34(0x00000007, 0x00000091, 0x00000002, 0xFFFFFFFF, 0x00000000))
								{
									bVar15 = 0x00000000;
									if (Global_D05A[iVar10 /*53*/].f_5 || Global_D05A[iVar10 /*53*/].f_A > 0x00000000)
									{
										bVar15 = 0x00000001;
									}
									if (func_17(Global_D05A[iVar10 /*53*/], Global_D05A[iVar10 /*53*/].f_1, bVar15))
									{
										bVar16 = 0x00000001;
										if (Global_D05A[iVar10 /*53*/].f_A > 0x00000000)
										{
											bVar16 = 0x00000000;
										}
										if (Global_D05A[iVar10 /*53*/].f_5)
										{
											func_16(Global_D05A[iVar10 /*53*/], &(Global_D05A[iVar10 /*53*/].f_6), bVar16);
										}
										if (Global_D05A[iVar10 /*53*/].f_A > 0x00000000)
										{
											iVar8 = 0x00000000;
											iVar8 = 0x00000000;
											while (iVar8 < Global_D05A[iVar10 /*53*/].f_A)
											{
												func_15(Global_D05A[iVar10 /*53*/], &(Global_D05A[iVar10 /*53*/].f_B[iVar8 /*4*/]));
												iVar8++;
											}
										}
										if (bVar15 && !bVar16)
										{
											func_1(Global_D05A[iVar10 /*53*/]);
										}
										func_60(Global_D05A[iVar10 /*53*/]);
									}
									Global_D05A[iVar10 /*53*/].f_34 = 0x00000000;
									Global_D05A[iVar10 /*53*/].f_5 = 0x00000000;
									Global_D05A[iVar10 /*53*/].f_2 = 0x00000000;
									bVar11 = 0x00000001;
									Global_D05A[iVar10 /*53*/].f_4 = 0x00000000;
								}
							}
							if (bVar11)
							{
								Global_D059 = (Global_D059 - 0x00000001);
							}
							iVar9 = (iVar9 - 0x00000001);
						}
						iVar10++;
						if (iVar10 == 0x00000008)
						{
							iVar9 = 0x00000000;
						}
						SYSTEM::WAIT(0x00000000);
					}
				}
			}
		}
		SYSTEM::WAIT(iVar3);
		Global_A66F = 0x00000000;
		Global_A670 = 0x00000000;
		Global_A671 = 0x00000000;
		iVar17 = Global_C961[0x00000000 /*120*/];
		if (iVar17 > 0x00000010)
		{
			iVar17 = 0x00000010;
		}
		iVar5 = 0x00000000;
		while (iVar5 < iVar17)
		{
			if (!Global_C961[0x00000000 /*120*/].f_45[iVar5])
			{
				Global_A66F++;
			}
			iVar5++;
		}
		iVar17 = Global_C961[0x00000001 /*120*/];
		if (iVar17 > 0x00000010)
		{
			iVar17 = 0x00000010;
		}
		iVar5 = 0x00000000;
		while (iVar5 < iVar17)
		{
			if (!Global_C961[0x00000001 /*120*/].f_45[iVar5])
			{
				Global_A670++;
			}
			iVar5++;
		}
		iVar17 = Global_C961[0x00000002 /*120*/];
		if (iVar17 > 0x00000010)
		{
			iVar17 = 0x00000010;
		}
		iVar5 = 0x00000000;
		while (iVar5 < iVar17)
		{
			if (!Global_C961[0x00000002 /*120*/].f_45[iVar5])
			{
				Global_A671++;
			}
			iVar5++;
		}
		SYSTEM::WAIT(iVar3);
	}
}

void func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_14(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_CACB[iVar0 /*203*/].f_9 == 0x00000000)
	{
		return;
	}
	iVar1 = Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/];
	iVar2 = (Global_CACB[iVar0 /*203*/].f_9 - 0x00000001);
	if (!Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/];
		MemCopy(&Var3, {func_13(Global_A677[iVar4 /*12*/].f_1)}, 0x00000004);
	}
	else
	{
		Var3 = { Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 0x0000001C)
	{
		switch (iVar1)
		{
			case 0x000000F9:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 0x0000010D:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_2(0x00000001, Global_A677[iVar1 /*12*/].f_2, iVar1, sVar5, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		switch (Global_A677[iVar1 /*12*/].f_3)
		{
			case 0x00000000:
				func_2(0x00000000, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			
			case 0x00000001:
				func_2(0x00000001, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			
			case 0x00000002:
				func_2(0x00000002, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			}
	}
}

void func_2(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x22A8E52414415B76())
	{
		return;
	}
	iVar0 = func_6();
	bVar1 = 0x00000000;
	StringCopy(&cVar2, func_5(iParam1, &bVar1), 64);
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
			func_3(unk_0x1AEA174B291A9906(&cVar2, &cVar2, 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_4(iParam1)), 0x00000000));
		}
		else
		{
			func_3(unk_0x1AEA174B291A9906("CHAR_DEFAULT", "CHAR_DEFAULT", 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_4(iParam1)), 0x00000000));
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

void func_3(int iParam0)
{
	Global_A672[Global_A676] = iParam0;
	Global_5567 = 0x00000001;
	Global_5566 = iParam0;
	Global_A676++;
	if (Global_A676 == 0x00000003)
	{
		Global_A676 = 0x00000000;
	}
}

char* func_4(int iParam0)
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

char* func_5(int iParam0, int iParam1)
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

int func_6()
{
	func_7();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_7()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_11(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_10(unk_0x16F2683693E537C9());
			if (func_9(iVar0) && (!func_8(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_9(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_8(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return func_12(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_12(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

struct<16> func_13(int iParam0)
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

int func_14(int iParam0)
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

void func_15(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_14(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_CACB[iVar0 /*203*/].f_9 == 0x00000000)
	{
		return;
	}
	if (Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_6 == 0x0000000A)
	{
		return;
	}
	iVar1 = Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_6;
	Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_6++;
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

void func_16(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_14(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_CACB[iVar0 /*203*/].f_9 == 0x00000000)
	{
		return;
	}
	Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_1 = 0x00000001;
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_2), sParam1, 16);
	Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_6 = 0x00000000;
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[0x00000000 /*4*/]), "", 16);
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[0x00000001 /*4*/]), "", 16);
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[0x00000002 /*4*/]), "", 16);
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[0x00000003 /*4*/]), "", 16);
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[0x00000004 /*4*/]), "", 16);
	if (bParam2)
	{
		func_1(iParam0);
	}
}

int func_17(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_19(iParam0, 0x00000001);
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
			func_18(Global_CACB[iVar0 /*203*/].f_4[iVar1], Global_CACB[iVar0 /*203*/].f_1, 0x00000001, bParam2, 0x00000000);
		}
		iVar1++;
	}
	return 0x00000001;
}

void func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		Var3 = { func_13(Global_A677[iVar5 /*12*/].f_1) };
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
			Var3 = { func_13(Global_A677[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_C961[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0x00000000:
					func_2(0x00000000, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000001:
					if (iVar2 == 0x000000F9)
					{
						func_2(0x00000001, iVar1, iVar2, "PW_FEED_EM_1", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_2(0x00000001, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				
				case 0x00000002:
					func_2(0x00000002, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				}
			}
	}
}

int func_19(int iParam0, bool bParam1)
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
	
	iVar0 = func_14(iParam0);
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

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_30(iParam0, iParam1))
	{
		iVar0 = func_29(iParam1);
		iVar1 = func_27(iParam0);
		iVar2 = (func_27(iParam0) - func_27(iParam1));
		iVar3 = (func_29(iParam0) - func_29(iParam1));
		iVar4 = (func_26(iParam0) - func_26(iParam1));
		iVar5 = (func_25(iParam0) - func_25(iParam1));
		iVar6 = (func_24(iParam0) - func_24(iParam1));
		iVar7 = (func_23(iParam0) - func_23(iParam1));
	}
	else
	{
		iVar0 = func_29(iParam0);
		iVar1 = func_27(iParam1);
		iVar2 = (func_27(iParam1) - func_27(iParam0));
		iVar3 = (func_29(iParam1) - func_29(iParam0));
		iVar4 = (func_26(iParam1) - func_26(iParam0));
		iVar5 = (func_25(iParam1) - func_25(iParam0));
		iVar6 = (func_24(iParam1) - func_24(iParam0));
		iVar7 = (func_23(iParam1) - func_23(iParam0));
	}
	while (iVar7 < 0x00000000)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 0x00000001);
	}
	while (iVar7 > 0x0000003B)
	{
		iVar7 = (iVar7 - 0x0000003C);
		iVar6++;
	}
	while (iVar6 < 0x00000000)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 0x00000001);
	}
	while (iVar6 > 0x0000003B)
	{
		iVar6 = (iVar6 - 0x0000003C);
		iVar5++;
	}
	while (iVar5 < 0x00000000)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 0x00000001);
	}
	while (iVar5 > 0x00000017)
	{
		iVar5 = (iVar5 - 0x00000018);
		iVar4++;
	}
	while (iVar4 < 0x00000000)
	{
		while (iVar3 < 0x00000000)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 0x00000001);
		}
		iVar4 = (iVar4 + func_22(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_21(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0x00000000)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 0x00000001);
	}
	while (iVar3 > 0x0000000C)
	{
		iVar3 = (iVar3 - 0x0000000C);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_21(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_22(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		iParam1 = 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000004:
		case 0x00000006:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000B:
			return 0x0000001F;
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000008:
		case 0x0000000A:
			return 0x0000001E;
			break;
		
		case 0x00000001:
			if ((iParam1 % 0x00000004) == 0x00000000)
			{
				if ((iParam1 % 0x00000064) != 0x00000000)
				{
					return 0x0000001D;
				}
				else if ((iParam1 % 0x00000190) == 0x00000000)
				{
					return 0x0000001D;
				}
			}
			return 0x0000001C;
			break;
	}
	return 0x0000001E;
}

int func_23(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_24(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_25(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_26(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_27(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_28(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_28(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_29(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_31(iParam1) || !func_31(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_27(iParam0);
	iVar1 = func_27(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_29(iParam0);
	iVar1 = func_29(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 0xFFFFFFF1)
	{
		return 0x00000000;
	}
	iVar0 = func_23(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_24(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_25(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_27(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_29(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_26(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_22(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_32(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_B374[iParam0 /*46*/] && !Global_B374[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_B374[iParam0 /*46*/].f_1F == Global_B374[iParam0 /*46*/].f_1E)
	{
		iVar0 = (Global_B374[iParam0 /*46*/].f_2A - 0x00000001);
		if (iVar0 < 0x00000000)
		{
			return;
		}
		if (Global_A677[Global_B374[iParam0 /*46*/].f_20[iVar0] /*12*/].f_4 == 0x00000000)
		{
			Global_B374[iParam0 /*46*/].f_1 = 0x00000001;
		}
		return;
	}
	if (Global_B374[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_B374[iParam0 /*46*/].f_8[Global_B374[iParam0 /*46*/].f_1F];
	Global_B374[iParam0 /*46*/].f_1F++;
	func_33(iParam0, iVar1);
	Global_B374[iParam0 /*46*/].f_2D = Global_A677[iVar1 /*12*/].f_A;
	Global_B374[iParam0 /*46*/].f_2B = Global_A677[iVar1 /*12*/].f_B;
	iVar2 = Global_B374[iParam0 /*46*/].f_2;
	func_18(Global_A677[iVar1 /*12*/].f_3, iParam0, 0x00000000, 0x00000000, bParam1);
	iVar3 = 0x00000000;
	while (iVar3 < iVar2)
	{
		if (Global_B374[iParam0 /*46*/].f_3[iVar3] != Global_A677[iVar1 /*12*/].f_2 && Global_B374[iParam0 /*46*/].f_3[iVar3] != Global_A677[iVar1 /*12*/].f_3)
		{
			func_18(Global_B374[iParam0 /*46*/].f_3[iVar3], iParam0, 0x00000000, 0x00000000, bParam1);
		}
		iVar3++;
	}
	if (Global_B374[iParam0 /*46*/].f_1F == Global_B374[iParam0 /*46*/].f_1E)
	{
		if (Global_A677[Global_B374[iParam0 /*46*/].f_20[(Global_B374[iParam0 /*46*/].f_2A - 0x00000001)] /*12*/].f_4 == 0x00000000)
		{
			Global_B374[iParam0 /*46*/].f_1 = 0x00000001;
			return;
		}
	}
}

int func_33(int iParam0, var uParam1)
{
	if (Global_B374[iParam0 /*46*/].f_2A >= 0x00000009)
	{
		return 0x00000000;
	}
	Global_B374[iParam0 /*46*/].f_20[Global_B374[iParam0 /*46*/].f_2A] = uParam1;
	Global_B374[iParam0 /*46*/].f_2A++;
	return 0x00000001;
}

int func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[16];
	int iVar6[2];
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0x00000000;
	}
	if (func_59())
	{
		return 0x00000000;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
	}
	if (unk_0x25037C66EB32B076())
	{
		return 0x00000000;
	}
	if (func_58() && iParam2 < 0x00000004)
	{
		return 0x00000000;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_56(unk_0x16F2683693E537C9()))
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam0, func_55()) && !unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000013))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_12B4C)
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (Global_12061)
	{
		return 0x00000000;
	}
	if (Global_1721F)
	{
		return 0x00000000;
	}
	if ((func_54() || (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004)) || func_53())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000012))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iParam0, func_55()))
		{
			return 0x00000000;
		}
	}
	iVar0 = 0x00000001;
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		iVar0 = 0x00000000;
	}
	if (iVar0 == 0x00000001)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	else if (iParam2 != 0x00000005)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000001)
		{
			return 0x00000000;
		}
		if (unk_0x5327615940E385C1())
		{
			return 0x00000000;
		}
		if (Global_175B8)
		{
			return 0x00000000;
		}
		if (func_46(50f, 0x00000001) != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (((((iParam1 == 0x00000011 || iParam1 == 0x00000013) || iParam1 == 0x0000000E) || iParam1 == 0x00000000) || iParam1 == 0x00000001) || iParam1 == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam0, func_55()))
			{
				iVar1 = func_43(func_6());
				iVar2 = func_43(iParam1);
				iVar3 = func_42(iVar1, iVar2);
				if (iVar3 < 0x00000009)
				{
					if (Global_1B416.f_46B2.f_AF[iVar3 /*19*/].f_8 == 0x00000001 || Global_1B416.f_46B2.f_AF[iVar3 /*19*/].f_8 == 0x00000002)
					{
						if (func_41(&(Global_1B416.f_46B2.f_AF[iVar3 /*19*/].f_5)))
						{
							if (func_38(&(Global_1B416.f_46B2.f_AF[iVar3 /*19*/].f_5)) < 30f)
							{
								return 0x00000000;
							}
						}
					}
				}
			}
		}
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000002)
	{
		return 0x00000000;
	}
	if (func_37())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000003))
	{
		if (Global_1B05D)
		{
			return 0x00000000;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				return 0x00000000;
			}
		}
		if (Global_1AF0C.f_13 != 0x00000000)
		{
			return 0x00000000;
		}
		if (Global_A1D7 == 0x00000005)
		{
			return 0x00000000;
		}
	}
	if (iParam3 != 0xFFFFFFFF)
	{
		if (func_36(unk_0x16F2683693E537C9(), iParam3, 0x00000000))
		{
			return 0x00000000;
		}
	}
	iVar4 = func_6();
	if (func_9(iVar4))
	{
		unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar5, 0xFFFFFFFF);
		switch (iParam1)
		{
			case 0x00000004:
				switch (iVar4)
				{
					case 0x00000000:
						iVar6[0x00000000] = func_11(0x00000001);
						iVar6[0x00000001] = func_11(0x00000002);
						break;
					
					case 0x00000001:
						iVar6[0x00000000] = func_11(0x00000000);
						iVar6[0x00000001] = func_11(0x00000002);
						break;
					
					case 0x00000002:
						iVar6[0x00000000] = func_11(0x00000000);
						iVar6[0x00000001] = func_11(0x00000001);
						break;
				}
				break;
			
			case 0x00000005:
				iVar6[0x00000000] = func_11(0x00000001);
				iVar6[0x00000001] = func_11(0x00000002);
				break;
			
			case 0x00000006:
				iVar6[0x00000000] = func_35(0x0000000C);
				iVar6[0x00000001] = func_11(0x00000001);
				break;
			
			case 0x00000007:
				iVar6[0x00000000] = func_35(0x0000000C);
				iVar6[0x00000001] = func_11(0x00000000);
				break;
			
			case 0x00000008:
				iVar6[0x00000000] = func_11(0x00000000);
				iVar6[0x00000001] = func_11(0x00000001);
				break;
			
			case 0x00000009:
				iVar6[0x00000000] = func_11(0x00000000);
				iVar6[0x00000001] = func_11(0x00000002);
				break;
			
			case 0x0000000A:
				iVar6[0x00000000] = func_35(0x00000017);
				iVar6[0x00000001] = func_11(0x00000000);
				break;
			
			case 0x0000000B:
				iVar6[0x00000000] = func_35(0x00000017);
				iVar6[0x00000001] = func_11(0x00000000);
				break;
			
			default:
				if (func_9(iParam1))
				{
					iVar6[0x00000000] = func_11(iParam1);
				}
				else
				{
					iVar6[0x00000000] = func_35(iParam1);
				}
				iVar6[0x00000001] = 0x00000000;
				break;
		}
		iVar7 = 0x00000000;
		while (iVar7 < 0x00000002)
		{
			if (iVar6[iVar7] != 0x00000000)
			{
				iVar8 = 0x00000000;
				while (iVar8 < 0x00000010)
				{
					if (unk_0xC844350D5D58C99A(uVar5[iVar8]))
					{
						if (unk_0x134B62B726CEC8E6(uVar5[iVar8]) == iVar6[iVar7])
						{
							if (!unk_0x437347B10A200C4B(uVar5[iVar8], 0x00000000))
							{
								if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
								{
									if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(uVar5[iVar8], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 6400f)
									{
										return 0x00000000;
									}
								}
							}
							else
							{
								return 0x00000000;
							}
						}
					}
					iVar8++;
				}
				iVar9 = 0x00000000;
				switch (iVar6[iVar7])
				{
					case joaat("player_zero"):
						iVar9 = Global_177DE[0x00000000];
						break;
					
					case joaat("player_one"):
						iVar9 = Global_177DE[0x00000001];
						break;
					
					case joaat("player_two"):
						iVar9 = Global_177DE[0x00000002];
						break;
				}
				if (unk_0xC844350D5D58C99A(iVar9))
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iVar9, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 6400f)
						{
							return 0x00000000;
						}
					}
				}
				switch (iVar6[iVar7])
				{
					case joaat("player_zero"):
						iVar9 = Global_1816D[0x00000000];
						break;
					
					case joaat("player_one"):
						iVar9 = Global_1816D[0x00000001];
						break;
					
					case joaat("player_two"):
						iVar9 = Global_1816D[0x00000002];
						break;
				}
				if (unk_0xC844350D5D58C99A(iVar9))
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iVar9, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 6400f)
						{
							return 0x00000000;
						}
					}
				}
			}
			iVar7++;
		}
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_35(int iParam0)
{
	if (!func_9(iParam0))
	{
		return func_12(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

int func_36(int iParam0, int iParam1, float fParam2)
{
	struct<5> Var0;
	float fVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		Var0 = { Global_A1D8[iParam1 /*5*/] };
		fVar1 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar1 = fParam2;
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), Var0, 0x00000001) < fVar1)
		{
			return 0x00000001;
		}
		else if (Var0.f_4 != 0xFFFFFFFF)
		{
			return func_36(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0x00000000;
}

int func_37()
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

float func_38(var uParam0)
{
	if (func_41(uParam0))
	{
		if (func_40(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_39(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_39(bool bParam0)
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

bool func_40(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_41(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

int func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0x00000000 && iParam0 != 0x00000001) && iParam0 != 0x00000002)
	{
		if ((iParam1 == 0x00000000 || iParam1 == 0x00000001) || iParam1 == 0x00000002)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000000;
					break;
				
				case 0x00000002:
					return 0x00000002;
					break;
				
				case 0x00000003:
					return 0x0000000A;
					break;
				
				case 0x00000004:
					return 0x00000005;
					break;
				
				case 0x00000005:
					return 0x00000008;
					break;
				
				default:
					return 0x0000000A;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000000A;
					break;
				
				case 0x00000002:
					return 0x00000001;
					break;
				
				case 0x00000003:
					return 0x00000003;
					break;
				
				case 0x00000004:
					return 0x00000006;
					break;
				
				case 0x00000005:
					return 0x0000000A;
					break;
				
				default:
					return 0x0000000A;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000002;
					break;
				
				case 0x00000001:
					return 0x00000001;
					break;
				
				case 0x00000002:
					return 0x0000000A;
					break;
				
				case 0x00000003:
					return 0x00000004;
					break;
				
				case 0x00000004:
					return 0x00000007;
					break;
				
				case 0x00000005:
					return 0x0000000A;
					break;
				
				default:
					return 0x0000000A;
					break;
			}
			break;
	}
	return 0x0000000A;
}

int func_43(int iParam0)
{
	if (iParam0 == 0x00000091)
	{
		return 0x00000007;
	}
	if (iParam0 < func_45())
	{
		return func_44(iParam0);
	}
	if (iParam0 == 0x00000090)
	{
		return 0x00000007;
	}
	if (iParam0 == func_45())
	{
		return 0x00000006;
	}
	if (iParam0 == 0x000000A8)
	{
		return 0x00000006;
	}
	return 0x00000006;
}

var func_44(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_B;
}

int func_45()
{
	if (Global_7830 == 0x00000000 || Global_7830 == 0x00000002)
	{
		return 0x000000A7;
	}
	return 0x000000A1;
}

int func_46(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = 0xFFFFFFFF;
	fVar3 = fParam0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		iVar5 = func_52();
		iVar6 = 0x00000000;
		iVar6 = 0x00000000;
		while (iVar6 < 0x0000003F)
		{
			iVar1 = iVar6;
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
			{
				func_47(iVar1, &Var0);
				fVar4 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Var0.f_6, 0x00000001);
				if (fVar4 < fVar3)
				{
					bVar7 = 0x00000001;
					if (bParam1)
					{
						if (iVar5 != Var0.f_1A)
						{
							bVar7 = 0x00000000;
						}
					}
					if (bVar7)
					{
						iVar2 = iVar1;
						fVar3 = fVar4;
					}
				}
			}
			iVar6++;
		}
	}
	return iVar2;
}

void func_47(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_48(uParam1, "Abigail1", func_50(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_48(uParam1, "Abigail2", func_50(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_48(uParam1, "Barry1", func_50(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_48(uParam1, "Barry2", func_50(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_48(uParam1, "Barry3", func_50(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_48(uParam1, "Barry3A", func_50(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_48(uParam1, "Barry3C", func_50(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_48(uParam1, "Barry4", func_50(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_48(uParam1, "Dreyfuss1", func_50(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_48(uParam1, "Epsilon1", func_50(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_48(uParam1, "Epsilon2", func_50(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_48(uParam1, "Epsilon3", func_50(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_48(uParam1, "Epsilon4", func_50(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_48(uParam1, "Epsilon5", func_50(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_48(uParam1, "Epsilon6", func_50(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_48(uParam1, "Epsilon7", func_50(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_48(uParam1, "Epsilon8", func_50(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_48(uParam1, "Extreme1", func_50(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_48(uParam1, "Extreme2", func_50(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_48(uParam1, "Extreme3", func_50(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_48(uParam1, "Extreme4", func_50(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_48(uParam1, "Fanatic1", func_50(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_48(uParam1, "Fanatic2", func_50(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_48(uParam1, "Fanatic3", func_50(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_48(uParam1, "Hao1", func_50(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_48(uParam1, "Hunting1", func_50(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_48(uParam1, "Hunting2", func_50(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_48(uParam1, "Josh1", func_50(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_48(uParam1, "Josh2", func_50(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_48(uParam1, "Josh3", func_50(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_48(uParam1, "Josh4", func_50(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_48(uParam1, "Maude1", func_50(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_48(uParam1, "Minute1", func_50(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_48(uParam1, "Minute2", func_50(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_48(uParam1, "Minute3", func_50(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_48(uParam1, "MrsPhilips1", func_50(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_48(uParam1, "MrsPhilips2", func_50(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_48(uParam1, "Nigel1", func_50(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_48(uParam1, "Nigel1A", func_50(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_48(uParam1, "Nigel1B", func_50(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_49(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_48(uParam1, "Nigel1C", func_50(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_49(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_48(uParam1, "Nigel1D", func_50(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_49(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_48(uParam1, "Nigel2", func_50(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_48(uParam1, "Nigel3", func_50(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_48(uParam1, "Omega1", func_50(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_48(uParam1, "Omega2", func_50(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_48(uParam1, "Paparazzo1", func_50(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_48(uParam1, "Paparazzo2", func_50(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_48(uParam1, "Paparazzo3", func_50(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_48(uParam1, "Paparazzo3A", func_50(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_48(uParam1, "Paparazzo3B", func_50(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_48(uParam1, "Paparazzo4", func_50(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_48(uParam1, "Rampage1", func_50(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_48(uParam1, "Rampage3", func_50(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_48(uParam1, "Rampage4", func_50(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_48(uParam1, "Rampage5", func_50(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_48(uParam1, "Rampage2", func_50(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_49(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_48(uParam1, "TheLastOne", func_50(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_48(uParam1, "Tonya1", func_50(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_48(uParam1, "Tonya2", func_50(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_48(uParam1, "Tonya3", func_50(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_48(uParam1, "Tonya4", func_50(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_48(uParam1, "Tonya5", func_50(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_49(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_48(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000001;
			break;
		
		case 0x00000006:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000000;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000000;
			break;
		
		case 0x0000000B:
			return 0x00000000;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000000;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000000;
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
			return 0x00000001;
			break;
		
		case 0x00000017:
			return 0x00000001;
			break;
		
		case 0x00000018:
			return 0x00000001;
			break;
		
		case 0x00000019:
			return 0x00000001;
			break;
		
		case 0x0000001A:
			return 0x00000001;
			break;
		
		case 0x0000001B:
			return 0x00000000;
			break;
		
		case 0x0000001C:
			return 0x00000001;
			break;
		
		case 0x0000001D:
			return 0x00000001;
			break;
		
		case 0x0000001E:
			return 0x00000001;
			break;
		
		case 0x0000001F:
			return 0x00000000;
			break;
		
		case 0x00000020:
			return 0x00000001;
			break;
		
		case 0x00000021:
			return 0x00000001;
			break;
		
		case 0x00000022:
			return 0x00000001;
			break;
		
		case 0x00000023:
			return 0x00000000;
			break;
		
		case 0x00000024:
			return 0x00000000;
			break;
		
		case 0x00000025:
			return 0x00000000;
			break;
		
		case 0x00000026:
			return 0x00000001;
			break;
		
		case 0x00000027:
			return 0x00000001;
			break;
		
		case 0x00000028:
			return 0x00000001;
			break;
		
		case 0x00000029:
			return 0x00000001;
			break;
		
		case 0x0000002A:
			return 0x00000001;
			break;
		
		case 0x0000002B:
			return 0x00000001;
			break;
		
		case 0x0000002C:
			return 0x00000000;
			break;
		
		case 0x0000002D:
			return 0x00000000;
			break;
		
		case 0x0000002E:
			return 0x00000001;
			break;
		
		case 0x0000002F:
			return 0x00000001;
			break;
		
		case 0x00000030:
			return 0x00000000;
			break;
		
		case 0x00000031:
			return 0x00000001;
			break;
		
		case 0x00000032:
			return 0x00000001;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
		
		case 0x00000034:
			return 0x00000001;
			break;
		
		case 0x00000036:
			return 0x00000001;
			break;
		
		case 0x00000037:
			return 0x00000001;
			break;
		
		case 0x00000038:
			return 0x00000001;
			break;
		
		case 0x00000035:
			return 0x00000001;
			break;
		
		case 0x00000039:
			return 0x00000001;
			break;
		
		case 0x0000003A:
			return 0x00000001;
			break;
		
		case 0x0000003B:
			return 0x00000001;
			break;
		
		case 0x0000003C:
			return 0x00000001;
			break;
		
		case 0x0000003D:
			return 0x00000001;
			break;
		
		case 0x0000003E:
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

struct<2> func_50(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_51(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_51(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 0x00000001:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 0x00000006:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 0x00000007:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 0x00000008:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 0x00000009:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 0x0000000A:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 0x0000000B:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 0x0000000C:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 0x0000000D:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 0x0000000E:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 0x0000000F:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 0x00000010:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 0x00000011:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 0x00000012:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 0x00000013:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 0x00000014:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 0x00000015:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 0x00000016:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 0x00000017:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 0x00000018:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 0x00000019:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 0x0000001A:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 0x0000001B:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 0x0000001C:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 0x0000001D:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 0x0000001E:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 0x0000001F:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 0x00000020:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 0x00000021:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 0x00000022:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 0x00000023:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 0x00000024:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 0x00000025:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 0x00000026:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 0x00000027:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 0x00000028:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 0x00000029:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 0x0000002A:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 0x0000002B:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 0x0000002C:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 0x0000002D:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 0x0000002E:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 0x0000002F:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 0x00000030:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 0x00000031:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 0x00000032:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 0x00000033:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 0x00000034:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 0x00000035:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 0x00000036:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 0x00000037:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 0x00000038:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 0x00000039:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 0x0000003A:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 0x0000003B:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 0x0000003C:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 0x0000003D:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 0x0000003E:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_52()
{
	func_7();
	switch (Global_1B416.f_936.f_21B.f_10E1)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000002:
			return 0x00000004;
			break;
	}
	return 0x00000000;
}

int func_53()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_54()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

var func_55()
{
	func_7();
	return Global_1B416.f_936.f_21B.f_10E1;
}

int func_56(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_57(iParam0) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (!Global_A58F[iVar0 /*5*/] == 0xFFFFFFFF)
		{
			if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_58()
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_59()
{
	if (Global_4C1E.f_1 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_60(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x0000001A)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, (0x00000004 - 0x00000001)))
		{
			return;
		}
	}
	iVar0 = func_14(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	Global_CACB[iVar0 /*203*/] = 0x00000000;
}

var func_61()
{
	var uVar0;
	
	func_67(&uVar0, unk_0x4460E481B9E33ADA());
	func_66(&uVar0, unk_0x8D199E381D262EEF());
	func_65(&uVar0, unk_0xD8A54335F18763BA());
	func_64(&uVar0, unk_0x972A296334C9D57B());
	func_63(&uVar0, unk_0x118229AD063C3C1D());
	func_62(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_62(var uParam0, int iParam1)
{
	if (iParam1 <= 0x00000000)
	{
		return;
	}
	if (iParam1 > 0x000007FB || iParam1 < 0x000007BB)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x7C000000);
	if (iParam1 < 0x000007DB)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((0x000007DB - iParam1), 0x0000001A));
		*uParam0 |= 0x80000000;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 0x000007DB), 0x0000001A));
		*uParam0 = (*uParam0 - *uParam0 & 0x80000000);
	}
}

void func_63(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_64(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(*uParam0);
	iVar1 = func_27(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_22(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_65(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_66(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_67(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_C961[iVar0 /*120*/] = Global_1B416.f_5228[iVar0 /*103*/];
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000010)
		{
			Global_C961[iVar0 /*120*/].f_1[iVar1] = Global_1B416.f_5228[iVar0 /*103*/].f_1[iVar1];
			Global_C961[iVar0 /*120*/].f_12[iVar1] = Global_1B416.f_5228[iVar0 /*103*/].f_12[iVar1];
			Global_C961[iVar0 /*120*/].f_23[iVar1] = Global_1B416.f_5228[iVar0 /*103*/].f_23[iVar1];
			Global_C961[iVar0 /*120*/].f_34[iVar1] = Global_1B416.f_5228[iVar0 /*103*/].f_34[iVar1];
			Global_C961[iVar0 /*120*/].f_45[iVar1] = Global_1B416.f_5228[iVar0 /*103*/].f_45[iVar1];
			Global_C961[iVar0 /*120*/].f_56[iVar1] = Global_1B416.f_5228[iVar0 /*103*/].f_56[iVar1];
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		Global_CACB[iVar0 /*203*/].f_2 = Global_1B416.f_5228.f_137[iVar0 /*203*/];
		Global_CACB[iVar0 /*203*/] = Global_1B416.f_5228.f_137[iVar0 /*203*/].f_2;
		Global_CACB[iVar0 /*203*/].f_3 = Global_1B416.f_5228.f_137[iVar0 /*203*/].f_3;
		Global_CACB[iVar0 /*203*/].f_1 = Global_1B416.f_5228.f_137[iVar0 /*203*/].f_1;
		Global_CACB[iVar0 /*203*/].f_9 = Global_1B416.f_5228.f_137[iVar0 /*203*/].f_9;
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			Global_CACB[iVar0 /*203*/].f_4[iVar1] = Global_1B416.f_5228.f_137[iVar0 /*203*/].f_4[iVar1];
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			Global_CACB[iVar0 /*203*/].f_A[iVar1 /*48*/] = Global_1B416.f_5228.f_137[iVar0 /*203*/].f_A[iVar1 /*48*/];
			Global_CACB[iVar0 /*203*/].f_A[iVar1 /*48*/].f_1 = Global_1B416.f_5228.f_137[iVar0 /*203*/].f_A[iVar1 /*48*/].f_1;
			Global_CACB[iVar0 /*203*/].f_A[iVar1 /*48*/].f_2 = { Global_1B416.f_5228.f_137[iVar0 /*203*/].f_A[iVar1 /*48*/].f_2 };
			Global_CACB[iVar0 /*203*/].f_A[iVar1 /*48*/].f_6 = Global_1B416.f_5228.f_137[iVar0 /*203*/].f_A[iVar1 /*48*/].f_6;
			iVar2 = 0x00000000;
			while (iVar2 < 0x0000000A)
			{
				Global_CACB[iVar0 /*203*/].f_A[iVar1 /*48*/].f_7[iVar2 /*4*/] = { Global_1B416.f_5228.f_137[iVar0 /*203*/].f_A[iVar1 /*48*/].f_7[iVar2 /*4*/] };
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000007A)
	{
		Global_B374[iVar0 /*46*/] = Global_1B416.f_5228.f_6C5[iVar0 /*14*/];
		Global_B374[iVar0 /*46*/].f_1 = Global_1B416.f_5228.f_6C5[iVar0 /*14*/].f_1;
		Global_B374[iVar0 /*46*/].f_2D = Global_1B416.f_5228.f_6C5[iVar0 /*14*/].f_2;
		Global_B374[iVar0 /*46*/].f_1F = Global_1B416.f_5228.f_6C5[iVar0 /*14*/].f_3;
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000009)
		{
			if (Global_1B416.f_5228.f_6C5[iVar0 /*14*/].f_4[iVar1] > 0x00000000)
			{
				Global_B374[iVar0 /*46*/].f_20[iVar1] = (Global_1B416.f_5228.f_6C5[iVar0 /*14*/].f_4[iVar1] - 0x00000001);
				Global_B374[iVar0 /*46*/].f_2A++;
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_D059 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		Global_D05A[iVar0 /*53*/] = Global_1B416.f_5228.f_D72[iVar0 /*53*/];
		Global_D05A[iVar0 /*53*/].f_1 = Global_1B416.f_5228.f_D72[iVar0 /*53*/].f_1;
		Global_D05A[iVar0 /*53*/].f_2 = Global_1B416.f_5228.f_D72[iVar0 /*53*/].f_2;
		Global_D05A[iVar0 /*53*/].f_5 = Global_1B416.f_5228.f_D72[iVar0 /*53*/].f_5;
		Global_D05A[iVar0 /*53*/].f_6 = { Global_1B416.f_5228.f_D72[iVar0 /*53*/].f_6 };
		Global_D05A[iVar0 /*53*/].f_A = Global_1B416.f_5228.f_D72[iVar0 /*53*/].f_A;
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000A)
		{
			Global_D05A[iVar0 /*53*/].f_B[iVar1 /*4*/] = { Global_1B416.f_5228.f_D72[iVar0 /*53*/].f_B[iVar1 /*4*/] };
			iVar1++;
		}
		Global_D05A[iVar0 /*53*/].f_34 = Global_1B416.f_5228.f_D72[iVar0 /*53*/].f_34;
		if (Global_D05A[iVar0 /*53*/].f_34 != 0x00000000)
		{
			Global_D059++;
		}
		iVar0++;
	}
}

void func_69()
{
	Global_A677[0x00000000 /*12*/] = 0x0000000F;
	Global_A677[0x00000000 /*12*/].f_1 = 0x00000010;
	Global_A677[0x00000000 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000000 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000000 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000000 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000000 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000001 /*12*/] = 0x00000011;
	Global_A677[0x00000001 /*12*/].f_1 = 0x00000010;
	Global_A677[0x00000001 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000001 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000001 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000001 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000001 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000002 /*12*/] = 0x00000012;
	Global_A677[0x00000002 /*12*/].f_1 = 0x00000010;
	Global_A677[0x00000002 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000002 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000002 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000002 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000002 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000003 /*12*/] = 0x00000013;
	Global_A677[0x00000003 /*12*/].f_1 = 0x00000010;
	Global_A677[0x00000003 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000003 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000003 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000003 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000003 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000004 /*12*/] = 0x00000014;
	Global_A677[0x00000004 /*12*/].f_1 = 0x00000010;
	Global_A677[0x00000004 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000004 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000004 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000004 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000004 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000005 /*12*/] = 0x00000015;
	Global_A677[0x00000005 /*12*/].f_1 = 0x00000010;
	Global_A677[0x00000005 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000005 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000005 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000005 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000005 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000006 /*12*/] = 0x00000016;
	Global_A677[0x00000006 /*12*/].f_1 = 0x00000010;
	Global_A677[0x00000006 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000006 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000006 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000006 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000006 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000007 /*12*/] = 0x00000017;
	Global_A677[0x00000007 /*12*/].f_1 = 0x00000018;
	Global_A677[0x00000007 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000007 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000007 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000007 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000007 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000008 /*12*/] = 0x00000019;
	Global_A677[0x00000008 /*12*/].f_1 = 0x0000001A;
	Global_A677[0x00000008 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000008 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000008 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000008 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000008 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000009 /*12*/] = 0x0000001B;
	Global_A677[0x00000009 /*12*/].f_1 = 0x0000001C;
	Global_A677[0x00000009 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000009 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000009 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000009 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000009 /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000000A /*12*/] = 0x00000020;
	Global_A677[0x0000000A /*12*/].f_1 = 0x00000021;
	Global_A677[0x0000000A /*12*/].f_2 = 0x00000005;
	Global_A677[0x0000000A /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000000A /*12*/].f_A = 0x00000000;
	Global_A677[0x0000000A /*12*/].f_B = 0x00000000;
	Global_A677[0x0000000A /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000000B /*12*/] = 0x00000022;
	Global_A677[0x0000000B /*12*/].f_1 = 0x00000023;
	Global_A677[0x0000000B /*12*/].f_2 = 0x00000005;
	Global_A677[0x0000000B /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000000B /*12*/].f_A = 0x00000000;
	Global_A677[0x0000000B /*12*/].f_B = 0x00000000;
	Global_A677[0x0000000B /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000000C /*12*/] = 0x0000002A;
	Global_A677[0x0000000C /*12*/].f_1 = 0x0000002B;
	Global_A677[0x0000000C /*12*/].f_2 = 0x00000007;
	Global_A677[0x0000000C /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000000C /*12*/].f_A = 0x00000000;
	Global_A677[0x0000000C /*12*/].f_B = 0x00000000;
	Global_A677[0x0000000C /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000000D /*12*/] = 0x0000002C;
	Global_A677[0x0000000D /*12*/].f_1 = 0x0000002D;
	Global_A677[0x0000000D /*12*/].f_2 = 0x00000007;
	Global_A677[0x0000000D /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000000D /*12*/].f_A = 0x00000000;
	Global_A677[0x0000000D /*12*/].f_B = 0x00000000;
	Global_A677[0x0000000D /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000000E /*12*/] = 0x0000002E;
	Global_A677[0x0000000E /*12*/].f_1 = 0x0000002F;
	Global_A677[0x0000000E /*12*/].f_2 = 0x00000007;
	Global_A677[0x0000000E /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000000E /*12*/].f_A = 0x00000000;
	Global_A677[0x0000000E /*12*/].f_B = 0x00000000;
	Global_A677[0x0000000E /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000000F /*12*/] = 0x00000030;
	Global_A677[0x0000000F /*12*/].f_1 = 0x00000031;
	Global_A677[0x0000000F /*12*/].f_2 = 0x00000007;
	Global_A677[0x0000000F /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000000F /*12*/].f_A = 0x00000000;
	Global_A677[0x0000000F /*12*/].f_B = 0x00000000;
	Global_A677[0x0000000F /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000010 /*12*/] = 0x00000032;
	Global_A677[0x00000010 /*12*/].f_1 = 0x00000033;
	Global_A677[0x00000010 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000010 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000010 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000010 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000010 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000011 /*12*/] = 0x0000003D;
	Global_A677[0x00000011 /*12*/].f_1 = 0x0000003E;
	Global_A677[0x00000011 /*12*/].f_2 = 0x00000008;
	Global_A677[0x00000011 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000011 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000011 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000011 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000012 /*12*/] = 0x0000003F;
	Global_A677[0x00000012 /*12*/].f_1 = 0x00000040;
	Global_A677[0x00000012 /*12*/].f_2 = 0x00000009;
	Global_A677[0x00000012 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000012 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000012 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000012 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000013 /*12*/] = 0x0000003D;
	Global_A677[0x00000013 /*12*/].f_1 = 0x00000041;
	Global_A677[0x00000013 /*12*/].f_2 = 0x00000008;
	Global_A677[0x00000013 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000013 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000013 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000013 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000014 /*12*/] = 0x0000003D;
	Global_A677[0x00000014 /*12*/].f_1 = 0x00000042;
	Global_A677[0x00000014 /*12*/].f_2 = 0x00000008;
	Global_A677[0x00000014 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000014 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000014 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000014 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000015 /*12*/] = 0x0000003D;
	Global_A677[0x00000015 /*12*/].f_1 = 0x00000043;
	Global_A677[0x00000015 /*12*/].f_2 = 0x00000008;
	Global_A677[0x00000015 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000015 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000015 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000015 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000016 /*12*/] = 0x0000003D;
	Global_A677[0x00000016 /*12*/].f_1 = 0x00000044;
	Global_A677[0x00000016 /*12*/].f_2 = 0x00000008;
	Global_A677[0x00000016 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000016 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000016 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000016 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000017 /*12*/] = 0x00000045;
	Global_A677[0x00000017 /*12*/].f_1 = 0x00000046;
	Global_A677[0x00000017 /*12*/].f_2 = 0x0000000A;
	Global_A677[0x00000017 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000017 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000017 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000017 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000018 /*12*/] = 0x0000003F;
	Global_A677[0x00000018 /*12*/].f_1 = 0x0000004A;
	Global_A677[0x00000018 /*12*/].f_2 = 0x00000009;
	Global_A677[0x00000018 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000018 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000018 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000018 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000019 /*12*/] = 0x0000003F;
	Global_A677[0x00000019 /*12*/].f_1 = 0x0000004B;
	Global_A677[0x00000019 /*12*/].f_2 = 0x00000009;
	Global_A677[0x00000019 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000019 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000019 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000019 /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000001A /*12*/] = 0x0000003F;
	Global_A677[0x0000001A /*12*/].f_1 = 0x0000004C;
	Global_A677[0x0000001A /*12*/].f_2 = 0x00000009;
	Global_A677[0x0000001A /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000001A /*12*/].f_A = 0x00000001;
	Global_A677[0x0000001A /*12*/].f_B = 0x00000000;
	Global_A677[0x0000001A /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000001B /*12*/] = 0x0000003F;
	Global_A677[0x0000001B /*12*/].f_1 = 0x0000004D;
	Global_A677[0x0000001B /*12*/].f_2 = 0x00000009;
	Global_A677[0x0000001B /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000001B /*12*/].f_A = 0x00000000;
	Global_A677[0x0000001B /*12*/].f_B = 0x00000000;
	Global_A677[0x0000001B /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000001C /*12*/] = 0x00000045;
	Global_A677[0x0000001C /*12*/].f_1 = 0x00000049;
	Global_A677[0x0000001C /*12*/].f_2 = 0x0000000A;
	Global_A677[0x0000001C /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000001C /*12*/].f_A = 0x00000001;
	Global_A677[0x0000001C /*12*/].f_B = 0x00000000;
	Global_A677[0x0000001C /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000001D /*12*/] = 0x00000045;
	Global_A677[0x0000001D /*12*/].f_1 = 0x00000048;
	Global_A677[0x0000001D /*12*/].f_2 = 0x0000000A;
	Global_A677[0x0000001D /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000001D /*12*/].f_A = 0x00000001;
	Global_A677[0x0000001D /*12*/].f_B = 0x00000000;
	Global_A677[0x0000001D /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000001E /*12*/] = 0x00000045;
	Global_A677[0x0000001E /*12*/].f_1 = 0x00000047;
	Global_A677[0x0000001E /*12*/].f_2 = 0x0000000A;
	Global_A677[0x0000001E /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000001E /*12*/].f_A = 0x00000000;
	Global_A677[0x0000001E /*12*/].f_B = 0x00000000;
	Global_A677[0x0000001E /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000001F /*12*/] = 0x0000005A;
	Global_A677[0x0000001F /*12*/].f_1 = 0x0000005B;
	Global_A677[0x0000001F /*12*/].f_2 = 0x0000000B;
	Global_A677[0x0000001F /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000001F /*12*/].f_A = 0x00000000;
	Global_A677[0x0000001F /*12*/].f_B = 0x00000000;
	Global_A677[0x0000001F /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000020 /*12*/] = 0x0000005A;
	Global_A677[0x00000020 /*12*/].f_1 = 0x0000005C;
	Global_A677[0x00000020 /*12*/].f_2 = 0x0000000B;
	Global_A677[0x00000020 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000020 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000020 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000020 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000021 /*12*/] = 0x0000005A;
	Global_A677[0x00000021 /*12*/].f_1 = 0x0000005D;
	Global_A677[0x00000021 /*12*/].f_2 = 0x0000000B;
	Global_A677[0x00000021 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000021 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000021 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000021 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000022 /*12*/] = 0x0000005E;
	Global_A677[0x00000022 /*12*/].f_1 = 0x0000005F;
	Global_A677[0x00000022 /*12*/].f_2 = 0x0000000D;
	Global_A677[0x00000022 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000022 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000022 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000022 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000023 /*12*/] = 0x0000005E;
	Global_A677[0x00000023 /*12*/].f_1 = 0x00000060;
	Global_A677[0x00000023 /*12*/].f_2 = 0x0000000D;
	Global_A677[0x00000023 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000023 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000023 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000023 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000024 /*12*/] = 0x0000005E;
	Global_A677[0x00000024 /*12*/].f_1 = 0x00000061;
	Global_A677[0x00000024 /*12*/].f_2 = 0x0000000D;
	Global_A677[0x00000024 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000024 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000024 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000024 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000025 /*12*/] = 0x0000005E;
	Global_A677[0x00000025 /*12*/].f_1 = 0x00000062;
	Global_A677[0x00000025 /*12*/].f_2 = 0x0000000E;
	Global_A677[0x00000025 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000025 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000025 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000025 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000026 /*12*/] = 0x0000005E;
	Global_A677[0x00000026 /*12*/].f_1 = 0x00000063;
	Global_A677[0x00000026 /*12*/].f_2 = 0x0000000E;
	Global_A677[0x00000026 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000026 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000026 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000026 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000027 /*12*/] = 0x0000005E;
	Global_A677[0x00000027 /*12*/].f_1 = 0x00000064;
	Global_A677[0x00000027 /*12*/].f_2 = 0x0000000E;
	Global_A677[0x00000027 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000027 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000027 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000027 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000028 /*12*/] = 0x0000005E;
	Global_A677[0x00000028 /*12*/].f_1 = 0x00000065;
	Global_A677[0x00000028 /*12*/].f_2 = 0x0000000C;
	Global_A677[0x00000028 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000028 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000028 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000028 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000029 /*12*/] = 0x0000005E;
	Global_A677[0x00000029 /*12*/].f_1 = 0x00000066;
	Global_A677[0x00000029 /*12*/].f_2 = 0x0000000C;
	Global_A677[0x00000029 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000029 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000029 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000029 /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000002A /*12*/] = 0x0000005E;
	Global_A677[0x0000002A /*12*/].f_1 = 0x00000067;
	Global_A677[0x0000002A /*12*/].f_2 = 0x0000000C;
	Global_A677[0x0000002A /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000002A /*12*/].f_A = 0x00000000;
	Global_A677[0x0000002A /*12*/].f_B = 0x00000000;
	Global_A677[0x0000002A /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000002B /*12*/] = 0x00000068;
	Global_A677[0x0000002B /*12*/].f_1 = 0x00000069;
	Global_A677[0x0000002B /*12*/].f_2 = 0x00000007;
	Global_A677[0x0000002B /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000002B /*12*/].f_A = 0x00000001;
	Global_A677[0x0000002B /*12*/].f_B = 0x00000000;
	Global_A677[0x0000002B /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000002C /*12*/] = 0x0000006C;
	Global_A677[0x0000002C /*12*/].f_1 = 0x0000006D;
	Global_A677[0x0000002C /*12*/].f_2 = 0x0000000F;
	Global_A677[0x0000002C /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000002C /*12*/].f_A = 0x00000001;
	Global_A677[0x0000002C /*12*/].f_B = 0x00000000;
	Global_A677[0x0000002C /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000002D /*12*/] = 0x0000006E;
	Global_A677[0x0000002D /*12*/].f_1 = 0x0000006F;
	Global_A677[0x0000002D /*12*/].f_2 = 0x0000000F;
	Global_A677[0x0000002D /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000002D /*12*/].f_A = 0x00000001;
	Global_A677[0x0000002D /*12*/].f_B = 0x00000000;
	Global_A677[0x0000002D /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000002E /*12*/] = 0x00000070;
	Global_A677[0x0000002E /*12*/].f_1 = 0x00000071;
	Global_A677[0x0000002E /*12*/].f_2 = 0x0000000F;
	Global_A677[0x0000002E /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000002E /*12*/].f_A = 0x00000001;
	Global_A677[0x0000002E /*12*/].f_B = 0x00000000;
	Global_A677[0x0000002E /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000002F /*12*/] = 0x00000075;
	Global_A677[0x0000002F /*12*/].f_1 = 0x00000076;
	Global_A677[0x0000002F /*12*/].f_2 = 0x00000010;
	Global_A677[0x0000002F /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000002F /*12*/].f_A = 0x00000001;
	Global_A677[0x0000002F /*12*/].f_B = 0x00000000;
	Global_A677[0x0000002F /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000030 /*12*/] = 0x00000077;
	Global_A677[0x00000030 /*12*/].f_1 = 0x00000078;
	Global_A677[0x00000030 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000030 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000030 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000030 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000030 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000031 /*12*/] = 0x00000083;
	Global_A677[0x00000031 /*12*/].f_1 = 0x00000084;
	Global_A677[0x00000031 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000031 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000031 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000031 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000031 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000032 /*12*/] = 0x00000081;
	Global_A677[0x00000032 /*12*/].f_1 = 0x00000082;
	Global_A677[0x00000032 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000032 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000032 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000032 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000032 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000033 /*12*/] = 0x0000007F;
	Global_A677[0x00000033 /*12*/].f_1 = 0x00000080;
	Global_A677[0x00000033 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000033 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000033 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000033 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000033 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000034 /*12*/] = 0x0000007D;
	Global_A677[0x00000034 /*12*/].f_1 = 0x0000007E;
	Global_A677[0x00000034 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000034 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000034 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000034 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000034 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000035 /*12*/] = 0x0000007B;
	Global_A677[0x00000035 /*12*/].f_1 = 0x0000007C;
	Global_A677[0x00000035 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000035 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000035 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000035 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000035 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000036 /*12*/] = 0x00000079;
	Global_A677[0x00000036 /*12*/].f_1 = 0x0000007A;
	Global_A677[0x00000036 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000036 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000036 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000036 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000036 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000037 /*12*/] = 0x00000085;
	Global_A677[0x00000037 /*12*/].f_1 = 0x00000086;
	Global_A677[0x00000037 /*12*/].f_2 = 0x0000000C;
	Global_A677[0x00000037 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000037 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000037 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000037 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000038 /*12*/] = 0x00000087;
	Global_A677[0x00000038 /*12*/].f_1 = 0x00000088;
	Global_A677[0x00000038 /*12*/].f_2 = 0x0000000E;
	Global_A677[0x00000038 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000038 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000038 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000038 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000039 /*12*/] = 0x00000089;
	Global_A677[0x00000039 /*12*/].f_1 = 0x0000008A;
	Global_A677[0x00000039 /*12*/].f_2 = 0x0000000C;
	Global_A677[0x00000039 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000039 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000039 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000039 /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000003A /*12*/] = 0x00000085;
	Global_A677[0x0000003A /*12*/].f_1 = 0x0000008B;
	Global_A677[0x0000003A /*12*/].f_2 = 0x0000000C;
	Global_A677[0x0000003A /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000003A /*12*/].f_A = 0x00000000;
	Global_A677[0x0000003A /*12*/].f_B = 0x00000000;
	Global_A677[0x0000003A /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000003B /*12*/] = 0x00000085;
	Global_A677[0x0000003B /*12*/].f_1 = 0x0000008C;
	Global_A677[0x0000003B /*12*/].f_2 = 0x0000000C;
	Global_A677[0x0000003B /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000003B /*12*/].f_A = 0x00000000;
	Global_A677[0x0000003B /*12*/].f_B = 0x00000000;
	Global_A677[0x0000003B /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000003C /*12*/] = 0x00000087;
	Global_A677[0x0000003C /*12*/].f_1 = 0x00000088;
	Global_A677[0x0000003C /*12*/].f_2 = 0x0000000E;
	Global_A677[0x0000003C /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000003C /*12*/].f_A = 0x00000000;
	Global_A677[0x0000003C /*12*/].f_B = 0x00000000;
	Global_A677[0x0000003C /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000003D /*12*/] = 0x00000087;
	Global_A677[0x0000003D /*12*/].f_1 = 0x00000088;
	Global_A677[0x0000003D /*12*/].f_2 = 0x0000000E;
	Global_A677[0x0000003D /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000003D /*12*/].f_A = 0x00000000;
	Global_A677[0x0000003D /*12*/].f_B = 0x00000000;
	Global_A677[0x0000003D /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000003E /*12*/] = 0x00000089;
	Global_A677[0x0000003E /*12*/].f_1 = 0x0000008D;
	Global_A677[0x0000003E /*12*/].f_2 = 0x0000000C;
	Global_A677[0x0000003E /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000003E /*12*/].f_A = 0x00000000;
	Global_A677[0x0000003E /*12*/].f_B = 0x00000000;
	Global_A677[0x0000003E /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000003F /*12*/] = 0x00000089;
	Global_A677[0x0000003F /*12*/].f_1 = 0x0000008A;
	Global_A677[0x0000003F /*12*/].f_2 = 0x0000000C;
	Global_A677[0x0000003F /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000003F /*12*/].f_A = 0x00000000;
	Global_A677[0x0000003F /*12*/].f_B = 0x00000000;
	Global_A677[0x0000003F /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000040 /*12*/] = 0x00000094;
	Global_A677[0x00000040 /*12*/].f_1 = 0x00000095;
	Global_A677[0x00000040 /*12*/].f_2 = 0x00000007;
	Global_A677[0x00000040 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000040 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000040 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000040 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000041 /*12*/] = 0x00000094;
	Global_A677[0x00000041 /*12*/].f_1 = 0x00000097;
	Global_A677[0x00000041 /*12*/].f_2 = 0x00000007;
	Global_A677[0x00000041 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000041 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000041 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000041 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000042 /*12*/] = 0x00000094;
	Global_A677[0x00000042 /*12*/].f_1 = 0x00000096;
	Global_A677[0x00000042 /*12*/].f_2 = 0x00000007;
	Global_A677[0x00000042 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000042 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000042 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000042 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000043 /*12*/] = 0x0000009B;
	Global_A677[0x00000043 /*12*/].f_1 = 0x0000009C;
	Global_A677[0x00000043 /*12*/].f_2 = 0x0000003F;
	Global_A677[0x00000043 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000043 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000043 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000043 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000044 /*12*/] = 0x0000007D;
	Global_A677[0x00000044 /*12*/].f_1 = 0x000000A0;
	Global_A677[0x00000044 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000044 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000044 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000044 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000044 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000045 /*12*/] = 0x000000A1;
	Global_A677[0x00000045 /*12*/].f_1 = 0x000000A2;
	Global_A677[0x00000045 /*12*/].f_2 = 0x00000040;
	Global_A677[0x00000045 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000045 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000045 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000045 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000046 /*12*/] = 0x000000A1;
	Global_A677[0x00000046 /*12*/].f_1 = 0x000000A2;
	Global_A677[0x00000046 /*12*/].f_2 = 0x00000040;
	Global_A677[0x00000046 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000046 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000046 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000046 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000047 /*12*/] = 0x000000A1;
	Global_A677[0x00000047 /*12*/].f_1 = 0x000000A2;
	Global_A677[0x00000047 /*12*/].f_2 = 0x00000040;
	Global_A677[0x00000047 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000047 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000047 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000047 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000048 /*12*/] = 0x000000A6;
	Global_A677[0x00000048 /*12*/].f_1 = 0x00000010;
	Global_A677[0x00000048 /*12*/].f_2 = 0x00000015;
	Global_A677[0x00000048 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000048 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000048 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000048 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000049 /*12*/] = 0x000000A6;
	Global_A677[0x00000049 /*12*/].f_1 = 0x00000010;
	Global_A677[0x00000049 /*12*/].f_2 = 0x00000015;
	Global_A677[0x00000049 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000049 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000049 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000049 /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000004A /*12*/] = 0x000000A6;
	Global_A677[0x0000004A /*12*/].f_1 = 0x00000010;
	Global_A677[0x0000004A /*12*/].f_2 = 0x00000015;
	Global_A677[0x0000004A /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000004A /*12*/].f_A = 0x00000000;
	Global_A677[0x0000004A /*12*/].f_B = 0x00000000;
	Global_A677[0x0000004A /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000004B /*12*/] = 0x000000A7;
	Global_A677[0x0000004B /*12*/].f_1 = 0x00000010;
	Global_A677[0x0000004B /*12*/].f_2 = 0x00000006;
	Global_A677[0x0000004B /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000004B /*12*/].f_A = 0x00000000;
	Global_A677[0x0000004B /*12*/].f_B = 0x00000000;
	Global_A677[0x0000004B /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000004C /*12*/] = 0x000000A8;
	Global_A677[0x0000004C /*12*/].f_1 = 0x00000010;
	Global_A677[0x0000004C /*12*/].f_2 = 0x00000006;
	Global_A677[0x0000004C /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000004C /*12*/].f_A = 0x00000000;
	Global_A677[0x0000004C /*12*/].f_B = 0x00000000;
	Global_A677[0x0000004C /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000004D /*12*/] = 0x000000A9;
	Global_A677[0x0000004D /*12*/].f_1 = 0x00000010;
	Global_A677[0x0000004D /*12*/].f_2 = 0x00000006;
	Global_A677[0x0000004D /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000004D /*12*/].f_A = 0x00000000;
	Global_A677[0x0000004D /*12*/].f_B = 0x00000000;
	Global_A677[0x0000004D /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000004E /*12*/] = 0x000000AA;
	Global_A677[0x0000004E /*12*/].f_1 = 0x00000010;
	Global_A677[0x0000004E /*12*/].f_2 = 0x00000006;
	Global_A677[0x0000004E /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000004E /*12*/].f_A = 0x00000000;
	Global_A677[0x0000004E /*12*/].f_B = 0x00000000;
	Global_A677[0x0000004E /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000004F /*12*/] = 0x000000AB;
	Global_A677[0x0000004F /*12*/].f_1 = 0x00000010;
	Global_A677[0x0000004F /*12*/].f_2 = 0x00000006;
	Global_A677[0x0000004F /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000004F /*12*/].f_A = 0x00000000;
	Global_A677[0x0000004F /*12*/].f_B = 0x00000000;
	Global_A677[0x0000004F /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000050 /*12*/] = 0x000000AC;
	Global_A677[0x00000050 /*12*/].f_1 = 0x000000AD;
	Global_A677[0x00000050 /*12*/].f_2 = 0x00000006;
	Global_A677[0x00000050 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000050 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000050 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000050 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000051 /*12*/] = 0x000000AE;
	Global_A677[0x00000051 /*12*/].f_1 = 0x000000AF;
	Global_A677[0x00000051 /*12*/].f_2 = 0x00000006;
	Global_A677[0x00000051 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000051 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000051 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000051 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000052 /*12*/] = 0x000000B0;
	Global_A677[0x00000052 /*12*/].f_1 = 0x000000B1;
	Global_A677[0x00000052 /*12*/].f_2 = 0x00000006;
	Global_A677[0x00000052 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000052 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000052 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000052 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000053 /*12*/] = 0x000000B2;
	Global_A677[0x00000053 /*12*/].f_1 = 0x000000B3;
	Global_A677[0x00000053 /*12*/].f_2 = 0x00000006;
	Global_A677[0x00000053 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000053 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000053 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000053 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000054 /*12*/] = 0x000000B4;
	Global_A677[0x00000054 /*12*/].f_1 = 0x000000B5;
	Global_A677[0x00000054 /*12*/].f_2 = 0x00000004;
	Global_A677[0x00000054 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000054 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000054 /*12*/].f_B = 0x00000BB8;
	Global_A677[0x00000054 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000055 /*12*/] = 0x000000B9;
	Global_A677[0x00000055 /*12*/].f_1 = 0x000000BA;
	Global_A677[0x00000055 /*12*/].f_2 = 0x00000016;
	Global_A677[0x00000055 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000055 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000055 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000055 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000056 /*12*/] = 0x000000C1;
	Global_A677[0x00000056 /*12*/].f_1 = 0x000000C2;
	Global_A677[0x00000056 /*12*/].f_2 = 0x00000018;
	Global_A677[0x00000056 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000056 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000056 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000056 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000056 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000056 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000057;
	Global_A677[0x00000056 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000056 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000057 /*12*/] = 0x000000C3;
	Global_A677[0x00000057 /*12*/].f_1 = 0x000000C4;
	Global_A677[0x00000057 /*12*/].f_2 = 0x00000000;
	Global_A677[0x00000057 /*12*/].f_3 = 0x00000018;
	Global_A677[0x00000057 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000057 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000057 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000057 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000057 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000058;
	Global_A677[0x00000057 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000057 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000058 /*12*/] = 0x000000C5;
	Global_A677[0x00000058 /*12*/].f_1 = 0x000000C6;
	Global_A677[0x00000058 /*12*/].f_2 = 0x00000018;
	Global_A677[0x00000058 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000058 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000058 /*12*/].f_B = 0x0001D4C0;
	Global_A677[0x00000058 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000059 /*12*/] = 0x000000C8;
	Global_A677[0x00000059 /*12*/].f_1 = 0x000000C9;
	Global_A677[0x00000059 /*12*/].f_2 = 0x00000018;
	Global_A677[0x00000059 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000059 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000059 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000059 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000059 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000059 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000005A;
	Global_A677[0x00000059 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000059 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000005A /*12*/] = 0x000000CA;
	Global_A677[0x0000005A /*12*/].f_1 = 0x000000CB;
	Global_A677[0x0000005A /*12*/].f_2 = 0x00000000;
	Global_A677[0x0000005A /*12*/].f_3 = 0x00000018;
	Global_A677[0x0000005A /*12*/].f_A = 0x00000000;
	Global_A677[0x0000005A /*12*/].f_B = 0x00000000;
	Global_A677[0x0000005A /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000005A /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000005A /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000005B;
	Global_A677[0x0000005A /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000005A /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000005B /*12*/] = 0x000000CC;
	Global_A677[0x0000005B /*12*/].f_1 = 0x000000CD;
	Global_A677[0x0000005B /*12*/].f_2 = 0x00000018;
	Global_A677[0x0000005B /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000005B /*12*/].f_A = 0x00000000;
	Global_A677[0x0000005B /*12*/].f_B = 0x0001D4C0;
	Global_A677[0x0000005B /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000005C /*12*/] = 0x000000D1;
	Global_A677[0x0000005C /*12*/].f_1 = 0x000000D2;
	Global_A677[0x0000005C /*12*/].f_2 = 0x00000019;
	Global_A677[0x0000005C /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000005C /*12*/].f_A = 0x00000001;
	Global_A677[0x0000005C /*12*/].f_B = 0x00000000;
	Global_A677[0x0000005C /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000005C /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000005C /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000005D;
	Global_A677[0x0000005C /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000005C /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000005D /*12*/] = 0x000000D3;
	Global_A677[0x0000005D /*12*/].f_1 = 0x000000D4;
	Global_A677[0x0000005D /*12*/].f_2 = 0x00000000;
	Global_A677[0x0000005D /*12*/].f_3 = 0x00000019;
	Global_A677[0x0000005D /*12*/].f_A = 0x00000000;
	Global_A677[0x0000005D /*12*/].f_B = 0x00000000;
	Global_A677[0x0000005D /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000005D /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000005D /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000005E;
	Global_A677[0x0000005D /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000005D /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000005E /*12*/] = 0x000000D5;
	Global_A677[0x0000005E /*12*/].f_1 = 0x000000D6;
	Global_A677[0x0000005E /*12*/].f_2 = 0x00000019;
	Global_A677[0x0000005E /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000005E /*12*/].f_A = 0x00000001;
	Global_A677[0x0000005E /*12*/].f_B = 0x0000EA60;
	Global_A677[0x0000005E /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000005E /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000005E /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000005F;
	Global_A677[0x0000005E /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000005E /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000005F /*12*/] = 0x000000D7;
	Global_A677[0x0000005F /*12*/].f_1 = 0x000000D8;
	Global_A677[0x0000005F /*12*/].f_2 = 0x00000000;
	Global_A677[0x0000005F /*12*/].f_3 = 0x00000019;
	Global_A677[0x0000005F /*12*/].f_A = 0x00000000;
	Global_A677[0x0000005F /*12*/].f_B = 0x00000000;
	Global_A677[0x0000005F /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000005F /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000005F /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000060;
	Global_A677[0x0000005F /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000005F /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000060 /*12*/] = 0x000000D9;
	Global_A677[0x00000060 /*12*/].f_1 = 0x000000DA;
	Global_A677[0x00000060 /*12*/].f_2 = 0x00000019;
	Global_A677[0x00000060 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000060 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000060 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x00000060 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000061 /*12*/] = 0x000000DE;
	Global_A677[0x00000061 /*12*/].f_1 = 0x000000DF;
	Global_A677[0x00000061 /*12*/].f_2 = 0x0000001A;
	Global_A677[0x00000061 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000061 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000061 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000061 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000061 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000061 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000062;
	Global_A677[0x00000061 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000061 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000062 /*12*/] = 0x000000E0;
	Global_A677[0x00000062 /*12*/].f_1 = 0x000000E1;
	Global_A677[0x00000062 /*12*/].f_2 = 0x00000000;
	Global_A677[0x00000062 /*12*/].f_3 = 0x0000001A;
	Global_A677[0x00000062 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000062 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000062 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000063 /*12*/] = 0x000000E5;
	Global_A677[0x00000063 /*12*/].f_1 = 0x000000E6;
	Global_A677[0x00000063 /*12*/].f_2 = 0x0000001B;
	Global_A677[0x00000063 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000063 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000063 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000063 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000063 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000063 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000064;
	Global_A677[0x00000063 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000063 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000064 /*12*/] = 0x000000E7;
	Global_A677[0x00000064 /*12*/].f_1 = 0x000000E8;
	Global_A677[0x00000064 /*12*/].f_2 = 0x00000000;
	Global_A677[0x00000064 /*12*/].f_3 = 0x0000001B;
	Global_A677[0x00000064 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000064 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000064 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000065 /*12*/] = 0x000000EC;
	Global_A677[0x00000065 /*12*/].f_1 = 0x000000ED;
	Global_A677[0x00000065 /*12*/].f_2 = 0x0000001C;
	Global_A677[0x00000065 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000065 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000065 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000065 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000066 /*12*/] = 0x000000EE;
	Global_A677[0x00000066 /*12*/].f_1 = 0x000000EF;
	Global_A677[0x00000066 /*12*/].f_2 = 0x0000001A;
	Global_A677[0x00000066 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000066 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000066 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000066 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000066 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000066 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000067;
	Global_A677[0x00000066 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000066 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000067 /*12*/] = 0x000000F0;
	Global_A677[0x00000067 /*12*/].f_1 = 0x000000F1;
	Global_A677[0x00000067 /*12*/].f_2 = 0x00000000;
	Global_A677[0x00000067 /*12*/].f_3 = 0x0000001A;
	Global_A677[0x00000067 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000067 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000067 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000068 /*12*/] = 0x000000F5;
	Global_A677[0x00000068 /*12*/].f_1 = 0x000000F6;
	Global_A677[0x00000068 /*12*/].f_2 = 0x0000001D;
	Global_A677[0x00000068 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000068 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000068 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000068 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000068 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000068 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000069;
	Global_A677[0x00000068 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000068 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000069 /*12*/] = 0x000000F7;
	Global_A677[0x00000069 /*12*/].f_1 = 0x000000F8;
	Global_A677[0x00000069 /*12*/].f_2 = 0x00000000;
	Global_A677[0x00000069 /*12*/].f_3 = 0x0000001D;
	Global_A677[0x00000069 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000069 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000069 /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000006A /*12*/] = 0x000000FC;
	Global_A677[0x0000006A /*12*/].f_1 = 0x000000FD;
	Global_A677[0x0000006A /*12*/].f_2 = 0x0000001E;
	Global_A677[0x0000006A /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000006A /*12*/].f_A = 0x00000001;
	Global_A677[0x0000006A /*12*/].f_B = 0x0001D4C0;
	Global_A677[0x0000006A /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000006A /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000006A /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000006B;
	Global_A677[0x0000006A /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000006A /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000006B /*12*/] = 0x000000FE;
	Global_A677[0x0000006B /*12*/].f_1 = 0x000000FF;
	Global_A677[0x0000006B /*12*/].f_2 = 0x00000001;
	Global_A677[0x0000006B /*12*/].f_3 = 0x0000001E;
	Global_A677[0x0000006B /*12*/].f_A = 0x00000000;
	Global_A677[0x0000006B /*12*/].f_B = 0x00000000;
	Global_A677[0x0000006B /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000006B /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000006B /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000006C;
	Global_A677[0x0000006B /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000006B /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000006C /*12*/] = 0x00000100;
	Global_A677[0x0000006C /*12*/].f_1 = 0x00000101;
	Global_A677[0x0000006C /*12*/].f_2 = 0x0000001E;
	Global_A677[0x0000006C /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000006C /*12*/].f_A = 0x00000001;
	Global_A677[0x0000006C /*12*/].f_B = 0x0001D4C0;
	Global_A677[0x0000006C /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000006C /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000006C /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000006D;
	Global_A677[0x0000006C /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000006C /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000006D /*12*/] = 0x00000102;
	Global_A677[0x0000006D /*12*/].f_1 = 0x00000103;
	Global_A677[0x0000006D /*12*/].f_2 = 0x00000001;
	Global_A677[0x0000006D /*12*/].f_3 = 0x0000001E;
	Global_A677[0x0000006D /*12*/].f_A = 0x00000000;
	Global_A677[0x0000006D /*12*/].f_B = 0x00000000;
	Global_A677[0x0000006D /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000006D /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000006D /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000006E;
	Global_A677[0x0000006D /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000006D /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000006E /*12*/] = 0x00000104;
	Global_A677[0x0000006E /*12*/].f_1 = 0x00000105;
	Global_A677[0x0000006E /*12*/].f_2 = 0x0000001E;
	Global_A677[0x0000006E /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000006E /*12*/].f_A = 0x00000000;
	Global_A677[0x0000006E /*12*/].f_B = 0x0000EA60;
	Global_A677[0x0000006E /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000006F /*12*/] = 0x00000109;
	Global_A677[0x0000006F /*12*/].f_1 = 0x0000010A;
	Global_A677[0x0000006F /*12*/].f_2 = 0x0000001F;
	Global_A677[0x0000006F /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000006F /*12*/].f_A = 0x00000001;
	Global_A677[0x0000006F /*12*/].f_B = 0x00000000;
	Global_A677[0x0000006F /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000006F /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000006F /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000070;
	Global_A677[0x0000006F /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000006F /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000070 /*12*/] = 0x0000010B;
	Global_A677[0x00000070 /*12*/].f_1 = 0x0000010C;
	Global_A677[0x00000070 /*12*/].f_2 = 0x00000001;
	Global_A677[0x00000070 /*12*/].f_3 = 0x0000001F;
	Global_A677[0x00000070 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000070 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000070 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000071 /*12*/] = 0x00000110;
	Global_A677[0x00000071 /*12*/].f_1 = 0x00000111;
	Global_A677[0x00000071 /*12*/].f_2 = 0x00000020;
	Global_A677[0x00000071 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000071 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000071 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000071 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000071 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000071 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000072;
	Global_A677[0x00000071 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000071 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000072 /*12*/] = 0x00000112;
	Global_A677[0x00000072 /*12*/].f_1 = 0x00000113;
	Global_A677[0x00000072 /*12*/].f_2 = 0x00000001;
	Global_A677[0x00000072 /*12*/].f_3 = 0x00000020;
	Global_A677[0x00000072 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000072 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000072 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000072 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000072 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000073;
	Global_A677[0x00000072 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000072 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000073 /*12*/] = 0x00000114;
	Global_A677[0x00000073 /*12*/].f_1 = 0x00000115;
	Global_A677[0x00000073 /*12*/].f_2 = 0x00000020;
	Global_A677[0x00000073 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000073 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000073 /*12*/].f_B = 0x00007530;
	Global_A677[0x00000073 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000074 /*12*/] = 0x00000116;
	Global_A677[0x00000074 /*12*/].f_1 = 0x00000117;
	Global_A677[0x00000074 /*12*/].f_2 = 0x00000020;
	Global_A677[0x00000074 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000074 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000074 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000074 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000074 /*12*/].f_5[0x00000000 /*4*/] = 0x0000011A;
	Global_A677[0x00000074 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000075;
	Global_A677[0x00000074 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000074 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000075 /*12*/] = 0x00000118;
	Global_A677[0x00000075 /*12*/].f_1 = 0x00000119;
	Global_A677[0x00000075 /*12*/].f_2 = 0x00000001;
	Global_A677[0x00000075 /*12*/].f_3 = 0x00000020;
	Global_A677[0x00000075 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000075 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000075 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000076 /*12*/] = 0x0000011B;
	Global_A677[0x00000076 /*12*/].f_1 = 0x0000011C;
	Global_A677[0x00000076 /*12*/].f_2 = 0x00000020;
	Global_A677[0x00000076 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000076 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000076 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000076 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000076 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000076 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000077;
	Global_A677[0x00000076 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000076 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000077 /*12*/] = 0x0000011D;
	Global_A677[0x00000077 /*12*/].f_1 = 0x0000011E;
	Global_A677[0x00000077 /*12*/].f_2 = 0x00000001;
	Global_A677[0x00000077 /*12*/].f_3 = 0x00000020;
	Global_A677[0x00000077 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000077 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000077 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000078 /*12*/] = 0x0000011F;
	Global_A677[0x00000078 /*12*/].f_1 = 0x00000120;
	Global_A677[0x00000078 /*12*/].f_2 = 0x00000020;
	Global_A677[0x00000078 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000078 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000078 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000078 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000078 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000078 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000079;
	Global_A677[0x00000078 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000078 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000079 /*12*/] = 0x00000121;
	Global_A677[0x00000079 /*12*/].f_1 = 0x00000122;
	Global_A677[0x00000079 /*12*/].f_2 = 0x00000001;
	Global_A677[0x00000079 /*12*/].f_3 = 0x00000020;
	Global_A677[0x00000079 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000079 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000079 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000079 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000079 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000007A;
	Global_A677[0x00000079 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000079 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000007A /*12*/] = 0x00000123;
	Global_A677[0x0000007A /*12*/].f_1 = 0x00000124;
	Global_A677[0x0000007A /*12*/].f_2 = 0x00000020;
	Global_A677[0x0000007A /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000007A /*12*/].f_A = 0x00000001;
	Global_A677[0x0000007A /*12*/].f_B = 0x00007530;
	Global_A677[0x0000007A /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000007A /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000007A /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000007B;
	Global_A677[0x0000007A /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000007A /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000007B /*12*/] = 0x00000125;
	Global_A677[0x0000007B /*12*/].f_1 = 0x00000126;
	Global_A677[0x0000007B /*12*/].f_2 = 0x00000001;
	Global_A677[0x0000007B /*12*/].f_3 = 0x00000020;
	Global_A677[0x0000007B /*12*/].f_A = 0x00000000;
	Global_A677[0x0000007B /*12*/].f_B = 0x00000000;
	Global_A677[0x0000007B /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000007C /*12*/] = 0x00000127;
	Global_A677[0x0000007C /*12*/].f_1 = 0x00000128;
	Global_A677[0x0000007C /*12*/].f_2 = 0x0000001B;
	Global_A677[0x0000007C /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000007C /*12*/].f_A = 0x00000001;
	Global_A677[0x0000007C /*12*/].f_B = 0x00000000;
	Global_A677[0x0000007C /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000007C /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000007C /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000007D;
	Global_A677[0x0000007C /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000007C /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000007D /*12*/] = 0x00000129;
	Global_A677[0x0000007D /*12*/].f_1 = 0x0000012A;
	Global_A677[0x0000007D /*12*/].f_2 = 0x00000001;
	Global_A677[0x0000007D /*12*/].f_3 = 0x0000001B;
	Global_A677[0x0000007D /*12*/].f_A = 0x00000000;
	Global_A677[0x0000007D /*12*/].f_B = 0x00000000;
	Global_A677[0x0000007D /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000007E /*12*/] = 0x0000012B;
	Global_A677[0x0000007E /*12*/].f_1 = 0x0000012C;
	Global_A677[0x0000007E /*12*/].f_2 = 0x00000002;
	Global_A677[0x0000007E /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000007E /*12*/].f_A = 0x00000001;
	Global_A677[0x0000007E /*12*/].f_B = 0x00000000;
	Global_A677[0x0000007E /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000007E /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000007E /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000007F;
	Global_A677[0x0000007E /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000007E /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000007F /*12*/] = 0x0000012D;
	Global_A677[0x0000007F /*12*/].f_1 = 0x0000012E;
	Global_A677[0x0000007F /*12*/].f_2 = 0x00000001;
	Global_A677[0x0000007F /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000007F /*12*/].f_A = 0x00000000;
	Global_A677[0x0000007F /*12*/].f_B = 0x00000000;
	Global_A677[0x0000007F /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000007F /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000007F /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000080;
	Global_A677[0x0000007F /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000007F /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000080 /*12*/] = 0x0000012F;
	Global_A677[0x00000080 /*12*/].f_1 = 0x00000130;
	Global_A677[0x00000080 /*12*/].f_2 = 0x00000002;
	Global_A677[0x00000080 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000080 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000080 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x00000080 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000080 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000080 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000081;
	Global_A677[0x00000080 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000080 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000081 /*12*/] = 0x00000131;
	Global_A677[0x00000081 /*12*/].f_1 = 0x00000132;
	Global_A677[0x00000081 /*12*/].f_2 = 0x00000001;
	Global_A677[0x00000081 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000081 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000081 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000081 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000081 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000081 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000082;
	Global_A677[0x00000081 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000081 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000082 /*12*/] = 0x00000133;
	Global_A677[0x00000082 /*12*/].f_1 = 0x00000134;
	Global_A677[0x00000082 /*12*/].f_2 = 0x00000002;
	Global_A677[0x00000082 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000082 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000082 /*12*/].f_B = 0x00007530;
	Global_A677[0x00000082 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000083 /*12*/] = 0x00000135;
	Global_A677[0x00000083 /*12*/].f_1 = 0x00000136;
	Global_A677[0x00000083 /*12*/].f_2 = 0x00000000;
	Global_A677[0x00000083 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000083 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000083 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000083 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000083 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000083 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000084;
	Global_A677[0x00000083 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000083 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000084 /*12*/] = 0x00000137;
	Global_A677[0x00000084 /*12*/].f_1 = 0x00000138;
	Global_A677[0x00000084 /*12*/].f_2 = 0x00000001;
	Global_A677[0x00000084 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000084 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000084 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000084 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000084 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000084 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000085;
	Global_A677[0x00000084 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000084 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000085 /*12*/] = 0x00000139;
	Global_A677[0x00000085 /*12*/].f_1 = 0x0000013A;
	Global_A677[0x00000085 /*12*/].f_2 = 0x00000000;
	Global_A677[0x00000085 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000085 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000085 /*12*/].f_B = 0x000061A8;
	Global_A677[0x00000085 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000086 /*12*/] = 0x0000013B;
	Global_A677[0x00000086 /*12*/].f_1 = 0x0000013C;
	Global_A677[0x00000086 /*12*/].f_2 = 0x00000000;
	Global_A677[0x00000086 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000086 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000086 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000086 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000086 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000086 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000087;
	Global_A677[0x00000086 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000086 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000087 /*12*/] = 0x0000013D;
	Global_A677[0x00000087 /*12*/].f_1 = 0x0000013E;
	Global_A677[0x00000087 /*12*/].f_2 = 0x00000001;
	Global_A677[0x00000087 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000087 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000087 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000087 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000088 /*12*/] = 0x00000142;
	Global_A677[0x00000088 /*12*/].f_1 = 0x00000143;
	Global_A677[0x00000088 /*12*/].f_2 = 0x00000021;
	Global_A677[0x00000088 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000088 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000088 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000088 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000088 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000088 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000089;
	Global_A677[0x00000088 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000088 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000089 /*12*/] = 0x00000144;
	Global_A677[0x00000089 /*12*/].f_1 = 0x00000145;
	Global_A677[0x00000089 /*12*/].f_2 = 0x00000002;
	Global_A677[0x00000089 /*12*/].f_3 = 0x00000021;
	Global_A677[0x00000089 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000089 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000089 /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000008A /*12*/] = 0x00000146;
	Global_A677[0x0000008A /*12*/].f_1 = 0x00000147;
	Global_A677[0x0000008A /*12*/].f_2 = 0x00000021;
	Global_A677[0x0000008A /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000008A /*12*/].f_A = 0x00000001;
	Global_A677[0x0000008A /*12*/].f_B = 0x00000000;
	Global_A677[0x0000008A /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000008A /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000008A /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000008B;
	Global_A677[0x0000008A /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000008A /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000008B /*12*/] = 0x00000148;
	Global_A677[0x0000008B /*12*/].f_1 = 0x00000149;
	Global_A677[0x0000008B /*12*/].f_2 = 0x00000002;
	Global_A677[0x0000008B /*12*/].f_3 = 0x00000021;
	Global_A677[0x0000008B /*12*/].f_A = 0x00000000;
	Global_A677[0x0000008B /*12*/].f_B = 0x00000000;
	Global_A677[0x0000008B /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000008B /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000008B /*12*/].f_5[0x00000000 /*4*/].f_1 = 0xFFFFFFFF;
	Global_A677[0x0000008B /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000008B /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000008C /*12*/] = 0x0000014A;
	Global_A677[0x0000008C /*12*/].f_1 = 0x0000014B;
	Global_A677[0x0000008C /*12*/].f_2 = 0x00000002;
	Global_A677[0x0000008C /*12*/].f_3 = 0x00000021;
	Global_A677[0x0000008C /*12*/].f_A = 0x00000000;
	Global_A677[0x0000008C /*12*/].f_B = 0x00000000;
	Global_A677[0x0000008C /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000008D /*12*/] = 0x0000014C;
	Global_A677[0x0000008D /*12*/].f_1 = 0x0000014D;
	Global_A677[0x0000008D /*12*/].f_2 = 0x0000001D;
	Global_A677[0x0000008D /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000008D /*12*/].f_A = 0x00000000;
	Global_A677[0x0000008D /*12*/].f_B = 0x00000000;
	Global_A677[0x0000008D /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000008D /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000008D /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x0000008E;
	Global_A677[0x0000008D /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000008D /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x0000008E /*12*/] = 0x0000014E;
	Global_A677[0x0000008E /*12*/].f_1 = 0x0000014F;
	Global_A677[0x0000008E /*12*/].f_2 = 0x00000002;
	Global_A677[0x0000008E /*12*/].f_3 = 0x0000001D;
	Global_A677[0x0000008E /*12*/].f_A = 0x00000000;
	Global_A677[0x0000008E /*12*/].f_B = 0x00000000;
	Global_A677[0x0000008E /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000008F /*12*/] = 0x00000150;
	Global_A677[0x0000008F /*12*/].f_1 = 0x00000151;
	Global_A677[0x0000008F /*12*/].f_2 = 0x00000003;
	Global_A677[0x0000008F /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000008F /*12*/].f_A = 0x00000000;
	Global_A677[0x0000008F /*12*/].f_B = 0x00000000;
	Global_A677[0x0000008F /*12*/].f_4 = 0x00000001;
	Global_A677[0x0000008F /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x0000008F /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000090;
	Global_A677[0x0000008F /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x0000008F /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000090 /*12*/] = 0x00000152;
	Global_A677[0x00000090 /*12*/].f_1 = 0x00000153;
	Global_A677[0x00000090 /*12*/].f_2 = 0x00000002;
	Global_A677[0x00000090 /*12*/].f_3 = 0x00000003;
	Global_A677[0x00000090 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000090 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000090 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000091 /*12*/] = 0x00000157;
	Global_A677[0x00000091 /*12*/].f_1 = 0x00000158;
	Global_A677[0x00000091 /*12*/].f_2 = 0x00000022;
	Global_A677[0x00000091 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000091 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000091 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000091 /*12*/].f_4 = 0x00000001;
	Global_A677[0x00000091 /*12*/].f_5[0x00000000 /*4*/] = 0x000000C7;
	Global_A677[0x00000091 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x00000092;
	Global_A677[0x00000091 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x00000091 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x00000092 /*12*/] = 0x00000159;
	Global_A677[0x00000092 /*12*/].f_1 = 0x0000015A;
	Global_A677[0x00000092 /*12*/].f_2 = 0x00000002;
	Global_A677[0x00000092 /*12*/].f_3 = 0x00000022;
	Global_A677[0x00000092 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000092 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000092 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000093 /*12*/] = 0x0000013F;
	Global_A677[0x00000093 /*12*/].f_1 = 0x0000015B;
	Global_A677[0x00000093 /*12*/].f_2 = 0x0000001A;
	Global_A677[0x00000093 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000093 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000093 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000093 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000094 /*12*/] = 0x0000015F;
	Global_A677[0x00000094 /*12*/].f_1 = 0x00000160;
	Global_A677[0x00000094 /*12*/].f_2 = 0x00000023;
	Global_A677[0x00000094 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000094 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000094 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000094 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000095 /*12*/] = 0x0000015F;
	Global_A677[0x00000095 /*12*/].f_1 = 0x00000160;
	Global_A677[0x00000095 /*12*/].f_2 = 0x00000023;
	Global_A677[0x00000095 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000095 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000095 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000095 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000096 /*12*/] = 0x0000015F;
	Global_A677[0x00000096 /*12*/].f_1 = 0x00000160;
	Global_A677[0x00000096 /*12*/].f_2 = 0x00000023;
	Global_A677[0x00000096 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000096 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000096 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000096 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000097 /*12*/] = 0x00000163;
	Global_A677[0x00000097 /*12*/].f_1 = 0x00000164;
	Global_A677[0x00000097 /*12*/].f_2 = 0x00000024;
	Global_A677[0x00000097 /*12*/].f_3 = 0x00000002;
	Global_A677[0x00000097 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000097 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000097 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000098 /*12*/] = 0x00000163;
	Global_A677[0x00000098 /*12*/].f_1 = 0x00000164;
	Global_A677[0x00000098 /*12*/].f_2 = 0x00000024;
	Global_A677[0x00000098 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000098 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000098 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000098 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000099 /*12*/] = 0x00000163;
	Global_A677[0x00000099 /*12*/].f_1 = 0x00000164;
	Global_A677[0x00000099 /*12*/].f_2 = 0x00000024;
	Global_A677[0x00000099 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000099 /*12*/].f_A = 0x00000000;
	Global_A677[0x00000099 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000099 /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000009A /*12*/] = 0x0000016B;
	Global_A677[0x0000009A /*12*/].f_1 = 0x0000016C;
	Global_A677[0x0000009A /*12*/].f_2 = 0x00000026;
	Global_A677[0x0000009A /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000009A /*12*/].f_A = 0x00000000;
	Global_A677[0x0000009A /*12*/].f_B = 0x00000000;
	Global_A677[0x0000009A /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000009B /*12*/] = 0x0000016D;
	Global_A677[0x0000009B /*12*/].f_1 = 0x0000016E;
	Global_A677[0x0000009B /*12*/].f_2 = 0x0000000B;
	Global_A677[0x0000009B /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000009B /*12*/].f_A = 0x00000000;
	Global_A677[0x0000009B /*12*/].f_B = 0x00000000;
	Global_A677[0x0000009B /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000009C /*12*/] = 0x0000016D;
	Global_A677[0x0000009C /*12*/].f_1 = 0x0000016E;
	Global_A677[0x0000009C /*12*/].f_2 = 0x0000000B;
	Global_A677[0x0000009C /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000009C /*12*/].f_A = 0x00000000;
	Global_A677[0x0000009C /*12*/].f_B = 0x00000000;
	Global_A677[0x0000009C /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000009D /*12*/] = 0x0000016D;
	Global_A677[0x0000009D /*12*/].f_1 = 0x0000016E;
	Global_A677[0x0000009D /*12*/].f_2 = 0x0000000B;
	Global_A677[0x0000009D /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000009D /*12*/].f_A = 0x00000000;
	Global_A677[0x0000009D /*12*/].f_B = 0x00000000;
	Global_A677[0x0000009D /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000009E /*12*/] = 0x0000016F;
	Global_A677[0x0000009E /*12*/].f_1 = 0x00000170;
	Global_A677[0x0000009E /*12*/].f_2 = 0x0000001D;
	Global_A677[0x0000009E /*12*/].f_3 = 0x00000002;
	Global_A677[0x0000009E /*12*/].f_A = 0x00000000;
	Global_A677[0x0000009E /*12*/].f_B = 0x00000000;
	Global_A677[0x0000009E /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000009F /*12*/] = 0x00000174;
	Global_A677[0x0000009F /*12*/].f_1 = 0x00000175;
	Global_A677[0x0000009F /*12*/].f_2 = 0x00000027;
	Global_A677[0x0000009F /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000009F /*12*/].f_A = 0x00000000;
	Global_A677[0x0000009F /*12*/].f_B = 0x00000000;
	Global_A677[0x0000009F /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000A0 /*12*/] = 0x00000176;
	Global_A677[0x000000A0 /*12*/].f_1 = 0x00000177;
	Global_A677[0x000000A0 /*12*/].f_2 = 0x00000027;
	Global_A677[0x000000A0 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000A0 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000A0 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000A0 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000A1 /*12*/] = 0x000001A1;
	Global_A677[0x000000A1 /*12*/].f_1 = 0x000001A2;
	Global_A677[0x000000A1 /*12*/].f_2 = 0x00000028;
	Global_A677[0x000000A1 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000A1 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000A1 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000A1 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000A2 /*12*/] = 0x000001A3;
	Global_A677[0x000000A2 /*12*/].f_1 = 0x000001A4;
	Global_A677[0x000000A2 /*12*/].f_2 = 0x0000002B;
	Global_A677[0x000000A2 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000A2 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000A2 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000A2 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000A3 /*12*/] = 0x000001A5;
	Global_A677[0x000000A3 /*12*/].f_1 = 0x000001A6;
	Global_A677[0x000000A3 /*12*/].f_2 = 0x0000002B;
	Global_A677[0x000000A3 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000A3 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000A3 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000A3 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000A4 /*12*/] = 0x000001A7;
	Global_A677[0x000000A4 /*12*/].f_1 = 0x000001A8;
	Global_A677[0x000000A4 /*12*/].f_2 = 0x0000002B;
	Global_A677[0x000000A4 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000A4 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000A4 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000A4 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000A5 /*12*/] = 0x000001A9;
	Global_A677[0x000000A5 /*12*/].f_1 = 0x000001AA;
	Global_A677[0x000000A5 /*12*/].f_2 = 0x0000002C;
	Global_A677[0x000000A5 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000A5 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000A5 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000A5 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000A6 /*12*/] = 0x000001AB;
	Global_A677[0x000000A6 /*12*/].f_1 = 0x000001AC;
	Global_A677[0x000000A6 /*12*/].f_2 = 0x0000002D;
	Global_A677[0x000000A6 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000A6 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000A6 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000A6 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000A7 /*12*/] = 0x000001AD;
	Global_A677[0x000000A7 /*12*/].f_1 = 0x000001AE;
	Global_A677[0x000000A7 /*12*/].f_2 = 0x0000002E;
	Global_A677[0x000000A7 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000A7 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000A7 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000A7 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000A8 /*12*/] = 0x000001AF;
	Global_A677[0x000000A8 /*12*/].f_1 = 0x000001B0;
	Global_A677[0x000000A8 /*12*/].f_2 = 0x00000031;
	Global_A677[0x000000A8 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000A8 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000A8 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000A8 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000A9 /*12*/] = 0x000001B1;
	Global_A677[0x000000A9 /*12*/].f_1 = 0x000001B2;
	Global_A677[0x000000A9 /*12*/].f_2 = 0x00000031;
	Global_A677[0x000000A9 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000A9 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000A9 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000A9 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000AA /*12*/] = 0x000001B3;
	Global_A677[0x000000AA /*12*/].f_1 = 0x000001B4;
	Global_A677[0x000000AA /*12*/].f_2 = 0x00000031;
	Global_A677[0x000000AA /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000AA /*12*/].f_A = 0x00000000;
	Global_A677[0x000000AA /*12*/].f_B = 0x00000000;
	Global_A677[0x000000AA /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000AB /*12*/] = 0x000001B5;
	Global_A677[0x000000AB /*12*/].f_1 = 0x000001B6;
	Global_A677[0x000000AB /*12*/].f_2 = 0x00000032;
	Global_A677[0x000000AB /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000AB /*12*/].f_A = 0x00000000;
	Global_A677[0x000000AB /*12*/].f_B = 0x00000000;
	Global_A677[0x000000AB /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000AC /*12*/] = 0x000001B7;
	Global_A677[0x000000AC /*12*/].f_1 = 0x000001B8;
	Global_A677[0x000000AC /*12*/].f_2 = 0x00000033;
	Global_A677[0x000000AC /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000AC /*12*/].f_A = 0x00000000;
	Global_A677[0x000000AC /*12*/].f_B = 0x00000000;
	Global_A677[0x000000AC /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000AD /*12*/] = 0x000001B9;
	Global_A677[0x000000AD /*12*/].f_1 = 0x000001BA;
	Global_A677[0x000000AD /*12*/].f_2 = 0x00000033;
	Global_A677[0x000000AD /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000AD /*12*/].f_A = 0x00000000;
	Global_A677[0x000000AD /*12*/].f_B = 0x00000000;
	Global_A677[0x000000AD /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000AE /*12*/] = 0x000001BB;
	Global_A677[0x000000AE /*12*/].f_1 = 0x000001BC;
	Global_A677[0x000000AE /*12*/].f_2 = 0x00000033;
	Global_A677[0x000000AE /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000AE /*12*/].f_A = 0x00000000;
	Global_A677[0x000000AE /*12*/].f_B = 0x00000000;
	Global_A677[0x000000AE /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000AF /*12*/] = 0x000001BD;
	Global_A677[0x000000AF /*12*/].f_1 = 0x000001BE;
	Global_A677[0x000000AF /*12*/].f_2 = 0x00000034;
	Global_A677[0x000000AF /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000AF /*12*/].f_A = 0x00000000;
	Global_A677[0x000000AF /*12*/].f_B = 0x00000000;
	Global_A677[0x000000AF /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000B0 /*12*/] = 0x000001BF;
	Global_A677[0x000000B0 /*12*/].f_1 = 0x000001C0;
	Global_A677[0x000000B0 /*12*/].f_2 = 0x00000034;
	Global_A677[0x000000B0 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000B0 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000B0 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000B0 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000B1 /*12*/] = 0x000001C1;
	Global_A677[0x000000B1 /*12*/].f_1 = 0x000001C2;
	Global_A677[0x000000B1 /*12*/].f_2 = 0x00000034;
	Global_A677[0x000000B1 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000B1 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000B1 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000B1 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000B2 /*12*/] = 0x000001C3;
	Global_A677[0x000000B2 /*12*/].f_1 = 0x000001C4;
	Global_A677[0x000000B2 /*12*/].f_2 = 0x00000035;
	Global_A677[0x000000B2 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000B2 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000B2 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000B2 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000B3 /*12*/] = 0x000001C5;
	Global_A677[0x000000B3 /*12*/].f_1 = 0x000001C6;
	Global_A677[0x000000B3 /*12*/].f_2 = 0x00000035;
	Global_A677[0x000000B3 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000B3 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000B3 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000B3 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000B4 /*12*/] = 0x000001C7;
	Global_A677[0x000000B4 /*12*/].f_1 = 0x000001C8;
	Global_A677[0x000000B4 /*12*/].f_2 = 0x00000035;
	Global_A677[0x000000B4 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000B4 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000B4 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000B4 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000B5 /*12*/] = 0x000001C9;
	Global_A677[0x000000B5 /*12*/].f_1 = 0x000001CA;
	Global_A677[0x000000B5 /*12*/].f_2 = 0x00000004;
	Global_A677[0x000000B5 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000B5 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000B5 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000B5 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000B6 /*12*/] = 0x000001CB;
	Global_A677[0x000000B6 /*12*/].f_1 = 0x000001CC;
	Global_A677[0x000000B6 /*12*/].f_2 = 0x00000025;
	Global_A677[0x000000B6 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000B6 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000B6 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000B6 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000B7 /*12*/] = 0x000001CD;
	Global_A677[0x000000B7 /*12*/].f_1 = 0x000001CE;
	Global_A677[0x000000B7 /*12*/].f_2 = 0x00000025;
	Global_A677[0x000000B7 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000B7 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000B7 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000B7 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000B8 /*12*/] = 0x000001CF;
	Global_A677[0x000000B8 /*12*/].f_1 = 0x000001D0;
	Global_A677[0x000000B8 /*12*/].f_2 = 0x00000025;
	Global_A677[0x000000B8 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000B8 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000B8 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000B8 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000B9 /*12*/] = 0x000001D7;
	Global_A677[0x000000B9 /*12*/].f_1 = 0x000001D8;
	Global_A677[0x000000B9 /*12*/].f_2 = 0x00000036;
	Global_A677[0x000000B9 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000B9 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000B9 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000B9 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000BA /*12*/] = 0x000001D9;
	Global_A677[0x000000BA /*12*/].f_1 = 0x000001DA;
	Global_A677[0x000000BA /*12*/].f_2 = 0x00000036;
	Global_A677[0x000000BA /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000BA /*12*/].f_A = 0x00000000;
	Global_A677[0x000000BA /*12*/].f_B = 0x00000000;
	Global_A677[0x000000BA /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000BB /*12*/] = 0x000001DB;
	Global_A677[0x000000BB /*12*/].f_1 = 0x000001DC;
	Global_A677[0x000000BB /*12*/].f_2 = 0x00000037;
	Global_A677[0x000000BB /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000BB /*12*/].f_A = 0x00000000;
	Global_A677[0x000000BB /*12*/].f_B = 0x00000000;
	Global_A677[0x000000BB /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000BC /*12*/] = 0x000001DD;
	Global_A677[0x000000BC /*12*/].f_1 = 0x000001DE;
	Global_A677[0x000000BC /*12*/].f_2 = 0x00000036;
	Global_A677[0x000000BC /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000BC /*12*/].f_A = 0x00000000;
	Global_A677[0x000000BC /*12*/].f_B = 0x00000000;
	Global_A677[0x000000BC /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000BD /*12*/] = 0x000001DF;
	Global_A677[0x000000BD /*12*/].f_1 = 0x000001E0;
	Global_A677[0x000000BD /*12*/].f_2 = 0x00000037;
	Global_A677[0x000000BD /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000BD /*12*/].f_A = 0x00000000;
	Global_A677[0x000000BD /*12*/].f_B = 0x00000000;
	Global_A677[0x000000BD /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000BE /*12*/] = 0x000001E1;
	Global_A677[0x000000BE /*12*/].f_1 = 0x000001E2;
	Global_A677[0x000000BE /*12*/].f_2 = 0x00000037;
	Global_A677[0x000000BE /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000BE /*12*/].f_A = 0x00000000;
	Global_A677[0x000000BE /*12*/].f_B = 0x00000000;
	Global_A677[0x000000BE /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000BF /*12*/] = 0x000001E3;
	Global_A677[0x000000BF /*12*/].f_1 = 0x000001E4;
	Global_A677[0x000000BF /*12*/].f_2 = 0x0000000C;
	Global_A677[0x000000BF /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000BF /*12*/].f_A = 0x00000000;
	Global_A677[0x000000BF /*12*/].f_B = 0x00000000;
	Global_A677[0x000000BF /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000C0 /*12*/] = 0x000001E5;
	Global_A677[0x000000C0 /*12*/].f_1 = 0x000001E6;
	Global_A677[0x000000C0 /*12*/].f_2 = 0x0000000C;
	Global_A677[0x000000C0 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000C0 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000C0 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000C0 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000C1 /*12*/] = 0x000001E7;
	Global_A677[0x000000C1 /*12*/].f_1 = 0x000001E8;
	Global_A677[0x000000C1 /*12*/].f_2 = 0x0000000C;
	Global_A677[0x000000C1 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000C1 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000C1 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000C1 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000C2 /*12*/] = 0x000001FE;
	Global_A677[0x000000C2 /*12*/].f_1 = 0x000001FF;
	Global_A677[0x000000C2 /*12*/].f_2 = 0x00000038;
	Global_A677[0x000000C2 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000C2 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000C2 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000C2 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000C3 /*12*/] = 0x00000200;
	Global_A677[0x000000C3 /*12*/].f_1 = 0x00000201;
	Global_A677[0x000000C3 /*12*/].f_2 = 0x00000038;
	Global_A677[0x000000C3 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000C3 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000C3 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000C3 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000C4 /*12*/] = 0x00000202;
	Global_A677[0x000000C4 /*12*/].f_1 = 0x00000203;
	Global_A677[0x000000C4 /*12*/].f_2 = 0x00000038;
	Global_A677[0x000000C4 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000C4 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000C4 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000C4 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000C5 /*12*/] = 0x00000204;
	Global_A677[0x000000C5 /*12*/].f_1 = 0x00000205;
	Global_A677[0x000000C5 /*12*/].f_2 = 0x00000038;
	Global_A677[0x000000C5 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000C5 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000C5 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000C5 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000C6 /*12*/] = 0x00000206;
	Global_A677[0x000000C6 /*12*/].f_1 = 0x00000207;
	Global_A677[0x000000C6 /*12*/].f_2 = 0x00000038;
	Global_A677[0x000000C6 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000C6 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000C6 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000C6 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000C7 /*12*/] = 0x00000208;
	Global_A677[0x000000C7 /*12*/].f_1 = 0x00000209;
	Global_A677[0x000000C7 /*12*/].f_2 = 0x00000039;
	Global_A677[0x000000C7 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000C7 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000C7 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000C7 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000C7 /*12*/].f_5[0x00000000 /*4*/] = 0x00000218;
	Global_A677[0x000000C7 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000C8;
	Global_A677[0x000000C7 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000C7 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000C8 /*12*/] = 0x0000020A;
	Global_A677[0x000000C8 /*12*/].f_1 = 0x0000020B;
	Global_A677[0x000000C8 /*12*/].f_2 = 0x00000000;
	Global_A677[0x000000C8 /*12*/].f_3 = 0x00000039;
	Global_A677[0x000000C8 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000C8 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000C8 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000C8 /*12*/].f_5[0x00000000 /*4*/] = 0x00000219;
	Global_A677[0x000000C8 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000C9;
	Global_A677[0x000000C8 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000C8 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000C9 /*12*/] = 0x0000020C;
	Global_A677[0x000000C9 /*12*/].f_1 = 0x0000020D;
	Global_A677[0x000000C9 /*12*/].f_2 = 0x00000039;
	Global_A677[0x000000C9 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000C9 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000C9 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000C9 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000C9 /*12*/].f_5[0x00000000 /*4*/] = 0x0000021A;
	Global_A677[0x000000C9 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000CA;
	Global_A677[0x000000C9 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000C9 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000CA /*12*/] = 0x0000020E;
	Global_A677[0x000000CA /*12*/].f_1 = 0x0000020F;
	Global_A677[0x000000CA /*12*/].f_2 = 0x00000000;
	Global_A677[0x000000CA /*12*/].f_3 = 0x00000039;
	Global_A677[0x000000CA /*12*/].f_A = 0x00000000;
	Global_A677[0x000000CA /*12*/].f_B = 0x00000000;
	Global_A677[0x000000CA /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000CA /*12*/].f_5[0x00000000 /*4*/] = 0x0000021B;
	Global_A677[0x000000CA /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000CB;
	Global_A677[0x000000CA /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000CA /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000CB /*12*/] = 0x00000210;
	Global_A677[0x000000CB /*12*/].f_1 = 0x00000211;
	Global_A677[0x000000CB /*12*/].f_2 = 0x00000039;
	Global_A677[0x000000CB /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000CB /*12*/].f_A = 0x00000001;
	Global_A677[0x000000CB /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000CB /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000CB /*12*/].f_5[0x00000000 /*4*/] = 0x0000021C;
	Global_A677[0x000000CB /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000CC;
	Global_A677[0x000000CB /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000CB /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000CC /*12*/] = 0x00000212;
	Global_A677[0x000000CC /*12*/].f_1 = 0x00000213;
	Global_A677[0x000000CC /*12*/].f_2 = 0x00000000;
	Global_A677[0x000000CC /*12*/].f_3 = 0x00000039;
	Global_A677[0x000000CC /*12*/].f_A = 0x00000000;
	Global_A677[0x000000CC /*12*/].f_B = 0x00000000;
	Global_A677[0x000000CC /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000CC /*12*/].f_5[0x00000000 /*4*/] = 0x0000021D;
	Global_A677[0x000000CC /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000CD;
	Global_A677[0x000000CC /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000CC /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000CD /*12*/] = 0x00000214;
	Global_A677[0x000000CD /*12*/].f_1 = 0x00000215;
	Global_A677[0x000000CD /*12*/].f_2 = 0x00000039;
	Global_A677[0x000000CD /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000CD /*12*/].f_A = 0x00000001;
	Global_A677[0x000000CD /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000CD /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000CD /*12*/].f_5[0x00000000 /*4*/] = 0x0000021E;
	Global_A677[0x000000CD /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000CE;
	Global_A677[0x000000CD /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000CD /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000CE /*12*/] = 0x00000216;
	Global_A677[0x000000CE /*12*/].f_1 = 0x00000217;
	Global_A677[0x000000CE /*12*/].f_2 = 0x00000000;
	Global_A677[0x000000CE /*12*/].f_3 = 0x00000039;
	Global_A677[0x000000CE /*12*/].f_A = 0x00000000;
	Global_A677[0x000000CE /*12*/].f_B = 0x00000000;
	Global_A677[0x000000CE /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000CF /*12*/] = 0x0000021F;
	Global_A677[0x000000CF /*12*/].f_1 = 0x00000220;
	Global_A677[0x000000CF /*12*/].f_2 = 0x0000003A;
	Global_A677[0x000000CF /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000CF /*12*/].f_A = 0x00000001;
	Global_A677[0x000000CF /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000CF /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000CF /*12*/].f_5[0x00000000 /*4*/] = 0x0000022D;
	Global_A677[0x000000CF /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000D0;
	Global_A677[0x000000CF /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000CF /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000D0 /*12*/] = 0x00000221;
	Global_A677[0x000000D0 /*12*/].f_1 = 0x00000222;
	Global_A677[0x000000D0 /*12*/].f_2 = 0x00000000;
	Global_A677[0x000000D0 /*12*/].f_3 = 0x0000003A;
	Global_A677[0x000000D0 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000D0 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000D0 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000D0 /*12*/].f_5[0x00000000 /*4*/] = 0x0000022E;
	Global_A677[0x000000D0 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000D1;
	Global_A677[0x000000D0 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000D0 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000D1 /*12*/] = 0x00000223;
	Global_A677[0x000000D1 /*12*/].f_1 = 0x00000224;
	Global_A677[0x000000D1 /*12*/].f_2 = 0x0000003A;
	Global_A677[0x000000D1 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000D1 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000D1 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000D1 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000D1 /*12*/].f_5[0x00000000 /*4*/] = 0x0000022F;
	Global_A677[0x000000D1 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000D2;
	Global_A677[0x000000D1 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000D1 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000D2 /*12*/] = 0x00000225;
	Global_A677[0x000000D2 /*12*/].f_1 = 0x00000226;
	Global_A677[0x000000D2 /*12*/].f_2 = 0x00000000;
	Global_A677[0x000000D2 /*12*/].f_3 = 0x0000003A;
	Global_A677[0x000000D2 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000D2 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000D2 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000D2 /*12*/].f_5[0x00000000 /*4*/] = 0x00000230;
	Global_A677[0x000000D2 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000D3;
	Global_A677[0x000000D2 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000D2 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000D3 /*12*/] = 0x00000227;
	Global_A677[0x000000D3 /*12*/].f_1 = 0x00000228;
	Global_A677[0x000000D3 /*12*/].f_2 = 0x0000003A;
	Global_A677[0x000000D3 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000D3 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000D3 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000D3 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000D3 /*12*/].f_5[0x00000000 /*4*/] = 0x00000231;
	Global_A677[0x000000D3 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000D4;
	Global_A677[0x000000D3 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000D3 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000D4 /*12*/] = 0x00000229;
	Global_A677[0x000000D4 /*12*/].f_1 = 0x0000022A;
	Global_A677[0x000000D4 /*12*/].f_2 = 0x00000000;
	Global_A677[0x000000D4 /*12*/].f_3 = 0x0000003A;
	Global_A677[0x000000D4 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000D4 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000D4 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000D4 /*12*/].f_5[0x00000000 /*4*/] = 0x00000232;
	Global_A677[0x000000D4 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0xFFFFFFFF;
	Global_A677[0x000000D4 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000D4 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000D5 /*12*/] = 0x0000022B;
	Global_A677[0x000000D5 /*12*/].f_1 = 0x0000022C;
	Global_A677[0x000000D5 /*12*/].f_2 = 0x0000003A;
	Global_A677[0x000000D5 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000D5 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000D5 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000D5 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000D6 /*12*/] = 0x00000233;
	Global_A677[0x000000D6 /*12*/].f_1 = 0x00000234;
	Global_A677[0x000000D6 /*12*/].f_2 = 0x0000003B;
	Global_A677[0x000000D6 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000D6 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000D6 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000D6 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000D6 /*12*/].f_5[0x00000000 /*4*/] = 0x00000243;
	Global_A677[0x000000D6 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000D7;
	Global_A677[0x000000D6 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000D6 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000D7 /*12*/] = 0x00000235;
	Global_A677[0x000000D7 /*12*/].f_1 = 0x00000236;
	Global_A677[0x000000D7 /*12*/].f_2 = 0x00000000;
	Global_A677[0x000000D7 /*12*/].f_3 = 0x0000003B;
	Global_A677[0x000000D7 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000D7 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000D7 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000D7 /*12*/].f_5[0x00000000 /*4*/] = 0x00000244;
	Global_A677[0x000000D7 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000D8;
	Global_A677[0x000000D7 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000D7 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000D8 /*12*/] = 0x00000237;
	Global_A677[0x000000D8 /*12*/].f_1 = 0x00000238;
	Global_A677[0x000000D8 /*12*/].f_2 = 0x0000003B;
	Global_A677[0x000000D8 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000D8 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000D8 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000D8 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000D8 /*12*/].f_5[0x00000000 /*4*/] = 0x00000245;
	Global_A677[0x000000D8 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000D9;
	Global_A677[0x000000D8 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000D8 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000D9 /*12*/] = 0x00000239;
	Global_A677[0x000000D9 /*12*/].f_1 = 0x0000023A;
	Global_A677[0x000000D9 /*12*/].f_2 = 0x00000000;
	Global_A677[0x000000D9 /*12*/].f_3 = 0x0000003B;
	Global_A677[0x000000D9 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000D9 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000D9 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000D9 /*12*/].f_5[0x00000000 /*4*/] = 0x00000246;
	Global_A677[0x000000D9 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000DA;
	Global_A677[0x000000D9 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000D9 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000DA /*12*/] = 0x0000023B;
	Global_A677[0x000000DA /*12*/].f_1 = 0x0000023C;
	Global_A677[0x000000DA /*12*/].f_2 = 0x0000003B;
	Global_A677[0x000000DA /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000DA /*12*/].f_A = 0x00000001;
	Global_A677[0x000000DA /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000DA /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000DA /*12*/].f_5[0x00000000 /*4*/] = 0x00000247;
	Global_A677[0x000000DA /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000DB;
	Global_A677[0x000000DA /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000DA /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000DB /*12*/] = 0x0000023D;
	Global_A677[0x000000DB /*12*/].f_1 = 0x0000023E;
	Global_A677[0x000000DB /*12*/].f_2 = 0x00000000;
	Global_A677[0x000000DB /*12*/].f_3 = 0x0000003B;
	Global_A677[0x000000DB /*12*/].f_A = 0x00000000;
	Global_A677[0x000000DB /*12*/].f_B = 0x00000000;
	Global_A677[0x000000DB /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000DB /*12*/].f_5[0x00000000 /*4*/] = 0x00000248;
	Global_A677[0x000000DB /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000DC;
	Global_A677[0x000000DB /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000DB /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000DC /*12*/] = 0x0000023F;
	Global_A677[0x000000DC /*12*/].f_1 = 0x00000240;
	Global_A677[0x000000DC /*12*/].f_2 = 0x0000003B;
	Global_A677[0x000000DC /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000DC /*12*/].f_A = 0x00000001;
	Global_A677[0x000000DC /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000DC /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000DC /*12*/].f_5[0x00000000 /*4*/] = 0x00000249;
	Global_A677[0x000000DC /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000DD;
	Global_A677[0x000000DC /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000DC /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000DD /*12*/] = 0x00000241;
	Global_A677[0x000000DD /*12*/].f_1 = 0x00000242;
	Global_A677[0x000000DD /*12*/].f_2 = 0x00000000;
	Global_A677[0x000000DD /*12*/].f_3 = 0x0000003B;
	Global_A677[0x000000DD /*12*/].f_A = 0x00000000;
	Global_A677[0x000000DD /*12*/].f_B = 0x00000000;
	Global_A677[0x000000DD /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000DE /*12*/] = 0x0000024A;
	Global_A677[0x000000DE /*12*/].f_1 = 0x0000024B;
	Global_A677[0x000000DE /*12*/].f_2 = 0x0000003C;
	Global_A677[0x000000DE /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000DE /*12*/].f_A = 0x00000001;
	Global_A677[0x000000DE /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000DE /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000DE /*12*/].f_5[0x00000000 /*4*/] = 0x00000258;
	Global_A677[0x000000DE /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000DF;
	Global_A677[0x000000DE /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000DE /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000DF /*12*/] = 0x0000024C;
	Global_A677[0x000000DF /*12*/].f_1 = 0x0000024D;
	Global_A677[0x000000DF /*12*/].f_2 = 0x00000002;
	Global_A677[0x000000DF /*12*/].f_3 = 0x0000003C;
	Global_A677[0x000000DF /*12*/].f_A = 0x00000000;
	Global_A677[0x000000DF /*12*/].f_B = 0x00000000;
	Global_A677[0x000000DF /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000DF /*12*/].f_5[0x00000000 /*4*/] = 0x00000259;
	Global_A677[0x000000DF /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000E0;
	Global_A677[0x000000DF /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000DF /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000E0 /*12*/] = 0x0000024E;
	Global_A677[0x000000E0 /*12*/].f_1 = 0x0000024F;
	Global_A677[0x000000E0 /*12*/].f_2 = 0x0000003C;
	Global_A677[0x000000E0 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000E0 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000E0 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000E0 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000E0 /*12*/].f_5[0x00000000 /*4*/] = 0x0000025A;
	Global_A677[0x000000E0 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000E1;
	Global_A677[0x000000E0 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000E0 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000E1 /*12*/] = 0x00000250;
	Global_A677[0x000000E1 /*12*/].f_1 = 0x00000251;
	Global_A677[0x000000E1 /*12*/].f_2 = 0x00000002;
	Global_A677[0x000000E1 /*12*/].f_3 = 0x0000003C;
	Global_A677[0x000000E1 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000E1 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000E1 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000E1 /*12*/].f_5[0x00000000 /*4*/] = 0x0000025B;
	Global_A677[0x000000E1 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000E2;
	Global_A677[0x000000E1 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000E1 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000E2 /*12*/] = 0x00000252;
	Global_A677[0x000000E2 /*12*/].f_1 = 0x00000253;
	Global_A677[0x000000E2 /*12*/].f_2 = 0x0000003C;
	Global_A677[0x000000E2 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000E2 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000E2 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000E2 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000E2 /*12*/].f_5[0x00000000 /*4*/] = 0x0000025C;
	Global_A677[0x000000E2 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000E3;
	Global_A677[0x000000E2 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000E2 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000E3 /*12*/] = 0x00000254;
	Global_A677[0x000000E3 /*12*/].f_1 = 0x00000255;
	Global_A677[0x000000E3 /*12*/].f_2 = 0x00000002;
	Global_A677[0x000000E3 /*12*/].f_3 = 0x0000003C;
	Global_A677[0x000000E3 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000E3 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000E3 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000E3 /*12*/].f_5[0x00000000 /*4*/] = 0x0000025D;
	Global_A677[0x000000E3 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000E4;
	Global_A677[0x000000E3 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000E3 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000E4 /*12*/] = 0x00000256;
	Global_A677[0x000000E4 /*12*/].f_1 = 0x00000257;
	Global_A677[0x000000E4 /*12*/].f_2 = 0x00000002;
	Global_A677[0x000000E4 /*12*/].f_3 = 0x0000003C;
	Global_A677[0x000000E4 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000E4 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000E4 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000E5 /*12*/] = 0x0000025E;
	Global_A677[0x000000E5 /*12*/].f_1 = 0x0000025F;
	Global_A677[0x000000E5 /*12*/].f_2 = 0x0000003D;
	Global_A677[0x000000E5 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000E5 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000E5 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000E5 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000E5 /*12*/].f_5[0x00000000 /*4*/] = 0x00000262;
	Global_A677[0x000000E5 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000E6;
	Global_A677[0x000000E5 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000E5 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000E6 /*12*/] = 0x00000260;
	Global_A677[0x000000E6 /*12*/].f_1 = 0x00000261;
	Global_A677[0x000000E6 /*12*/].f_2 = 0x00000002;
	Global_A677[0x000000E6 /*12*/].f_3 = 0x0000003D;
	Global_A677[0x000000E6 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000E6 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000E6 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000E6 /*12*/].f_5[0x00000000 /*4*/] = 0x00000269;
	Global_A677[0x000000E6 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000E7;
	Global_A677[0x000000E6 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000E6 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000E7 /*12*/] = 0x00000263;
	Global_A677[0x000000E7 /*12*/].f_1 = 0x00000264;
	Global_A677[0x000000E7 /*12*/].f_2 = 0x0000003D;
	Global_A677[0x000000E7 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000E7 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000E7 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000E7 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000E7 /*12*/].f_5[0x00000000 /*4*/] = 0x0000026A;
	Global_A677[0x000000E7 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000E8;
	Global_A677[0x000000E7 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000E7 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000E8 /*12*/] = 0x00000265;
	Global_A677[0x000000E8 /*12*/].f_1 = 0x00000266;
	Global_A677[0x000000E8 /*12*/].f_2 = 0x00000002;
	Global_A677[0x000000E8 /*12*/].f_3 = 0x0000003D;
	Global_A677[0x000000E8 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000E8 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000E8 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000E8 /*12*/].f_5[0x00000000 /*4*/] = 0x0000026B;
	Global_A677[0x000000E8 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000E9;
	Global_A677[0x000000E8 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000E8 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000E9 /*12*/] = 0x00000267;
	Global_A677[0x000000E9 /*12*/].f_1 = 0x00000268;
	Global_A677[0x000000E9 /*12*/].f_2 = 0x0000003D;
	Global_A677[0x000000E9 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000E9 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000E9 /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000E9 /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000E9 /*12*/].f_5[0x00000000 /*4*/] = 0x0000026E;
	Global_A677[0x000000E9 /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000EA;
	Global_A677[0x000000E9 /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000E9 /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000EA /*12*/] = 0x0000026C;
	Global_A677[0x000000EA /*12*/].f_1 = 0x0000026D;
	Global_A677[0x000000EA /*12*/].f_2 = 0x00000002;
	Global_A677[0x000000EA /*12*/].f_3 = 0x0000003D;
	Global_A677[0x000000EA /*12*/].f_A = 0x00000000;
	Global_A677[0x000000EA /*12*/].f_B = 0x00000000;
	Global_A677[0x000000EA /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000EB /*12*/] = 0x0000026F;
	Global_A677[0x000000EB /*12*/].f_1 = 0x00000270;
	Global_A677[0x000000EB /*12*/].f_2 = 0x0000003E;
	Global_A677[0x000000EB /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000EB /*12*/].f_A = 0x00000001;
	Global_A677[0x000000EB /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000EB /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000EB /*12*/].f_5[0x00000000 /*4*/] = 0x0000027B;
	Global_A677[0x000000EB /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000EC;
	Global_A677[0x000000EB /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000EB /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000EC /*12*/] = 0x00000271;
	Global_A677[0x000000EC /*12*/].f_1 = 0x00000272;
	Global_A677[0x000000EC /*12*/].f_2 = 0x00000002;
	Global_A677[0x000000EC /*12*/].f_3 = 0x0000003E;
	Global_A677[0x000000EC /*12*/].f_A = 0x00000000;
	Global_A677[0x000000EC /*12*/].f_B = 0x00000000;
	Global_A677[0x000000EC /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000EC /*12*/].f_5[0x00000000 /*4*/] = 0x0000027C;
	Global_A677[0x000000EC /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000ED;
	Global_A677[0x000000EC /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000EC /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000ED /*12*/] = 0x00000273;
	Global_A677[0x000000ED /*12*/].f_1 = 0x00000274;
	Global_A677[0x000000ED /*12*/].f_2 = 0x0000003E;
	Global_A677[0x000000ED /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000ED /*12*/].f_A = 0x00000001;
	Global_A677[0x000000ED /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000ED /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000ED /*12*/].f_5[0x00000000 /*4*/] = 0x0000027D;
	Global_A677[0x000000ED /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000EE;
	Global_A677[0x000000ED /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000ED /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000EE /*12*/] = 0x00000275;
	Global_A677[0x000000EE /*12*/].f_1 = 0x00000276;
	Global_A677[0x000000EE /*12*/].f_2 = 0x00000002;
	Global_A677[0x000000EE /*12*/].f_3 = 0x0000003E;
	Global_A677[0x000000EE /*12*/].f_A = 0x00000000;
	Global_A677[0x000000EE /*12*/].f_B = 0x00000000;
	Global_A677[0x000000EE /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000EE /*12*/].f_5[0x00000000 /*4*/] = 0x0000027E;
	Global_A677[0x000000EE /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000EF;
	Global_A677[0x000000EE /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000EE /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000EF /*12*/] = 0x00000277;
	Global_A677[0x000000EF /*12*/].f_1 = 0x00000278;
	Global_A677[0x000000EF /*12*/].f_2 = 0x0000003E;
	Global_A677[0x000000EF /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000EF /*12*/].f_A = 0x00000001;
	Global_A677[0x000000EF /*12*/].f_B = 0x0000EA60;
	Global_A677[0x000000EF /*12*/].f_4 = 0x00000001;
	Global_A677[0x000000EF /*12*/].f_5[0x00000000 /*4*/] = 0x0000027F;
	Global_A677[0x000000EF /*12*/].f_5[0x00000000 /*4*/].f_1 = 0x000000F0;
	Global_A677[0x000000EF /*12*/].f_5[0x00000000 /*4*/].f_2 = 0x00000000;
	Global_A677[0x000000EF /*12*/].f_5[0x00000000 /*4*/].f_3 = 0xFFFFFFFF;
	Global_A677[0x000000F0 /*12*/] = 0x00000279;
	Global_A677[0x000000F0 /*12*/].f_1 = 0x0000027A;
	Global_A677[0x000000F0 /*12*/].f_2 = 0x00000002;
	Global_A677[0x000000F0 /*12*/].f_3 = 0x0000003E;
	Global_A677[0x000000F0 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000F0 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000F0 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000F1 /*12*/] = 0x00000286;
	Global_A677[0x000000F1 /*12*/].f_1 = 0x00000287;
	Global_A677[0x000000F1 /*12*/].f_2 = 0x00000024;
	Global_A677[0x000000F1 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000F1 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000F1 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000F1 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000F2 /*12*/] = 0x00000288;
	Global_A677[0x000000F2 /*12*/].f_1 = 0x00000289;
	Global_A677[0x000000F2 /*12*/].f_2 = 0x00000024;
	Global_A677[0x000000F2 /*12*/].f_3 = 0x00000000;
	Global_A677[0x000000F2 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000F2 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000F2 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000F3 /*12*/] = 0x0000028A;
	Global_A677[0x000000F3 /*12*/].f_1 = 0x0000028B;
	Global_A677[0x000000F3 /*12*/].f_2 = 0x00000024;
	Global_A677[0x000000F3 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000F3 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000F3 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000F3 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000F4 /*12*/] = 0x0000028F;
	Global_A677[0x000000F4 /*12*/].f_1 = 0x00000290;
	Global_A677[0x000000F4 /*12*/].f_2 = 0x00000041;
	Global_A677[0x000000F4 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000F4 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000F4 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000F4 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000F5 /*12*/] = 0x00000291;
	Global_A677[0x000000F5 /*12*/].f_1 = 0x00000292;
	Global_A677[0x000000F5 /*12*/].f_2 = 0x00000041;
	Global_A677[0x000000F5 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000F5 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000F5 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000F5 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000F6 /*12*/] = 0x00000293;
	Global_A677[0x000000F6 /*12*/].f_1 = 0x00000294;
	Global_A677[0x000000F6 /*12*/].f_2 = 0x00000041;
	Global_A677[0x000000F6 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000F6 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000F6 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000F6 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000F7 /*12*/] = 0x00000295;
	Global_A677[0x000000F7 /*12*/].f_1 = 0x00000296;
	Global_A677[0x000000F7 /*12*/].f_2 = 0x00000041;
	Global_A677[0x000000F7 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000F7 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000F7 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000F7 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000F8 /*12*/] = 0x00000297;
	Global_A677[0x000000F8 /*12*/].f_1 = 0x00000298;
	Global_A677[0x000000F8 /*12*/].f_2 = 0x00000021;
	Global_A677[0x000000F8 /*12*/].f_3 = 0x00000002;
	Global_A677[0x000000F8 /*12*/].f_A = 0x00000000;
	Global_A677[0x000000F8 /*12*/].f_B = 0x00009C40;
	Global_A677[0x000000F8 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000F9 /*12*/] = 0x00000299;
	Global_A677[0x000000F9 /*12*/].f_1 = 0x0000029A;
	Global_A677[0x000000F9 /*12*/].f_2 = 0x00000013;
	Global_A677[0x000000F9 /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000F9 /*12*/].f_A = 0x00000001;
	Global_A677[0x000000F9 /*12*/].f_B = 0x00000000;
	Global_A677[0x000000F9 /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000FA /*12*/] = 0x0000029B;
	Global_A677[0x000000FA /*12*/].f_1 = 0x0000029C;
	Global_A677[0x000000FA /*12*/].f_2 = 0x00000013;
	Global_A677[0x000000FA /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000FA /*12*/].f_A = 0x00000001;
	Global_A677[0x000000FA /*12*/].f_B = 0x00000000;
	Global_A677[0x000000FA /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000FB /*12*/] = 0x0000029D;
	Global_A677[0x000000FB /*12*/].f_1 = 0x0000029E;
	Global_A677[0x000000FB /*12*/].f_2 = 0x00000013;
	Global_A677[0x000000FB /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000FB /*12*/].f_A = 0x00000001;
	Global_A677[0x000000FB /*12*/].f_B = 0x00000000;
	Global_A677[0x000000FB /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000FC /*12*/] = 0x0000029F;
	Global_A677[0x000000FC /*12*/].f_1 = 0x000002A0;
	Global_A677[0x000000FC /*12*/].f_2 = 0x00000013;
	Global_A677[0x000000FC /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000FC /*12*/].f_A = 0x00000001;
	Global_A677[0x000000FC /*12*/].f_B = 0x00000000;
	Global_A677[0x000000FC /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000FD /*12*/] = 0x000002A1;
	Global_A677[0x000000FD /*12*/].f_1 = 0x000002A2;
	Global_A677[0x000000FD /*12*/].f_2 = 0x00000013;
	Global_A677[0x000000FD /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000FD /*12*/].f_A = 0x00000001;
	Global_A677[0x000000FD /*12*/].f_B = 0x00000000;
	Global_A677[0x000000FD /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000FE /*12*/] = 0x000002A3;
	Global_A677[0x000000FE /*12*/].f_1 = 0x000002A4;
	Global_A677[0x000000FE /*12*/].f_2 = 0x00000013;
	Global_A677[0x000000FE /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000FE /*12*/].f_A = 0x00000001;
	Global_A677[0x000000FE /*12*/].f_B = 0x00000000;
	Global_A677[0x000000FE /*12*/].f_4 = 0x00000000;
	Global_A677[0x000000FF /*12*/] = 0x000002A7;
	Global_A677[0x000000FF /*12*/].f_1 = 0x000002A8;
	Global_A677[0x000000FF /*12*/].f_2 = 0x00000013;
	Global_A677[0x000000FF /*12*/].f_3 = 0x00000001;
	Global_A677[0x000000FF /*12*/].f_A = 0x00000001;
	Global_A677[0x000000FF /*12*/].f_B = 0x00000000;
	Global_A677[0x000000FF /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000100 /*12*/] = 0x000002A5;
	Global_A677[0x00000100 /*12*/].f_1 = 0x000002A6;
	Global_A677[0x00000100 /*12*/].f_2 = 0x00000013;
	Global_A677[0x00000100 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000100 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000100 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000100 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000101 /*12*/] = 0x000002A9;
	Global_A677[0x00000101 /*12*/].f_1 = 0x000002AA;
	Global_A677[0x00000101 /*12*/].f_2 = 0x00000013;
	Global_A677[0x00000101 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000101 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000101 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000101 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000102 /*12*/] = 0x000002AB;
	Global_A677[0x00000102 /*12*/].f_1 = 0x000002AC;
	Global_A677[0x00000102 /*12*/].f_2 = 0x00000013;
	Global_A677[0x00000102 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000102 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000102 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000102 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000103 /*12*/] = 0x000002AD;
	Global_A677[0x00000103 /*12*/].f_1 = 0x000002AE;
	Global_A677[0x00000103 /*12*/].f_2 = 0x00000013;
	Global_A677[0x00000103 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000103 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000103 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000103 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000104 /*12*/] = 0x000002AF;
	Global_A677[0x00000104 /*12*/].f_1 = 0x000002B0;
	Global_A677[0x00000104 /*12*/].f_2 = 0x00000013;
	Global_A677[0x00000104 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000104 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000104 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000104 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000105 /*12*/] = 0x000002B3;
	Global_A677[0x00000105 /*12*/].f_1 = 0x000002B4;
	Global_A677[0x00000105 /*12*/].f_2 = 0x00000013;
	Global_A677[0x00000105 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000105 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000105 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000105 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000106 /*12*/] = 0x000002B1;
	Global_A677[0x00000106 /*12*/].f_1 = 0x000002B2;
	Global_A677[0x00000106 /*12*/].f_2 = 0x00000013;
	Global_A677[0x00000106 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000106 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000106 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000106 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000107 /*12*/] = 0x000002B5;
	Global_A677[0x00000107 /*12*/].f_1 = 0x000002B6;
	Global_A677[0x00000107 /*12*/].f_2 = 0x00000013;
	Global_A677[0x00000107 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000107 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000107 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000107 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000108 /*12*/] = 0x000002B7;
	Global_A677[0x00000108 /*12*/].f_1 = 0x000002B8;
	Global_A677[0x00000108 /*12*/].f_2 = 0x00000013;
	Global_A677[0x00000108 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000108 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000108 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000108 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000109 /*12*/] = 0x000002B9;
	Global_A677[0x00000109 /*12*/].f_1 = 0x000002BA;
	Global_A677[0x00000109 /*12*/].f_2 = 0x00000013;
	Global_A677[0x00000109 /*12*/].f_3 = 0x00000001;
	Global_A677[0x00000109 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000109 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000109 /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000010A /*12*/] = 0x000002BB;
	Global_A677[0x0000010A /*12*/].f_1 = 0x000002BC;
	Global_A677[0x0000010A /*12*/].f_2 = 0x00000013;
	Global_A677[0x0000010A /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000010A /*12*/].f_A = 0x00000001;
	Global_A677[0x0000010A /*12*/].f_B = 0x00000000;
	Global_A677[0x0000010A /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000010B /*12*/] = 0x000002BD;
	Global_A677[0x0000010B /*12*/].f_1 = 0x000002BE;
	Global_A677[0x0000010B /*12*/].f_2 = 0x00000013;
	Global_A677[0x0000010B /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000010B /*12*/].f_A = 0x00000001;
	Global_A677[0x0000010B /*12*/].f_B = 0x00000000;
	Global_A677[0x0000010B /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000010C /*12*/] = 0x000002BF;
	Global_A677[0x0000010C /*12*/].f_1 = 0x000002C0;
	Global_A677[0x0000010C /*12*/].f_2 = 0x00000013;
	Global_A677[0x0000010C /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000010C /*12*/].f_A = 0x00000001;
	Global_A677[0x0000010C /*12*/].f_B = 0x00000000;
	Global_A677[0x0000010C /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000010D /*12*/] = 0x000002C1;
	Global_A677[0x0000010D /*12*/].f_1 = 0x000002C2;
	Global_A677[0x0000010D /*12*/].f_2 = 0x00000013;
	Global_A677[0x0000010D /*12*/].f_3 = 0x00000001;
	Global_A677[0x0000010D /*12*/].f_A = 0x00000001;
	Global_A677[0x0000010D /*12*/].f_B = 0x00000000;
	Global_A677[0x0000010D /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000010E /*12*/] = 0x000002C3;
	Global_A677[0x0000010E /*12*/].f_1 = 0x000002C4;
	Global_A677[0x0000010E /*12*/].f_2 = 0x00000010;
	Global_A677[0x0000010E /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000010E /*12*/].f_A = 0x00000001;
	Global_A677[0x0000010E /*12*/].f_B = 0x00000000;
	Global_A677[0x0000010E /*12*/].f_4 = 0x00000000;
	Global_A677[0x0000010F /*12*/] = 0x000002C5;
	Global_A677[0x0000010F /*12*/].f_1 = 0x000002C6;
	Global_A677[0x0000010F /*12*/].f_2 = 0x00000010;
	Global_A677[0x0000010F /*12*/].f_3 = 0x00000000;
	Global_A677[0x0000010F /*12*/].f_A = 0x00000001;
	Global_A677[0x0000010F /*12*/].f_B = 0x00000000;
	Global_A677[0x0000010F /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000110 /*12*/] = 0x000002C7;
	Global_A677[0x00000110 /*12*/].f_1 = 0x000002C8;
	Global_A677[0x00000110 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000110 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000110 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000110 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000110 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000111 /*12*/] = 0x000002C9;
	Global_A677[0x00000111 /*12*/].f_1 = 0x000002CA;
	Global_A677[0x00000111 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000111 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000111 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000111 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000111 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000112 /*12*/] = 0x000002CB;
	Global_A677[0x00000112 /*12*/].f_1 = 0x000002CC;
	Global_A677[0x00000112 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000112 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000112 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000112 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000112 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000113 /*12*/] = 0x000002CD;
	Global_A677[0x00000113 /*12*/].f_1 = 0x000002CE;
	Global_A677[0x00000113 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000113 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000113 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000113 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000113 /*12*/].f_4 = 0x00000000;
	Global_A677[0x00000114 /*12*/] = 0x000002CF;
	Global_A677[0x00000114 /*12*/].f_1 = 0x000002D0;
	Global_A677[0x00000114 /*12*/].f_2 = 0x00000010;
	Global_A677[0x00000114 /*12*/].f_3 = 0x00000000;
	Global_A677[0x00000114 /*12*/].f_A = 0x00000001;
	Global_A677[0x00000114 /*12*/].f_B = 0x00000000;
	Global_A677[0x00000114 /*12*/].f_4 = 0x00000000;
	Global_B374[0x00000000 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000000 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000000 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000000 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000000 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000000 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000000 /*46*/].f_3[0x00000001] = 0x00000004;
	Global_B374[0x00000000 /*46*/].f_1E = 0x00000008;
	Global_B374[0x00000000 /*46*/].f_8[0x00000000] = 0x00000000;
	Global_B374[0x00000000 /*46*/].f_8[0x00000001] = 0x00000001;
	Global_B374[0x00000000 /*46*/].f_8[0x00000002] = 0x00000002;
	Global_B374[0x00000000 /*46*/].f_8[0x00000003] = 0x00000003;
	Global_B374[0x00000000 /*46*/].f_8[0x00000004] = 0x00000004;
	Global_B374[0x00000000 /*46*/].f_8[0x00000005] = 0x00000005;
	Global_B374[0x00000000 /*46*/].f_8[0x00000006] = 0x00000006;
	Global_B374[0x00000000 /*46*/].f_8[0x00000007] = 0x00000009;
	Global_B374[0x00000001 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000001 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000001 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000001 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000001 /*46*/].f_2 = 0x00000003;
	Global_B374[0x00000001 /*46*/].f_3[0x00000000] = 0x00000005;
	Global_B374[0x00000001 /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x00000001 /*46*/].f_3[0x00000002] = 0x00000004;
	Global_B374[0x00000001 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000001 /*46*/].f_8[0x00000000] = 0x0000000A;
	Global_B374[0x00000001 /*46*/].f_8[0x00000001] = 0x0000000B;
	Global_B374[0x00000001 /*46*/].f_8[0x00000002] = 0x00000010;
	Global_B374[0x00000002 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000002 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000002 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000002 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000002 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000002 /*46*/].f_3[0x00000000] = 0x00000007;
	Global_B374[0x00000002 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000002 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000002 /*46*/].f_8[0x00000000] = 0x0000000C;
	Global_B374[0x00000003 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000003 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000003 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000003 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000003 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000003 /*46*/].f_3[0x00000000] = 0x00000007;
	Global_B374[0x00000003 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000003 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000003 /*46*/].f_8[0x00000000] = 0x0000000E;
	Global_B374[0x00000004 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000004 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000004 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000004 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000004 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000004 /*46*/].f_3[0x00000000] = 0x00000007;
	Global_B374[0x00000004 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000004 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000004 /*46*/].f_8[0x00000000] = 0x0000000D;
	Global_B374[0x00000005 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000005 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000005 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000005 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000005 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000005 /*46*/].f_3[0x00000000] = 0x00000007;
	Global_B374[0x00000005 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000005 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000005 /*46*/].f_8[0x00000000] = 0x0000000F;
	Global_B374[0x00000006 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000006 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000006 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000006 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000006 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000006 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000006 /*46*/].f_3[0x00000001] = 0x00000008;
	Global_B374[0x00000006 /*46*/].f_1E = 0x00000005;
	Global_B374[0x00000006 /*46*/].f_8[0x00000000] = 0x00000011;
	Global_B374[0x00000006 /*46*/].f_8[0x00000001] = 0x00000013;
	Global_B374[0x00000006 /*46*/].f_8[0x00000002] = 0x00000014;
	Global_B374[0x00000006 /*46*/].f_8[0x00000003] = 0x00000015;
	Global_B374[0x00000006 /*46*/].f_8[0x00000004] = 0x00000016;
	Global_B374[0x00000007 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000007 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000007 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000007 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000007 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000007 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000007 /*46*/].f_3[0x00000001] = 0x00000009;
	Global_B374[0x00000007 /*46*/].f_1E = 0x00000005;
	Global_B374[0x00000007 /*46*/].f_8[0x00000000] = 0x00000012;
	Global_B374[0x00000007 /*46*/].f_8[0x00000001] = 0x00000018;
	Global_B374[0x00000007 /*46*/].f_8[0x00000002] = 0x00000019;
	Global_B374[0x00000007 /*46*/].f_8[0x00000003] = 0x0000001A;
	Global_B374[0x00000007 /*46*/].f_8[0x00000004] = 0x0000001B;
	Global_B374[0x00000008 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000008 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000008 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000008 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000008 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000008 /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x00000008 /*46*/].f_3[0x00000001] = 0x0000000A;
	Global_B374[0x00000008 /*46*/].f_1E = 0x00000004;
	Global_B374[0x00000008 /*46*/].f_8[0x00000000] = 0x00000017;
	Global_B374[0x00000008 /*46*/].f_8[0x00000001] = 0x0000001C;
	Global_B374[0x00000008 /*46*/].f_8[0x00000002] = 0x0000001D;
	Global_B374[0x00000008 /*46*/].f_8[0x00000003] = 0x0000001E;
	Global_B374[0x00000009 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000009 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000009 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000009 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000009 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000009 /*46*/].f_3[0x00000000] = 0x0000000B;
	Global_B374[0x00000009 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000009 /*46*/].f_8[0x00000000] = 0x0000001F;
	Global_B374[0x00000009 /*46*/].f_8[0x00000001] = 0x00000020;
	Global_B374[0x00000009 /*46*/].f_8[0x00000002] = 0x00000021;
	Global_B374[0x0000000A /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000000A /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000000A /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000000A /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000000A /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000000A /*46*/].f_3[0x00000000] = 0x0000000D;
	Global_B374[0x0000000A /*46*/].f_1E = 0x00000003;
	Global_B374[0x0000000A /*46*/].f_8[0x00000000] = 0x00000022;
	Global_B374[0x0000000A /*46*/].f_8[0x00000001] = 0x00000023;
	Global_B374[0x0000000A /*46*/].f_8[0x00000002] = 0x00000024;
	Global_B374[0x0000000B /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000000B /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000000B /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000000B /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000000B /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000000B /*46*/].f_3[0x00000000] = 0x0000000E;
	Global_B374[0x0000000B /*46*/].f_1E = 0x00000003;
	Global_B374[0x0000000B /*46*/].f_8[0x00000000] = 0x00000025;
	Global_B374[0x0000000B /*46*/].f_8[0x00000001] = 0x00000026;
	Global_B374[0x0000000B /*46*/].f_8[0x00000002] = 0x00000027;
	Global_B374[0x0000000C /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000000C /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000000C /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000000C /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000000C /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000000C /*46*/].f_3[0x00000000] = 0x0000000C;
	Global_B374[0x0000000C /*46*/].f_1E = 0x00000006;
	Global_B374[0x0000000C /*46*/].f_8[0x00000000] = 0x00000028;
	Global_B374[0x0000000C /*46*/].f_8[0x00000001] = 0x00000029;
	Global_B374[0x0000000C /*46*/].f_8[0x00000002] = 0x0000002A;
	Global_B374[0x0000000C /*46*/].f_8[0x00000003] = 0x000000BF;
	Global_B374[0x0000000C /*46*/].f_8[0x00000004] = 0x000000C0;
	Global_B374[0x0000000C /*46*/].f_8[0x00000005] = 0x000000C1;
	Global_B374[0x0000000D /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000000D /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000000D /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000000D /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000000D /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000000D /*46*/].f_3[0x00000000] = 0x00000007;
	Global_B374[0x0000000D /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x0000000D /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000000D /*46*/].f_8[0x00000000] = 0x0000002B;
	Global_B374[0x0000000E /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000000E /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000000E /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000000E /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000000E /*46*/].f_2 = 0x00000004;
	Global_B374[0x0000000E /*46*/].f_3[0x00000000] = 0x0000000F;
	Global_B374[0x0000000E /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x0000000E /*46*/].f_3[0x00000002] = 0x00000001;
	Global_B374[0x0000000E /*46*/].f_3[0x00000003] = 0x00000002;
	Global_B374[0x0000000E /*46*/].f_1E = 0x00000003;
	Global_B374[0x0000000E /*46*/].f_8[0x00000000] = 0x0000002C;
	Global_B374[0x0000000E /*46*/].f_8[0x00000001] = 0x0000002D;
	Global_B374[0x0000000E /*46*/].f_8[0x00000002] = 0x0000002E;
	Global_B374[0x0000000F /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000000F /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000000F /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000000F /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000000F /*46*/].f_2 = 0x00000004;
	Global_B374[0x0000000F /*46*/].f_3[0x00000000] = 0x00000010;
	Global_B374[0x0000000F /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x0000000F /*46*/].f_3[0x00000002] = 0x00000001;
	Global_B374[0x0000000F /*46*/].f_3[0x00000003] = 0x00000002;
	Global_B374[0x0000000F /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000000F /*46*/].f_8[0x00000000] = 0x0000002F;
	Global_B374[0x00000010 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000010 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000010 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000010 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000010 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000010 /*46*/].f_3[0x00000000] = 0x00000010;
	Global_B374[0x00000010 /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x00000010 /*46*/].f_3[0x00000002] = 0x00000001;
	Global_B374[0x00000010 /*46*/].f_3[0x00000003] = 0x00000002;
	Global_B374[0x00000010 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000010 /*46*/].f_8[0x00000000] = 0x00000030;
	Global_B374[0x00000011 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000011 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000011 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000011 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000011 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000011 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000011 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000011 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000011 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000011 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000011 /*46*/].f_8[0x00000000] = 0x00000031;
	Global_B374[0x00000012 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000012 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000012 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000012 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000012 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000012 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000012 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000012 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000012 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000012 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000012 /*46*/].f_8[0x00000000] = 0x00000032;
	Global_B374[0x00000013 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000013 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000013 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000013 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000013 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000013 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000013 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000013 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000013 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000013 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000013 /*46*/].f_8[0x00000000] = 0x00000033;
	Global_B374[0x00000014 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000014 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000014 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000014 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000014 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000014 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000014 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000014 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000014 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000014 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000014 /*46*/].f_8[0x00000000] = 0x00000034;
	Global_B374[0x00000015 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000015 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000015 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000015 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000015 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000015 /*46*/].f_3[0x00000000] = 0x00000010;
	Global_B374[0x00000015 /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x00000015 /*46*/].f_3[0x00000002] = 0x00000001;
	Global_B374[0x00000015 /*46*/].f_3[0x00000003] = 0x00000002;
	Global_B374[0x00000015 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000015 /*46*/].f_8[0x00000000] = 0x00000035;
	Global_B374[0x00000016 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000016 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000016 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000016 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000016 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000016 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000016 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000016 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000016 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000016 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000016 /*46*/].f_8[0x00000000] = 0x00000036;
	Global_B374[0x00000017 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000017 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000017 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000017 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000017 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000017 /*46*/].f_3[0x00000000] = 0x0000000C;
	Global_B374[0x00000017 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000017 /*46*/].f_8[0x00000000] = 0x00000037;
	Global_B374[0x00000017 /*46*/].f_8[0x00000001] = 0x0000003A;
	Global_B374[0x00000017 /*46*/].f_8[0x00000002] = 0x0000003B;
	Global_B374[0x00000018 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000018 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000018 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000018 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000018 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000018 /*46*/].f_3[0x00000000] = 0x0000000E;
	Global_B374[0x00000018 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000018 /*46*/].f_8[0x00000000] = 0x00000038;
	Global_B374[0x00000018 /*46*/].f_8[0x00000001] = 0x0000003C;
	Global_B374[0x00000018 /*46*/].f_8[0x00000002] = 0x0000003D;
	Global_B374[0x00000019 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000019 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000019 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000019 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000019 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000019 /*46*/].f_3[0x00000000] = 0x0000000C;
	Global_B374[0x00000019 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000019 /*46*/].f_8[0x00000000] = 0x00000039;
	Global_B374[0x00000019 /*46*/].f_8[0x00000001] = 0x0000003E;
	Global_B374[0x00000019 /*46*/].f_8[0x00000002] = 0x0000003F;
	Global_B374[0x0000001A /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000001A /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000001A /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000001A /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000001A /*46*/].f_2 = 0x00000004;
	Global_B374[0x0000001A /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x0000001A /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x0000001A /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x0000001A /*46*/].f_3[0x00000003] = 0x00000014;
	Global_B374[0x0000001A /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000001A /*46*/].f_8[0x00000000] = 0x00000040;
	Global_B374[0x0000001B /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000001B /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000001B /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000001B /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000001B /*46*/].f_2 = 0x00000004;
	Global_B374[0x0000001B /*46*/].f_3[0x00000000] = 0x00000011;
	Global_B374[0x0000001B /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x0000001B /*46*/].f_3[0x00000002] = 0x00000001;
	Global_B374[0x0000001B /*46*/].f_3[0x00000003] = 0x00000002;
	Global_B374[0x0000001B /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000001B /*46*/].f_8[0x00000000] = 0x00000042;
	Global_B374[0x0000001C /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000001C /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000001C /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000001C /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000001C /*46*/].f_2 = 0x00000004;
	Global_B374[0x0000001C /*46*/].f_3[0x00000000] = 0x00000012;
	Global_B374[0x0000001C /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x0000001C /*46*/].f_3[0x00000002] = 0x00000001;
	Global_B374[0x0000001C /*46*/].f_3[0x00000003] = 0x00000002;
	Global_B374[0x0000001C /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000001C /*46*/].f_8[0x00000000] = 0x00000041;
	Global_B374[0x0000001D /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000001D /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000001D /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000001D /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000001D /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000001D /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x0000001D /*46*/].f_3[0x00000001] = 0x0000003F;
	Global_B374[0x0000001D /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000001D /*46*/].f_8[0x00000000] = 0x00000043;
	Global_B374[0x0000001E /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000001E /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000001E /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000001E /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000001E /*46*/].f_2 = 0x00000003;
	Global_B374[0x0000001E /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x0000001E /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x0000001E /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x0000001E /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000001E /*46*/].f_8[0x00000000] = 0x00000044;
	Global_B374[0x0000001F /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000001F /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000001F /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000001F /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000001F /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000001F /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x0000001F /*46*/].f_3[0x00000001] = 0x00000040;
	Global_B374[0x0000001F /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000001F /*46*/].f_8[0x00000000] = 0x00000045;
	Global_B374[0x00000020 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000020 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000020 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000020 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000020 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000020 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000020 /*46*/].f_3[0x00000001] = 0x00000040;
	Global_B374[0x00000020 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000020 /*46*/].f_8[0x00000000] = 0x00000046;
	Global_B374[0x00000021 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000021 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000021 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000021 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000021 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000021 /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x00000021 /*46*/].f_3[0x00000001] = 0x00000040;
	Global_B374[0x00000021 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000021 /*46*/].f_8[0x00000000] = 0x00000047;
	Global_B374[0x00000022 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000022 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000022 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000022 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000022 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000022 /*46*/].f_3[0x00000000] = 0x00000015;
	Global_B374[0x00000022 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000022 /*46*/].f_8[0x00000000] = 0x00000048;
	Global_B374[0x00000023 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000023 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000023 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000023 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000023 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000023 /*46*/].f_3[0x00000000] = 0x00000015;
	Global_B374[0x00000023 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000023 /*46*/].f_8[0x00000000] = 0x00000049;
	Global_B374[0x00000024 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000024 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000024 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000024 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000024 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000024 /*46*/].f_3[0x00000000] = 0x00000015;
	Global_B374[0x00000024 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000024 /*46*/].f_8[0x00000000] = 0x0000004A;
	Global_B374[0x00000025 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000025 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000025 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000025 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000025 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000025 /*46*/].f_3[0x00000000] = 0x00000006;
	Global_B374[0x00000025 /*46*/].f_3[0x00000001] = 0x00000002;
	Global_B374[0x00000025 /*46*/].f_1E = 0x00000009;
	Global_B374[0x00000025 /*46*/].f_8[0x00000000] = 0x0000004B;
	Global_B374[0x00000025 /*46*/].f_8[0x00000001] = 0x0000004C;
	Global_B374[0x00000025 /*46*/].f_8[0x00000002] = 0x0000004D;
	Global_B374[0x00000025 /*46*/].f_8[0x00000003] = 0x0000004E;
	Global_B374[0x00000025 /*46*/].f_8[0x00000004] = 0x0000004F;
	Global_B374[0x00000025 /*46*/].f_8[0x00000005] = 0x00000050;
	Global_B374[0x00000025 /*46*/].f_8[0x00000006] = 0x00000051;
	Global_B374[0x00000025 /*46*/].f_8[0x00000007] = 0x00000052;
	Global_B374[0x00000025 /*46*/].f_8[0x00000008] = 0x00000053;
	Global_B374[0x00000026 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000026 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000026 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000026 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000026 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000026 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000026 /*46*/].f_3[0x00000001] = 0x00000004;
	Global_B374[0x00000026 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000026 /*46*/].f_8[0x00000000] = 0x00000054;
	Global_B374[0x00000027 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000027 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000027 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000027 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000027 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000027 /*46*/].f_3[0x00000000] = 0x00000016;
	Global_B374[0x00000027 /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x00000027 /*46*/].f_3[0x00000002] = 0x00000001;
	Global_B374[0x00000027 /*46*/].f_3[0x00000003] = 0x00000002;
	Global_B374[0x00000027 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000027 /*46*/].f_8[0x00000000] = 0x00000055;
	Global_B374[0x00000028 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000028 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000028 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000028 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000028 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000028 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000028 /*46*/].f_3[0x00000001] = 0x00000018;
	Global_B374[0x00000028 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000028 /*46*/].f_8[0x00000000] = 0x00000056;
	Global_B374[0x00000028 /*46*/].f_8[0x00000001] = 0x00000057;
	Global_B374[0x00000028 /*46*/].f_8[0x00000002] = 0x00000058;
	Global_B374[0x00000029 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000029 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000029 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000029 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000029 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000029 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000029 /*46*/].f_3[0x00000001] = 0x00000018;
	Global_B374[0x00000029 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000029 /*46*/].f_8[0x00000000] = 0x00000059;
	Global_B374[0x00000029 /*46*/].f_8[0x00000001] = 0x0000005A;
	Global_B374[0x00000029 /*46*/].f_8[0x00000002] = 0x0000005B;
	Global_B374[0x0000002A /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000002A /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000002A /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000002A /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000002A /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000002A /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x0000002A /*46*/].f_3[0x00000001] = 0x00000019;
	Global_B374[0x0000002A /*46*/].f_1E = 0x00000005;
	Global_B374[0x0000002A /*46*/].f_8[0x00000000] = 0x0000005C;
	Global_B374[0x0000002A /*46*/].f_8[0x00000001] = 0x0000005D;
	Global_B374[0x0000002A /*46*/].f_8[0x00000002] = 0x0000005E;
	Global_B374[0x0000002A /*46*/].f_8[0x00000003] = 0x0000005F;
	Global_B374[0x0000002A /*46*/].f_8[0x00000004] = 0x00000060;
	Global_B374[0x0000002B /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000002B /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000002B /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000002B /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000002B /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000002B /*46*/].f_3[0x00000000] = 0x0000001A;
	Global_B374[0x0000002B /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x0000002B /*46*/].f_1E = 0x00000002;
	Global_B374[0x0000002B /*46*/].f_8[0x00000000] = 0x00000061;
	Global_B374[0x0000002B /*46*/].f_8[0x00000001] = 0x00000062;
	Global_B374[0x0000002C /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000002C /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000002C /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000002C /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000002C /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000002C /*46*/].f_3[0x00000000] = 0x0000001B;
	Global_B374[0x0000002C /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x0000002C /*46*/].f_1E = 0x00000002;
	Global_B374[0x0000002C /*46*/].f_8[0x00000000] = 0x00000063;
	Global_B374[0x0000002C /*46*/].f_8[0x00000001] = 0x00000064;
	Global_B374[0x0000002D /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000002D /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000002D /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000002D /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000002D /*46*/].f_2 = 0x00000003;
	Global_B374[0x0000002D /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x0000002D /*46*/].f_3[0x00000001] = 0x00000002;
	Global_B374[0x0000002D /*46*/].f_3[0x00000002] = 0x0000001C;
	Global_B374[0x0000002D /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000002D /*46*/].f_8[0x00000000] = 0x00000065;
	Global_B374[0x0000002E /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000002E /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000002E /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000002E /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000002E /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000002E /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x0000002E /*46*/].f_3[0x00000001] = 0x0000001A;
	Global_B374[0x0000002E /*46*/].f_1E = 0x00000002;
	Global_B374[0x0000002E /*46*/].f_8[0x00000000] = 0x00000066;
	Global_B374[0x0000002E /*46*/].f_8[0x00000001] = 0x00000067;
	Global_B374[0x0000002F /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000002F /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000002F /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000002F /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000002F /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000002F /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x0000002F /*46*/].f_3[0x00000001] = 0x0000001D;
	Global_B374[0x0000002F /*46*/].f_1E = 0x00000002;
	Global_B374[0x0000002F /*46*/].f_8[0x00000000] = 0x00000068;
	Global_B374[0x0000002F /*46*/].f_8[0x00000001] = 0x00000069;
	Global_B374[0x00000030 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000030 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000030 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000030 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000030 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000030 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000030 /*46*/].f_3[0x00000001] = 0x0000001E;
	Global_B374[0x00000030 /*46*/].f_1E = 0x00000005;
	Global_B374[0x00000030 /*46*/].f_8[0x00000000] = 0x0000006A;
	Global_B374[0x00000030 /*46*/].f_8[0x00000001] = 0x0000006B;
	Global_B374[0x00000030 /*46*/].f_8[0x00000002] = 0x0000006C;
	Global_B374[0x00000030 /*46*/].f_8[0x00000003] = 0x0000006D;
	Global_B374[0x00000030 /*46*/].f_8[0x00000004] = 0x0000006E;
	Global_B374[0x00000031 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000031 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000031 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000031 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000031 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000031 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000031 /*46*/].f_3[0x00000001] = 0x0000001F;
	Global_B374[0x00000031 /*46*/].f_1E = 0x00000002;
	Global_B374[0x00000031 /*46*/].f_8[0x00000000] = 0x0000006F;
	Global_B374[0x00000031 /*46*/].f_8[0x00000001] = 0x00000070;
	Global_B374[0x00000032 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000032 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000032 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000032 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000032 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000032 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000032 /*46*/].f_3[0x00000001] = 0x00000020;
	Global_B374[0x00000032 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000032 /*46*/].f_8[0x00000000] = 0x00000071;
	Global_B374[0x00000032 /*46*/].f_8[0x00000001] = 0x00000072;
	Global_B374[0x00000032 /*46*/].f_8[0x00000002] = 0x00000073;
	Global_B374[0x00000033 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000033 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000033 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000033 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000033 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000033 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000033 /*46*/].f_3[0x00000001] = 0x00000020;
	Global_B374[0x00000033 /*46*/].f_1E = 0x00000002;
	Global_B374[0x00000033 /*46*/].f_8[0x00000000] = 0x00000074;
	Global_B374[0x00000033 /*46*/].f_8[0x00000001] = 0x00000075;
	Global_B374[0x00000034 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000034 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000034 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000034 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000034 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000034 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000034 /*46*/].f_3[0x00000001] = 0x00000020;
	Global_B374[0x00000034 /*46*/].f_1E = 0x00000002;
	Global_B374[0x00000034 /*46*/].f_8[0x00000000] = 0x00000076;
	Global_B374[0x00000034 /*46*/].f_8[0x00000001] = 0x00000077;
	Global_B374[0x00000035 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000035 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000035 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000035 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000035 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000035 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000035 /*46*/].f_3[0x00000001] = 0x00000020;
	Global_B374[0x00000035 /*46*/].f_1E = 0x00000004;
	Global_B374[0x00000035 /*46*/].f_8[0x00000000] = 0x00000078;
	Global_B374[0x00000035 /*46*/].f_8[0x00000001] = 0x00000079;
	Global_B374[0x00000035 /*46*/].f_8[0x00000002] = 0x0000007A;
	Global_B374[0x00000035 /*46*/].f_8[0x00000003] = 0x0000007B;
	Global_B374[0x00000036 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000036 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000036 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000036 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000036 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000036 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000036 /*46*/].f_3[0x00000001] = 0x0000001B;
	Global_B374[0x00000036 /*46*/].f_1E = 0x00000002;
	Global_B374[0x00000036 /*46*/].f_8[0x00000000] = 0x0000007C;
	Global_B374[0x00000036 /*46*/].f_8[0x00000001] = 0x0000007D;
	Global_B374[0x00000037 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000037 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000037 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000037 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000037 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000037 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000037 /*46*/].f_3[0x00000001] = 0x00000002;
	Global_B374[0x00000037 /*46*/].f_1E = 0x00000005;
	Global_B374[0x00000037 /*46*/].f_8[0x00000000] = 0x0000007E;
	Global_B374[0x00000037 /*46*/].f_8[0x00000001] = 0x0000007F;
	Global_B374[0x00000037 /*46*/].f_8[0x00000002] = 0x00000080;
	Global_B374[0x00000037 /*46*/].f_8[0x00000003] = 0x00000081;
	Global_B374[0x00000037 /*46*/].f_8[0x00000004] = 0x00000082;
	Global_B374[0x00000038 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000038 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000038 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000038 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000038 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000038 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000038 /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x00000038 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000038 /*46*/].f_8[0x00000000] = 0x00000083;
	Global_B374[0x00000038 /*46*/].f_8[0x00000001] = 0x00000084;
	Global_B374[0x00000038 /*46*/].f_8[0x00000002] = 0x00000085;
	Global_B374[0x00000039 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000039 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000039 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000039 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000039 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000039 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000039 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000039 /*46*/].f_1E = 0x00000002;
	Global_B374[0x00000039 /*46*/].f_8[0x00000000] = 0x00000086;
	Global_B374[0x00000039 /*46*/].f_8[0x00000001] = 0x00000087;
	Global_B374[0x0000003A /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000003A /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000003A /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000003A /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000003A /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000003A /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x0000003A /*46*/].f_3[0x00000001] = 0x00000021;
	Global_B374[0x0000003A /*46*/].f_1E = 0x00000002;
	Global_B374[0x0000003A /*46*/].f_8[0x00000000] = 0x00000088;
	Global_B374[0x0000003A /*46*/].f_8[0x00000001] = 0x00000089;
	Global_B374[0x0000003B /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000003B /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000003B /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000003B /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000003B /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000003B /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x0000003B /*46*/].f_3[0x00000001] = 0x00000021;
	Global_B374[0x0000003B /*46*/].f_1E = 0x00000003;
	Global_B374[0x0000003B /*46*/].f_8[0x00000000] = 0x0000008A;
	Global_B374[0x0000003B /*46*/].f_8[0x00000001] = 0x0000008B;
	Global_B374[0x0000003B /*46*/].f_8[0x00000002] = 0x000000F8;
	Global_B374[0x0000003C /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000003C /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000003C /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000003C /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000003C /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000003C /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x0000003C /*46*/].f_3[0x00000001] = 0x00000021;
	Global_B374[0x0000003C /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000003C /*46*/].f_8[0x00000000] = 0x0000008C;
	Global_B374[0x0000003D /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000003D /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000003D /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000003D /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000003D /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000003D /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x0000003D /*46*/].f_3[0x00000001] = 0x0000001D;
	Global_B374[0x0000003D /*46*/].f_1E = 0x00000002;
	Global_B374[0x0000003D /*46*/].f_8[0x00000000] = 0x0000008D;
	Global_B374[0x0000003D /*46*/].f_8[0x00000001] = 0x0000008E;
	Global_B374[0x0000003E /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000003E /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000003E /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000003E /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000003E /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000003E /*46*/].f_3[0x00000000] = 0x00000003;
	Global_B374[0x0000003E /*46*/].f_3[0x00000001] = 0x00000002;
	Global_B374[0x0000003E /*46*/].f_1E = 0x00000002;
	Global_B374[0x0000003E /*46*/].f_8[0x00000000] = 0x0000008F;
	Global_B374[0x0000003E /*46*/].f_8[0x00000001] = 0x00000090;
	Global_B374[0x0000003F /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000003F /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000003F /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000003F /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000003F /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000003F /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x0000003F /*46*/].f_3[0x00000001] = 0x00000022;
	Global_B374[0x0000003F /*46*/].f_1E = 0x00000002;
	Global_B374[0x0000003F /*46*/].f_8[0x00000000] = 0x00000091;
	Global_B374[0x0000003F /*46*/].f_8[0x00000001] = 0x00000092;
	Global_B374[0x00000040 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000040 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000040 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000040 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000040 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000040 /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x00000040 /*46*/].f_3[0x00000001] = 0x0000001A;
	Global_B374[0x00000040 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000040 /*46*/].f_8[0x00000000] = 0x00000093;
	Global_B374[0x00000041 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000041 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000041 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000041 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000041 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000041 /*46*/].f_3[0x00000000] = 0x00000023;
	Global_B374[0x00000041 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000041 /*46*/].f_8[0x00000000] = 0x00000094;
	Global_B374[0x00000041 /*46*/].f_8[0x00000001] = 0x00000095;
	Global_B374[0x00000041 /*46*/].f_8[0x00000002] = 0x00000096;
	Global_B374[0x00000042 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000042 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000042 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000042 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000042 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000042 /*46*/].f_3[0x00000000] = 0x00000024;
	Global_B374[0x00000042 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000042 /*46*/].f_8[0x00000000] = 0x00000097;
	Global_B374[0x00000042 /*46*/].f_8[0x00000001] = 0x00000098;
	Global_B374[0x00000042 /*46*/].f_8[0x00000002] = 0x00000099;
	Global_B374[0x00000043 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000043 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000043 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000043 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000043 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000043 /*46*/].f_3[0x00000000] = 0x00000004;
	Global_B374[0x00000043 /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x00000043 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000043 /*46*/].f_8[0x00000000] = 0x00000007;
	Global_B374[0x00000044 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000044 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000044 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000044 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000044 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000044 /*46*/].f_3[0x00000000] = 0x00000004;
	Global_B374[0x00000044 /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x00000044 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000044 /*46*/].f_8[0x00000000] = 0x00000008;
	Global_B374[0x00000045 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000045 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000045 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000045 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000045 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000045 /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x00000045 /*46*/].f_3[0x00000001] = 0x00000026;
	Global_B374[0x00000045 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000045 /*46*/].f_8[0x00000000] = 0x0000009A;
	Global_B374[0x00000046 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000046 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000046 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000046 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000046 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000046 /*46*/].f_3[0x00000000] = 0x0000000B;
	Global_B374[0x00000046 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000046 /*46*/].f_8[0x00000000] = 0x0000009B;
	Global_B374[0x00000046 /*46*/].f_8[0x00000001] = 0x0000009C;
	Global_B374[0x00000046 /*46*/].f_8[0x00000002] = 0x0000009D;
	Global_B374[0x00000047 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000047 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000047 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000047 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000047 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000047 /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x00000047 /*46*/].f_3[0x00000001] = 0x0000001D;
	Global_B374[0x00000047 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000047 /*46*/].f_8[0x00000000] = 0x0000009E;
	Global_B374[0x00000048 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000048 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000048 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000048 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000048 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000048 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000048 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000048 /*46*/].f_8[0x00000000] = 0x0000009F;
	Global_B374[0x00000049 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000049 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000049 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000049 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000049 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000049 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000049 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000049 /*46*/].f_8[0x00000000] = 0x000000A0;
	Global_B374[0x0000004A /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000004A /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000004A /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000004A /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000004A /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000004A /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x0000004A /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000004A /*46*/].f_8[0x00000000] = 0x000000A1;
	Global_B374[0x0000004B /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000004B /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000004B /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000004B /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000004B /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000004B /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x0000004B /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000004B /*46*/].f_8[0x00000000] = 0x000000A2;
	Global_B374[0x0000004C /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000004C /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000004C /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000004C /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000004C /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000004C /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x0000004C /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000004C /*46*/].f_8[0x00000000] = 0x000000A3;
	Global_B374[0x0000004D /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000004D /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000004D /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000004D /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000004D /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000004D /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x0000004D /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000004D /*46*/].f_8[0x00000000] = 0x000000A4;
	Global_B374[0x0000004E /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000004E /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000004E /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000004E /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000004E /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000004E /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x0000004E /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000004E /*46*/].f_8[0x00000000] = 0x000000A5;
	Global_B374[0x0000004F /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000004F /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000004F /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000004F /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000004F /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000004F /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x0000004F /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000004F /*46*/].f_8[0x00000000] = 0x000000A6;
	Global_B374[0x00000050 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000050 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000050 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000050 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000050 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000050 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000050 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000050 /*46*/].f_8[0x00000000] = 0x000000A7;
	Global_B374[0x00000051 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000051 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000051 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000051 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000051 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000051 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000051 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000051 /*46*/].f_8[0x00000000] = 0x000000A8;
	Global_B374[0x00000052 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000052 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000052 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000052 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000052 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000052 /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x00000052 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000052 /*46*/].f_8[0x00000000] = 0x000000A9;
	Global_B374[0x00000053 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000053 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000053 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000053 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000053 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000053 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000053 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000053 /*46*/].f_8[0x00000000] = 0x000000AA;
	Global_B374[0x00000054 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000054 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000054 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000054 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000054 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000054 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000054 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000054 /*46*/].f_8[0x00000000] = 0x000000AB;
	Global_B374[0x00000055 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000055 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000055 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000055 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000055 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000055 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000055 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000055 /*46*/].f_8[0x00000000] = 0x000000AC;
	Global_B374[0x00000056 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000056 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000056 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000056 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000056 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000056 /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x00000056 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000056 /*46*/].f_8[0x00000000] = 0x000000AD;
	Global_B374[0x00000057 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000057 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000057 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000057 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000057 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000057 /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x00000057 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000057 /*46*/].f_8[0x00000000] = 0x000000AE;
	Global_B374[0x00000058 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000058 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000058 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000058 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000058 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000058 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000058 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000058 /*46*/].f_8[0x00000000] = 0x000000AF;
	Global_B374[0x00000059 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000059 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000059 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000059 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000059 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000059 /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x00000059 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000059 /*46*/].f_8[0x00000000] = 0x000000B0;
	Global_B374[0x0000005A /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000005A /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000005A /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000005A /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000005A /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000005A /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x0000005A /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000005A /*46*/].f_8[0x00000000] = 0x000000B1;
	Global_B374[0x0000005B /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000005B /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000005B /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000005B /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000005B /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000005B /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x0000005B /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000005B /*46*/].f_8[0x00000000] = 0x000000B3;
	Global_B374[0x0000005C /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000005C /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000005C /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000005C /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000005C /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000005C /*46*/].f_3[0x00000000] = 0x00000002;
	Global_B374[0x0000005C /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000005C /*46*/].f_8[0x00000000] = 0x000000B2;
	Global_B374[0x0000005D /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000005D /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000005D /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000005D /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000005D /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000005D /*46*/].f_3[0x00000000] = 0x00000001;
	Global_B374[0x0000005D /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000005D /*46*/].f_8[0x00000000] = 0x000000B4;
	Global_B374[0x0000005E /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000005E /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000005E /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000005E /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000005E /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000005E /*46*/].f_3[0x00000000] = 0x00000004;
	Global_B374[0x0000005E /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x0000005E /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000005E /*46*/].f_8[0x00000000] = 0x000000B5;
	Global_B374[0x0000005F /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000005F /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000005F /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000005F /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000005F /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000005F /*46*/].f_3[0x00000000] = 0x00000025;
	Global_B374[0x0000005F /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000005F /*46*/].f_8[0x00000000] = 0x000000B6;
	Global_B374[0x00000060 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000060 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000060 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000060 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000060 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000060 /*46*/].f_3[0x00000000] = 0x00000025;
	Global_B374[0x00000060 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000060 /*46*/].f_8[0x00000000] = 0x000000B7;
	Global_B374[0x00000061 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000061 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000061 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000061 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000061 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000061 /*46*/].f_3[0x00000000] = 0x00000025;
	Global_B374[0x00000061 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000061 /*46*/].f_8[0x00000000] = 0x000000B8;
	Global_B374[0x00000062 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000062 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000062 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000062 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000062 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000062 /*46*/].f_3[0x00000000] = 0x00000036;
	Global_B374[0x00000062 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000062 /*46*/].f_8[0x00000000] = 0x000000B9;
	Global_B374[0x00000062 /*46*/].f_8[0x00000001] = 0x000000BA;
	Global_B374[0x00000062 /*46*/].f_8[0x00000002] = 0x000000BC;
	Global_B374[0x00000063 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000063 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000063 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000063 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000063 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000063 /*46*/].f_3[0x00000000] = 0x00000037;
	Global_B374[0x00000063 /*46*/].f_1E = 0x00000003;
	Global_B374[0x00000063 /*46*/].f_8[0x00000000] = 0x000000BB;
	Global_B374[0x00000063 /*46*/].f_8[0x00000001] = 0x000000BD;
	Global_B374[0x00000063 /*46*/].f_8[0x00000002] = 0x000000BE;
	Global_B374[0x00000064 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000064 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000064 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000064 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000064 /*46*/].f_2 = 0x00000003;
	Global_B374[0x00000064 /*46*/].f_3[0x00000000] = 0x00000038;
	Global_B374[0x00000064 /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x00000064 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000064 /*46*/].f_1E = 0x00000005;
	Global_B374[0x00000064 /*46*/].f_8[0x00000000] = 0x000000C2;
	Global_B374[0x00000064 /*46*/].f_8[0x00000001] = 0x000000C3;
	Global_B374[0x00000064 /*46*/].f_8[0x00000002] = 0x000000C4;
	Global_B374[0x00000064 /*46*/].f_8[0x00000003] = 0x000000C5;
	Global_B374[0x00000064 /*46*/].f_8[0x00000004] = 0x000000C6;
	Global_B374[0x00000065 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000065 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000065 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000065 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000065 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000065 /*46*/].f_3[0x00000000] = 0x00000039;
	Global_B374[0x00000065 /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x00000065 /*46*/].f_1E = 0x00000008;
	Global_B374[0x00000065 /*46*/].f_8[0x00000000] = 0x000000C7;
	Global_B374[0x00000065 /*46*/].f_8[0x00000001] = 0x000000C8;
	Global_B374[0x00000065 /*46*/].f_8[0x00000002] = 0x000000C9;
	Global_B374[0x00000065 /*46*/].f_8[0x00000003] = 0x000000CA;
	Global_B374[0x00000065 /*46*/].f_8[0x00000004] = 0x000000CB;
	Global_B374[0x00000065 /*46*/].f_8[0x00000005] = 0x000000CC;
	Global_B374[0x00000065 /*46*/].f_8[0x00000006] = 0x000000CD;
	Global_B374[0x00000065 /*46*/].f_8[0x00000007] = 0x000000CE;
	Global_B374[0x00000066 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000066 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000066 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000066 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000066 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000066 /*46*/].f_3[0x00000000] = 0x0000003A;
	Global_B374[0x00000066 /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x00000066 /*46*/].f_1E = 0x00000007;
	Global_B374[0x00000066 /*46*/].f_8[0x00000000] = 0x000000CF;
	Global_B374[0x00000066 /*46*/].f_8[0x00000001] = 0x000000D0;
	Global_B374[0x00000066 /*46*/].f_8[0x00000002] = 0x000000D1;
	Global_B374[0x00000066 /*46*/].f_8[0x00000003] = 0x000000D2;
	Global_B374[0x00000066 /*46*/].f_8[0x00000004] = 0x000000D3;
	Global_B374[0x00000066 /*46*/].f_8[0x00000005] = 0x000000D4;
	Global_B374[0x00000066 /*46*/].f_8[0x00000006] = 0x000000D5;
	Global_B374[0x00000067 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000067 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000067 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000067 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000067 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000067 /*46*/].f_3[0x00000000] = 0x0000003B;
	Global_B374[0x00000067 /*46*/].f_3[0x00000001] = 0x00000000;
	Global_B374[0x00000067 /*46*/].f_1E = 0x00000008;
	Global_B374[0x00000067 /*46*/].f_8[0x00000000] = 0x000000D6;
	Global_B374[0x00000067 /*46*/].f_8[0x00000001] = 0x000000D7;
	Global_B374[0x00000067 /*46*/].f_8[0x00000002] = 0x000000D8;
	Global_B374[0x00000067 /*46*/].f_8[0x00000003] = 0x000000D9;
	Global_B374[0x00000067 /*46*/].f_8[0x00000004] = 0x000000DA;
	Global_B374[0x00000067 /*46*/].f_8[0x00000005] = 0x000000DB;
	Global_B374[0x00000067 /*46*/].f_8[0x00000006] = 0x000000DC;
	Global_B374[0x00000067 /*46*/].f_8[0x00000007] = 0x000000DD;
	Global_B374[0x00000068 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000068 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000068 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000068 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000068 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000068 /*46*/].f_3[0x00000000] = 0x0000003C;
	Global_B374[0x00000068 /*46*/].f_3[0x00000001] = 0x00000002;
	Global_B374[0x00000068 /*46*/].f_1E = 0x00000007;
	Global_B374[0x00000068 /*46*/].f_8[0x00000000] = 0x000000DE;
	Global_B374[0x00000068 /*46*/].f_8[0x00000001] = 0x000000DF;
	Global_B374[0x00000068 /*46*/].f_8[0x00000002] = 0x000000E0;
	Global_B374[0x00000068 /*46*/].f_8[0x00000003] = 0x000000E1;
	Global_B374[0x00000068 /*46*/].f_8[0x00000004] = 0x000000E2;
	Global_B374[0x00000068 /*46*/].f_8[0x00000005] = 0x000000E3;
	Global_B374[0x00000068 /*46*/].f_8[0x00000006] = 0x000000E4;
	Global_B374[0x00000069 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000069 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000069 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000069 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000069 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000069 /*46*/].f_3[0x00000000] = 0x0000003D;
	Global_B374[0x00000069 /*46*/].f_3[0x00000001] = 0x00000002;
	Global_B374[0x00000069 /*46*/].f_1E = 0x00000006;
	Global_B374[0x00000069 /*46*/].f_8[0x00000000] = 0x000000E5;
	Global_B374[0x00000069 /*46*/].f_8[0x00000001] = 0x000000E6;
	Global_B374[0x00000069 /*46*/].f_8[0x00000002] = 0x000000E7;
	Global_B374[0x00000069 /*46*/].f_8[0x00000003] = 0x000000E8;
	Global_B374[0x00000069 /*46*/].f_8[0x00000004] = 0x000000E9;
	Global_B374[0x00000069 /*46*/].f_8[0x00000005] = 0x000000EA;
	Global_B374[0x0000006A /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000006A /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000006A /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000006A /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000006A /*46*/].f_2 = 0x00000002;
	Global_B374[0x0000006A /*46*/].f_3[0x00000000] = 0x0000003E;
	Global_B374[0x0000006A /*46*/].f_3[0x00000001] = 0x00000002;
	Global_B374[0x0000006A /*46*/].f_1E = 0x00000006;
	Global_B374[0x0000006A /*46*/].f_8[0x00000000] = 0x000000EB;
	Global_B374[0x0000006A /*46*/].f_8[0x00000001] = 0x000000EC;
	Global_B374[0x0000006A /*46*/].f_8[0x00000002] = 0x000000ED;
	Global_B374[0x0000006A /*46*/].f_8[0x00000003] = 0x000000EE;
	Global_B374[0x0000006A /*46*/].f_8[0x00000004] = 0x000000EF;
	Global_B374[0x0000006A /*46*/].f_8[0x00000005] = 0x000000F0;
	Global_B374[0x0000006B /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000006B /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000006B /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000006B /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000006B /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000006B /*46*/].f_3[0x00000000] = 0x00000024;
	Global_B374[0x0000006B /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000006B /*46*/].f_8[0x00000000] = 0x000000F1;
	Global_B374[0x0000006C /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000006C /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000006C /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000006C /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000006C /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000006C /*46*/].f_3[0x00000000] = 0x00000024;
	Global_B374[0x0000006C /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000006C /*46*/].f_8[0x00000000] = 0x000000F2;
	Global_B374[0x0000006D /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000006D /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000006D /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000006D /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000006D /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000006D /*46*/].f_3[0x00000000] = 0x00000024;
	Global_B374[0x0000006D /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000006D /*46*/].f_8[0x00000000] = 0x000000F3;
	Global_B374[0x0000006E /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000006E /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000006E /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000006E /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000006E /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000006E /*46*/].f_3[0x00000000] = 0x00000041;
	Global_B374[0x0000006E /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000006E /*46*/].f_8[0x00000000] = 0x000000F4;
	Global_B374[0x0000006F /*46*/].f_2D = 0x00000000;
	Global_B374[0x0000006F /*46*/].f_1F = 0x00000000;
	Global_B374[0x0000006F /*46*/].f_2A = 0x00000000;
	Global_B374[0x0000006F /*46*/].f_2B = 0x00000000;
	Global_B374[0x0000006F /*46*/].f_2 = 0x00000001;
	Global_B374[0x0000006F /*46*/].f_3[0x00000000] = 0x00000041;
	Global_B374[0x0000006F /*46*/].f_1E = 0x00000001;
	Global_B374[0x0000006F /*46*/].f_8[0x00000000] = 0x000000F5;
	Global_B374[0x00000070 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000070 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000070 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000070 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000070 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000070 /*46*/].f_3[0x00000000] = 0x00000041;
	Global_B374[0x00000070 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000070 /*46*/].f_8[0x00000000] = 0x000000F6;
	Global_B374[0x00000071 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000071 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000071 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000071 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000071 /*46*/].f_2 = 0x00000001;
	Global_B374[0x00000071 /*46*/].f_3[0x00000000] = 0x00000041;
	Global_B374[0x00000071 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000071 /*46*/].f_8[0x00000000] = 0x000000F7;
	Global_B374[0x00000072 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000072 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000072 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000072 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000072 /*46*/].f_2 = 0x00000002;
	Global_B374[0x00000072 /*46*/].f_3[0x00000000] = 0x00000013;
	Global_B374[0x00000072 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000072 /*46*/].f_1E = 0x00000015;
	Global_B374[0x00000072 /*46*/].f_8[0x00000000] = 0x000000F9;
	Global_B374[0x00000072 /*46*/].f_8[0x00000001] = 0x000000FA;
	Global_B374[0x00000072 /*46*/].f_8[0x00000002] = 0x000000FB;
	Global_B374[0x00000072 /*46*/].f_8[0x00000003] = 0x000000FC;
	Global_B374[0x00000072 /*46*/].f_8[0x00000004] = 0x000000FD;
	Global_B374[0x00000072 /*46*/].f_8[0x00000005] = 0x000000FE;
	Global_B374[0x00000072 /*46*/].f_8[0x00000006] = 0x000000FF;
	Global_B374[0x00000072 /*46*/].f_8[0x00000007] = 0x00000100;
	Global_B374[0x00000072 /*46*/].f_8[0x00000008] = 0x00000101;
	Global_B374[0x00000072 /*46*/].f_8[0x00000009] = 0x00000102;
	Global_B374[0x00000072 /*46*/].f_8[0x0000000A] = 0x00000103;
	Global_B374[0x00000072 /*46*/].f_8[0x0000000B] = 0x00000104;
	Global_B374[0x00000072 /*46*/].f_8[0x0000000C] = 0x00000105;
	Global_B374[0x00000072 /*46*/].f_8[0x0000000D] = 0x00000106;
	Global_B374[0x00000072 /*46*/].f_8[0x0000000E] = 0x00000107;
	Global_B374[0x00000072 /*46*/].f_8[0x0000000F] = 0x00000108;
	Global_B374[0x00000072 /*46*/].f_8[0x00000010] = 0x00000109;
	Global_B374[0x00000072 /*46*/].f_8[0x00000011] = 0x0000010A;
	Global_B374[0x00000072 /*46*/].f_8[0x00000012] = 0x0000010B;
	Global_B374[0x00000072 /*46*/].f_8[0x00000013] = 0x0000010C;
	Global_B374[0x00000072 /*46*/].f_8[0x00000014] = 0x0000010D;
	Global_B374[0x00000073 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000073 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000073 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000073 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000073 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000073 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000073 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000073 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000073 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000073 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000073 /*46*/].f_8[0x00000000] = 0x0000010E;
	Global_B374[0x00000074 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000074 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000074 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000074 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000074 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000074 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000074 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000074 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000074 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000074 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000074 /*46*/].f_8[0x00000000] = 0x0000010F;
	Global_B374[0x00000075 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000075 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000075 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000075 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000075 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000075 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000075 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000075 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000075 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000075 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000075 /*46*/].f_8[0x00000000] = 0x00000110;
	Global_B374[0x00000076 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000076 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000076 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000076 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000076 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000076 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000076 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000076 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000076 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000076 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000076 /*46*/].f_8[0x00000000] = 0x00000111;
	Global_B374[0x00000077 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000077 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000077 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000077 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000077 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000077 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000077 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000077 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000077 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000077 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000077 /*46*/].f_8[0x00000000] = 0x00000112;
	Global_B374[0x00000078 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000078 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000078 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000078 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000078 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000078 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000078 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000078 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000078 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000078 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000078 /*46*/].f_8[0x00000000] = 0x00000113;
	Global_B374[0x00000079 /*46*/].f_2D = 0x00000000;
	Global_B374[0x00000079 /*46*/].f_1F = 0x00000000;
	Global_B374[0x00000079 /*46*/].f_2A = 0x00000000;
	Global_B374[0x00000079 /*46*/].f_2B = 0x00000000;
	Global_B374[0x00000079 /*46*/].f_2 = 0x00000004;
	Global_B374[0x00000079 /*46*/].f_3[0x00000000] = 0x00000000;
	Global_B374[0x00000079 /*46*/].f_3[0x00000001] = 0x00000001;
	Global_B374[0x00000079 /*46*/].f_3[0x00000002] = 0x00000002;
	Global_B374[0x00000079 /*46*/].f_3[0x00000003] = 0x00000010;
	Global_B374[0x00000079 /*46*/].f_1E = 0x00000001;
	Global_B374[0x00000079 /*46*/].f_8[0x00000000] = 0x00000114;
}

void func_70()
{
	unk_0x10FAF14A60A0DBE1();
}

