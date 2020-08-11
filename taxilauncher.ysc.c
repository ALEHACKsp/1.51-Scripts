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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<31> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 16;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
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
	var uLocal_126 = 0;
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
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	char* sLocal_236 = NULL;
	char* sLocal_237 = NULL;
	char* sLocal_238 = NULL;
	int iLocal_239 = 0;
	char cLocal_240[16] = "";
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	vector3 vLocal_243 = { 0f, 0f, 0f };
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
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
	iLocal_46 = unk_0xAD1355DD1E5D2D9B();
	iLocal_47 = unk_0x817B3657F78A517A();
	iLocal_60 = 0x00000001;
	iLocal_65 = 0xFFFFFFFF;
	iLocal_69 = func_147();
	iLocal_70 = func_146();
	StringCopy(&cLocal_240, "TAXI_HAIL", 16);
	if (unk_0x2EBF608FFE6CA406(0x00000022))
	{
		func_145();
		unk_0x10FAF14A60A0DBE1();
	}
	Global_1B416.f_273C.f_78 = 0x00000001;
	while (0x00000001)
	{
		switch (iLocal_51)
		{
			case 0x00000000:
				if (func_144())
				{
					iLocal_51 = 0x00000001;
				}
				else
				{
					SYSTEM::WAIT(0x000001F4);
				}
				break;
			
			case 0x00000001:
				if (func_144())
				{
					vLocal_243 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
					func_112();
					if (func_111())
					{
						unk_0xAB8E2DDC7AF955E0(joaat("taxi"), 0x00000000);
						func_110();
						if (!func_108())
						{
							func_65();
							func_31();
							func_15();
						}
					}
					else
					{
						func_4(0x00000000);
						iLocal_51 = 0x00000001;
						func_1();
						SYSTEM::WAIT(0x000001F4);
					}
				}
				else
				{
					func_4(0x00000001);
					iLocal_51 = 0x00000000;
				}
				break;
			
			case 0x00000002:
				if (!unk_0x1727A44C562FBED2(iLocal_239))
				{
					func_4(0x00000001);
					iLocal_54 = 0x00000003;
					iLocal_51 = 0x00000000;
				}
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	if (!func_3())
	{
		if (unk_0x7F8A39872A07D2CE("NULL", &Global_1B066))
		{
			func_2(0x00000000);
		}
		else if (unk_0x8A22C4C08282BF26(unk_0x12AB0310C2281427(&Global_1B066)) == 0x00000000)
		{
			func_2(0x00000000);
		}
	}
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_1B066, unk_0xBB0808A181D4745C(), 24);
		Global_1B060 = 0x00000001;
	}
	else
	{
		StringCopy(&Global_1B066, "NULL", 24);
		Global_1B060 = 0x00000000;
	}
}

int func_3()
{
	if (!Global_1B05F)
	{
		return 0x00000000;
	}
	if (Global_1B060)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_4(bool bParam0)
{
	unk_0xAB8E2DDC7AF955E0(joaat("taxi"), 0x00000000);
	func_13();
	func_10();
	func_5();
	iLocal_60 = 0x00000001;
	iLocal_58 = 0x00000000;
	iLocal_52 = 0x00000000;
	iLocal_53 = 0x00000000;
	iLocal_55 = 0x00000000;
	iLocal_54 = 0x00000000;
	iLocal_66 = 0x00000000;
	if (bParam0)
	{
		iLocal_51 = 0x00000000;
	}
}

void func_5()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "HAIL_TAXI", 0x00000003))
		{
			unk_0x7720CBBC7DD82563(unk_0x16F2683693E537C9(), "HAIL_TAXI", &cLocal_240, -2f);
		}
		else if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FP_HAIL_TAXI", 0x00000003))
		{
			unk_0x7720CBBC7DD82563(unk_0x16F2683693E537C9(), "FP_HAIL_TAXI", &cLocal_240, -2f);
		}
		else if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FUCK_U", 0x00000003))
		{
			unk_0x7720CBBC7DD82563(unk_0x16F2683693E537C9(), "FUCK_U", &cLocal_240, -2f);
		}
		else if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FORGET_IT", 0x00000003))
		{
			unk_0x7720CBBC7DD82563(unk_0x16F2683693E537C9(), "FORGET_IT", &cLocal_240, -2f);
		}
		if (iLocal_65 != 0xFFFFFFFF)
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000071, 0x00000000);
		}
		if (iLocal_62 == 0x00000001)
		{
			unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000001);
			iLocal_62 = 0x00000000;
		}
	}
	unk_0x8D17794CE3273D70(&cLocal_240);
	if (iLocal_65 != 0xFFFFFFFF)
	{
		func_8(&iLocal_65);
	}
	if (func_7("TXM_H01"))
	{
		iLocal_64++;
		if (iLocal_64 == 0x00000003)
		{
			Global_1B416.f_273C.f_78 = 0x00000001;
		}
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_63))
	{
		unk_0x661342B9651D16E2(iLocal_63, 0x00000000);
		unk_0x142CC44DB769B57E(&iLocal_63);
	}
	if (iLocal_58)
	{
		if (unk_0x8C74DE122769E1BF())
		{
			unk_0x29D5132FBDCF2B1E(0x00000000);
		}
	}
	if (unk_0xC844350D5D58C99A(Global_1B04E))
	{
		if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
		{
			if (unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_240, "Aknowledge_R", 0x00000003))
			{
				unk_0x7720CBBC7DD82563(Global_1B04E, "Aknowledge_R", &cLocal_240, -4f);
			}
			else if (unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_240, "Aknowledge_L", 0x00000003))
			{
				unk_0x7720CBBC7DD82563(Global_1B04E, "Aknowledge_L", &cLocal_240, -4f);
			}
		}
	}
	if (iLocal_54 == 0x00000000)
	{
		func_6();
	}
	iLocal_245 = 0x00000000;
	iLocal_57 = 0x00000000;
	iLocal_58 = 0x00000000;
	iLocal_67 = 0x00000000;
	iLocal_68 = 0x00000000;
	Global_1B072 = 0xFFFFFFFF;
	iLocal_55 = 0x00000000;
}

void func_6()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(Global_1B04E))
	{
		if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
		{
			unk_0x4E885A246A9D983A(Global_1B04E, 0x000000FB, 0x00000000);
			unk_0x11AD11297DC58CC7(Global_1B04E, 0x00000000);
			if (!unk_0xE9FDA1035CFEA94F(Global_1B04E) && !unk_0x4734A6196B611C3B(Global_1B04E, 0x00000000))
			{
				if (unk_0x405E212DDE472467(Global_1B04E, 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(Global_1B04D))
					{
						if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
						{
							if (unk_0x82CCEAB29E9451DD(Global_1B04E, Global_1B04D))
							{
								if (unk_0xD1960163A3042274(Global_1B04E, 0xF09B15B3) != 0x00000001 && unk_0xD1960163A3042274(Global_1B04E, 0xF09B15B3) != 0x00000000)
								{
									unk_0xDD353D0E9C789D0E(&iVar0);
									if ((!unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000001, 0x00000000) || !unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000002, 0x00000000)) || !unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000000, 0x00000000))
									{
										unk_0x78A77CDD64392938(0x00000000, 0x000007D0);
									}
									else
									{
										unk_0x78A77CDD64392938(0x00000000, 0x000001F4);
									}
									unk_0xE072601B4380E9DF(0x00000000, Global_1B04D, 12f, 0x000C10AB);
									unk_0x75ABDC5F81978924(iVar0);
									unk_0x78ADC381772E3D54(Global_1B04E, iVar0);
									unk_0xF82EA857DA10E0CD(&iVar0);
								}
							}
							else
							{
								unk_0xF3268524E9BE6D6E(Global_1B04E, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							}
						}
						else
						{
							unk_0xF3268524E9BE6D6E(Global_1B04E, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						}
					}
				}
				else if (unk_0xD1960163A3042274(Global_1B04E, 0xBBA3B7CA) != 0x00000001 && unk_0xD1960163A3042274(Global_1B04E, 0xBBA3B7CA) != 0x00000000)
				{
					unk_0x01E4BB5190DF7317(Global_1B04E, 0x471C4000, 0x00000000);
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(Global_1B04E))
	{
		if (unk_0xAF6690C489CC6203(Global_1B04E))
		{
			if (unk_0x9C77D2D0559097F0(Global_1B04E, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
				{
					unk_0xE8832A9E16A57A1F(Global_1B04E, 0x00000000, 0x00000001);
					unk_0x11AD11297DC58CC7(Global_1B04E, 0x00000000);
				}
				unk_0x6DAD7906B73F064D(&Global_1B04E);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(Global_1B04D))
	{
		if (unk_0xAF6690C489CC6203(Global_1B04D))
		{
			if (unk_0x9C77D2D0559097F0(Global_1B04D, 0x00000000))
			{
				if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
				{
					unk_0x4551D324905984CB(Global_1B04D, 0x00000000);
					unk_0x9A8BCD43DBDDCDCA(Global_1B04D, 0x00000001, 0x00000000);
					unk_0x490CE125A7B7CD42(Global_1B04D, 0x00000000);
				}
				unk_0x046C362CF15F1935(&Global_1B04D);
			}
		}
	}
	Global_1B04E = 0x00000000;
	Global_1B04D = 0x00000000;
	StringCopy(&Global_1B06C, "NULL", 24);
	Global_1B072 = 0xFFFFFFFF;
}

bool func_7(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_8(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_9(*iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		*iParam0 = 0xFFFFFFFF;
		return;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000001;
			*iParam0 = 0xFFFFFFFF;
			return;
		}
	}
	*iParam0 = 0xFFFFFFFF;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_10()
{
	if (iLocal_54 == 0x00000001)
	{
		unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000001);
		func_11();
	}
	else if (iLocal_54 == 0x00000002)
	{
		if (unk_0x1FBF08B001C4788A("taxiService"))
		{
			unk_0x5E8C29AE121DF1C7("taxiService");
		}
		unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000001);
		func_11();
	}
	func_6();
	if (func_7("TX_H02"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	iLocal_66 = 0x00000000;
	iLocal_54 = 0x00000000;
}

void func_11()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x7AEFFBD77F2CF1EC(func_12()))
	{
		unk_0xF5BDC0FED0F08D25(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0x00000000)
		{
			iVar2 = unk_0x9B50A0F7FCCD175C(func_12(), 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar2))
			{
				unk_0xA3BF0AA5A2608191(iVar2);
				if (!unk_0x437347B10A200C4B(Global_1B04D, 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(iVar2, Global_1B04D, 0x00000000))
					{
						unk_0x45F014B3D0466974(iVar2, Global_1B04D, 0x00000040);
					}
				}
			}
			if (iVar0 > 0x00000001)
			{
				iVar2 = unk_0x9B50A0F7FCCD175C(func_12(), 0x00000001);
				if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					unk_0xA3BF0AA5A2608191(iVar2);
					if (!unk_0x437347B10A200C4B(Global_1B04D, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(iVar2, Global_1B04D, 0x00000000))
						{
							unk_0x45F014B3D0466974(iVar2, Global_1B04D, 0x00000040);
						}
					}
				}
			}
		}
	}
}

int func_12()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_13()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(Local_56.f_1))
	{
		if (unk_0x9C77D2D0559097F0(Local_56.f_1, 0x00000000))
		{
			if (Local_56.f_1 != Global_1B04E)
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_56.f_1))
				{
					unk_0x4E885A246A9D983A(Local_56.f_1, 0x000000FB, 0x00000000);
					unk_0x11AD11297DC58CC7(Local_56.f_1, 0x00000000);
					if (!unk_0xE9FDA1035CFEA94F(Local_56.f_1) && !unk_0x4734A6196B611C3B(Local_56.f_1, 0x00000000))
					{
						if (unk_0x405E212DDE472467(Local_56.f_1, 0x00000000))
						{
							if (unk_0xC844350D5D58C99A(Local_56))
							{
								if (unk_0xDF1306B443CD3D15(Local_56, 0x00000000))
								{
									if (unk_0x82CCEAB29E9451DD(Local_56.f_1, Local_56))
									{
										unk_0xDD353D0E9C789D0E(&iVar0);
										if ((!unk_0xBBA8A868118C90ED(Local_56, 0x00000001, 0x00000000) || !unk_0xBBA8A868118C90ED(Local_56, 0x00000002, 0x00000000)) || !unk_0xBBA8A868118C90ED(Local_56, 0x00000000, 0x00000000))
										{
											unk_0x78A77CDD64392938(0x00000000, 0x000007D0);
										}
										else
										{
											unk_0x78A77CDD64392938(0x00000000, 0x000001F4);
										}
										unk_0xE072601B4380E9DF(0x00000000, Local_56, 12f, 0x000C10AB);
										unk_0x75ABDC5F81978924(iVar0);
										unk_0x78ADC381772E3D54(Local_56.f_1, iVar0);
										unk_0xF82EA857DA10E0CD(&iVar0);
									}
									else
									{
										unk_0xF3268524E9BE6D6E(Local_56.f_1, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									}
								}
								else
								{
									unk_0xF3268524E9BE6D6E(Local_56.f_1, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								}
							}
						}
						else
						{
							unk_0x01E4BB5190DF7317(Local_56.f_1, 0x471C4000, 0x00000000);
						}
					}
				}
				unk_0x71199B01895C6202(unk_0x134B62B726CEC8E6(Local_56.f_1));
				unk_0x6DAD7906B73F064D(&(Local_56.f_1));
			}
		}
	}
	if (unk_0xC844350D5D58C99A(Local_56))
	{
		if (unk_0x9C77D2D0559097F0(Local_56, 0x00000000))
		{
			if (Local_56 != Global_1B04D)
			{
				unk_0x046C362CF15F1935(&Local_56);
			}
		}
	}
	if (iLocal_53 == 0x00000001)
	{
		unk_0x71199B01895C6202(iLocal_70);
		unk_0x71199B01895C6202(iLocal_69);
	}
	Local_56 = 0x00000000;
	Local_56.f_1 = 0x00000000;
	Local_56.f_2 = 0x00000000;
	Local_56.f_3 = 0x00000000;
	Local_56.f_5 = 0f;
	Local_56.f_6 = 0f;
	Local_56.f_7 = 45f;
	Local_56.f_8 = 0x00000000;
	Local_56.f_A = 0x00000000;
	Local_56.f_9 = 0x00000000;
	Local_56.f_B = { 0f, 0f, 0f };
	Local_56.f_E = { 0f, 0f, 0f };
	Local_56.f_11 = { 0f, 0f, 0f };
	Local_56.f_14 = { 0f, 0f, 0f };
	Local_56.f_17 = { 0f, 0f, 0f };
	Local_56.f_1A = { 0f, 0f, 0f };
	Local_56.f_1D = 0x402810AB;
	Local_56.f_1E = func_14();
	iLocal_53 = 0x00000000;
}

int func_14()
{
	if (Global_7830 == 0x00000000 || Global_7830 == 0x00000002)
	{
		return 0x000000A7;
	}
	return 0x000000A1;
}

void func_15()
{
	if (iLocal_54 == 0x00000000)
	{
		func_27();
	}
	else if (iLocal_54 == 0x00000001)
	{
		func_23();
	}
	else if (iLocal_54 == 0x00000002)
	{
		func_16();
	}
	else if (iLocal_54 == 0x00000003)
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iLocal_54 = 0x00000000;
		}
	}
}

void func_16()
{
	if (func_22(&Global_1B04D, iLocal_70, iLocal_69))
	{
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1B04D, 0x00000000))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), Global_1B04D))
			{
				func_21();
				if (unk_0xA30B8362589C124A(Global_1B04D, 0x00000001, 0x00000000) == unk_0x16F2683693E537C9())
				{
					iLocal_246 = 0x00000001;
				}
				else
				{
					iLocal_246 = 0x00000002;
				}
				func_20(&Global_1B04D, iLocal_246);
				if (!unk_0xEB6A8945D1AC98A1(Global_1B04E) && unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
				{
					if (unk_0x82CCEAB29E9451DD(Global_1B04E, Global_1B04D))
					{
						if (!func_19(Global_1B04E, 0x81B4D53A))
						{
							unk_0xD1F0F33C375B8446(Global_1B04E, Global_1B04D, 0x00000001, 0x000F4240);
						}
					}
				}
				func_13();
				func_5();
				if (iLocal_59)
				{
					if (func_7("TX_H02"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					iLocal_59 = 0x00000000;
				}
				func_18();
				func_17();
				unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000000);
				unk_0x92DCE5C81176D2B4("taxiService");
				if (unk_0x1FBF08B001C4788A("taxiService"))
				{
					iLocal_239 = SYSTEM::START_NEW_SCRIPT("taxiService", 0x00000724);
					unk_0x5E8C29AE121DF1C7("taxiService");
					iLocal_51 = 0x00000002;
				}
			}
		}
		else
		{
			func_4(0x00000001);
		}
	}
	else
	{
		func_10();
	}
}

