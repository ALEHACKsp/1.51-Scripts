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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	vector3 vLocal_41 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	vector3 vLocal_46 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_26 = 0x00000001;
	bLocal_29 = 0x00000001;
	bLocal_30 = 0x00000001;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 0x000004B0;
	iLocal_89 = 0x000004B0;
	iLocal_90 = 0x000000A6;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	unk_0xB57F88F0123F4C38();
	if (unk_0xB3260A60545D3F11() == 0x00000000)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_161())
	{
		Global_4121C9 = 0x00000063;
		Global_4121CA = 0x00000063;
		iLocal_24 = 0x00000063;
	}
	else
	{
		Global_4121C9 = 0x00000000;
		Global_4121CA = 0x00000000;
	}
	sLocal_19[0x00000000] = "No_Filter";
	sLocal_19[0x00000001] = "phone_cam1";
	sLocal_19[0x00000002] = "phone_cam2";
	sLocal_19[0x00000003] = "phone_cam3";
	sLocal_19[0x00000004] = "phone_cam4";
	sLocal_19[0x00000005] = "phone_cam5";
	sLocal_19[0x00000006] = "phone_cam6";
	sLocal_19[0x00000007] = "phone_cam7";
	sLocal_19[0x00000008] = "phone_cam8";
	sLocal_19[0x00000009] = "phone_cam9";
	sLocal_19[0x0000000A] = "phone_cam10";
	sLocal_19[0x0000000B] = "phone_cam11";
	sLocal_19[0x0000000C] = "phone_cam12";
	sLocal_20[0x00000000] = "No_Border";
	sLocal_20[0x00000001] = "frame1";
	sLocal_20[0x00000002] = "frame2";
	sLocal_20[0x00000003] = "frame3";
	sLocal_20[0x00000004] = "frame4";
	sLocal_20[0x00000005] = "frame5";
	sLocal_20[0x00000006] = "frame6";
	sLocal_20[0x00000007] = "frame7";
	sLocal_20[0x00000008] = "frame8";
	sLocal_20[0x00000009] = "frame9";
	sLocal_20[0x0000000A] = "frame10";
	sLocal_20[0x0000000B] = "frame11";
	sLocal_20[0x0000000C] = "frame12";
	sLocal_22[0x00000000] = "No_Expression";
	sLocal_22[0x00000001] = "mood_Aiming_1";
	sLocal_22[0x00000002] = "mood_Happy_1";
	sLocal_22[0x00000003] = "mood_smug_1";
	sLocal_22[0x00000004] = "mood_Injured_1";
	sLocal_22[0x00000005] = "mood_sulk_1";
	sLocal_22[0x00000006] = "mood_Angry_1";
	func_160();
	if (func_159(0x00000001, 0x00000001, !iLocal_31, 0x00000001))
	{
		iLocal_31 = 0x00000001;
	}
	func_158();
	iLocal_63 = unk_0xD68EA767274B7444();
	if (Global_4BE7 == 0x00000000)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_554E = 0x00000000;
	Global_554F = 0x00000000;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0xC41A92C76262185C(unk_0x16F2683693E537C9()))
		{
			Global_554E = 0x00000001;
		}
		if (unk_0xB541E437375DFA3D())
		{
			Global_554E = 0x00000001;
		}
		if (unk_0xDF1306B443CD3D15(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()), 0x00000000))
		{
			Global_554E = 0x00000001;
		}
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 0x0000004E, 0x00000001))
		{
			Global_554E = 0x00000001;
		}
		if (unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9()))
		{
			Global_554E = 0x00000001;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (iLocal_82 == 0x00000001)
			{
				Global_554E = 0x00000001;
			}
			iLocal_99 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if ((((unk_0x134B62B726CEC8E6(iLocal_99) == joaat("rhino") || unk_0x134B62B726CEC8E6(iLocal_99) == joaat("cutter")) || unk_0x134B62B726CEC8E6(iLocal_99) == joaat("submersible")) || unk_0x134B62B726CEC8E6(iLocal_99) == 0xAA6F980A) || (unk_0x134B62B726CEC8E6(iLocal_99) == 0xF34DFB25 && unk_0x137240CA2BADB0D2(iLocal_99, func_157(unk_0x16F2683693E537C9(), 0x00000001))))
			{
				Global_554E = 0x00000001;
			}
			else if (unk_0xA30B8362589C124A(iLocal_99, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
			{
				if (unk_0x30C0A7C378403357(iLocal_99) > 0f)
				{
					if (!Global_12B4E)
					{
						if (!func_156())
						{
							unk_0xD1F0F33C375B8446(unk_0x16F2683693E537C9(), iLocal_99, 0x00000006, 0x00000FA0);
						}
					}
				}
			}
		}
	}
	if (Global_12B4E)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000000);
		}
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000015);
	func_155(0x00000000);
	unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
	if (Global_4BE4 == 0x00000000)
	{
		func_154();
	}
	else
	{
		iLocal_91 = unk_0xB01F55A0FD1CFD49("camera_gallery");
		iLocal_92 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		while (!unk_0x83D8570832F172A7(iLocal_91) || !unk_0x83D8570832F172A7(iLocal_92))
		{
			SYSTEM::WAIT(0x00000000);
			unk_0xC2127C0F64D6A3B9();
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
		}
		if (Global_12B4E)
		{
			iLocal_95 = 0x00000002;
		}
		else
		{
			switch (func_153())
			{
				case 0x00000000:
					iLocal_95 = 0x00000002;
					break;
				
				case 0x00000002:
					iLocal_95 = 0x00000002;
					break;
				
				case 0x00000003:
					iLocal_95 = 0x00000002;
					break;
				}
		}
		func_152(iLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		func_151(iLocal_91, "CLOSE_SHUTTER");
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "DISPLAY_VIEW");
		unk_0x3CAEA85DA607305E(0x00000010);
		unk_0x7E60D21B163E9D56();
	}
	vLocal_41 = { Global_4BF6 };
	vLocal_42 = { Global_4BEF[Global_4BE7 /*3*/] };
	Global_554F = 0x00000001;
	iLocal_69 = 0x00000001;
	iLocal_70 = 0x00000001;
	iLocal_71 = 0x00000001;
	iLocal_72 = 0x00000001;
	iLocal_73 = 0x00000001;
	iLocal_74 = 0x00000001;
	iLocal_75 = 0x00000000;
	iLocal_76 = 0x00000000;
	if (Global_4C1E.f_1 > 0x00000003)
	{
		Global_4C1E.f_1 = 0x00000008;
	}
	if (iLocal_82 == 0x00000000)
	{
		unk_0x0674E58A79778E99(&Global_1CBE, 0x00000003);
	}
	func_149();
	unk_0xD9ACBBA59FD5A09E(0x00000004);
	if (unk_0xF026D357757F5F6A())
	{
	}
	if (Global_440000.f_37818)
	{
	}
	if (Global_440000.f_3781A == 0x00000001)
	{
		iLocal_106 = 0x00000001;
	}
	if (iLocal_106 == 0x00000001)
	{
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		unk_0x558EC149EB2BC0A2(0x00000000, Global_4BFF);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x000000BA);
		unk_0xC2127C0F64D6A3B9();
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
		if (func_148())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
			{
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000002);
				func_152(iLocal_91, "SHOW_PHOTO_FRAME", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
		}
		if (!Global_1B416.f_36DE.f_51)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000D))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001C))
					{
						if ((iLocal_79 && iLocal_82 == 0x00000000) && !func_148())
						{
							unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000D);
							Global_1B416.f_36DE.f_51 = 0x00000001;
							func_147("CELL_FOC_HLP", 0xFFFFFFFF);
						}
					}
				}
			}
		}
		if (!unk_0x798A3F1296751F46())
		{
			if (Global_440000.f_37817 == 0x00000000 && Global_440000.f_37818 == 0x00000000)
			{
				unk_0x744B56EE9DE7B57F(0x0000000F, 0f, -0.0375f);
			}
			unk_0x3584F71E5CA29322(0x00000007);
			func_146();
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000C8, 0x00000001);
			}
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002F, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000005B, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000005C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
			if (iLocal_100 == 0x00000000)
			{
				unk_0x558EC149EB2BC0A2(0x00000000, Global_4C03);
			}
			unk_0x558EC149EB2BC0A2(0x00000000, Global_4C00);
			if ((unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37()) && !func_148())
			{
				iLocal_81 = 0x00000001;
				Global_4C1E.f_1 = 0x00000003;
				unk_0x21387C9EECC2B220(0x00000000);
			}
			if (unk_0x1C53FD812DB1E31C())
			{
				Global_4C1E.f_1 = 0x00000003;
				unk_0x21387C9EECC2B220(0x00000000);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000003))
			{
				Global_4C1E.f_1 = 0x00000003;
				unk_0x21387C9EECC2B220(0x00000000);
			}
			if (unk_0x8CD06866876216F2())
			{
				if (func_135())
				{
					Global_4C1E.f_1 = 0x00000003;
					unk_0x21387C9EECC2B220(0x00000000);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0x00000000))
				{
					Global_4C1E.f_1 = 0x00000003;
					unk_0x21387C9EECC2B220(0x00000000);
				}
				if ((unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 0x0000004E, 0x00000001) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()))
				{
					if (func_134())
					{
					}
					else
					{
						Global_4C1E.f_1 = 0x00000003;
						unk_0x21387C9EECC2B220(0x00000000);
					}
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					if (Global_12B4E == 0x00000001)
					{
						Global_4C1E.f_1 = 0x00000003;
					}
				}
				if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
				{
					if (unk_0xFC0E4F7E386C43F8(unk_0x16F2683693E537C9()) > 0.3f)
					{
						Global_4C1E.f_1 = 0x00000003;
					}
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					func_133();
					iLocal_99 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0x30C0A7C378403357(iLocal_99) < 0f)
					{
						func_130(0x00000000);
					}
					if (iLocal_66 == 0x00000001)
					{
						if (iLocal_67 == 0x00000001)
						{
							if (!unk_0xCD5FC883CEFE0289())
							{
								func_130(0x00000000);
							}
						}
						else if (!unk_0xCD5FC883CEFE0289())
						{
							iLocal_67 = 0x00000001;
							SYSTEM::WAIT(0x00000000);
							unk_0xC2127C0F64D6A3B9();
						}
					}
				}
				else if (Global_12B4E == 0x00000000)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000012))
					{
						func_129();
						if ((Global_4C1E == 0x00000000 || Global_4C1E == 0x00000001) || Global_4C1E == 0x00000002)
						{
							if (!unk_0xFBF1556B75C783FC(unk_0x16F2683693E537C9()))
							{
								if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
								{
								}
								else
								{
									Global_4C1E.f_1 = 0x00000003;
									unk_0x21387C9EECC2B220(0x00000000);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_128();
			}
			if (Global_4C1E.f_1 < 0x00000004)
			{
			}
			if (iLocal_103 == 0x00000000)
			{
				if (iLocal_54 == 0x00000000)
				{
					if (iLocal_55 == 0x00000000)
					{
						if (iLocal_62 == 0x00000000)
						{
							if (Global_4C1E.f_1 > 0x00000003)
							{
								if (iLocal_100)
								{
									func_126();
									if (Global_5553 == 0x00000000 && Global_5550 == 0x00000006)
									{
										unk_0x2CBCC7DC0EEFF804(0x00000000, 0x00000001);
										unk_0xBBCE9616B024A2BF();
										iLocal_100 = 0x00000000;
										func_125();
										if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
										{
											vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
										}
										func_124();
										iLocal_60++;
										if (func_161())
										{
											func_152(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 0xBF800000, 0xBF800000, 0xBF800000);
										}
										else
										{
											func_152(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 0xBF800000, 0xBF800000, 0xBF800000);
										}
										iLocal_83 = 0x00000000;
										iLocal_84 = 0x00000000;
										iLocal_85 = 0x00000000;
										iLocal_78 = 0x00000000;
										func_118();
									}
									if (Global_5550 == 0x00000000)
									{
										iLocal_100 = 0x00000000;
										unk_0xBBCE9616B024A2BF();
										if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
										{
											vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
										}
										func_117();
										iLocal_83 = 0x00000000;
										iLocal_84 = 0x00000000;
										iLocal_85 = 0x00000000;
										iLocal_78 = 0x00000000;
										func_118();
										if (func_161())
										{
											if (Global_4121CA == 0x00000000)
											{
												if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
												{
													func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
												}
											}
										}
										else if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
										{
											func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
										}
										func_116();
										func_115(0x00000001);
									}
								}
								else if (Global_4C1E.f_1 != 0x00000009)
								{
									if (Global_554F == 0x00000001)
									{
										if (Global_554E == 0x00000000)
										{
											func_114();
										}
									}
									else if ((Global_1F1C - Global_1F1B) > Global_1F1D)
									{
										if (unk_0x757EF87A33649210() && func_113())
										{
											if (func_112() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0x00000000)
											{
												unk_0x21387C9EECC2B220(0x00000000);
												unk_0x55D0A2DB35045A35(iLocal_63);
												iLocal_94 = 0x00000000;
												if (Global_554E == 0x00000000)
												{
													func_124();
													Global_554E = 0x00000001;
													unk_0x2CBCC7DC0EEFF804(0x00000000, 0x00000001);
													iLocal_79 = 0x00000000;
													iLocal_69 = 0x00000001;
													iLocal_70 = 0x00000001;
													iLocal_71 = 0x00000001;
													iLocal_72 = 0x00000001;
													iLocal_73 = 0x00000001;
													iLocal_74 = 0x00000001;
													func_111(0x00000000, 0x00000000);
													func_115(0x00000000);
													iLocal_66 = 0x00000000;
													func_106(0x00000001);
													iLocal_93 = 0x00000000;
													func_104(0x00000000, 0x00000001);
													func_152(Global_4C0B, "DISPLAY_VIEW", 16f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
													func_102(0x00000001);
												}
											}
										}
										if (func_101(0x00000002, Global_4BFE, 0x00000000))
										{
											if (func_148())
											{
												if (((Global_195C36 || Global_140817) || Global_5551) || unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000015))
												{
												}
												else if (func_112() && iLocal_78)
												{
												}
												else if (!func_113())
												{
													if (iLocal_78 == 0x00000000)
													{
														unk_0x53491B90E4FD0E56(0x000001F4);
														iLocal_94 = 0x00000000;
														func_104(0x00000001, 0x00000001);
														func_100(0x00000001);
													}
												}
											}
											else if (func_112() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0x00000000)
											{
												unk_0x21387C9EECC2B220(0x00000000);
												unk_0x55D0A2DB35045A35(iLocal_63);
												iLocal_94 = 0x00000000;
												if (Global_554E == 0x00000000)
												{
													func_124();
													Global_554E = 0x00000001;
													unk_0x2CBCC7DC0EEFF804(0x00000000, 0x00000001);
													iLocal_79 = 0x00000000;
													iLocal_69 = 0x00000001;
													iLocal_70 = 0x00000001;
													iLocal_71 = 0x00000001;
													iLocal_72 = 0x00000001;
													iLocal_73 = 0x00000001;
													iLocal_74 = 0x00000001;
													func_111(0x00000000, 0x00000000);
													func_115(0x00000000);
													iLocal_66 = 0x00000000;
													func_106(0x00000001);
													iLocal_93 = 0x00000000;
													func_104(0x00000000, 0x00000001);
													func_152(Global_4C0B, "DISPLAY_VIEW", 16f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
												}
											}
										}
									}
									if (iLocal_52 == 0x00000000)
									{
										if (unk_0xFEBC1E4EC9E001F0())
										{
											func_99();
											iLocal_52 = 0x00000001;
										}
									}
									else if (!unk_0xFEBC1E4EC9E001F0())
									{
										func_99();
										iLocal_52 = 0x00000000;
									}
									if (iLocal_53 == 0x00000000)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001C))
										{
											func_99();
											iLocal_53 = 0x00000001;
										}
									}
									else if (!unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001C))
									{
										func_99();
										iLocal_53 = 0x00000000;
									}
									if (Global_554E == 0x00000001)
									{
										func_88();
									}
									else if (Global_4C1E.f_1 > 0x00000004)
									{
										if (iLocal_75 == 0x00000001 && iLocal_76 == 0x00000000)
										{
											func_84();
										}
										if (iLocal_75 == 0x00000000 && iLocal_76 == 0x00000001)
										{
											func_117();
											if (iLocal_87 == 0x00000001 || iLocal_87 == 0x00000000)
											{
												if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
												{
													if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
													{
														func_151(iLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = unk_0x1C0640BA9A7327B3();
														while (unk_0x1C0640BA9A7327B3() < (iLocal_86 + iLocal_88) && Global_4C1E.f_1 > 0x00000003)
														{
															func_146();
															func_128();
															func_83();
															unk_0xC2127C0F64D6A3B9();
															SYSTEM::WAIT(0x00000000);
														}
													}
												}
												if (func_161())
												{
													if (Global_4121CA == 0x00000000)
													{
														if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
														{
															func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
														}
													}
												}
												else if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
												{
													func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
												}
												func_128();
												func_146();
												iLocal_83 = 0x00000000;
												iLocal_84 = 0x00000000;
												iLocal_85 = 0x00000000;
												iLocal_78 = 0x00000000;
												func_118();
												iLocal_87 = 0x00000000;
												func_151(iLocal_91, "OPEN_SHUTTER");
											}
											func_116();
											func_115(0x00000001);
											func_82();
										}
									}
									if (iLocal_94 == 0x00000001)
									{
										func_79();
									}
									if (iLocal_80)
									{
										if (SYSTEM::TIMERB() > 0x000001F4)
										{
											iLocal_79 = 0x00000001;
											iLocal_80 = 0x00000000;
											unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000012);
											if (Global_554E == 0x00000000)
											{
												func_104(0x00000001, 0x00000001);
											}
										}
									}
									if (iLocal_78 == 0x00000000)
									{
										if (iLocal_79 && Global_554E == 0x00000000)
										{
											if ((iLocal_81 == 0x00000000 && iLocal_76 == 0x00000000) && Global_5551 == 0x00000000)
											{
												func_10();
											}
										}
										else
										{
											func_83();
										}
									}
									else if (iLocal_75 == 0x00000000)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_4C1E.f_1 > 0x00000003)
					{
						if (Global_554F == 0x00000001)
						{
							if (Global_554E == 0x00000000)
							{
								func_114();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_105 == 0x00000001)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_102, "CELL_CAM_FW_2", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
				}
				if (iLocal_105 == 0x00000002)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_102, "", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
				}
				if (iLocal_105 == 0x00000006)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_102, "", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
				}
				if (iLocal_105 == 0x00000003)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_102, "", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
				}
				if (iLocal_105 == 0x00000007)
				{
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
					}
					if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
					{
						UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_102, "", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
					}
				}
				if (iLocal_105 == 0x00000004)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_102, "CELL_CAM_CCW_2", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
				}
				if (iLocal_105 == 0x00000005)
				{
					iVar0 = unk_0x26F0988F7719D17A();
					switch (iVar0)
					{
						case 0xFFFFFFFF:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_102, "", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
							break;
						
						case 0x00000000:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_102, "", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
							break;
						
						case 0x00000002:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_102, "", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
							break;
						
						default:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0x00000000, 0xFFFFFFFF, "", "", 0x00000001, 0x00000000);
							break;
						}
				}
				if (iLocal_105 == 0x00000000)
				{
				}
				if (iLocal_105 == 0x00000002 || iLocal_105 == 0x00000003)
				{
					if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA))
					{
						iLocal_103 = 0x00000000;
						iLocal_105 = 0x00000000;
						func_104(0x00000000, 0x00000001);
					}
					if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9))
					{
						iLocal_104 = 0x00000001;
					}
					if (iLocal_104 == 0x00000001)
					{
						if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
						{
							iLocal_103 = 0x00000000;
							iLocal_105 = 0x00000000;
							func_104(0x00000000, 0x00000001);
							iLocal_104 = 0x00000000;
							unk_0xFCA5A13B82D72982("Gallery");
							unk_0xAD1F66EB453E6BCC();
						}
					}
				}
				else if (iLocal_105 == 0x00000007)
				{
					if (unk_0x33A494591F2C1975())
					{
						if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9))
						{
							iLocal_103 = 0x00000000;
							iLocal_105 = 0x00000000;
							func_104(0x00000000, 0x00000001);
							iLocal_62 = 0x00000000;
						}
					}
					else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA))
					{
						iLocal_103 = 0x00000000;
						iLocal_105 = 0x00000000;
						func_104(0x00000000, 0x00000001);
						iLocal_62 = 0x00000000;
					}
					if (!unk_0x33A494591F2C1975())
					{
						if (unk_0xBFC0798A6E3417F9(0x00000002, Global_4C02))
						{
							iLocal_103 = 0x00000000;
							iLocal_105 = 0x00000000;
							func_104(0x00000000, 0x00000001);
							if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001C))
							{
								iLocal_62 = 0x00000000;
							}
							else
							{
								iLocal_62 = 0x00000002;
							}
							iLocal_58 = unk_0x1C0640BA9A7327B3();
							unk_0xB0A3CB46BE5B746A(0x00000001);
						}
					}
				}
				else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9))
				{
					iLocal_103 = 0x00000000;
					iLocal_105 = 0x00000000;
					func_104(0x00000000, 0x00000001);
				}
			}
		}
		iLocal_59 = unk_0x1C0640BA9A7327B3();
		if (func_148())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
			{
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000002);
				func_152(iLocal_91, "SHOW_PHOTO_FRAME", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
		}
		if (func_3() || iLocal_81)
		{
			func_1(0x00000000);
			func_111(0x00000000, 0x00000000);
			func_115(0x00000000);
			iLocal_66 = 0x00000000;
			func_106(0x00000001);
			Global_554E = 0x00000000;
			Global_554F = 0x00000000;
			Global_5551 = 0x00000000;
			unk_0xE17FDF9E3068281B(&iLocal_91);
			unk_0xE17FDF9E3068281B(&iLocal_92);
			unk_0x21387C9EECC2B220(0x00000000);
			if (Global_4CD2 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
			}
			else
			{
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			}
			unk_0x2CBCC7DC0EEFF804(0x00000000, 0x00000001);
			unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000001);
			unk_0x0674E58A79778E99(&Global_1CBE, 0x00000003);
			unk_0x0674E58A79778E99(&Global_4126C5, 0x00000003);
			unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
			Global_5552 = 0x00000001;
			unk_0x55D0A2DB35045A35(iLocal_63);
			unk_0x43A06902454A1172(iLocal_63);
			unk_0xBBCE9616B024A2BF();
			func_106(0x00000001);
			unk_0xA6CB86BCFE04B70C(0x00000000);
			unk_0x40861FC5E44959D6(0x00000000);
			unk_0x902FD904CBCE9316(1f);
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), "Mood_Normal_1", 0x00000000);
				unk_0x16BEAC335EC5109B(unk_0x16F2683693E537C9());
			}
			if (Global_4121CA > 0x00000000 && Global_4121CA < 0x0000000D)
			{
				unk_0xF5A41F3D3B38EFE3(sLocal_20[Global_4121CA]);
			}
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000012);
			if (func_148())
			{
				func_104(0x00000001, 0x00000001);
			}
			else
			{
				func_104(0x00000000, 0x00000001);
			}
			if (func_159(0x00000000, 0x00000001, iLocal_31, 0x00000001))
			{
				iLocal_31 = 0x00000000;
			}
			unk_0x10FAF14A60A0DBE1();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 0x00000001)
		{
			unk_0x6470351B03D8DD60(0x00000001);
		}
		else if (Global_4C1E.f_1 > 0x00000003)
		{
			unk_0x6470351B03D8DD60(0x00000000);
		}
	}
}

