void __EntryFunction__()
{
	unk_0xB57F88F0123F4C38();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1AED2)
	{
		if (Global_1AED2[iVar0 /*28*/].f_15 != 0x00000000)
		{
			iVar1 = iVar0;
			if (unk_0x1C0640BA9A7327B3() > Global_1AED2[iVar0 /*28*/].f_15 && Global_1AED2[iVar0 /*28*/].f_15 != 0xFFFFFFFF)
			{
				if (func_3(iVar0))
				{
					unk_0x2CBCC7DC0EEFF804(iVar1, 0x00000000);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_1AED2[iVar0 /*28*/].f_15 != 0xFFFFFFFF)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_1AED2[iVar0 /*28*/].f_1B, 0x00000000))
					{
						Global_1AED2[iVar0 /*28*/].f_15 = (Global_1AED2[iVar0 /*28*/].f_15 + SYSTEM::ROUND((unk_0x6117725E0134737F() * 1000f)));
						if (unk_0x9C6E1680B00A79AE(iVar1))
						{
							unk_0x5D96D8530B3D0904(&(Global_1AED2[iVar0 /*28*/].f_1B), 0x00000000);
						}
					}
				}
				if (Global_1AED2[iVar0 /*28*/].f_18.f_2 != 9999f)
				{
					if (Global_1AED2[iVar0 /*28*/].f_17 != 0x00000000)
					{
						if (!unk_0x437347B10A200C4B(Global_1AED2[iVar0 /*28*/].f_17, 0x00000000))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Global_1AED2[iVar0 /*28*/].f_1B, 0x00000003))
							{
								unk_0xB5CBBD8CB1D39B8F(iVar1, unk_0x68E4ADDDDCD7BDDE(Global_1AED2[iVar0 /*28*/].f_17, Global_1AED2[iVar0 /*28*/].f_18));
							}
							else
							{
								unk_0xC7FCEAE8809CD8DE(iVar1, Global_1AED2[iVar0 /*28*/].f_17, Global_1AED2[iVar0 /*28*/].f_18, Global_1AED2[iVar0 /*28*/].f_18.f_1);
							}
						}
					}
					else if ((Global_1AED2[iVar0 /*28*/].f_18 != 0f || Global_1AED2[iVar0 /*28*/].f_18.f_1 != 0f) || Global_1AED2[iVar0 /*28*/].f_18.f_2 != 0f)
					{
						unk_0xB5CBBD8CB1D39B8F(iVar1, Global_1AED2[iVar0 /*28*/].f_18);
					}
				}
				else
				{
					unk_0x5FFE0E021F604464(iVar1, Global_1AED2[iVar0 /*28*/].f_18, Global_1AED2[iVar0 /*28*/].f_18.f_1);
				}
			}
			else if ((unk_0x1C0640BA9A7327B3() - Global_1AED2[iVar0 /*28*/].f_16) > 0x000003E8)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_1AED2[iParam0 /*28*/].f_15 = 0x00000000;
	StringCopy(&(Global_1AED2[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_1AED2[iParam0 /*28*/].f_4), "", 64);
	Global_1AED2[iParam0 /*28*/].f_17 = 0x00000000;
	Global_1AED2[iParam0 /*28*/].f_18 = { 0f, 0f, 0f };
	Global_1AED2[iParam0 /*28*/].f_1B = 0x00000000;
	Global_1AED2[iParam0 /*28*/].f_14 = 0x00000000;
	Global_1AED2[iParam0 /*28*/].f_16 = 0x00000000;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x7F8A39872A07D2CE(&(Global_1AED2[iParam0 /*28*/]), "") && !unk_0x2EBF5002C6B6A06C(&(Global_1AED2[iParam0 /*28*/])))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1AED2[iParam0 /*28*/].f_1B, 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1AED2[iParam0 /*28*/].f_1B, 0x00000002))
			{
				return func_7(iVar0, &(Global_1AED2[iParam0 /*28*/]), &(Global_1AED2[iParam0 /*28*/].f_4), Global_1AED2[iParam0 /*28*/].f_14);
			}
			else
			{
				return func_6(iVar0, &(Global_1AED2[iParam0 /*28*/]), &(Global_1AED2[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1AED2[iParam0 /*28*/].f_1B, 0x00000002))
		{
			return func_5(iVar0, &(Global_1AED2[iParam0 /*28*/]), Global_1AED2[iParam0 /*28*/].f_14);
		}
		else
		{
			return func_4(iVar0, &(Global_1AED2[iParam0 /*28*/]));
		}
	}
	return 0x00000000;
}

bool func_4(int iParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam1);
	return unk_0xE3789B9938DCEAE8((0x00000001 + iParam0));
}

bool func_5(int iParam0, char* sParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0xE3789B9938DCEAE8((0x00000001 + iParam0));
}

bool func_6(int iParam0, char* sParam1, char* sParam2)
{
	unk_0xCECE25C7ECD44603(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	return unk_0xE3789B9938DCEAE8((0x00000001 + iParam0));
}

bool func_7(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xCECE25C7ECD44603(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	return unk_0xE3789B9938DCEAE8((0x00000001 + iParam0));
}