void func_17()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0xF187F2EA5437526A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 1.5f, 1.5f, 1.5f, 0xFFFFFFFF);
		if (!unk_0xEB6A8945D1AC98A1(iVar0))
		{
			if (unk_0xE3614539F8B5C807(iVar0))
			{
				unk_0xF3268524E9BE6D6E(iVar0, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
		}
	}
}

void func_18()
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
	{
		if (!unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000001, 0x00000000))
		{
			iVar0 = unk_0xA30B8362589C124A(Global_1B04D, 0x00000001, 0x00000000);
			if (unk_0x16F2683693E537C9() != iVar0)
			{
				if (!unk_0xBFDE4EE64C4BF2D6(iVar0, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
				{
					unk_0xF3268524E9BE6D6E(iVar0, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
			}
		}
		if (!unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000002, 0x00000000))
		{
			iVar0 = unk_0xA30B8362589C124A(Global_1B04D, 0x00000002, 0x00000000);
			if (unk_0x16F2683693E537C9() != iVar0)
			{
				if (!unk_0xBFDE4EE64C4BF2D6(iVar0, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
				{
					unk_0xF3268524E9BE6D6E(iVar0, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
			}
		}
	}
}

int func_19(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_20(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (unk_0x7AEFFBD77F2CF1EC(func_12()))
	{
		unk_0xF5BDC0FED0F08D25(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0x00000000)
		{
			iVar2 = unk_0x9B50A0F7FCCD175C(func_12(), 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar2))
			{
				iVar5 = 0x00000001;
				if (iParam1 == 0x00000001)
				{
					iVar5 = 0x00000002;
				}
				bVar4 = 0x00000001;
				iVar3 = unk_0xA30B8362589C124A(*uParam0, iVar5, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar3))
				{
					if (iVar3 == unk_0x16F2683693E537C9())
					{
						bVar4 = 0x00000000;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = 0x00000000;
					}
				}
				if (unk_0x24129324CD7C13D0(iVar2, 0x000000A7, 0x00000000))
				{
					bVar4 = 0x00000000;
				}
				if (func_19(iVar2, 0x950B6492))
				{
					bVar4 = 0x00000000;
				}
				if (bVar4)
				{
					unk_0x5B1D360B9C6F0A09(iVar2, *uParam0, 0x00004E20, iVar5, 2f, 0x00900001, 0x00000000);
				}
			}
			if (iVar0 > 0x00000001)
			{
				iVar2 = unk_0x9B50A0F7FCCD175C(func_12(), 0x00000001);
				if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					bVar4 = 0x00000001;
					iVar5 = 0x00000000;
					iVar3 = unk_0xA30B8362589C124A(*uParam0, iVar5, 0x00000000);
					if (unk_0xC844350D5D58C99A(iVar3))
					{
						if (iVar3 == unk_0x16F2683693E537C9())
						{
							bVar4 = 0x00000000;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = 0x00000000;
						}
					}
					if (unk_0x24129324CD7C13D0(iVar2, 0x000000A7, 0x00000000))
					{
						bVar4 = 0x00000000;
					}
					if (func_19(iVar2, 0x950B6492))
					{
						bVar4 = 0x00000000;
					}
					if (bVar4)
					{
						unk_0x5B1D360B9C6F0A09(iVar2, *uParam0, 0x00004E20, iVar5, 2f, 0x00900001, 0x00000000);
					}
				}
			}
		}
	}
}

void func_21()
{
	Global_56C3.f_6 = 0x00000001;
}

int func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
		{
			if (unk_0x134B62B726CEC8E6(*iParam0) == iParam1)
			{
				iVar0 = unk_0xA30B8362589C124A(*iParam0, 0xFFFFFFFF, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (!unk_0xE9FDA1035CFEA94F(iVar0))
						{
							if (!unk_0x4734A6196B611C3B(iVar0, 0x00000000))
							{
								if (unk_0x61C907EA8258B04D(iVar0, iParam2))
								{
									if (unk_0x10BA239D3B8FDC7F(*iParam0, 0x42B40000))
									{
										iVar1 = unk_0x9C7B8DC16535B879(*iParam0);
										if (iVar1 != 0x00000003 && iVar1 != 0x00000002)
										{
											return 0x00000001;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_23()
{
	if (func_22(&Global_1B04D, iLocal_70, iLocal_69))
	{
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1B04D, 0x00000000))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), Global_1B04D))
			{
				iLocal_54 = 0x00000002;
			}
			func_21();
		}
		else
		{
			func_24();
		}
	}
	else
	{
		func_10();
	}
}

void func_24()
{
	int iVar0;
	
	if (func_25(&Global_1B04D))
	{
		iVar0 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (iVar0 == iLocal_244)
			{
				func_21();
				if (!unk_0xEB6A8945D1AC98A1(Global_1B04E) && unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
				{
					if (unk_0x82CCEAB29E9451DD(Global_1B04E, Global_1B04D))
					{
						if (!func_19(Global_1B04E, 0x81B4D53A))
						{
							unk_0xD1F0F33C375B8446(Global_1B04E, Global_1B04D, 0x00000001, 0x000F4240);
						}
					}
				}
			}
			else
			{
				iLocal_54 = 0x00000000;
			}
		}
		else
		{
			iLocal_54 = 0x00000000;
		}
	}
	else
	{
		iLocal_54 = 0x00000000;
	}
}

int func_25(int iParam0)
{
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), *iParam0, 5f, 5f, 2f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x9C66D99E63E8E24C(*iParam0) > 0.5f)
	{
		return 0x00000000;
	}
	if (unk_0x4D570FEF9D230CE7(*iParam0) != unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (!func_26(*iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_26(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x10BA239D3B8FDC7F(iParam0, 0x42B40000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_27()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iLocal_244))
	{
		if (func_22(&iLocal_244, iLocal_70, iLocal_69))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_29();
			}
			else if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_244))
				{
					iVar0 = unk_0xA30B8362589C124A(iLocal_244, 0xFFFFFFFF, 0x00000000);
					if (!unk_0xBBA8A868118C90ED(iLocal_244, 0x00000001, 0x00000000))
					{
						if (unk_0xA30B8362589C124A(iLocal_244, 0x00000001, 0x00000000) == unk_0x16F2683693E537C9())
						{
							iLocal_246 = 0x00000001;
						}
					}
					if (!unk_0xBBA8A868118C90ED(iLocal_244, 0x00000002, 0x00000000))
					{
						if (unk_0xA30B8362589C124A(iLocal_244, 0x00000002, 0x00000000) == unk_0x16F2683693E537C9())
						{
							iLocal_246 = 0x00000002;
						}
					}
					if (iLocal_55 == 0x00000004 || iLocal_55 == 0x00000002)
					{
						if (iLocal_244 != Global_1B04D)
						{
							func_5();
						}
					}
					func_21();
					if (func_28(&iLocal_244, &iVar0, 0x00000000))
					{
						iLocal_244 = 0x00000000;
						iLocal_54 = 0x00000002;
					}
				}
				else
				{
					func_10();
				}
			}
		}
	}
}

int func_28(int iParam0, int iParam1, bool bParam2)
{
	if (!*iParam0 == Global_1B04D && !Global_1B04D == 0x00000000)
	{
		func_6();
	}
	if (unk_0xC844350D5D58C99A(*iParam0) && unk_0xC844350D5D58C99A(*iParam1))
	{
		if (unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(*iParam1))
			{
				if (unk_0x82CCEAB29E9451DD(*iParam1, *iParam0))
				{
					Global_1B04D = *iParam0;
					Global_1B04E = *iParam1;
					Global_1B05C = 0x00000001;
					if (bParam2)
					{
						unk_0x73270B3C9CC833FD(Global_1B04E, 0x00000001, 0x00000001);
						unk_0x73270B3C9CC833FD(Global_1B04D, 0x00000001, 0x00000001);
						StringCopy(&Global_1B06C, unk_0xBB0808A181D4745C(), 24);
					}
					else
					{
						if (!unk_0xAF6690C489CC6203(Global_1B04E))
						{
							unk_0x73270B3C9CC833FD(Global_1B04E, 0x00000001, 0x00000000);
						}
						if (!unk_0xAF6690C489CC6203(Global_1B04D))
						{
							unk_0x73270B3C9CC833FD(Global_1B04D, 0x00000001, 0x00000000);
							StringCopy(&Global_1B06C, unk_0xBB0808A181D4745C(), 24);
						}
					}
					unk_0x4E885A246A9D983A(Global_1B04E, 0x000000FB, 0x00000001);
					unk_0xAFF39FB306F8E232(Global_1B04E, 0x00000005, 0x00000000);
					unk_0xAFF39FB306F8E232(Global_1B04E, 0x00000011, 0x00000001);
					unk_0xBAFED2F6486F771A(Global_1B04E, 0x00000200, 0x00000000);
					unk_0x11AD11297DC58CC7(Global_1B04E, 0x00000001);
					unk_0x4F39CC3882DD074E(Global_1B04E, "A_M_M_EASTSA_02_LATINO_FULL_01");
					unk_0x71EDC33E5A423750(Global_1B04D, 0x00000001);
					unk_0x4551D324905984CB(Global_1B04D, 0x00000001);
					unk_0x9A8BCD43DBDDCDCA(Global_1B04D, 0x00000000, 0x00000000);
					unk_0x490CE125A7B7CD42(Global_1B04D, 0x00000001);
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (func_25(&iLocal_244))
	{
		if (!iLocal_59)
		{
			if (iLocal_244 == Global_1B04D && iLocal_55 == 0x00000004)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					if (!func_7("TX_H02"))
					{
						if (Global_1B416.f_273C.f_79 < 0x00000005)
						{
							func_30("TX_H02", 0xFFFFFFFF);
							Global_1B416.f_273C.f_79++;
						}
						iLocal_59 = 0x00000001;
					}
				}
			}
		}
		iVar0 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (iVar0 == iLocal_244)
			{
				iVar1 = unk_0xA30B8362589C124A(iLocal_244, 0xFFFFFFFF, 0x00000000);
				if (iLocal_55 == 0x00000004 || iLocal_55 == 0x00000002)
				{
					if (iLocal_244 != Global_1B04D)
					{
						func_5();
					}
				}
				func_21();
				if (func_28(&iLocal_244, &iVar1, 0x00000000))
				{
					if (iLocal_58)
					{
						if (unk_0x8C74DE122769E1BF())
						{
							unk_0x29D5132FBDCF2B1E(0x00000000);
						}
						iLocal_58 = 0x00000000;
					}
					if (!unk_0xEB6A8945D1AC98A1(Global_1B04E) && unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
					{
						if (unk_0x82CCEAB29E9451DD(Global_1B04E, Global_1B04D))
						{
							if (!func_19(Global_1B04E, 0x81B4D53A))
							{
								unk_0xD1F0F33C375B8446(Global_1B04E, Global_1B04D, 0x00000001, 0x00002710);
							}
						}
					}
					iLocal_59 = 0x00000000;
					iLocal_54 = 0x00000001;
				}
			}
		}
	}
	else if (func_7("TX_H02"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
}

void func_30(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_31()
{
	if (iLocal_55 == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_245))
		{
			iLocal_55 = 0x00000001;
		}
	}
	else if (iLocal_55 == 0x00000001)
	{
		func_58();
	}
	else if (iLocal_55 == 0x00000002)
	{
		func_49();
	}
	else if (iLocal_55 == 0x00000003)
	{
		func_43();
	}
	else if (iLocal_55 == 0x00000004)
	{
		func_32();
	}
}

void func_32()
{
	if (func_42(&Global_1B04D, &Global_1B04E, iLocal_70, iLocal_69))
	{
		if (!func_36())
		{
			if (!func_19(Global_1B04E, 0x81B4D53A))
			{
				unk_0xD1F0F33C375B8446(Global_1B04E, Global_1B04D, 0x00000001, 0x000F4240);
			}
			unk_0x4E885A246A9D983A(Global_1B04E, 0x000000FB, 0x00000001);
			func_33();
			if (unk_0xE4EDC4B0E92C078B(iLocal_63))
			{
				unk_0x0EC848EFF66DF45A(iLocal_63, 0x00002710);
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_33()
{
	if (unk_0x8C74DE122769E1BF())
	{
		if (iLocal_58)
		{
			if (func_34())
			{
				unk_0x29D5132FBDCF2B1E(0x00000000);
			}
		}
	}
}

int func_34()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	func_35(&iVar0, &iVar1, &uVar2, &uVar3, 0x00000000);
	if (((iVar0 > 0x00000040 || iVar0 < 0xFFFFFFC0) || iVar1 > 0x00000040) || iVar1 < 0xFFFFFFC0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DA) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DB) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DC) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DD) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DA) * 127f));
			*uParam1 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DB) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DC) * 127f));
			*uParam3 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DD) * 127f));
		}
	}
}