int func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		return 0x00000000;
	}
	iVar2 = 0x00000000;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 0x00000004)
	{
		iVar2 = 0x00000001;
	}
	if (Global_4127DB || iVar2)
	{
		return 0x00000001;
	}
	return 0x00000001;
}

int func_3()
{
	if (((Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000003) || Global_4C1E.f_1 == 0x00000000) || Global_4BE6 == 0x00000001)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_4()
{
	iLocal_57 = unk_0x57AA1C471AF0568D(0x00000000);
	switch (iLocal_57)
	{
		case 0x00000000:
			iLocal_54 = 0x00000000;
			iLocal_60 = unk_0xDD995CB5829FBD05();
			iLocal_61 = unk_0x1B872EA843C90348();
			if (iLocal_55 == 0x00000001)
			{
				if (iLocal_78 == 0x00000000)
				{
					if (unk_0x83D8570832F172A7(iLocal_91))
					{
						if (func_161())
						{
							if (Global_4121CA == 0x00000000)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
								{
									func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
								}
							}
							func_152(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 0xBF800000, 0xBF800000, 0xBF800000);
						}
						else
						{
							if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
							{
								func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
							}
							func_152(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 0xBF800000, 0xBF800000, 0xBF800000);
						}
					}
				}
				else if (unk_0x83D8570832F172A7(iLocal_91))
				{
					func_152(iLocal_91, "SHOW_PHOTO_FRAME", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
					func_152(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 0xBF800000, 0xBF800000, 0xBF800000);
				}
				iLocal_55 = 0x00000000;
			}
			unk_0xBBCE9616B024A2BF();
			break;
		
		case 0x00000001:
			if (!unk_0x3BBE4BCFD1B36E4B())
			{
				unk_0xFCC7D1ED80D1900C("CELL_SPINNER2");
				unk_0x9A681BEC95A1B92E(0x00000001);
			}
			break;
		
		case 0x00000002:
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001C))
			{
				iLocal_54 = 0x00000000;
				iLocal_60 = 0x00000000;
				iLocal_61 = 0x00000000;
			}
			else
			{
				Global_4C1E.f_1 = 0x00000003;
				Global_5552 = 0x00000001;
			}
			unk_0xBBCE9616B024A2BF();
			break;
	}
}

void func_5()
{
	if (func_101(0x00000002, Global_4BFF, 0x00000000))
	{
		func_1(0x00000000);
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001C))
		{
			unk_0x21387C9EECC2B220(0x00000000);
			SYSTEM::SETTIMERB(0x00000000);
			func_125();
			iLocal_78 = 0x00000000;
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			}
			func_124();
			iLocal_87 = 0x00000001;
		}
		else if (func_9())
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000000E))
			{
				func_147("CELL_299", 0xFFFFFFFF);
			}
			else
			{
				func_124();
				func_8();
			}
		}
		else
		{
			iLocal_103 = 0x00000001;
			func_104(0x00000001, 0x00000001);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000016))
	{
		func_1(0x00000000);
		while (SYSTEM::TIMERA() < 0x000007D0)
		{
			SYSTEM::WAIT(0x00000000);
			func_146();
			unk_0xC2127C0F64D6A3B9();
			func_83();
			func_133();
			func_128();
		}
		unk_0x21387C9EECC2B220(0x00000000);
		func_125();
		SYSTEM::SETTIMERB(0x00000000);
		iLocal_78 = 0x00000000;
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
		func_118();
		func_124();
	}
	if (func_101(0x00000002, Global_4C03, 0x00000000))
	{
		func_1(0x00000000);
		if (func_112() || unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001C))
		{
		}
		else
		{
			unk_0x21387C9EECC2B220(0x00000000);
			SYSTEM::SETTIMERB(0x00000000);
			iLocal_87 = 0x00000001;
			func_125();
			iLocal_78 = 0x00000000;
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			}
			func_124();
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001C))
	{
		if (func_101(0x00000002, Global_4C02, 0x00000000))
		{
			func_1(0x00000000);
			unk_0x21387C9EECC2B220(0x00000000);
			unk_0x918CFFD78ECE297E(0x00000000, 0x00000000);
			SYSTEM::WAIT(0x00000000);
			unk_0xC2127C0F64D6A3B9();
			func_146();
			SYSTEM::WAIT(0x00000000);
			unk_0xC2127C0F64D6A3B9();
			func_146();
			unk_0xFBFE41B3E19EA531();
			unk_0xAA23F71817ABF488();
			Global_5552 = 0x00000001;
			iLocal_94 = 0x00000000;
			iLocal_77 = 0x00000000;
			func_104(0x00000000, 0x00000001);
			Global_554E = 0x00000001;
			unk_0x2CBCC7DC0EEFF804(0x00000000, 0x00000001);
			iLocal_79 = 0x00000000;
			iLocal_69 = 0x00000001;
			iLocal_70 = 0x00000001;
			iLocal_71 = 0x00000001;
			iLocal_72 = 0x00000001;
			iLocal_73 = 0x00000001;
			iLocal_74 = 0x00000001;
			func_6();
			iLocal_78 = 0x00000000;
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			}
			func_111(0x00000000, 0x00000000);
			func_115(0x00000000);
			iLocal_66 = 0x00000000;
			func_106(0x00000001);
			if (!Global_26B66F.f_197A)
			{
				unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000009);
			}
			iLocal_93 = 0x00000000;
			func_152(Global_4C0B, "DISPLAY_VIEW", 16f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
}

void func_6()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Accept", &Global_4C13, 0x00000001);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x5A963FB0365294C8(0x00000005);
	}
}

void func_8()
{
	iLocal_100 = 0x00000001;
	Global_5553 = 0x00000001;
	unk_0x2CBCC7DC0EEFF804(0x00000000, 0x00000001);
}

