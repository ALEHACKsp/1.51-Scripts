#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	vector3 vLocal_2 = { 0f, 0f, 0f };
	float fLocal_3 = 0f;
	char* sLocal_4 = NULL;
	int iLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_4 = "Poledance_01";
	iLocal_5 = joaat("a_f_y_beach_01");
	sLocal_6 = "MISSSTRIP_CLUB";
	if (unk_0xC844350D5D58C99A(iScriptParam_8))
	{
		unk_0x1E9649458B15960F(iScriptParam_8, 0x00000001);
		vLocal_2 = { unk_0x68E4ADDDDCD7BDDE(iScriptParam_8, 0f, 0f, 0f) };
		fLocal_3 = unk_0xD9522BA9E27E1349(iScriptParam_8);
		unk_0x20641932E5104B25(iScriptParam_8, 0x00000000, 0x00000000);
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (unk_0xC844350D5D58C99A(iScriptParam_8))
		{
			if (unk_0x63D2C15453688621(iScriptParam_8))
			{
				switch (iLocal_0)
				{
					case 0x00000000:
						if (func_5())
						{
							func_4();
							iLocal_0 = 0x00000002;
						}
						break;
					
					case 0x00000002:
						func_3();
						if (func_2())
						{
							unk_0x20641932E5104B25(iScriptParam_8, 0x00000001, 0x00000000);
							iLocal_0 = 0x00000003;
						}
						break;
					
					case 0x00000003:
						if (!unk_0xEB6A8945D1AC98A1(iLocal_1))
						{
							unk_0x8BE3D040D15AEA1D(iLocal_1, 0xFFFFFFFF);
							unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
							unk_0xFADC0A217229F6B5(iLocal_1, 0x00000001);
							unk_0x10FAF14A60A0DBE1();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0x437347B10A200C4B(iLocal_1, 0x00000000))
	{
		if (!unk_0x0A059E0DB9253280(iLocal_1))
		{
			unk_0xEBA53F35D0085654(&iLocal_1);
		}
		else
		{
			unk_0xFADC0A217229F6B5(iLocal_1, 0x00000001);
		}
	}
	unk_0x10FAF14A60A0DBE1();
}

int func_2()
{
	vector3 vVar0;
	
	vVar0 = { 2f, 2f, 0.5f };
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_1))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_1, vVar0, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			if (unk_0xB87D13D0C064E9D1(iLocal_1, unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000001;
			}
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_1))
			{
				return 0x00000001;
			}
		}
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_3()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_1))
	{
		if (unk_0xD1960163A3042274(iLocal_1, 0x87B9A382) == 0x00000007)
		{
			unk_0xC6EB89C59F2AF6B8(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (unk_0xFCCE56DAE67AA889(iLocal_1, sLocal_6, sLocal_4, 0x00000003))
		{
			unk_0xC6EB89C59F2AF6B8(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (!iLocal_7)
		{
			if (unk_0xB4ECF989E2C1DAC8(iLocal_1, sLocal_6, sLocal_4, 0x00000003))
			{
				unk_0x4E6D1F54D3FBC5B1(iLocal_1, sLocal_6, sLocal_4, unk_0x79833B02DBD2A244(0f, 1f));
				iLocal_7 = 0x00000001;
			}
		}
	}
}

void func_4()
{
	if (unk_0x437347B10A200C4B(iLocal_1, 0x00000000))
	{
		iLocal_1 = unk_0x36F2404464202779(0x00000005, iLocal_5, vLocal_2.x, vLocal_2.y, vLocal_2.z, fLocal_3, 0x00000001, 0x00000001);
		unk_0xC743BD39A24D0583(iLocal_1, 0x00000000);
		unk_0x25C5402CC10F76CD(iLocal_1, 0x00000000);
		unk_0x11AD11297DC58CC7(iLocal_1, 0x00000001);
	}
}

int func_5()
{
	unk_0x523BCC9DC80CD82F(iLocal_5);
	unk_0x3F423BF5B8125A50(sLocal_6);
	if (unk_0xB87F6CF6E5628C67(iLocal_5) && unk_0xB4AE0788C1587752(sLocal_6))
	{
		return 0x00000001;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(iLocal_5);
		unk_0x3F423BF5B8125A50(sLocal_6);
	}
	return 0x00000000;
}