int func_36()
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (iLocal_55 == 0x00000004)
	{
		if (Global_1B072 == 0xFFFFFFFF || Global_1B072 == 0x00000000)
		{
			Global_1B072 = unk_0x1C0640BA9A7327B3();
		}
		else if (func_41(Global_1B072, 0x00007530))
		{
			if (iLocal_54 == 0x00000000 || iLocal_54 == 0x00000003)
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1B04D, 0x00000001))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (func_39(Global_1B04D))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(Global_1B04D, 0x00000000) };
		if (iLocal_55 == 0x00000004)
		{
			if (!func_38(vLocal_243, vVar0, 75f))
			{
				return 0x00000001;
			}
		}
		if (unk_0xB87D13D0C064E9D1(Global_1B04D, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0xD3DCEC81D13AAFB1(vVar0, 7f, 0x00000000))
		{
			return 0x00000001;
		}
		fVar1 = 15f;
		vVar2 = { vVar0 };
		vVar3 = { vVar2 };
		vVar2.x = (vVar2.x - fVar1);
		vVar2.y = (vVar2.y - fVar1);
		vVar2.z = (vVar2.z - fVar1);
		vVar3.x = (vVar3.x + fVar1);
		vVar3.y = (vVar3.y + fVar1);
		vVar3.z = (vVar3.z + fVar1);
		if (unk_0x723EE7F83DF1497D(vVar2, vVar3, 0x00000001))
		{
			return 0x00000001;
		}
		if (func_38(vLocal_243, vVar0, 20f))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Global_1B04D) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Global_1B04D))
			{
				return 0x00000001;
			}
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				return 0x00000001;
			}
		}
	}
	else
	{
		return 0x00000001;
	}
	if (func_37(Global_1B04E))
	{
		if (unk_0xB87D13D0C064E9D1(Global_1B04E, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_37(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_38(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(vParam0, vParam1) <= (fParam2 * fParam2);
}

int func_39(int iParam0)
{
	if (func_40(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_40(int iParam0)
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

bool func_41(int iParam0, int iParam1)
{
	return (unk_0x1C0640BA9A7327B3() - iParam0) > iParam1;
}

int func_42(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (unk_0xDF1306B443CD3D15(*uParam0, 0x00000000))
		{
			if (unk_0xC844350D5D58C99A(*uParam1))
			{
				if (!unk_0xEB6A8945D1AC98A1(*uParam1))
				{
					if (!unk_0xE9FDA1035CFEA94F(*uParam1))
					{
						if (!unk_0x4734A6196B611C3B(*uParam1, 0x00000000))
						{
							if (unk_0x82CCEAB29E9451DD(*uParam1, *uParam0))
							{
								if (unk_0x134B62B726CEC8E6(*uParam0) == iParam2)
								{
									if (unk_0x61C907EA8258B04D(*uParam1, iParam3))
									{
										return 0x00000001;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_43()
{
	if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "HAIL_TAXI", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FP_HAIL_TAXI", 0x00000003))
	{
		return;
	}
	else if (func_41(iLocal_67, 0x00000BB8))
	{
		unk_0x3F423BF5B8125A50(&cLocal_240);
		if (unk_0xB4AE0788C1587752(&cLocal_240))
		{
			if (func_44())
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000071, 0x00000001);
				if (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003) < 0x00000002)
				{
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), &cLocal_240, "FORGET_IT", 4f, -2f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), &cLocal_240, "FUCK_U", 4f, -2f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			if (unk_0x09AC81E49EA267F7(0x00000000, 0x00000005) == 0x00000001)
			{
				if (!Global_A663)
				{
					iLocal_57 = 0x00000001;
				}
			}
			iLocal_67 = unk_0x1C0640BA9A7327B3();
			iLocal_68 = unk_0x1C0640BA9A7327B3();
			if (iLocal_62 == 0x00000001)
			{
				unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000001);
				iLocal_62 = 0x00000000;
			}
			if (iLocal_65 != 0xFFFFFFFF)
			{
				func_8(&iLocal_65);
			}
			iLocal_55 = 0x00000000;
		}
	}
}

int func_44()
{
	if (iLocal_54 != 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0x552B9E1FD4519F80(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) || unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0xE934758D273C899A(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (!Global_A663 && unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		return 0x00000000;
	}
	if (func_48(0x00000000))
	{
		return 0x00000000;
	}
	if (func_47())
	{
		return 0x00000000;
	}
	if (func_46())
	{
		return 0x00000000;
	}
	if (func_45())
	{
		return 0x00000000;
	}
	if (unk_0xC8BC75555A67090D())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_45()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

bool func_46()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_47()
{
	return Global_12061;
}

int func_48(int iParam0)
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

void func_49()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (func_42(&Global_1B04D, &Global_1B04E, iLocal_70, iLocal_69))
	{
		bVar0 = 0x00000000;
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x00000017))
		{
			bVar0 = 0x00000001;
		}
		if (func_41(iLocal_67, 0x000003E8))
		{
			if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x87B9A382) == 0x00000007)
			{
				if (((!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "HAIL_TAXI", 0x00000003) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FP_HAIL_TAXI", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FUCK_U", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FORGET_IT", 0x00000003))
				{
					if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x0E763797) == 0x00000007)
					{
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000071, 0x00000000);
						if (iLocal_62 == 0x00000001)
						{
							unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000001);
							iLocal_62 = 0x00000000;
						}
						bVar0 = 0x00000001;
					}
				}
			}
		}
		if (bVar0)
		{
			unk_0x3F423BF5B8125A50(&cLocal_240);
			if (unk_0xB4AE0788C1587752(&cLocal_240))
			{
				if (unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A) < 0x00000008)
				{
					if (!func_54(0x00000000, 0x00000000))
					{
						bVar1 = unk_0x9645CD1B04C4BFD3(unk_0x16F2683693E537C9());
						if (bVar1)
						{
							unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000000);
						}
						func_52(unk_0x16F2683693E537C9(), "TAXI_HAIL", 0x00000022);
						if (bVar1)
						{
							unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000001);
						}
					}
				}
				unk_0xDD353D0E9C789D0E(&iVar2);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00001388, 0x00000800, 0x00000002);
				if (func_51(Global_1B04D))
				{
					unk_0xC6EB89C59F2AF6B8(0x00000000, &cLocal_240, "Aknowledge_R", 8f, -4f, 0xFFFFFFFF, 0x01002030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					unk_0xC6EB89C59F2AF6B8(0x00000000, &cLocal_240, "Aknowledge_L", 8f, -4f, 0xFFFFFFFF, 0x01002030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				unk_0x60274E99F9B27DEA(0x00000000, Global_1B04D, Global_1B04D, 0x00000016, 12f, 0x00040083, 3f, 3f, 0x00000001);
				unk_0x60274E99F9B27DEA(0x00000000, Global_1B04D, Global_1B04D, 0x00000005, 12f, 0x00040083, 3f, 3f, 0x00000001);
				unk_0x75ABDC5F81978924(iVar2);
				unk_0x78ADC381772E3D54(Global_1B04E, iVar2);
				unk_0xF82EA857DA10E0CD(&iVar2);
				func_50();
				iLocal_55 = 0x00000004;
			}
		}
	}
	else
	{
		func_5();
	}
}

void func_50()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_63))
	{
		unk_0x661342B9651D16E2(iLocal_63, 0x00000000);
		unk_0x142CC44DB769B57E(&iLocal_63);
	}
	if (func_39(Global_1B04D))
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_63))
		{
			iLocal_63 = unk_0x5C3B41825F6AC5A0(Global_1B04D);
			unk_0xBC8E0A7390523199(iLocal_63, 0x000000C6);
			unk_0xDC5B2F9D0CCE3A10(iLocal_63, "TXM_BLIP");
			unk_0xF412DD40DE84CE72(iLocal_63, 0x00000001);
			unk_0x0EC848EFF66DF45A(iLocal_63, 0x00002710);
		}
	}
}

int func_51(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 1f, 0f, 0f) };
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
		vVar3 = { vVar1 - vVar0 };
		vVar4 = { vVar2 - vVar0 };
		if (unk_0x07AB02F3C4AE2B04(vVar3.x, vVar3.y, vVar4.x, vVar4.y) < 90f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_52(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_53(iParam2), 0x00000001);
}

int func_53(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			return "SPEECH_PARAMS_STANDARD";
		
		case 0x00000001:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 0x00000002:
			return "SPEECH_PARAMS_BEAT";
		
		case 0x00000003:
			return "SPEECH_PARAMS_FORCE";
		
		case 0x00000004:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 0x00000005:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 0x00000006:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 0x00000007:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 0x00000008:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 0x00000009:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 0x0000000A:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 0x0000000B:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 0x0000000C:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 0x0000000D:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 0x0000000E:
			return "SPEECH_PARAMS_HELI";
		
		case 0x0000000F:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 0x00000010:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 0x00000011:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 0x00000012:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 0x00000013:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 0x00000014:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 0x00000015:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 0x00000016:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 0x00000017:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 0x00000018:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 0x00000019:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 0x0000001A:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 0x0000001B:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 0x0000001C:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 0x0000001D:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 0x0000001E:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 0x0000001F:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 0x00000020:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 0x00000021:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 0x00000022:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 0x00000023:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 0x00000024:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0x00000000;
	return iVar0;
}

int func_54(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x65636D4556D82155(iParam0))
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 0x00000001;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 0x00000001;
		}
	}
	if (func_55())
	{
		func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 0x00000001;
	}
	if (bParam1)
	{
		if (unk_0xD17F06053799A7CA())
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 0x00000001;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x7AEFFBD77F2CF1EC(func_12()))
		{
			unk_0xF5BDC0FED0F08D25(func_12(), &iVar2, &iVar1);
			if (iVar1 > 0x00000000)
			{
				iVar2 = 0x00000000;
				while (iVar2 < iVar1)
				{
					iVar0 = unk_0x9B50A0F7FCCD175C(func_12(), iVar2);
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (unk_0x65636D4556D82155(iVar0))
						{
							func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 0x00000001;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0x00000000;
}

int func_55()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_56(char* sParam0)
{
	func_57(sParam0);
}

void func_57(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

void func_58()
{
	int iVar0;
	
	func_64();
	func_33();
	if (unk_0xC844350D5D58C99A(iLocal_245))
	{
		if (func_22(&iLocal_245, iLocal_70, iLocal_69))
		{
			if (func_44())
			{
				unk_0x3F423BF5B8125A50(&cLocal_240);
				if (unk_0xB4AE0788C1587752(&cLocal_240))
				{
					if (((!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "HAIL_TAXI", 0x00000003) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FP_HAIL_TAXI", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FUCK_U", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FORGET_IT", 0x00000003))
					{
						if (!func_63(&iLocal_245))
						{
							if (!unk_0x1E8596FBA1986F3C(iLocal_245))
							{
								unk_0x6301539B96E43BA1(iLocal_245, 0x00000001);
							}
						}
						if (iLocal_65 == 0xFFFFFFFF)
						{
							func_62(&iLocal_65, 0x00000000, "TXM_H01", 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_61(iLocal_65, 0x00000001))
						{
							if (func_7("TXM_H01"))
							{
								unk_0xA37A90C62806D848(0x00000001);
							}
							if (iLocal_62 == 0x00000000)
							{
								unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000000);
								iLocal_62 = 0x00000001;
							}
							unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_245, 0x00001388, 0x00000000, 0x00000002);
							func_60();
							func_59();
							iLocal_67 = unk_0x1C0640BA9A7327B3();
							func_8(&iLocal_65);
							if (func_63(&iLocal_245))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_245, 0x00000000))
								{
									unk_0x6301539B96E43BA1(iLocal_245, 0x00000000);
								}
								iLocal_58 = 0x00000000;
								iLocal_55 = 0x00000003;
							}
							else
							{
								iVar0 = unk_0xA30B8362589C124A(iLocal_245, 0xFFFFFFFF, 0x00000000);
								if (func_28(&iLocal_245, &iVar0, 0x00000000))
								{
									iLocal_245 = 0x00000000;
									unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), Global_1B04D, 0x00001388, 0x00000000, 0x00000002);
									Global_1B072 = unk_0x1C0640BA9A7327B3();
									if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
									{
										if (!unk_0x8C74DE122769E1BF())
										{
											unk_0xB9BBC76CD5A81754(Global_1B04D, 0f, 0f, 0f, 0x00000001, 0x00000FA0, 0x000007D0, 0x000007D0);
											iLocal_58 = 0x00000001;
										}
									}
									Global_1B416.f_273C.f_78 = 0x00000001;
									iLocal_55 = 0x00000002;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_59()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000010, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000011, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000D, 0x00000001);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000071, 0x00000001);
}

void func_60()
{
	int iVar0;
	bool bVar1;
	struct<20> Var2;
	struct<22> Var3;
	int iVar4;
	int iVar5;
	
	bVar1 = unk_0x9645CD1B04C4BFD3(unk_0x16F2683693E537C9());
	unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
	if (!Global_A663)
	{
		Var2.f_4 = 0x3F800000;
		Var2.f_5 = 0x3F800000;
		Var2.f_9 = 0x3F800000;
		Var2.f_A = 0x3F800000;
		Var2.f_E = 0x3F800000;
		Var2.f_F = 0x3F800000;
		Var2.f_11 = 0x3E000000;
		Var2.f_12 = 0x3E000000;
		Var2.f_13 = 0xFFFFFFFF;
		Var3.f_4 = 0x3F800000;
		Var3.f_5 = 0x3F800000;
		Var3.f_9 = 0x3F800000;
		Var3.f_A = 0x3F800000;
		Var3.f_E = 0x3F800000;
		Var3.f_F = 0x3F800000;
		Var3.f_11 = 0x3E000000;
		Var3.f_12 = 0x3E000000;
		Var3.f_13 = 0xFFFFFFFF;
		iVar4 = 0x00000000;
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
		{
			Var3 = 0x00000001;
			Var3.f_2 = "FP_HAIL_TAXI";
			Var3.f_1 = "TAXI_HAIL";
			Var3.f_3 = 0f;
			Var3.f_4 = 1f;
			Var3.f_10 = unk_0x12AB0310C2281427("UpperbodyAndIk_filter");
			iVar4 += 16;
			iVar4 += 32;
			iVar4 += 8192;
			Var3.f_14 = iVar4;
			Var3.f_15 = 0x00000400;
		}
		else
		{
			Var3 = 0x00000001;
			Var3.f_2 = "HAIL_TAXI";
			Var3.f_1 = "TAXI_HAIL";
			Var3.f_3 = 0f;
			Var3.f_4 = 1f;
			Var3.f_10 = unk_0x12AB0310C2281427("BONEMASK_HEAD_NECK_AND_L_ARM");
			iVar4 += 32;
			iVar4 += 8192;
			Var3.f_14 = iVar4;
		}
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar5, 0x00000001);
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000007) || (unk_0x7F8A39872A07D2CE(Var3.f_2, "FP_HAIL_TAXI") && iVar5 == joaat("weapon_petrolcan")))
		{
			if (iVar5 != joaat("weapon_petrolcan") || !unk_0x7F8A39872A07D2CE(Var3.f_2, "FP_HAIL_TAXI"))
			{
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000071, 0x00000001);
			}
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0x9294582561BECEE7(0x00000000, 0x00000000);
			unk_0x20E1DF68CAB023FF(0x00000000, &Var3, &Var2, &Var2, 0.25f, 0.25f);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
		else
		{
			unk_0x20E1DF68CAB023FF(unk_0x16F2683693E537C9(), &Var3, &Var2, &Var2, 0.25f, 0.25f);
		}
	}
	else
	{
		if (bVar1)
		{
			unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000000);
		}
		func_52(unk_0x16F2683693E537C9(), "TAXI_HAIL_DRUNK", 0x00000007);
		if (bVar1)
		{
			unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000001);
		}
	}
}

int func_61(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_9(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_48(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/] == 0x00000001 && Global_A4A7[iVar0 /*32*/].f_4 == 0x00000001)
		{
			if (bParam1)
			{
				if (Global_A4A7[iVar0 /*32*/].f_1D)
				{
					return 0x00000000;
				}
			}
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000001;
			return 0x00000001;
		}
		else
		{
			if (Global_A4A7[iVar0 /*32*/] == 0x00000000)
			{
			}
			if (Global_A4A7[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0x00000000;
}

void func_62(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == 0xFFFFFFFF)
		{
			func_8(iParam0);
		}
		return;
	}
	if (!*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (!Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/] = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1 = Global_A570;
			Global_A570++;
			Global_A4A7[iVar0 /*32*/].f_4 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_A4A7[iVar0 /*32*/].f_8), sParam2, 16);
			Global_A4A7[iVar0 /*32*/].f_6 = iParam3;
			Global_A4A7[iVar0 /*32*/].f_1F = unk_0x0D0A574C76D769AC();
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000001;
				StringCopy(&(Global_A4A7[iVar0 /*32*/].f_D), sParam4, 64);
				Global_A4A7[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000000;
				Global_A4A7[iVar0 /*32*/].f_1E = 0x00000000;
			}
			*iParam0 = Global_A4A7[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (!unk_0xBBA8A868118C90ED(*iParam0, 0x00000001, 0x00000000))
	{
		iVar0 = unk_0xA30B8362589C124A(*iParam0, 0x00000001, 0x00000000);
		if (!iVar0 == unk_0x16F2683693E537C9())
		{
			if (!unk_0xBFDE4EE64C4BF2D6(iVar0, func_12()))
			{
				if (unk_0x1E8596FBA1986F3C(*iParam0))
				{
					unk_0x6301539B96E43BA1(*iParam0, 0x00000000);
				}
				return 0x00000001;
			}
		}
	}
	if (!unk_0xBBA8A868118C90ED(*iParam0, 0x00000002, 0x00000000))
	{
		iVar0 = unk_0xA30B8362589C124A(*iParam0, 0x00000002, 0x00000000);
		if (!iVar0 == unk_0x16F2683693E537C9())
		{
			if (!unk_0xBFDE4EE64C4BF2D6(iVar0, func_12()))
			{
				if (unk_0x1E8596FBA1986F3C(*iParam0))
				{
					unk_0x6301539B96E43BA1(*iParam0, 0x00000000);
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_64()
{
	bool bVar0;
	
	if (iLocal_57)
	{
		if (func_41(iLocal_68, 0x000003E8))
		{
			if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x87B9A382) == 0x00000007)
			{
				if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x0E763797) == 0x00000007)
				{
					if (((!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "HAIL_TAXI", 0x00000003) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FP_HAIL_TAXI", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FUCK_U", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FORGET_IT", 0x00000003))
					{
						if (!Global_A663)
						{
							bVar0 = unk_0x9645CD1B04C4BFD3(unk_0x16F2683693E537C9());
							if (!bVar0)
							{
								unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000001);
							}
							func_52(unk_0x16F2683693E537C9(), "TAXI_DRIVES_PAST", 0x00000018);
							if (!bVar0)
							{
								unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000000);
							}
						}
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000071, 0x00000000);
						if (iLocal_62 == 0x00000001)
						{
							unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000001);
							iLocal_62 = 0x00000000;
						}
						iLocal_57 = 0x00000000;
					}
				}
			}
		}
	}
}

void func_65()
{
	if (iLocal_53 != 0x00000000)
	{
		if (func_107())
		{
			func_13();
		}
	}
	if (iLocal_53 == 0x00000000)
	{
	}
	else if (iLocal_53 == 0x00000001)
	{
		func_99();
	}
	else if (iLocal_53 == 0x00000002)
	{
		func_74();
	}
	else if (iLocal_53 == 0x00000003)
	{
		func_66();
	}
}

void func_66()
{
	if (func_67())
	{
		if (iLocal_54 == 0x00000000 && iLocal_55 != 0x00000004)
		{
			func_5();
			if (func_28(&Local_56, &(Local_56.f_1), 0x00000000))
			{
				Global_1B072 = 0x00000000;
				if (func_39(Global_1B04D))
				{
					unk_0x67B9E919FADF78E0(Global_1B04D, 0x000009C4, unk_0x12AB0310C2281427("NORMAL"), 0x00000000);
				}
				if (unk_0xC844350D5D58C99A(Global_1B04E))
				{
					if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
					{
						unk_0x0C8C0C840C2D1AD2(Global_1B04E, unk_0x16F2683693E537C9(), 0x00000BB8, 0x00000000, 0x00000002);
						unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), Global_1B04E, 0x00000BB8, 0x00000000, 0x00000002);
					}
				}
				func_50();
				iLocal_55 = 0x00000004;
				func_13();
			}
			else
			{
				func_13();
			}
		}
	}
}