int func_9()
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 0x00000001;
		}
	}
	if (Global_4C1E.f_1 < 0x00000004)
	{
		return 0x00000000;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 0x00000001;
		iLocal_102 = 0x00000002;
		return 0x00000000;
	}
	return 0x00000001;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		iVar0 = 0x000000B3;
		iVar1 = 0x00000015;
	}
	else
	{
		iVar0 = 0x000000E4;
		iVar1 = 0x000000E5;
	}
	if (iLocal_82)
	{
		func_74();
		func_70();
		func_69();
		fLocal_36 = unk_0xB2F0F5DA9031A63E();
		fLocal_37 = unk_0x21E534C9D41C0779();
		if (iLocal_84 == 0x00000000)
		{
			if (unk_0x06F8112AA79C53D9(0x00000002, iVar0) && !unk_0x06F8112AA79C53D9(0x00000002, iVar1))
			{
				iLocal_84 = 0x00000001;
				func_152(iLocal_92, "SET_CLEAR_SPACE", 200f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_152(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001C))
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B1, 0x00000001), "CELL_281");
					func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000002, 0x000000B3, 0x00000001), func_65());
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000002, 0x000000B2, 0x00000001), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B0, 0x00000001), "CELL_280");
					func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000000, 0x000000B1, 0x00000001), "CELL_281");
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000002, 0x000000B2, 0x00000001), "CELL_CAM_SELFIE_2");
				}
				func_64();
				unk_0x7E60C62A7CE58FC8(iLocal_92, "SET_MAX_WIDTH");
				unk_0x7C19E5E4784BD7CF(fLocal_40);
				unk_0x7E60D21B163E9D56();
				func_152(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
		}
		else if (!unk_0x06F8112AA79C53D9(0x00000002, iVar0) || unk_0x06F8112AA79C53D9(0x00000002, iVar1))
		{
			iLocal_84 = 0x00000000;
			func_118();
		}
		if (iLocal_85 == 0x00000000)
		{
			if (unk_0x06F8112AA79C53D9(0x00000002, iVar1) && !unk_0x06F8112AA79C53D9(0x00000002, iVar0))
			{
				iLocal_85 = 0x00000001;
				func_152(iLocal_92, "SET_CLEAR_SPACE", 200f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_152(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001C))
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B1, 0x00000001), "CELL_281");
					func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000002, 0x000000B3, 0x00000001), func_65());
				}
				else if (!func_148())
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B0, 0x00000001), "CELL_280");
					func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000000, 0x000000B1, 0x00000001), "CELL_281");
				}
				else
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B0, 0x00000001), "CELL_280");
					func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x000000B1, 0x00000001), "CELL_281");
				}
				func_63();
				unk_0x7E60C62A7CE58FC8(iLocal_92, "SET_MAX_WIDTH");
				unk_0x7C19E5E4784BD7CF(fLocal_40);
				unk_0x7E60D21B163E9D56();
				func_152(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
		}
		else if (!unk_0x06F8112AA79C53D9(0x00000002, iVar1) || unk_0x06F8112AA79C53D9(0x00000002, iVar0))
		{
			iLocal_85 = 0x00000000;
			func_118();
		}
	}
	else
	{
		unk_0xEAB026E686C0D991(0x00000000, 0x00000002, 0x00000001);
		unk_0xEAB026E686C0D991(0x00000000, 0x00000001, 0x00000001);
	}
	if (unk_0xB8E3620B82AD47D7(0x00000002))
	{
		func_118();
	}
	func_133();
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000C8, 0x00000001);
	}
	if (func_148())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000002);
			func_152(iLocal_91, "SHOW_PHOTO_FRAME", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	if ((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B7) && iLocal_106 == 0x00000000) && !func_148())
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
				{
					unk_0x0674E58A79778E99(&Global_4126C5, 0x00000002);
					if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
					{
						func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
					}
				}
				else
				{
					unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000002);
					func_152(iLocal_91, "SHOW_PHOTO_FRAME", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 0x00000001)
		{
			iLocal_83 = 0x00000000;
			unk_0x7E60C62A7CE58FC8(iLocal_91, "SET_FOCUS_LOCK");
			unk_0x1200CC973A2399C8(0x00000000);
			func_62("CELL_FOCUS");
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x7E60D21B163E9D56();
		}
		if (!func_61(0x0000000E))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000A))
			{
				if ((Global_12B4E == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("pi_menu")) > 0x00000000) && func_60())
				{
					unk_0x7E60C62A7CE58FC8(iLocal_91, "SET_FOCUS_LOCK");
					unk_0x1200CC973A2399C8(0x00000001);
					unk_0x7ACC3006A87F8B39("CELL_ACTTL");
					unk_0xD06AC7C87A34A6AD(unk_0x19C9F30A7697B43C(&Global_412A9E));
					unk_0x779B34565F4D71B1();
					unk_0x1200CC973A2399C8(0x00000000);
					unk_0x7E60D21B163E9D56();
					unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000A);
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000A))
		{
			unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000A);
		}
		iLocal_33 = unk_0x1C0640BA9A7327B3();
		if ((iLocal_33 - iLocal_32) > 0x000005DC)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				vLocal_35 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				if (unk_0x0EB28750412C3A5A(vLocal_35, vLocal_34, 0x00000001) > 5f)
				{
					Global_4C1E.f_1 = 0x00000003;
					unk_0x21387C9EECC2B220(0x00000000);
				}
				iLocal_32 = unk_0x1C0640BA9A7327B3();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!unk_0x06F8112AA79C53D9(0x00000000, 0x000000B6) && !func_148())
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
			iLocal_83 = 0x00000000;
			unk_0x7E60C62A7CE58FC8(iLocal_91, "SET_FOCUS_LOCK");
			unk_0x1200CC973A2399C8(0x00000000);
			func_62("CELL_FOCUS");
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x7E60D21B163E9D56();
		}
	}
	else if (unk_0x06F8112AA79C53D9(0x00000000, 0x000000B6) && !func_148())
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
		iLocal_83 = 0x00000001;
		if (!func_61(0x0000000E))
		{
			unk_0x7E60C62A7CE58FC8(iLocal_91, "SET_FOCUS_LOCK");
			unk_0x1200CC973A2399C8(0x00000001);
			func_62("CELL_FOCUS");
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x7E60D21B163E9D56();
		}
	}
	if (func_161())
	{
		if ((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BA) && iLocal_106 == 0x00000000) && !func_148())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0x00000000 && iLocal_24 < 0x00000007)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
						unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), "Mood_Normal_1", 0x00000000);
						unk_0x16BEAC335EC5109B(unk_0x16F2683693E537C9());
						if (Global_4C1E == 0x00000000)
						{
							iVar4 = 0x00000000;
							iVar2 = unk_0x98F1B512A2CC07C5(unk_0x16F2683693E537C9(), 0x00000000);
							if (iVar2 == 0x00000014 || iVar2 == 0x0000000E)
							{
								iVar4 = 0x00000001;
							}
							iVar3 = unk_0x98F1B512A2CC07C5(unk_0x16F2683693E537C9(), 0x00000001);
							if (iVar3 != 0xFFFFFFFF)
							{
								iVar4 = 0x00000001;
							}
							if (iVar4 == 0x00000001)
							{
								if ((((iLocal_24 == 0x00000002 || iLocal_24 == 0x00000003) || iLocal_24 == 0x00000004) || iLocal_24 == 0x00000008) || iLocal_24 == 0x00000009)
								{
									if (iVar2 == 0xFFFFFFFF && iVar3 > 0xFFFFFFFF)
									{
										if (iLocal_24 == 0x00000003)
										{
											unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), sLocal_22[iLocal_24], 0x00000000);
										}
									}
								}
								else
								{
									unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), sLocal_22[iLocal_24], 0x00000000);
								}
							}
							else
							{
								unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), sLocal_22[iLocal_24], 0x00000000);
							}
						}
						else
						{
							unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), sLocal_22[iLocal_24], 0x00000000);
						}
					}
				}
				if (iLocal_24 == 0x00000007 || iLocal_24 > 0x00000007)
				{
					iLocal_24 = 0x00000000;
				}
				if (iLocal_24 == 0x00000000)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), "Mood_Normal_1", 0x00000000);
						unk_0x16BEAC335EC5109B(unk_0x16F2683693E537C9());
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
					}
				}
			}
		}
		if ((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B9) && iLocal_106 == 0x00000000) && !func_148())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 0x00000001)
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
					if (iLocal_28 == 0x00000000)
					{
						iLocal_28 = 0x00000001;
						iLocal_27 = 0x00000001;
						if (unk_0x7F8A39872A07D2CE(sLocal_19[Global_4121C9], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xA6CB86BCFE04B70C(0x00000001);
							unk_0x40861FC5E44959D6(0x00000001);
						}
					}
					else
					{
						iLocal_28 = 0x00000000;
						iLocal_27 = 0x00000000;
						unk_0xA6CB86BCFE04B70C(0x00000000);
						unk_0x40861FC5E44959D6(0x00000000);
					}
				}
			}
			else if (bLocal_30 == 0x00000001)
			{
				if (iLocal_27 == 0x00000000)
				{
					iLocal_27 = 0x00000001;
					iLocal_28 = 0x00000001;
					unk_0xA6CB86BCFE04B70C(0x00000001);
					unk_0x40861FC5E44959D6(0x00000001);
				}
				else
				{
					iLocal_27 = 0x00000000;
					iLocal_28 = 0x00000000;
					unk_0xA6CB86BCFE04B70C(0x00000000);
					unk_0x40861FC5E44959D6(0x00000000);
				}
			}
		}
	}
	if (iLocal_26 == 0x00000001 && !func_148())
	{
		if (unk_0xBFC0798A6E3417F9(0x00000000, 0x000000AC) && iLocal_106 == 0x00000000)
		{
			if (func_161())
			{
				Global_4121CA++;
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
			}
			if (Global_4121CA == 0x0000000D)
			{
				func_115(0x00000000);
				unk_0x902FD904CBCE9316(1f);
				unk_0xF5A41F3D3B38EFE3(sLocal_20[(Global_4121CA - 0x00000001)]);
				Global_4121CA = 0x00000000;
				func_59();
				if (iLocal_21 == 0x00000001)
				{
					unk_0x0674E58A79778E99(&Global_4126C5, 0x00000002);
					iLocal_21 = 0x00000000;
					func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				}
			}
			if (Global_4121CA > 0x00000000 && Global_4121CA < 0x0000000D)
			{
				iLocal_26 = 0x00000000;
				iLocal_25 = 0x00000000;
				unk_0x0D3BE1DE0262A012(sLocal_20[Global_4121CA], 0x00000000);
			}
		}
	}
	if (Global_4121CA > 0x00000000)
	{
		if (iLocal_26 == 0x00000000)
		{
			if (unk_0x27117E2CDD4D67C3(sLocal_20[Global_4121CA]))
			{
				iLocal_25 = 0x00000001;
				iLocal_26 = 0x00000001;
				if (!unk_0xEB2424501D38FCE7())
				{
					func_115(0x00000001);
				}
				if (iLocal_21 == 0x00000000)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
					{
						iLocal_21 = 0x00000001;
					}
				}
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000002);
				func_152(iLocal_91, "SHOW_PHOTO_FRAME", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				unk_0x902FD904CBCE9316(0.25f);
				unk_0x1D86FFCD165BF465(sLocal_20[Global_4121CA], 0x00000000);
			}
		}
		if (iLocal_25 == 0x00000001)
		{
			if (Global_4121CA == 0x00000001 || Global_4121CA == 0x00000003)
			{
			}
			if (Global_4121CA == 0x00000002 || Global_4121CA == 0x00000004)
			{
			}
		}
	}
	if ((unk_0xBFC0798A6E3417F9(0x00000000, 0x000000AD) && iLocal_106 == 0x00000000) && !func_148())
	{
		if (func_161())
		{
			func_106(0x00000000);
			Global_4121C9++;
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
		}
		if (Global_4121C9 == 0x0000000D)
		{
			Global_4121C9 = 0x00000000;
		}
		if (Global_4121C9 == 0x00000000)
		{
			if (func_161())
			{
				func_106(0x00000000);
			}
		}
		else
		{
			func_116();
		}
		func_58();
	}
	if ((unk_0xD245978525608929(0x00000000, 0x000000B8) && iLocal_106 == 0x00000000) && !func_148())
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
			{
				vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
				func_152(iLocal_91, "SHOW_PHOTO_FRAME", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_151(iLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = unk_0x1C0640BA9A7327B3();
				while (unk_0x1C0640BA9A7327B3() < (iLocal_86 + iLocal_90) && Global_4C1E.f_1 > 0x00000003)
				{
					func_146();
					func_128();
					func_83();
					unk_0xC2127C0F64D6A3B9();
					SYSTEM::WAIT(0x00000000);
				}
				if (iLocal_82 == 0x00000000)
				{
					unk_0x55D0A2DB35045A35(iLocal_63);
					iLocal_82 = 0x00000001;
					func_57(0x00000001);
					func_56();
					unk_0x5D96D8530B3D0904(&Global_1CBE, 0x00000003);
					iLocal_32 = unk_0x1C0640BA9A7327B3();
				}
				else
				{
					iLocal_84 = 0x00000000;
					iLocal_85 = 0x00000000;
					func_57(0x00000000);
					iLocal_82 = 0x00000000;
					unk_0x0674E58A79778E99(&Global_1CBE, 0x00000003);
				}
				iLocal_86 = unk_0x1C0640BA9A7327B3();
				while (unk_0x1C0640BA9A7327B3() < (iLocal_86 + iLocal_88) && Global_4C1E.f_1 > 0x00000003)
				{
					func_146();
					func_128();
					func_83();
					unk_0xC2127C0F64D6A3B9();
					SYSTEM::WAIT(0x00000000);
				}
				func_151(iLocal_91, "OPEN_SHUTTER");
				if (func_161())
				{
					if (Global_4121CA == 0x00000000)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
						{
							func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						}
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
				{
					func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				}
				func_128();
				func_146();
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001C))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_54();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_28();
				}
			}
		}
	}
	if (iLocal_82 == 0x00000000)
	{
		if (iLocal_64 == 0x00000000)
		{
			if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000028) || unk_0xBFC0798A6E3417F9(0x00000000, 0x00000029))
			{
				fLocal_65 = unk_0x28DD0038B63F8DB5();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (unk_0x8AA6DC470ABA63A2(iLocal_63))
					{
						unk_0x4D7F4CC43D4D0DE3(iLocal_63, "Camera_Zoom", &Global_4C13, 0x00000001);
					}
				}
				else
				{
					unk_0x55D0A2DB35045A35(iLocal_63);
				}
				iLocal_64 = 0x00000001;
			}
		}
		else if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000028) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000029))
		{
			fLocal_65 = unk_0x28DD0038B63F8DB5();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (unk_0x8AA6DC470ABA63A2(iLocal_63))
				{
					unk_0x4D7F4CC43D4D0DE3(iLocal_63, "Camera_Zoom", &Global_4C13, 0x00000001);
				}
			}
			else
			{
				unk_0x55D0A2DB35045A35(iLocal_63);
			}
		}
		else
		{
			unk_0x55D0A2DB35045A35(iLocal_63);
		}
	}
	if ((func_101(0x00000002, Global_4BFF, 0x00000000) && !func_113()) && !func_101(0x00000002, Global_4BFE, 0x00000000))
	{
		fLocal_38 = unk_0xB2F0F5DA9031A63E();
		fLocal_39 = unk_0x21E534C9D41C0779();
		unk_0x918CFFD78ECE297E(0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000015);
		unk_0x55D0A2DB35045A35(iLocal_63);
		iLocal_78 = 0x00000001;
		func_152(iLocal_91, "SHOW_PHOTO_FRAME", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		func_152(iLocal_91, "SHOW_REMAINING_PHOTOS", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Camera_Shoot", &Global_4C13, 0x00000001);
		func_151(iLocal_91, "CLOSE_SHUTTER");
		vLocal_43 = { -90.3f, 0f, 90f };
		unk_0x44FE29702110D5C6(vLocal_43, 0x00000000);
		if (!func_161())
		{
			func_106(0x00000001);
		}
		Global_5551 = 0x00000001;
		unk_0x2CBCC7DC0EEFF804(0x00000000, 0x00000001);
		while (Global_5550 < 0x00000006 && Global_4C1E.f_1 > 0x00000003)
		{
			func_146();
			func_128();
			func_83();
			func_133();
			unk_0xC2127C0F64D6A3B9();
			SYSTEM::WAIT(0x00000000);
		}
		unk_0x130EC2FF22A1FA80(0x00000000, 0x00000000);
		if (Global_4BE4)
		{
			func_1(0x00000001);
		}
		iLocal_86 = unk_0x1C0640BA9A7327B3();
		while (unk_0x1C0640BA9A7327B3() < (iLocal_86 + iLocal_89) && Global_4C1E.f_1 > 0x00000003)
		{
			func_146();
			func_128();
			func_83();
			unk_0xC2127C0F64D6A3B9();
			SYSTEM::WAIT(0x00000000);
		}
		SYSTEM::SETTIMERA(0x00000000);
		func_151(iLocal_91, "OPEN_SHUTTER");
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000015);
		func_118();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (Global_12B4E)
			{
				func_21(0x0000043E, 0x00000001, 0xFFFFFFFF);
				func_20();
				func_17(0xA70C4656, 0x00000017, 0x00000000);
			}
			else
			{
				switch (func_11())
				{
					case 0x00000000:
						unk_0x9505C13496579D28(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 0x00000001:
						unk_0x9505C13496579D28(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 0x00000002:
						unk_0x9505C13496579D28(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_20();
			}
			func_115(0x00000000);
		}
		func_128();
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001C))
	{
		if (func_101(0x00000002, Global_4C02, 0x00000000))
		{
			unk_0x918CFFD78ECE297E(0x00000000, 0x00000000);
			SYSTEM::WAIT(0x00000000);
			unk_0xC2127C0F64D6A3B9();
			func_146();
			SYSTEM::WAIT(0x00000000);
			unk_0xC2127C0F64D6A3B9();
			func_146();
			unk_0xFBFE41B3E19EA531();
			unk_0xAA23F71817ABF488();
			Global_5552 = 0x00000001;
			iLocal_94 = 0x00000000;
			iLocal_77 = 0x00000001;
			Global_554E = 0x00000001;
			unk_0x2CBCC7DC0EEFF804(0x00000000, 0x00000001);
			iLocal_79 = 0x00000000;
			iLocal_69 = 0x00000001;
			iLocal_70 = 0x00000001;
			iLocal_71 = 0x00000001;
			iLocal_72 = 0x00000001;
			iLocal_73 = 0x00000001;
			iLocal_74 = 0x00000001;
			func_6();
			iLocal_78 = 0x00000000;
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			}
			func_111(0x00000000, 0x00000000);
			func_115(0x00000000);
			iLocal_66 = 0x00000000;
			func_106(0x00000001);
			if (!Global_26B66F.f_197A)
			{
				unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000009);
			}
			unk_0x21387C9EECC2B220(0x00000000);
			iLocal_93 = 0x00000000;
			func_152(Global_4C0B, "DISPLAY_VIEW", 16f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
}

int func_11()
{
	func_12();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_15(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_14(unk_0x16F2683693E537C9());
			if (func_13(iVar0) && (!func_61(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_13(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_13(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_16(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_19(iParam1, iParam2))
	{
		iVar0 = func_18();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_18()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000009;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (Global_258B8D[iVar1] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x0000000A;
		}
		iVar1++;
	}
	return iVar0;
}

int func_19(int iParam0, var uParam1)
{
	if (Global_140861)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000016)
	{
		return 0x00000001;
	}
	if ((((((((uParam1 || !Global_14086D) || iParam0 == 0x00000003) || iParam0 == 0x0000000A) || iParam0 == 0x0000000B) || iParam0 == 0x0000001B) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E)
	{
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_20()
{
	iLocal_72 = 0x00000001;
	iLocal_73 = 0x00000001;
	iLocal_74 = 0x00000001;
	iLocal_75 = 0x00000001;
	iLocal_76 = 0x00000000;
	Global_4BDF = { Global_4BEF[Global_4BE7 /*3*/] };
	func_104(0x00000000, 0x00000001);
	func_111(0x00000000, 0x00000000);
	func_115(0x00000000);
	iLocal_66 = 0x00000000;
	func_106(0x00000001);
	if (!unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001C))
	{
		if (unk_0xF026D357757F5F6A() == 0x00000000)
		{
			if (unk_0xA3F916BCE430ED26())
			{
				if (iLocal_68 == 0x00000000)
				{
					iLocal_68 = 0x00000001;
				}
			}
		}
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_25(iParam0, func_26(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_24(iParam0))
	{
		func_23(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_22(iParam0, iVar0, iParam2, 0x00000001);
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_26(uParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_26(uParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_26(uParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_26(uParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_26(uParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_26(uParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_26(uParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_26(uParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_26(uParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_26(uParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_26(uParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_23(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_24(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case 0x00000313:
			case 0x00000314:
			case 0x00000315:
			case 0x00000316:
			case 0x00002216:
			case 0x00000309:
			case 0x0000030A:
			case 0x0000030B:
			case 0x0000030C:
			case 0x00002218:
			case 0x000002FF:
			case 0x00000300:
			case 0x00000301:
			case 0x00000302:
			case 0x0000221A:
			case 0x000002F5:
			case 0x000002F6:
			case 0x000002F7:
			case 0x000002F8:
			case 0x0000221C:
			case 0x00000517:
			case 0x00001C41:
			case 0x0000027F:
			case 0x000004FE:
			case 0x000002FC:
			case 0x000002FD:
			case 0x000002FE:
			case 0x0000221B:
			case 0x000004D4:
			case 0x00000754:
			case 0x000008DB:
			case 0x00000B71:
			case 0x00000BF2:
			case 0x00002720:
			case 0x00000BED:
			case 0x00000BEE:
			case 0x00000BEF:
			case 0x00000BF0:
			case 0x00000BF1:
			case 0x00000CA0:
			case 0x00000CA2:
			case 0x00000E34:
			case 0x00000E35:
			case 0x00000E36:
			case 0x00000E37:
			case 0x00000E38:
			case 0x00000E39:
			case 0x00000E3A:
			case 0x00000E3B:
			case 0x00000E3C:
			case 0x00000E3D:
			case 0x00000C9B:
			case 0x00000C95:
			case 0x00000E4F:
			case 0x00000E50:
			case 0x00000E51:
			case 0x00000E52:
			case 0x00000E53:
			case 0x00000E54:
			case 0x00000E69:
			case 0x00000C9E:
			case 0x00000C9D:
			case 0x00000FB4:
			case 0x00000FB3:
			case 0x00000FB7:
			case 0x00000FB6:
			case 0x00000FBA:
			case 0x00000FB9:
			case 0x00000FBD:
			case 0x00000FBC:
			case 0x000017DE:
			case 0x000017DD:
			case 0x00001818:
			case 0x00001817:
			case 0x00001985:
			case 0x00001984:
			case 0x00001992:
			case 0x00001991:
			case 0x0000199F:
			case 0x0000199E:
			case 0x000019A2:
			case 0x000019A1:
			case 0x000019A5:
			case 0x000019A4:
			case 0x00001C73:
			case 0x00001C75:
			case 0x00001C77:
			case 0x0000205A:
			case 0x0000205B:
			case 0x0000205C:
			case 0x0000205D:
			case 0x0000205E:
			case 0x0000205F:
			case 0x00002060:
			case 0x00002061:
			case 0x00002062:
			case 0x00002063:
			case 0x00002064:
			case 0x00002065:
			case 0x00002066:
			case 0x00001F4A:
			case 0x00002156:
			case 0x0000230F:
			case 0x00002311:
			case 0x00002312:
			case 0x00002314:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_25(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_26(uParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_27();
		if (iVar1 > 0xFFFFFFFF)
		{
			Global_26E1B2 = 0x00000000;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0x00000000;
			Global_26E1B2 = 0x00000001;
		}
	}
	return iVar0;
}

var func_27()
{
	return Global_1407E9;
}

void func_28()
{
	if (iLocal_106 == 0x00000001)
	{
		func_53();
		return;
	}
	if (iLocal_84 == 0x00000000 && iLocal_85 == 0x00000000)
	{
		func_152(iLocal_92, "SET_CLEAR_SPACE", 200f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		func_152(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		if (!func_148())
		{
			func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000000, 0x000000B1, 0x00000001), "CELL_281");
			func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B0, 0x00000001), "CELL_280");
		}
		else
		{
			func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x000000B1, 0x00000001), "CELL_281");
			func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B0, 0x00000001), "CELL_280");
		}
		if (iLocal_82)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
				{
					if (unk_0x91E3F625EF57450D(0x00000002) || unk_0x33A494591F2C1975())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_12B4E == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("pi_menu")) > 0x00000000) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0x91E3F625EF57450D(0x00000002) || unk_0x33A494591F2C1975())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
					}
					func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000002, 0x000000B7, 0x00000001), "CELL_GRID");
					func_67(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
					if (func_161())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(0x00000001))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_67(iLocal_92, "SET_DATA_SLOT", 8f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 7f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
			{
				if (!unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
				{
					if (!func_148())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
						func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000002, 0x000000B7, 0x00000001), "CELL_GRID");
						func_67(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xF59058FCB716F903(0x00000000, 0x00000027, 0x00000001), "CELL_284");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
						if (!unk_0x91E3F625EF57450D(0x00000000))
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000000, 0x000000D2, 0x00000001), "CELL_284");
						}
						else
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x0000001D, 0x00000001), "CELL_284");
						}
					}
					if (!func_148())
					{
						if (func_161())
						{
							func_50(6f);
							func_49(7f);
							if (bLocal_30)
							{
								func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x000000B6, 0x00000001), "CELL_FOCUS");
							}
							func_67(iLocal_92, "SET_DATA_SLOT", 8f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_92, "SET_DATA_SLOT", 8f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_148())
				{
					if (unk_0x91E3F625EF57450D(0x00000002) || unk_0x33A494591F2C1975())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_1NP_XB");
					}
				}
				if (!unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
				{
					if (!func_148())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xF59058FCB716F903(0x00000002, 0x000000B7, 0x00000001), "CELL_GRID");
						func_67(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
						if (!unk_0x91E3F625EF57450D(0x00000000))
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000000, 0x000000D2, 0x00000001), "CELL_284");
						}
						else
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x0000001D, 0x00000001), "CELL_284");
						}
					}
					if (!func_148())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 6f, unk_0xF59058FCB716F903(0x00000000, 0x00000027, 0x00000001), "CELL_284");
					}
					if (!func_148())
					{
						if (func_161())
						{
							func_50(7f);
							func_49(8f);
							if (bLocal_30)
							{
								func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x000000B6, 0x00000001), "CELL_FOCUS");
							}
							func_67(iLocal_92, "SET_DATA_SLOT", 9f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x7E60C62A7CE58FC8(iLocal_92, "SET_MAX_WIDTH");
		unk_0x7C19E5E4784BD7CF(fLocal_40);
		unk_0x7E60D21B163E9D56();
		func_152(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	}
}

void func_29(float fParam0)
{
	func_67(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0xF59058FCB716F903(0x00000000, 0x000000AE, 0x00000001), "CELL_ACTION");
}

int func_30(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_48(Global_40004A, Global_40004B))
		{
			if (iParam0 == 0x00000000 || !func_31(Global_40004A, Global_40004B, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_32(unk_0x16F2683693E537C9(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_32(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_47())
	{
		return 0x00000000;
	}
	uVar0 = 0x00000005;
	uVar1 = 0x00000005;
	uVar2 = 0x00000006;
	if (iParam1 == 0x00000000)
	{
		iVar6 = 0x00000003;
	}
	else if (bParam3)
	{
		iVar6 = 0x00000001;
	}
	else if (bParam4)
	{
		iVar6 = 0x00000002;
	}
	else
	{
		iVar6 = 0x00000000;
	}
	func_40(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_39(iParam0);
			if (!iVar3 == 0xFFFFFFFF)
			{
				if (func_38(&uVar0, iVar3))
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			iVar4 = func_37(iParam0);
			if (!iVar4 == 0xFFFFFFFF)
			{
				if (func_35(&uVar1, iVar4))
				{
					return 0x00000001;
				}
			}
		}
		if (unk_0x8CD06866876216F2())
		{
			iVar5 = func_34(iParam0);
			if (!iVar5 == 0x00000000)
			{
				if (func_33(&uVar2, iVar5))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x36C584991B4C183F(iParam0, 0x00000001);
	return iVar0;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, 0x00000000);
	return iVar0;
}

bool func_38(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, 0x00000000);
	return iVar0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 0x0000005B, 0x00000001);
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000000:
			func_45(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000003:
					switch (iParam5)
					{
						case 0x00000000:
							func_44(uParam3, 0x0000000D, 0x00000001);
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000002, 0x00000001);
							func_42(uParam2, 0x00000014, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004B, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
						
						case 0x00000001:
							func_44(uParam3, 0x00000004, 0x00000001);
							func_44(uParam3, 0x0000000D, 0x00000001);
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000002, 0x00000001);
							func_42(uParam2, 0x00000014, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x0000002B, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004B, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
						
						case 0x00000002:
							func_44(uParam3, 0x0000000D, 0x00000001);
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000027, 0x00000001);
							func_42(uParam2, 0x00000002, 0x00000001);
							func_42(uParam2, 0x00000014, 0x00000001);
							func_42(uParam2, 0x00000026, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004B, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
					}
					break;
				
				case 0x00000005:
				case 0x00000018:
					switch (iParam5)
					{
						case 0x00000000:
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000010, 0x00000001);
							func_42(uParam2, 0x0000002F, 0x00000001);
							func_42(uParam2, 0x00000030, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000001, 0x00000001);
							func_46(uParam4, 0x00000002, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000004, 0x00000001);
							func_46(uParam4, 0x00000005, 0x00000001);
							func_46(uParam4, 0x00000007, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000C, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x0000000E, 0x00000001);
							func_46(uParam4, 0x0000000F, 0x00000001);
							func_46(uParam4, 0x00000010, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x0000002B, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_46(uParam4, 0x00000073, 0x00000001);
							func_46(uParam4, 0x00000074, 0x00000001);
							func_46(uParam4, 0x00000088, 0x00000001);
							func_46(uParam4, 0x0000008A, 0x00000001);
							func_46(uParam4, 0x0000008B, 0x00000001);
							func_46(uParam4, 0x0000008F, 0x00000001);
							func_46(uParam4, 0x00000090, 0x00000001);
							func_46(uParam4, 0x00000091, 0x00000001);
							func_46(uParam4, 0x00000093, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
						
						case 0x00000001:
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000010, 0x00000001);
							func_42(uParam2, 0x0000002F, 0x00000001);
							func_42(uParam2, 0x00000030, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_46(uParam4, 0x00000073, 0x00000001);
							func_46(uParam4, 0x00000074, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
						
						case 0x00000002:
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000004, 0x00000001);
							func_46(uParam4, 0x00000005, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000C, 0x00000001);
							func_46(uParam4, 0x0000000E, 0x00000001);
							func_46(uParam4, 0x0000000F, 0x00000001);
							func_46(uParam4, 0x00000010, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_46(uParam4, 0x00000073, 0x00000001);
							func_46(uParam4, 0x00000074, 0x00000001);
							func_46(uParam4, 0x00000088, 0x00000001);
							func_46(uParam4, 0x0000008A, 0x00000001);
							func_46(uParam4, 0x0000008B, 0x00000001);
							func_46(uParam4, 0x0000008F, 0x00000001);
							func_46(uParam4, 0x00000090, 0x00000001);
							func_46(uParam4, 0x00000091, 0x00000001);
							func_46(uParam4, 0x00000093, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
					}
					break;
				
				case 0x00000034:
					switch (iParam5)
					{
						case 0x00000000:
							func_44(uParam3, 0x00000042, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004D, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 0x00000001:
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000C, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000020, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000022, 0x00000001);
							func_46(uParam4, 0x0000002B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 0x00000035:
					func_44(uParam3, 0x00000043, 0x00000001);
					func_44(uParam3, 0x00000044, 0x00000001);
					func_44(uParam3, 0x00000045, 0x00000001);
					func_44(uParam3, 0x00000046, 0x00000001);
					func_44(uParam3, 0x00000047, 0x00000001);
					func_44(uParam3, 0x00000048, 0x00000001);
					func_44(uParam3, 0x00000049, 0x00000001);
					func_44(uParam3, 0x0000004A, 0x00000001);
					func_44(uParam3, 0x0000004E, 0x00000001);
					func_44(uParam3, 0x0000004F, 0x00000001);
					func_44(uParam3, 0x00000050, 0x00000001);
					func_44(uParam3, 0x00000051, 0x00000001);
					func_44(uParam3, 0x00000052, 0x00000001);
					func_44(uParam3, 0x0000005B, 0x00000001);
					func_44(uParam3, 0x0000005C, 0x00000001);
					func_42(uParam2, 0x00000042, 0x00000001);
					func_42(uParam2, 0x00000043, 0x00000001);
					func_42(uParam2, 0x00000044, 0x00000001);
					func_42(uParam2, 0x00000045, 0x00000001);
					func_42(uParam2, 0x00000046, 0x00000001);
					func_42(uParam2, 0x00000047, 0x00000001);
					func_42(uParam2, 0x00000048, 0x00000001);
					func_42(uParam2, 0x00000049, 0x00000001);
					func_42(uParam2, 0x0000004D, 0x00000001);
					func_42(uParam2, 0x0000004E, 0x00000001);
					func_42(uParam2, 0x0000004F, 0x00000001);
					func_42(uParam2, 0x00000050, 0x00000001);
					func_42(uParam2, 0x00000051, 0x00000001);
					func_42(uParam2, 0x0000005A, 0x00000001);
					func_42(uParam2, 0x0000005B, 0x00000001);
					func_44(uParam3, 0x00000026, 0x00000001);
					func_44(uParam3, 0x0000002F, 0x00000001);
					func_44(uParam3, 0x0000006F, 0x00000001);
					func_42(uParam2, 0x00000025, 0x00000001);
					func_42(uParam2, 0x0000002E, 0x00000001);
					func_42(uParam2, 0x0000006E, 0x00000001);
					func_46(uParam4, 0x0000005C, 0x00000001);
					func_46(uParam4, 0x0000005D, 0x00000001);
					func_46(uParam4, 0x0000005E, 0x00000001);
					func_46(uParam4, 0x00000060, 0x00000001);
					func_46(uParam4, 0x00000061, 0x00000001);
					func_46(uParam4, 0x00000062, 0x00000001);
					func_46(uParam4, 0x00000064, 0x00000001);
					func_46(uParam4, 0x00000067, 0x00000001);
					func_46(uParam4, 0x00000068, 0x00000001);
					func_46(uParam4, 0x00000069, 0x00000001);
					func_46(uParam4, 0x0000006A, 0x00000001);
					func_46(uParam4, 0x0000006B, 0x00000001);
					func_46(uParam4, 0x0000006C, 0x00000001);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 0x00000036:
					func_44(uParam3, 0x00000043, 0x00000001);
					func_44(uParam3, 0x00000044, 0x00000001);
					func_44(uParam3, 0x00000045, 0x00000001);
					func_44(uParam3, 0x00000046, 0x00000001);
					func_44(uParam3, 0x00000047, 0x00000001);
					func_44(uParam3, 0x00000048, 0x00000001);
					func_44(uParam3, 0x00000049, 0x00000001);
					func_44(uParam3, 0x0000004A, 0x00000001);
					func_44(uParam3, 0x0000004E, 0x00000001);
					func_44(uParam3, 0x0000004F, 0x00000001);
					func_44(uParam3, 0x00000050, 0x00000001);
					func_44(uParam3, 0x00000051, 0x00000001);
					func_44(uParam3, 0x00000052, 0x00000001);
					func_44(uParam3, 0x0000005B, 0x00000001);
					func_44(uParam3, 0x0000005C, 0x00000001);
					func_42(uParam2, 0x00000042, 0x00000001);
					func_42(uParam2, 0x00000043, 0x00000001);
					func_42(uParam2, 0x00000044, 0x00000001);
					func_42(uParam2, 0x00000045, 0x00000001);
					func_42(uParam2, 0x00000046, 0x00000001);
					func_42(uParam2, 0x00000047, 0x00000001);
					func_42(uParam2, 0x00000048, 0x00000001);
					func_42(uParam2, 0x00000049, 0x00000001);
					func_42(uParam2, 0x0000004D, 0x00000001);
					func_42(uParam2, 0x0000004E, 0x00000001);
					func_42(uParam2, 0x0000004F, 0x00000001);
					func_42(uParam2, 0x00000050, 0x00000001);
					func_42(uParam2, 0x00000051, 0x00000001);
					func_42(uParam2, 0x0000005A, 0x00000001);
					func_42(uParam2, 0x0000005B, 0x00000001);
					func_44(uParam3, 0x00000026, 0x00000001);
					func_44(uParam3, 0x0000002F, 0x00000001);
					func_44(uParam3, 0x0000006F, 0x00000001);
					func_42(uParam2, 0x00000025, 0x00000001);
					func_42(uParam2, 0x0000002E, 0x00000001);
					func_42(uParam2, 0x0000006E, 0x00000001);
					func_46(uParam4, 0x0000005C, 0x00000001);
					func_46(uParam4, 0x0000005D, 0x00000001);
					func_46(uParam4, 0x0000005E, 0x00000001);
					func_46(uParam4, 0x00000060, 0x00000001);
					func_46(uParam4, 0x00000061, 0x00000001);
					func_46(uParam4, 0x00000062, 0x00000001);
					func_46(uParam4, 0x00000064, 0x00000001);
					func_46(uParam4, 0x00000067, 0x00000001);
					func_46(uParam4, 0x00000068, 0x00000001);
					func_46(uParam4, 0x00000069, 0x00000001);
					func_46(uParam4, 0x0000006A, 0x00000001);
					func_46(uParam4, 0x0000006B, 0x00000001);
					func_46(uParam4, 0x0000006C, 0x00000001);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 0x00000037:
					func_44(uParam3, 0x00000043, 0x00000001);
					func_44(uParam3, 0x00000044, 0x00000001);
					func_44(uParam3, 0x00000045, 0x00000001);
					func_44(uParam3, 0x00000046, 0x00000001);
					func_44(uParam3, 0x00000047, 0x00000001);
					func_44(uParam3, 0x00000048, 0x00000001);
					func_44(uParam3, 0x00000049, 0x00000001);
					func_44(uParam3, 0x0000004A, 0x00000001);
					func_44(uParam3, 0x0000004E, 0x00000001);
					func_44(uParam3, 0x0000004F, 0x00000001);
					func_44(uParam3, 0x00000050, 0x00000001);
					func_44(uParam3, 0x00000051, 0x00000001);
					func_44(uParam3, 0x00000052, 0x00000001);
					func_44(uParam3, 0x0000005B, 0x00000001);
					func_44(uParam3, 0x0000005C, 0x00000001);
					func_42(uParam2, 0x00000042, 0x00000001);
					func_42(uParam2, 0x00000043, 0x00000001);
					func_42(uParam2, 0x00000044, 0x00000001);
					func_42(uParam2, 0x00000045, 0x00000001);
					func_42(uParam2, 0x00000046, 0x00000001);
					func_42(uParam2, 0x00000047, 0x00000001);
					func_42(uParam2, 0x00000048, 0x00000001);
					func_42(uParam2, 0x00000049, 0x00000001);
					func_42(uParam2, 0x0000004D, 0x00000001);
					func_42(uParam2, 0x0000004E, 0x00000001);
					func_42(uParam2, 0x0000004F, 0x00000001);
					func_42(uParam2, 0x00000050, 0x00000001);
					func_42(uParam2, 0x00000051, 0x00000001);
					func_42(uParam2, 0x0000005A, 0x00000001);
					func_42(uParam2, 0x0000005B, 0x00000001);
					func_44(uParam3, 0x00000026, 0x00000001);
					func_44(uParam3, 0x0000002F, 0x00000001);
					func_44(uParam3, 0x0000006F, 0x00000001);
					func_42(uParam2, 0x00000025, 0x00000001);
					func_42(uParam2, 0x0000002E, 0x00000001);
					func_42(uParam2, 0x0000006E, 0x00000001);
					func_46(uParam4, 0x0000005C, 0x00000001);
					func_46(uParam4, 0x0000005D, 0x00000001);
					func_46(uParam4, 0x0000005E, 0x00000001);
					func_46(uParam4, 0x00000060, 0x00000001);
					func_46(uParam4, 0x00000061, 0x00000001);
					func_46(uParam4, 0x00000062, 0x00000001);
					func_46(uParam4, 0x00000064, 0x00000001);
					func_46(uParam4, 0x00000067, 0x00000001);
					func_46(uParam4, 0x00000068, 0x00000001);
					func_46(uParam4, 0x00000069, 0x00000001);
					func_46(uParam4, 0x0000006A, 0x00000001);
					func_46(uParam4, 0x0000006B, 0x00000001);
					func_46(uParam4, 0x0000006C, 0x00000001);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 0x00000038:
				case 0x00000039:
				case 0x0000003A:
					switch (iParam5)
					{
						case 0x00000000:
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000C, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000020, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000022, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 0x00000001:
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 0x00000002:
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 0x0000000A:
					switch (iParam5)
					{
						case 0x00000000:
							func_44(uParam3, 0x00000003, 0x00000001);
							func_44(uParam3, 0x00000004, 0x00000001);
							func_44(uParam3, 0x00000006, 0x00000001);
							func_44(uParam3, 0x0000000A, 0x00000001);
							func_44(uParam3, 0x00000036, 0x00000001);
							func_44(uParam3, 0x00000037, 0x00000001);
							func_44(uParam3, 0x00000038, 0x00000001);
							func_44(uParam3, 0x0000000D, 0x00000001);
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_44(uParam3, 0x00000014, 0x00000001);
							func_44(uParam3, 0x0000001A, 0x00000001);
							func_44(uParam3, 0x0000001B, 0x00000001);
							func_44(uParam3, 0x00000020, 0x00000001);
							func_44(uParam3, 0x00000021, 0x00000001);
							func_44(uParam3, 0x00000025, 0x00000001);
							func_44(uParam3, 0x00000027, 0x00000001);
							func_44(uParam3, 0x00000037, 0x00000001);
							func_44(uParam3, 0x0000006A, 0x00000001);
							func_44(uParam3, 0x00000072, 0x00000001);
							func_44(uParam3, 0x00000074, 0x00000001);
							func_44(uParam3, 0x00000075, 0x00000001);
							func_44(uParam3, 0x00000076, 0x00000001);
							func_44(uParam3, 0x00000077, 0x00000001);
							func_42(uParam2, 0x00000003, 0x00000001);
							func_42(uParam2, 0x00000004, 0x00000001);
							func_42(uParam2, 0x00000006, 0x00000001);
							func_42(uParam2, 0x00000008, 0x00000001);
							func_42(uParam2, 0x00000009, 0x00000001);
							func_42(uParam2, 0x0000000A, 0x00000001);
							func_42(uParam2, 0x00000035, 0x00000001);
							func_42(uParam2, 0x00000038, 0x00000001);
							func_42(uParam2, 0x00000037, 0x00000001);
							func_42(uParam2, 0x0000000D, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_42(uParam2, 0x00000015, 0x00000001);
							func_42(uParam2, 0x0000001A, 0x00000001);
							func_42(uParam2, 0x0000001B, 0x00000001);
							func_42(uParam2, 0x0000001C, 0x00000001);
							func_42(uParam2, 0x00000020, 0x00000001);
							func_42(uParam2, 0x00000024, 0x00000001);
							func_42(uParam2, 0x00000026, 0x00000001);
							func_42(uParam2, 0x00000037, 0x00000001);
							func_42(uParam2, 0x0000000E, 0x00000001);
							func_42(uParam2, 0x00000069, 0x00000001);
							func_42(uParam2, 0x00000071, 0x00000001);
							func_42(uParam2, 0x00000072, 0x00000001);
							func_42(uParam2, 0x00000073, 0x00000001);
							func_42(uParam2, 0x00000074, 0x00000001);
							func_42(uParam2, 0x00000075, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000004, 0x00000001);
							func_46(uParam4, 0x0000000E, 0x00000001);
							func_46(uParam4, 0x0000000F, 0x00000001);
							func_46(uParam4, 0x00000010, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000C, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000020, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000022, 0x00000001);
							func_46(uParam4, 0x0000002B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_44(uParam3, 0x00000041, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004B, 0x00000001);
							func_44(uParam3, 0x0000004C, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000040, 0x00000001);
							func_42(uParam2, 0x00000041, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000004B, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 0x00000001:
							func_44(uParam3, 0x00000003, 0x00000001);
							func_44(uParam3, 0x00000004, 0x00000001);
							func_44(uParam3, 0x00000006, 0x00000001);
							func_44(uParam3, 0x0000000D, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_44(uParam3, 0x00000013, 0x00000001);
							func_44(uParam3, 0x00000014, 0x00000001);
							func_44(uParam3, 0x0000001A, 0x00000001);
							func_44(uParam3, 0x0000001B, 0x00000001);
							func_44(uParam3, 0x00000020, 0x00000001);
							func_44(uParam3, 0x00000021, 0x00000001);
							func_44(uParam3, 0x00000025, 0x00000001);
							func_44(uParam3, 0x00000027, 0x00000001);
							func_44(uParam3, 0x00000037, 0x00000001);
							func_44(uParam3, 0x0000006A, 0x00000001);
							func_44(uParam3, 0x00000072, 0x00000001);
							func_44(uParam3, 0x00000074, 0x00000001);
							func_44(uParam3, 0x00000075, 0x00000001);
							func_44(uParam3, 0x00000076, 0x00000001);
							func_44(uParam3, 0x00000077, 0x00000001);
							func_42(uParam2, 0x00000003, 0x00000001);
							func_42(uParam2, 0x00000004, 0x00000001);
							func_42(uParam2, 0x00000006, 0x00000001);
							func_42(uParam2, 0x00000008, 0x00000001);
							func_42(uParam2, 0x00000009, 0x00000001);
							func_42(uParam2, 0x0000000A, 0x00000001);
							func_42(uParam2, 0x00000035, 0x00000001);
							func_42(uParam2, 0x00000038, 0x00000001);
							func_42(uParam2, 0x00000037, 0x00000001);
							func_42(uParam2, 0x0000000B, 0x00000001);
							func_42(uParam2, 0x0000000D, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_42(uParam2, 0x00000015, 0x00000001);
							func_42(uParam2, 0x00000016, 0x00000001);
							func_42(uParam2, 0x00000036, 0x00000001);
							func_42(uParam2, 0x0000001A, 0x00000001);
							func_42(uParam2, 0x0000001B, 0x00000001);
							func_42(uParam2, 0x0000001C, 0x00000001);
							func_42(uParam2, 0x0000001E, 0x00000001);
							func_42(uParam2, 0x0000001F, 0x00000001);
							func_42(uParam2, 0x00000020, 0x00000001);
							func_42(uParam2, 0x00000024, 0x00000001);
							func_42(uParam2, 0x00000026, 0x00000001);
							func_42(uParam2, 0x00000037, 0x00000001);
							func_42(uParam2, 0x0000000E, 0x00000001);
							func_42(uParam2, 0x00000069, 0x00000001);
							func_42(uParam2, 0x00000071, 0x00000001);
							func_42(uParam2, 0x00000072, 0x00000001);
							func_42(uParam2, 0x00000073, 0x00000001);
							func_42(uParam2, 0x00000074, 0x00000001);
							func_42(uParam2, 0x00000075, 0x00000001);
							func_46(uParam4, 0x00000002, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000004, 0x00000001);
							func_46(uParam4, 0x0000000E, 0x00000001);
							func_46(uParam4, 0x0000000F, 0x00000001);
							func_46(uParam4, 0x00000010, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000C, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000020, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000022, 0x00000001);
							func_46(uParam4, 0x0000002B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_44(uParam3, 0x00000041, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004B, 0x00000001);
							func_44(uParam3, 0x0000004C, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000040, 0x00000001);
							func_42(uParam2, 0x00000041, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000004B, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 0x00000002:
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_44(uParam3, 0x00000027, 0x00000001);
							func_44(uParam3, 0x0000006A, 0x00000001);
							func_44(uParam3, 0x00000072, 0x00000001);
							func_44(uParam3, 0x00000074, 0x00000001);
							func_44(uParam3, 0x00000075, 0x00000001);
							func_44(uParam3, 0x00000076, 0x00000001);
							func_44(uParam3, 0x00000077, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_42(uParam2, 0x00000026, 0x00000001);
							func_42(uParam2, 0x0000000E, 0x00000001);
							func_42(uParam2, 0x00000069, 0x00000001);
							func_42(uParam2, 0x00000071, 0x00000001);
							func_42(uParam2, 0x00000072, 0x00000001);
							func_42(uParam2, 0x00000073, 0x00000001);
							func_42(uParam2, 0x00000074, 0x00000001);
							func_42(uParam2, 0x00000075, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000C, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000020, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000022, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_44(uParam3, 0x00000041, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004B, 0x00000001);
							func_44(uParam3, 0x0000004C, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000040, 0x00000001);
							func_42(uParam2, 0x00000041, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000004B, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 0x0000000D:
					switch (iParam5)
					{
						case 0x00000000:
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_42(uParam2, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000002, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000020, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000022, 0x00000001);
							func_46(uParam4, 0x0000002B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_46(uParam4, 0x00000073, 0x00000001);
							func_46(uParam4, 0x00000074, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 0x00000001:
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000002, 0x00000001);
							func_46(uParam4, 0x00000007, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000020, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000022, 0x00000001);
							func_46(uParam4, 0x0000002B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_46(uParam4, 0x00000073, 0x00000001);
							func_46(uParam4, 0x00000074, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
						
						case 0x00000002:
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000001, 0x00000001);
							func_46(uParam4, 0x00000002, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000005, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000020, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000022, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_46(uParam4, 0x00000073, 0x00000001);
							func_46(uParam4, 0x00000074, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
					}
					break;
				
				case 0x00000010:
					switch (iParam5)
					{
						case 0x00000000:
							func_44(uParam3, 0x00000004, 0x00000001);
							break;
						
						case 0x00000001:
							func_46(uParam4, 0x0000002B, 0x00000001);
							break;
						
						case 0x00000002:
							break;
					}
					break;
				
				case 0x00000017:
					switch (iParam5)
					{
						case 0x00000000:
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 0x00000001:
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 0x00000002:
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_46(uParam4, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000070, 0x00000001);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 0x00000011:
					switch (iParam5)
					{
						case 0x00000000:
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000010, 0x00000001);
							func_42(uParam2, 0x0000002F, 0x00000001);
							func_42(uParam2, 0x00000030, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000001, 0x00000001);
							func_46(uParam4, 0x00000002, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000005, 0x00000001);
							func_46(uParam4, 0x00000006, 0x00000001);
							func_46(uParam4, 0x00000007, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
						
						case 0x00000001:
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000010, 0x00000001);
							func_42(uParam2, 0x0000002F, 0x00000001);
							func_42(uParam2, 0x00000030, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000001, 0x00000001);
							func_46(uParam4, 0x00000002, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000005, 0x00000001);
							func_46(uParam4, 0x00000006, 0x00000001);
							func_46(uParam4, 0x00000007, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x0000002B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
						
						case 0x00000002:
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000010, 0x00000001);
							func_42(uParam2, 0x0000002F, 0x00000001);
							func_42(uParam2, 0x00000030, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_46(uParam4, 0x00000001, 0x00000001);
							func_46(uParam4, 0x00000002, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000005, 0x00000001);
							func_46(uParam4, 0x00000006, 0x00000001);
							func_46(uParam4, 0x00000007, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
					}
					break;
				
				case 0x00000013:
					switch (iParam5)
					{
						case 0x00000000:
							func_44(uParam3, 0x00000003, 0x00000001);
							func_44(uParam3, 0x00000007, 0x00000001);
							func_44(uParam3, 0x00000000, 0x00000001);
							func_44(uParam3, 0x0000000C, 0x00000001);
							func_44(uParam3, 0x0000000D, 0x00000001);
							func_44(uParam3, 0x0000000F, 0x00000001);
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000011, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_44(uParam3, 0x00000014, 0x00000001);
							func_44(uParam3, 0x00000015, 0x00000001);
							func_44(uParam3, 0x00000019, 0x00000001);
							func_44(uParam3, 0x0000001A, 0x00000001);
							func_44(uParam3, 0x0000001B, 0x00000001);
							func_44(uParam3, 0x0000001E, 0x00000001);
							func_44(uParam3, 0x0000001F, 0x00000001);
							func_44(uParam3, 0x00000020, 0x00000001);
							func_44(uParam3, 0x00000021, 0x00000001);
							func_44(uParam3, 0x00000027, 0x00000001);
							func_44(uParam3, 0x00000025, 0x00000001);
							func_42(uParam2, 0x00000000, 0x00000001);
							func_42(uParam2, 0x00000002, 0x00000001);
							func_42(uParam2, 0x00000003, 0x00000001);
							func_42(uParam2, 0x00000004, 0x00000001);
							func_42(uParam2, 0x00000006, 0x00000001);
							func_42(uParam2, 0x00000007, 0x00000001);
							func_42(uParam2, 0x00000008, 0x00000001);
							func_42(uParam2, 0x0000000B, 0x00000001);
							func_42(uParam2, 0x0000000D, 0x00000001);
							func_42(uParam2, 0x0000000F, 0x00000001);
							func_42(uParam2, 0x00000010, 0x00000001);
							func_42(uParam2, 0x0000002F, 0x00000001);
							func_42(uParam2, 0x00000030, 0x00000001);
							func_42(uParam2, 0x00000011, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_42(uParam2, 0x00000013, 0x00000001);
							func_42(uParam2, 0x00000014, 0x00000001);
							func_42(uParam2, 0x00000015, 0x00000001);
							func_42(uParam2, 0x00000016, 0x00000001);
							func_42(uParam2, 0x00000036, 0x00000001);
							func_42(uParam2, 0x00000018, 0x00000001);
							func_42(uParam2, 0x0000001A, 0x00000001);
							func_42(uParam2, 0x0000001B, 0x00000001);
							func_42(uParam2, 0x0000001C, 0x00000001);
							func_42(uParam2, 0x0000001E, 0x00000001);
							func_42(uParam2, 0x0000001F, 0x00000001);
							func_42(uParam2, 0x00000020, 0x00000001);
							func_42(uParam2, 0x00000026, 0x00000001);
							func_42(uParam2, 0x00000024, 0x00000001);
							func_46(uParam4, 0x00000001, 0x00000001);
							func_46(uParam4, 0x00000002, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000004, 0x00000001);
							func_46(uParam4, 0x0000000E, 0x00000001);
							func_46(uParam4, 0x0000000F, 0x00000001);
							func_46(uParam4, 0x00000010, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000022, 0x00000001);
							func_46(uParam4, 0x0000002B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_44(uParam3, 0x00000041, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004B, 0x00000001);
							func_44(uParam3, 0x0000004C, 0x00000001);
							func_44(uParam3, 0x0000004D, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000040, 0x00000001);
							func_42(uParam2, 0x00000041, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000004B, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
						
						case 0x00000001:
							func_44(uParam3, 0x00000003, 0x00000001);
							func_44(uParam3, 0x00000007, 0x00000001);
							func_44(uParam3, 0x00000000, 0x00000001);
							func_44(uParam3, 0x0000000C, 0x00000001);
							func_44(uParam3, 0x0000000D, 0x00000001);
							func_44(uParam3, 0x0000000F, 0x00000001);
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000011, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_44(uParam3, 0x00000014, 0x00000001);
							func_44(uParam3, 0x00000015, 0x00000001);
							func_44(uParam3, 0x00000019, 0x00000001);
							func_44(uParam3, 0x0000001A, 0x00000001);
							func_44(uParam3, 0x0000001B, 0x00000001);
							func_44(uParam3, 0x0000001E, 0x00000001);
							func_44(uParam3, 0x0000001F, 0x00000001);
							func_44(uParam3, 0x00000020, 0x00000001);
							func_44(uParam3, 0x00000021, 0x00000001);
							func_44(uParam3, 0x00000027, 0x00000001);
							func_42(uParam2, 0x00000000, 0x00000001);
							func_42(uParam2, 0x00000002, 0x00000001);
							func_42(uParam2, 0x00000003, 0x00000001);
							func_42(uParam2, 0x00000004, 0x00000001);
							func_42(uParam2, 0x00000006, 0x00000001);
							func_42(uParam2, 0x00000007, 0x00000001);
							func_42(uParam2, 0x0000000B, 0x00000001);
							func_42(uParam2, 0x0000000D, 0x00000001);
							func_42(uParam2, 0x0000000F, 0x00000001);
							func_42(uParam2, 0x00000010, 0x00000001);
							func_42(uParam2, 0x0000002F, 0x00000001);
							func_42(uParam2, 0x00000030, 0x00000001);
							func_42(uParam2, 0x00000011, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_42(uParam2, 0x00000013, 0x00000001);
							func_42(uParam2, 0x00000014, 0x00000001);
							func_42(uParam2, 0x00000015, 0x00000001);
							func_42(uParam2, 0x00000016, 0x00000001);
							func_42(uParam2, 0x00000036, 0x00000001);
							func_42(uParam2, 0x00000018, 0x00000001);
							func_42(uParam2, 0x00000026, 0x00000001);
							func_46(uParam4, 0x00000001, 0x00000001);
							func_46(uParam4, 0x00000002, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000004, 0x00000001);
							func_46(uParam4, 0x0000000E, 0x00000001);
							func_46(uParam4, 0x0000000F, 0x00000001);
							func_46(uParam4, 0x00000010, 0x00000001);
							func_46(uParam4, 0x00000006, 0x00000001);
							func_46(uParam4, 0x00000007, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000022, 0x00000001);
							func_46(uParam4, 0x0000002B, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_44(uParam3, 0x00000041, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004B, 0x00000001);
							func_44(uParam3, 0x0000004C, 0x00000001);
							func_44(uParam3, 0x0000004D, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000040, 0x00000001);
							func_42(uParam2, 0x00000041, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000004B, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
						
						case 0x00000002:
							func_44(uParam3, 0x00000001, 0x00000001);
							func_44(uParam3, 0x00000003, 0x00000001);
							func_44(uParam3, 0x00000004, 0x00000001);
							func_44(uParam3, 0x00000005, 0x00000001);
							func_44(uParam3, 0x00000007, 0x00000001);
							func_44(uParam3, 0x0000000A, 0x00000001);
							func_44(uParam3, 0x00000036, 0x00000001);
							func_44(uParam3, 0x00000037, 0x00000001);
							func_44(uParam3, 0x00000038, 0x00000001);
							func_44(uParam3, 0x00000000, 0x00000001);
							func_44(uParam3, 0x0000000C, 0x00000001);
							func_44(uParam3, 0x0000000D, 0x00000001);
							func_44(uParam3, 0x0000000F, 0x00000001);
							func_44(uParam3, 0x00000010, 0x00000001);
							func_44(uParam3, 0x00000030, 0x00000001);
							func_44(uParam3, 0x00000031, 0x00000001);
							func_44(uParam3, 0x00000011, 0x00000001);
							func_44(uParam3, 0x00000012, 0x00000001);
							func_44(uParam3, 0x00000032, 0x00000001);
							func_44(uParam3, 0x00000033, 0x00000001);
							func_44(uParam3, 0x00000034, 0x00000001);
							func_44(uParam3, 0x00000035, 0x00000001);
							func_44(uParam3, 0x0000003E, 0x00000001);
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_44(uParam3, 0x00000014, 0x00000001);
							func_44(uParam3, 0x00000015, 0x00000001);
							func_44(uParam3, 0x00000019, 0x00000001);
							func_44(uParam3, 0x0000001A, 0x00000001);
							func_44(uParam3, 0x0000001B, 0x00000001);
							func_44(uParam3, 0x0000001E, 0x00000001);
							func_44(uParam3, 0x0000001F, 0x00000001);
							func_44(uParam3, 0x00000020, 0x00000001);
							func_44(uParam3, 0x00000021, 0x00000001);
							func_44(uParam3, 0x00000025, 0x00000001);
							func_44(uParam3, 0x00000027, 0x00000001);
							func_42(uParam2, 0x00000000, 0x00000001);
							func_42(uParam2, 0x00000001, 0x00000001);
							func_42(uParam2, 0x00000002, 0x00000001);
							func_42(uParam2, 0x00000003, 0x00000001);
							func_42(uParam2, 0x00000004, 0x00000001);
							func_42(uParam2, 0x00000005, 0x00000001);
							func_42(uParam2, 0x00000006, 0x00000001);
							func_42(uParam2, 0x00000007, 0x00000001);
							func_42(uParam2, 0x00000008, 0x00000001);
							func_42(uParam2, 0x00000009, 0x00000001);
							func_42(uParam2, 0x0000000A, 0x00000001);
							func_42(uParam2, 0x00000035, 0x00000001);
							func_42(uParam2, 0x00000038, 0x00000001);
							func_42(uParam2, 0x00000037, 0x00000001);
							func_42(uParam2, 0x0000000B, 0x00000001);
							func_42(uParam2, 0x0000000C, 0x00000001);
							func_42(uParam2, 0x0000000D, 0x00000001);
							func_42(uParam2, 0x0000000E, 0x00000001);
							func_42(uParam2, 0x0000000F, 0x00000001);
							func_42(uParam2, 0x00000010, 0x00000001);
							func_42(uParam2, 0x0000002F, 0x00000001);
							func_42(uParam2, 0x00000030, 0x00000001);
							func_42(uParam2, 0x00000011, 0x00000001);
							func_42(uParam2, 0x00000012, 0x00000001);
							func_42(uParam2, 0x00000031, 0x00000001);
							func_42(uParam2, 0x00000032, 0x00000001);
							func_42(uParam2, 0x00000033, 0x00000001);
							func_42(uParam2, 0x00000034, 0x00000001);
							func_42(uParam2, 0x0000003E, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							func_42(uParam2, 0x00000013, 0x00000001);
							func_42(uParam2, 0x00000014, 0x00000001);
							func_42(uParam2, 0x00000015, 0x00000001);
							func_42(uParam2, 0x00000016, 0x00000001);
							func_42(uParam2, 0x00000036, 0x00000001);
							func_42(uParam2, 0x00000017, 0x00000001);
							func_42(uParam2, 0x00000018, 0x00000001);
							func_42(uParam2, 0x0000001A, 0x00000001);
							func_42(uParam2, 0x0000001B, 0x00000001);
							func_42(uParam2, 0x0000001C, 0x00000001);
							func_42(uParam2, 0x0000001D, 0x00000001);
							func_42(uParam2, 0x0000001E, 0x00000001);
							func_42(uParam2, 0x0000001F, 0x00000001);
							func_42(uParam2, 0x00000020, 0x00000001);
							func_42(uParam2, 0x00000021, 0x00000001);
							func_42(uParam2, 0x00000024, 0x00000001);
							func_42(uParam2, 0x00000026, 0x00000001);
							func_42(uParam2, 0x00000037, 0x00000001);
							func_46(uParam4, 0x00000001, 0x00000001);
							func_46(uParam4, 0x00000002, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000003, 0x00000001);
							func_46(uParam4, 0x00000004, 0x00000001);
							func_46(uParam4, 0x0000000E, 0x00000001);
							func_46(uParam4, 0x0000000F, 0x00000001);
							func_46(uParam4, 0x00000010, 0x00000001);
							func_46(uParam4, 0x00000006, 0x00000001);
							func_46(uParam4, 0x00000008, 0x00000001);
							func_46(uParam4, 0x00000009, 0x00000001);
							func_46(uParam4, 0x0000000A, 0x00000001);
							func_46(uParam4, 0x0000000C, 0x00000001);
							func_46(uParam4, 0x0000000D, 0x00000001);
							func_46(uParam4, 0x00000011, 0x00000001);
							func_46(uParam4, 0x00000012, 0x00000001);
							func_46(uParam4, 0x00000013, 0x00000001);
							func_46(uParam4, 0x00000014, 0x00000001);
							func_46(uParam4, 0x0000003B, 0x00000001);
							func_46(uParam4, 0x0000003C, 0x00000001);
							func_46(uParam4, 0x0000003D, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003E, 0x00000001);
							func_46(uParam4, 0x0000003F, 0x00000001);
							func_46(uParam4, 0x00000040, 0x00000001);
							func_46(uParam4, 0x00000041, 0x00000001);
							func_46(uParam4, 0x00000042, 0x00000001);
							func_46(uParam4, 0x00000043, 0x00000001);
							func_46(uParam4, 0x00000044, 0x00000001);
							func_46(uParam4, 0x00000045, 0x00000001);
							func_46(uParam4, 0x00000046, 0x00000001);
							func_46(uParam4, 0x00000047, 0x00000001);
							func_46(uParam4, 0x00000048, 0x00000001);
							func_46(uParam4, 0x00000015, 0x00000001);
							func_46(uParam4, 0x00000016, 0x00000001);
							func_46(uParam4, 0x00000017, 0x00000001);
							func_46(uParam4, 0x00000018, 0x00000001);
							func_46(uParam4, 0x00000019, 0x00000001);
							func_46(uParam4, 0x0000001A, 0x00000001);
							func_46(uParam4, 0x00000024, 0x00000001);
							func_46(uParam4, 0x0000002E, 0x00000001);
							func_46(uParam4, 0x00000026, 0x00000001);
							func_46(uParam4, 0x0000001D, 0x00000001);
							func_46(uParam4, 0x0000001C, 0x00000001);
							func_46(uParam4, 0x0000001F, 0x00000001);
							func_46(uParam4, 0x00000021, 0x00000001);
							func_46(uParam4, 0x00000022, 0x00000001);
							func_46(uParam4, 0x00000020, 0x00000001);
							func_46(uParam4, 0x0000005C, 0x00000001);
							func_46(uParam4, 0x0000005D, 0x00000001);
							func_46(uParam4, 0x0000005E, 0x00000001);
							func_46(uParam4, 0x00000060, 0x00000001);
							func_46(uParam4, 0x00000061, 0x00000001);
							func_46(uParam4, 0x00000062, 0x00000001);
							func_46(uParam4, 0x00000064, 0x00000001);
							func_46(uParam4, 0x00000067, 0x00000001);
							func_46(uParam4, 0x00000068, 0x00000001);
							func_46(uParam4, 0x00000069, 0x00000001);
							func_46(uParam4, 0x0000006A, 0x00000001);
							func_46(uParam4, 0x0000006B, 0x00000001);
							func_46(uParam4, 0x0000006C, 0x00000001);
							func_44(uParam3, 0x00000041, 0x00000001);
							func_44(uParam3, 0x00000043, 0x00000001);
							func_44(uParam3, 0x00000044, 0x00000001);
							func_44(uParam3, 0x00000045, 0x00000001);
							func_44(uParam3, 0x00000046, 0x00000001);
							func_44(uParam3, 0x00000047, 0x00000001);
							func_44(uParam3, 0x00000048, 0x00000001);
							func_44(uParam3, 0x00000049, 0x00000001);
							func_44(uParam3, 0x0000004A, 0x00000001);
							func_44(uParam3, 0x0000004B, 0x00000001);
							func_44(uParam3, 0x0000004C, 0x00000001);
							func_44(uParam3, 0x0000004D, 0x00000001);
							func_44(uParam3, 0x0000004E, 0x00000001);
							func_44(uParam3, 0x0000004F, 0x00000001);
							func_44(uParam3, 0x00000050, 0x00000001);
							func_44(uParam3, 0x00000051, 0x00000001);
							func_44(uParam3, 0x00000052, 0x00000001);
							func_44(uParam3, 0x0000005B, 0x00000001);
							func_44(uParam3, 0x0000005C, 0x00000001);
							func_42(uParam2, 0x00000040, 0x00000001);
							func_42(uParam2, 0x00000041, 0x00000001);
							func_42(uParam2, 0x00000042, 0x00000001);
							func_42(uParam2, 0x00000043, 0x00000001);
							func_42(uParam2, 0x00000044, 0x00000001);
							func_42(uParam2, 0x00000045, 0x00000001);
							func_42(uParam2, 0x00000046, 0x00000001);
							func_42(uParam2, 0x00000047, 0x00000001);
							func_42(uParam2, 0x00000048, 0x00000001);
							func_42(uParam2, 0x00000049, 0x00000001);
							func_42(uParam2, 0x0000004A, 0x00000001);
							func_42(uParam2, 0x0000004B, 0x00000001);
							func_42(uParam2, 0x0000004D, 0x00000001);
							func_42(uParam2, 0x0000004E, 0x00000001);
							func_42(uParam2, 0x0000004F, 0x00000001);
							func_42(uParam2, 0x00000050, 0x00000001);
							func_42(uParam2, 0x00000051, 0x00000001);
							func_42(uParam2, 0x0000005A, 0x00000001);
							func_42(uParam2, 0x0000005B, 0x00000001);
							break;
					}
					break;
				
				case 0x00000012:
					switch (iParam5)
					{
						case 0x00000000:
							break;
						
						case 0x00000001:
							func_42(uParam2, 0x00000002, 0x00000001);
							func_42(uParam2, 0x00000014, 0x00000001);
							break;
						
						case 0x00000002:
							break;
					}
					break;
				
				case 0x00000000:
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					break;
				
				case 0x00000009:
				case 0x0000000B:
				case 0x0000000D:
				case 0x0000000F:
				case 0x00000013:
				case 0x00000017:
				case 0x0000001A:
				case 0x0000001E:
				case 0x00000022:
				case 0x00000014:
				case 0x00000016:
					func_40(0x00000002, 0x00000034, uParam2, uParam3, uParam4, 0x00000000, 0x00000000);
					break;
				
				case 0x00000020:
					func_40(0x00000002, 0x00000035, uParam2, uParam3, uParam4, 0x00000000, 0x00000000);
					break;
				
				case 0x00000011:
				case 0x0000001B:
				case 0x0000001F:
					break;
			}
			break;
	}
}

void func_41(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0x00000000] == 0x00000000 || (*uParam1)[0x00000000] == 0x00000000)
	{
	}
	func_46(uParam2, 0x0000007C, 0x00000001);
	func_46(uParam2, 0x0000007D, 0x00000001);
	func_46(uParam2, 0x0000007E, 0x00000001);
	func_46(uParam2, 0x0000007F, 0x00000001);
	func_46(uParam2, 0x00000080, 0x00000001);
	func_46(uParam2, 0x00000081, 0x00000001);
	func_46(uParam2, 0x00000082, 0x00000001);
	func_46(uParam2, 0x00000083, 0x00000001);
	func_46(uParam2, 0x00000084, 0x00000001);
	func_46(uParam2, 0x00000085, 0x00000001);
	func_46(uParam2, 0x00000088, 0x00000001);
	func_46(uParam2, 0x0000008A, 0x00000001);
	func_46(uParam2, 0x0000008B, 0x00000001);
	func_46(uParam2, 0x0000008F, 0x00000001);
	func_46(uParam2, 0x00000090, 0x00000001);
	func_46(uParam2, 0x00000091, 0x00000001);
	func_46(uParam2, 0x00000093, 0x00000001);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 0x0000005B, 0x00000001);
	switch (iParam0)
	{
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam5)
					{
						case 0x00000000:
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							break;
						
						case 0x00000001:
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							break;
						
						case 0x00000002:
							func_44(uParam3, 0x00000026, 0x00000001);
							func_44(uParam3, 0x0000002F, 0x00000001);
							func_44(uParam3, 0x0000006F, 0x00000001);
							func_42(uParam2, 0x00000025, 0x00000001);
							func_42(uParam2, 0x0000002E, 0x00000001);
							func_42(uParam2, 0x0000006E, 0x00000001);
							break;
					}
					break;
			}
			break;
		
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000006:
				case 0x0000001A:
					if (bParam6)
					{
						func_44(uParam3, 0x00000010, 0x00000001);
						func_44(uParam3, 0x00000030, 0x00000001);
						func_44(uParam3, 0x00000031, 0x00000001);
						func_44(uParam3, 0x00000012, 0x00000001);
						func_44(uParam3, 0x00000032, 0x00000001);
						func_44(uParam3, 0x00000033, 0x00000001);
						func_44(uParam3, 0x00000034, 0x00000001);
						func_44(uParam3, 0x00000035, 0x00000001);
						func_44(uParam3, 0x00000026, 0x00000001);
						func_44(uParam3, 0x0000002F, 0x00000001);
						func_44(uParam3, 0x0000006F, 0x00000001);
						func_44(uParam3, 0x0000003E, 0x00000001);
						func_42(uParam2, 0x00000010, 0x00000001);
						func_42(uParam2, 0x0000002F, 0x00000001);
						func_42(uParam2, 0x00000030, 0x00000001);
						func_42(uParam2, 0x00000012, 0x00000001);
						func_42(uParam2, 0x00000025, 0x00000001);
						func_42(uParam2, 0x0000002E, 0x00000001);
						func_42(uParam2, 0x0000006E, 0x00000001);
					}
					func_46(uParam4, 0x00000003, 0x00000001);
					func_46(uParam4, 0x00000004, 0x00000001);
					func_46(uParam4, 0x00000005, 0x00000001);
					func_46(uParam4, 0x00000006, 0x00000001);
					func_46(uParam4, 0x00000007, 0x00000001);
					func_46(uParam4, 0x00000008, 0x00000001);
					func_46(uParam4, 0x00000009, 0x00000001);
					func_46(uParam4, 0x0000000C, 0x00000001);
					func_46(uParam4, 0x0000000E, 0x00000001);
					func_46(uParam4, 0x0000000F, 0x00000001);
					func_46(uParam4, 0x00000010, 0x00000001);
					func_46(uParam4, 0x00000011, 0x00000001);
					func_46(uParam4, 0x00000012, 0x00000001);
					func_46(uParam4, 0x00000013, 0x00000001);
					func_46(uParam4, 0x00000014, 0x00000001);
					func_46(uParam4, 0x0000003B, 0x00000001);
					func_46(uParam4, 0x0000003C, 0x00000001);
					func_46(uParam4, 0x0000003D, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003F, 0x00000001);
					func_46(uParam4, 0x00000040, 0x00000001);
					func_46(uParam4, 0x00000041, 0x00000001);
					func_46(uParam4, 0x00000042, 0x00000001);
					func_46(uParam4, 0x00000043, 0x00000001);
					func_46(uParam4, 0x00000044, 0x00000001);
					func_46(uParam4, 0x00000045, 0x00000001);
					func_46(uParam4, 0x00000046, 0x00000001);
					func_46(uParam4, 0x00000047, 0x00000001);
					func_46(uParam4, 0x00000048, 0x00000001);
					func_46(uParam4, 0x00000015, 0x00000001);
					func_46(uParam4, 0x00000016, 0x00000001);
					func_46(uParam4, 0x00000017, 0x00000001);
					func_46(uParam4, 0x00000018, 0x00000001);
					func_46(uParam4, 0x00000019, 0x00000001);
					func_46(uParam4, 0x0000001A, 0x00000001);
					func_46(uParam4, 0x00000024, 0x00000001);
					func_46(uParam4, 0x0000002E, 0x00000001);
					func_46(uParam4, 0x00000026, 0x00000001);
					func_46(uParam4, 0x0000001C, 0x00000001);
					func_46(uParam4, 0x0000000A, 0x00000001);
					func_46(uParam4, 0x00000021, 0x00000001);
					func_46(uParam4, 0x0000005C, 0x00000001);
					func_46(uParam4, 0x0000005D, 0x00000001);
					func_46(uParam4, 0x0000005E, 0x00000001);
					func_46(uParam4, 0x00000060, 0x00000001);
					func_46(uParam4, 0x00000061, 0x00000001);
					func_46(uParam4, 0x00000062, 0x00000001);
					func_46(uParam4, 0x00000064, 0x00000001);
					func_46(uParam4, 0x00000067, 0x00000001);
					func_46(uParam4, 0x00000068, 0x00000001);
					func_46(uParam4, 0x00000069, 0x00000001);
					func_46(uParam4, 0x0000006A, 0x00000001);
					func_46(uParam4, 0x0000006B, 0x00000001);
					func_46(uParam4, 0x0000006C, 0x00000001);
					func_46(uParam4, 0x0000006E, 0x00000001);
					func_46(uParam4, 0x00000070, 0x00000001);
					func_46(uParam4, 0x00000073, 0x00000001);
					func_46(uParam4, 0x00000074, 0x00000001);
					break;
				
				case 0x00000001:
					if (bParam6)
					{
						func_44(uParam3, 0x00000010, 0x00000001);
						func_44(uParam3, 0x00000030, 0x00000001);
						func_44(uParam3, 0x00000031, 0x00000001);
						func_44(uParam3, 0x00000012, 0x00000001);
						func_44(uParam3, 0x00000032, 0x00000001);
						func_44(uParam3, 0x00000033, 0x00000001);
						func_44(uParam3, 0x00000034, 0x00000001);
						func_44(uParam3, 0x00000035, 0x00000001);
						func_44(uParam3, 0x00000026, 0x00000001);
						func_44(uParam3, 0x0000002F, 0x00000001);
						func_44(uParam3, 0x0000006F, 0x00000001);
						func_44(uParam3, 0x0000003E, 0x00000001);
						func_42(uParam2, 0x00000012, 0x00000001);
						func_42(uParam2, 0x00000031, 0x00000001);
						func_42(uParam2, 0x00000032, 0x00000001);
						func_42(uParam2, 0x00000033, 0x00000001);
						func_42(uParam2, 0x00000034, 0x00000001);
						func_42(uParam2, 0x0000003E, 0x00000001);
						func_42(uParam2, 0x00000025, 0x00000001);
						func_42(uParam2, 0x0000002E, 0x00000001);
						func_42(uParam2, 0x0000006E, 0x00000001);
					}
					func_46(uParam4, 0x00000009, 0x00000001);
					func_46(uParam4, 0x0000000C, 0x00000001);
					func_46(uParam4, 0x0000000D, 0x00000001);
					func_46(uParam4, 0x00000011, 0x00000001);
					func_46(uParam4, 0x00000012, 0x00000001);
					func_46(uParam4, 0x00000013, 0x00000001);
					func_46(uParam4, 0x00000014, 0x00000001);
					func_46(uParam4, 0x0000003B, 0x00000001);
					func_46(uParam4, 0x0000003C, 0x00000001);
					func_46(uParam4, 0x0000003D, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003F, 0x00000001);
					func_46(uParam4, 0x00000040, 0x00000001);
					func_46(uParam4, 0x00000041, 0x00000001);
					func_46(uParam4, 0x00000042, 0x00000001);
					func_46(uParam4, 0x00000043, 0x00000001);
					func_46(uParam4, 0x00000044, 0x00000001);
					func_46(uParam4, 0x00000045, 0x00000001);
					func_46(uParam4, 0x00000046, 0x00000001);
					func_46(uParam4, 0x00000047, 0x00000001);
					func_46(uParam4, 0x00000048, 0x00000001);
					func_46(uParam4, 0x00000015, 0x00000001);
					func_46(uParam4, 0x00000016, 0x00000001);
					func_46(uParam4, 0x00000017, 0x00000001);
					func_46(uParam4, 0x00000018, 0x00000001);
					func_46(uParam4, 0x00000019, 0x00000001);
					func_46(uParam4, 0x0000001A, 0x00000001);
					func_46(uParam4, 0x00000024, 0x00000001);
					func_46(uParam4, 0x0000002E, 0x00000001);
					func_46(uParam4, 0x00000026, 0x00000001);
					func_46(uParam4, 0x0000001D, 0x00000001);
					func_46(uParam4, 0x0000001C, 0x00000001);
					func_46(uParam4, 0x00000008, 0x00000001);
					func_46(uParam4, 0x0000000A, 0x00000001);
					func_46(uParam4, 0x0000001F, 0x00000001);
					func_46(uParam4, 0x00000021, 0x00000001);
					func_46(uParam4, 0x00000022, 0x00000001);
					func_46(uParam4, 0x0000005C, 0x00000001);
					func_46(uParam4, 0x0000005D, 0x00000001);
					func_46(uParam4, 0x0000005E, 0x00000001);
					func_46(uParam4, 0x00000060, 0x00000001);
					func_46(uParam4, 0x00000061, 0x00000001);
					func_46(uParam4, 0x00000062, 0x00000001);
					func_46(uParam4, 0x00000064, 0x00000001);
					func_46(uParam4, 0x00000067, 0x00000001);
					func_46(uParam4, 0x00000068, 0x00000001);
					func_46(uParam4, 0x00000069, 0x00000001);
					func_46(uParam4, 0x0000006A, 0x00000001);
					func_46(uParam4, 0x0000006B, 0x00000001);
					func_46(uParam4, 0x0000006C, 0x00000001);
					break;
				
				case 0x0000000A:
					func_46(uParam4, 0x0000001C, 0x00000001);
					break;
				
				case 0x0000000C:
					if (bParam6)
					{
						func_44(uParam3, 0x00000003, 0x00000001);
						func_44(uParam3, 0x00000004, 0x00000001);
						func_44(uParam3, 0x00000006, 0x00000001);
						func_44(uParam3, 0x0000000A, 0x00000001);
						func_44(uParam3, 0x00000036, 0x00000001);
						func_44(uParam3, 0x00000037, 0x00000001);
						func_44(uParam3, 0x00000038, 0x00000001);
						func_44(uParam3, 0x0000000D, 0x00000001);
						func_44(uParam3, 0x00000010, 0x00000001);
						func_44(uParam3, 0x00000030, 0x00000001);
						func_44(uParam3, 0x00000031, 0x00000001);
						func_44(uParam3, 0x00000012, 0x00000001);
						func_44(uParam3, 0x00000032, 0x00000001);
						func_44(uParam3, 0x00000033, 0x00000001);
						func_44(uParam3, 0x00000034, 0x00000001);
						func_44(uParam3, 0x00000035, 0x00000001);
						func_44(uParam3, 0x00000026, 0x00000001);
						func_44(uParam3, 0x0000002F, 0x00000001);
						func_44(uParam3, 0x0000006F, 0x00000001);
						func_44(uParam3, 0x0000003E, 0x00000001);
						func_44(uParam3, 0x00000014, 0x00000001);
						func_44(uParam3, 0x0000001A, 0x00000001);
						func_44(uParam3, 0x0000001B, 0x00000001);
						func_44(uParam3, 0x00000020, 0x00000001);
						func_44(uParam3, 0x00000021, 0x00000001);
						func_44(uParam3, 0x00000025, 0x00000001);
						func_44(uParam3, 0x00000027, 0x00000001);
						func_44(uParam3, 0x0000006A, 0x00000001);
						func_44(uParam3, 0x00000072, 0x00000001);
						func_44(uParam3, 0x00000074, 0x00000001);
						func_44(uParam3, 0x00000075, 0x00000001);
						func_44(uParam3, 0x00000076, 0x00000001);
						func_44(uParam3, 0x00000077, 0x00000001);
						func_42(uParam2, 0x00000003, 0x00000001);
						func_42(uParam2, 0x00000004, 0x00000001);
						func_42(uParam2, 0x00000006, 0x00000001);
						func_42(uParam2, 0x00000008, 0x00000001);
						func_42(uParam2, 0x00000009, 0x00000001);
						func_42(uParam2, 0x0000000A, 0x00000001);
						func_42(uParam2, 0x00000035, 0x00000001);
						func_42(uParam2, 0x00000038, 0x00000001);
						func_42(uParam2, 0x00000037, 0x00000001);
						func_42(uParam2, 0x0000000D, 0x00000001);
						func_42(uParam2, 0x00000012, 0x00000001);
						func_42(uParam2, 0x00000031, 0x00000001);
						func_42(uParam2, 0x00000032, 0x00000001);
						func_42(uParam2, 0x00000033, 0x00000001);
						func_42(uParam2, 0x00000034, 0x00000001);
						func_42(uParam2, 0x0000003E, 0x00000001);
						func_42(uParam2, 0x00000025, 0x00000001);
						func_42(uParam2, 0x0000002E, 0x00000001);
						func_42(uParam2, 0x0000006E, 0x00000001);
						func_42(uParam2, 0x00000015, 0x00000001);
						func_42(uParam2, 0x0000001A, 0x00000001);
						func_42(uParam2, 0x0000001B, 0x00000001);
						func_42(uParam2, 0x0000001C, 0x00000001);
						func_42(uParam2, 0x00000020, 0x00000001);
						func_42(uParam2, 0x00000024, 0x00000001);
						func_42(uParam2, 0x00000026, 0x00000001);
						func_42(uParam2, 0x00000037, 0x00000001);
						func_42(uParam2, 0x0000000E, 0x00000001);
						func_42(uParam2, 0x00000069, 0x00000001);
						func_42(uParam2, 0x00000071, 0x00000001);
						func_42(uParam2, 0x00000072, 0x00000001);
						func_42(uParam2, 0x00000073, 0x00000001);
						func_42(uParam2, 0x00000074, 0x00000001);
						func_42(uParam2, 0x00000075, 0x00000001);
					}
					func_46(uParam4, 0x00000002, 0x00000001);
					func_46(uParam4, 0x00000003, 0x00000001);
					func_46(uParam4, 0x00000004, 0x00000001);
					func_46(uParam4, 0x0000000E, 0x00000001);
					func_46(uParam4, 0x0000000F, 0x00000001);
					func_46(uParam4, 0x00000010, 0x00000001);
					func_46(uParam4, 0x00000009, 0x00000001);
					func_46(uParam4, 0x0000000A, 0x00000001);
					func_46(uParam4, 0x0000000C, 0x00000001);
					func_46(uParam4, 0x0000000D, 0x00000001);
					func_46(uParam4, 0x00000011, 0x00000001);
					func_46(uParam4, 0x00000012, 0x00000001);
					func_46(uParam4, 0x00000013, 0x00000001);
					func_46(uParam4, 0x00000014, 0x00000001);
					func_46(uParam4, 0x0000003B, 0x00000001);
					func_46(uParam4, 0x0000003C, 0x00000001);
					func_46(uParam4, 0x0000003D, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003F, 0x00000001);
					func_46(uParam4, 0x00000040, 0x00000001);
					func_46(uParam4, 0x00000041, 0x00000001);
					func_46(uParam4, 0x00000042, 0x00000001);
					func_46(uParam4, 0x00000043, 0x00000001);
					func_46(uParam4, 0x00000044, 0x00000001);
					func_46(uParam4, 0x00000045, 0x00000001);
					func_46(uParam4, 0x00000046, 0x00000001);
					func_46(uParam4, 0x00000047, 0x00000001);
					func_46(uParam4, 0x00000048, 0x00000001);
					func_46(uParam4, 0x00000015, 0x00000001);
					func_46(uParam4, 0x00000016, 0x00000001);
					func_46(uParam4, 0x00000017, 0x00000001);
					func_46(uParam4, 0x00000018, 0x00000001);
					func_46(uParam4, 0x00000019, 0x00000001);
					func_46(uParam4, 0x0000001A, 0x00000001);
					func_46(uParam4, 0x00000024, 0x00000001);
					func_46(uParam4, 0x0000002E, 0x00000001);
					func_46(uParam4, 0x00000026, 0x00000001);
					func_46(uParam4, 0x0000001D, 0x00000001);
					func_46(uParam4, 0x0000001C, 0x00000001);
					func_46(uParam4, 0x00000008, 0x00000001);
					func_46(uParam4, 0x0000001F, 0x00000001);
					func_46(uParam4, 0x00000020, 0x00000001);
					func_46(uParam4, 0x00000021, 0x00000001);
					func_46(uParam4, 0x00000022, 0x00000001);
					func_46(uParam4, 0x0000005C, 0x00000001);
					func_46(uParam4, 0x0000005D, 0x00000001);
					func_46(uParam4, 0x0000005E, 0x00000001);
					func_46(uParam4, 0x00000060, 0x00000001);
					func_46(uParam4, 0x00000061, 0x00000001);
					func_46(uParam4, 0x00000062, 0x00000001);
					func_46(uParam4, 0x00000064, 0x00000001);
					func_46(uParam4, 0x00000067, 0x00000001);
					func_46(uParam4, 0x00000068, 0x00000001);
					func_46(uParam4, 0x00000069, 0x00000001);
					func_46(uParam4, 0x0000006A, 0x00000001);
					func_46(uParam4, 0x0000006B, 0x00000001);
					func_46(uParam4, 0x0000006C, 0x00000001);
					func_46(uParam4, 0x0000006E, 0x00000001);
					func_46(uParam4, 0x00000070, 0x00000001);
					break;
				
				case 0x0000000F:
					if (bParam6)
					{
						func_44(uParam3, 0x00000010, 0x00000001);
						func_44(uParam3, 0x00000030, 0x00000001);
						func_44(uParam3, 0x00000031, 0x00000001);
						func_44(uParam3, 0x00000012, 0x00000001);
						func_44(uParam3, 0x00000032, 0x00000001);
						func_44(uParam3, 0x00000033, 0x00000001);
						func_44(uParam3, 0x00000034, 0x00000001);
						func_44(uParam3, 0x00000035, 0x00000001);
						func_44(uParam3, 0x00000026, 0x00000001);
						func_44(uParam3, 0x0000002F, 0x00000001);
						func_44(uParam3, 0x0000006F, 0x00000001);
						func_44(uParam3, 0x0000003E, 0x00000001);
						func_42(uParam2, 0x00000012, 0x00000001);
						func_42(uParam2, 0x00000031, 0x00000001);
						func_42(uParam2, 0x00000032, 0x00000001);
						func_42(uParam2, 0x00000033, 0x00000001);
						func_42(uParam2, 0x00000034, 0x00000001);
						func_42(uParam2, 0x0000003E, 0x00000001);
						func_42(uParam2, 0x00000025, 0x00000001);
						func_42(uParam2, 0x0000002E, 0x00000001);
						func_42(uParam2, 0x0000006E, 0x00000001);
						func_42(uParam2, 0x00000013, 0x00000001);
					}
					func_46(uParam4, 0x00000003, 0x00000001);
					func_46(uParam4, 0x00000006, 0x00000001);
					func_46(uParam4, 0x00000008, 0x00000001);
					func_46(uParam4, 0x00000009, 0x00000001);
					func_46(uParam4, 0x0000000A, 0x00000001);
					func_46(uParam4, 0x0000000D, 0x00000001);
					func_46(uParam4, 0x00000011, 0x00000001);
					func_46(uParam4, 0x00000012, 0x00000001);
					func_46(uParam4, 0x00000013, 0x00000001);
					func_46(uParam4, 0x00000014, 0x00000001);
					func_46(uParam4, 0x0000003B, 0x00000001);
					func_46(uParam4, 0x0000003C, 0x00000001);
					func_46(uParam4, 0x0000003D, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003F, 0x00000001);
					func_46(uParam4, 0x00000040, 0x00000001);
					func_46(uParam4, 0x00000041, 0x00000001);
					func_46(uParam4, 0x00000042, 0x00000001);
					func_46(uParam4, 0x00000043, 0x00000001);
					func_46(uParam4, 0x00000044, 0x00000001);
					func_46(uParam4, 0x00000045, 0x00000001);
					func_46(uParam4, 0x00000046, 0x00000001);
					func_46(uParam4, 0x00000047, 0x00000001);
					func_46(uParam4, 0x00000048, 0x00000001);
					func_46(uParam4, 0x00000015, 0x00000001);
					func_46(uParam4, 0x00000016, 0x00000001);
					func_46(uParam4, 0x00000017, 0x00000001);
					func_46(uParam4, 0x00000018, 0x00000001);
					func_46(uParam4, 0x00000019, 0x00000001);
					func_46(uParam4, 0x0000001A, 0x00000001);
					func_46(uParam4, 0x00000024, 0x00000001);
					func_46(uParam4, 0x0000002E, 0x00000001);
					func_46(uParam4, 0x00000026, 0x00000001);
					func_46(uParam4, 0x0000001D, 0x00000001);
					func_46(uParam4, 0x0000001C, 0x00000001);
					func_46(uParam4, 0x0000001F, 0x00000001);
					func_46(uParam4, 0x00000020, 0x00000001);
					func_46(uParam4, 0x00000021, 0x00000001);
					func_46(uParam4, 0x00000022, 0x00000001);
					func_46(uParam4, 0x0000005C, 0x00000001);
					func_46(uParam4, 0x0000005D, 0x00000001);
					func_46(uParam4, 0x0000005E, 0x00000001);
					func_46(uParam4, 0x00000060, 0x00000001);
					func_46(uParam4, 0x00000061, 0x00000001);
					func_46(uParam4, 0x00000062, 0x00000001);
					func_46(uParam4, 0x00000064, 0x00000001);
					func_46(uParam4, 0x00000067, 0x00000001);
					func_46(uParam4, 0x00000068, 0x00000001);
					func_46(uParam4, 0x00000069, 0x00000001);
					func_46(uParam4, 0x0000006A, 0x00000001);
					func_46(uParam4, 0x0000006B, 0x00000001);
					func_46(uParam4, 0x0000006C, 0x00000001);
					func_46(uParam4, 0x0000006E, 0x00000001);
					func_46(uParam4, 0x00000070, 0x00000001);
					func_46(uParam4, 0x00000073, 0x00000001);
					func_46(uParam4, 0x00000074, 0x00000001);
					break;
				
				case 0x00000012:
					if (bParam6)
					{
						func_44(uParam3, 0x00000004, 0x00000001);
					}
					break;
				
				case 0x00000011:
					func_46(uParam4, 0x00000009, 0x00000001);
					break;
				
				case 0x00000013:
					if (bParam6)
					{
						func_44(uParam3, 0x00000010, 0x00000001);
						func_44(uParam3, 0x00000030, 0x00000001);
						func_44(uParam3, 0x00000031, 0x00000001);
						func_44(uParam3, 0x00000012, 0x00000001);
						func_44(uParam3, 0x00000032, 0x00000001);
						func_44(uParam3, 0x00000033, 0x00000001);
						func_44(uParam3, 0x00000034, 0x00000001);
						func_44(uParam3, 0x00000035, 0x00000001);
						func_44(uParam3, 0x00000026, 0x00000001);
						func_44(uParam3, 0x0000002F, 0x00000001);
						func_44(uParam3, 0x0000006F, 0x00000001);
						func_44(uParam3, 0x0000003E, 0x00000001);
						func_42(uParam2, 0x00000010, 0x00000001);
						func_42(uParam2, 0x0000002F, 0x00000001);
						func_42(uParam2, 0x00000030, 0x00000001);
						func_42(uParam2, 0x00000012, 0x00000001);
						func_42(uParam2, 0x00000031, 0x00000001);
						func_42(uParam2, 0x00000032, 0x00000001);
						func_42(uParam2, 0x00000033, 0x00000001);
						func_42(uParam2, 0x00000034, 0x00000001);
						func_42(uParam2, 0x0000003E, 0x00000001);
						func_42(uParam2, 0x00000025, 0x00000001);
						func_42(uParam2, 0x0000002E, 0x00000001);
						func_42(uParam2, 0x0000006E, 0x00000001);
					}
					func_46(uParam4, 0x00000009, 0x00000001);
					func_46(uParam4, 0x0000000A, 0x00000001);
					func_46(uParam4, 0x00000012, 0x00000001);
					func_46(uParam4, 0x00000013, 0x00000001);
					func_46(uParam4, 0x00000014, 0x00000001);
					func_46(uParam4, 0x0000003B, 0x00000001);
					func_46(uParam4, 0x0000003C, 0x00000001);
					func_46(uParam4, 0x0000003D, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003F, 0x00000001);
					func_46(uParam4, 0x00000040, 0x00000001);
					func_46(uParam4, 0x00000041, 0x00000001);
					func_46(uParam4, 0x00000042, 0x00000001);
					func_46(uParam4, 0x00000043, 0x00000001);
					func_46(uParam4, 0x00000044, 0x00000001);
					func_46(uParam4, 0x00000045, 0x00000001);
					func_46(uParam4, 0x00000046, 0x00000001);
					func_46(uParam4, 0x00000047, 0x00000001);
					func_46(uParam4, 0x00000048, 0x00000001);
					func_46(uParam4, 0x00000015, 0x00000001);
					func_46(uParam4, 0x00000016, 0x00000001);
					func_46(uParam4, 0x00000017, 0x00000001);
					func_46(uParam4, 0x00000018, 0x00000001);
					func_46(uParam4, 0x00000019, 0x00000001);
					func_46(uParam4, 0x0000001A, 0x00000001);
					func_46(uParam4, 0x00000024, 0x00000001);
					func_46(uParam4, 0x0000002E, 0x00000001);
					func_46(uParam4, 0x00000026, 0x00000001);
					func_46(uParam4, 0x0000001D, 0x00000001);
					func_46(uParam4, 0x00000008, 0x00000001);
					func_46(uParam4, 0x0000005C, 0x00000001);
					func_46(uParam4, 0x0000005D, 0x00000001);
					func_46(uParam4, 0x0000005E, 0x00000001);
					func_46(uParam4, 0x00000060, 0x00000001);
					func_46(uParam4, 0x00000061, 0x00000001);
					func_46(uParam4, 0x00000062, 0x00000001);
					func_46(uParam4, 0x00000064, 0x00000001);
					func_46(uParam4, 0x00000067, 0x00000001);
					func_46(uParam4, 0x00000068, 0x00000001);
					func_46(uParam4, 0x00000069, 0x00000001);
					func_46(uParam4, 0x0000006A, 0x00000001);
					func_46(uParam4, 0x0000006B, 0x00000001);
					func_46(uParam4, 0x0000006C, 0x00000001);
					break;
				
				case 0x00000015:
					if (bParam6)
					{
						func_44(uParam3, 0x00000003, 0x00000001);
						func_44(uParam3, 0x00000007, 0x00000001);
						func_44(uParam3, 0x00000000, 0x00000001);
						func_44(uParam3, 0x0000000C, 0x00000001);
						func_44(uParam3, 0x0000000D, 0x00000001);
						func_44(uParam3, 0x0000000F, 0x00000001);
						func_44(uParam3, 0x00000010, 0x00000001);
						func_44(uParam3, 0x00000030, 0x00000001);
						func_44(uParam3, 0x00000031, 0x00000001);
						func_44(uParam3, 0x00000011, 0x00000001);
						func_44(uParam3, 0x00000012, 0x00000001);
						func_44(uParam3, 0x00000032, 0x00000001);
						func_44(uParam3, 0x00000033, 0x00000001);
						func_44(uParam3, 0x00000034, 0x00000001);
						func_44(uParam3, 0x00000035, 0x00000001);
						func_44(uParam3, 0x00000026, 0x00000001);
						func_44(uParam3, 0x0000002F, 0x00000001);
						func_44(uParam3, 0x0000006F, 0x00000001);
						func_44(uParam3, 0x0000003E, 0x00000001);
						func_44(uParam3, 0x00000014, 0x00000001);
						func_44(uParam3, 0x00000015, 0x00000001);
						func_44(uParam3, 0x00000019, 0x00000001);
						func_44(uParam3, 0x0000001A, 0x00000001);
						func_44(uParam3, 0x0000001B, 0x00000001);
						func_44(uParam3, 0x0000001E, 0x00000001);
						func_44(uParam3, 0x0000001F, 0x00000001);
						func_44(uParam3, 0x00000020, 0x00000001);
						func_44(uParam3, 0x00000021, 0x00000001);
						func_44(uParam3, 0x00000027, 0x00000001);
						func_44(uParam3, 0x00000025, 0x00000001);
						func_44(uParam3, 0x00000037, 0x00000001);
						func_42(uParam2, 0x00000000, 0x00000001);
						func_42(uParam2, 0x00000002, 0x00000001);
						func_42(uParam2, 0x00000003, 0x00000001);
						func_42(uParam2, 0x00000004, 0x00000001);
						func_42(uParam2, 0x00000006, 0x00000001);
						func_42(uParam2, 0x00000007, 0x00000001);
						func_42(uParam2, 0x00000008, 0x00000001);
						func_42(uParam2, 0x0000000B, 0x00000001);
						func_42(uParam2, 0x0000000D, 0x00000001);
						func_42(uParam2, 0x0000000F, 0x00000001);
						func_42(uParam2, 0x00000010, 0x00000001);
						func_42(uParam2, 0x0000002F, 0x00000001);
						func_42(uParam2, 0x00000030, 0x00000001);
						func_42(uParam2, 0x00000011, 0x00000001);
						func_42(uParam2, 0x00000012, 0x00000001);
						func_42(uParam2, 0x00000031, 0x00000001);
						func_42(uParam2, 0x00000032, 0x00000001);
						func_42(uParam2, 0x00000033, 0x00000001);
						func_42(uParam2, 0x00000034, 0x00000001);
						func_42(uParam2, 0x0000003E, 0x00000001);
						func_42(uParam2, 0x00000025, 0x00000001);
						func_42(uParam2, 0x0000002E, 0x00000001);
						func_42(uParam2, 0x0000006E, 0x00000001);
						func_42(uParam2, 0x00000013, 0x00000001);
						func_42(uParam2, 0x00000014, 0x00000001);
						func_42(uParam2, 0x00000015, 0x00000001);
						func_42(uParam2, 0x00000016, 0x00000001);
						func_42(uParam2, 0x00000036, 0x00000001);
						func_42(uParam2, 0x00000018, 0x00000001);
						func_42(uParam2, 0x0000001A, 0x00000001);
						func_42(uParam2, 0x0000001B, 0x00000001);
						func_42(uParam2, 0x0000001C, 0x00000001);
						func_42(uParam2, 0x0000001E, 0x00000001);
						func_42(uParam2, 0x0000001F, 0x00000001);
						func_42(uParam2, 0x00000020, 0x00000001);
						func_42(uParam2, 0x00000026, 0x00000001);
						func_42(uParam2, 0x00000024, 0x00000001);
					}
					func_46(uParam4, 0x00000003, 0x00000001);
					func_46(uParam4, 0x00000003, 0x00000001);
					func_46(uParam4, 0x00000004, 0x00000001);
					func_46(uParam4, 0x0000000E, 0x00000001);
					func_46(uParam4, 0x0000000F, 0x00000001);
					func_46(uParam4, 0x00000010, 0x00000001);
					func_46(uParam4, 0x00000008, 0x00000001);
					func_46(uParam4, 0x00000009, 0x00000001);
					func_46(uParam4, 0x0000000A, 0x00000001);
					func_46(uParam4, 0x0000000C, 0x00000001);
					func_46(uParam4, 0x0000000D, 0x00000001);
					func_46(uParam4, 0x00000011, 0x00000001);
					func_46(uParam4, 0x00000012, 0x00000001);
					func_46(uParam4, 0x00000013, 0x00000001);
					func_46(uParam4, 0x00000014, 0x00000001);
					func_46(uParam4, 0x0000003B, 0x00000001);
					func_46(uParam4, 0x0000003C, 0x00000001);
					func_46(uParam4, 0x0000003D, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003E, 0x00000001);
					func_46(uParam4, 0x0000003F, 0x00000001);
					func_46(uParam4, 0x00000040, 0x00000001);
					func_46(uParam4, 0x00000041, 0x00000001);
					func_46(uParam4, 0x00000042, 0x00000001);
					func_46(uParam4, 0x00000043, 0x00000001);
					func_46(uParam4, 0x00000044, 0x00000001);
					func_46(uParam4, 0x00000045, 0x00000001);
					func_46(uParam4, 0x00000046, 0x00000001);
					func_46(uParam4, 0x00000047, 0x00000001);
					func_46(uParam4, 0x00000048, 0x00000001);
					func_46(uParam4, 0x00000015, 0x00000001);
					func_46(uParam4, 0x00000016, 0x00000001);
					func_46(uParam4, 0x00000017, 0x00000001);
					func_46(uParam4, 0x00000018, 0x00000001);
					func_46(uParam4, 0x00000019, 0x00000001);
					func_46(uParam4, 0x0000001A, 0x00000001);
					func_46(uParam4, 0x00000024, 0x00000001);
					func_46(uParam4, 0x0000002E, 0x00000001);
					func_46(uParam4, 0x00000026, 0x00000001);
					func_46(uParam4, 0x0000001D, 0x00000001);
					func_46(uParam4, 0x0000001C, 0x00000001);
					func_46(uParam4, 0x0000001F, 0x00000001);
					func_46(uParam4, 0x00000021, 0x00000001);
					func_46(uParam4, 0x00000022, 0x00000001);
					func_46(uParam4, 0x0000005C, 0x00000001);
					func_46(uParam4, 0x0000005D, 0x00000001);
					func_46(uParam4, 0x0000005E, 0x00000001);
					func_46(uParam4, 0x00000060, 0x00000001);
					func_46(uParam4, 0x00000061, 0x00000001);
					func_46(uParam4, 0x00000062, 0x00000001);
					func_46(uParam4, 0x00000064, 0x00000001);
					func_46(uParam4, 0x00000067, 0x00000001);
					func_46(uParam4, 0x00000068, 0x00000001);
					func_46(uParam4, 0x00000069, 0x00000001);
					func_46(uParam4, 0x0000006A, 0x00000001);
					func_46(uParam4, 0x0000006B, 0x00000001);
					func_46(uParam4, 0x0000006C, 0x00000001);
					break;
			}
			break;
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(uParam0[iVar0], (iParam1 - (0x00000020 * iVar0)));
	}
	else
	{
		unk_0x0674E58A79778E99(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_47()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
				case 0x00000002:
				case 0x00000003:
				case 0x00000004:
				case 0x00000007:
				case 0x00000005:
				case 0x0000000A:
				case 0x0000000B:
				case 0x0000000C:
				case 0x0000000D:
				case 0x0000000F:
				case 0x0000000E:
				case 0x00000010:
				case 0x00000011:
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
				case 0x00000016:
				case 0x00000017:
				case 0x0000001A:
				case 0x00000019:
				case 0x00000018:
				case 0x0000001E:
				case 0x00000022:
				case 0x00000028:
				case 0x00000029:
				case 0x0000002A:
				case 0x0000002B:
				case 0x0000002C:
				case 0x0000002D:
				case 0x0000002E:
				case 0x0000002F:
				case 0x00000030:
				case 0x00000031:
				case 0x00000032:
				case 0x00000033:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000001;
					break;
			}
			break;
	}
	return 0x00000000;
}

void func_49(float fParam0)
{
	func_67(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0xF59058FCB716F903(0x00000000, 0x000000AC, 0x00000001), "CELL_BORDER");
}

void func_50(float fParam0)
{
	if (Global_198355)
	{
		fParam0 = -1f;
	}
	func_67(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0xF59058FCB716F903(0x00000000, 0x000000AD, 0x00000001), "CELL_FILTER");
}

void func_51()
{
	if (unk_0x91E3F625EF57450D(0x00000002) || unk_0x33A494591F2C1975())
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
	}
	func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x000000B7, 0x00000001), "CELL_GRID");
	func_67(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
	func_50(5f);
	func_49(6f);
	func_52(7f);
	func_29(8f);
	if (bLocal_29)
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 9f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
	}
	if (!func_61(0x0000000E))
	{
		if ((Global_12B4E == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("pi_menu")) > 0x00000000) && func_60())
		{
			unk_0x7E60C62A7CE58FC8(iLocal_91, "SET_FOCUS_LOCK");
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x7ACC3006A87F8B39("CELL_ACTTL");
			unk_0xD06AC7C87A34A6AD(unk_0x19C9F30A7697B43C(&Global_412A9E));
			unk_0x779B34565F4D71B1();
			unk_0x1200CC973A2399C8(0x00000000);
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_52(float fParam0)
{
	func_67(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0xF59058FCB716F903(0x00000000, 0x000000AF, 0x00000001), "CELL_ACCYC");
}

void func_53()
{
	func_152(iLocal_92, "SET_CLEAR_SPACE", 200f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_152(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x00000027, 0x00000001), "CELL_284");
	func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
	func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000000, 0x000000B1, 0x00000001), "CELL_281");
	func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B0, 0x00000001), "CELL_280");
	unk_0x7E60C62A7CE58FC8(iLocal_92, "SET_MAX_WIDTH");
	unk_0x7C19E5E4784BD7CF(fLocal_40);
	unk_0x7E60D21B163E9D56();
	func_152(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
}

void func_54()
{
	if (iLocal_106 == 0x00000001)
	{
		func_55();
		return;
	}
	if (iLocal_84 == 0x00000000 && iLocal_85 == 0x00000000)
	{
		func_152(iLocal_92, "SET_CLEAR_SPACE", 200f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		func_152(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B1, 0x00000001), "CELL_281");
		func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000002, 0x000000B3, 0x00000001), func_65());
		if (iLocal_82)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
				{
					if (unk_0x91E3F625EF57450D(0x00000002) || unk_0x33A494591F2C1975())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
					}
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
					}
				}
				else if ((Global_12B4E == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("pi_menu")) > 0x00000000) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0x91E3F625EF57450D(0x00000002) || unk_0x33A494591F2C1975())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
					}
					func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000002, 0x000000B7, 0x00000001), "CELL_GRID");
					func_67(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
					if (func_161())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(0x00000001))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_67(iLocal_92, "SET_DATA_SLOT", 8f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 7f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
			{
				if (!unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000002, 0x000000B7, 0x00000001), "CELL_GRID");
					func_67(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
					func_67(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xF59058FCB716F903(0x00000000, 0x00000027, 0x00000001), "CELL_284");
					if (func_161())
					{
						func_50(6f);
						func_49(7f);
						func_67(iLocal_92, "SET_DATA_SLOT", 8f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
					}
				}
				else
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
			{
				if (!func_148())
				{
					if (unk_0x91E3F625EF57450D(0x00000002) || unk_0x33A494591F2C1975())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_1NP_XB");
					}
				}
				func_67(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xF59058FCB716F903(0x00000002, 0x000000B7, 0x00000001), "CELL_GRID");
				func_67(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
				func_67(iLocal_92, "SET_DATA_SLOT", 6f, unk_0xF59058FCB716F903(0x00000000, 0x00000027, 0x00000001), "CELL_284");
				if (func_161())
				{
					if (!func_148())
					{
						func_50(7f);
						func_49(8f);
						if (bLocal_30)
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x000000B6, 0x00000001), "CELL_FOCUS");
						}
						func_67(iLocal_92, "SET_DATA_SLOT", 9f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_148())
					{
						if (unk_0x91E3F625EF57450D(0x00000002) || unk_0x33A494591F2C1975())
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_1NP_XB");
						}
						else
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_1NP_XB");
						}
					}
					func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
					if (func_161())
					{
						if (!func_148())
						{
							func_50(4f);
							func_49(5f);
							func_67(iLocal_92, "SET_DATA_SLOT", 6f, unk_0xF59058FCB716F903(0x00000002, 0x000000B9, 0x00000001), "CELL_DEPTH");
						}
					}
				}
			}
		}
		unk_0x7E60C62A7CE58FC8(iLocal_92, "SET_MAX_WIDTH");
		unk_0x7C19E5E4784BD7CF(fLocal_40);
		unk_0x7E60D21B163E9D56();
		func_152(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	}
}

void func_55()
{
	func_152(iLocal_92, "SET_CLEAR_SPACE", 200f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_152(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x00000027, 0x00000001), "CELL_284");
	func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_285");
	func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000002, 0x000000B3, 0x00000001), func_65());
	func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B1, 0x00000001), "CELL_281");
	unk_0x7E60C62A7CE58FC8(iLocal_92, "SET_MAX_WIDTH");
	unk_0x7C19E5E4784BD7CF(fLocal_40);
	unk_0x7E60D21B163E9D56();
	func_152(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
}

void func_56()
{
	if (iLocal_82)
	{
		unk_0xEF6276132B396452(fLocal_36, 0x3F800000);
		unk_0x2FB9A57162E54BAB(fLocal_37);
	}
}

void func_57(int iParam0)
{
	if (iLocal_106 == 0x00000001)
	{
		return;
	}
	if (Global_440000.f_37817 == 0x00000001)
	{
	}
	else if (Global_440000.f_37818 == 0x00000001)
	{
	}
	else
	{
		unk_0xBBAE59AC07ACB676(iParam0);
	}
}

void func_58()
{
	if (iLocal_28 == 0x00000001)
	{
		if (unk_0x7F8A39872A07D2CE(sLocal_19[Global_4121C9], "phone_cam12DUMMY"))
		{
			unk_0xA6CB86BCFE04B70C(0x00000000);
			unk_0x40861FC5E44959D6(0x00000000);
		}
		else
		{
			unk_0xA6CB86BCFE04B70C(0x00000001);
			unk_0x40861FC5E44959D6(0x00000001);
		}
	}
}

void func_59()
{
	func_152(iLocal_91, "SHOW_REMAINING_PHOTOS", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	if (!func_161())
	{
		if (!Global_198355)
		{
			unk_0x63D6BFA449464BBF("phone_cam");
		}
	}
}

int func_60()
{
	if (func_61(0x0000000E))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if ((unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000000 /*29*/] || unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000001 /*29*/]) || unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000002 /*29*/])
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
	return 0x00000001;
}

bool func_61(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_62(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_63()
{
	if (unk_0x91E3F625EF57450D(0x00000002) || unk_0x33A494591F2C1975())
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x0000001E, 0x00000001), "CELL_RT_RSTICK");
		func_67(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0x00000002, 0x00000001, 0x00000001), "CELL_RT_LSTICK");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x00000001, 0x00000001), "CELL_RT_RSTICK");
		func_67(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0x00000002, 0x00000000, 0x00000001), "CELL_RT_LSTICK");
	}
}

void func_64()
{
	if (unk_0x91E3F625EF57450D(0x00000002) || unk_0x33A494591F2C1975())
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0x00000000, 0x000000B8, 0x00000001), "CELL_SP_2NP_XB");
	}
	func_67(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001), "CELL_LT_RSTICK");
	if (func_61(0x0000000E))
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xF59058FCB716F903(0x00000002, 0x0000001E, 0x00000001), "CELL_LT_LSTICK");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xF59058FCB716F903(0x00000000, 0x00000027, 0x00000001), "CELL_LT_LSTICKZ");
		func_67(iLocal_92, "SET_DATA_SLOT", 6f, unk_0xF59058FCB716F903(0x00000002, 0x0000001E, 0x00000001), "CELL_LT_LSTICK");
	}
}

char* func_65()
{
	if (func_66())
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

int func_66()
{
	switch (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21)
	{
		case 0x000000E9:
			switch (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5)
			{
				case 0x00000009:
					return 0x00000001;
				
				default:
			}
			break;
		
		case 0x0000009E:
			switch (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5)
			{
				case 0x00000003:
				case 0x00000001:
				case 0x00000029:
					return 0x00000001;
				
				default:
			}
			break;
	}
	if (Global_19FC3E)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_67(int iParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_68(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_62(sParam4);
	}
	unk_0x7E60D21B163E9D56();
}

void func_68(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_69()
{
	if (Global_12B4E)
	{
		switch (Global_55A2)
		{
			case 0x00000000:
				if (unk_0x91E3F625EF57450D(0x00000002))
				{
					func_147("CELL_CAM_SELFIE_0_KM", 0xFFFFFFFF);
				}
				else
				{
					func_147("CELL_CAM_SELFIE_0", 0xFFFFFFFF);
				}
				Global_55A2++;
				break;
			
			case 0x00000001:
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (unk_0x91E3F625EF57450D(0x00000002))
					{
						func_147("CELL_CAM_SELFIE_1_KM", 0xFFFFFFFF);
					}
					else
					{
						func_147("CELL_CAM_SELFIE_1", 0xFFFFFFFF);
					}
					Global_55A2++;
				}
				break;
			
			case 0x00000002:
				break;
		}
	}
	else
	{
		switch (Global_55A1)
		{
			case 0x00000000:
				if (unk_0x91E3F625EF57450D(0x00000002))
				{
					func_147("CELL_CAM_SELFIE_0_KM", 0xFFFFFFFF);
				}
				else
				{
					func_147("CELL_CAM_SELFIE_0", 0xFFFFFFFF);
				}
				Global_55A1++;
				break;
			
			case 0x00000001:
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (unk_0x91E3F625EF57450D(0x00000002))
					{
						func_147("CELL_CAM_SELFIE_1_KM", 0xFFFFFFFF);
					}
					else
					{
						func_147("CELL_CAM_SELFIE_1", 0xFFFFFFFF);
					}
					Global_55A1++;
				}
				break;
			
			case 0x00000002:
				break;
			}
	}
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		iVar9 = 0x000000B3;
		iVar10 = 0x00000015;
	}
	else
	{
		iVar9 = 0x000000E4;
		iVar10 = 0x000000E5;
	}
	if (unk_0x06F8112AA79C53D9(0x00000002, iVar10) && !unk_0x06F8112AA79C53D9(0x00000002, iVar9))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000002, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000001, 0x00000001);
		iVar0 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x0000001E)) * 127;
		iVar1 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x0000001F)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000001)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000002)) * 127;
		if (unk_0x91E3F625EF57450D(0x00000002))
		{
			if (unk_0x51D1D19912234EA0(iVar0) > 0x0000001C || unk_0x51D1D19912234EA0(iVar1) > 0x0000001C)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (unk_0x51D1D19912234EA0(iVar2) > 0x0000001C || unk_0x51D1D19912234EA0(iVar3) > 0x0000001C)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (unk_0x91E3F625EF57450D(0x00000002))
		{
			fVar7 = unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000122);
			fVar8 = unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000123);
			if (unk_0x8EB1E94243F14479())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x51D1D19912234EA0(iVar0) > 0x0000001C || unk_0x51D1D19912234EA0(iVar1) > 0x0000001C)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_73(fVar5);
		func_72(fVar6);
		func_71(fVar4);
	}
	else if (!unk_0x06F8112AA79C53D9(0x00000002, iVar9))
	{
		unk_0xEAB026E686C0D991(0x00000000, 0x00000002, 0x00000001);
		unk_0xEAB026E686C0D991(0x00000000, 0x00000001, 0x00000001);
	}
}

