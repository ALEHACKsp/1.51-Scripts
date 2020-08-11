#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x8A22C4C08282BF26(joaat("wp_partyboombox")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (unk_0x2EBF608FFE6CA406(0x00000012))
	{
		func_1();
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (!unk_0x338D6FF72D84D90F())
		{
			iLocal_0 = 0x00000003;
		}
		switch (iLocal_0)
		{
			case 0x00000000:
				if (unk_0xD8A54335F18763BA() >= 0x00000016 || unk_0xD8A54335F18763BA() <= 0x00000004)
				{
					iLocal_0 = 0x00000001;
				}
				else
				{
					func_1();
				}
				break;
			
			case 0x00000001:
				if (!unk_0xBCFF5481C5F58C19("ID2_21_G_Night"))
				{
					unk_0x2404539258C5376B("ID2_21_G_Night");
					iLocal_0 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				break;
			
			case 0x00000003:
				if (!unk_0xEB880D98B5988D0C() && !unk_0x991B1F0980C62628())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0xBCFF5481C5F58C19("ID2_21_G_Night"))
	{
		unk_0x81CF20E10AAD5FD5("ID2_21_G_Night");
	}
	unk_0x10FAF14A60A0DBE1();
}