int func_67()
{
	vector3 vVar0;
	
	vVar0 = { unk_0x68F4C0EC296D3901(Local_56, 0x00000000) };
	if (!Local_56.f_2)
	{
		if (!Local_56.f_3)
		{
			if (func_68(vVar0, Local_56.f_E, Local_56.f_6, &(Local_56.f_11), &(Local_56.f_6)))
			{
				if (!unk_0x437347B10A200C4B(Local_56.f_1, 0x00000000))
				{
					unk_0x9992C3A6A1766168(Local_56.f_1, 0.5f);
					if (Local_56.f_4)
					{
						unk_0xE9362E4D600DD12A(Local_56.f_1, Local_56, Local_56.f_11, 10f, 0x00000000, unk_0x134B62B726CEC8E6(Local_56), Local_56.f_1D, 5f, unk_0x0EB28750412C3A5A(vVar0, Local_56.f_11, 0x00000001));
						Local_56.f_4 = 0x00000000;
					}
					else
					{
						unk_0x27F3789FF35EEDF1(Local_56.f_1, Local_56, Local_56.f_11, Local_56.f_6, 0x00000003, 90f, 0x00000001);
					}
				}
				Local_56.f_2 = 0x00000001;
			}
		}
		else
		{
			unk_0x9992C3A6A1766168(Local_56.f_1, 0.5f);
			Local_56.f_11 = { vVar0 };
			unk_0xD1F0F33C375B8446(Local_56.f_1, Local_56, 0x00000006, 0x00003A98);
			Local_56.f_2 = 0x00000001;
		}
	}
	else if (!func_19(Local_56.f_1, 0xEFC8537E))
	{
		if (unk_0x8B38C0DAEEDB5F9C(Local_56))
		{
			unk_0xD1F0F33C375B8446(Local_56.f_1, Local_56, 0x00000001, 0x000F4240);
			return 0x00000001;
		}
	}
	else
	{
		if (func_38(vVar0, vLocal_243, 5f))
		{
			if (unk_0x8B38C0DAEEDB5F9C(Local_56) || unk_0xBBB54639BF9AAB8A(Local_56))
			{
				unk_0xD1F0F33C375B8446(Local_56.f_1, Local_56, 0x00000001, 0x000F4240);
				return 0x00000001;
			}
		}
		if (!Local_56.f_3)
		{
			if (!func_38(vVar0, Local_56.f_11, 10f))
			{
				if (func_38(vVar0, vLocal_243, 5f))
				{
					Local_56.f_E = { vLocal_243 };
					Local_56.f_3 = 0x00000001;
					Local_56.f_2 = 0x00000000;
				}
			}
		}
	}
	return 0x00000000;
}

int func_68(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	float fVar8;
	
	iVar4 = 0x00000001;
	if (!func_73(vParam1))
	{
		iVar4 = 0x00000009;
	}
	iVar3 = unk_0xDEC4A70C9F250662(vParam1, 0x00000001, iVar4, 0x40400000, 0x00000000);
	if (unk_0x5DD62183BBF151CD(iVar3))
	{
		unk_0x8502D8EBA9E78216(iVar3, &vVar0);
		if (unk_0x48C17E97DDC41CBC(vVar0, 0x00000000, &vVar1) && unk_0x48C17E97DDC41CBC(vVar0, 0x00000001, &vVar2))
		{
			vVar5 = { vVar1 - vVar0 };
			vVar6 = { -vVar5.y, vVar5.x, 0f };
			vVar7 = { vParam0 - vParam1 };
			fVar8 = func_72(vVar6, vVar7);
			if (fVar8 < 0f)
			{
				*uParam3 = { vVar1 };
				*uParam4 = uParam2;
				if (func_70(uParam3, vVar0))
				{
					Local_56.f_4 = 0x00000001;
				}
			}
			else
			{
				*uParam3 = { vVar2 };
				*uParam4 = (*uParam4 + 180f);
				*uParam4 = func_69(*uParam4, 0f, 360f);
				if (func_70(uParam3, vVar0))
				{
					Local_56.f_4 = 0x00000001;
				}
			}
			return 0x00000001;
		}
		else if (unk_0x48C17E97DDC41CBC(vVar0, 0xFFFFFFFF, &vVar1))
		{
			*uParam3 = { vVar1 };
			*uParam4 = uParam2;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_69(float fParam0, float fParam1, float fParam2)
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

int func_70(var uParam0, vector3 vParam1)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	
	if (!unk_0xE82754C349C7B581(*uParam0, uParam0->f_1, 1000f, &uVar0, 0x00000000, 0x00000000))
	{
		*uParam0 = { vParam1 };
		return 0x00000000;
	}
	vVar1 = { *uParam0, uParam0->f_1, uVar0 };
	if (func_71(vVar1, vParam1))
	{
		vVar2 = { vParam1 - vVar1 / Vector(5f, 5f, 5f) };
		iVar3 = 0x00000001;
		while (iVar3 <= 0x00000005)
		{
			vVar1 = { vVar1 + vVar2 };
			if (!func_71(vVar1, vParam1))
			{
				*uParam0 = { vVar1 };
				return 0x00000001;
			}
			iVar3++;
		}
		*uParam0 = { vParam1 };
		return 0x00000001;
	}
	return 0x00000000;
}

int func_71(vector3 vParam0, vector3 vParam1)
{
	if ((vParam0.z - vParam1.z) > 0.45f || (vParam0.z - vParam1.z) < -0.45f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_72(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_73(vector3 vParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA5A6BB5EBAD59A21(vParam0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0x7F8A39872A07D2CE("SanAnd", sVar0) || unk_0x7F8A39872A07D2CE("Alamo", sVar0)) || unk_0x7F8A39872A07D2CE("ArmyB", sVar0)) || unk_0x7F8A39872A07D2CE("BhamCa", sVar0)) || unk_0x7F8A39872A07D2CE("Baytre", sVar0)) || unk_0x7F8A39872A07D2CE("BradT", sVar0)) || unk_0x7F8A39872A07D2CE("BradP", sVar0)) || unk_0x7F8A39872A07D2CE("CANNY", sVar0)) || unk_0x7F8A39872A07D2CE("CCreak", sVar0)) || unk_0x7F8A39872A07D2CE("ChamH", sVar0)) || unk_0x7F8A39872A07D2CE("CHU", sVar0)) || unk_0x7F8A39872A07D2CE("COSI", sVar0)) || unk_0x7F8A39872A07D2CE("CMSW", sVar0)) || unk_0x7F8A39872A07D2CE("Cypre", sVar0)) || unk_0x7F8A39872A07D2CE("Desrt", sVar0)) || unk_0x7F8A39872A07D2CE("ELGorl", sVar0)) || unk_0x7F8A39872A07D2CE("Galli", sVar0)) || unk_0x7F8A39872A07D2CE("Galfish", sVar0)) || unk_0x7F8A39872A07D2CE("Harmo", sVar0)) || unk_0x7F8A39872A07D2CE("HumLab", sVar0)) || unk_0x7F8A39872A07D2CE("Jail", sVar0)) || unk_0x7F8A39872A07D2CE("LAct", sVar0)) || unk_0x7F8A39872A07D2CE("LDam", sVar0)) || unk_0x7F8A39872A07D2CE("Lago", sVar0)) || unk_0x7F8A39872A07D2CE("MTChil", sVar0)) || unk_0x7F8A39872A07D2CE("MTJose", sVar0)) || unk_0x7F8A39872A07D2CE("MTGordo", sVar0)) || unk_0x7F8A39872A07D2CE("NCHU", sVar0)) || unk_0x7F8A39872A07D2CE("Oceana", sVar0)) || unk_0x7F8A39872A07D2CE("Palmpow", sVar0)) || unk_0x7F8A39872A07D2CE("PBluff", sVar0)) || unk_0x7F8A39872A07D2CE("Paleto", sVar0)) || unk_0x7F8A39872A07D2CE("PalCov", sVar0)) || unk_0x7F8A39872A07D2CE("PalFor", sVar0)) || unk_0x7F8A39872A07D2CE("PalHigh", sVar0)) || unk_0x7F8A39872A07D2CE("RTRAK", sVar0)) || unk_0x7F8A39872A07D2CE("Rancho", sVar0)) || unk_0x7F8A39872A07D2CE("SANDY", sVar0)) || unk_0x7F8A39872A07D2CE("TongvaH", sVar0)) || unk_0x7F8A39872A07D2CE("TongvaV", sVar0)) || unk_0x7F8A39872A07D2CE("Zenora", sVar0)) || unk_0x7F8A39872A07D2CE("Slab", sVar0)) || unk_0x7F8A39872A07D2CE("WindF", sVar0)) || unk_0x7F8A39872A07D2CE("Zancudo", sVar0)) || unk_0x7F8A39872A07D2CE("SanChia", sVar0)) || unk_0x7F8A39872A07D2CE("zQ_UAR", sVar0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_74()
{
	if (func_75())
	{
		Local_56.f_2 = 0x00000000;
		iLocal_53 = 0x00000003;
	}
}

int func_75()
{
	vector3 vVar0;
	
	if (!Local_56.f_2)
	{
		if (func_76(Local_56.f_14, &(Local_56.f_E), &(Local_56.f_6), &(Local_56.f_8), 0x000000FA))
		{
			unk_0xE9362E4D600DD12A(Local_56.f_1, Local_56, Local_56.f_E, 12f, 0x00000000, unk_0x134B62B726CEC8E6(Local_56), Local_56.f_1D, (Local_56.f_7 - 20f), 20f);
			Local_56.f_2 = 0x00000001;
		}
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(Local_56, 0x00000001) };
		if (func_38(vVar0, Local_56.f_E, Local_56.f_7))
		{
			return 0x00000001;
		}
		else if (func_38(vVar0, vLocal_243, 5f))
		{
			Local_56.f_E = { vLocal_243 };
			return 0x00000001;
		}
		else if (!func_19(Local_56.f_1, 0x93A5526E))
		{
			Local_56.f_2 = 0x00000000;
			Local_56.f_8 = 0x00000000;
		}
	}
	return 0x00000000;
}