void func_71(float fParam0)
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	unk_0xA9D96D93AE7ECD65(fLocal_111);
}

void func_72(float fParam0)
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	unk_0x0CF455992CB3D99D(fLocal_112);
}

void func_73(float fParam0)
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	unk_0x4F72224D596AEDAC(fLocal_113);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		iVar10 = 0x000000B3;
		iVar11 = 0x000000B2;
		if (unk_0x06F8112AA79C53D9(0x00000002, iVar10))
		{
			if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B2) && !func_148())
			{
				unk_0xC4F8A794F3E0516C(0.5f);
				unk_0x19267A54C731A20C(0.85f);
				unk_0x9A8FC75B4D08A382(0.5f);
				unk_0x4B5CA41D3DA44D82(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 0x000000E4;
		iVar11 = 0x000000E5;
	}
	if (unk_0x06F8112AA79C53D9(0x00000002, iVar10) && !unk_0x06F8112AA79C53D9(0x00000002, iVar11))
	{
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B2) && !func_148())
		{
			unk_0xC4F8A794F3E0516C(0.5f);
			unk_0x19267A54C731A20C(0.85f);
			unk_0x9A8FC75B4D08A382(0.5f);
			unk_0x4B5CA41D3DA44D82(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000002, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000001, 0x00000001);
		iVar0 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x0000001E)) * 127;
		iVar1 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x0000001F)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000001)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000002)) * 127;
		if (unk_0x91E3F625EF57450D(0x00000002))
		{
			iVar1 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000027)) * 127;
			fVar8 = unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000122);
			fVar9 = unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000123);
			if (unk_0x8EB1E94243F14479())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x51D1D19912234EA0(iVar2) > 0x0000000F || unk_0x51D1D19912234EA0(iVar3) > 0x0000000F)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0x51D1D19912234EA0(iVar0) > 0x0000001C || unk_0x51D1D19912234EA0(iVar1) > 0x0000001C)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_78(fVar6);
		func_77(fVar7);
		func_76(fVar4);
		if (!func_61(0x0000000E))
		{
			func_75(fVar5);
		}
	}
	else if (!unk_0x7FEE810EE9E768EB(0x00000002, iVar11))
	{
		unk_0xEAB026E686C0D991(0x00000000, 0x00000002, 0x00000001);
		unk_0xEAB026E686C0D991(0x00000000, 0x00000001, 0x00000001);
	}
	if (!unk_0x7FEE810EE9E768EB(0x00000002, iVar10) && !unk_0x7FEE810EE9E768EB(0x00000002, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x0000001E)) * 127;
		iVar1 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x0000001F)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000122)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000123)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000126)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000127)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000124)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x00000125)) * 127;
		if (unk_0x51D1D19912234EA0(iVar2) > 0x0000001C || unk_0x51D1D19912234EA0(iVar3) > 0x0000001C)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0x51D1D19912234EA0(iVar0) > 0x0000001C || unk_0x51D1D19912234EA0(iVar1) > 0x0000001C)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_61(0x0000000E))
		{
			func_75(fVar5);
		}
	}
}

