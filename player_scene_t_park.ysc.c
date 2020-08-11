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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	int iLocal_72 = 0;
	float fLocal_73 = 0f;
	int iLocal_74 = 0;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	char cLocal_80[64] = "";
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	char cLocal_89[64] = "";
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	char cLocal_98[64] = "";
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	vector3 vLocal_107 = { 0f, 0f, 0f };
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	char* sLocal_110 = NULL;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	char[] cLocal_126[8] = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	char cLocal_142[64] = "";
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	char cLocal_151[64] = "";
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	char cLocal_160[64] = "";
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 0x00000003;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_62 = { 0f, 0f, 0f };
	iLocal_63 = 0xFFFFFFFF;
	iLocal_66 = 0x0000013E;
	iLocal_67 = 0x00000001;
	fLocal_108 = -1f;
	fLocal_109 = -1f;
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_65();
	}
	SYSTEM::WAIT(0x00000000);
	func_53();
	func_52();
	func_48();
	while (iLocal_67 && func_38(0x00000005, 0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
		switch (iLocal_65)
		{
			case 0x00000000:
				if (func_36())
				{
					iLocal_65 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (func_2())
				{
					iLocal_65 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				func_1();
				break;
		}
	}
	func_65();
}

void func_1()
{
	iLocal_67 = 0x00000000;
}

int func_2()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0xEA6BC48857E0AC4C(&cLocal_80))
	{
		if (!unk_0x83A8177D302E1A7E(iLocal_77))
		{
			vVar0 = { Vector(32.856f, 3819.65f, 1971.62f) - vLocal_75 };
			iLocal_77 = unk_0xB055A4268B938F30(&cLocal_80, vLocal_75 + vVar0, 0f, 0f, 0f, 1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &sLocal_110, &cLocal_126, 0x00000002))
		{
			fVar1 = unk_0xA45992A6CE82FB43(Global_1774A);
			switch (iLocal_170)
			{
				case 0x00000000:
					if (fLocal_108 < 0f)
					{
						iLocal_170++;
						return 0x00000000;
					}
					if (fVar1 > fLocal_108)
					{
						if (!unk_0xC844350D5D58C99A(iLocal_68) || iLocal_79 != 0xFFFFFFFF)
						{
							if (unk_0x97A0DB46CA749F31(&cLocal_89, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0f, 0f, 0f, iLocal_79, 1f, 0x00000000, 0x00000000, 0x00000000))
							{
								if (unk_0x7F8A39872A07D2CE(&cLocal_89, "scr_meth_pipe_smoke"))
								{
									func_17(unk_0x16F2683693E537C9(), 0x00000000, 0x00000001);
								}
								iLocal_169 = unk_0xD68EA767274B7444();
								unk_0xCEAA091B490F8407(iLocal_169, &cLocal_160, unk_0x16F2683693E537C9(), &cLocal_151, 0x00000000, 0x00000000);
								iLocal_170++;
							}
						}
						else if (unk_0xE81656B429E5C4B5(&cLocal_89, iLocal_68, 0f, 0f, -1f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000))
						{
							if (unk_0x7F8A39872A07D2CE(&cLocal_89, "scr_meth_pipe_smoke"))
							{
								func_17(unk_0x16F2683693E537C9(), 0x00000000, 0x00000001);
							}
							iLocal_169 = unk_0xD68EA767274B7444();
							unk_0xCEAA091B490F8407(iLocal_169, &cLocal_160, unk_0x16F2683693E537C9(), &cLocal_151, 0x00000000, 0x00000000);
							iLocal_170++;
						}
					}
					break;
				
				case 0x00000001:
					if (fLocal_109 < 0f)
					{
						iLocal_170++;
						return 0x00000000;
					}
					if (fVar1 > fLocal_109)
					{
						if (!unk_0xC844350D5D58C99A(iLocal_68) || iLocal_79 != 0xFFFFFFFF)
						{
							if (unk_0x97A0DB46CA749F31(&cLocal_89, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0f, 0f, 0f, iLocal_79, 1f, 0x00000000, 0x00000000, 0x00000000))
							{
								if (unk_0x7F8A39872A07D2CE(&cLocal_89, "scr_meth_pipe_smoke"))
								{
									func_17(unk_0x16F2683693E537C9(), 0x00000000, 0x00000001);
								}
								iLocal_169 = unk_0xD68EA767274B7444();
								unk_0xCEAA091B490F8407(iLocal_169, &cLocal_160, unk_0x16F2683693E537C9(), &cLocal_151, 0x00000000, 0x00000000);
								iLocal_170++;
							}
						}
						else if (unk_0xE81656B429E5C4B5(&cLocal_89, iLocal_68, 0f, 0f, -1f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000))
						{
							if (unk_0x7F8A39872A07D2CE(&cLocal_89, "scr_meth_pipe_smoke"))
							{
								func_17(unk_0x16F2683693E537C9(), 0x00000000, 0x00000001);
							}
							iLocal_169 = unk_0xD68EA767274B7444();
							unk_0xCEAA091B490F8407(iLocal_169, &cLocal_160, unk_0x16F2683693E537C9(), &cLocal_151, 0x00000000, 0x00000000);
							iLocal_170++;
						}
					}
					break;
				
				case 0x00000002:
					if (!unk_0xEA6BC48857E0AC4C(&cLocal_98))
					{
						if (unk_0xBA3209FB359D3EA4(&cLocal_98, vLocal_75 + vLocal_107, 0f, 0f, 0f, 1f, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_170++;
						}
					}
					else
					{
						iLocal_170++;
					}
					break;
				
				case 0x00000003:
					break;
			}
			if (unk_0xC844350D5D58C99A(iLocal_68))
			{
				if (unk_0xD59B17D2DFF98E26(iLocal_68))
				{
					if (iLocal_74 != 0xFFFFFFFF)
					{
						if (fVar1 > fLocal_73)
						{
							func_3(&iLocal_68, iLocal_74);
						}
					}
				}
			}
		}
		else
		{
			if (iLocal_78 != 0x00000000)
			{
				unk_0xF7E25143642732EA(iLocal_78, 0x00000000);
				iLocal_78 = 0x00000000;
				unk_0x55D0A2DB35045A35(iLocal_169);
				unk_0x43A06902454A1172(iLocal_169);
			}
			if (unk_0xC844350D5D58C99A(iLocal_68))
			{
				if (unk_0xD59B17D2DFF98E26(iLocal_68))
				{
					if (iLocal_74 != 0xFFFFFFFF)
					{
						func_3(&iLocal_68, iLocal_74);
					}
				}
			}
			return 0x00000001;
		}
	}
	else
	{
		func_65();
		return 0x00000000;
	}
	return 0x00000000;
}

int func_3(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	char* sVar10;
	vector3 vVar11;
	vector3 vVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	char[] cVar16[8];
	int iVar17;
	char* sVar18;
	char[] cVar19[8];
	char[] cVar20[8];
	var uVar21;
	var uVar22;
	
	iVar0 = func_15();
	switch (iParam1)
	{
		case 0x00000000:
			if (unk_0xD59B17D2DFF98E26(*iParam0))
			{
				unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
			}
			if (unk_0x134B62B726CEC8E6(*iParam0) != joaat("prop_cs_ironing_board") && unk_0x134B62B726CEC8E6(*iParam0) != joaat("prop_iron_01"))
			{
				unk_0x1E9649458B15960F(*iParam0, 0x00000000);
				unk_0xEF190091B5B9F5EB(*iParam0, 0x00000001);
			}
			if (unk_0x134B62B726CEC8E6(*iParam0) == joaat("prop_iron_01"))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(*iParam0, 0x00000001) };
				vVar2 = { unk_0x835730A2D89F6093(*iParam0, 0x00000002) };
				unk_0xA47B46945FF6DE74(*iParam0, vVar1 + Vector(0.1f, 0f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xC023D1C4BF532815(*iParam0, vVar2.x, vVar2.y, vVar2.z, 0x00000002, 0x00000001);
			}
			if (unk_0x134B62B726CEC8E6(*iParam0) != joaat("p_defilied_ragdoll_01_s"))
			{
				unk_0xEEEE2E5FA6F78DF0(iParam0);
			}
			return 0x00000001;
			break;
		
		case 0x00000001:
			unk_0xF690C84DADBB3551(iParam0);
			return 0x00000001;
			break;
		
		case 0x00000002:
			unk_0x1BF8B16C32704027(*iParam0, -8f, 0x00000001);
			if (unk_0xD59B17D2DFF98E26(*iParam0))
			{
				unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
			}
			unk_0x1E9649458B15960F(*iParam0, 0x00000000);
			unk_0xEF190091B5B9F5EB(*iParam0, 0x00000001);
			unk_0xEEEE2E5FA6F78DF0(iParam0);
			*iParam0 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000003:
			if (unk_0xD59B17D2DFF98E26(*iParam0))
			{
				unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
			}
			if (((unk_0x134B62B726CEC8E6(*iParam0) != 0xA1010AE3 && unk_0x134B62B726CEC8E6(*iParam0) != joaat("v_res_tt_flusher")) && unk_0x134B62B726CEC8E6(*iParam0) != joaat("v_ilev_fh_lampa_on")) && unk_0x134B62B726CEC8E6(*iParam0) != joaat("prop_cs_remote_01"))
			{
				unk_0x1BF8B16C32704027(*iParam0, -8f, 0x00000001);
			}
			if ((unk_0x134B62B726CEC8E6(*iParam0) != joaat("v_ilev_fh_dineeamesa") && unk_0x134B62B726CEC8E6(*iParam0) != joaat("v_res_tt_flusher")) && unk_0x134B62B726CEC8E6(*iParam0) != joaat("v_ilev_fh_lampa_on"))
			{
				unk_0x1E9649458B15960F(*iParam0, 0x00000000);
			}
			unk_0xEF190091B5B9F5EB(*iParam0, 0x00000001);
			unk_0xEEEE2E5FA6F78DF0(iParam0);
			return 0x00000001;
			break;
		
		case 0x00000004:
			vVar3 = { unk_0x68F4C0EC296D3901(*iParam0, 0x00000001) };
			vVar4 = { unk_0x835730A2D89F6093(*iParam0, 0x00000002) };
			iVar5 = 0x00000000;
			switch (unk_0x134B62B726CEC8E6(*iParam0))
			{
				case joaat("p_laptop_02_s"):
					iVar5 = joaat("prop_laptop_02_closed");
					break;
				
				case 0x1AE5B070:
					iVar5 = joaat("p_dinechair_01_s");
					break;
				
				case joaat("prop_acc_guitar_01"):
					iVar5 = joaat("prop_acc_guitar_01_d1");
					break;
				
				case joaat("p_defilied_ragdoll_01_s"):
					iVar5 = joaat("prop_defilied_ragdoll_01");
					break;
				
				case joaat("p_hand_toilet_s"):
					iVar5 = joaat("prop_toiletfoot_static");
					break;
				
				case joaat("prop_laptop_02_closed"):
				case joaat("p_dinechair_01_s"):
				case joaat("prop_acc_guitar_01_d1"):
				case joaat("prop_defilied_ragdoll_01"):
					unk_0x1BF8B16C32704027(*iParam0, -8f, 0x00000001);
					return 0x00000001;
					break;
				
				case joaat("prop_toiletfoot_static"):
					vVar6 = { 1971.669f, 3819.449f, 32.766f };
					vVar7 = { 0f, 0f, 53.6f };
					unk_0xA47B46945FF6DE74(*iParam0, vVar6, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xC023D1C4BF532815(*iParam0, vVar7, 0x00000002, 0x00000001);
					unk_0x1E9649458B15960F(*iParam0, 0x00000001);
					return 0x00000001;
					break;
				
				default:
					iVar5 = 0x00000000;
					return 0x00000000;
					break;
			}
			unk_0x523BCC9DC80CD82F(iVar5);
			while (!unk_0xB87F6CF6E5628C67(iVar5))
			{
				unk_0x3FC8DBCC154CA56B();
				unk_0x3584F71E5CA29322(0x00000012);
				unk_0xECEC50E724D52DC1();
				if (Global_4C1E.f_1 != 0x00000001)
				{
					func_7(0x00000001);
				}
				SYSTEM::WAIT(0x00000000);
			}
			unk_0x3FC8DBCC154CA56B();
			unk_0x3584F71E5CA29322(0x00000012);
			unk_0xECEC50E724D52DC1();
			if (Global_4C1E.f_1 != 0x00000001)
			{
				func_7(0x00000001);
			}
			unk_0xF690C84DADBB3551(iParam0);
			*iParam0 = unk_0x7707E48765093646(iVar5, vVar3, 0x00000001, 0x00000001, 0x00000000);
			unk_0xC023D1C4BF532815(*iParam0, vVar4, 0x00000002, 0x00000001);
			unk_0x71199B01895C6202(iVar5);
			return 0x00000001;
			break;
		
		case 0x00000005:
			unk_0xDA55CDFB97015579(unk_0x68F4C0EC296D3901(*iParam0, 0x00000001), 0x00000000, 0x3F000000, 0x00000001, 0x00000000, 0x3F800000, 0x00000000);
			unk_0xF690C84DADBB3551(iParam0);
			return 0x00000001;
			break;
		
		case 0x00000006:
			return 0x00000001;
			break;
		
		case 0x00000007:
			if (unk_0x134B62B726CEC8E6(*iParam0) == unk_0x6B7EC7B5B6B57364(joaat("weapon_pistol")))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_pistol"), 0x00000000))
					{
						unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_pistol"), 0x0000001E, 0x00000000, 0x00000001);
					}
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_pistol"), 0x00000001);
				}
				unk_0xF690C84DADBB3551(iParam0);
				return 0x00000001;
			}
			else
			{
				unk_0xF690C84DADBB3551(iParam0);
				return 0x00000000;
			}
			break;
		
		case 0x00000008:
			vVar8 = { unk_0x68F4C0EC296D3901(*iParam0, 0x00000001) };
			vVar9 = { unk_0x835730A2D89F6093(*iParam0, 0x00000002) };
			sVar10 = "";
			switch (unk_0x134B62B726CEC8E6(*iParam0))
			{
				case joaat("prop_cs_beer_bot_01"):
					sVar10 = "scr_pts_glass_bottle";
					break;
				
				case 0xCDA1C62B:
					sVar10 = "ent_dst_pineapple";
					break;
				
				case joaat("prop_acc_guitar_01"):
					sVar10 = "scr_pts_guitar_break";
					break;
				
				default:
					sVar10 = "";
					return 0x00000000;
					break;
			}
			unk_0x9E5E60D8C63FD9D1();
			while (!unk_0x25F7A4D42AF2AB93())
			{
				unk_0x3FC8DBCC154CA56B();
				unk_0x3584F71E5CA29322(0x00000012);
				unk_0xECEC50E724D52DC1();
				if (Global_4C1E.f_1 != 0x00000001)
				{
					func_7(0x00000001);
				}
				SYSTEM::WAIT(0x00000000);
			}
			unk_0x3FC8DBCC154CA56B();
			unk_0x3584F71E5CA29322(0x00000012);
			unk_0xECEC50E724D52DC1();
			if (Global_4C1E.f_1 != 0x00000001)
			{
				func_7(0x00000001);
			}
			unk_0xBA3209FB359D3EA4(sVar10, vVar8, vVar9, 1f, 0x00000000, 0x00000000, 0x00000000);
			unk_0xF690C84DADBB3551(iParam0);
			return 0x00000001;
			break;
		
		case 0x00000009:
			vVar11 = { unk_0x68F4C0EC296D3901(*iParam0, 0x00000001) };
			vVar12 = { unk_0x835730A2D89F6093(*iParam0, 0x00000002) };
			sVar13 = "";
			switch (unk_0x134B62B726CEC8E6(*iParam0))
			{
				case joaat("prop_cs_beer_bot_01"):
					sVar13 = "scr_pts_glass_bottle";
					break;
				
				case 0xCDA1C62B:
					sVar13 = "ent_dst_pineapple";
					break;
				
				case joaat("prop_acc_guitar_01"):
				case joaat("prop_acc_guitar_01_d1"):
					sVar13 = "scr_pts_guitar_break";
					break;
				
				default:
					sVar13 = "";
					return 0x00000000;
					break;
			}
			unk_0x9E5E60D8C63FD9D1();
			while (!unk_0x25F7A4D42AF2AB93())
			{
				unk_0x3FC8DBCC154CA56B();
				unk_0x3584F71E5CA29322(0x00000012);
				unk_0xECEC50E724D52DC1();
				if (Global_4C1E.f_1 != 0x00000001)
				{
					func_7(0x00000001);
				}
				SYSTEM::WAIT(0x00000000);
			}
			iVar14 = 0x00000000;
			switch (unk_0x134B62B726CEC8E6(*iParam0))
			{
				case joaat("prop_acc_guitar_01_d1"):
					return 0x00000000;
					break;
				
				case joaat("p_laptop_02_s"):
					iVar14 = joaat("prop_laptop_02_closed");
					break;
				
				case 0x1AE5B070:
					iVar14 = joaat("p_dinechair_01_s");
					break;
				
				case joaat("prop_acc_guitar_01"):
					iVar14 = joaat("prop_acc_guitar_01_d1");
					break;
				
				case joaat("p_defilied_ragdoll_01_s"):
					iVar14 = joaat("prop_defilied_ragdoll_01");
					break;
				
				default:
					iVar14 = 0x00000000;
					return 0x00000000;
					break;
			}
			unk_0x523BCC9DC80CD82F(iVar14);
			while (!unk_0xB87F6CF6E5628C67(iVar14))
			{
				unk_0x3FC8DBCC154CA56B();
				unk_0x3584F71E5CA29322(0x00000012);
				unk_0xECEC50E724D52DC1();
				if (Global_4C1E.f_1 != 0x00000001)
				{
					func_7(0x00000001);
				}
				SYSTEM::WAIT(0x00000000);
			}
			unk_0x3FC8DBCC154CA56B();
			unk_0x3584F71E5CA29322(0x00000012);
			unk_0xECEC50E724D52DC1();
			if (Global_4C1E.f_1 != 0x00000001)
			{
				func_7(0x00000001);
			}
			unk_0xBA3209FB359D3EA4(sVar13, vVar11, vVar12, 1f, 0x00000000, 0x00000000, 0x00000000);
			unk_0xF690C84DADBB3551(iParam0);
			*iParam0 = unk_0x7707E48765093646(iVar14, vVar11, 0x00000001, 0x00000001, 0x00000000);
			unk_0xC023D1C4BF532815(*iParam0, vVar12, 0x00000002, 0x00000001);
			if (func_6(iVar0, &sVar15, &cVar16, &iVar17))
			{
				if (func_4(iVar0, &sVar18, &cVar19, &cVar20, &uVar21, &uVar22))
				{
					if (!unk_0xB4ECF989E2C1DAC8(*iParam0, &sVar18, &sVar15, 0x00000002))
					{
						unk_0xE14EC663EED44AD5(*iParam0, Global_1774A, &sVar15, &sVar18, 1000f, -8f, iVar17, 0x447A0000);
					}
				}
			}
			unk_0x71199B01895C6202(iVar14);
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_4(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
{
	*uParam4 = 0x00000009;
	*uParam5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000000B:
			StringCopy(sParam1, "SWITCH@FRANKLIN@STRIPCLUB", 64);
			StringCopy(sParam2, "002113_02_FRAS_15_STRIPCLUB_IDLE", 64);
			StringCopy(sParam3, "002113_02_FRAS_15_STRIPCLUB_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x0000007C:
			StringCopy(sParam1, "SWITCH@MICHAEL@WASH_FACE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x000000EA:
			StringCopy(sParam1, "SWITCH@TREVOR@ON_TOILET", 64);
			StringCopy(sParam2, "trev_on_toilet_loop", 64);
			StringCopy(sParam3, "trev_on_toilet_exit", 64);
			*uParam4 = 0x00000609;
			*uParam5 = 0x00000608;
			return 0x00000001;
			break;
		
		case 0x0000013C:
			StringCopy(sParam1, "SWITCH@TREVOR@JERKING_OFF", 64);
			StringCopy(sParam2, "trev_jerking_off_loop", 64);
			StringCopy(sParam3, "trev_jerking_off_exit", 64);
			*uParam4 = 0x00000609;
			*uParam5 = 0x00000608;
			return 0x00000001;
			break;
		
		case 0x0000004D:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000004E:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000004F:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_3", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x00000050:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 0x00000001;
			break;
		
		case 0x00000052:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCREAMING", 64);
			StringCopy(sParam2, "001671_02_MICS2_1_WAKES_UP_SCREAMING_IDLE", 64);
			StringCopy(sParam3, "001671_02_MICS2_1_WAKES_UP_SCREAMING_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000054:
			StringCopy(sParam1, "SAVECountryside@", 64);
			StringCopy(sParam2, "M_Sleep_Loop_countryside", 64);
			StringCopy(sParam3, "M_GetOut_countryside", 64);
			return 0x00000001;
			break;
		
		case 0x00000053:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCARED", 64);
			StringCopy(sParam2, "001672_02_MICS2_1_WAKES_UP_SCARED_IDLE", 64);
			StringCopy(sParam3, "001672_02_MICS2_1_WAKES_UP_SCARED_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000055:
			StringCopy(sParam1, "SWITCH@MICHAEL@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x00000123:
			StringCopy(sParam1, "SWITCH@TREVOR@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000080:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 0x00000001;
			break;
		
		case 0x00000056:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x00000057:
		case 0x00000058:
		case 0x000000B8:
		case 0x000000B9:
			StringCopy(sParam1, "SWITCH@MICHAEL@SUNLOUNGER", 64);
			StringCopy(sParam2, "SunLounger_Idle", 64);
			StringCopy(sParam3, "SunLounger_GetUp", 64);
			*uParam4 = 0x00000609;
			*uParam5 = 0x00000608;
			return 0x00000001;
			break;
		
		case 0x00000059:
		case 0x0000005A:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x0000007F:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_PREMIER_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_PREMIER_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x00000068:
		case 0x00000051:
		case 0x0000007E:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 0x00000600;
			*uParam5 |= 0x00000600;
			return 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000005F:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXIT_RESTAURANT", 64);
			StringCopy(sParam2, "mic_exit_restaurant_loop", 64);
			StringCopy(sParam3, "mic_exit_restaurant_exit", 64);
			return 0x00000001;
			break;
		
		case 0x00000086:
			StringCopy(sParam1, "SWITCH@MICHAEL@DRUNK_BAR", 64);
			StringCopy(sParam2, "Drunk_Idle_PED", 64);
			StringCopy(sParam3, "Drunk_Exit_PED", 64);
			return 0x00000001;
			break;
		
		case 0x0000006C:
		case 0x0000006D:
			StringCopy(sParam1, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(sParam2, "parkbench_smoke_ranger_loop", 64);
			StringCopy(sParam3, "parkbench_smoke_ranger_exit", 64);
			return 0x00000001;
			break;
		
		case 0x00000070:
		case 0x00000071:
		case 0x0000007B:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_BONNET", 64);
			StringCopy(sParam2, "sitting_on_car_bonnet_loop", 64);
			StringCopy(sParam3, "sitting_on_car_bonnet_exit", 64);
			*uParam4 |= 0x00000600;
			*uParam5 |= 0x00000600;
			return 0x00000001;
			break;
		
		case 0x00000029:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_PREMIERE", 64);
			StringCopy(sParam2, "SITTING_ON_CAR_PREMIERE_LOOP_PLAYER", 64);
			StringCopy(sParam3, "SITTING_ON_CAR_PREMIERE_EXIT_PLAYER", 64);
			*uParam4 |= 0x00000600;
			*uParam5 |= 0x00000600;
			return 0x00000001;
			break;
		
		case 0x00000072:
			StringCopy(sParam1, "SWITCH@MICHAEL@PHARMACY", 64);
			StringCopy(sParam2, "mics1_ig_11_loop", 64);
			StringCopy(sParam3, "mics1_ig_11_exit", 64);
			return 0x00000001;
			break;
		
		case 0x00000069:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_Aggitated", 64);
			*uParam5 |= 0x00000020;
			return 0x00000001;
			break;
		
		case 0x0000006A:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitWheel", 64);
			*uParam5 |= 0x00000020;
			return 0x00000001;
			break;
		
		case 0x0000006B:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitHorn", 64);
			*uParam5 |= 0x00000020;
			return 0x00000001;
			break;
		
		case 0x00000062:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000AA:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_MIC", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000AB:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000AC:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x00000067:
			StringCopy(sParam1, "SWITCH@MICHAEL@PIER", 64);
			StringCopy(sParam2, "pier_lean_smoke_idle", 64);
			StringCopy(sParam3, "pier_lean_smoke_outro", 64);
			*uParam5 |= 0x00000044;
			return 0x00000001;
			break;
		
		case 0x00000079:
			StringCopy(sParam1, "SWITCH@MICHAEL@MARINA", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 0x00000001;
			break;
		
		case 0x0000007A:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_michael", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000007D:
			StringCopy(sParam1, "SWITCH@MICHAEL@WALK_AND_TALK", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "Im_A_Married_Man_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x00000073:
		case 0x00000074:
		case 0x00000075:
		case 0x00000061:
		case 0x000000A2:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "Cafe_Idle_PED", 64);
			StringCopy(sParam3, "Cafe_Exit_PED", 64);
			return 0x00000001;
			break;
		
		case 0x0000006E:
		case 0x0000006F:
		case 0x00000083:
		case 0x00000084:
			StringCopy(sParam1, "SWITCH@MICHAEL@BENCH", 64);
			StringCopy(sParam2, "bench_on_phone_idle", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000402;
			return 0x00000001;
			break;
		
		case 0x00000081:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_CLUBCHAIR", 64);
			StringCopy(sParam2, "Switch_ON_CLUBCHAIR_BASE", 64);
			StringCopy(sParam3, "Switch_ON_CLUBCHAIR", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x00000082:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_5", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_1_MICHAEL", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x00000096:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x00000097:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_MICHAEL", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x00000098:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_MIC", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x00000099:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "001400_01_MICS3_5_BYE_TO_SOLOMAN_IDLE", 64);
			StringCopy(sParam3, "001400_01_MICS3_5_BYE_TO_SOLOMAN_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x0000009A:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000009B:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_MIC", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x0000009C:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Michael", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x0000009D:
			StringCopy(sParam1, "SWITCH@MICHAEL@REJECTED_ENTRY", 64);
			StringCopy(sParam2, "001396_01_MICS3_6_REJECTED_ENTRY_IDLE_MIC", 64);
			StringCopy(sParam3, "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x0000009F:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_BARBER", 64);
			StringCopy(sParam2, "001406_01_MICS3_7_EXITS_BARBER_IDLE", 64);
			StringCopy(sParam3, "001406_01_MICS3_7_EXITS_BARBER_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000A0:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_FANCYSHOP", 64);
			StringCopy(sParam2, "001405_01_MICS3_8_EXITS_FANCYSHOP_IDLE", 64);
			StringCopy(sParam3, "001405_01_MICS3_8_EXITS_FANCYSHOP_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000A1:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x000000A3:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000A4:
			StringCopy(sParam1, "SWITCH@MICHAEL@READS_SCRIPT", 64);
			StringCopy(sParam2, "001404_01_MICS3_16_READS_SCRIPT_IDLE", 64);
			StringCopy(sParam3, "001404_01_MICS3_16_READS_SCRIPT_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000A5:
			StringCopy(sParam1, "SWITCH@MICHAEL@BAR_EMPLOYEE_CONVO", 64);
			StringCopy(sParam2, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_IDLE_MIC", 64);
			StringCopy(sParam3, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x0000009E:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 0x00000001;
			break;
		
		case 0x000000A6:
			StringCopy(sParam1, "SWITCH@MICHAEL@TALKS_TO_GUARD", 64);
			StringCopy(sParam2, "001393_02_MICS3_3_TALKS_TO_GUARD_IDLE_MIC", 64);
			StringCopy(sParam3, "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000A7:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000A8:
			StringCopy(sParam1, "SWITCH@MICHAEL@TV_W_KIDS", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_TV_W_KIDS_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_TV_W_KIDS_EXIT_MIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000AD:
			StringCopy(sParam1, "SWITCH@MICHAEL@BIKING_WITH_JIMMY", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 0x00000001;
			break;
		
		case 0x000000A9:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_MIC", 64);
			return 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000000BA:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_APT", 64);
			StringCopy(sParam2, "001918_01_FRAS_V2_1_CLEANING_APT_IDLE", 64);
			StringCopy(sParam3, "001918_01_FRAS_V2_1_CLEANING_APT_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000BB:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_CELL", 64);
			StringCopy(sParam2, "001914_01_FRAS_V2_2_ON_CELL_IDLE", 64);
			StringCopy(sParam3, "001914_01_FRAS_V2_2_ON_CELL_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000BC:
			StringCopy(sParam1, "SWITCH@FRANKLIN@SNACKING", 64);
			StringCopy(sParam2, "001922_01_FRAS_V2_3_SNACKING_IDLE", 64);
			StringCopy(sParam3, "001922_01_FRAS_V2_3_SNACKING_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000BD:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_IDLE", 64);
			StringCopy(sParam3, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000BE:
			StringCopy(sParam1, "SWITCH@FRANKLIN@IRONING", 64);
			StringCopy(sParam2, "001947_01_GC_FRAS_V2_IG_6_BASE", 64);
			StringCopy(sParam3, "001947_01_GC_FRAS_V2_IG_6_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000BF:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WATCHING_TV", 64);
			StringCopy(sParam2, "001915_01_FRAS_V2_8_WATCHING_TV_IDLE", 64);
			StringCopy(sParam3, "001915_01_FRAS_V2_8_WATCHING_TV_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000AF:
		case 0x000000B0:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Sleep_LOOP", 64);
			StringCopy(sParam3, "Sleep_GetUp_RubEyes", 64);
			return 0x00000001;
			break;
		
		case 0x000000B1:
			StringCopy(sParam1, "SWITCH@FRANKLIN@NAPPING", 64);
			StringCopy(sParam2, "002333_01_FRAS_V2_10_NAPPING_IDLE", 64);
			StringCopy(sParam3, "002333_01_FRAS_V2_10_NAPPING_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000B2:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GETTING_READY", 64);
			StringCopy(sParam2, "002334_02_FRAS_V2_11_GETTING_DRESSED_IDLE", 64);
			StringCopy(sParam3, "002334_02_FRAS_V2_11_GETTING_DRESSED_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000B3:
		case 0x000000B4:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Bed_Reading_LOOP", 64);
			StringCopy(sParam3, "Bed_Reading_GetUp", 64);
			return 0x00000001;
			break;
		
		case 0x000000B5:
		case 0x000000B6:
		case 0x000000B7:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PRESS_UPS", 64);
			StringCopy(sParam2, "PressUps_LOOP", 64);
			StringCopy(sParam3, "PressUps_OUT", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x000000C0:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_FRANKLIN", 64);
			return 0x00000001;
			break;
		
		case 0x000000C1:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped", 64);
			return 0x00000001;
			break;
		
		case 0x000000C2:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 0x00000001;
			break;
		
		case 0x000000C3:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 0x00000001;
			break;
		
		case 0x000000C6:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 0x00000001;
			break;
		
		case 0x000000C7:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE_B", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 0x00000001;
			break;
		
		case 0x000000C8:
			StringCopy(sParam1, "SWITCH@FRANKLIN@THROW_CUP", 64);
			StringCopy(sParam2, "throw_cup_loop", 64);
			StringCopy(sParam3, "throw_cup_exit", 64);
			return 0x00000001;
			break;
		
		case 0x000000C9:
			StringCopy(sParam1, "SWITCH@FRANKLIN@HIT_CUP_HAND", 64);
			StringCopy(sParam2, "hit_cup_hand_loop", 64);
			StringCopy(sParam3, "hit_cup_hand_exit", 64);
			return 0x00000001;
			break;
		
		case 0x000000CA:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GYM", 64);
			StringCopy(sParam2, "001942_02_GC_FRAS_IG_5_BASE", 64);
			StringCopy(sParam3, "001942_02_GC_FRAS_IG_5_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000CB:
		case 0x000000CE:
		case 0x000000CF:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000CC:
		case 0x000000CD:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000D3:
		case 0x000000D5:
		case 0x000000D8:
		case 0x000000D9:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ADMIRE_MOTORCYCLE", 64);
			StringCopy(sParam2, "BASE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 0x00000001;
			break;
		
		case 0x000000D4:
		case 0x000000D6:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_CAR", 64);
			StringCopy(sParam2, "001946_01_GC_FRAS_V2_IG_5_BASE", 64);
			StringCopy(sParam3, "001946_01_GC_FRAS_V2_IG_5_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000C4:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Franklin", 64);
			StringCopy(sParam3, "Tanisha_Argue_Franklin", 64);
			return 0x00000001;
			break;
		
		case 0x000000C5:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WALK_AROUND_HOUSE", 64);
			StringCopy(sParam2, "IDLE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 0x00000001;
			break;
		
		case 0x000000D7:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_FRA", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_FRA", 64);
			return 0x00000001;
			break;
		
		case 0x000000DD:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Franklin", 64);
			StringCopy(sParam3, "switch_P1_Franklin", 64);
			return 0x00000001;
			break;
		
		case 0x000000DE:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "CheckShoe", 64);
			return 0x00000001;
			break;
		
		case 0x000000DF:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeHands", 64);
			return 0x00000001;
			break;
		
		case 0x000000E0:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeRight", 64);
			return 0x00000001;
			break;
		
		case 0x000000E2:
		case 0x000000E3:
		case 0x000000E6:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_01", 64);
			return 0x00000001;
			break;
		
		case 0x000000E4:
		case 0x000000E5:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_02", 64);
			return 0x00000001;
			break;
		
		case 0x000000DA:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_franklin", 64);
			StringCopy(sParam3, "gang_taunt_exit_franklin", 64);
			return 0x00000001;
			break;
		
		case 0x000000DB:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_frank", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_frank", 64);
			return 0x00000001;
			break;
		
		case 0x000000DC:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_frank", 64);
			return 0x00000001;
			break;
		
		case 0x000000E1:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_frank", 64);
			return 0x00000001;
			break;
		
		case 0x000000E8:
		case 0x000000E9:
			StringCopy(sParam1, "missheist_agency2aig_9", 64);
			StringCopy(sParam2, "Franklin_call_Michael_IDLE_PLAYER", 64);
			StringCopy(sParam3, "Franklin_call_Michael_EXIT_PLAYER", 64);
			return 0x00000001;
			break;
		
		case 0x000000EB:
			StringCopy(sParam1, "SWITCH@TREVOR@MOCKS_LAPDANCE", 64);
			StringCopy(sParam2, "001443_01_TRVS_28_IDLE_TRV", 64);
			StringCopy(sParam3, "001443_01_TRVS_28_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x000000EC:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x000000ED:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x000000EE:
			StringCopy(sParam1, "SWITCH@TREVOR@STRIPCLUB", 64);
			StringCopy(sParam2, "trev_leave_stripclub_idle", 64);
			StringCopy(sParam3, "trev_leave_stripclub_outro", 64);
			return 0x00000001;
			break;
		
		case 0x000000EF:
			StringCopy(sParam1, "SWITCH@TREVOR@ESCORTED_OUT", 64);
			StringCopy(sParam2, "001215_02_TRVS_12_ESCORTED_OUT_IDLE_TRV", 64);
			StringCopy(sParam3, "001215_02_TRVS_12_ESCORTED_OUT_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x00000111:
		case 0x00000112:
			StringCopy(sParam1, "SWITCH@TREVOR@PUKING_INTO_FOUNTAIN", 64);
			StringCopy(sParam2, "trev_fountain_puke_loop", 64);
			StringCopy(sParam3, "trev_fountain_puke_exit", 64);
			return 0x00000001;
			break;
		
		case 0x000000F5:
		case 0x00000028:
			StringCopy(sParam1, "SWITCH@TREVOR@TREV_SMOKING_METH", 64);
			StringCopy(sParam2, "TREV_SMOKING_METH_LOOP", 64);
			StringCopy(sParam3, "TREV_SMOKING_METH_EXIT", 64);
			*uParam4 = 0x00000609;
			*uParam5 = 0x00000608;
			return 0x00000001;
			break;
		
		case 0x0000013B:
			StringCopy(sParam1, "SWITCH@TREVOR@HEAD_IN_SINK", 64);
			StringCopy(sParam2, "trev_sink_idle", 64);
			StringCopy(sParam3, "trev_sink_exit", 64);
			*uParam4 = 0x00000609;
			*uParam5 = 0x00000608;
			return 0x00000001;
			break;
		
		case 0x000000FA:
		case 0x000000FB:
		case 0x000000FC:
		case 0x000000FD:
			StringCopy(sParam1, "SWITCH@TREVOR@AT_THE_DOCKS", 64);
			StringCopy(sParam2, "001209_01_TRVS_3_AT_THE_DOCKS_IDLE", 64);
			StringCopy(sParam3, "001209_01_TRVS_3_AT_THE_DOCKS_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000106:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_TRV", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x000000F3:
			StringCopy(sParam1, "SWITCH@TREVOR@GARBAGE_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x000000F4:
			StringCopy(sParam1, "SWITCH@TREVOR@THROW_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x0000010F:
		case 0x00000110:
		case 0x00000109:
		case 0x0000010A:
		case 0x0000010B:
		case 0x0000010C:
		case 0x0000010D:
		case 0x0000010E:
		case 0x00000117:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
			StringCopy(sParam1, "SWITCH@TREVOR@SLOUCHED_GET_UP", 64);
			StringCopy(sParam2, "TREV_SLOUCHED_GET_UP_IDLE", 64);
			StringCopy(sParam3, "TREV_SLOUCHED_GET_UP_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000118:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ISLAND", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 0x00000001;
			break;
		
		case 0x000000F6:
			StringCopy(sParam1, "SWITCH@TREVOR@PUSHES_BODYBUILDER", 64);
			StringCopy(sParam2, "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_TRV", 64);
			StringCopy(sParam3, "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x0000011E:
			StringCopy(sParam1, "SWITCH@TREVOR@RUDE_AT_CAFE", 64);
			StringCopy(sParam2, "001218_03_TRVS_23_RUDE_AT_CAFE_IDLE_TRV", 64);
			StringCopy(sParam3, "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x000000F7:
			StringCopy(sParam1, "SWITCH@TREVOR@ANNOYS_SUNBATHERS", 64);
			StringCopy(sParam2, "trev_annoys_sunbathers_loop_trevor", 64);
			StringCopy(sParam3, "trev_annoys_sunbathers_exit_trevor", 64);
			return 0x00000001;
			break;
		
		case 0x00000107:
			StringCopy(sParam1, "SWITCH@TREVOR@SCARES_TRAMP", 64);
			StringCopy(sParam2, "TREV_SCARES_TRAMP_IDLE_TREVOR", 64);
			StringCopy(sParam3, "TREV_SCARES_TRAMP_EXIT_TREVOR", 64);
			return 0x00000001;
			break;
		
		case 0x00000116:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ON_BRIDGE", 64);
			StringCopy(sParam2, "002055_01_TRVS_17_NAKED_ON_BRIDGE_IDLE", 64);
			StringCopy(sParam3, "002055_01_TRVS_17_NAKED_ON_BRIDGE_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x00000108:
			StringCopy(sParam1, "SWITCH@TREVOR@DUMPSTER", 64);
			StringCopy(sParam2, "002002_01_TRVS_14_DUMPSTER_IDLE", 64);
			StringCopy(sParam3, "002002_01_TRVS_14_DUMPSTER_EXIT", 64);
			return 0x00000001;
			break;
		
		case 0x000000FF:
			StringCopy(sParam1, "SWITCH@TREVOR@FUNERAL_HOME", 64);
			StringCopy(sParam2, "trvs_ig_11_loop", 64);
			StringCopy(sParam3, "trvs_ig_11_exit", 64);
			return 0x00000001;
			break;
		
		case 0x0000011D:
			StringCopy(sParam1, "SWITCH@TREVOR@BRIDGE", 64);
			StringCopy(sParam2, "HOLD_LOOP_trevor", 64);
			StringCopy(sParam3, "THROW_EXIT_trevor", 64);
			return 0x00000001;
			break;
		
		case 0x00000103:
			StringCopy(sParam1, "SWITCH@TREVOR@YELLS_AT_DOORMAN", 64);
			StringCopy(sParam2, "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_TRV", 64);
			StringCopy(sParam3, "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x000000F8:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_TREVOR", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_TREVOR", 64);
			return 0x00000001;
			break;
		
		case 0x000000F9:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_TRV", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_TRV", 64);
			return 0x00000001;
			break;
		
		case 0x000000FE:
			StringCopy(sParam1, "SWITCH@TREVOR@LINGERIE_SHOP", 64);
			StringCopy(sParam2, "trev_exit_lingerie_shop_idle", 64);
			StringCopy(sParam3, "trev_exit_lingerie_shop_outro", 64);
			return 0x00000001;
			break;
		
		case 0x0000011F:
			StringCopy(sParam1, "SWITCH@TREVOR@RAND_TEMPLE", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "TAI_CHI_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x00000120:
			StringCopy(sParam1, "SWITCH@TREVOR@UNDER_PIER", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 0x00000001;
			break;
		
		case 0x00000121:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 0x00000001;
			break;
		
		case 0x00000122:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING_SC", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 0x00000001;
			break;
		
		case 0x00000124:
		case 0x00000127:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_1_TREVOR", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x00000125:
		case 0x00000126:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_2_TREVOR", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x0000012B:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_TREVOR", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x0000012C:
		case 0x0000012D:
		case 0x0000012E:
		case 0x0000012F:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Get_Along_TREVOR", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x00000128:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_trev", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_trev", 64);
			return 0x00000001;
			break;
		
		case 0x00000129:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_trev", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_trev", 64);
			return 0x00000001;
			break;
		
		case 0x0000012A:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Pineapple_EXIT_TREVOR", 64);
			return 0x00000001;
			break;
		
		case 0x00000130:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 0x00000600;
			*uParam5 |= 0x00000600;
			return 0x00000001;
			break;
		
		case 0x00000131:
			func_5(iParam0, sParam1, sParam2, sParam3);
			return 0x00000001;
			break;
		
		case 0x00000136:
			StringCopy(sParam1, "SWITCH@TREVOR@DIGGING", 64);
			StringCopy(sParam2, "001433_01_TRVS_26_DIGGING_IDLE", 64);
			StringCopy(sParam3, "001433_01_TRVS_26_DIGGING_EXIT", 64);
			*uParam5 |= 0x00008000;
			return 0x00000001;
			break;
		
		case 0x00000137:
			StringCopy(sParam1, "SWITCH@TREVOR@FLUSHES_FOOT", 64);
			StringCopy(sParam2, "002057_03_TRVS_27_FLUSHES_FOOT_IDLE", 64);
			StringCopy(sParam3, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT", 64);
			*uParam5 |= 0x00008000;
			return 0x00000001;
			break;
		
		default:
			StringCopy(sParam1, "NULL", 64);
			StringCopy(sParam2, "NULL", 64);
			StringCopy(sParam3, "NULL", 64);
			return 0x00000000;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return 0x00000000;
}

void func_5(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	StringCopy(sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@IDLE_A", 64);
	StringCopy(sParam2, "IDLE_A", 64);
	StringCopy(sParam3, "IDLE_A", 64);
}

int func_6(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	*uParam3 = 0x00000000;
	StringCopy(sParam2, "", 64);
	switch (iParam0)
	{
		case 0x000000C0:
			StringCopy(sParam1, "002110_04_MAGD_3_WEED_EXCHANGE_WEEDBOTTLE", 64);
			return 0x00000001;
			break;
		
		case 0x0000009C:
			StringCopy(sParam1, "AROUND_THE_TABLE_SELFISH_Lap_Top", 64);
			return 0x00000001;
			break;
		
		case 0x000000BD:
			StringCopy(sParam1, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_CHAIR", 64);
			return 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(sParam1, "exit_table", 64);
			StringCopy(sParam2, "", 64);
			return 0x00000001;
			break;
		
		case 0x00000096:
			StringCopy(sParam1, "RONEX_IG5_P2_CHAIR_01", 64);
			StringCopy(sParam2, "RONEX_IG5_P2_CHAIR_02", 64);
			return 0x00000001;
			break;
		
		case 0x00000097:
			StringCopy(sParam1, "001510_02_GC_MICS3_IG_1_EXIT_CHAIR", 64);
			StringCopy(sParam2, "", 64);
			return 0x00000001;
			break;
		
		case 0x000000AB:
			StringCopy(sParam1, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_$", 64);
			return 0x00000001;
			break;
		
		case 0x000000AC:
			StringCopy(sParam1, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_CASH", 64);
			return 0x00000001;
			break;
		
		case 0x000000F9:
			StringCopy(sParam1, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_GUITAR", 64);
			return 0x00000001;
			break;
		
		case 0x00000128:
			StringCopy(sParam1, "BEAR_IN_FLOYDS_FACE_EXIT_rasp", 64);
			return 0x00000001;
			break;
		
		case 0x00000129:
			StringCopy(sParam1, "BEAR_FLOYDS_FACE_SMELL_EXIT_doll", 64);
			return 0x00000001;
			break;
		
		case 0x0000012A:
			StringCopy(sParam1, "Pineapple_EXIT_PINEAPPLE", 64);
			return 0x00000001;
			break;
		
		case 0x00000137:
			StringCopy(sParam1, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT_Foot", 64);
			return 0x00000001;
			break;
		
		case 0x00000067:
			StringCopy(sParam1, "pier_lean_smoke_outro_CIG", 64);
			return 0x00000001;
			break;
		
		case 0x000000F4:
			StringCopy(sParam1, "EXIT_Taco", 64);
			return 0x00000001;
			break;
		
		case 0x000000C6:
			StringCopy(sParam1, "Garbage_Toss_BAG", 64);
			*uParam3 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000C8:
			StringCopy(sParam1, "THROW_CUP_EXIT_CUP", 64);
			return 0x00000001;
			break;
		
		case 0x000000C9:
			StringCopy(sParam1, "HIT_CUP_HAND_EXIT_CUP", 64);
			return 0x00000001;
			break;
		
		case 0x000000EC:
			StringCopy(sParam1, "EXIT_Beer", 64);
			return 0x00000001;
			break;
		
		case 0x000000A4:
			StringCopy(sParam1, "001404_01_MICS3_16_READS_SCRIPT_EXIT_PROP", 64);
			return 0x00000001;
			break;
		
		case 0x00000050:
			StringCopy(sParam1, "EXIT_FORWARD_CHAIR", 64);
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_7(bool bParam0)
{
	if (bParam0)
	{
		func_14();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_13(0x00000000))
		{
			func_8(0x00000000);
		}
	}
	else if (Global_4C1E.f_1 == 0x00000001)
	{
		if (!Global_4C1E.f_1 == 0x00000000)
		{
			Global_4C1E.f_1 = 0x00000003;
		}
	}
}

void func_8(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_11())
		{
			func_10(0x00000001, 0x00000001);
		}
		else
		{
			func_10(0x00000000, 0x00000000);
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
	if (!func_9())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_9()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_10(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_13(0x00000000))
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

bool func_11()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_12()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_13(int iParam0)
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

void func_14()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

int func_15()
{
	if (unk_0x991B1F0980C62628())
	{
		return Global_17A56;
	}
	if (func_16())
	{
		return Global_17A56;
	}
	return 0x0000013E;
}

int func_16()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 == 0x00000000)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	if ((func_35(iParam0) + iParam2) > 0x0000000A)
	{
		iParam2 = (0x0000000A - func_35(iParam0));
	}
	iVar0 = 0x00004E20;
	if (unk_0x8CD06866876216F2())
	{
		iVar0 *= 3;
	}
	if (!func_33(iParam0))
	{
		func_31(iParam0, iVar0, 0x00000000);
		func_28(iVar0, iVar0, 0.3f, func_29(), iParam1, 0x00000000);
		iVar1 = func_27(iParam0);
		if (iVar1 == 0xFFFFFFFF)
		{
			iVar2 = func_26(iVar1);
			if (!iVar2 == 0xFFFFFFFF)
			{
				Global_A58F[iVar2 /*5*/].f_4 = (Global_A58F[iVar2 /*5*/].f_4 + iParam2);
			}
		}
	}
	else
	{
		iVar3 = func_27(iParam0);
		iVar4 = 0xFFFFFFFF;
		if (iVar3 == 0xFFFFFFFF)
		{
			iVar4 = func_26(iVar3);
			if (!iVar4 == 0xFFFFFFFF)
			{
				Global_A58F[iVar4 /*5*/].f_4 = (Global_A58F[iVar4 /*5*/].f_4 + iParam2);
			}
		}
		if (Global_A644 == 0x00000000 || Global_A644 <= unk_0x1C0640BA9A7327B3())
		{
			func_28(iVar0, iVar0, 0.3f, func_29(), iParam1, 0x00000000);
		}
		else
		{
			Global_A644 = (Global_A644 + iVar0);
			func_23(iParam0, iVar0);
		}
	}
	Global_A649 = 0.25f;
	StringCopy(&Global_A64A, "STONED", 16);
	iVar5 = func_27(iParam0);
	if (iVar5 == 0xFFFFFFFF)
	{
		iVar6 = func_26(iVar5);
		if (!iVar6 == 0xFFFFFFFF)
		{
		}
		return;
	}
	func_18(0x00000001, iVar5, 0x00000004, iParam0, iParam2);
}

void func_18(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_19(iParam0, iParam1, iParam2, iParam3, 0x00000000, iParam4);
}

void func_19(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam2 == 0x00000006)
	{
		return;
	}
	if (func_21(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_20();
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	Global_A5E0[iVar0 /*6*/] = iParam0;
	Global_A5E0[iVar0 /*6*/].f_1 = iParam1;
	Global_A5E0[iVar0 /*6*/].f_2 = iParam2;
	Global_A5E0[iVar0 /*6*/].f_3 = iParam3;
	Global_A5E0[iVar0 /*6*/].f_4 = iParam4;
	Global_A5E0[iVar0 /*6*/].f_5 = iParam5;
}

int func_20()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_A5E0[iVar0 /*6*/].f_2 == 0x00000006)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_21(int iParam0, int iParam1, int iParam2)
{
	if (func_22(iParam0, iParam1, iParam2) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (iParam2 == Global_A5E0[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_A5E0[iVar0 /*6*/])
			{
				if (iParam1 == Global_A5E0[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0x00000000)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	if (iParam1 < 0x00000000)
	{
		return;
	}
	iVar0 = func_27(iParam0);
	iVar1 = 0xFFFFFFFF;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_25(iParam0);
		if (!iVar1 == 0xFFFFFFFF)
		{
			Global_A575[iVar1 /*5*/].f_3 = (Global_A575[iVar1 /*5*/].f_3 + iParam1);
			Global_A575[iVar1 /*5*/].f_2 = (Global_A575[iVar1 /*5*/].f_2 + iParam1);
		}
		return;
	}
	func_24(0x00000001, iVar0, 0x00000002, iParam1);
}

void func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_19(iParam0, iParam1, iParam2, 0x00000000, iParam3, 0x00000001);
}

int func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_A575[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_A58F[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_27(int iParam0)
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
		if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
		{
			return Global_A58F[iVar0 /*5*/];
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_28(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_A642)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0x00000000)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x174D27C2C2F899E5())
	{
		unk_0x0525F87A0751EA62("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0xD5B49A7E47E6726F())
	{
		unk_0xF5AC1996BA944009("DRUNK_SHAKE", (fParam3 * Global_A641));
	}
	if (unk_0x9F4FE516EAACCFC5(iParam4))
	{
		unk_0x91F5B0244AAE6222(iParam4, "DRUNK_SHAKE", fParam3);
		Global_A643 = iParam4;
	}
	else
	{
		Global_A643 = 0x00000000;
	}
	Global_A642 = 0x00000001;
	iVar0 = unk_0x1C0640BA9A7327B3();
	Global_A644 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == 0xFFFFFFFF)
		{
			Global_A644 = 0xFFFFFFFF;
		}
	}
	Global_A645 = iParam1;
	Global_A646 = fParam2;
	Global_A648 = fParam3;
	Global_A647 = fParam3;
}

float func_29()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_30(unk_0x16F2683693E537C9());
	iVar2 = func_35(unk_0x16F2683693E537C9());
	if (iVar2 == 0x00000000)
	{
		if (iVar1 == 0x00000000)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(0x0000000A));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0x00000000)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(0x00000005));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = func_27(iParam0);
	iVar1 = func_26(iVar0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return 0xFFFFFFFF;
	}
	return Global_A58F[iVar1 /*5*/].f_3;
}

int func_31(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = func_27(iParam0);
	if (!iVar0 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	iVar1 = func_25(iParam0);
	if (!iVar1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (!bParam2)
	{
		if (iParam1 == 0x00000000 || iParam1 < 0x00000000)
		{
			return 0x00000000;
		}
	}
	iVar2 = func_32();
	if (iVar2 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	Global_A575[iVar2 /*5*/] = 0x00000000;
	Global_A575[iVar2 /*5*/].f_1 = iParam0;
	Global_A575[iVar2 /*5*/].f_2 = iParam1;
	Global_A575[iVar2 /*5*/].f_3 = iParam1;
	Global_A575[iVar2 /*5*/].f_4 = 0x00000000;
	if (iParam0 == unk_0x16F2683693E537C9())
	{
		Global_A662 = 0x00000001;
	}
	Global_A573++;
	return 0x00000001;
}

int func_32()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_A575[iVar0 /*5*/] == 0x0000000D)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_33(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_34(iParam0) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_34(int iParam0)
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

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = func_27(iParam0);
	iVar1 = func_26(iVar0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return 0xFFFFFFFF;
	}
	return Global_A58F[iVar1 /*5*/].f_4;
}

int func_36()
{
	if (!iLocal_69 == 0x00000000)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_68))
		{
			unk_0x523BCC9DC80CD82F(iLocal_69);
			if (!unk_0xB87F6CF6E5628C67(iLocal_69))
			{
				unk_0x523BCC9DC80CD82F(iLocal_69);
			}
			else if (iLocal_72 != 0xFFFFFFFF)
			{
				iLocal_68 = unk_0x7707E48765093646(iLocal_69, vLocal_75, 0x00000001, 0x00000001, 0x00000000);
				unk_0x9F528B1B53FBC5D9(iLocal_68, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), iLocal_72), vLocal_70, vLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
			}
			else
			{
				iLocal_68 = unk_0x7707E48765093646(iLocal_69, vLocal_75 + vLocal_70, 0x00000001, 0x00000001, 0x00000000);
				unk_0xA47B46945FF6DE74(iLocal_68, vLocal_75 + vLocal_70, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xC023D1C4BF532815(iLocal_68, Vector(uLocal_76, 0f, 0f) + vLocal_71, 0x00000002, 0x00000001);
				unk_0x1E9649458B15960F(iLocal_68, 0x00000001);
			}
		}
	}
	if (!func_37())
	{
		if (unk_0xC844350D5D58C99A(iLocal_68))
		{
			if (iLocal_72 != 0xFFFFFFFF)
			{
				if (!unk_0x50B5F6F3C29E9380(iLocal_68, unk_0x16F2683693E537C9()))
				{
					unk_0x9F528B1B53FBC5D9(iLocal_68, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), iLocal_72), vLocal_70, vLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				}
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_37()
{
	if (!unk_0x991B1F0980C62628() || unk_0x19EC8D83154D7CC1() == 0x00000003)
	{
		return 0x00000000;
	}
	if (unk_0x00A15D69BCAA5267() > 0x00000008)
	{
		if (unk_0x00A15D69BCAA5267() != 0x0000000B)
		{
			return 0x00000000;
		}
		if (unk_0x00A15D69BCAA5267() == 0x0000000B)
		{
			if (unk_0x94EFC97F8A693855() > 0x00000000)
			{
				if (unk_0x192DE42720995A6E() > 0x00000064)
				{
					return 0x00000000;
				}
			}
		}
	}
	return 0x00000001;
}

int func_38(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar1;
	
	if (unk_0x991B1F0980C62628())
	{
		if (unk_0x19EC8D83154D7CC1() != 0x00000003)
		{
			if (unk_0x00A15D69BCAA5267() <= 0x00000002 && unk_0x00A15D69BCAA5267() != 0x00000001)
			{
				return 0x00000001;
			}
		}
	}
	if (!unk_0x991B1F0980C62628())
	{
		if (func_47(0x0000000E))
		{
			return 0x00000000;
		}
		if (unk_0x8F7DE34FFB67592B())
		{
			return 0x00000000;
		}
		if (!func_40(iParam0, func_41()))
		{
			return 0x00000000;
		}
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
			fVar1 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar0);
			if (fVar1 > 250f)
			{
				if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
				{
					if (!unk_0x0A059E0DB9253280(iParam1))
					{
						return 0x00000000;
					}
				}
				else if (!unk_0x8E28E832BEAC3DCE(vVar0, 1.5f))
				{
					return 0x00000000;
				}
			}
		}
		else if (iParam1 == func_39(Global_180A1) && iParam1 != 0x00000000)
		{
			Global_180A1 = 0x00000000;
		}
	}
	return 0x00000001;
}

int func_39(var uParam0)
{
	return uParam0;
}

bool func_40(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0x00000000;
}

int func_41()
{
	func_42();
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

void func_42()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_45(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_44(unk_0x16F2683693E537C9());
			if (func_43(iVar0) && (!func_47(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_43(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_43(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_45(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_45(int iParam0)
{
	if (func_43(iParam0))
	{
		return func_46(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_46(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_47(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_48()
{
	if (!unk_0x991B1F0980C62628())
	{
		if (unk_0x757EF87A33649210())
		{
			func_51();
		}
		return;
	}
	if (unk_0x19EC8D83154D7CC1() == 0x00000003)
	{
		func_51();
		return;
	}
	func_49();
	if (Global_180A3 > 0x00000000)
	{
		return;
	}
	unk_0x36B03FE02FE012AB();
}

void func_49()
{
	func_50((Global_180A3 - 0x00000001));
}

void func_50(int iParam0)
{
	Global_180A3 = iParam0;
}

void func_51()
{
	func_50(0x00000000);
}

void func_52()
{
	int iVar0;
	bool bVar1;
	
	unk_0x9E5E60D8C63FD9D1();
	iVar0 = 0x00000000;
	bVar1 = 0x00000000;
	while (!bVar1 && iVar0 < 0x00000190)
	{
		bVar1 = 0x00000001;
		if (unk_0x991B1F0980C62628() && (unk_0x00A15D69BCAA5267() != 0x00000008 || unk_0x00A15D69BCAA5267() == 0x00000001))
		{
			bVar1 = 0x00000000;
		}
		unk_0x9E5E60D8C63FD9D1();
		if (!unk_0x25F7A4D42AF2AB93())
		{
			bVar1 = 0x00000000;
		}
		if (!unk_0xEA6BC48857E0AC4C(&cLocal_142))
		{
			if (!unk_0x64F604CF561734A9(&cLocal_142, 0x00000000, 0xFFFFFFFF))
			{
				bVar1 = 0x00000000;
			}
		}
		if (!iLocal_69 == 0x00000000)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_68))
			{
				unk_0x523BCC9DC80CD82F(iLocal_69);
				if (!unk_0xB87F6CF6E5628C67(iLocal_69))
				{
					bVar1 = 0x00000000;
					unk_0x523BCC9DC80CD82F(iLocal_69);
				}
				else if (iLocal_72 != 0xFFFFFFFF)
				{
					if (unk_0x991B1F0980C62628() && (unk_0x00A15D69BCAA5267() != 0x00000008 || unk_0x00A15D69BCAA5267() == 0x00000001))
					{
						bVar1 = 0x00000000;
					}
					else
					{
						iLocal_68 = unk_0x7707E48765093646(iLocal_69, vLocal_75, 0x00000001, 0x00000001, 0x00000000);
						unk_0x9F528B1B53FBC5D9(iLocal_68, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), iLocal_72), vLocal_70, vLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					}
				}
				else
				{
					iLocal_68 = unk_0x7707E48765093646(iLocal_69, vLocal_75 + vLocal_70, 0x00000001, 0x00000001, 0x00000000);
					unk_0xA47B46945FF6DE74(iLocal_68, vLocal_75 + vLocal_70, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xC023D1C4BF532815(iLocal_68, Vector(uLocal_76, 0f, 0f) + vLocal_71, 0x00000002, 0x00000001);
					unk_0x1E9649458B15960F(iLocal_68, 0x00000001);
				}
			}
		}
		if (!bVar1)
		{
			iVar0++;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_53()
{
	char[] cVar0[8];
	struct<109> Var1;
	struct<97> Var2;
	char[] cVar3[8];
	var uVar4;
	var uVar5;
	
	iLocal_66 = Global_17F63;
	func_57(iLocal_66, &vLocal_75, &uLocal_76, &cVar0);
	switch (iLocal_66)
	{
		case 0x00000111:
		case 0x00000112:
			StringCopy(&cLocal_142, "TREVOR_PUKEINTOFOUNT", 64);
			StringCopy(&cLocal_151, "TREVOR_PUKEINTOFOUNT_SOUNDS", 64);
			StringCopy(&cLocal_160, "Puke", 64);
			fLocal_108 = 0.19f;
			fLocal_109 = 0.33f;
			iLocal_79 = 0x0000796E;
			StringCopy(&cLocal_80, "", 64);
			StringCopy(&cLocal_89, "scr_trev_amb_puke", 64);
			StringCopy(&cLocal_98, "scr_pts_vomit_water", 64);
			if (iLocal_66 == 0x00000111)
			{
				vLocal_107 = { Vector((34.97325f + 0.25f), -441.7662f, -118.3218f) - vLocal_75 };
			}
			else if (iLocal_66 == 0x00000112)
			{
				vLocal_107 = { 0.125f, -1.1486f, (0.0588f + 0.1f) };
			}
			else
			{
				vLocal_107 = { -0.125f, 1.1486f, -0.0588f };
			}
			break;
		
		case 0x000000F5:
		case 0x00000028:
			StringCopy(&cLocal_142, "", 64);
			StringCopy(&cLocal_151, "", 64);
			StringCopy(&cLocal_160, "", 64);
			fLocal_108 = 0.19f;
			fLocal_109 = 0.47f;
			iLocal_79 = 0x0000796E;
			StringCopy(&cLocal_80, "", 64);
			StringCopy(&cLocal_89, "scr_meth_pipe_smoke", 64);
			StringCopy(&cLocal_98, "", 64);
			break;
		
		case 0x00000136:
			StringCopy(&cLocal_142, "", 64);
			StringCopy(&cLocal_151, "", 64);
			StringCopy(&cLocal_160, "", 64);
			fLocal_108 = 0.22f;
			fLocal_109 = 0.24f;
			iLocal_79 = 0xFFFFFFFF;
			StringCopy(&cLocal_80, "", 64);
			StringCopy(&cLocal_89, "scr_pts_digging", 64);
			StringCopy(&cLocal_98, "", 64);
			iLocal_69 = joaat("prop_tool_shovel");
			vLocal_70 = { 0f, 0f, -0.045f };
			vLocal_71 = { 0f, 180f, 0f };
			iLocal_72 = 0x00006F06;
			fLocal_73 = 0.7f;
			iLocal_74 = 0x00000000;
			break;
		
		case 0x00000137:
			StringCopy(&cLocal_142, "", 64);
			StringCopy(&cLocal_151, "", 64);
			StringCopy(&cLocal_160, "", 64);
			fLocal_108 = 0.5f;
			fLocal_109 = 0.55f;
			iLocal_79 = 0x0000CC4D;
			StringCopy(&cLocal_80, "scr_pts_flush", 64);
			StringCopy(&cLocal_89, "scr_pts_footsplash", 64);
			StringCopy(&cLocal_98, "", 64);
			break;
		
		case 0x0000013B:
			StringCopy(&cLocal_142, "", 64);
			StringCopy(&cLocal_151, "", 64);
			StringCopy(&cLocal_160, "", 64);
			fLocal_108 = 0.15f;
			fLocal_109 = -1f;
			iLocal_79 = 0x0000796E;
			StringCopy(&cLocal_80, "", 64);
			StringCopy(&cLocal_89, "scr_pts_headsplash_trev", 64);
			StringCopy(&cLocal_98, "", 64);
			iLocal_69 = joaat("prop_cs_sink_filler_02");
			vLocal_70 = { -0.54f, 0.08f, -0.13f };
			vLocal_71 = { 0f, 0f, -12f };
			iLocal_72 = 0xFFFFFFFF;
			fLocal_73 = 0.7f;
			iLocal_74 = 0xFFFFFFFF;
			break;
		
		case 0x0000007C:
			StringCopy(&cLocal_142, "", 64);
			StringCopy(&cLocal_151, "", 64);
			StringCopy(&cLocal_160, "", 64);
			fLocal_108 = 0.07f;
			fLocal_109 = -1f;
			iLocal_79 = 0x0000EB95;
			StringCopy(&cLocal_80, "", 64);
			StringCopy(&cLocal_89, "scr_pts_headsplash", 64);
			StringCopy(&cLocal_98, "", 64);
			iLocal_69 = joaat("prop_cs_sink_filler_03");
			vLocal_70 = { -0.72f, 0.9f, 0.21f };
			vLocal_71 = { 0f, 0f, 9f };
			iLocal_72 = 0xFFFFFFFF;
			fLocal_73 = 0.7f;
			iLocal_74 = 0xFFFFFFFF;
			break;
		
		default:
			break;
	}
	Var1.f_1 = 0xFFFFFFFF;
	Var1.f_11 = 0x00000004;
	Var1.f_11.f_8 = 0x00000004;
	Var1.f_11.f_D = 0x00000004;
	Var1.f_11.f_12 = 0x00000004;
	Var1.f_11.f_18 = 0x00000004;
	Var1.f_11.f_1D = 0x00000004;
	Var1.f_11.f_22 = 0x00000004;
	Var1.f_3E = 0x00000008;
	Var1.f_60.f_7 = 0x00000015;
	Var1.f_60.f_8 = 0x00000006;
	Var2.f_1 = 0xFFFFFFFF;
	Var2.f_11 = 0x00000004;
	Var2.f_11.f_8 = 0x00000004;
	Var2.f_11.f_D = 0x00000004;
	Var2.f_11.f_12 = 0x00000004;
	Var2.f_11.f_18 = 0x00000004;
	Var2.f_11.f_1D = 0x00000004;
	Var2.f_11.f_22 = 0x00000004;
	Var2.f_3E = 0x00000008;
	Var2.f_60.f_7 = 0x00000015;
	Var2.f_60.f_8 = 0x00000006;
	Var1 = 0x00000000;
	Var1.f_2 = iLocal_66;
	Var1.f_3 = Global_177DE.f_2D;
	func_54(Var1, &Var2);
	func_4(iLocal_66, &sLocal_110, &cVar3, &cLocal_126, &uVar4, &uVar5);
}

int func_54(struct<109> Param0, var uParam1)
{
	uParam1->f_77 = 0x00000000;
	switch (Param0.f_2)
	{
		case 0x00000000:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x55966344;
			uParam1->f_6E = 0x55966344;
			func_56(uParam1);
			uParam1->f_76 = 0x00000000;
			return 0x00000000;
			break;
		
		case 0x00000001:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000002:
			*uParam1 = { Global_17A57[0x00000000 /*109*/] };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = Global_1808B[0x00000000];
			return 0x00000001;
			break;
		
		case 0x00000003:
			*uParam1 = { Global_17A57[0x00000001 /*109*/] };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = Global_1808B[0x00000001];
			return 0x00000001;
			break;
		
		case 0x00000004:
			*uParam1 = { Global_17A57[0x00000002 /*109*/] };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = Global_1808B[0x00000002];
			return 0x00000001;
			break;
		
		case 0x00000005:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = Global_1808B[Param0.f_3];
			return 0x00000001;
			break;
		
		case 0x00000006:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = Global_1808B[Param0.f_3];
			return 0x00000001;
			break;
		
		case 0x00000007:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = Global_1808B[Param0.f_3];
			return 0x00000001;
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x37D339A1;
			uParam1->f_6E = 0x37D339A1;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000000B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000000E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000000D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000000F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000036:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000037:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x37D339A1;
			uParam1->f_6E = 0x37D339A1;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000038:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000039:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000000C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x1AE73569;
			func_55(uParam1, 0x00000090, 0xC572E06A, 0xC572E06A, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000010:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000011:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000012:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000013:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000014:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000016:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000004A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000043:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000019:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000001A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000001B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000001C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000026:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000028:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x8B2F140E;
			uParam1->f_6E = 0x8B2F140E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000031:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000030:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x950B6492;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000032:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000033:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000034:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000042:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000045:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000040:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000041:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000EA:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000013C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000013B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000004B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xF1F17AE7;
			uParam1->f_6E = 0xF1F17AE7;
			func_55(uParam1, 0x0000001E, 0xC572E06A, 0xC572E06A, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000004C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xF1F17AE7;
			uParam1->f_6E = 0xF1F17AE7;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000004D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -0.7035f, -0.0282f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000004E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -3.03f, -0.72f, 0.08f, 168f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000004F:
		case 0x00000050:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000011, 0x87B9A382, 0x87B9A382, Vector(2.6407f, 8.164f, -14.1564f) + Vector(-1f, 0.03f, -2.16f), (-66f + -56f));
			if (Param0.f_2 == 0x00000050)
			{
				func_56(uParam1);
			}
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000007C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000052:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000054:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000053:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000055:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000123:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000056:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000057:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000058:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000059:
		case 0x0000005A:
		case 0x0000007F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x00000068:
		case 0x00000051:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			if (Param0.f_2 == 0x0000005C)
			{
				uParam1->f_76 = 0x00000001;
			}
			if (Param0.f_2 == 0x00000068)
			{
				uParam1->f_76 = 0x00000000;
			}
			if (Param0.f_2 == 0x00000051)
			{
				func_56(uParam1);
				uParam1->f_76 = 0x00000001;
			}
			return 0x00000001;
			break;
		
		case 0x0000005E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			if (Param0.f_2 == 0x0000005E)
			{
				func_55(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -1.71f, 1.05f, 0f, -138f);
			}
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000005F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000060:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000086:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000006C:
		case 0x0000006D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000029:
		case 0x00000070:
		case 0x00000071:
		case 0x0000007B:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
		case 0x00000091:
		case 0x00000092:
		case 0x00000093:
		case 0x00000094:
		case 0x00000095:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000096:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000014, 0x6A67A5CC, 0x6A67A5CC, 0.98f, 0.8017f, -0.42f, -180f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000076:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000077:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000078:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000072:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x87B9A382;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000062:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000063:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_55(uParam1, 0x0000000F, 0xC572E06A, 0x1AE73569, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000064:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_55(uParam1, 0x0000000F, 0xC572E06A, 0x1AE73569, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000065:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_55(uParam1, 0x0000000E, 0xC572E06A, 0x1AE73569, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000066:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_55(uParam1, 0x0000000E, 0xC572E06A, 0x1AE73569, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000067:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000079:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000007A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -2.04f, -0.15f, 0f, 14.4f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000007D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000073:
		case 0x00000074:
		case 0x00000075:
		case 0x00000061:
		case 0x000000A2:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000006E:
		case 0x0000006F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000083:
		case 0x00000084:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000007E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000080:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000081:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000082:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000085:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000097:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -1.71f, 1.05f, 0f, -138f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000098:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, 1.1779f, 2.4276f, 0f, 162.1022f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000099:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x0000009A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x0000009B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000009C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x0000000E, 0x6A67A5CC, 0x6A67A5CC, 0.3427f, 1.1592f, 1.0351f, 139.912f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000009D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000009E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000009F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000A0:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000A1:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000A3:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -3.03f, -0.72f, 0.08f, 168f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000A4:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000A5:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000A6:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000A7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x0000000E, 0xC572E06A, 0x6A67A5CC, -0.8472f, 0.155f, 0f, 152.556f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000A8:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000A9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x0000000E, 0x6A67A5CC, 0x6A67A5CC, -0.3577f, -0.8968f, -0.0003f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000AA:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000AB:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x0000000E, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000AC:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x0000000F, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000AD:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xF1F17AE7;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000AE:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = 0x00000000;
			return 0x00000001;
			break;
	}
	switch (Param0.f_2)
	{
		case 0x000000AF:
		case 0x000000B0:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000B1:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000B2:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000B3:
		case 0x000000B4:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000B5:
		case 0x000000B6:
		case 0x000000B7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000C0:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 1f, 1f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			if (Global_3)
			{
				uParam1->f_76 = 0x00000001;
			}
			return 0x00000001;
			break;
		
		case 0x000000C1:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0xC572E06A, 0x6A67A5CC, 4.2943f, -6.7858f, 0f, -133.5332f);
			uParam1->f_76 = 0x00000001;
			if (Global_3)
			{
				uParam1->f_76 = 0x00000001;
			}
			return 0x00000001;
			break;
		
		case 0x000000C2:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			if (Global_3)
			{
				uParam1->f_76 = 0x00000001;
			}
			return 0x00000001;
			break;
		
		case 0x000000C3:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			if (Global_3)
			{
				uParam1->f_76 = 0x00000001;
			}
			return 0x00000001;
			break;
		
		case 0x000000C6:
		case 0x000000C7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000C8:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000C9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000CA:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000B8:
		case 0x000000B9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BA:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BB:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BC:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BD:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BE:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BF:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000C4:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x0000002B, 0x6A67A5CC, 0x6A67A5CC, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000C5:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000CB:
		case 0x000000CE:
		case 0x000000CF:
		case 0x000000CC:
		case 0x000000CD:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 3.4381f, -0.8269f, 0f, -87.6612f);
			if (Param0.f_2 != 0x000000CD)
			{
				uParam1->f_70 = { 3.4381f, -0.8269f, 0f };
				uParam1->f_73 = -87.6612f;
			}
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000017:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D2:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000018:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000D3:
		case 0x000000D5:
		case 0x000000D8:
		case 0x000000D9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000D4:
		case 0x000000D6:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
			break;
		
		case 0x000000D7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 3.4381f, -0.8269f, 0f, -87.6612f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000DD:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, -0.7949f, -0.508f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000DE:
		case 0x000000DF:
		case 0x000000E0:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000E2:
		case 0x000000E3:
		case 0x000000E4:
		case 0x000000E5:
		case 0x000000E6:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000DA:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000013, 0x6A67A5CC, 0x6A67A5CC, 1.29f, 1.41f, 0f, 57.52f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000DB:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000013, 0x6A67A5CC, 0x6A67A5CC, 1.29f, 1.41f, 0f, 57.52f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000DC:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000013, 0x6A67A5CC, 0x6A67A5CC, 0.5504f, -0.2322f, 0f, -9.9741f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000E1:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000013, 0x6A67A5CC, 0x6A67A5CC, 1.23f, 0.6f, -1f, 34.56f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000E7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x000000E8:
		case 0x000000E9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000EB:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000EC:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000ED:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000EE:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000EF:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000111:
		case 0x00000112:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F5:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000FA:
		case 0x000000FB:
		case 0x000000FC:
		case 0x000000FD:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F3:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F4:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000010F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x00000118:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			return 0x00000001;
			break;
		
		case 0x00000110:
		case 0x00000109:
		case 0x0000010A:
		case 0x0000010B:
		case 0x0000010C:
		case 0x0000010D:
		case 0x0000010E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			uParam1->f_76 = 0x00000001;
			func_56(uParam1);
			if (Param0.f_2 == 0x00000109)
			{
				uParam1->f_76 = 0x00000001;
			}
			if (Param0.f_2 == 0x0000010C)
			{
				uParam1->f_76 = 0x00000000;
			}
			if (Param0.f_2 == 0x0000010B)
			{
				func_55(uParam1, 0x00000090, 0xC572E06A, 0x7D8F4411, -2.4166f, -0.15f, 0f, -148.7555f);
			}
			if (Param0.f_2 == 0x0000010A)
			{
				func_55(uParam1, 0x00000090, 0x7D8F4411, 0x7D8F4411, -5.7915f, -11.0439f, 0.67f, -72.589f);
			}
			return 0x00000001;
			break;
		
		case 0x000000F6:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000107:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000116:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000117:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000108:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000FF:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F8:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000119:
		case 0x0000011A:
		case 0x0000011B:
		case 0x0000011C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xF1F17AE7;
			uParam1->f_6E = 0xF1F17AE7;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000113:
		case 0x00000114:
		case 0x00000115:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xF1F17AE7;
			uParam1->f_6E = 0xF1F17AE7;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000FE:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000011D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000100:
		case 0x00000101:
		case 0x00000102:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000103:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000104:
		case 0x00000105:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000011E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000011F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000120:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000106:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000121:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000090, 0x87B9A382, 0x87B9A382, -3.264f, -14.7895f, 14.1815f, -0.6311f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000122:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000124:
		case 0x00000127:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000125:
		case 0x00000126:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000012B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000012C:
		case 0x0000012D:
		case 0x0000012E:
		case 0x0000012F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000128:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 1.41f, 1.35f, 0f, 168f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000129:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 1.7491f, 0.6423f, 0f, 166.479f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000012A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_55(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 0.72f, -0.69f, 0f, 172.44f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000130:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000131:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000132:
		case 0x00000133:
		case 0x00000134:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000135:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000136:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000137:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_56(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000138:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6134071B;
			uParam1->f_6E = 0x6134071B;
			func_55(uParam1, 0x00000090, 0x1C43F4CF, 0xA573B67C, -9.5443f, -3.191f, -0.3f, 180f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000139:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0xC572E06A;
			func_56(uParam1);
			uParam1->f_76 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000013A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_56(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
	}
	*uParam1 = { Param0 };
	uParam1->f_6D = 0x55966344;
	uParam1->f_6E = 0x55966344;
	func_56(uParam1);
	uParam1->f_76 = 0x00000000;
	return 0x00000000;
}

void func_55(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam5)
{
	uParam0->f_6F = iParam1;
	uParam0->f_74 = iParam2;
	uParam0->f_75 = iParam3;
	uParam0->f_70 = { vParam4 };
	uParam0->f_73 = fParam5;
}

void func_56(var uParam0)
{
	func_55(uParam0, 0x00000091, 0x55966344, 0x55966344, 0f, 0f, 0f, 0f);
}

int func_57(int iParam0, var uParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (func_60(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 0x00000000;
				break;
			
			case 0x00000001:
				func_58(&iVar0);
				if (iVar0 < 0x00000005)
				{
					*uParam1 = { Global_16EFB[iVar0 /*9*/].f_3 };
					*uParam2 = Global_16EFB[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 0x00000001;
				}
				else
				{
					*uParam1 = { Global_16EFB[0x00000000 /*9*/].f_3 };
					*uParam2 = Global_16EFB[0x00000000 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 0x00000001;
				}
				break;
			
			case 0x00000002:
				*uParam1 = { Global_17A57[0x00000000 /*109*/].f_4 };
				*uParam2 = Global_17A57[0x00000000 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000003:
				*uParam1 = { Global_17A57[0x00000001 /*109*/].f_4 };
				*uParam2 = Global_17A57[0x00000001 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000004:
				*uParam1 = { Global_17A57[0x00000002 /*109*/].f_4 };
				*uParam2 = Global_17A57[0x00000002 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000005:
				*uParam1 = { Global_1B416.f_936.f_21B.f_8FC[0x00000000 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_1B416.f_936.f_21B.f_906[0x00000000];
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000006:
				*uParam1 = { Global_1B416.f_936.f_21B.f_8FC[0x00000001 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_1B416.f_936.f_21B.f_906[0x00000001];
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000007:
				*uParam1 = { Global_1B416.f_936.f_21B.f_8FC[0x00000002 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_1B416.f_936.f_21B.f_906[0x00000002];
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
		}
		*uParam1 = { Global_17B9F[iParam0 /*3*/] };
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_58(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	
	iVar0 = Global_1B416.f_936.f_21B.f_10E3;
	vVar1 = { Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/] };
	if (func_59(vVar1, 0f, 0f, 0f, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
	}
	*uParam0 = 0x00000005;
	fVar2 = 9999999f;
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000005)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38.f_B[iVar3], 0x00000000))
		{
			vVar4 = { Global_16EFB[iVar3 /*9*/].f_3 };
			fVar5 = SYSTEM::VDIST(vVar1, vVar4);
			if (fVar5 > 150f)
			{
				if (fVar5 < fVar2)
				{
					*uParam0 = iVar3;
					fVar2 = fVar5;
				}
			}
		}
		iVar3++;
	}
	return *uParam0 != 0x00000005;
}

bool func_59(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_60(int iParam0, var uParam1, char* sParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			func_58(&iVar1);
			if (iVar1 < 0x00000005)
			{
				*uParam1 = Global_16EFB[iVar1 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			else
			{
				*uParam1 = Global_16EFB[0x00000000 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			*uParam1 = Global_17A57[0x00000000 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000003:
			*uParam1 = Global_17A57[0x00000001 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000004:
			*uParam1 = Global_17A57[0x00000002 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000005:
			*uParam1 = Global_1B416.f_936.f_21B.f_906[0x00000000];
			StringCopy(sParam2, func_64(Global_1B416.f_936.f_21B.f_90A[0x00000000]), 32);
			return 0x00000001;
			break;
		
		case 0x00000006:
			*uParam1 = Global_1B416.f_936.f_21B.f_906[0x00000001];
			StringCopy(sParam2, func_64(Global_1B416.f_936.f_21B.f_90A[0x00000001]), 32);
			return 0x00000001;
			break;
		
		case 0x00000007:
			*uParam1 = Global_1B416.f_936.f_21B.f_906[0x00000002];
			StringCopy(sParam2, func_64(Global_1B416.f_936.f_21B.f_90A[0x00000002]), 32);
			return 0x00000001;
			break;
		
		case 0x0000000B:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000008:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			return func_60(0x00000008, uParam1, sParam2);
			break;
		
		case 0x0000000A:
			return func_60(0x00000008, uParam1, sParam2);
			break;
		
		case 0x0000000D:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000E:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000F:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000C:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000010:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000012:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000013:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000014:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000015:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000016:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000004A:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000017:
			return func_60(0x000000D0, uParam1, sParam2);
			break;
		
		case 0x00000018:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000043:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000019:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001A:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001B:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001C:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001D:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000001E:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000001F:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000020:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000021:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000022:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000023:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000024:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000025:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000003A:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003B:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003C:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000026:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000027:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000028:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000029:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002A:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002B:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002C:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002D:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002E:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000002F:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000031:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000030:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000007C:
			vVar0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000032:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000033:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000034:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000042:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000035:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000036:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000037:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000038:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000039:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003D:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003E:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003F:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000044:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000045:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000040:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000041:
			if (func_63(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000046:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000047:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000048:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000049:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x000000EA:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x0000013C:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x0000013B:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x0000004B:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000004C:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000004D:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000004E:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000004F:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000050:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000051:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000052:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000053:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000054:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000055:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000056:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000057:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000058:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000059:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005A:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005B:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005C:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005D:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005E:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005F:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000060:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000061:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000062:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000063:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000064:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000065:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000066:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000067:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000068:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000069:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006A:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006B:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006C:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006D:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006E:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006F:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000070:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000071:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000087:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000088:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000089:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008A:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008B:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008C:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008D:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008E:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008F:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000090:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000091:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000092:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000093:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000094:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000095:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000096:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000072:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000073:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000074:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000075:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000076:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000077:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000078:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000079:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007A:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000007B:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007D:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007E:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007F:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000080:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000081:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000082:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000083:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000084:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000085:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000086:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000097:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000098:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000099:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009A:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009B:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009C:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000009D:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009E:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009F:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A0:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A1:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A2:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A3:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x000000A4:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A5:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A6:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A7:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A8:
			if (func_61(0x00000000, 0x00000019, &uVar2, &fVar3))
			{
				*uParam1 = (fVar3 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 0x00000001;
			}
			break;
		
		case 0x000000A9:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x000000AA:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AB:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AD:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AC:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AE:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000000AF:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000B0:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B1:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B2:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B3:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000B4:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B5:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000B6:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000B7:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000B8:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000B9:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000BA:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BB:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BC:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BD:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BE:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BF:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000C4:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000C5:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000C0:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C1:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C2:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C3:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C6:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C7:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C8:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C9:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CA:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CB:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CC:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CD:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CE:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CF:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D0:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D1:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D2:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D3:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D4:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D5:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D6:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D7:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D8:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D9:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DD:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DE:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 0x00000001;
			break;
		
		case 0x000000DF:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 0x00000001;
			break;
		
		case 0x000000E0:
			return func_60(0x000000DE, uParam1, sParam2);
			break;
		
		case 0x000000E2:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E3:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E4:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E5:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E6:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DA:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DB:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DC:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E1:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E7:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E8:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E9:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000EB:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 0x00000001;
			break;
		
		case 0x000000EC:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 0x00000001;
			break;
		
		case 0x000000ED:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000EE:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000EF:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F0:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F1:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F2:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F5:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x000000F3:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F4:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F6:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F7:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F8:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F9:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FA:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FB:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FC:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FD:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FE:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FF:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000108:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000109:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010A:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010B:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010C:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010D:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010E:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010F:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000110:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000111:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000112:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000113:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000114:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000115:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000116:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000117:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000118:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000119:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011A:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011B:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011C:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011D:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000100:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000101:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000102:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000103:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000104:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000105:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011E:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011F:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000120:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000106:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000107:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000121:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000122:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 0x00000001;
			break;
		
		case 0x00000123:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000124:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000125:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000126:
			return func_60(0x00000125, uParam1, sParam2);
			break;
		
		case 0x00000127:
			return func_60(0x00000124, uParam1, sParam2);
			break;
		
		case 0x0000012B:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x0000012C:
			return func_60(0x0000012F, uParam1, sParam2);
			break;
		
		case 0x0000012D:
			return func_60(0x0000012F, uParam1, sParam2);
			break;
		
		case 0x0000012E:
			return func_60(0x0000012F, uParam1, sParam2);
			break;
		
		case 0x0000012F:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000128:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000129:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x0000012A:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000130:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000131:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 0x00000001;
			break;
		
		case 0x00000132:
			vVar4 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar4.x, -vVar4.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000133:
			vVar5 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar5.x, -vVar5.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000134:
			vVar6 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar6.x, -vVar6.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000135:
			vVar7 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar7.x, -vVar7.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000136:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000137:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000138:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000139:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000013A:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0x00000000;
}

int func_61(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return 0x00000001;
					break;
				
				case 0x00000001:
					if (func_61(0x00000000, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return 0x00000001;
					}
					break;
				
				case 0x00000002:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			return 0x00000000;
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return 0x00000001;
					break;
				
				case 0x00000001:
					if (func_61(0x00000000, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
				
				case 0x00000002:
					if (func_61(0x00000000, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
				case 0x00000002:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
				case 0x00000002:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000012:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000015:
			switch (iParam0)
			{
				case 0x00000000:
					if (func_61(0x00000000, 0x00000005, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000B:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000C:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000F:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000010:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000011:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000014:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000016:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, unk_0x79833B02DBD2A244(-0.5f, 0.5f), unk_0x79833B02DBD2A244(-0.5f, 0.5f)) };
					*uParam3 = (306f + unk_0x79833B02DBD2A244(10f, 10f));
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000017:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = unk_0xE7D606C557C86100(*uParam2, uParam2->f_1);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000018:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000013:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000019:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001A:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000020:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001B:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000029:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000021:
			switch (iParam0)
			{
				case 0x00000001:
					if (func_61(0x00000001, 0x00000020, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000026:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001F:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000022:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000023:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000025:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000027:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000028:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000024:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001C:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002A:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002B:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000002C:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002D:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002E:
			return func_61(iParam0, 0x0000001A, uParam2, uParam3);
			break;
		
		case 0x0000002F:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000003:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000030:
		case 0x00000044:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000031:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0x00000000;
					break;
			}
			break;
		
		case 0x00000032:
		case 0x00000045:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000033:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000034:
		case 0x00000043:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000035:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000036:
		case 0x00000046:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000037:
		case 0x00000047:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*uParam3 = 94.2086f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000040:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000038:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000000:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000039:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000000:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003A:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000001:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003B:
		case 0x00000048:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003C:
			if (func_61(iParam0, 0x0000003B, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
				*uParam3 = (*uParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
				return 0x00000001;
			}
			break;
		
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000041:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000042:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000049:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004A:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000001:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004B:
		case 0x00000054:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004C:
		case 0x0000004E:
		case 0x00000055:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004D:
			if (func_61(iParam0, 0x0000002F, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 0x00000001;
			}
			break;
		
		case 0x0000004F:
		case 0x00000056:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000050:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000051:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000052:
		case 0x00000053:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000057:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000058:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000059:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005A:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005B:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005C:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005D:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005E:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005F:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000060:
		case 0x00000062:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000061:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000063:
			switch (iParam0)
			{
				case 0x00000006:
					*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return 0x00000001;
					break;
				
				case 0x00000007:
					*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000064:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000065:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000066:
		case 0x00000067:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000068:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000069:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006A:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006B:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006C:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006D:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006E:
		case 0x0000006F:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000074:
			switch (iParam0)
			{
				case 0x00000009:
				case 0x0000000B:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000075:
			switch (iParam0)
			{
				case 0x00000009:
				case 0x0000000B:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000070:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000071:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000072:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000073:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000076:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000077:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000078:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000079:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007A:
			switch (iParam0)
			{
				case 0x0000000B:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007B:
			switch (iParam0)
			{
				case 0x0000000B:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007C:
			switch (iParam0)
			{
				case 0x0000000B:
				case 0x00000008:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007D:
			switch (iParam0)
			{
				case 0x0000000C:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007E:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007F:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000080:
			switch (iParam0)
			{
				case 0x0000000D:
					if (Global_1B416.f_4860[0x00000002] == 0x0000012B)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return 0x00000001;
					}
					else if (((Global_1B416.f_4860[0x00000002] == 0x0000012C || Global_1B416.f_4860[0x00000002] == 0x0000012D) || Global_1B416.f_4860[0x00000002] == 0x0000012E) || Global_1B416.f_4860[0x00000002] == 0x0000012F)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return 0x00000001;
					}
					if (func_62())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return 0x00000001;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000081:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = (102f - 90.6729f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000082:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000083:
			switch (iParam0)
			{
				case 0x0000000D:
					if (func_61(iParam0, 0x00000082, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
						*uParam3 = (*uParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000084:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000085:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000086:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000087:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000088:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return 0x00000001;
					break;
				
				case 0x0000000E:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000089:
		case 0x0000008A:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0x00000000;
			break;
		
		case 0x0000008C:
		case 0x0000008D:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0x00000000;
			break;
		
		default:
			*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
			return 0x00000000;
			break;
	}
	*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
	*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
	return 0x00000000;
}

int func_62()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_63(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x0000000B:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return 0x00000001;
			break;
		
		case 0x00000008:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*uParam2 = 194.1887f;
			return 0x00000001;
			break;
		
		case 0x00000009:
			return func_63(0x00000008, uParam1, uParam2);
			break;
		
		case 0x0000000A:
			return func_63(0x00000008, uParam1, uParam2);
			break;
		
		case 0x0000000D:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return 0x00000001;
			break;
		
		case 0x0000000E:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*uParam2 = 350.0509f;
			return 0x00000001;
			break;
		
		case 0x0000000F:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*uParam2 = 0.7896f;
			return 0x00000001;
			break;
		
		case 0x0000000C:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return 0x00000001;
			break;
		
		case 0x00000010:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*uParam2 = -129f;
			return 0x00000001;
			break;
		
		case 0x00000011:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*uParam2 = 267.1409f;
			return 0x00000001;
			break;
		
		case 0x00000012:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return 0x00000001;
			break;
		
		case 0x00000013:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return 0x00000001;
			break;
		
		case 0x00000014:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return 0x00000001;
			break;
		
		case 0x00000015:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000016:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return 0x00000001;
			break;
		
		case 0x0000004A:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return 0x00000001;
			break;
		
		case 0x00000017:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return 0x00000001;
			break;
		
		case 0x00000018:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return 0x00000001;
			break;
		
		case 0x00000043:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return 0x00000001;
			break;
		
		case 0x00000019:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*uParam2 = 156.8827f;
			return 0x00000001;
			break;
		
		case 0x0000001B:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001A:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*uParam2 = 97.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001C:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return 0x00000001;
			break;
		
		case 0x0000001D:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001E:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001F:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000020:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000021:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000022:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000023:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000024:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000025:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*uParam2 = 32.2721f;
			return 0x00000001;
			break;
		
		case 0x00000026:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return 0x00000001;
			break;
		
		case 0x00000027:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000028:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000029:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*uParam2 = 355.326f;
			return 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*uParam2 = 46.8853f;
			return 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return 0x00000001;
			break;
		
		case 0x00000031:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*uParam2 = 221.228f;
			return 0x00000001;
			break;
		
		case 0x00000030:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return 0x00000001;
			break;
		
		case 0x00000032:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return 0x00000001;
			break;
		
		case 0x00000033:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return 0x00000001;
			break;
		
		case 0x00000034:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return 0x00000001;
			break;
		
		case 0x00000042:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*uParam2 = -64.1366f;
			return 0x00000001;
			break;
		
		case 0x00000035:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000037:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return 0x00000001;
			break;
		
		case 0x00000038:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return 0x00000001;
			break;
		
		case 0x00000039:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*uParam2 = 90.0339f;
			return 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return 0x00000001;
			break;
		
		case 0x00000044:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000045:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return 0x00000001;
			break;
		
		case 0x00000040:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return 0x00000001;
			break;
		
		case 0x00000036:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000041:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000046:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000047:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000048:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000049:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0x780CBE4B:
			return "v_chopshop";
			break;
		
		case 0x20D7E464:
			return "v_franklins";
			break;
		
		case 0x0D5520EF:
			return "v_franklinshouse";
			break;
		
		case 0x7C0DD540:
			return "v_methlab";
			break;
		
		case 0xC31E7C77:
			return "v_michael";
			break;
		
		case 0x4E55A04E:
			return "v_strip3";
			break;
		
		case 0x6438554B:
			return "v_trailer";
			break;
		
		case 0x66CE0AC8:
			return "v_Trevors";
			break;
	}
	return "";
}

void func_65()
{
	if (unk_0xC844350D5D58C99A(iLocal_68))
	{
		if (iLocal_74 != 0xFFFFFFFF)
		{
			func_3(&iLocal_68, iLocal_74);
		}
	}
	if (iLocal_78 != 0x00000000)
	{
		unk_0xF7E25143642732EA(iLocal_78, 0x00000000);
		iLocal_78 = 0x00000000;
		unk_0x55D0A2DB35045A35(iLocal_169);
		unk_0x43A06902454A1172(iLocal_169);
	}
	unk_0x21387C9EECC2B220(0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