int func_76(vector3 vParam0, var uParam1, float fParam2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar3 = 0x00000000;
	iVar6 = *uParam3 + 2;
	iVar7 = 0x00000032;
	bVar8 = 0x00000000;
	iVar9 = 0x00000001;
	if (!func_73(vParam0))
	{
		iVar9 = 0x00000009;
	}
	func_97(vParam0, vParam0, &(Local_56.f_17), &(Local_56.f_1A), iParam4);
	if (func_96(Local_56.f_17, Local_56.f_1A))
	{
		if (!func_79(vParam0, uParam1, fParam2, 0x00000001))
		{
			while (!bVar8 && *uParam3 < iVar6)
			{
				if (vParam0.z == 1f)
				{
					fVar0 = 0f;
				}
				if (unk_0x4A13F7D4B1E239A0(vParam0, *uParam3, uParam1, fParam2, &uVar4, iVar9, fVar0, fVar1))
				{
					iVar5 = unk_0xDEC4A70C9F250662(*uParam1, 0x00000001, iVar9, 0x40400000, 0x00000000);
					if (unk_0x5DD62183BBF151CD(iVar5))
					{
						fVar2 = (vParam0.z - uParam1->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_78(vParam0, *uParam1) || fVar2 < 0.5f)
						{
							if (unk_0xDF1306B443CD3D15(Local_56, 0x00000000))
							{
								iVar3 = Local_56;
							}
							if (!unk_0x9868643FAC294133(*uParam1, 3f, 3f, 3f, iVar3))
							{
								bVar8 = 0x00000001;
							}
						}
					}
				}
				*uParam3++;
				if (*uParam3 >= iVar7)
				{
					bVar8 = 0x00000001;
				}
			}
		}
		else
		{
			bVar8 = 0x00000001;
		}
		if (bVar8)
		{
			Local_56.f_5 = func_77(vParam0, *uParam1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_77(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0 = { vParam0 - vParam1 };
	vVar0.z = 0f;
	return SYSTEM::VMAG(vVar0);
}

int func_78(vector3 vParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (vParam1.z - vParam0.z);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (vParam0.z <= 1f)
	{
		func_56("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 0x00000001;
	}
	fVar0 = SYSTEM::VDIST(vParam0, vParam1);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_56("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 0x00000001;
	}
	return 0x00000000;
}

int func_79(vector3 vParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2[6];
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	vector3 vVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	
	if (func_95(vParam0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam1 = { 1261.58f, -3332.685f, 5.4191f };
		*uParam2 = 163.87f;
		return 0x00000001;
	}
	else if (func_95(vParam0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam1 = { -1577.16f, 5166.51f, 19.1864f };
		*uParam2 = 0f;
		return 0x00000001;
	}
	else if (func_95(vParam0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam1 = { -856.6151f, 163.7361f, 65.093f };
		*uParam2 = 355.3355f;
		return 0x00000001;
	}
	else if (func_95(vParam0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam1 = { -15.5181f, -1456.4f, 29.4244f };
		*uParam2 = 94.6893f;
		return 0x00000001;
	}
	else if (func_95(vParam0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam1 = { 1996.372f, 3818.831f, 31.1612f };
		*uParam2 = 170.0221f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -63.5854f, -1074.732f, 26.0995f };
		*uParam2 = 324.1257f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vParam0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 416.871f, -1613.081f, 28.1401f };
		*uParam2 = 227.9333f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0x00000000, 0x00000001) && !unk_0x8CD06866876216F2())
	{
		*uParam1 = { -1039.542f, -2574.467f, 12.7566f };
		*uParam2 = 162.2744f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0x00000000, 0x00000001) && !unk_0x8CD06866876216F2())
	{
		*uParam1 = { -911.1597f, -2676.132f, 12.7567f };
		*uParam2 = 338.9414f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 28f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -211.8546f, -2030.771f, 26.6204f };
		*uParam2 = 154.4302f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 159f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -623.3622f, 3996f, 120.7669f };
		*uParam2 = 37.8784f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 180f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -2294.945f, 376.2506f, 173.4669f };
		*uParam2 = 296.6963f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 10f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -1897.077f, -557.3334f, 10.7279f };
		*uParam2 = 228.7709f;
		if (unk_0x0399732A9EBC368E(vVar1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		else
		{
			vVar2[0x00000000 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			vVar2[0x00000001 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			vVar2[0x00000002 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			vVar2[0x00000003 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			vVar2[0x00000004 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			vVar2[0x00000005 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar3 = 0xFFFFFFFF;
			fVar4 = 99999f;
			iVar6 = 0x00000000;
			while (iVar6 <= 0x00000005)
			{
				fVar5 = SYSTEM::VDIST(vVar2[iVar6 /*3*/], vVar1);
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
					iVar3 = iVar6;
				}
				iVar6++;
			}
			*uParam1 = { vVar2[iVar3 /*3*/] };
			if (iVar3 == 0x00000000)
			{
				*uParam2 = 234.3999f;
			}
			else if (iVar3 == 0x00000001)
			{
				*uParam2 = 232.2255f;
			}
			else if (iVar3 == 0x00000002)
			{
				*uParam2 = 228.2855f;
			}
			else if (iVar3 == 0x00000003)
			{
				*uParam2 = 231.4914f;
			}
			else if (iVar3 == 0x00000004)
			{
				*uParam2 = 230.6703f;
			}
			else if (iVar3 == 0x00000005)
			{
				*uParam2 = 228.7709f;
			}
			return 0x00000001;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 330f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -411.3629f, 1174.587f, 324.6421f };
		*uParam2 = 255.2881f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 20f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0x00000000, 0x00000001))
	{
		iVar0 = (iParam3 % 0x00000008);
		switch (iVar0)
		{
			case 0x00000001:
				*uParam1 = { -1380.101f, 95.1566f, 53.5054f };
				*uParam2 = 4.555f;
				break;
			
			case 0x00000002:
				*uParam1 = { -1379.139f, 84.2472f, 53.0592f };
				*uParam2 = 6.9278f;
				break;
			
			case 0x00000003:
				*uParam1 = { -1378.427f, 74.5077f, 52.6622f };
				*uParam2 = 2.6813f;
				break;
			
			case 0x00000004:
				*uParam1 = { -1384.177f, 73.9207f, 52.7438f };
				*uParam2 = 5.542f;
				break;
			
			case 0x00000005:
				*uParam1 = { -1381.118f, 35.7838f, 52.659f };
				*uParam2 = 7.6687f;
				break;
			
			case 0x00000006:
				*uParam1 = { -1383.741f, 64.1491f, 52.6647f };
				*uParam2 = 2.5572f;
				break;
			
			case 0x00000007:
				*uParam1 = { -1382.616f, 49.6876f, 52.6585f };
				*uParam2 = 3.0185f;
				break;
			
			default:
				*uParam1 = { -1383.299f, 54.4598f, 52.6562f };
				*uParam2 = 6.2155f;
				break;
		}
		return 0x00000001;
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (unk_0x0399732A9EBC368E(vParam0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0x00000000, 0x00000001))
		{
			iVar0 = (iParam3 % 0x00000008);
			switch (iVar0)
			{
				case 0x00000001:
					*uParam1 = { 50.9889f, -1092.525f, 28.2152f };
					*uParam2 = 150.8833f;
					break;
				
				case 0x00000002:
					*uParam1 = { 46.7725f, -1099.751f, 28.1639f };
					*uParam2 = 149.4322f;
					break;
				
				case 0x00000003:
					*uParam1 = { 41.6146f, -1107.742f, 28.1318f };
					*uParam2 = 154.1378f;
					break;
				
				case 0x00000004:
					*uParam1 = { 38.1922f, -1113.394f, 28.1507f };
					*uParam2 = 146.3778f;
					break;
				
				case 0x00000005:
					*uParam1 = { 13.0436f, -1124.767f, 27.7359f };
					*uParam2 = 91.163f;
					break;
				
				case 0x00000006:
					*uParam1 = { 1.4336f, -1125.042f, 27.1705f };
					*uParam2 = 91.0578f;
					break;
				
				case 0x00000007:
					*uParam1 = { -11.1811f, -1125.811f, 26.3688f };
					*uParam2 = 91.866f;
					break;
				
				default:
					*uParam1 = { 21.9431f, -1124.573f, 27.9417f };
					*uParam2 = 91.6961f;
					break;
			}
			return 0x00000001;
		}
		else if (unk_0x0399732A9EBC368E(vParam0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0x00000000, 0x00000001))
		{
			iVar0 = (iParam3 % 0x00000008);
			switch (iVar0)
			{
				case 0x00000001:
					*uParam1 = { -1023.982f, -2489.882f, 19.0755f };
					*uParam2 = 148.7004f;
					break;
				
				case 0x00000002:
					*uParam1 = { -1029.968f, -2500.438f, 19.0803f };
					*uParam2 = 148.7144f;
					break;
				
				case 0x00000003:
					*uParam1 = { -1070.546f, -2570.859f, 19.0836f };
					*uParam2 = 150.0955f;
					break;
				
				case 0x00000004:
					*uParam1 = { -1056.065f, -2545.662f, 19.0809f };
					*uParam2 = 149.5649f;
					break;
				
				case 0x00000005:
					*uParam1 = { -1050.578f, -2536.219f, 19.0824f };
					*uParam2 = 150.7363f;
					break;
				
				case 0x00000006:
					*uParam1 = { -1036.032f, -2510.902f, 19.0794f };
					*uParam2 = 147.2113f;
					break;
				
				case 0x00000007:
					*uParam1 = { -1044.487f, -2525.534f, 19.079f };
					*uParam2 = 150.7597f;
					break;
				
				default:
					*uParam1 = { -1064.5f, -2560.653f, 19.0905f };
					*uParam2 = 150.7081f;
					break;
			}
			return 0x00000001;
		}
		else if (unk_0x0399732A9EBC368E(vParam0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0x00000000, 0x00000001))
		{
			iVar0 = (iParam3 % 0x00000008);
			switch (iVar0)
			{
				case 0x00000001:
					*uParam1 = { -1044.741f, -2528.786f, 12.7568f };
					*uParam2 = 150.9439f;
					break;
				
				case 0x00000002:
					*uParam1 = { -1050.763f, -2539.498f, 12.7566f };
					*uParam2 = 150.851f;
					break;
				
				case 0x00000003:
					*uParam1 = { -1054.952f, -2546.86f, 12.7566f };
					*uParam2 = 149.9285f;
					break;
				
				case 0x00000004:
					*uParam1 = { -1060.397f, -2556.898f, 12.6066f };
					*uParam2 = 150.8244f;
					break;
				
				case 0x00000005:
					*uParam1 = { -1020.744f, -2490.084f, 12.6396f };
					*uParam2 = 148.6134f;
					break;
				
				case 0x00000006:
					*uParam1 = { -1076.904f, -2589.179f, 12.6858f };
					*uParam2 = 149.0112f;
					break;
				
				case 0x00000007:
					*uParam1 = { -1026.387f, -2501.952f, 12.6923f };
					*uParam2 = 149.7553f;
					break;
				
				default:
					*uParam1 = { -1070.506f, -2578.389f, 12.6932f };
					*uParam2 = 148.5232f;
					break;
			}
			return 0x00000001;
		}
		else if (unk_0x0399732A9EBC368E(vParam0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0x00000000, 0x00000001))
		{
			iVar0 = (iParam3 % 0x00000008);
			switch (iVar0)
			{
				case 0x00000001:
					*uParam1 = { -1067.846f, -2708.94f, 19.0588f };
					*uParam2 = 230.9025f;
					break;
				
				case 0x00000002:
					*uParam1 = { -1058.224f, -2716.217f, 19.06f };
					*uParam2 = 237.1285f;
					break;
				
				case 0x00000003:
					*uParam1 = { -1004.567f, -2744.797f, 19.0811f };
					*uParam2 = 255.6885f;
					break;
				
				case 0x00000004:
					*uParam1 = { -1049.509f, -2721.58f, 19.0546f };
					*uParam2 = 242.3581f;
					break;
				
				case 0x00000005:
					*uParam1 = { -1017.154f, -2740.117f, 19.0525f };
					*uParam2 = 243.5798f;
					break;
				
				case 0x00000006:
					*uParam1 = { -1042.087f, -2726.077f, 19.0452f };
					*uParam2 = 240.2381f;
					break;
				
				case 0x00000007:
					*uParam1 = { -1027.353f, -2734.462f, 19.0509f };
					*uParam2 = 239.8703f;
					break;
				
				default:
					*uParam1 = { -1033.74f, -2730.746f, 19.0521f };
					*uParam2 = 239.9237f;
					break;
			}
			return 0x00000001;
		}
		else if (unk_0x0399732A9EBC368E(vParam0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0x00000000, 0x00000001))
		{
			iVar0 = (iParam3 % 0x00000008);
			switch (iVar0)
			{
				case 0x00000001:
					*uParam1 = { -971.9154f, -2749.122f, 12.6069f };
					*uParam2 = 265.8022f;
					break;
				
				case 0x00000002:
					*uParam1 = { -980.6166f, -2748.535f, 12.757f };
					*uParam2 = 263.5472f;
					break;
				
				case 0x00000003:
					*uParam1 = { -987.6072f, -2747.273f, 12.6069f };
					*uParam2 = 257.2886f;
					break;
				
				case 0x00000004:
					*uParam1 = { -1006.815f, -2739.345f, 12.6334f };
					*uParam2 = 242.1315f;
					break;
				
				case 0x00000005:
					*uParam1 = { -1051.83f, -2713.553f, 12.6333f };
					*uParam2 = 239.9312f;
					break;
				
				case 0x00000006:
					*uParam1 = { -1041.004f, -2719.647f, 12.6402f };
					*uParam2 = 240.1081f;
					break;
				
				case 0x00000007:
					*uParam1 = { -1023.832f, -2729.465f, 12.6445f };
					*uParam2 = 239.6737f;
					break;
				
				default:
					*uParam1 = { -1012.848f, -2735.172f, 12.6656f };
					*uParam2 = 237.6545f;
					break;
			}
			return 0x00000001;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 20f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0x00000000, 0x00000001))
	{
		iVar0 = (iParam3 % 0x00000008);
		switch (iVar0)
		{
			case 0x00000001:
				*uParam1 = { 868.1039f, -995.9224f, 29.7369f };
				*uParam2 = 93.132f;
				break;
			
			case 0x00000002:
				*uParam1 = { 859.283f, -996.4102f, 28.7865f };
				*uParam2 = 92.2581f;
				break;
			
			case 0x00000003:
				*uParam1 = { 849.4288f, -997.1062f, 27.5347f };
				*uParam2 = 92.714f;
				break;
			
			case 0x00000004:
				*uParam1 = { 841.1268f, -997.4826f, 26.5744f };
				*uParam2 = 92.8628f;
				break;
			
			case 0x00000005:
				*uParam1 = { 831.2605f, -1009.556f, 25.599f };
				*uParam2 = 268.6186f;
				break;
			
			case 0x00000006:
				*uParam1 = { 844.6506f, -1010.09f, 26.9894f };
				*uParam2 = 270.076f;
				break;
			
			case 0x00000007:
				*uParam1 = { 852.2498f, -1010.132f, 27.8091f };
				*uParam2 = 269.722f;
				break;
			
			default:
				*uParam1 = { 861.4028f, -1010.025f, 28.808f };
				*uParam2 = 270.7686f;
				break;
		}
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 20f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0x00000000, 0x00000001))
	{
		iVar0 = (iParam3 % 0x00000008);
		switch (iVar0)
		{
			case 0x00000001:
				*uParam1 = { 703.2726f, -1067.7f, 21.4765f };
				*uParam2 = 181.3629f;
				break;
			
			case 0x00000002:
				*uParam1 = { 715.2089f, -1070.399f, 21.2708f };
				*uParam2 = 175.4362f;
				break;
			
			case 0x00000003:
				*uParam1 = { 715.2911f, -1059.42f, 21.0876f };
				*uParam2 = 181.0347f;
				break;
			
			case 0x00000004:
				*uParam1 = { 709.6841f, -1086.78f, 21.419f };
				*uParam2 = 233.169f;
				break;
			
			case 0x00000005:
				*uParam1 = { 703.807f, -1057.866f, 21.4152f };
				*uParam2 = 170.1609f;
				break;
			
			case 0x00000006:
				*uParam1 = { 708.1994f, -1048.194f, 21.216f };
				*uParam2 = 134.2729f;
				break;
			
			case 0x00000007:
				*uParam1 = { 711.1124f, -1069.423f, 21.3129f };
				*uParam2 = 177.9198f;
				break;
			
			default:
				*uParam1 = { 703.545f, -1078.718f, 21.3987f };
				*uParam2 = 180.5686f;
				break;
		}
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 31f;
	}
	if (func_92(0x00000003, vVar1))
	{
		if (func_91(vVar1, 0x00000003, 0x00000000, 0x00000000))
		{
			*uParam1 = { -1520.121f, 2731.511f, 16.6437f };
			*uParam2 = 48.1572f;
			return 0x00000001;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 77.2f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 1540.75f, -2051.49f, 76.85f };
		*uParam2 = 255.41f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 51.1739f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 0x00000001, 0x00000001))
	{
		if (func_90(vVar1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam1 = { 1283.326f, -1731.522f, 51.78555f };
			*uParam2 = 275.4274f;
			return 0x00000001;
		}
		if (func_90(vVar1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam1 = { 1334.386f, -1709.762f, 55.70131f };
			*uParam2 = 275.4411f;
			return 0x00000001;
		}
		if (func_90(vVar1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam1 = { 1246.166f, -1750.625f, 45.35691f };
			*uParam2 = 301.2981f;
			return 0x00000001;
		}
		if (func_90(vVar1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*uParam1 = { 1196.272f, -1753.051f, 37.63976f };
			*uParam2 = 209.4354f;
			return 0x00000001;
		}
		*uParam1 = { 1283.326f, -1731.522f, 51.78555f };
		*uParam2 = 275.4274f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 25f;
	}
	if (func_90(vVar1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((unk_0x0399732A9EBC368E(vVar1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vVar1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vVar1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0x00000000, 0x00000001))
		{
			*uParam1 = { -1624.445f, -976.9755f, 12.0175f };
			*uParam2 = 141.167f;
			return 0x00000001;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 10f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -1095.63f, -1577.24f, 3.82f };
		*uParam2 = 216.12f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 114f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0x00000000, 0x00000001))
	{
		iVar0 = 0x00000003;
		switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
		{
			case 0x00000000:
				*uParam1 = { 1369.246f, 1147.653f, 112.7592f };
				*uParam2 = 182.0998f;
				break;
			
			case 0x00000001:
				*uParam1 = { 1360.848f, 1139.121f, 112.7592f };
				*uParam2 = 83.3356f;
				break;
			
			case 0x00000002:
				*uParam1 = { 1364.751f, 1154.367f, 112.7592f };
				*uParam2 = 223.2795f;
				break;
		}
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 40f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 1782.19f, 3300.076f, 40.4593f };
		*uParam2 = 142.426f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 7f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -658.2056f, -1388.789f, 9.499f };
		*uParam2 = 174.6945f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 325f;
	}
	if (SYSTEM::VDIST2(vVar1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*uParam1 = { -142.367f, -895.0251f, 28.191f };
		*uParam2 = 71.6555f;
		return 0x00000001;
	}
	if (!func_81())
	{
		vVar1 = { vParam0 };
		if (vParam0.z == 1f)
		{
			vVar1.z = 36.1141f;
		}
		if (func_92(0x00000007, vVar1))
		{
			if (func_91(vVar1, 0x00000007, 0x00000000, 0x00000000))
			{
				*uParam1 = { -1012.31f, -465.1634f, 36.1141f };
				*uParam2 = 112.1485f;
				return 0x00000001;
			}
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 12.7091f;
	}
	if (func_92(0x00000002, vVar1))
	{
		if (func_91(vVar1, 0x00000002, 0x00000000, 0x00000000))
		{
			iVar0 = 0x00000004;
			if (!unk_0x8CD06866876216F2())
			{
				switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
				{
					case 0x00000000:
						*uParam1 = { -979.95f, -2746.109f, 12.7091f };
						*uParam2 = 91.4929f;
						break;
					
					case 0x00000001:
						*uParam1 = { -1025.193f, -2728.218f, 12.6647f };
						*uParam2 = 239.0041f;
						break;
					
					case 0x00000002:
						*uParam1 = { -1051.315f, -2713.069f, 12.6676f };
						*uParam2 = 236.4666f;
						break;
					
					case 0x00000003:
						*uParam1 = { -1095.742f, -2637.871f, 12.6461f };
						*uParam2 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam3 % 0x00000008);
				switch (iVar0)
				{
					case 0x00000001:
						*uParam1 = { -1023.982f, -2489.882f, 19.0755f };
						*uParam2 = 148.7004f;
						break;
					
					case 0x00000002:
						*uParam1 = { -1029.968f, -2500.438f, 19.0803f };
						*uParam2 = 148.7144f;
						break;
					
					case 0x00000003:
						*uParam1 = { -1070.546f, -2570.859f, 19.0836f };
						*uParam2 = 150.0955f;
						break;
					
					case 0x00000004:
						*uParam1 = { -1056.065f, -2545.662f, 19.0809f };
						*uParam2 = 149.5649f;
						break;
					
					case 0x00000005:
						*uParam1 = { -1050.578f, -2536.219f, 19.0824f };
						*uParam2 = 150.7363f;
						break;
					
					case 0x00000006:
						*uParam1 = { -1036.032f, -2510.902f, 19.0794f };
						*uParam2 = 147.2113f;
						break;
					
					case 0x00000007:
						*uParam1 = { -1044.487f, -2525.534f, 19.079f };
						*uParam2 = 150.7597f;
						break;
					
					default:
						*uParam1 = { -1064.5f, -2560.653f, 19.0905f };
						*uParam2 = 150.7081f;
						break;
					}
			}
			return 0x00000001;
		}
	}
	vVar7 = { -509.5746f, 4938.918f, 146.3271f };
	fVar8 = 232.0109f;
	fVar9 = func_80(vParam0, vVar7);
	vVar10 = { 2450.604f, 5129.224f, 45.9722f };
	fVar11 = 241.1957f;
	fVar12 = func_80(vParam0, vVar10);
	vVar1 = { vParam0 };
	bVar13 = 0x00000000;
	if (vParam0.z == 1f)
	{
		vVar1.z = 400f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 200f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (bVar13)
	{
		*uParam1 = { vVar7 };
		*uParam2 = fVar8;
		if (fVar12 < fVar9)
		{
			*uParam1 = { vVar10 };
			*uParam2 = fVar11;
		}
		return 0x00000001;
	}
	bVar13 = 0x00000000;
	if (vParam0.z == 1f)
	{
		vVar1.z = 700f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 300f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 100f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 65f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (bVar13)
	{
		*uParam1 = { vVar10 };
		*uParam2 = fVar11;
		if (fVar9 < fVar12)
		{
			*uParam1 = { vVar7 };
			*uParam2 = fVar8;
		}
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 6f;
	}
	if (func_38(vVar1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x0399732A9EBC368E(vVar1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vVar1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vVar1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vVar1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vVar1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0x00000000, 0x00000001))
		{
			iVar0 = 0x00000002;
			if (unk_0x09AC81E49EA267F7(0x00000000, iVar0) == 0x00000000)
			{
				*uParam1 = { 29.5582f, -2553.587f, 5.0004f };
				*uParam2 = 253.9545f;
			}
			else
			{
				*uParam1 = { -189.6824f, -2531.649f, 5.0031f };
				*uParam2 = 0.0408f;
			}
			return 0x00000001;
		}
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 28.4f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 445.231f, 6476.948f, 28.4862f };
		*uParam2 = 219.4788f;
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 28.2065f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 498.185f, -1288.535f, 28.1923f };
		*uParam2 = 181.3208f;
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 28.2065f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 504.1738f, -1421.251f, 28.2065f };
		*uParam2 = 83.2905f;
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 73f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 961.3104f, -150.1964f, 73.4016f };
		*uParam2 = 58.9938f;
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 52f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 1118.751f, 262.0209f, 79.8555f };
		*uParam2 = 52.3086f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vVar1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 1134.053f, 53.1835f, 79.7553f };
		*uParam2 = 145.5134f;
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 30.6f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0x00000000, 0x00000001))
	{
		iVar0 = 0x00000002;
		if (unk_0x09AC81E49EA267F7(0x00000000, iVar0) == 0x00000000)
		{
			*uParam1 = { 182.6361f, -753.5836f, 31.8051f };
			*uParam2 = 162.0019f;
		}
		else
		{
			*uParam1 = { 81.5318f, -675.4875f, 30.5695f };
			*uParam2 = 341.8541f;
		}
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 33.5f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vVar1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -88.4f, -660.9f, 35f };
		*uParam2 = -20f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vVar1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 61.4f, -653.2f, 32f };
		*uParam2 = 160f;
		return 0x00000001;
	}
	if (unk_0x0399732A9EBC368E(vParam0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 484.0132f, -3033.162f, 5.0717f };
		*uParam2 = 140.7302f;
		return 0x00000001;
	}
	return 0x00000000;
}

float func_80(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return SYSTEM::VDIST2(Param0, Param0.f_1, 0f, Param2, Param2.f_1, 0f);
}

int func_81()
{
	int iVar0;
	
	iVar0 = func_83();
	if (iVar0 == 0x00000000)
	{
		if (func_82(0x00000041))
		{
			return 0x00000001;
		}
		if (unk_0x8A22C4C08282BF26(joaat("ambient_solomon")) > 0x00000000)
		{
			return 0x00000001;
		}
	}
	else if (iVar0 == 0x00000001)
	{
		if (func_82(0x00000042))
		{
			return 0x00000001;
		}
	}
	else if (iVar0 == 0x00000002)
	{
		if (func_82(0x00000041))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_82(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

int func_83()
{
	func_84();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_84()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_88(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_87(unk_0x16F2683693E537C9());
			if (func_86(iVar0) && (!func_85(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_86(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_85(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_86(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_88(int iParam0)
{
	if (func_86(iParam0))
	{
		return func_89(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_89(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_90(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	
	vVar0 = { vParam1 - vParam0 };
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam2 * fParam2);
}

int func_91(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0x00000000;
	switch (iParam1)
	{
		case 0x00000001:
			vVar0[0x00000000 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0x00000000 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0x00000000] = 171.25f;
			vVar0[0x00000001 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[0x00000001 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[0x00000001] = 132f;
			vVar0[0x00000002 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[0x00000002 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[0x00000002] = 132f;
			iVar3 = 0x00000003;
			break;
		
		case 0x00000002:
			vVar0[0x00000000 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0x00000000 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000000] = 247f;
			vVar0[0x00000001 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[0x00000001 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000001] = 149f;
			vVar0[0x00000002 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[0x00000002 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000002] = 185.5f;
			vVar0[0x00000003 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[0x00000003 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000003] = 250f;
			vVar0[0x00000004 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[0x00000004 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000004] = 193.5f;
			vVar0[0x00000005 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[0x00000005 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000005] = 234.5f;
			vVar0[0x00000006 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[0x00000006 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[0x00000006] = 16f;
			vVar0[0x00000007 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[0x00000007 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000007] = 80f;
			vVar0[0x00000008 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[0x00000008 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000008] = 142f;
			vVar0[0x00000009 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[0x00000009 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000009] = 30.75f;
			vVar0[0x0000000A /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[0x0000000A /*3*/] = { -896.3734f, -3505.715f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000A] = 150f;
			vVar0[0x0000000B /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[0x0000000B /*3*/] = { -1685.626f, -2720.364f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000B] = 29.25f;
			vVar0[0x0000000C /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[0x0000000C /*3*/] = { -1110.198f, -3493.617f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000C] = 43f;
			iVar3 = 0x0000000D;
			break;
		
		case 0x00000003:
			vVar0[0x00000000 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0x00000000 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000000] = 255f;
			vVar0[0x00000001 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[0x00000001 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000001] = 180f;
			vVar0[0x00000002 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[0x00000002 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000002] = 205f;
			vVar0[0x00000003 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[0x00000003 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000003] = 86.25f;
			vVar0[0x00000004 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[0x00000004 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000004] = 150.5f;
			vVar0[0x00000005 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[0x00000005 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000005] = 140.5f;
			vVar0[0x00000006 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[0x00000006 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000006] = 90f;
			vVar0[0x00000007 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[0x00000007 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000007] = 100f;
			vVar0[0x00000008 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[0x00000008 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000008] = 248.75f;
			vVar0[0x00000009 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[0x00000009 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[0x00000009] = 128f;
			vVar0[0x0000000A /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[0x0000000A /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[0x0000000A] = 140f;
			vVar0[0x0000000B /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[0x0000000B /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[0x0000000B] = 16f;
			vVar0[0x0000000C /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[0x0000000C /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[0x0000000C] = 214.25f;
			vVar0[0x0000000D /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[0x0000000D /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[0x0000000D] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0x00000000;
			}
			vVar1[0x00000009 /*3*/].f_2 = (vVar1[0x00000009 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000A /*3*/].f_2 = (vVar1[0x0000000A /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000B /*3*/].f_2 = (vVar1[0x0000000B /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000C /*3*/].f_2 = (vVar1[0x0000000C /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000D /*3*/].f_2 = (vVar1[0x0000000D /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 0x0000000E;
			break;
		
		case 0x00000004:
			vVar0[0x00000000 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0x00000000 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000000] = 114f;
			vVar0[0x00000001 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[0x00000001 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000001] = 88.5f;
			vVar0[0x00000002 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[0x00000002 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000002] = 133.25f;
			vVar0[0x00000003 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[0x00000003 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000003] = 104.5f;
			vVar0[0x00000004 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[0x00000004 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000004] = 121.75f;
			vVar0[0x00000005 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[0x00000005 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000005] = 84.5f;
			vVar0[0x00000006 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[0x00000006 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000006] = 103.75f;
			vVar0[0x00000007 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[0x00000007 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000007] = 104.25f;
			vVar0[0x00000008 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[0x00000008 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000008] = 91f;
			vVar0[0x00000009 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[0x00000009 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000009] = 51.25f;
			iVar3 = 0x0000000A;
			break;
		
		case 0x00000005:
			vVar0[0x00000000 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0x00000000 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000000] = 45.75f;
			vVar0[0x00000001 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[0x00000001 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000001] = 99f;
			vVar0[0x00000002 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[0x00000002 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000002] = 81.5f;
			iVar3 = 0x00000003;
			break;
		
		case 0x00000006:
			vVar0[0x00000000 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0x00000000 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((0x0000000A + iParam2)) };
			fVar2[0x00000000] = 120f;
			vVar0[0x00000001 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[0x00000001 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[0x00000001] = 170f;
			vVar0[0x00000002 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[0x00000002 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[0x00000002] = 12.5f;
			vVar0[0x00000003 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[0x00000003 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[0x00000003] = 9.75f;
			iVar3 = 0x00000004;
			break;
		
		case 0x00000007:
			vVar0[0x00000000 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0x00000000 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000000] = 162f;
			vVar0[0x00000001 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[0x00000001 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000001] = 124f;
			vVar0[0x00000002 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[0x00000002 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000002] = 55f;
			vVar0[0x00000003 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[0x00000003 /*3*/] = { -1073.333f, -498.717f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000003] = 142f;
			iVar3 = 0x00000004;
			break;
		
		case 0x00000008:
			vVar0[0x00000000 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0x00000000 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0x00000000] = 7.75f;
			vVar0[0x00000001 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[0x00000001 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[0x00000001] = 14.75f;
			vVar0[0x00000002 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[0x00000002 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[0x00000002] = 31.5f;
			vVar0[0x00000003 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[0x00000003 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[0x00000003] = 30.5f;
			vVar0[0x00000004 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[0x00000004 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[0x00000004] = 6.75f;
			iVar3 = 0x00000005;
			break;
	}
	iVar4 = 0x00000000;
	while (iVar4 < iVar3)
	{
		if (unk_0x0399732A9EBC368E(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 0x00000001))
		{
			return 0x00000001;
		}
		iVar4++;
	}
	return 0x00000000;
}

bool func_92(int iParam0, vector3 vParam1)
{
	return SYSTEM::VDIST2(vParam1, func_94(iParam0)) < func_93(iParam0);
}

float func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 1000000f;
			break;
		
		case 0x00000002:
			return 1000000f;
			break;
		
		case 0x00000003:
			return 1500000f;
			break;
		
		case 0x00000004:
			return 500000f;
			break;
		
		case 0x00000005:
			return 500000f;
			break;
		
		case 0x00000006:
			return 500000f;
			break;
		
		case 0x00000007:
			return 500000f;
			break;
		
		case 0x00000008:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 0x00000002:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 0x00000003:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 0x00000004:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 0x00000005:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 0x00000006:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 0x00000007:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 0x00000008:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_95(vector3 vParam0, vector3 vParam1, vector3 vParam2)
{
	if (((((vParam0.x > vParam1.x && vParam0.x < vParam2.x) && vParam0.y > vParam1.y) && vParam0.y < vParam2.y) && vParam0.z > vParam1.z) && vParam0.z < vParam2.z)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_96(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	if (unk_0xD1B4D22E0BA9B0C8(Param0, Param0.f_1, Param2, Param2.f_1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_97(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (Param2 <= Param0)
	{
		vVar0.x = Param2;
		vVar1.x = Param0;
	}
	else
	{
		vVar0.x = Param0;
		vVar1.x = Param2;
	}
	if (Param2.f_1 <= Param0.f_1)
	{
		vVar0.y = Param2.f_1;
		vVar1.y = Param0.f_1;
	}
	else
	{
		vVar0.y = Param0.f_1;
		vVar1.y = Param2.f_1;
	}
	vVar0 = { vVar0 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	vVar1 = { vVar1 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	if (!func_98(vVar0, *uParam4, 0x3F000000, 0x00000000) || !func_98(vVar0, *uParam4, 0x3F000000, 0x00000000))
	{
		*uParam4 = { vVar0 };
		*uParam5 = { vVar1 };
	}
	unk_0x10FEEAFF01E32639(*uParam4, uParam4->f_1, *uParam5, uParam5->f_1);
}

int func_98(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_99()
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_41(Local_56.f_9, 0x00002710))
		{
			unk_0x523BCC9DC80CD82F(iLocal_70);
			unk_0x523BCC9DC80CD82F(iLocal_69);
			if (unk_0xB87F6CF6E5628C67(iLocal_70))
			{
				if (unk_0xB87F6CF6E5628C67(iLocal_69))
				{
					if (func_73(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000)))
					{
						if (Local_56.f_A < 0x00000002)
						{
							iVar2 = 0x00000000;
						}
						else if (Local_56.f_A < 0x00000005)
						{
							iVar2 = 0x00000009;
						}
						else
						{
							iVar2 = 0x00000001;
						}
					}
					else if (Local_56.f_A < 0x00000005)
					{
						iVar2 = 0x00000000;
					}
					else
					{
						iVar2 = 0x00000009;
					}
					if (func_101(&vVar0, &fVar1, &(Local_56.f_8), iVar2, 0x41C80000))
					{
						unk_0x536F1BE96C726C4B(vVar0, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						if (func_100(&Local_56, &(Local_56.f_1), vVar0, fVar1))
						{
							Local_56.f_5 = func_77(unk_0x68F4C0EC296D3901(Local_56, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
							Local_56.f_2 = 0x00000000;
							Local_56.f_8 = 0x00000000;
							iLocal_53 = 0x00000002;
						}
					}
					else if (Local_56.f_8 >= 0x00000005)
					{
						Local_56.f_A++;
						if (Local_56.f_A > 0x0000000A)
						{
							func_13();
						}
						else
						{
							Local_56.f_8 = 0x00000000;
							Local_56.f_9 = (unk_0x1C0640BA9A7327B3() - 0x00002328);
						}
					}
				}
			}
		}
	}
}

int func_100(var uParam0, var uParam1, vector3 vParam2, float fParam3)
{
	unk_0x523BCC9DC80CD82F(func_147());
	unk_0x523BCC9DC80CD82F(func_146());
	if (unk_0xB87F6CF6E5628C67(func_146()))
	{
		if (unk_0xB87F6CF6E5628C67(func_147()))
		{
			*uParam0 = unk_0x122AAB0B1D6F55AD(func_146(), vParam2, fParam3, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xC844350D5D58C99A(*uParam0))
			{
				if (unk_0xDF1306B443CD3D15(*uParam0, 0x00000000))
				{
					unk_0xB9FD7450C0DAB575(*uParam0, 0x40A00000);
					unk_0x6301539B96E43BA1(*uParam0, 0x00000001);
					unk_0x4551D324905984CB(*uParam0, 0x00000001);
					unk_0x9A8BCD43DBDDCDCA(*uParam0, 0x00000000, 0x00000000);
					unk_0x120A395B0ECB8EA5(*uParam0, 0x00000001);
					*uParam1 = unk_0x852A19533F896693(*uParam0, 0x00000019, func_147(), 0xFFFFFFFF, 0x00000001, 0x00000001);
					if (unk_0xC844350D5D58C99A(*uParam1))
					{
						if (!unk_0xEB6A8945D1AC98A1(*uParam1))
						{
							unk_0x1AEF7184B203A58D(*uParam0, 5f);
							if (!unk_0xAF6690C489CC6203(*uParam1))
							{
								unk_0x73270B3C9CC833FD(*uParam1, 0x00000001, 0x00000000);
							}
							if (!unk_0xAF6690C489CC6203(*uParam0))
							{
								unk_0x73270B3C9CC833FD(*uParam0, 0x00000001, 0x00000000);
							}
							unk_0x11AD11297DC58CC7(*uParam1, 0x00000001);
							unk_0x4E885A246A9D983A(*uParam1, 0x000000FB, 0x00000001);
							unk_0xAFF39FB306F8E232(*uParam1, 0x00000005, 0x00000000);
							unk_0xAFF39FB306F8E232(*uParam1, 0x00000011, 0x00000001);
							unk_0xBAFED2F6486F771A(*uParam1, 0x00000200, 0x00000000);
							unk_0x4F39CC3882DD074E(*uParam1, "A_M_M_EASTSA_02_LATINO_FULL_01");
							unk_0x71199B01895C6202(func_146());
							unk_0x71199B01895C6202(func_147());
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_101(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	int iVar13;
	vector3 vVar14;
	
	fVar3 = 0f;
	bVar5 = 0x00000001;
	if (iParam3 == 0x00000000)
	{
		bVar5 = 0x00000000;
	}
	bVar6 = 0x00000000;
	iVar7 = 0x00000000;
	fVar8 = 100f;
	fVar9 = 2.5f;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar14 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		iVar13 = func_106(vVar14);
		if (iVar13 != 0x00000006)
		{
			if (func_105(vVar14, iVar13, uParam0, uParam1))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x4A13F7D4B1E239A0(vVar14, *uParam2, &vVar0, &fVar3, &uVar4, iParam3, fVar8, fVar9))
		{
			while (!bVar6 && iVar7 < 0x00000005)
			{
				if (unk_0x8F91E660145F47FF(&vVar0, &vVar1, &vVar2, 0f, 180f, iParam4, bVar5, 0x00000001, 0x00000000))
				{
					fVar3 = func_104(0f, 0f, 0f, vVar2, 0x00000001);
					if (func_102(vVar14, vVar1, 0x43960000, 0x41A00000))
					{
						bVar6 = 0x00000001;
						vVar10 = { unk_0x8A5E176FF719A014(vVar1, fVar3, 0f, 1f, 0f) };
						vVar11 = { vVar10 - vVar1 };
						vVar12 = { vVar0 - vVar1 };
						if (unk_0x07AB02F3C4AE2B04(vVar11.x, vVar11.y, vVar12.x, vVar12.y) > 60f)
						{
							fVar3 = (fVar3 + 180f);
							fVar3 = func_69(fVar3, 0f, 360f);
						}
						*uParam0 = { vVar1 };
						*uParam1 = fVar3;
						return 0x00000001;
					}
					else
					{
						iVar7++;
					}
				}
				else
				{
					iVar7++;
				}
			}
			*uParam2++;
		}
		else
		{
			*uParam2++;
		}
	}
	return 0x00000000;
}

int func_102(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(vParam0, vParam1);
	if (fVar0 >= (fParam2 * fParam2))
	{
		return 0x00000000;
	}
	if (fVar0 <= (fParam3 * fParam3))
	{
		return 0x00000000;
	}
	if (unk_0x8E28E832BEAC3DCE(vParam1, 2.5f))
	{
		return 0x00000000;
	}
	if (unk_0x9868643FAC294133(vParam1, 3f, 3f, 3f, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_103(vParam1, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_103(vector3 vParam0, bool bParam1)
{
	if (func_38(vParam0, -1144.497f, 43.01712f, 51.94447f, 325f))
	{
		if (func_91(vParam0, 0x00000001, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1319.769f, 29.52616f, 49.56616f, -1336.527f, 121.0351f, 75.61888f, 18f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1360.02f, 110.1307f, 52.63413f, -1365.276f, 172.0624f, 72.01312f, 52f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1363.007f, 170.533f, 50.00813f, -1296.903f, 178.8133f, 73.37104f, 35f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1197.521f, 199.8643f, 57.04471f, -1298.04f, 176.1384f, 73.33252f, 34f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1103.745f, 221.1367f, 55.34814f, -1208.394f, 191.0909f, 79.13708f, 45f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -989.0328f, -89.39376f, 32.48801f, -1086.211f, -115.7076f, 50.65051f, 70f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -958.5481f, -111.5455f, 30.76432f, -1132.685f, 190.7841f, 73.90366f, 70f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1077.028f, -139.7337f, 38.73388f, -1299.556f, -15.16894f, 63.4371f, 20f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1319.769f, 29.52616f, 47.56616f, -1287.619f, -24.88864f, 67.5273f, 20f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (func_92(0x00000002, vParam0))
	{
		if (func_91(vParam0, 0x00000002, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (func_92(0x00000003, vParam0))
	{
		if (func_91(vParam0, 0x00000003, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (func_92(0x00000004, vParam0))
	{
		if (func_91(vParam0, 0x00000004, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (func_92(0x00000005, vParam0))
	{
		if (func_91(vParam0, 0x00000005, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (func_92(0x00000006, vParam0))
	{
		if (func_91(vParam0, 0x00000006, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (!func_81())
	{
		if (func_92(0x00000007, vParam0))
		{
			if (func_91(vParam0, 0x00000007, 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	if (func_92(0x00000008, vParam0))
	{
		if (func_91(vParam0, 0x00000008, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (unk_0x0399732A9EBC368E(vParam0, 2591.626f, -268.894f, 111.8859f, 2591.331f, -614.4355f, 55.36921f, 70f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x0399732A9EBC368E(vParam0, -1112.586f, -2674.767f, 12.56804f, -1215.468f, -2854.589f, 19.44588f, 41.25f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x0399732A9EBC368E(vParam0, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x0399732A9EBC368E(vParam0, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vParam0, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	if (((unk_0x0399732A9EBC368E(vParam0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vParam0, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vParam0, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vParam0, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	if (func_38(vParam0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x0399732A9EBC368E(vParam0, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vParam0, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vParam0, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vParam0, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vParam0, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (!bParam1)
	{
		if (unk_0x0399732A9EBC368E(vParam0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vParam0, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_104(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 0x00000001)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_105(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 == 0x00000000)
	{
		iVar2 = 0x00000000;
		iVar3 = 0x00000005;
		iVar2 = 0x00000000;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0x00000000)
			{
				vVar0 = { -883.8992f, 76.3237f, 50.9372f };
				fVar1 = 271.8234f;
			}
			else if (iVar2 == 0x00000001)
			{
				vVar0 = { -838.2045f, 88.1067f, 51.3396f };
				fVar1 = 102.3721f;
			}
			else if (iVar2 == 0x00000002)
			{
				vVar0 = { -884.0715f, 217.2857f, 71.7633f };
				fVar1 = 254.5437f;
			}
			else if (iVar2 == 0x00000003)
			{
				vVar0 = { -834.0018f, 217.2782f, 73.154f };
				fVar1 = 80.7037f;
			}
			else if (iVar2 == 0x00000004)
			{
				vVar0 = { -830.9222f, 135.3548f, 58.1352f };
				fVar1 = 92.957f;
			}
			if (func_102(vParam0, vVar0, 0x43960000, 0x41A00000))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 0x00000001;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 0x00000001)
	{
		iVar2 = 0x00000000;
		iVar3 = 0x00000006;
		iVar2 = 0x00000000;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0x00000000)
			{
				vVar0 = { -1587.096f, -928.5875f, 14.3046f };
				fVar1 = 139.9023f;
			}
			else if (iVar2 == 0x00000001)
			{
				vVar0 = { -1532.458f, -863.667f, 21.6188f };
				fVar1 = 139.9028f;
			}
			else if (iVar2 == 0x00000002)
			{
				vVar0 = { -1472.888f, -733.0396f, 24.0746f };
				fVar1 = 236.3756f;
			}
			else if (iVar2 == 0x00000003)
			{
				vVar0 = { -1397.303f, -781.1235f, 19.3347f };
				fVar1 = 48.1876f;
			}
			else if (iVar2 == 0x00000004)
			{
				vVar0 = { -1605.409f, -1012.578f, 12.0175f };
				fVar1 = 51.1191f;
			}
			else if (iVar2 == 0x00000005)
			{
				vVar0 = { -1572.457f, -1007.106f, 12.0184f };
				fVar1 = 141.2024f;
			}
			if (func_102(vParam0, vVar0, 0x43960000, 0x41A00000))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 0x00000001;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 0x00000002)
	{
		iVar2 = 0x00000000;
		iVar3 = 0x00000004;
		iVar2 = 0x00000000;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0x00000000)
			{
				vVar0 = { -1126.552f, -1530.591f, 3.294f };
				fVar1 = 214.5477f;
			}
			else if (iVar2 == 0x00000001)
			{
				vVar0 = { -1043.019f, -1644.172f, 3.4894f };
				fVar1 = 35.3163f;
			}
			else if (iVar2 == 0x00000002)
			{
				vVar0 = { -1039.345f, -1532.581f, 4.1467f };
				fVar1 = 32.1734f;
			}
			else if (iVar2 == 0x00000003)
			{
				vVar0 = { -1067.577f, -1501.944f, 4.0327f };
				fVar1 = 216.1659f;
			}
			if (func_102(vParam0, vVar0, 0x43960000, 0x41A00000))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 0x00000001;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 0x00000003)
	{
		iVar2 = 0x00000000;
		iVar3 = 0x00000004;
		iVar2 = 0x00000000;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0x00000000)
			{
				vVar0 = { -1247.291f, 2549.53f, 16.4214f };
				fVar1 = 137.1185f;
			}
			else if (iVar2 == 0x00000001)
			{
				vVar0 = { -1314.11f, 2470.677f, 23.3185f };
				fVar1 = 309.2187f;
			}
			else if (iVar2 == 0x00000002)
			{
				vVar0 = { -1095.382f, 2686.487f, 18.5919f };
				fVar1 = 130.0954f;
			}
			else if (iVar2 == 0x00000003)
			{
				vVar0 = { -1373.514f, 2429.944f, 26.7492f };
				fVar1 = 298.9626f;
			}
			if (func_102(vParam0, vVar0, 0x43960000, 0x41A00000))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 0x00000001;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 0x00000004)
	{
		iVar2 = 0x00000000;
		iVar3 = 0x00000005;
		iVar2 = 0x00000000;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0x00000000)
			{
				vVar0 = { 1299.198f, 1164.342f, 105.3728f };
				fVar1 = 3.1765f;
			}
			else if (iVar2 == 0x00000001)
			{
				vVar0 = { 1304.831f, 1084.598f, 104.6453f };
				fVar1 = 8.2195f;
			}
			else if (iVar2 == 0x00000002)
			{
				vVar0 = { 1290.873f, 1237.684f, 107.4217f };
				fVar1 = 186.5802f;
			}
			else if (iVar2 == 0x00000003)
			{
				vVar0 = { 1310.975f, 1001.138f, 104.9354f };
				fVar1 = 359.3654f;
			}
			else if (iVar2 == 0x00000004)
			{
				vVar0 = { 1284.936f, 1355.748f, 103.4301f };
				fVar1 = 182.4582f;
			}
			if (func_102(vParam0, vVar0, 0x43960000, 0x41A00000))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 0x00000001;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 0x00000005)
	{
		iVar2 = 0x00000000;
		iVar3 = 0x00000005;
		iVar2 = 0x00000000;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0x00000000)
			{
				vVar0 = { -1208.617f, -1410.733f, 3.1853f };
				fVar1 = 215.8772f;
			}
			else if (iVar2 == 0x00000001)
			{
				vVar0 = { -1172.9f, -1412.38f, 3.6078f };
				fVar1 = 126.9322f;
			}
			else if (iVar2 == 0x00000002)
			{
				vVar0 = { -1112.842f, -1437.895f, 4.031f };
				fVar1 = 211.4814f;
			}
			else if (iVar2 == 0x00000003)
			{
				vVar0 = { -1079.885f, -1472.878f, 4.0784f };
				fVar1 = 32.9476f;
			}
			else if (iVar2 == 0x00000004)
			{
				vVar0 = { -1086.768f, -1540.707f, 3.5549f };
				fVar1 = 128.3527f;
			}
			if (func_102(vParam0, vVar0, 0x43960000, 0x41A00000))
			{
				*uParam2 = { vVar0 };
				*uParam3 = fVar1;
				return 0x00000001;
			}
			iVar2++;
		}
	}
	return 0x00000000;
}

int func_106(vector3 vParam0)
{
	if (func_95(vParam0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		return 0x00000000;
	}
	if (func_90(vParam0, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if (unk_0x0399732A9EBC368E(vParam0, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x0399732A9EBC368E(vParam0, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (unk_0x0399732A9EBC368E(vParam0, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0x00000000, 0x00000001))
	{
		return 0x00000002;
	}
	if (func_92(0x00000003, vParam0))
	{
		if (func_91(vParam0, 0x00000003, 0x00000000, 0x00000000))
		{
			return 0x00000003;
		}
	}
	if (unk_0x0399732A9EBC368E(vParam0, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0x00000000, 0x00000001))
	{
		return 0x00000004;
	}
	if (unk_0x0399732A9EBC368E(vParam0, -1171.709f, -1524.66f, 23.37969f, -1139.721f, -1573.589f, -1.585432f, 55f, 0x00000000, 0x00000001))
	{
		return 0x00000005;
	}
	return 0x00000006;
}

int func_107()
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (!func_38(vLocal_243, Local_56.f_14, 100f))
	{
		return 0x00000001;
	}
	if (func_87(unk_0x16F2683693E537C9()) != Local_56.f_1E)
	{
		return 0x00000001;
	}
	if (iLocal_55 == 0x00000004)
	{
		return 0x00000001;
	}
	if (iLocal_53 == 0x00000002 || iLocal_53 == 0x00000003)
	{
		if (!func_37(Local_56.f_1))
		{
			return 0x00000001;
		}
		if (!func_39(Local_56))
		{
			return 0x00000001;
		}
		if (!unk_0x82CCEAB29E9451DD(Local_56.f_1, Local_56))
		{
			return 0x00000001;
		}
		if (unk_0xE9FDA1035CFEA94F(Local_56.f_1))
		{
			return 0x00000001;
		}
		if (unk_0x4734A6196B611C3B(Local_56.f_1, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0xB87D13D0C064E9D1(Local_56, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0xB87D13D0C064E9D1(Local_56.f_1, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
		vVar0 = { unk_0x68F4C0EC296D3901(Local_56, 0x00000000) };
		if (unk_0xD3DCEC81D13AAFB1(vVar0, 7f, 0x00000000))
		{
			return 0x00000001;
		}
		fVar1 = 15f;
		vVar2 = { vVar0 };
		vVar3 = { vVar2 };
		vVar2.x = (vVar2.x - fVar1);
		vVar2.y = (vVar2.y - fVar1);
		vVar2.z = (vVar2.z - fVar1);
		vVar3.x = (vVar3.x + fVar1);
		vVar3.y = (vVar3.y + fVar1);
		vVar3.z = (vVar3.z + fVar1);
		if (unk_0x723EE7F83DF1497D(vVar2, vVar3, 0x00000001))
		{
			return 0x00000001;
		}
		if (func_38(vLocal_243, vVar0, 20f))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_56) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_56))
			{
				return 0x00000001;
			}
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	vector3 vVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	var uVar13[12];
	
	if (iLocal_54 == 0x00000000)
	{
		if (func_41(iLocal_66, 0x000001F4))
		{
			iVar1 = 0xFFFFFFFF;
			iVar2 = 0xFFFFFFFF;
			iVar5 = 0x00000000;
			fVar7 = -99999f;
			if (iLocal_55 != 0x00000000 && iLocal_55 != 0x00000001)
			{
				iLocal_60 = 0x00000000;
			}
			if (iLocal_60)
			{
				iVar0 = 0x00000003;
				fVar8 = 35f;
			}
			else
			{
				iVar0 = 0x00000001;
				fVar8 = 10f;
			}
			iVar3 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar13);
			if (iVar3 > 0x00000000)
			{
				iVar4 = 0x00000000;
				while (iVar4 <= (iVar3 - 0x00000001))
				{
					if (iVar5 < iVar0)
					{
						if (unk_0xC844350D5D58C99A(uVar13[iVar4]))
						{
							if (unk_0x134B62B726CEC8E6(uVar13[iVar4]) == iLocal_70)
							{
								vVar9 = { unk_0x68F4C0EC296D3901(uVar13[iVar4], 0x00000000) };
								fVar10 = SYSTEM::VDIST2(vLocal_243, vVar9);
								if (fVar10 <= (fVar8 * fVar8))
								{
									if (func_22(&(uVar13[iVar4]), iLocal_70, iLocal_69))
									{
										if (iVar2 == 0xFFFFFFFF)
										{
											iVar2 = iVar4;
										}
										if (iLocal_60)
										{
											if (uVar13[iVar4] != Global_1B04D)
											{
												if (unk_0x4D570FEF9D230CE7(uVar13[iVar4]) == unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()))
												{
													fVar6 = 1f;
													fVar10 = (fVar10 / fVar10);
													fVar10 = (fVar10 - 35f);
													fVar10 = (fVar10 * -1f);
													fVar10 = (fVar10 / 35f);
													fVar10 = (fVar10 * 0.5f);
													fVar10 = (fVar10 + 0.5f);
													fVar6 = (fVar6 * fVar10);
													fVar10 = (vLocal_243.z - vVar9.z);
													if (fVar10 < 0f)
													{
														fVar10 = (fVar10 * -1f);
													}
													if (fVar10 < 4f)
													{
														vVar11 = { unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()) };
														vVar12 = { vVar9 - vLocal_243 };
														if (((vVar11.x * vVar12.x) + (vVar11.y * vVar12.y)) / SYSTEM::VDIST(vVar12, 0f, 0f, 0f)) > SYSTEM::COS(120f)
														{
															if (unk_0x8E28E832BEAC3DCE(vVar9, 2f))
															{
																fVar6 = (fVar6 * 0.5f);
															}
															if (func_63(&(uVar13[iVar4])))
															{
																fVar6 = (fVar6 * 0.2f);
															}
															if (!unk_0x10BA239D3B8FDC7F(uVar13[iVar4], 0x42B40000) || unk_0x70EED0761B82965E(uVar13[iVar4]))
															{
																fVar6 = 0f;
															}
															if (fVar6 > fVar7)
															{
																fVar7 = fVar6;
																iVar1 = iVar4;
															}
														}
													}
												}
											}
										}
										iVar5++;
									}
								}
								else
								{
									iVar4 = iVar3;
								}
							}
						}
						else
						{
							iVar4 = iVar3;
						}
					}
					else
					{
						iVar4 = iVar3;
					}
					iVar4++;
				}
			}
			if (iVar2 == 0xFFFFFFFF)
			{
				func_109(&iLocal_244, 0x00000000);
				iLocal_244 = 0x00000000;
			}
			else if (iLocal_244 != uVar13[iVar2])
			{
				func_109(&iLocal_244, 0x00000000);
				iLocal_244 = uVar13[iVar2];
				func_109(&iLocal_244, 0x00000001);
			}
			if (iLocal_60)
			{
				if (iVar1 == 0xFFFFFFFF)
				{
					iLocal_245 = 0x00000000;
				}
				else
				{
					iLocal_245 = uVar13[iVar1];
				}
				iLocal_60 = 0x00000000;
			}
			else
			{
				iLocal_60 = 0x00000001;
			}
			iLocal_66 = unk_0x1C0640BA9A7327B3();
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_109(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
		{
			iVar0 = unk_0xA30B8362589C124A(*iParam0, 0xFFFFFFFF, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (unk_0x61C907EA8258B04D(iVar0, func_147()))
				{
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						unk_0x4E885A246A9D983A(iVar0, 0x000000FB, bParam1);
					}
				}
			}
		}
	}
}

void func_110()
{
	if (iLocal_55 == 0x00000002 || iLocal_55 == 0x00000003)
	{
		if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "HAIL_TAXI", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), &cLocal_240, "FP_HAIL_TAXI", 0x00000003))
		{
			func_59();
		}
	}
}

int func_111()
{
	if (!func_3())
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_112()
{
	if (iLocal_52 == 0x00000000)
	{
		if (func_143(0x00000083))
		{
			if (func_141(func_83()))
			{
				func_140();
				func_139(&uLocal_71, 0x00000000, unk_0x16F2683693E537C9(), sLocal_236, 0x00000000, 0x00000001);
				func_139(&uLocal_71, 0x00000001, 0x00000000, "TaxiDispatch", 0x00000000, 0x00000001);
				if (func_133())
				{
					if (func_132(&uLocal_71, 0x00000083, "TAXISAU", sLocal_237, sLocal_237, "TX_2", "TX_2", sLocal_238, sLocal_238, 0x00000002, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_61 = 0x00000000;
						iLocal_52 = 0x00000002;
					}
				}
				else if (func_118(&uLocal_71, 0x00000083, "TAXISAU", sLocal_237, sLocal_237, "TX_2A", "TX_2A", 0x00000002, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_52 = 0x00000001;
				}
			}
		}
	}
	else if (iLocal_52 == 0x00000001)
	{
		if (func_117())
		{
			iLocal_52 = 0x00000000;
		}
	}
	else if (iLocal_52 == 0x00000002)
	{
		if (func_117())
		{
			if (func_116())
			{
				if (!iLocal_61)
				{
					iLocal_52 = 0x00000000;
				}
			}
			else if (func_115())
			{
				if (!iLocal_61)
				{
					iLocal_52 = 0x00000000;
				}
			}
			if (iLocal_52 != 0x00000000)
			{
				if (!func_114(0x00000013))
				{
					func_113(0x00000013);
				}
				func_13();
				Local_56.f_9 = unk_0x1C0640BA9A7327B3();
				Local_56.f_14 = { vLocal_243 };
				Local_56.f_1E = func_87(unk_0x16F2683693E537C9());
				Local_56.f_8 = 0x00000000;
				Local_56.f_A = 0x00000000;
				iLocal_53 = 0x00000001;
				iLocal_52 = 0x00000000;
			}
		}
		else if (!iLocal_61)
		{
			if (unk_0x40EFDB96B3112BA7() == 0x00000001)
			{
				iLocal_61 = 0x00000001;
			}
		}
	}
}

void func_113(int iParam0)
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

int func_114(int iParam0)
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

int func_115()
{
	if (Global_4C0F)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_116()
{
	if (Global_5176 == 0x00000001 || Global_553D == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_117()
{
	if (Global_5145 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_118(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_131(uParam0, iParam1, sParam2, iParam9, iParam10, 0x00000000);
	func_130();
	if (iParam8 == 0x00000001)
	{
		Global_5151 = 0x00000001;
	}
	else
	{
		Global_5151 = 0x00000000;
	}
	uVar0 = 0x0000000A;
	uVar1 = 0x0000000A;
	func_128(0x00000002, &uVar0, &uVar1, sParam3, sParam4, sParam5, sParam6, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	return func_119(&uVar0, &uVar1, iParam7, bParam11);
}

int func_119(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_5146 = 0x00000000;
	if (Global_5145 == 0x00000000 || Global_5147 == 0x00000002)
	{
		if (Global_5145 != 0x00000000)
		{
			if (iParam2 > Global_5147)
			{
				if (bParam3 == 0x00000000)
				{
					unk_0x5CEB4DB888A62073(0x00000000);
					Global_4C1E.f_1 = 0x00000003;
					Global_5145 = 0x00000000;
					Global_5146 = 0x00000001;
					Global_517A = 0x00000000;
					Global_5141 = 0x00000000;
					Global_5142 = 0x00000000;
				}
				else
				{
					func_127();
					return 0x00000000;
				}
			}
			else
			{
				return 0x00000000;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0x00000000;
		}
		if (func_126(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_125();
		Global_4E7E = { Global_4F23 };
		Global_514B = Global_514C;
		Global_5152 = Global_5153;
		Global_280002 = Global_280001;
		Global_5154 = { Global_5164 };
		Global_514D = Global_514E;
		Global_5523 = Global_5524;
		Global_552B = { Global_5531 };
		Global_5529 = Global_552A;
		Global_5525 = Global_5526;
		Global_5527 = Global_5528;
		Global_4FC8.f_170 = Global_5520;
		Global_4FC8.f_171 = Global_5521;
		Global_4FC8.f_172 = Global_5522;
		Global_5141 = Global_5142;
		Global_5143 = Global_5144;
		if (Global_5247 == 0x00000000)
		{
			Global_51DF[0x00000000 /*6*/] = { Global_51F9[0x00000000 /*6*/] };
			Global_51DF[0x00000001 /*6*/] = { Global_51F9[0x00000001 /*6*/] };
			Global_5213[0x00000000 /*6*/] = { Global_522D[0x00000000 /*6*/] };
			Global_5213[0x00000001 /*6*/] = { Global_522D[0x00000001 /*6*/] };
			Global_51EC[0x00000000 /*6*/] = { Global_5206[0x00000000 /*6*/] };
			Global_51EC[0x00000001 /*6*/] = { Global_5206[0x00000001 /*6*/] };
			Global_5220[0x00000000 /*6*/] = { Global_523A[0x00000000 /*6*/] };
			Global_5220[0x00000001 /*6*/] = { Global_523A[0x00000001 /*6*/] };
		}
		if (Global_514B)
		{
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000014);
			unk_0x0674E58A79778E99(&Global_1CBD, 0x00000011);
			unk_0x0674E58A79778E99(&Global_1CBE, 0x00000000);
			if (bParam3)
			{
				func_124();
				if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
				{
					if (iParam2 == 0x0000000D)
					{
					}
					else
					{
						return 0x00000000;
					}
				}
				if (Global_4C1E.f_1 > 0x00000003)
				{
					return 0x00000000;
				}
			}
			if (Global_4BFC == 0x00000001)
			{
				return 0x00000000;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (func_123())
				{
					return 0x00000000;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0x00000000;
				}
				if (!Global_12B4E)
				{
					if (Global_5247 == 0x00000000)
					{
						if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
						{
							return 0x00000000;
						}
						if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
						{
							return 0x00000000;
						}
						if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
						{
							return 0x00000000;
						}
						if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
						{
							return 0x00000000;
						}
					}
				}
			}
			if (func_122())
			{
				return 0x00000000;
			}
			else
			{
				switch (Global_4C1E.f_1)
				{
					case 0x00000007:
						return 0x00000000;
						break;
					
					case 0x00000008:
						return 0x00000000;
						break;
					
					case 0x00000009:
						break;
					
					case 0x0000000A:
						break;
					
					default:
						break;
					}
			}
			func_121();
			Global_514F = bParam3;
		}
		Global_5147 = iParam2;
		if (Global_5141 > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_5141)
			{
				StringCopy(&(Global_4FC8.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_4FC8.f_BB[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_4CD7 = 0x00000000;
		func_120();
		return 0x00000001;
	}
	if (Global_5145 == 0x00000005)
	{
		return 0x00000000;
	}
	if (iParam2 < Global_5147 || iParam2 == Global_5147)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000002)
	{
	}
	else
	{
		func_127();
	}
	return 0x00000000;
}

void func_120()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000045)
	{
		StringCopy(&(Global_4CD9[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(0x00000000);
	Global_5145 = 0x00000001;
}

void func_121()
{
	Global_517A = Global_5179;
	Global_5174 = Global_5175;
	Global_51A3 = { Global_5197 };
	Global_51A9 = { Global_519D };
	Global_517C = Global_517B;
	Global_51C1 = { Global_51AF };
	Global_51C7 = { Global_51B5 };
	Global_51CD = { Global_51BB };
	Global_51D3 = { Global_51D9 };
	Global_1A0F = Global_1A10;
	Global_1A11 = Global_1A12;
	Global_5150 = Global_5151;
	Global_5152 = Global_5153;
	Global_5154 = { Global_5164 };
	Global_5149 = Global_514A;
	Global_553D = 0x00000000;
	Global_5176 = 0x00000000;
	Global_5177 = 0x00000000;
	unk_0x0674E58A79778E99(&Global_1CBD, 0x00000010);
}

int func_122()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_123()
{
	int iVar0;
	int iVar1;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000000;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 0x00000001);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 0x00000001;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 0x0000004E, 0x00000001))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_124()
{
	if (func_85(0x0000000E))
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
		Global_4C1E = func_83();
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

void func_125()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000F)
	{
		Global_4E7E[iVar0 /*10*/] = 0x00000000;
		StringCopy(&(Global_4E7E[iVar0 /*10*/].f_1), "", 24);
		Global_4E7E[iVar0 /*10*/].f_7 = 0x00000000;
		Global_4E7E[iVar0 /*10*/].f_8 = 0x00000000;
		iVar0++;
	}
	Global_4E7E.f_A1 = 0xFFFFFF9D;
	Global_4E7E.f_A2 = { 0f, 0f, 0f };
}

bool func_126(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam1 > 0xFFFFFFFF)
			{
				return Global_150392.f_CB[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_418, iParam0);
}

void func_127()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if ((unk_0x1EE04CEA36EF313B() || Global_4C1E.f_1 == 0x00000009) || Global_4C1D == 0x00000001)
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
		Global_4C1E.f_1 = 0x00000003;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000001);
		Global_5145 = 0x00000006;
		return;
	}
}

void func_128(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_129(iParam0);
	(*uParam1)[0x00000000] = uParam3;
	(*uParam2)[0x00000000] = uParam4;
	(*uParam1)[0x00000001] = uParam5;
	(*uParam2)[0x00000001] = uParam6;
	(*uParam1)[0x00000002] = iParam7;
	(*uParam2)[0x00000002] = iParam8;
	(*uParam1)[0x00000003] = iParam9;
	(*uParam2)[0x00000003] = iParam10;
	(*uParam1)[0x00000004] = iParam11;
	(*uParam2)[0x00000004] = iParam12;
	(*uParam1)[0x00000005] = iParam13;
	(*uParam2)[0x00000005] = iParam14;
	(*uParam1)[0x00000006] = iParam15;
	(*uParam2)[0x00000006] = iParam16;
}

void func_129(var uParam0)
{
	Global_5142 = uParam0;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_552A = 0x00000000;
	Global_280001 = 0x00000000;
}

void func_130()
{
	Global_5175 = 0x00000000;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_5153 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000000;
	Global_517B = 0x00000000;
	Global_280001 = 0x00000000;
}

void func_131(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = uParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = iParam5;
	if (iParam3 == 0x00000000)
	{
		Global_5520 = 0x00000001;
		Global_551E = 0x00000000;
	}
	else
	{
		Global_5520 = 0x00000000;
		Global_551E = 0x00000001;
	}
	if (iParam4 == 0x00000000)
	{
		Global_5521 = 0x00000001;
		Global_551F = 0x00000000;
	}
	else
	{
		Global_5521 = 0x00000000;
		Global_551F = 0x00000001;
	}
}

bool func_132(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	var uVar0;
	var uVar1;
	
	func_131(uParam0, iParam1, sParam2, iParam11, iParam12, 0x00000000);
	func_130();
	if (iParam10 == 0x00000001)
	{
		Global_5151 = 0x00000001;
	}
	else
	{
		Global_5151 = 0x00000000;
	}
	uVar0 = 0x0000000A;
	uVar1 = 0x0000000A;
	func_128(0x00000003, &uVar0, &uVar1, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	return func_119(&uVar0, &uVar1, iParam9, bParam13);
}

int func_133()
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	
	if (iLocal_53 != 0x00000000)
	{
		return 0x00000000;
	}
	if (iLocal_55 == 0x00000004 || iLocal_55 == 0x00000002)
	{
		return 0x00000000;
	}
	if (iLocal_54 != 0x00000000)
	{
		return 0x00000000;
	}
	if (unk_0x1727A44C562FBED2(iLocal_239))
	{
		return 0x00000000;
	}
	if (!func_111())
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0xE934758D273C899A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
		{
			return 0x00000000;
		}
	}
	func_134();
	fVar1 = 50f;
	iVar2 = 0x00000001;
	if (!func_73(vLocal_243))
	{
		iVar2 = 0x00000009;
	}
	if (!unk_0xDE5F9F54005367A1(vLocal_243, &vVar0, iVar2, 100f, 2.5f))
	{
		return 0x00000000;
	}
	if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vVar0, fVar1, fVar1, 20f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_103(vLocal_243, 0x00000001))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_134()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = func_83();
		if (func_86(iVar0))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			iVar2 = 0x00000000;
			while (iVar2 < Global_1B416.f_1E03.f_88)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03[iVar2 /*15*/].f_2, iVar0))
				{
					if (func_137(vVar1, func_138(iVar2)))
					{
						return 0x00000001;
					}
				}
				iVar2++;
			}
			iVar2 = 0x00000000;
			while (iVar2 < Global_1B416.f_1E03.f_2FC)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_2, iVar0))
				{
					if (func_137(vVar1, func_136(iVar2)))
					{
						return 0x00000001;
					}
				}
				iVar2++;
			}
			iVar2 = 0x00000000;
			while (iVar2 < Global_1B416.f_1E03.f_362)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_2FD[iVar2 /*10*/].f_2, iVar0))
				{
					if (func_137(vVar1, func_135(iVar2)))
					{
						return 0x00000001;
					}
				}
				iVar2++;
			}
		}
	}
	return 0x00000000;
}

int func_135(int iParam0)
{
	return Global_1B416.f_1E03.f_2FD[iParam0 /*10*/].f_7;
}

int func_136(int iParam0)
{
	return Global_1B416.f_1E03.f_28B[iParam0 /*14*/].f_7;
}

int func_137(vector3 vParam0, int iParam1)
{
	if (iParam1 != 0xFFFFFFFF)
	{
		if (iParam1 >= Global_A1D8)
		{
			return 0x00000000;
		}
		if (SYSTEM::VDIST2(vParam0, Global_A1D8[iParam1 /*5*/]) <= (Global_A1D8[iParam1 /*5*/].f_3 * Global_A1D8[iParam1 /*5*/].f_3))
		{
			return 0x00000001;
		}
		else if (Global_A1D8[iParam1 /*5*/].f_4 != 0xFFFFFFFF)
		{
			return func_137(vParam0, Global_A1D8[iParam1 /*5*/].f_4);
		}
	}
	return 0x00000000;
}

int func_138(int iParam0)
{
	return Global_1B416.f_1E03[iParam0 /*15*/].f_7;
}

void func_139(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 0x00000001;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_12B4E)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0x00000000)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0x00000000);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 0x00000001);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0x00000000)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0x00000000);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 0x00000001);
			}
		}
	}
}

void func_140()
{
	int iVar0;
	
	iVar0 = func_83();
	if (iVar0 == 0x00000000)
	{
		sLocal_236 = "MICHAEL";
		sLocal_237 = "TX_1M";
		sLocal_238 = "TX_3M";
	}
	else if (iVar0 == 0x00000001)
	{
		sLocal_236 = "FRANKLIN";
		sLocal_237 = "TX_1F";
		sLocal_238 = "TX_3F";
	}
	else if (iVar0 == 0x00000002)
	{
		sLocal_236 = "TREVOR";
		sLocal_237 = "TX_1T";
		sLocal_238 = "TX_3T";
	}
}

int func_141(int iParam0)
{
	if ((iParam0 == 0x00000000 || iParam0 == 0x00000001) || iParam0 == 0x00000002)
	{
		if (func_142(0x00000083, iParam0) == 0x00000001)
		{
			return 0x00000001;
		}
	}
	else if (iParam0 == func_14())
	{
		if ((func_142(0x00000083, 0x00000000) == 0x00000001 || func_142(0x00000083, 0x00000001) == 0x00000001) || func_142(0x00000083, 0x00000002) == 0x00000001)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_142(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

int func_143(int iParam0)
{
	if ((Global_559F || Global_559E) || Global_55A0)
	{
		if (iParam0 == 0x00000082)
		{
		}
		else
		{
			return 0x00000000;
		}
	}
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (Global_4C1E.f_1 == 0x0000000A)
		{
			if (Global_1A0F == iParam0)
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
	return 0x00000000;
}

int func_144()
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (Global_175B0 == 0x00000001)
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (Global_1B061)
	{
		return 0x00000000;
	}
	if (Global_4)
	{
		return 0x00000000;
	}
	if (unk_0x28CDCD4EC82F21C0())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_145()
{
	func_6();
	func_4(0x00000001);
	unk_0x8D17794CE3273D70(&cLocal_240);
	unk_0xAB8E2DDC7AF955E0(joaat("taxi"), 0x00000000);
	unk_0x71199B01895C6202(iLocal_70);
	unk_0x71199B01895C6202(iLocal_69);
	if (iLocal_58)
	{
		if (unk_0x8C74DE122769E1BF())
		{
			unk_0x29D5132FBDCF2B1E(0x00000000);
		}
	}
}

int func_146()
{
	return joaat("taxi");
}

int func_147()
{
	return joaat("a_m_y_stlat_01");
}