void func_75(float fParam0)
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	unk_0x9A8FC75B4D08A382(fLocal_109);
}

void func_76(float fParam0)
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	unk_0x4B5CA41D3DA44D82(fLocal_110);
}

void func_77(float fParam0)
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	unk_0x19267A54C731A20C(fLocal_108);
}

void func_78(float fParam0)
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	unk_0xC4F8A794F3E0516C(fLocal_107);
}

void func_79()
{
	if (Global_12C52 || Global_12C53)
	{
		return;
	}
	if (iLocal_75 == 0x00000000)
	{
		if (!iLocal_100)
		{
			if (Global_440000.f_37817 == 0x00000000 && Global_440000.f_37818 == 0x00000000)
			{
				unk_0x6567AE843FADBA94(iLocal_92, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
			}
		}
	}
	if (iLocal_78 == 0x00000000)
	{
		if (Global_4BE4)
		{
			if (Global_4CD0)
			{
				if (iLocal_100 == 0x00000000)
				{
					if (Global_4C1E.f_1 > 0x00000003)
					{
					}
				}
			}
		}
		else
		{
			func_81(0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
			func_80(0.059f, 0.644f, "CELL_284", 0x00000000);
			func_81(0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
			func_80(0.165f, 0.644f, "CELL_285", 0x00000000);
			func_81(0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
			func_80(0.275f, 0.75f, "CELL_280", 0x00000000);
			func_81(0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
			func_80(0.275f, 0.83f, "CELL_281", 0x00000000);
		}
	}
	else if (Global_4BE4)
	{
	}
	else
	{
		func_81(0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
		func_80(0.275f, 0.75f, func_65(), 0x00000000);
		func_81(0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
		func_80(0.275f, 0.79f, "CELL_286", 0x00000000);
		func_81(0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
		func_80(0.275f, 0.83f, "CELL_281", 0x00000000);
	}
}

void func_80(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xD3539A877EC25E86(0.4f, 0.4f);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x000000CD);
	unk_0x57614350887C2EAD(0x00000001);
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0x7178F32F6742C936(iParam0, iParam1, iParam2, iParam3);
}

void func_82()
{
	unk_0xEF6276132B396452(fLocal_38, 0x3F800000);
	unk_0x2FB9A57162E54BAB(fLocal_39);
}

void func_83()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000003, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000004, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000005, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000006, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000001, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000002, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000027, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002F, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000038, 0x00000001);
}

void func_84()
{
	vLocal_44 = { Global_4BEF[Global_4BE7 /*3*/] };
	if (Global_4BE4)
	{
		if (func_87())
		{
			unk_0x1CFAC524932A967E(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_72 = 0x00000000;
			iLocal_73 = 0x00000000;
			iLocal_74 = 0x00000000;
		}
		func_1(0x00000001);
		if (iLocal_72)
		{
			vLocal_42.x = (vLocal_42.x + 12f);
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0x00000000;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBE, 0x00000004))
		{
			if (vLocal_42.y < (vLocal_44.y + 15f) || vLocal_42.y == (vLocal_44.y + 15f))
			{
				vLocal_42.y = (vLocal_44.y + 15f);
				iLocal_73 = 0x00000000;
			}
		}
		else if (vLocal_42.y < (vLocal_44.y + 10f) || vLocal_42.y == (vLocal_44.y + 10f))
		{
			vLocal_42.y = (vLocal_44.y + 10f);
			iLocal_73 = 0x00000000;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0x00000000;
		}
		if (func_87() == 0x00000000)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBE, 0x00000004))
			{
				vLocal_44.y = (vLocal_44.y + 15f);
			}
			else
			{
				vLocal_44.y = (vLocal_44.y + 10f);
			}
			vLocal_44.x = (vLocal_44.x - 14f);
		}
		else
		{
			vLocal_44 = { Global_4BE8[Global_4BE7 /*3*/] };
		}
		vLocal_42 = { vLocal_44 };
		iLocal_74 = 0x00000000;
		iLocal_73 = 0x00000000;
		iLocal_72 = 0x00000000;
		unk_0x39F06A2B18483C68(vLocal_42);
		if ((iLocal_72 == 0x00000000 && iLocal_73 == 0x00000000) && iLocal_74 == 0x00000000)
		{
			iLocal_75 = 0x00000000;
			vLocal_43 = { -90.3f, 0f, 90f };
			unk_0x44FE29702110D5C6(vLocal_43, 0x00000000);
			if (!unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000016))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001C))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_85();
				}
				iLocal_51 = 0x00000002;
			}
		}
	}
}

