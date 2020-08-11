#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0)
	{
		case 0x00000003:
			while (0x00000001)
			{
				SYSTEM::WAIT(0x00001388);
			}
			break;
		
		case 0x00000000:
		case 0x00000001:
			if (ScriptParam_0.f_1 == 0x8CDA6145)
			{
				func_2(0x00000001, 0x00000000, 0x9A5279F2, 0x00000019, 0x00000001, "PM_PANE_AUD", 0x00000000, 0x00000000);
				func_2(0x00000001, 0x00000001, 0x9A5279F2, 0x00000032, 0x00000001, "PM_PANE_DIS", 0x00000000, 0x00000000);
				func_1(0x00000001);
			}
			if (ScriptParam_0.f_1 == 0x9A52760A)
			{
			}
			break;
		
		case 0x00000002:
			switch (ScriptParam_0.f_1)
			{
				case 0x8CDA6145:
					break;
				
				case 0x9A52760A:
					switch (ScriptParam_0.f_3)
					{
						case 0x00000019:
							break;
						
						case 0x00000032:
							break;
					}
					break;
			}
			break;
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_1(int iParam0)
{
	if (unk_0x673DE2AC97BFD28A("DISPLAY_DATA_SLOT"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x7E60D21B163E9D56();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)
{
	if (unk_0x673DE2AC97BFD28A("SET_DATA_SLOT"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x3CAEA85DA607305E(iParam3);
		unk_0x3CAEA85DA607305E(iParam7);
		unk_0x3CAEA85DA607305E(0x00000000);
		if (bParam4)
		{
			unk_0x3CAEA85DA607305E(0x00000001);
		}
		else
		{
			unk_0x3CAEA85DA607305E(0x00000000);
		}
		if (iParam6 == 0x00000000)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0x045A0775396CC970(sParam5);
		}
		unk_0x7E60D21B163E9D56();
	}
}

void func_3(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