void func_85()
{
	func_152(iLocal_92, "SET_CLEAR_SPACE", 200f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_152(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001C))
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B0, 0x00000001), "CELL_286");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000002, 0x000000B2, 0x00000001), "CELL_277");
		func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B0, 0x00000001), "CELL_GALSAVE");
	}
	unk_0x7E60C62A7CE58FC8(iLocal_92, "SET_MAX_WIDTH");
	unk_0x7C19E5E4784BD7CF(fLocal_40);
	unk_0x7E60D21B163E9D56();
	func_152(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
}

void func_86()
{
	func_152(iLocal_92, "SET_CLEAR_SPACE", 200f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_152(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001C))
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000002, 0x000000B3, 0x00000001), func_65());
		func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B0, 0x00000001), "CELL_286");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0x00000002, 0x000000B3, 0x00000001), func_65());
		func_67(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0x00000002, 0x000000B2, 0x00000001), "CELL_277");
		func_67(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0x00000000, 0x000000B0, 0x00000001), "CELL_GALSAVE");
	}
	unk_0x7E60C62A7CE58FC8(iLocal_92, "SET_MAX_WIDTH");
	unk_0x7C19E5E4784BD7CF(fLocal_40);
	unk_0x7E60D21B163E9D56();
	func_152(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
}

int func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			if (Global_4BE5 == 0x00000000)
			{
				if (Global_1A0F != 0x00000080)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (Global_5145 != 0x00000002)
						{
						}
					}
				}
			}
		}
		if (func_61(0x0000000E))
		{
			return 0x00000000;
		}
		if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000000;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!unk_0x00295B14470935CE())
			{
				if (unk_0x70EED0761B82965E(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
				{
					return 0x00000000;
				}
			}
		}
		if (((unk_0x5EB102898326C705(unk_0x16F2683693E537C9()) || unk_0xBADF5264209B7544(unk_0x16F2683693E537C9())) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4FB00DDF9C0D8114(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
		if (Global_1B05E)
		{
			return 0x00000000;
		}
	}
	if (Global_12B4E)
	{
		return 0x00000000;
	}
	iVar2 = 0x00000000;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 0x00000004 && (iVar0 == 0x00000000 || unk_0x00295B14470935CE()))
	{
		iVar2 = 0x00000001;
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if ((((((((unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar3)) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iVar3))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iVar3))) || unk_0x134B62B726CEC8E6(iVar3) == joaat("seashark")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("seashark2")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("rhino")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("submersible")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("submersible2")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("toro"))
				{
					iVar2 = 0x00000000;
				}
			}
		}
	}
	if (Global_4127DB || iVar2 == 0x00000001)
	{
		if (unk_0x8A22C4C08282BF26(joaat("apptrackify")) > 0x00000000 || Global_1B416.f_36DE.f_59)
		{
			if (unk_0x8A22C4C08282BF26(joaat("michael2")) > 0x00000000)
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
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_88()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002F, 0x00000001);
	unk_0x558EC149EB2BC0A2(0x00000000, Global_4C00);
	vLocal_43 = { Global_4BF6 };
	vLocal_44 = { Global_4BEF[Global_4BE7 /*3*/] };
	if (func_87())
	{
		unk_0xED76A908847D23B4(&vLocal_45, 0x00000000);
		vLocal_43 = { vLocal_45 };
		unk_0x1CFAC524932A967E(&vLocal_46);
		vLocal_44 = { vLocal_46 };
		iLocal_69 = 0x00000000;
		iLocal_70 = 0x00000000;
		iLocal_71 = 0x00000000;
		iLocal_72 = 0x00000000;
		iLocal_73 = 0x00000000;
		iLocal_74 = 0x00000000;
	}
	if (Global_4BE4)
	{
		func_152(iLocal_91, "SHOW_PHOTO_FRAME", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		func_57(0x00000000);
		iLocal_82 = 0x00000000;
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001E))
		{
			iLocal_69 = 0x00000000;
			iLocal_70 = 0x00000000;
			iLocal_71 = 0x00000000;
			func_89();
		}
		if (iLocal_72)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000009))
			{
				vLocal_42.x = (vLocal_42.x + 2f);
			}
			else
			{
				vLocal_42.x = (vLocal_42.x + 12f);
			}
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0x00000000;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (vLocal_42.y < vLocal_44.y || vLocal_42.y == vLocal_44.y)
		{
			vLocal_42.y = vLocal_44.y;
			iLocal_73 = 0x00000000;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0x00000000;
		}
		if (iLocal_74 == 0x00000000)
		{
			if (iLocal_69)
			{
				vLocal_41.x = (vLocal_41.x + 1f);
			}
			if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
			{
				vLocal_41.x = vLocal_43.x;
				iLocal_69 = 0x00000000;
			}
			if (iLocal_70)
			{
				vLocal_41.y = (vLocal_41.y - 2f);
			}
			if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
			{
				vLocal_41.y = vLocal_43.y;
				iLocal_70 = 0x00000000;
			}
			if (iLocal_71)
			{
				vLocal_41.z = (vLocal_41.z - 14f);
			}
			if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
			{
				vLocal_41.z = vLocal_43.z;
				iLocal_71 = 0x00000000;
			}
		}
		if (iLocal_77)
		{
			vLocal_41 = { vLocal_43 };
			vLocal_42 = { vLocal_44 };
			iLocal_69 = 0x00000000;
			iLocal_70 = 0x00000000;
			iLocal_71 = 0x00000000;
			if (func_87() == 0x00000000)
			{
				unk_0x44FE29702110D5C6(vLocal_41, 0x00000000);
				unk_0x39F06A2B18483C68(vLocal_42);
			}
			func_104(0x00000000, 0x00000001);
		}
		else if (func_87() == 0x00000000)
		{
			unk_0x44FE29702110D5C6(vLocal_41, 0x00000000);
			unk_0x39F06A2B18483C68(vLocal_42);
		}
		if ((iLocal_69 == 0x00000000 && iLocal_70 == 0x00000000) && iLocal_71 == 0x00000000)
		{
			func_89();
		}
	}
	else
	{
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x + 1f);
		}
		if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0x00000000;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 2f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0x00000000;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z - 7f);
		}
		if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0x00000000;
		}
		if ((iLocal_69 == 0x00000000 && iLocal_70 == 0x00000000) && iLocal_71 == 0x00000000)
		{
			func_89();
		}
	}
	unk_0x44FE29702110D5C6(vLocal_41, 0x00000000);
}

void func_89()
{
	func_1(0x00000000);
	if (func_87() == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001E))
		{
			unk_0x39F06A2B18483C68(Global_4BE8[Global_4BE7 /*3*/]);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_4BEF[Global_4BE7 /*3*/]);
		}
		vLocal_41 = { vLocal_43 };
		unk_0x44FE29702110D5C6(vLocal_41, 0x00000000);
	}
	Global_554E = 0x00000000;
	func_111(0x00000000, 0x00000000);
	func_115(0x00000000);
	iLocal_66 = 0x00000000;
	func_106(0x00000001);
	Global_4C11 = 0x00000001;
	Global_5551 = 0x00000000;
	if (Global_4C1E.f_1 > 0x00000004)
	{
		Global_4C1E.f_1 = 0x00000006;
		Global_4C08 = 0x00000001;
		func_90();
	}
	if (unk_0x83D8570832F172A7(iLocal_91))
	{
		func_151(iLocal_91, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0x00000000);
	unk_0xC2127C0F64D6A3B9();
	unk_0xE17FDF9E3068281B(&iLocal_92);
	unk_0xE17FDF9E3068281B(&iLocal_91);
	if (Global_4CD2 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000012);
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000015);
	unk_0x2CBCC7DC0EEFF804(0x00000000, 0x00000001);
	unk_0x0674E58A79778E99(&Global_1CBE, 0x00000003);
	unk_0x0674E58A79778E99(&Global_4126C5, 0x00000003);
	unk_0x21387C9EECC2B220(0x00000000);
	unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000001);
	unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
	Global_5552 = 0x00000001;
	unk_0x55D0A2DB35045A35(iLocal_63);
	unk_0x43A06902454A1172(iLocal_63);
	unk_0xBBCE9616B024A2BF();
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), "Mood_Normal_1", 0x00000000);
		unk_0x16BEAC335EC5109B(unk_0x16F2683693E537C9());
	}
	func_106(0x00000001);
	unk_0xA6CB86BCFE04B70C(0x00000000);
	unk_0x40861FC5E44959D6(0x00000000);
	unk_0x902FD904CBCE9316(1f);
	if (Global_4121CA > 0x00000000 && Global_4121CA < 0x0000000D)
	{
		unk_0xF5A41F3D3B38EFE3(sLocal_20[Global_4121CA]);
	}
	func_104(0x00000000, 0x00000001);
	if (func_159(0x00000000, 0x00000001, iLocal_31, 0x00000001))
	{
		iLocal_31 = 0x00000000;
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_90()
{
	vector3 vVar0[24];
	
	if (Global_4C0D == 0x00000001)
	{
		return;
	}
	if (Global_4C1E.f_1 < 0x00000004)
	{
		return;
	}
	while (!unk_0x83D8570832F172A7(Global_4C0B))
	{
		if (Global_12B4E)
		{
			return;
		}
		SYSTEM::WAIT(0x00000000);
	}
	switch (Global_4C1E.f_1)
	{
		case 0x00000006:
			func_152(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_98(Global_1F19);
			if (Global_1F19 == 0x00000001)
			{
				func_152(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 0xBF800000, 0xBF800000, 0xBF800000);
				Global_4C0A = Global_4C22;
			}
			else
			{
				func_152(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C23), 0xBF800000, 0xBF800000, 0xBF800000);
				Global_4C0A = Global_4C23;
			}
			if (Global_4C12)
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (Global_4CD2 == 0x00000000)
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			}
			else if (Global_12B4E)
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			}
			else
			{
				if (Global_4CD1 == 0x00000001)
				{
					if (Global_4C12)
					{
						func_97(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_97(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (Global_4C12)
				{
					func_97(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_97(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
			}
			if (Global_12B4E)
			{
				func_95();
				unk_0x0674E58A79778E99(&Global_1CBE, 0x00000009);
				func_152(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 0xBF800000, 0xBF800000, 0xBF800000);
			}
			break;
		
		case 0x00000007:
			break;
		
		case 0x0000000A:
			func_152(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_97(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_97(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (Global_4BE5)
				{
					func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000009:
			if (Global_4C1D == 0x00000001)
			{
				func_94();
				func_152(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000004);
					unk_0x3CAEA85DA607305E(0x00000000);
					unk_0x3CAEA85DA607305E(0x00000002);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_62("CELL_300");
					func_62("CELL_217");
					func_62("CELL_217");
					unk_0x7E60D21B163E9D56();
				}
				else if (func_93(Global_1A0F, Global_4C1E) == 0x00000000)
				{
					func_97(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000002), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0x00000000);
				}
				else
				{
					func_97(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000002), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), "CELL_217", &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
				}
				func_152(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			else if (Global_5145 == 0x00000004 || Global_5145 == 0x00000003)
			{
				func_152(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_94();
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000004);
					unk_0x3CAEA85DA607305E(0x00000000);
					unk_0x3CAEA85DA607305E(0x00000002);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_62("CELL_300");
					func_62("CELL_219");
					func_62("CELL_219");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					if (Global_5247)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_93(Global_1A0F, Global_4C1E) == 0x00000000)
					{
						func_152(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_97(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0x00000000);
					}
					else
					{
						func_152(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_97(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), &cVar0, &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
					}
				}
				func_152(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			func_91();
			break;
		
		default:
			break;
	}
}

void func_91()
{
	if (unk_0x83D8570832F172A7(Global_4C0B))
	{
		func_92();
		if (Global_4C1D == 0x00000001)
		{
			if (Global_4C12)
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (Global_5174)
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			func_97(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		}
		else
		{
			func_97(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_97(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (Global_4BE5)
				{
					func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				func_97(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
}

void func_92()
{
	if (Global_12B4E)
	{
		func_97(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
	}
}

int func_93(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

void func_94()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (Global_4C1E == 0x00000000)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 0x00000001)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 0x00000002)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 0x00000003)
		{
			switch (Global_4127D9)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_95()
{
	if (Global_12B4E)
	{
		if (func_96() == 0x00000000)
		{
			return;
		}
		func_97(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
	}
}

int func_96()
{
	return 0x00000000;
}

void func_97(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_62(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_62(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_62(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_62(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_62(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_98(int iParam0)
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
	
	Global_5571 = 0x00000000;
	Global_1F19 = iParam0;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		Global_1EF5[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		iVar1 = 0x00000000;
		if (func_61(0x0000000E))
		{
			while (iVar1 < 0x00000022)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0x00000000)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 0x00000003)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000003))
								{
									iVar2 = 0x0000002A;
									Global_4CD4 = 0x00000001;
								}
								else
								{
									iVar2 = 0x000000FF;
									Global_4CD4 = 0x00000000;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_62(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_97(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							Global_1EF5[iVar0] = 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 0x00000022)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0x00000000)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 0x00000001)
							{
								iVar3 = 0x00000000;
								while (iVar3 < 0x00000023)
								{
									if (Global_1B416.f_3738[iVar3 /*104*/].f_18 != 0x00000000)
									{
										if (Global_1B416.f_3738[iVar3 /*104*/].f_1C == 0x00000000)
										{
											if (Global_1B416.f_3738[iVar3 /*104*/].f_63[Global_4C1E] == 0x00000001)
											{
												Global_5571++;
											}
										}
									}
									iVar3++;
								}
								func_97(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000007)
							{
								if (Global_12B4E)
								{
									iVar4 = 0x00000000;
									iVar4 = Global_4121D3;
									iVar5 = 0x00000000;
									while (iVar5 < 0x0000000C)
									{
										if (Global_4121D4[iVar5 /*104*/].f_18 != 0x00000000)
										{
											if (Global_4121D4[iVar5 /*104*/].f_1C == 0x00000000)
											{
												if (Global_4121D4[iVar5 /*104*/].f_63[Global_4C1E] == 0x00000001)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_97(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									switch (Global_4C1E)
									{
										case 0x00000000:
											iVar6 = Global_A66F;
											break;
										
										case 0x00000001:
											iVar6 = Global_A670;
											break;
										
										case 0x00000002:
											iVar6 = Global_A671;
											break;
										
										default:
											break;
									}
									func_97(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_97(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_62(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(Global_1CC2);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000002)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000006))
								{
									iVar7 = 0x0000002A;
								}
								else
								{
									iVar7 = 0x000000FF;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_62(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000003)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000003))
								{
									iVar8 = 0x0000002A;
									Global_4CD4 = 0x00000001;
								}
								else
								{
									iVar8 = 0x000000FF;
									Global_4CD4 = 0x00000000;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_62(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000008)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_62(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 0x00000017 && unk_0x7F8A39872A07D2CE(&(Global_1CC3[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000006))
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_62(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_97(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_97(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							Global_1EF5[iVar0] = 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_99()
{
	switch (iLocal_51)
	{
		case 0x00000001:
			unk_0x2CBCC7DC0EEFF804(0x00000000, 0x00000001);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001C))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_54();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_28();
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000016))
			{
				unk_0x2CBCC7DC0EEFF804(0x00000000, 0x00000001);
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001C))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_85();
				}
				iLocal_51 = 0x00000002;
			}
			break;
		
		default:
			break;
	}
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		if (!func_113())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000011);
		}
	}
	else if (func_113())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000011);
	}
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 0x00000001 && unk_0xD245978525608929(iParam0, iParam1)))
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0xDAC65F45B0B2D176() == 0x00000000 || (unk_0x4FD68D5821EE3E19() && unk_0x91E3F625EF57450D(0x00000002)))
			{
				return 0x00000000;
			}
		}
		if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_102(bool bParam0)
{
	if (bParam0)
	{
		if (!func_103())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 0x00000012);
		}
	}
	else if (func_103())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0x00000012);
	}
}

bool func_103()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000012);
}

void func_104(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_105(0x00000000))
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

int func_105(int iParam0)
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

void func_106(int iParam0)
{
	if ((Global_440000.f_37817 == 0x00000000 && Global_440000.f_37818 == 0x00000000) && !Global_198355)
	{
		if (func_107(unk_0xD803B885F5E47A62()) && iParam0)
		{
			Global_19FCC3 = 0x00000001;
		}
		else
		{
			unk_0x225CFE81EA219E44();
		}
	}
}

int func_107(int iParam0)
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_108(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000011;
			}
		}
	}
	return 0x00000000;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
			return 0x00000000;
			break;
		
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			return 0x00000001;
			break;
		
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
			return 0x00000002;
			break;
		
		case 0x0000002B:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000077:
		case 0x00000074:
		case 0x00000076:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
			return 0x00000003;
			break;
		
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
			return 0x00000004;
			break;
		
		case 0x00000051:
			return 0x00000005;
			break;
		
		case 0x00000052:
			return 0x00000006;
			break;
		
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
			return 0x00000007;
			break;
		
		case 0x00000058:
			return 0x00000008;
			break;
		
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
			return 0x00000009;
			break;
		
		case 0x00000065:
			return 0x0000000A;
			break;
		
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
			return 0x0000000B;
			break;
		
		case 0x00000075:
			return 0x0000000C;
			break;
		
		case 0x0000007A:
			return 0x0000000D;
			break;
		
		case 0x0000007B:
			return 0x0000000E;
			break;
		
		case 0x0000007C:
			return 0x0000000F;
			break;
		
		case 0x0000007D:
			return 0x00000010;
			break;
		
		case 0x00000080:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
			return 0x00000011;
			break;
		
		case 0x00000091:
			return 0x00000012;
			break;
	}
	return 0xFFFFFFFF;
}

int func_109(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0x00000000;
				}
			}
			if (bParam2)
			{
				if (!Global_2537E2.f_3[iVar0])
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_110()
{
	return 0xFFFFFFFF;
}

void func_111(int iParam0, int iParam1)
{
	if (Global_440000.f_37817 == 0x00000001)
	{
	}
	else if (Global_440000.f_37818 == 0x00000001)
	{
	}
	else
	{
		unk_0x130EC2FF22A1FA80(iParam0, iParam1);
	}
}

int func_112()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000F))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_113()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000011);
}

void func_114()
{
	if (Global_4BE4)
	{
		vLocal_43 = { -90.3f, 0f, 90f };
		vLocal_44 = { 1.5f, 0f, -17f };
		if (func_87())
		{
			unk_0xED76A908847D23B4(&vLocal_45, 0x00000000);
			vLocal_43 = { vLocal_45 };
			unk_0x1CFAC524932A967E(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_69 = 0x00000000;
			iLocal_70 = 0x00000000;
			iLocal_71 = 0x00000000;
			iLocal_72 = 0x00000000;
			iLocal_73 = 0x00000000;
			iLocal_74 = 0x00000000;
		}
		if (iLocal_71 == 0x00000000)
		{
			if (iLocal_72)
			{
				vLocal_42.x = (vLocal_42.x - 14f);
			}
			if (vLocal_42.x < vLocal_44.x || vLocal_42.x == vLocal_44.x)
			{
				iLocal_72 = 0x00000000;
			}
			if (iLocal_73)
			{
				vLocal_42.y = (vLocal_42.y + 7f);
			}
			if (vLocal_42.y > vLocal_44.y || vLocal_42.y == vLocal_44.y)
			{
				iLocal_73 = 0x00000000;
			}
			if (iLocal_74)
			{
				vLocal_42.z = (vLocal_42.z + 12f);
			}
			if (vLocal_42.z > vLocal_44.z || vLocal_42.z == vLocal_44.z)
			{
				iLocal_74 = 0x00000000;
			}
		}
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			vLocal_41.x = vLocal_43.x;
			iLocal_69 = 0x00000000;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 0.5f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			vLocal_41.y = vLocal_43.y;
			iLocal_70 = 0x00000000;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 11f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			vLocal_41.z = vLocal_43.z;
			iLocal_71 = 0x00000000;
		}
		if (func_87() == 0x00000000)
		{
			unk_0x44FE29702110D5C6(vLocal_41, 0x00000000);
			unk_0x39F06A2B18483C68(vLocal_42);
		}
	}
	else
	{
		vLocal_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0x00000000;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y + 2f);
		}
		if (vLocal_41.y > vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0x00000000;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 7f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0x00000000;
		}
		unk_0x44FE29702110D5C6(vLocal_41, 0x00000000);
	}
	if (Global_4BE4)
	{
		if (((((iLocal_69 == 0x00000000 && iLocal_70 == 0x00000000) && iLocal_71 == 0x00000000) && iLocal_72 == 0x00000000) && iLocal_73 == 0x00000000) && iLocal_74 == 0x00000000)
		{
			if (func_87())
			{
			}
			else
			{
				vLocal_41 = { vLocal_43 };
				unk_0x44FE29702110D5C6(vLocal_41, 0x00000000);
				vLocal_42 = { vLocal_44 };
				unk_0x39F06A2B18483C68(vLocal_42);
			}
			if (iLocal_54 == 0x00000000)
			{
				Global_554F = 0x00000000;
				func_111(0x00000001, 0x00000001);
				iLocal_66 = 0x00000001;
				func_115(0x00000001);
				func_59();
				func_116();
				func_57(0x00000000);
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_93 = 0x00000001;
				iLocal_94 = 0x00000001;
				func_128();
				func_152(iLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
				{
					func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				}
				func_152(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 0xBF800000, 0xBF800000, 0xBF800000);
				func_154();
			}
		}
	}
	else if ((iLocal_69 == 0x00000000 && iLocal_70 == 0x00000000) && iLocal_71 == 0x00000000)
	{
		vLocal_41 = { vLocal_43 };
		unk_0x44FE29702110D5C6(vLocal_41, 0x00000000);
		Global_554F = 0x00000000;
	}
}

void func_115(bool bParam0)
{
	if (func_161())
	{
		if (bParam0)
		{
			if (!unk_0xEB2424501D38FCE7())
			{
				unk_0xED7EF6862C46961F(0x00000001);
				if (Global_4121CA > 0x00000000 && Global_4121CA < 0x00000063)
				{
					unk_0x1D86FFCD165BF465(sLocal_20[Global_4121CA], 0x00000000);
					unk_0x902FD904CBCE9316(0.25f);
				}
			}
		}
		else if (unk_0xEB2424501D38FCE7())
		{
			unk_0xED7EF6862C46961F(0x00000000);
		}
	}
}

void func_116()
{
	if (Global_4121C9 > 0x00000000 && Global_4121C9 < 0x00000063)
	{
		if (!Global_198355)
		{
			unk_0x63D6BFA449464BBF(sLocal_19[Global_4121C9]);
		}
	}
}

void func_117()
{
	if (Global_4BE4)
	{
		iLocal_76 = 0x00000000;
		func_59();
		func_104(0x00000001, 0x00000001);
		func_111(0x00000001, 0x00000001);
		iLocal_66 = 0x00000001;
		Global_5552 = 0x00000001;
	}
}

void func_118()
{
	if (Global_440000.f_37817 == 0x00000001 && func_119())
	{
		return;
	}
	if (iLocal_78 == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000001C))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_54();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_28();
		}
		if (unk_0x7F8A39872A07D2CE(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 0x00000001;
	}
}

int func_119()
{
	if (((func_123() || func_122()) || func_121()) || func_120())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_120()
{
	return Global_2564C8.f_13;
}

var func_121()
{
	return Global_2564C8.f_11;
}

var func_122()
{
	return Global_2564C8.f_10;
}

var func_123()
{
	return Global_2564C8.f_F;
}

void func_124()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Back", &Global_4C13, 0x00000001);
	}
}

void func_125()
{
	unk_0x918CFFD78ECE297E(0x00000000, 0x00000000);
	iLocal_72 = 0x00000001;
	iLocal_73 = 0x00000001;
	iLocal_74 = 0x00000001;
	iLocal_75 = 0x00000000;
	iLocal_76 = 0x00000001;
}

void func_126()
{
	func_127();
}

void func_127()
{
	if (iLocal_101)
	{
		if (SYSTEM::TIMERA() > 0x00000032)
		{
			iLocal_101 = 0x00000000;
		}
	}
	if (iLocal_101 == 0x00000000)
	{
	}
}

void func_128()
{
	if (Global_4C1E.f_1 > 0x00000003)
	{
		if (!unk_0x798A3F1296751F46())
		{
			unk_0xEF45C43067063F18(iLocal_91, 0.5f, 0.5f, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
		}
	}
}

void func_129()
{
	if (func_61(0x0000000E))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000000 /*29*/])
			{
				Global_4C1E = 0x00000000;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000001 /*29*/])
			{
				Global_4C1E = 0x00000001;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000002 /*29*/])
			{
				Global_4C1E = 0x00000002;
			}
			else
			{
				Global_4C1E = 0x00000000;
			}
		}
	}
	else
	{
		Global_4C1E = func_11();
		if (Global_4C1E == 0x00000091)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_12B4E)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_4C1E > 0x00000003)
		{
			Global_4C1E = 0x00000003;
		}
	}
}

void func_130(int iParam0)
{
	if (func_132())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_148())
		{
			func_104(0x00000001, 0x00000001);
		}
		else
		{
			func_104(0x00000000, 0x00000000);
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
	if (!func_131())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_131()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_132()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_133()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000038, 0x00000001);
	if (iLocal_100 == 0x00000000)
	{
		unk_0x558EC149EB2BC0A2(0x00000000, Global_4C03);
		unk_0x558EC149EB2BC0A2(0x00000000, Global_4C00);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000116, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000117, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000118, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000119, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000011A, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000011A, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000011C, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000011D, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000045, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000046, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000072, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000047, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000048, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004A, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004C, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000049, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004D, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004E, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000011E, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000011F, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004F, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000051, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000052, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000056, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003B, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003C, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003D, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003E, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003F, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000040, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000057, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000058, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000005A, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006B, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006C, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006D, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006E, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006F, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000070, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000071, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000072, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000005B, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000005C, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000066, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000088, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000089, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008A, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008B, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000066, 0x00000001);
	}
}

int func_134()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xBBA8A868118C90ED(iVar0, 0xFFFFFFFF, 0x00000000))
			{
				return 0x00000001;
			}
			else if (!unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_135()
{
	var uVar0;
	
	func_143(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_142())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_141())
	{
		return 0x00000001;
	}
	if (func_140(0x0000009F))
	{
		if (!func_139())
		{
			return 0x00000001;
		}
	}
	if (func_140(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_136() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_136()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_136()
{
	switch (func_138())
	{
		case 0x00000000:
			return func_137();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_137()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_138()
{
	return Global_7830;
}

bool func_139()
{
	return Global_2564C8.f_256;
}

int func_140(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_141()
{
	return Global_258C08;
}

bool func_142()
{
	return Global_2564C8.f_251;
}

void func_143(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		if (iVar1 == 0x000000AE)
		{
			unk_0x218F818E64020C17(0x00000001, iVar0, &iVar2, 0x00000002);
			switch (iVar2)
			{
				case 0x918B9E9A:
					func_144(iVar0);
					break;
				
				case 0x231D58EE:
					unk_0x218F818E64020C17(0x00000001, iVar0, &vVar3, 0x00000004);
					if (vVar3.z == 0x26FA13EF)
					{
						*uParam0 = 0x00000001;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_144(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_109(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_145(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_145(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0x00000000, 0x00000001);
					*uParam1 = 0x00000001;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0x00000000))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_146()
{
	if (iLocal_106 == 0x00000001)
	{
		unk_0x3584F71E5CA29322(0x00000007);
		unk_0x3584F71E5CA29322(0x00000001);
		unk_0x3584F71E5CA29322(0x00000003);
		unk_0x3584F71E5CA29322(0x00000004);
		unk_0x3584F71E5CA29322(0x00000006);
		unk_0x3584F71E5CA29322(0x00000008);
		unk_0x3584F71E5CA29322(0x00000009);
		unk_0x3584F71E5CA29322(0x00000002);
	}
	else
	{
		unk_0x3FC8DBCC154CA56B();
	}
}

void func_147(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

bool func_148()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

void func_149()
{
	if (func_150())
	{
		unk_0x9F830D3499A5773E();
		if (unk_0x1ED2F074FDAB6B19(0x00000000))
		{
			iLocal_54 = 0x00000001;
			iLocal_62 = 0x00000000;
		}
		else
		{
			Global_5552 = 0x00000001;
			Global_4C1E.f_1 = 0x00000003;
			unk_0xBBCE9616B024A2BF();
		}
	}
	else
	{
		iLocal_60 = 0x00000000;
		iLocal_61 = 0x00000000;
		if (iLocal_55 == 0x00000001)
		{
			if (iLocal_78 == 0x00000000)
			{
				if (unk_0x83D8570832F172A7(iLocal_91))
				{
					if (func_161())
					{
						if (Global_4121CA == 0x00000000)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
							{
								func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
							}
						}
						func_152(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 0xBF800000, 0xBF800000, 0xBF800000);
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000002))
						{
							func_152(iLocal_91, "SHOW_PHOTO_FRAME", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						}
						func_152(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 0xBF800000, 0xBF800000, 0xBF800000);
					}
				}
			}
			else if (unk_0x83D8570832F172A7(iLocal_91))
			{
				func_152(iLocal_91, "SHOW_PHOTO_FRAME", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_152(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), 0xBF800000, 0xBF800000, 0xBF800000);
			}
			iLocal_55 = 0x00000000;
		}
		iLocal_62 = 0x00000000;
		unk_0xBBCE9616B024A2BF();
	}
}

int func_150()
{
	if (Global_440000.f_37817 == 0x00000001)
	{
		if (Global_12B4E)
		{
			return 0x00000000;
		}
	}
	if (Global_440000.f_37818 == 0x00000001)
	{
		if (Global_12B4E)
		{
			return 0x00000000;
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xBA301E03A078FA59())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001C))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_151(int iParam0, char* sParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x7E60D21B163E9D56();
}

void func_152(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	unk_0x7E60D21B163E9D56();
}

int func_153()
{
	if (Global_12B4E)
	{
		Global_4C1E = 0x00000003;
	}
	else
	{
		Global_4C1E = func_11();
	}
	if (Global_4C1E > 0x00000003)
	{
		Global_4C1E = 0x00000003;
	}
	return Global_1B416.f_36DE[Global_4C1E /*20*/].f_7;
}

void func_154()
{
	if (Global_4C1E.f_1 > 0x00000003)
	{
		Global_4C1E.f_1 = 0x00000008;
	}
	Global_5551 = 0x00000000;
	iLocal_78 = 0x00000000;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	}
	if (Global_4BE4)
	{
		while (SYSTEM::TIMERA() < iLocal_88)
		{
			SYSTEM::WAIT(0x00000000);
			func_128();
			func_83();
			unk_0xC2127C0F64D6A3B9();
		}
		func_151(iLocal_91, "OPEN_SHUTTER");
		func_146();
		func_118();
		iLocal_80 = 0x00000001;
		SYSTEM::SETTIMERB(0x00000000);
	}
	else
	{
		func_111(0x00000001, 0x00000001);
		func_115(0x00000001);
		func_59();
		func_116();
		func_57(0x00000000);
		iLocal_66 = 0x00000001;
	}
}

void func_155(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000000F);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000F);
	}
}

bool func_156()
{
	return Global_140856;
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 0x00000001)
				{
					iVar3 = 0xFFFFFFFF;
					return iVar3;
				}
				iVar2 = 0x00000000;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 0x00000001);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0x00000000))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0x00000000) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_158()
{
}

int func_159(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && bParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

void func_160()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
		{
			unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
			unk_0xC4F8A794F3E0516C(fLocal_107);
			unk_0x19267A54C731A20C(fLocal_108);
			unk_0x9A8FC75B4D08A382(fLocal_109);
		}
		else
		{
			unk_0xC4F8A794F3E0516C(fLocal_107);
			unk_0x19267A54C731A20C(fLocal_108);
			unk_0x9A8FC75B4D08A382(fLocal_109);
		}
	}
	unk_0x4B5CA41D3DA44D82(fLocal_110);
	unk_0xA9D96D93AE7ECD65(fLocal_111);
	unk_0x0CF455992CB3D99D(fLocal_112);
	unk_0x4F72224D596AEDAC(fLocal_113);
	func_56();
}

int func_161()
{
	if (iLocal_23 == 0x00000000)
	{
		iLocal_23 = 0x00000001;
	}
	return 0x00000001;
}

