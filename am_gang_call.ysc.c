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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	struct<55> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_64 = 0;
	struct<5> Local_65[32];
	int iLocal_66 = 0;
	int iLocal_67[3] = { 0, 0, 0 };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	vector3 vLocal_73 = { 0f, 0f, 0f };
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 16;
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
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<21> Local_257 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_69 = 0xFFFFFFFF;
	iLocal_72 = 0xFFFFFFFF;
	if (unk_0x8CD06866876216F2())
	{
		func_554(ScriptParam_257);
	}
	while (0x00000001)
	{
		func_553();
		if (func_543())
		{
			func_540();
		}
		iLocal_74 = unk_0x2B6E0A53779D29EA();
		func_531();
		func_528();
		func_523();
		func_522();
		switch (func_521(unk_0x6E61BE9E61434AC1()))
		{
			case 0x00000000:
				if (func_520() == 0x00000001)
				{
					Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 0x00000001;
				}
				else if (func_520() == 0x00000004)
				{
					Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 0x00000003;
				}
				break;
			
			case 0x00000001:
				if (func_520() == 0x00000001)
				{
					func_514();
				}
				else if (func_520() == 0x00000000)
				{
					func_508();
					Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 0x00000000;
				}
				else if (func_520() == 0x00000004)
				{
					Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 0x00000003;
				}
				break;
			
			case 0x00000003:
				func_483();
				func_481(&(Local_63.f_36));
				if (func_480(&(Local_63.f_36)))
				{
					iVar0 = 0x00000000;
					while (iVar0 < func_479(iLocal_69))
					{
						func_483();
						iVar0++;
					}
					Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 0x00000004;
				}
				break;
			
			case 0x00000002:
				Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 0x00000004;
			
			case 0x00000004:
				func_260();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			func_258();
			func_257();
			func_256();
			switch (func_520())
			{
				case 0x00000000:
					func_255();
					if (func_251())
					{
						if (!unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000000))
						{
							func_249(unk_0x9539D44F3E4492F6(iLocal_71));
						}
						else
						{
							Local_63.f_24 = { vLocal_73 };
						}
						unk_0x0674E58A79778E99(&(Local_63.f_2), 0x00000006);
						Local_63 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					if (func_65())
					{
						func_64();
						func_63();
					}
					func_45();
					break;
				
				case 0x00000004:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_520() < 0x00000004)
	{
		if (func_22())
		{
			iLocal_75 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 <= (func_479(iLocal_69) - 0x00000001))
			{
				func_2();
				iVar0++;
			}
			Local_63 = 0x00000004;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<14> Var1;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iLocal_75 /*7*/].f_2, 0x00000001) || unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iLocal_75 /*7*/].f_2, 0x00000006))
	{
		if (unk_0xE9F78D191AD5EDBA(Local_63.f_A[iLocal_75 /*7*/]))
		{
			if (unk_0xC844350D5D58C99A(unk_0x1B50683925F00106(Local_63.f_A[iLocal_75 /*7*/])))
			{
				if (unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_63.f_A[iLocal_75 /*7*/]), 0x00000000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iLocal_75 /*7*/].f_2, 0x00000006))
					{
						if (iLocal_69 == 0x00000000)
						{
							Local_63.f_30++;
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000C))
							{
								if (unk_0x39DDAA68EF6A6BF4(Local_63.f_A[iLocal_75 /*7*/], &uVar0) == iLocal_71)
								{
									unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x0000000C);
								}
							}
							if ((Local_63.f_2A == iLocal_75 && !unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000005)) || Local_63.f_30 == func_479(iLocal_69))
							{
								Var1.f_2 = 0xD26CD81A;
								Var1.f_A = iLocal_71;
								Var1.f_B = iLocal_70;
								if (func_479(iLocal_69) > 0x00000001)
								{
									Var1.f_C = unk_0x117658E336116132(0x00000001);
								}
								else
								{
									Var1.f_C = unk_0x117658E336116132(0x00000000);
								}
								Var1.f_3 = Local_63.f_2B;
								func_20(Var1, func_21(0x00000001));
								if (Local_63.f_2A == iLocal_75)
								{
									unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000005);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000005))
							{
								Var1.f_2 = 0xD1D9EC98;
								Var1.f_B = iLocal_70;
								func_20(Var1, func_21(0x00000001));
							}
						}
						unk_0x5D96D8530B3D0904(&(Local_63.f_A[iLocal_75 /*7*/].f_2), 0x00000006);
					}
				}
				else
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iLocal_75 /*7*/].f_2, 0x00000005))
					{
						unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000002);
					}
					unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000001);
				}
			}
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000001);
		unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000002);
	}
	func_3(iLocal_75);
	iLocal_75++;
	if (iLocal_75 >= func_479(iLocal_69))
	{
		iLocal_75 = 0x00000000;
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000001))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000001);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000002))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000009))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000009);
				}
			}
		}
		unk_0x0674E58A79778E99(&iLocal_66, 0x00000001);
		unk_0x0674E58A79778E99(&iLocal_66, 0x00000002);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0xBFF81ED3B99522C7())
	{
		if (unk_0xE9F78D191AD5EDBA(Local_63.f_A[iParam0 /*7*/]))
		{
			iVar0 = unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]);
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000009))
				{
					bVar2 = 0x00000000;
					switch (Local_63.f_A[iParam0 /*7*/].f_1)
					{
						case 0x00000000:
							if (func_19(iVar0, 0x00000003))
							{
								bVar2 = 0x00000001;
							}
							break;
					}
					if (bVar2)
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_A[iParam0 /*7*/].f_2), 0x00000009);
					}
				}
				switch (Local_63.f_A[iParam0 /*7*/].f_5)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						if (Local_63.f_A[iParam0 /*7*/].f_4 == 0x00000000)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000007))
							{
								if ((((unk_0x1C97A5F82B15E49A(iVar0) == 0x00000002 || (Global_25033E[iLocal_71 /*421*/].f_EC != 0xFFFFFFFF && func_18(Global_25033E[iLocal_71 /*421*/].f_EC) == 0x00000004)) || Global_184507[iLocal_71 /*876*/].f_2EC) || func_16(iLocal_71, 0x00000000)) || func_9(iLocal_71))
								{
									Local_63.f_A[iParam0 /*7*/].f_3 = iLocal_74;
									unk_0x5D96D8530B3D0904(&(Local_63.f_A[iParam0 /*7*/].f_2), 0x00000007);
								}
							}
							else if ((((unk_0x1C97A5F82B15E49A(iVar0) != 0x00000002 && Global_25033E[iLocal_71 /*421*/].f_EC == 0xFFFFFFFF) && !Global_184507[iLocal_71 /*876*/].f_2EC) && !func_16(iLocal_71, 0x00000000)) && !func_9(iLocal_71))
							{
								unk_0x0674E58A79778E99(&(Local_63.f_A[iParam0 /*7*/].f_2), 0x00000007);
							}
							else if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_A[iParam0 /*7*/].f_3) > 0x00002710 || unk_0x1C97A5F82B15E49A(iVar0) != 0x00000002)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000A))
								{
									unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x0000000A);
									Local_63.f_27 = { func_8(iLocal_71) };
									iVar1 = 0x00000000;
									iVar1 = 0x00000000;
									while (iVar1 < func_479(iLocal_69))
									{
										func_7(iVar1, 0x00000003);
										iVar1++;
									}
								}
							}
							if (unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000002))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000003))
								{
									if (unk_0x504A57ECC0B1E81C(iVar0) == 3f && !unk_0x24129324CD7C13D0(iVar0, 0x00000076, 0x00000001))
									{
										unk_0x5D96D8530B3D0904(&(Local_63.f_A[iParam0 /*7*/].f_2), 0x00000003);
									}
								}
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000001))
						{
							unk_0x5D96D8530B3D0904(&(Local_63.f_A[iParam0 /*7*/].f_2), 0x00000002);
							func_7(iParam0, 0x00000003);
						}
						else if (func_6(iLocal_71, 0x00000001, 0x00000001))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000002))
							{
								if (func_5(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000001), 25f) || !func_5(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000001), 625f))
								{
									unk_0x5D96D8530B3D0904(&(Local_63.f_A[iParam0 /*7*/].f_2), 0x00000002);
								}
							}
							if (func_4(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000001)) || (unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x9539D44F3E4492F6(iLocal_71)))
							{
								func_7(iParam0, 0x00000002);
							}
						}
						break;
					
					case 0x00000002:
						if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000001))
						{
							unk_0x5D96D8530B3D0904(&(Local_63.f_A[iParam0 /*7*/].f_2), 0x00000002);
							func_7(iParam0, 0x00000003);
						}
						else if (func_6(iLocal_71, 0x00000001, 0x00000001))
						{
							if (!func_4(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000001)) && !(unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x9539D44F3E4492F6(iLocal_71)))
							{
								func_7(iParam0, 0x00000001);
							}
						}
						break;
					
					case 0x00000003:
						if (Local_63.f_A[iParam0 /*7*/].f_4 == 0x00000000)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000004))
							{
								if (unk_0x24129324CD7C13D0(iVar0, 0x00000076, 0x00000001))
								{
									unk_0x5D96D8530B3D0904(&(Local_63.f_A[iParam0 /*7*/].f_2), 0x00000004);
								}
							}
						}
						break;
					
					case 0x00000004:
						break;
					}
				}
			}
	}
}

int func_4(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0x755FF954DAE327E1((vParam1.z - vParam0.z)) < 2f)
	{
		vVar0.x = vParam0.x;
		vVar0.y = vParam0.y;
		vVar1.x = vParam1.x;
		vVar1.y = vParam1.y;
		if (func_5(vVar0, vVar1, 2f))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_5(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (SYSTEM::VDIST2(vParam0, vParam1) < fParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
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

void func_7(int iParam0, int iParam1)
{
	Local_63.f_A[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x40B8C182D63932FC(iParam0))
	{
		if (func_14(iParam0, 0x00000001))
		{
			iVar0 = unk_0x9539D44F3E4492F6(iParam0);
			iVar1 = func_11(iParam0);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(iVar0, iVar1, 0x00000000))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003) && unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000011))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_11(int iParam0)
{
	if (func_14(iParam0, 0x00000001))
	{
		return Global_26B66F.f_1404.f_DE[func_12(iParam0)];
	}
	return 0x00000000;
}

int func_12(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_13();
}

int func_13()
{
	return 0xFFFFFFFF;
}

bool func_14(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_13())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 0x00000001, 0x00000001))
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0x405E212DDE472467(iVar0, iParam1))
		{
			if (func_17(unk_0x6937EA2286828455(iVar0, iParam1), 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_17(int iParam0, bool bParam1)
{
	if (Global_12B4E)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0x00000000)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000006;
			break;
		
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000000;
			break;
		
		case 0x00000003:
			return 0x00000000;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000000;
			break;
		
		case 0x00000006:
			return 0x00000000;
			break;
		
		case 0x00000032:
			return 0x00000000;
			break;
		
		case 0x00000007:
			return 0x00000001;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000001;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000001;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000001;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000001;
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
			return 0x00000002;
			break;
		
		case 0x00000017:
			return 0x00000002;
			break;
		
		case 0x00000018:
			return 0x00000002;
			break;
		
		case 0x00000019:
			return 0x00000002;
			break;
		
		case 0x0000001A:
			return 0x00000002;
			break;
		
		case 0x0000001B:
			return 0x00000002;
			break;
		
		case 0x0000001C:
			return 0x00000003;
			break;
		
		case 0x0000001D:
			return 0x00000003;
			break;
		
		case 0x0000001E:
			return 0x00000003;
			break;
		
		case 0x0000001F:
			return 0x00000003;
			break;
		
		case 0x00000020:
			return 0x00000003;
			break;
		
		case 0x00000021:
			return 0x00000003;
			break;
		
		case 0x00000022:
			return 0x00000003;
			break;
		
		case 0x00000023:
			return 0x00000003;
			break;
		
		case 0x00000024:
			return 0x00000003;
			break;
		
		case 0x00000025:
			return 0x00000003;
			break;
		
		case 0x00000026:
			return 0x00000003;
			break;
		
		case 0x00000027:
			return 0x00000004;
			break;
		
		case 0x00000028:
			return 0x00000004;
			break;
		
		case 0x00000029:
			return 0x00000004;
			break;
		
		case 0x0000002A:
			return 0x00000004;
			break;
		
		case 0x0000002B:
			return 0x00000004;
			break;
		
		case 0x0000002C:
			return 0x00000004;
			break;
		
		case 0x0000002D:
			return 0x00000005;
			break;
		
		case 0x0000002E:
			return 0x00000003;
			break;
		
		case 0x0000002F:
			return 0x00000003;
			break;
		
		case 0x00000030:
			return 0x00000003;
			break;
		
		case 0x00000031:
			return 0x00000003;
			break;
		
		case 0x00000034:
			return 0x00000003;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
	}
	return 0x00000006;
}

int func_19(int iParam0, int iParam1)
{
	if (unk_0xF1D385D359D58F72("AttributeDamage", 0x00000003))
	{
		if (unk_0x30F813723591D02E(iParam0, "AttributeDamage"))
		{
			if (unk_0xEAE0D21A50E6C7F4(unk_0x1E2DFB0EF4BB4566(iParam0, "AttributeDamage"), iParam1))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_20(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0x75BF07BC;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Param0, 0x0000000E, iParam13);
	}
}

int func_21(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_6(iVar2, 0x00000000, 0x00000000))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_22()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000000))
	{
		if (iLocal_69 == 0x00000001)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000004))
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x0000000B);
				return 0x00000001;
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000000);
			return 0x00000001;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000002))
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000001);
		unk_0x5D96D8530B3D0904(&Global_193B1F, iLocal_69);
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x0000000C))
	{
		return 0x00000001;
	}
	if (iLocal_69 == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000002);
			return 0x00000001;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000008))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000008);
			return 0x00000001;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000005))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000003);
			return 0x00000001;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000009))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000009);
			return 0x00000001;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x0000000F))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x0000000A);
			return 0x00000001;
		}
	}
	if (!func_6(iLocal_71, 0x00000000, 0x00000001))
	{
		if (iLocal_69 != 0x00000000 || !unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000004);
			return 0x00000001;
		}
	}
	else
	{
		if (func_43(iLocal_71, 0x00000081))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000008);
			return 0x00000001;
		}
		if (func_43(iLocal_71, 0x00000083) || unk_0xEAE0D21A50E6C7F4(Global_18D84D[iLocal_71 /*615*/].f_1, 0x0000000B))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		if (func_43(iLocal_71, 0x00000088) || (func_42(unk_0xD803B885F5E47A62(), 0x00000018) && func_41(iLocal_71)))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		if (func_43(iLocal_71, 0x00000092))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		if (func_40(unk_0xD803B885F5E47A62()) && ((func_39(unk_0xD803B885F5E47A62()) == 0x00000094 || func_39(unk_0xD803B885F5E47A62()) == 0x0000008E) || func_39(unk_0xD803B885F5E47A62()) == 0x000000A4))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		if (func_39(unk_0xD803B885F5E47A62()) == 0x00000099)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		if (func_37(unk_0xD803B885F5E47A62()) && func_39(unk_0xD803B885F5E47A62()) == 0x000000AA)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		if (func_39(unk_0xD803B885F5E47A62()) == 0x000000A7)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		if (func_39(unk_0xD803B885F5E47A62()) == 0x000000A8)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		if (func_37(unk_0xD803B885F5E47A62()) && func_39(unk_0xD803B885F5E47A62()) == 0x000000EE)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		if (func_37(unk_0xD803B885F5E47A62()) && func_39(unk_0xD803B885F5E47A62()) == 0x000000F9)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		switch (func_34(unk_0xD803B885F5E47A62()))
		{
			case 0x00000006:
			case 0x00000007:
				if (func_33())
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
					return 0x00000001;
				}
				break;
		}
		if (func_32(iLocal_71))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		if (func_31(iLocal_71))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			return 0x00000001;
		}
		if (unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000000))
		{
			if (iLocal_69 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000006);
					return 0x00000001;
				}
			}
		}
		else
		{
			if (iLocal_69 == 0x00000001)
			{
				if (func_43(iLocal_71, 0x00000092))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000007);
					return 0x00000001;
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000010))
				{
					if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_9) > func_30())
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000007);
						return 0x00000001;
					}
				}
				if (func_27())
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000007);
					return 0x00000001;
				}
				if (func_23(iLocal_71, func_12(iLocal_70), 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000007);
					return 0x00000001;
				}
			}
			if (iLocal_72 != unk_0x12AB0310C2281427(unk_0x6E524813889AECF8(iLocal_71)))
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x00000005);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_23(int iParam0, int iParam1, bool bParam2)
{
	return func_24(iParam0, iParam1, bParam2, 0x00000001);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0x00000000;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_13())
		{
			if (iParam1 == Global_18D84D[iParam0 /*615*/].f_B)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0x00000000;
}

int func_25(int iParam0, int iParam1)
{
	if (func_15(iParam0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1;
	}
	return 0x00000000;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_13())
			{
				if (Global_18D84D[iParam0 /*615*/].f_B == iParam0)
				{
					if (Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_27()
{
	if (((func_29(iLocal_71, 0x00000001, 0x00000001) || func_42(iLocal_71, 0x00000000)) || func_42(iLocal_71, 0x00000007)) || func_28(iLocal_71))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_28(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0x00000000;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000000))
	{
		return 0x00000001;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (bParam2)
	{
		if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_30()
{
	if (Local_63.f_34)
	{
		return 0x000493E0;
	}
	return 0x0001D4C0;
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_19FCF7[iVar0 /*13*/].f_C != 0x00000000;
	}
	return 0x00000000;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_265BE1;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

bool func_33()
{
	return Global_1801DE;
}

int func_34(int iParam0)
{
	if (func_39(iParam0) == 0x000000F3)
	{
		return func_35(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_35(int iParam0)
{
	if (func_36(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_36(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_38(iParam0, 0x00000009);
	}
	return 0x00000000;
}

bool func_38(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_39(int iParam0)
{
	if (func_36(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_40(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_37(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_41(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000004);
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

int func_43(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/] == iParam1)
	{
		return func_44(iParam0);
	}
	return 0x00000000;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

void func_45()
{
	func_56();
	if (iLocal_69 != 0x00000001)
	{
		func_2();
	}
	func_46();
}

void func_46()
{
	int iVar0;
	
	if (func_6(unk_0x117658E336116132(iLocal_76), 0x00000000, 0x00000001))
	{
		if (iLocal_69 == 0x00000001)
		{
			if (unk_0x117658E336116132(iLocal_76) == iLocal_71)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000010))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 0x00000003))
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000010);
					}
				}
			}
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x0000000B))
			{
				if (func_52(unk_0x117658E336116132(iLocal_76)))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_4, iLocal_76))
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x0000000B);
						unk_0x5D96D8530B3D0904(&(Local_63.f_4), iLocal_76);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_63.f_4, iLocal_76))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x0000000B);
					unk_0x0674E58A79778E99(&(Local_63.f_4), iLocal_76);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 0x00000002))
			{
				unk_0x0674E58A79778E99(&(Local_63.f_1), 0x0000000B);
			}
			if (iLocal_69 == 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 0x00000000))
				{
					if (Local_65[iLocal_76 /*5*/].f_2 != 0xFFFFFFFF)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000001))
						{
							unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000001);
							Local_63.f_2A = Local_65[iLocal_76 /*5*/].f_2;
							Local_63.f_2B = Local_65[iLocal_76 /*5*/].f_3;
							if (!func_51())
							{
								func_50();
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000009))
					{
						if (!func_51())
						{
							func_49();
						}
						iVar0 = 0x00000000;
						while (iVar0 < func_479(iLocal_69))
						{
							func_7(iVar0, 0x00000003);
							iVar0++;
						}
						unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000009);
						unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000001);
					}
				}
				if (func_51())
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000011))
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 0x00000005))
						{
							func_50();
							unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000011);
						}
						else if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 0x00000006))
						{
							func_49();
							unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000011);
						}
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 0x00000001))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000003))
					{
						unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000003);
					}
				}
				else if (unk_0x117658E336116132(iLocal_76) == iLocal_71)
				{
					if (iLocal_69 == 0x00000000)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000001))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000006))
							{
								unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000006);
							}
						}
					}
				}
			}
		}
	}
	iLocal_76++;
	if (iLocal_76 >= 0x00000020)
	{
		iLocal_76 = 0x00000000;
		if (iLocal_69 == 0x00000000)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000003))
			{
				func_48();
			}
			else
			{
				func_47();
			}
			unk_0x0674E58A79778E99(&iLocal_66, 0x00000003);
		}
	}
}

void func_47()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000003))
	{
		unk_0x0674E58A79778E99(&(Local_63.f_2), 0x00000003);
	}
}

void func_48()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000003))
	{
		Local_63.f_6 = iLocal_74;
		unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000003);
	}
}

void func_49()
{
	struct<14> Var0;
	
	Var0.f_2 = 0xA904022C;
	Var0.f_A = iLocal_71;
	Var0.f_B = iLocal_70;
	func_20(Var0, func_21(0x00000001));
}

void func_50()
{
	struct<14> Var0;
	
	Var0.f_2 = 0xCC0CBD2B;
	Var0.f_A = iLocal_71;
	Var0.f_B = iLocal_70;
	if (func_479(iLocal_69) > 0x00000001)
	{
		Var0.f_C = unk_0x117658E336116132(0x00000001);
	}
	else
	{
		Var0.f_C = unk_0x117658E336116132(0x00000000);
	}
	Var0.f_3 = Local_63.f_2B;
	func_20(Var0, func_21(0x00000001));
}

int func_51()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

bool func_52(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return func_55();
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_F1.f_88[func_54(0x0000000A) /*33*/][iParam0], func_53(0x0000000A));
}

int func_53(int iParam0)
{
	return (iParam0 % 0x00000020);
}

int func_54(int iParam0)
{
	return (iParam0 / 0x00000020);
}

var func_55()
{
	return Global_1406A2;
}

void func_56()
{
	int iVar0;
	
	if (iLocal_69 == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000003))
		{
			if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_6) > 0x00002710)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000002);
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000008))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000001))
			{
				if (func_60())
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000006);
					func_59();
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000000))
		{
			if (func_6(iLocal_71, 0x00000001, 0x00000001))
			{
				iVar0 = unk_0x9539D44F3E4492F6(iLocal_71);
				if (func_58(iVar0))
				{
					func_249(iVar0);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000001))
		{
			if (!func_6(iLocal_71, 0x00000001, 0x00000001) || func_28(iLocal_71))
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x0000000F);
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000000))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000005))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000004))
			{
				if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_5) > 0x000927C0)
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000004);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x0000000C))
		{
			if (func_57())
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0x0000000C);
			}
		}
	}
}

int func_57()
{
	switch (Local_63.f_A[0x00000000 /*7*/].f_1)
	{
		case 0x00000000:
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2E2 == 0x00000000)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2E2 == 0x00000001)
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_58(int iParam0)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000011))
	{
		if (!unk_0x70EED0761B82965E(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!func_5(Local_63.f_24, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 625f))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_59()
{
	func_508();
	Local_63 = 0x00000000;
}

int func_60()
{
	if ((((((((unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000006) || unk_0x131F22FE6F47A65D(iLocal_71)) || func_29(iLocal_71, 0x00000001, 0x00000001)) || func_62(iLocal_71)) || func_42(iLocal_71, 0x00000000)) || func_42(iLocal_71, 0x00000007)) || func_28(iLocal_71)) || Global_25033E[iLocal_71 /*421*/].f_EE) || func_61(unk_0x9539D44F3E4492F6(iLocal_71), joaat("titan")))
	{
		return 0x00000001;
	}
	if (iLocal_71 != 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_71 /*5*/].f_1, 0x00000004))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (unk_0x0E0E6175453415CB(iParam0))
			{
				iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (unk_0x134B62B726CEC8E6(iVar0) == iParam1)
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_62(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000E))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000B))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_63()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000005))
	{
		Local_63.f_5 = iLocal_74;
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000005);
	}
}

void func_64()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000005))
	{
		unk_0x0674E58A79778E99(&(Local_63.f_1), 0x00000005);
	}
}

int func_65()
{
	bool bVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000000))
	{
		return 0x00000000;
	}
	else
	{
		bVar0 = 0x00000000;
		if (func_251())
		{
			if (iLocal_69 == 0x00000001)
			{
				bVar0 = 0x00000001;
			}
			else if (func_246())
			{
				if (func_243())
				{
					if (func_242())
					{
						bVar0 = 0x00000001;
					}
					else if (func_240(func_241(iLocal_69)))
					{
						if (func_71())
						{
							bVar0 = 0x00000001;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_63();
			if (func_66())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0xBFF81ED3B99522C7())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000000))
		{
			return 0x00000001;
		}
		else
		{
			switch (iLocal_69)
			{
				case 0x00000000:
					iVar0 = 0x00000000;
					while (iVar0 < func_479(iLocal_69))
					{
						if ((!unk_0xE9F78D191AD5EDBA(Local_63.f_A[iVar0 /*7*/]) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iVar0 /*7*/].f_2, 0x00000001)) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iVar0 /*7*/].f_2, 0x00000006))
						{
							func_67(iVar0, func_70(iLocal_69), Local_63.f_20, Local_63.f_23);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_69 != 0x00000001)
			{
				iVar0 = 0x00000000;
				while (iVar0 < func_479(iLocal_69))
				{
					if (!unk_0xE9F78D191AD5EDBA(Local_63.f_A[iVar0 /*7*/]))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iVar0 /*7*/].f_2, 0x00000006))
						{
							return 0x00000000;
						}
					}
					iVar0++;
				}
			}
			unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000001);
			unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000002);
			unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000003);
			unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000004);
			unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000000);
			unk_0x5D96D8530B3D0904(&Global_193B20, iLocal_69);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_67(int iParam0, var uParam1, vector3 vParam2, float fParam3)
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_63.f_A[iParam0 /*7*/]))
		{
			if (unk_0xA108079788452A90(0x00000000) < unk_0x9BFC2168CB5FCF68(0x00000000, 0x00000000))
			{
				if (unk_0xA3FA8B6D2780D661(0x00000001))
				{
					if (func_240(func_241(iLocal_69)))
					{
						if (func_69(&(Local_63.f_A[iParam0 /*7*/]), 0x00000007, func_241(iLocal_69), vParam2, fParam3, 0x00000001, 0x00000001, 0x00000001))
						{
							Local_63.f_A[iParam0 /*7*/].f_1 = iLocal_69;
							Local_63.f_A[iParam0 /*7*/].f_4 = uParam1;
							func_68(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_68(int iParam0)
{
	char cVar0[16];
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000001))
	{
		if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000000))
		{
			if (Local_63.f_A[iParam0 /*7*/].f_4 == 0x00000000)
			{
				unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), Global_18085A);
				unk_0x291398BF0ED6A2E2(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000001);
				unk_0x08EAEE08061C1898(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000000);
			}
			unk_0xAA6B3A4292417750(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x083F03A847B640E9(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000002);
			unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x0000000D, 0x00000001);
			unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000029, 0x00000001);
			unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000014, 0x00000001);
			unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000084, 0x00000001);
			unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000076, 0x00000000);
			unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000137, 0x00000001);
			unk_0x23CBFFA16CA5CF45(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 300f, 0x0000000A);
			unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000001);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0x5F2AA9E2843E9403(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), &cVar0);
			switch (Local_63.f_A[iParam0 /*7*/].f_4)
			{
				case 0x00000000:
					func_7(iParam0, 0x00000001);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000000, 0x00000000);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000002, 0x00000000);
					unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000002);
					unk_0xB35CCEC0D4946813(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000000);
					unk_0xD5EF6A937E06E46F(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000000, 0xFFFFFFFF, 0x00000000);
					unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000020, 0x00000001);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000004, 0x00000000);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000400, 0x00000001);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000080, 0x00000001);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000020, 0x00000000);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000008, 0x00000000);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000040, 0x00000000);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000100, 0x00000001);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000001, 0x00000000);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000002, 0x00000001);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000010, 0x00000001);
					if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000000))
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_A[iParam0 /*7*/].f_2), 0x00000002);
					}
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000200, 0x00000001);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000011, 0x00000000);
					unk_0x262EF6C6306BEA6C(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), joaat("weapon_knife"), 0x00000001, 0x00000001, 0x00000001);
					unk_0x6D80F1AEBA734886(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000000);
					unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), unk_0x9539D44F3E4492F6(iLocal_71), 0xFFFFFFFF, 0x00000000, 0x00000002);
					unk_0x32DFF210E11D4B0F(Local_63.f_A[iParam0 /*7*/], 0x00000001);
					break;
			}
			unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), SYSTEM::ROUND((Global_40001.f_9A * IntToFloat(unk_0x7F6DC62EA9922664(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]))))), 0x00000000);
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000008))
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000008);
			}
			unk_0x5D96D8530B3D0904(&(Local_63.f_A[iParam0 /*7*/].f_2), 0x00000001);
		}
	}
}

int func_69(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (!unk_0xA3FA8B6D2780D661(0x00000001))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x36F2404464202779(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0xE8C9CB886096272A(iVar0);
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(iVar0, bParam7);
		if (unk_0xECE0BE5313FD8BDA(iVar0))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

int func_71()
{
	struct<6> Var0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000003))
	{
		return 0x00000001;
	}
	else
	{
		switch (iLocal_69)
		{
			case 0x00000000:
				if (unk_0x40B8C182D63932FC(iLocal_71) && func_6(iLocal_71, 0x00000001, 0x00000001))
				{
					Var0.f_5 = 0x42820000;
					Var0.f_D = 0x00000002;
					Var0.f_14 = 0x00000002;
					Var0.f_20 = 0xBF800000;
					Var0.f_22 = 0x00000001;
					Var0 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000001) };
					Var0.f_5 = 20f;
					if (func_72(Local_63.f_24, 40f, &(Local_63.f_20), &(Local_63.f_23), &Var0))
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000003);
						return 0x00000001;
					}
				}
				else
				{
					unk_0xDEED9606C7D093F7();
					unk_0x0FB2CEE58DA4A6EE();
					if (Global_24B2D0.f_9A0)
					{
						unk_0xDA46A23FFDBCF876();
						Global_24B2D0.f_9A0 = 0x00000000;
					}
				}
				break;
			}
	}
	return 0x00000000;
}

int func_72(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 0x00000005;
	Var0.f_10 = 0x00000005;
	Var0.f_16 = 0x00000005;
	Var0.f_1C = 0x00000005;
	Var1.f_10 = 0x00000001;
	Var1.f_16 = 0x00000001;
	Var1.f_17 = 0x00000001;
	Var1.f_18 = 0x00000001;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_B;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0x00000000;
	Var1.f_6 = 0x00000001;
	Var1.f_7 = 0x00000000;
	Var1.f_F = 0x00000000;
	Var1.f_10 = 0x00000001;
	Var1.f_11 = 0x00000000;
	if (func_73(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_C > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0x00000000 /*3*/] };
			if (vVar2.z > uParam4->f_C)
			{
				Var0[0x00000000 /*3*/] = { vParam0 };
				Var0.f_10[0x00000000] = uParam4->f_B;
			}
		}
		*uParam2 = { Var0[0x00000000 /*3*/] };
		*uParam3 = Var0.f_10[0x00000000];
		return 0x00000001;
	}
	return 0x00000000;
}

int func_73(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = 0x00000000;
	switch (uParam0->f_7)
	{
		case 0x00000000:
			if (((!Global_24B2D0.f_99A == *uParam0 || !Global_24B2D0.f_99A.f_1 == uParam0->f_1) || !Global_24B2D0.f_99A.f_2 == uParam0->f_2) || !Global_24B2D0.f_99D == uParam0->f_4)
			{
				bVar13 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (((((!Global_24B2D0.f_9A8 == uParam0->f_8 || !Global_24B2D0.f_9A8.f_1 == uParam0->f_8.f_1) || !Global_24B2D0.f_9A8.f_2 == uParam0->f_8.f_2) || !Global_24B2D0.f_9AB == uParam0->f_B) || !Global_24B2D0.f_9AB.f_1 == uParam0->f_B.f_1) || !Global_24B2D0.f_9AB.f_2 == uParam0->f_B.f_2)
			{
				bVar13 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			if ((((((!Global_24B2D0.f_9A8 == uParam0->f_8 || !Global_24B2D0.f_9A8.f_1 == uParam0->f_8.f_1) || !Global_24B2D0.f_9A8.f_2 == uParam0->f_8.f_2) || !Global_24B2D0.f_9AB == uParam0->f_B) || !Global_24B2D0.f_9AB.f_1 == uParam0->f_B.f_1) || !Global_24B2D0.f_9AB.f_2 == uParam0->f_B.f_2) || !Global_24B2D0.f_9AE == uParam0->f_E)
			{
				bVar13 = 0x00000001;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_24B2D0.f_998 == 0x00000001)
		{
			if (unk_0x1727A44C562FBED2(Global_24B2D0.f_9A1))
			{
				if (Global_24B2D0.f_9A1 == unk_0x0D0A574C76D769AC())
				{
					if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99E) < func_239(0x00000000))
					{
						return 0x00000000;
					}
				}
				else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99E) < func_239(0x00000000))
				{
					return 0x00000000;
				}
			}
			unk_0xDEED9606C7D093F7();
			unk_0x0FB2CEE58DA4A6EE();
			func_238();
		}
		Global_24B2D0.f_998 = 0x00000000;
	}
	else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99E) > func_239(0x00000000))
	{
		Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
		func_232();
	}
	switch (uParam0->f_7)
	{
		case 0x00000000:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 0x00000001:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_B;
			}
			else
			{
				fVar2 = uParam0->f_B;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_B.f_1;
			}
			else
			{
				fVar3 = uParam0->f_B.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 0x00000002:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_B + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar2 = (uParam0->f_B - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_E));
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_B.f_1 + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar3 = (uParam0->f_B.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_E));
			}
			break;
	}
	unk_0x10FEEAFF01E32639(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0x00000000)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_B * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_24B2D0.f_998)
	{
		unk_0xDEED9606C7D093F7();
		unk_0x0FB2CEE58DA4A6EE();
		func_238();
		if (uParam1->f_7 && uParam0->f_7 == 0x00000000)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_231(*uParam0, 6f, 1f, 1f, 5f, 0x00000001, 0x00000001, 0x00000001, 120f, 0x00000000, 0xFFFFFFFF, 0x00000001, uParam1->f_5, uParam0->f_11, 0x00000000, 0x00000000, 0x00000000))
				{
					*(uParam2[0x00000000 /*3*/]) = { *uParam0 };
					uParam2->f_10[0x00000000] = uParam0->f_3;
					return 0x00000001;
				}
			}
		}
		if (!unk_0xC79C8A78EC708587())
		{
			Global_24B2D0.f_9AF = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0x00000000:
					Global_24B2D0.f_99A = { *uParam0 };
					Global_24B2D0.f_99D = uParam0->f_4;
					break;
				
				case 0x00000001:
					Global_24B2D0.f_9A8 = { uParam0->f_8 };
					Global_24B2D0.f_9AB = { uParam0->f_B };
					Global_24B2D0.f_9AE = 0f;
					Global_24B2D0.f_99A = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
				
				case 0x00000002:
					Global_24B2D0.f_9A8 = { uParam0->f_8 };
					Global_24B2D0.f_9AB = { uParam0->f_B };
					Global_24B2D0.f_9AE = uParam0->f_E;
					Global_24B2D0.f_99A = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_230(vVar6.x, vVar6.y);
			}
			Global_24B2D0.f_999 = 0x00000001;
			Global_24B2D0.f_998 = 0x00000001;
			Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
			Global_24B2D0.f_99E = unk_0x2B6E0A53779D29EA();
			Global_24B2D0.f_9A1 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			return 0x00000000;
		}
	}
	if (Global_24B2D0.f_998)
	{
		if (Global_24B2D0.f_999 == 0x00000001)
		{
			if (unk_0xD1B4D22E0BA9B0C8(fVar2, fVar3, fVar4, fVar5) || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99F) > 0x00001388)
			{
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_15)
					{
						*(uParam2[0x00000000 /*3*/]) = { uParam0->f_12 };
					}
					else
					{
						*(uParam2[0x00000000 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 0x40800000;
					Var14.f_7 = 0x461C3C00;
					Var14.f_8 = 0x00000001;
					Var14.f_A = 0x00000001;
					Var14.f_D = 0x00000001;
					Var14.f_F = 0x00000001;
					Var14.f_10 = 0x00000001;
					Var14.f_1F = 0x00000001;
					Var14.f_22 = joaat("tailgater");
					Var14.f_26 = 0x00000002;
					Var14.f_2D = 0x00000002;
					Var14.f_31 = 0x42F00000;
					Var14.f_35 = 0x000003E7;
					Var14.f_36 = 0x461C3F9A;
					Var14.f_37 = 0x00000001;
					Var14.f_38 = 0x00000001;
					Var14.f_39 = 0x00000001;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_B = uParam1->f_9;
					Var14.f_12 = 0x00000001;
					if (uParam1->f_20 > 0f)
					{
						Var14.f_6 = uParam1->f_20;
					}
					switch (uParam0->f_7)
					{
						case 0x00000000:
							Var14.f_13 = { *uParam0 };
							Var14.f_19 = uParam0->f_4;
							break;
						
						case 0x00000001:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = 0f;
							break;
						
						case 0x00000002:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = uParam0->f_E;
							break;
					}
					Var14.f_1A = uParam0->f_7;
					Var14.f_C = uParam0->f_F;
					if (uParam0->f_15)
					{
						Var14.f_1E = 0x00000001;
						Var14.f_20 = 0x00000001;
					}
					iVar9 = 0x00000000;
					while (iVar9 < 0x00000002)
					{
						Var14.f_26[iVar9 /*3*/] = { uParam1->f_D[iVar9 /*3*/] };
						Var14.f_2D[iVar9] = uParam1->f_14[iVar9];
						iVar9++;
					}
					Var14.f_33 = uParam1->f_1E;
					Var14.f_37 = uParam0->f_10;
					if (uParam0->f_1A)
					{
						Var14.f_A = 0x00000000;
					}
					if (func_229(Global_440000.f_38DB3))
					{
						Var14.f_9 = 0x00000001;
					}
					func_204(uParam2[0x00000000 /*3*/], &(uParam2->f_10[0x00000000]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0x00000000)
					{
						if (!func_203(*(uParam2[0x00000000 /*3*/]), *uParam0, uParam0->f_4, 0x00000001, 0x00000001))
						{
							*(uParam2[0x00000000 /*3*/]) = { *uParam0 };
							uParam2->f_10[0x00000000] = uParam0->f_3;
						}
					}
					Global_24B2D0.f_999 = 0x00000009;
				}
				else
				{
					Global_24B2D0.f_999 = 0x00000002;
				}
			}
		}
		if (Global_24B2D0.f_999 == 0x00000002)
		{
			if ((unk_0xF8A3B10A1B8ACCDD(vVar7, vVar8) || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99F) > 0x00003A98) || unk_0x7D293360C866EB8E(vVar7, vVar8) == 0x00000000)
			{
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				if (uParam0->f_5 && !func_200(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					Global_24B2D0.f_999 = 0x00000003;
				}
				else
				{
					Global_24B2D0.f_999 = 0x00000004;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_9A3) > 0x00001B58)
			{
				func_199(vVar6.x, vVar6.y);
			}
		}
		if (Global_24B2D0.f_999 == 0x00000003)
		{
			if (func_198() || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99F) > 0x00002710)
			{
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				Global_24B2D0.f_999 = 0x00000004;
			}
		}
		if (Global_24B2D0.f_999 == 0x00000004)
		{
			if (unk_0xC79C8A78EC708587())
			{
				unk_0xDEED9606C7D093F7();
				unk_0x0FB2CEE58DA4A6EE();
			}
			else
			{
				iVar0 = 0x00000000;
				func_232();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0x00000000:
							if (unk_0xAFED075B5A62767B(unk_0xD803B885F5E47A62(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
								Global_24B2D0.f_999 = 0x00000005;
							}
							break;
						
						case 0x00000001:
							func_197(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							if (unk_0xD4B5AAF3676F3DE0(unk_0xD803B885F5E47A62(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
								Global_24B2D0.f_999 = 0x00000005;
							}
							break;
						
						case 0x00000002:
							if (unk_0xD4B5AAF3676F3DE0(unk_0xD803B885F5E47A62(), uParam0->f_8, uParam0->f_B, uParam0->f_E, *uParam1, iVar0))
							{
								Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
								Global_24B2D0.f_999 = 0x00000005;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_A)
					{
						iVar0 += 32;
					}
					Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
					Global_24B2D0.f_999 = 0x00000005;
					switch (uParam0->f_7)
					{
						case 0x00000000:
							unk_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 0x00001388);
							break;
						
						case 0x00000001:
							func_197(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							unk_0x1814612955640FD9(vVar10, vVar11, uVar12, iVar0, 2f, 0x00001388);
							break;
						
						case 0x00000002:
							unk_0x1814612955640FD9(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 0x00001388);
							break;
						}
					}
				}
		}
		if (Global_24B2D0.f_999 == 0x00000005)
		{
			if (func_126(uParam2, uParam0, uParam1, 0x00000000))
			{
				if (Global_24B2D0.f_9B3.f_5)
				{
					Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
					Global_24B2D0.f_999 = 0x00000006;
				}
				else
				{
					Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0x00000000 /*3*/]) };
							uParam2->f_10[0x00000000] = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						}
					}
					Global_24B2D0.f_999 = 0x00000009;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99F) > 0x00004E20)
			{
				unk_0xDEED9606C7D093F7();
				unk_0x0FB2CEE58DA4A6EE();
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				Global_24B2D0.f_999 = 0x00000008;
			}
		}
		if (Global_24B2D0.f_999 == 0x00000006)
		{
			iVar0 = 0x00000000;
			Global_24B2D0.f_9B3.f_1 = 0x00000000;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0x00000000)
			{
				if (!func_125(uParam0->f_4))
				{
					if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_124(uParam0->f_8, uParam0->f_B, uParam0->f_E))
			{
				if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_A)
			{
				iVar0 += 32;
			}
			if (uParam0->f_F)
			{
				iVar0 += 16;
			}
			Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
			Global_24B2D0.f_999 = 0x00000007;
			switch (uParam0->f_7)
			{
				case 0x00000000:
					unk_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 0x00001388);
					break;
				
				case 0x00000001:
					func_197(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
					unk_0x1814612955640FD9(vVar10, vVar11, uVar12, iVar0, 2f, 0x00001388);
					break;
				
				case 0x00000002:
					unk_0x1814612955640FD9(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 0x00001388);
					break;
				}
		}
		if (Global_24B2D0.f_999 == 0x00000007)
		{
			if (func_126(uParam2, uParam0, uParam1, 0x00000001))
			{
				if (SYSTEM::VMAG(*(uParam2[0x00000000 /*3*/])) == 0f)
				{
					iVar9 = 0x00000000;
					while (iVar9 < 0x00000003)
					{
						if (SYSTEM::VMAG(*(uParam2[0x00000000 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_24B2D0.f_A39[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0x00000000:
										if (func_203(Global_24B2D0.f_A39[iVar9 /*3*/], *uParam0, uParam0->f_4, 0x00000000, 0x00000000))
										{
											*(uParam2[0x00000000 /*3*/]) = { Global_24B2D0.f_A39[iVar9 /*3*/] };
										}
										break;
									
									case 0x00000001:
										if (func_122(Global_24B2D0.f_A39[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, 0x00000000, 0x00000000))
										{
											*(uParam2[0x00000000 /*3*/]) = { Global_24B2D0.f_A39[iVar9 /*3*/] };
										}
										break;
									
									case 0x00000002:
										if (unk_0x0399732A9EBC368E(Global_24B2D0.f_A39[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, uParam0->f_E, 0x00000000, 0x00000001))
										{
											*(uParam2[0x00000000 /*3*/]) = { Global_24B2D0.f_A39[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0x00000000 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0x00000000:
								vVar1 = { *uParam0 };
								break;
							
							case 0x00000001:
							case 0x00000002:
								vVar1 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
								break;
						}
						func_76(&vVar1, 0x00000000, 0x00000001, 0x00000001, 0x00000000, uParam0, uParam1);
						*(uParam2[0x00000000 /*3*/]) = { vVar1 };
					}
				}
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0x00000000;
					while (iVar9 < 0x00000005)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_10[iVar9] = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_24B2D0.f_999 = 0x00000009;
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_24B2D0.f_99F) > 0x00004E20)
			{
				Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
				Global_24B2D0.f_999 = 0x00000008;
			}
		}
		if (Global_24B2D0.f_999 == 0x00000008)
		{
			if (uParam0->f_5)
			{
				if (func_75(Global_24B2D0.f_1E6))
				{
				}
			}
			else if (Global_24B2D0.f_9B3.f_2)
			{
				func_74(uParam2, &(Global_24B2D0.f_9B3.f_6));
			}
			else
			{
				if (uParam0->f_F)
				{
					bVar15 = 0x00000000;
				}
				else
				{
					bVar15 = 0x00000001;
				}
				*(uParam2[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
				func_76(uParam2[0x00000000 /*3*/], 0x00000000, bVar15, 0x00000000, 0x00000000, uParam0, uParam1);
			}
			Global_24B2D0.f_99F = unk_0x2B6E0A53779D29EA();
			Global_24B2D0.f_999 = 0x00000009;
		}
		if (Global_24B2D0.f_999 == 0x00000009)
		{
			Global_24B2D0.f_998 = 0x00000000;
			unk_0xDEED9606C7D093F7();
			unk_0x0FB2CEE58DA4A6EE();
			func_238();
			return 0x00000001;
		}
		Global_24B2D0.f_99E = unk_0x2B6E0A53779D29EA();
	}
	return 0x00000000;
}

void func_74(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_16[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_75(int iParam0)
{
	if (iParam0 == 0x00000003 || iParam0 == 0x0000001A)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_76(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 0x40800000;
	Var2.f_7 = 0x461C3C00;
	Var2.f_8 = 0x00000001;
	Var2.f_A = 0x00000001;
	Var2.f_D = 0x00000001;
	Var2.f_F = 0x00000001;
	Var2.f_10 = 0x00000001;
	Var2.f_1F = 0x00000001;
	Var2.f_22 = joaat("tailgater");
	Var2.f_26 = 0x00000002;
	Var2.f_2D = 0x00000002;
	Var2.f_31 = 0x42F00000;
	Var2.f_35 = 0x000003E7;
	Var2.f_36 = 0x461C3F9A;
	Var2.f_37 = 0x00000001;
	Var2.f_38 = 0x00000001;
	Var2.f_39 = 0x00000001;
	if (bParam1)
	{
		iVar6 = 0x00000000;
	}
	else
	{
		iVar6 = 0x00000010;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_16)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0x00000000:
						vVar7 = { *uParam5 };
						if (func_125(uParam5->f_4) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 0x00000001:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_B, 0f) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 0x00000002:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_B, uParam5->f_E) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_90(*uParam0, &vVar0, iVar6, iParam3, 0x00000001))
	{
	}
	else
	{
		bVar5 = 0x00000001;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 0x00000001;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_A = 0x00000000;
		}
		else
		{
			Var2.f_A = 0x00000001;
		}
		Var2.f_D = uParam5->f_F;
		Var2.f_F = iParam3;
		if (uParam6->f_20 > 0f)
		{
			Var2.f_6 = uParam6->f_20;
		}
		if (bParam4)
		{
			Var2.f_12 = 0x00000001;
			Var2.f_1A = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0x00000000:
					Var2.f_13 = { *uParam5 };
					Var2.f_19 = uParam5->f_4;
					break;
				
				case 0x00000001:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = 0f;
					break;
				
				case 0x00000002:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = uParam5->f_E;
					break;
				}
		}
		iVar4 = 0x00000000;
		while (iVar4 < 0x00000002)
		{
			Var2.f_26[iVar4 /*3*/] = { uParam6->f_D[iVar4 /*3*/] };
			Var2.f_2D[iVar4] = uParam6->f_14[iVar4];
			iVar4++;
		}
		Var2.f_33 = uParam6->f_1E;
		Var2.f_37 = uParam5->f_10;
		if (func_88(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			Var2.f_9 = 0x00000001;
		}
		func_204(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0x00000000:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 0x00000001:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				break;
			
			case 0x00000002:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				fVar10 = uParam5->f_E;
				break;
		}
		if (!func_87(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_90(*uParam0, &vVar0, iVar6, iParam3, 0x00000000))
			{
				if (!func_87(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 0x00000002 || uParam5->f_7 == 0x00000001)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (unk_0xE82754C349C7B581(vVar0, &uVar3, 0x00000000, 0x00000000))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else if (func_77(uParam0, 0x00000001, 0x00000001, 0x00000001, 0x00000001))
			{
				func_76(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 0x00000002 || uParam5->f_7 == 0x00000001)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (unk_0xE82754C349C7B581(vVar0, &uVar3, 0x00000000, 0x00000000))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_24B2D0.f_295 = 0x00000001;
}

int func_77(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		if (Global_24C600[iVar0 /*17*/].f_9 == 0x00000001)
		{
			if (!bParam2 || (bParam2 && Global_24C600[iVar0 /*17*/].f_10))
			{
				if (func_86(*uParam0, &(Global_24C600[iVar0 /*17*/]), 0x3C23D70A, bParam4, 0x00000000))
				{
					if (bParam1)
					{
						if (Global_24C600[iVar0 /*17*/].f_C)
						{
							*uParam0 = { Global_24C600[iVar0 /*17*/].f_D };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_78(&vVar1, &(Global_24C600[iVar0 /*17*/]), 0x3DCCCCCD, 0x00000000, bParam3);
							if (func_77(&vVar1, 0x00000000, 0x00000000, 0x00000000, 0x00000001))
							{
								vVar1 = { *uParam0 };
								func_78(&vVar1, &(Global_24C600[iVar0 /*17*/]), 0x3DCCCCCD, 0x00000001, 0x00000000);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_78(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_A)
		{
			case 0x00000000:
				*uParam0 = { func_85(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_24B2D0.f_AA6) * uParam1->f_8)), 0x00000000, fParam2, bParam3) };
				break;
			
			case 0x00000001:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, 0f, 0x00000001, fParam2, bParam3) };
				break;
			
			case 0x00000002:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000002, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_A)
		{
			case 0x00000000:
				func_83(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_24B2D0.f_AA6) * uParam1->f_8)), fParam2, bParam3, 0x00000000);
				break;
			
			case 0x00000001:
				func_82(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 0x00000002:
				func_79(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_79(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_81(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_80(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_80(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_81(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_81(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(unk_0x07AB02F3C4AE2B04(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_80(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_80(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (SYSTEM::VDIST(vVar4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_80(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_81(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_82(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

void func_83(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_84(&vVar0, 0f, 0f, unk_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_84(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

void func_84(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_85(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0x00000000:
			func_83(&vParam0, vParam1, fParam3, fParam5, bParam6, 0x00000000);
			break;
		
		case 0x00000001:
			func_82(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 0x00000002:
			func_79(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000028)
	{
		unk_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 0x00000001, 0f, 0f);
		switch (iParam4)
		{
			case 0x00000000:
				if (!func_203(vVar1, vParam1, fParam3, 0x00000000, 0x00000000))
				{
					return vVar1;
				}
				break;
			
			case 0x00000001:
				if (!func_122(vVar1, vParam1, vParam2, 0x00000000, 0x00000000))
				{
					return vVar1;
				}
				break;
			
			case 0x00000002:
				if (!unk_0x0399732A9EBC368E(vVar1, vParam1, vParam2, fParam3, 0x00000000, 0x00000001))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_86(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_A)
	{
		case 0x00000000:
			return func_203(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_24B2D0.f_AA6) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 0x00000001:
			return func_122(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 0x00000002:
			if (bParam3 && bParam4)
			{
				return unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000000, 0x00000000);
			}
			else if (bParam3)
			{
				if (unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000000, 0x00000000) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000000;
				}
			}
			else if (bParam4)
			{
				if (unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000000, 0x00000000) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000000, 0x00000001);
			}
			break;
	}
	return 0x00000000;
}

int func_87(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	switch (iParam1)
	{
		case 0x00000000:
			if (SYSTEM::VDIST(vParam0, vParam2) <= fParam4)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			return func_122(vParam0, vParam2, vParam3, 0x00000000, 0x00000000);
			break;
		
		case 0x00000002:
			return unk_0x0399732A9EBC368E(vParam0, vParam2, vParam3, fParam4, 0x00000000, 0x00000001);
			break;
	}
	return 0x00000000;
}

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0x134B62B726CEC8E6(iVar0) == 0x897AFC65)
			{
				return 0x00000001;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_13())
			{
				return func_89(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000C;
			}
		}
	}
	return 0x00000000;
}

int func_89(int iParam0)
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

int func_90(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_121(vParam0, uParam1))
	{
		if (func_91(vParam0, uParam1, iParam3, bParam4))
		{
			return 0x00000001;
		}
	}
	if (unk_0xB885EF0389689E54(vParam0, 0x00000000, uParam1, iParam2))
	{
		if (func_91(vParam0, uParam1, iParam3, bParam4))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_91(vector3 vParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 0x00000002;
		uVar2 = 0x00000002;
		if ((iParam2 == 0x00000001 && !func_107(Global_24B2D0.f_1FD, uParam1, &uVar1, &uVar2, bParam3, 0x00000001)) || iParam2 == 0x00000000)
		{
			if (!func_95(*uParam1, 0x3F000000))
			{
				if (!func_92(uParam1, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_92(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_94(vVar1);
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CBC3[iVar2])
	{
		if (func_93(vVar1, &(Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&vVar1, Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/], Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/].f_3, Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/].f_6, 0x3DCCCCCD, 0x00000000);
				*uParam0 = { vVar1 };
			}
			return 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CBC3[0x00000008])
	{
		if (func_93(vVar1, &(Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&vVar1, Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/], Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/].f_3, Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/].f_6, 0x3DCCCCCD, 0x00000000);
				*uParam0 = { vVar1 };
			}
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_93(vector3 vParam0, var uParam1)
{
	return unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0x00000000, 0x00000001);
}

int func_94(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_24CBCD[0x00000000])
	{
		return 0x00000000;
	}
	if (Param0.f_1 > Global_24CBCD[0x00000001])
	{
		if (Param0 < Global_24CBD1[0x00000000])
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000002;
		}
	}
	if (Param0.f_1 > Global_24CBCD[0x00000002])
	{
		if (Param0 < Global_24CBD1[0x00000001])
		{
			return 0x00000003;
		}
		else if (Param0 < Global_24CBD1[0x00000002])
		{
			return 0x00000004;
		}
		else if (Param0 < Global_24CBD1[0x00000003])
		{
			return 0x00000005;
		}
		else
		{
			return 0x00000006;
		}
	}
	return 0x00000007;
}

int func_95(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_104(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
	{
		if (Global_440000.f_16738 > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_440000.f_16738)
			{
				if (Global_440000.f_16739[iVar0 /*107*/].f_7 != 0x00000000)
				{
					if (func_96(vParam0, Global_440000.f_16739[iVar0 /*107*/], Global_440000.f_16739[iVar0 /*107*/].f_6, Global_440000.f_16739[iVar0 /*107*/].f_7, fParam1))
					{
						return 0x00000001;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_1319F > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_440000.f_1319F)
			{
				if (Global_440000.f_131A2[iVar0 /*266*/].f_F != 0x00000000)
				{
					if (func_96(vParam0, Global_440000.f_131A2[iVar0 /*266*/], Global_440000.f_131A2[iVar0 /*266*/].f_3, Global_440000.f_131A2[iVar0 /*266*/].f_F, 0.5f))
					{
						return 0x00000001;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_1E49D > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_440000.f_1E49D)
			{
				if (Global_440000.f_1E4A1[iVar0 /*325*/].f_C != 0x00000000)
				{
					if (func_96(vParam0, Global_440000.f_1E4A1[iVar0 /*325*/], Global_440000.f_1E4A1[iVar0 /*325*/].f_3, Global_440000.f_1E4A1[iVar0 /*325*/].f_C, 0.5f))
					{
						return 0x00000001;
					}
				}
				iVar0++;
			}
		}
		if (Global_EC947.f_10C > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_EC947.f_10C)
			{
				if (unk_0xC844350D5D58C99A(Global_EC947.f_E9[iVar0]) && !unk_0x437347B10A200C4B(Global_EC947.f_E9[iVar0], 0x00000000))
				{
					if (func_96(vParam0, unk_0x68F4C0EC296D3901(Global_EC947.f_E9[iVar0], 0x00000001), unk_0xD9522BA9E27E1349(Global_EC947.f_E9[iVar0]), unk_0x134B62B726CEC8E6(Global_EC947.f_E9[iVar0]), 0.5f))
					{
						return 0x00000001;
					}
				}
				iVar0++;
			}
		}
		if (Global_EC947.f_10A > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_EC947.f_10A)
			{
				if (unk_0xC844350D5D58C99A(Global_EC947.f_77[iVar0]) && !unk_0x437347B10A200C4B(Global_EC947.f_77[iVar0], 0x00000000))
				{
					if (func_96(vParam0, unk_0x68F4C0EC296D3901(Global_EC947.f_77[iVar0], 0x00000001), unk_0xD9522BA9E27E1349(Global_EC947.f_77[iVar0]), unk_0x134B62B726CEC8E6(Global_EC947.f_77[iVar0]), 0.5f))
					{
						return 0x00000001;
					}
				}
				iVar0++;
			}
		}
	}
	return 0x00000000;
}

int func_96(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_103(iParam3, 0x3C23D70A))
	{
		func_97(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0x0399732A9EBC368E(vParam0, vVar0, vVar1, fVar2, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_97(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_84(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_98(iParam2, &vVar1, &vVar2, 0x40C00000, 0x40600000, 0x40400000);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * unk_0x755FF954DAE327E1((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * unk_0x755FF954DAE327E1((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0x755FF954DAE327E1((vVar2.x - vVar1.x));
}

void func_98(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x468C1AC3ABF95C57(iParam0))
	{
		unk_0xA6B02C1DB14DDA13(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_101(iParam0);
		if (iVar0 != 0x00000000)
		{
			func_99(iVar0, uParam1, uParam2, 0x40C00000, 0x40600000, 0x40400000);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_99(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_100(iParam0, &Global_1413E4);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0x468C1AC3ABF95C57(Global_1413E4[iVar0]))
		{
			unk_0xA6B02C1DB14DDA13(Global_1413E4[iVar0], &(Global_1413E8[iVar0 /*3*/]), &(Global_1413EF[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1413E8[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1413EF[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1413E8[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1413EF[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1413E8[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1413EF[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1413E8[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1413EF[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1413F6[iVar0] = (Global_1413EF[iVar0 /*3*/] - Global_1413E8[iVar0 /*3*/]);
		Global_1413F9[iVar0] = (Global_1413EF[iVar0 /*3*/].f_1 - Global_1413E8[iVar0 /*3*/].f_1);
		Global_1413FC[iVar0] = (Global_1413EF[iVar0 /*3*/].f_2 - Global_1413E8[iVar0 /*3*/].f_2);
		if (Global_1413F6[iVar0] > Global_1413FF)
		{
			Global_1413FF = Global_1413F6[iVar0];
		}
		if (Global_1413FC[iVar0] > Global_141400)
		{
			Global_141400 = Global_1413FC[iVar0];
		}
		iVar0++;
	}
	Global_141401 = (Global_1413FF * -0.5f);
	Global_141404 = (Global_1413FF * 0.5f);
	Global_141401.f_1 = ((((0.5f * Global_1413F9[0x00000000]) + Global_1413F9[0x00000001]) + Global_1413E4.f_3) * -1f);
	Global_141404.f_1 = (0.5f * Global_1413F9[0x00000000]);
	Global_141401.f_2 = (Global_1413FC[0x00000000] * -0.5f);
	Global_141404.f_2 = (Global_1413FC[0x00000000] * 0.5f);
	*uParam1 = { Global_141401 };
	*uParam2 = { Global_141404 };
}

void func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000001:
			(*uParam1)[0x00000000] = 0x171C92C4;
			(*uParam1)[0x00000001] = 0x5993F939;
			uParam1->f_3 = -2.6f;
			break;
		
		case 0x00000002:
			(*uParam1)[0x00000000] = 0x0A90ED5C;
			(*uParam1)[0x00000001] = 0x5993F939;
			uParam1->f_3 = -2.6f;
			break;
		
		case 0x00000003:
			(*uParam1)[0x00000000] = 0x19DD9ED1;
			(*uParam1)[0x00000001] = 0x8FD54EBB;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		iVar1 = iVar0;
		if (func_102(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = (0x000003E8 + iParam0);
	return iVar0;
}

float func_103(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0x00000000)
	{
		return 5f;
	}
	func_98(iParam0, &vVar0, &vVar1, 0x40C00000, 0x40600000, 0x40400000);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_104(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_105(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_184507[iParam0 /*876*/] == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_105(int iParam0)
{
	return func_106(iParam0);
}

bool func_106(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

int func_107(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_114(vParam0))
	{
		if (func_77(uParam1, bParam4, 0x00000000, 0x00000001, 0x00000001))
		{
			if (bParam4)
			{
			}
			return 0x00000001;
		}
	}
	if (func_109(uParam1, bParam4, 0x00000001))
	{
		if (bParam4)
		{
		}
		return 0x00000001;
	}
	if (bParam5)
	{
		if (func_108(*uParam1, 0x3F000000))
		{
			return 0x00000001;
		}
	}
	bVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_83(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 0x3DCCCCCD, 0x00000000, 0x00000000);
			}
			bVar1 = 0x00000001;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_108(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001E)
	{
		if (SYSTEM::VDIST(vParam0, Global_24B2D0.f_AA8[iVar0 /*3*/]) < fParam1)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_109(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_111(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_78(&vVar2, &(Global_24B2D0.f_16D[iVar0 /*12*/]), 0x3DCCCCCD, 0x00000000, bParam2);
			if (func_111(vVar2, &uVar1) || func_110(vVar2))
			{
				vVar2 = { *uParam0 };
				func_78(&vVar2, &(Global_24B2D0.f_16D[iVar0 /*12*/]), 0x3DCCCCCD, 0x00000001, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_110(vector3 vParam0)
{
	float fVar0;
	
	if (Global_24B2D0.f_24E > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_24B2D0.f_24B);
		if (fVar0 < Global_24B2D0.f_24E)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_111(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_113())
	{
		return 0x00000000;
	}
	iVar1 = func_112();
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (Global_24B2D0.f_16D[iVar0 /*12*/].f_9 == 0x00000001)
		{
			if (func_86(vParam0, &(Global_24B2D0.f_16D[iVar0 /*12*/]), 0x3C23D70A, 0x00000000, 0x00000000))
			{
				*uParam1 = iVar0;
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_112()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (Global_24B2D0.f_16D[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_113()
{
	return Global_199459.f_1DA;
}

int func_114(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_24B2D0.f_200 && !Global_24B2D0.f_201)
	{
		if (!Global_24B2D0.f_2D.f_13A)
		{
			if (!func_118(unk_0xD803B885F5E47A62(), 0x00000001))
			{
				return 0x00000001;
			}
			if (!func_117(vParam0, 0x3C23D70A))
			{
				if (!func_77(&vParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000001))
				{
					return 0x00000001;
				}
				else if (func_77(&vParam0, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
				{
					return 0x00000001;
				}
			}
			else
			{
				iVar0 = func_116(vParam0, 0x3C23D70A);
				if (iVar0 > 0xFFFFFFFF)
				{
					vVar1 = { func_115(&(Global_24B2D0.f_2D[iVar0 /*12*/])) };
					if (!func_77(&vVar1, 0x00000000, 0x00000000, 0x00000000, 0x00000001))
					{
						if (!func_77(&vParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000001))
						{
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

Vector3 func_115(var uParam0)
{
	switch (uParam0->f_A)
	{
		case 0x00000000:
			return *uParam0;
			break;
		
		case 0x00000001:
		case 0x00000002:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_116(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (Global_24B2D0.f_2D[iVar0 /*12*/].f_9)
		{
			if (func_86(vParam0, &(Global_24B2D0.f_2D[iVar0 /*12*/]), fParam1, 0x00000000, 0x00000000))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_117(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (Global_24B2D0.f_2D[iVar0 /*12*/].f_9)
		{
			if (func_86(vParam0, &(Global_24B2D0.f_2D[iVar0 /*12*/]), fParam1, 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_118(int iParam0, bool bParam1)
{
	if (func_120() != 0x00000000)
	{
		return func_119(iParam0) != 0x00000000;
	}
	return func_104(iParam0, bParam1, 0x00000000);
}

int func_119(int iParam0)
{
	if (func_6(iParam0, 0x00000000, 0x00000001))
	{
		return Global_25033E[iParam0 /*421*/].f_1;
	}
	return 0x00000000;
}

int func_120()
{
	return Global_7830;
}

int func_121(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 0xFFFFFFFF;
	fVar2 = 999999.9f;
	if (Global_24B2D0.f_8CE > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_24B2D0.f_8CE)
		{
			fVar3 = SYSTEM::VDIST(Global_24B2D0.f_8CF[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == 0xFFFFFFFF)
		{
			*uParam1 = { Global_24B2D0.f_8CF[iVar1 /*4*/] };
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_122(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	func_123(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0x00000000;
	}
	if (bParam3 && bParam4)
	{
		return 0x00000001;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 0x00000001;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 0x00000001;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_123(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_124(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar1 - vVar0) > 100f)
	{
		return 0x00000001;
	}
	if (fParam2 > 50f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_125(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_126(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_24B2D0.f_9B3.f_1 == 0x00000000 && Global_24B2D0.f_9B3 == 0x00000000)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xB1275034A6871D62(&(Global_24B2D0.f_9B3.f_1)))
			{
				case 0x00000000:
					func_195(uParam1, uParam2);
					if (!Global_24B2D0.f_9B3.f_2)
					{
						if (uParam2->f_7 && Global_24B2D0.f_228.f_7 == 0x00000000)
						{
							*(uParam0[0x00000000 /*3*/]) = { *uParam1 };
							uParam0->f_10[0x00000000] = uParam1->f_3;
							return 0x00000001;
						}
						else
						{
							if (uParam1->f_15)
							{
								*(uParam0[0x00000000 /*3*/]) = { uParam1->f_12 };
							}
							else
							{
								*(uParam0[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
							}
							if (uParam1->f_5 && func_75(Global_24B2D0.f_1E6))
							{
								if (!Global_24B2D0.f_9B3.f_5)
								{
									Global_24B2D0.f_9B3.f_5 = 0x00000001;
								}
								else
								{
									func_76(uParam0[0x00000000 /*3*/], 0x00000001, 0x00000000, 0x00000001, 0x00000001, uParam1, uParam2);
								}
							}
							else
							{
								func_76(uParam0[0x00000000 /*3*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000, uParam1, uParam2);
							}
							uParam0->f_10[0x00000000] = unk_0x79833B02DBD2A244(0f, 360f);
							return 0x00000001;
						}
					}
					break;
				
				case 0x00000001:
					func_195(uParam1, uParam2);
					break;
				
				case 0x00000002:
					return 0x00000000;
					break;
				
				case 0x00000003:
					return 0x00000000;
					break;
			}
		}
		else if (unk_0xC79C8A78EC708587())
		{
			if (!unk_0xFA2A5CC35287E5B8())
			{
				if (unk_0x4FC9A1459CD5C324())
				{
					func_195(uParam1, uParam2);
					Global_24B2D0.f_9B3.f_1 = unk_0xEAD4FBE79458D592();
				}
				else
				{
					return 0x00000000;
				}
			}
			else
			{
				unk_0x0FB2CEE58DA4A6EE();
				func_195(uParam1, uParam2);
				if (!Global_24B2D0.f_9B3.f_2)
				{
					Global_24B2D0.f_9B3.f_5 = 0x00000001;
					return 0x00000001;
				}
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	if (uParam1->f_5)
	{
		func_192(Global_24B2D0.f_228, &(Global_24B2D0.f_9B3.f_39), &(Global_24B2D0.f_9B3.f_5A));
	}
	if (uParam2->f_7 && !Global_24B2D0.f_9B3.f_4)
	{
		Global_24B2D0.f_9B3.f_4 = 0x00000001;
		func_134(*uParam1, uParam1->f_3, uParam1, uParam2, 0x00000001, 0xFFFFFFFF);
	}
	iVar4 = 0x00000000;
	if (uParam1->f_5)
	{
		iVar5 = 0x00000040;
	}
	else
	{
		iVar5 = 0x00000020;
	}
	if (Global_24B2D0.f_9B3.f_1 > 0x00000000 || Global_24B2D0.f_9B3 > 0x00000000)
	{
		if (uParam1->f_5 || unk_0xC79C8A78EC708587())
		{
			iVar2 = 0x00000000;
			while (iVar2 < Global_24B2D0.f_9B3.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_24B2D0.f_9B3.f_3)
					{
						iVar2 = Global_24B2D0.f_9B3.f_3 + 1;
					}
					if (iVar2 > (Global_24B2D0.f_9B3.f_1 - 0x00000001))
					{
						iVar2 = (Global_24B2D0.f_9B3.f_1 - 0x00000001);
					}
					if (iVar2 < 0x00000000)
					{
						iVar2 = 0x00000000;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xE0463990929F9949(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0xB2C5D6F8163D4A45(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x00C66A3E05649B75(iVar2);
					}
					else
					{
						unk_0xD38A4489EFBF773A(iVar2, &iVar3);
					}
					func_134(vVar0, fVar1, uParam1, uParam2, 0x00000000, iVar3);
					iVar4++;
					Global_24B2D0.f_9B3.f_3 = iVar2;
				}
				else
				{
					return 0x00000000;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_24B2D0.f_9B3.f_1;
		}
		if (Global_24B2D0.f_9B3.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_24B2D0.f_B40)
			{
				func_128(&(Global_24B2D0.f_9B3.f_6[0x00000000 /*10*/]), &(Global_24B2D0.f_9B3.f_6[0x00000001 /*10*/]), &(Global_24B2D0.f_9B3.f_6[0x00000002 /*10*/]));
			}
			if (uParam1->f_5 && func_75(Global_24B2D0.f_1E6))
			{
				if (Global_24B2D0.f_9B3.f_2)
				{
					func_74(uParam0, &(Global_24B2D0.f_9B3.f_6));
					func_127(*(uParam0[0x00000000 /*3*/]));
					return 0x00000001;
				}
				else
				{
					*(uParam0[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
					func_76(uParam0[0x00000000 /*3*/], 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam1, uParam2);
					uParam0->f_10[0x00000000] = unk_0x79833B02DBD2A244(0f, 360f);
					func_127(*(uParam0[0x00000000 /*3*/]));
					return 0x00000001;
				}
			}
			else if (Global_24B2D0.f_9B3.f_2)
			{
				func_74(uParam0, &(Global_24B2D0.f_9B3.f_6));
				func_127(*(uParam0[0x00000000 /*3*/]));
				return 0x00000001;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x09AC81E49EA267F7(0x00000000, Global_24B2D0.f_9B3.f_1);
				unk_0xE0463990929F9949(iVar2, uParam0[0x00000000 /*3*/], &(uParam0->f_10[0x00000000]));
				if (!func_92(uParam0[0x00000000 /*3*/], 0x00000000))
				{
					uParam0->f_10[0x00000000] = (uParam0->f_10[0x00000000] * 57.29578f);
					func_127(*(uParam0[0x00000000 /*3*/]));
					return 0x00000001;
				}
				else
				{
					*(uParam0[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
					func_76(uParam0[0x00000000 /*3*/], 0x00000001, 0x00000000, 0x00000001, 0x00000001, uParam1, uParam2);
					uParam0->f_10[0x00000000] = unk_0x79833B02DBD2A244(0f, 360f);
					func_127(*(uParam0[0x00000000 /*3*/]));
					return 0x00000001;
				}
			}
			else
			{
				*(uParam0[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
				func_76(uParam0[0x00000000 /*3*/], 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam1, uParam2);
				uParam0->f_10[0x00000000] = unk_0x79833B02DBD2A244(0f, 360f);
				func_127(*(uParam0[0x00000000 /*3*/]));
				return 0x00000001;
			}
		}
	}
	else
	{
		*(uParam0[0x00000000 /*3*/]) = { Global_24B2D0.f_99A };
		if (uParam1->f_5 && func_75(Global_24B2D0.f_1E6))
		{
			if (!Global_24B2D0.f_9B3.f_5)
			{
				Global_24B2D0.f_9B3.f_5 = 0x00000001;
			}
			else
			{
				func_76(uParam0[0x00000000 /*3*/], 0x00000001, 0x00000000, 0x00000001, 0x00000001, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_F)
			{
				bVar6 = 0x00000000;
			}
			else
			{
				bVar6 = 0x00000001;
			}
			func_76(uParam0[0x00000000 /*3*/], 0x00000000, bVar6, 0x00000000, 0x00000000, uParam1, uParam2);
		}
		uParam0->f_10[0x00000000] = unk_0x79833B02DBD2A244(0f, 360f);
		func_127(*(uParam0[0x00000000 /*3*/]));
		return 0x00000001;
	}
	return 0x00000000;
}

void func_127(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (iVar0 > 0x00000000)
		{
			Global_24B2D0.f_A39[(0x00000003 - iVar0) /*3*/] = { Global_24B2D0.f_A39[(0x00000003 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_24B2D0.f_A39[0x00000000 /*3*/] = { vParam0 };
}

void func_128(var uParam0, var uParam1, var uParam2)
{
	if (func_75(Global_24B2D0.f_1E6) && func_133() < 0x00001000)
	{
		func_132(uParam0, 0f);
		func_132(uParam1, uParam0->f_2);
		func_132(uParam2, uParam1->f_2);
	}
	else
	{
		func_131(uParam0);
		func_130(uParam2, uParam0->f_4);
		func_129(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_129(var uParam0, vector3 vParam1, vector3 vParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 0x461C3F9A;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > 0x00000000)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE46[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_24BE46[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_24BE46[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_24BE46[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_130(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 0x461C3F9A;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > 0x00000000)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE46[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_24BE46[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_24BE46[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_131(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 0x461C3F9A;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > 0x00000000)
		{
			if (Global_24BE46[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_24BE46[iVar0 /*10*/].f_1;
				Var2 = { Global_24BE46[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_132(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 0x461C3F9A;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > 0x00000000)
		{
			if (Global_24BE46[iVar0 /*10*/].f_2 < fVar1 && Global_24BE46[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_24BE46[iVar0 /*10*/].f_2;
				Var2 = { Global_24BE46[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_133()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_24BE46[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_134(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0x00000000;
	iVar8 = 0x00000000;
	bVar9 = 0x00000000;
	if (uParam2->f_5)
	{
		if (Global_24B2D0.f_1E6 == 0x00000001)
		{
			if (unk_0x755FF954DAE327E1((Global_24B2D0.f_1FD.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_189(unk_0xD803B885F5E47A62()))
		{
			if (iParam5 == 0xFFFFFFFF)
			{
				bVar9 = 0x00000001;
			}
			else if (!iParam5 & 0x00000001 == 0x00000000)
			{
				bVar9 = 0x00000001;
			}
		}
		else if (iParam5 == 0xFFFFFFFF)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 0x00000001 == 0x00000000)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_188(vParam0, 0x40A00000, 0x42F00000, 0x00000000))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0xE5DF6192D54A65A1(unk_0x16F2683693E537C9(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0xE5DF6192D54A65A1(unk_0x16F2683693E537C9(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_187(vParam0, uParam3->f_5, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = 0x00000001;
	iVar11 = 0x00000000;
	while (iVar11 < 0x00000002)
	{
		if (SYSTEM::VMAG(uParam3->f_D[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam3->f_D[iVar11 /*3*/]) > uParam3->f_14[iVar11])
			{
				bVar13 = 0x00000000;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_17) > 0f && SYSTEM::VMAG(uParam3->f_1A) > 0f) && uParam3->f_1D > 0f)
		{
			if (unk_0x0399732A9EBC368E(vParam0, uParam3->f_17, uParam3->f_1A, uParam3->f_1D, 0x00000000, 0x00000001))
			{
				bVar13 = 0x00000000;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_181(vParam0, fParam1, uParam2->f_F, func_186(0x00000001), uParam2->f_10, 0x00000000, 0x42F00000, 0x41A00000, 0x41A00000, 0x40A00000, 0x41200000, 0x00000000, 0x00000000, 0x00000000))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_24B2D0.f_3;
		}
	}
	else if (!func_178(vParam0, 25f, unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (uParam2->f_F)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_174(vParam0, fVar1, 0x00000001, 0x00000001, 120f, 0x00000000, 0xFFFFFFFF, 0f, 0x00000001))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_174(vParam0, fVar1, 0x00000001, 0x00000001, 60f, 0x00000000, 0xFFFFFFFF, 0f, 0x00000001))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2D0.f_2B5)
		{
			vVar12 = { Global_24B2D0.f_1FD };
			if (Global_24B2D0.f_1E6 == 0x0000001A)
			{
				vVar12 = { Global_24B2D0.f_228.f_12 };
			}
			if (!func_108(vParam0, 0.5f))
			{
				if (func_114(vVar12))
				{
					if (!func_77(&vParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000001) && !func_173(&vParam0, 0x00000000))
					{
						iVar8 += 512;
					}
				}
				else if (!func_173(&vParam0, 0x00000000))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_172(vParam0, 2.5f, 0x00000003))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_171(unk_0xD803B885F5E47A62()) && func_170(unk_0xD803B885F5E47A62())))
		{
			if (!func_169(&vParam0, &(Global_24B2D0.f_9B3.f_5A), 0x00000000, 0x3F800000))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_170(unk_0xD803B885F5E47A62()))
		{
			if (!func_168(vParam0, &(Global_24B2D0.f_9B3.f_39), &(Global_24B2D0.f_9B3.f_5A), 0x40000000))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_167(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_75(Global_24B2D0.f_1E6))
			{
				if (func_117(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_166(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_24B2D0.f_2D.f_37)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 0x00000001 == 0x00000000)
		{
			if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 0x00000002 == 0x00000000)
	{
		if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2D0.f_2B5)
		{
			if (!func_109(&vParam0, 0x00000000, 0x00000000))
			{
				iVar8 = (iVar8 + 0x00008000);
			}
		}
		else
		{
			iVar8 = (iVar8 + 0x00008000);
		}
	}
	else
	{
		iVar8 = (iVar8 + 0x00008000);
	}
	if (!func_92(&vParam0, 0x00000000))
	{
		iVar8 = (iVar8 + 0x00010000);
	}
	else
	{
		iVar14 = func_116(vParam0, 0x3C23D70A);
		if (iVar14 > 0xFFFFFFFF)
		{
			func_165(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_160(&(Global_24B2D0.f_2D[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = 0xFFFFFFFF;
			}
		}
		else
		{
			iVar8 = 0xFFFFFFFF;
		}
	}
	if (func_95(vParam0, 0x3F000000))
	{
		iVar8 = 0xFFFFFFFF;
	}
	if (uParam3->f_21)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = 0xFFFFFFFF;
		}
	}
	if (uParam3->f_22)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = 0xFFFFFFFF;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_159(vParam0, 0x00000001, 0x00000000, uParam2->f_F, 0x3F333333, 0x40C00000, 0x3F800000, 0x40E00000))
	{
		iVar8 = 0x00000000;
	}
	Var19.f_2 = 0x461C3F9A;
	bVar20 = 0x00000000;
	bVar21 = 0x00000000;
	if (Global_24B2D0.f_B40 && uParam2->f_5)
	{
		if (iVar8 > 0x00000000)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0x00000000;
				bVar4 = 0x00000000;
			}
			else
			{
				bVar4 = 0x00000001;
			}
			if (uParam2->f_15)
			{
				fVar0 = func_151(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_151(vParam0, Global_24B2D0.f_99A, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_75(Global_24B2D0.f_1E6) && iVar8 < 0x00001000)
			{
				Var19.f_2 = func_149(vParam0);
			}
			uVar7 = func_140(vParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_139(Var19);
			Global_24B2D0.f_9B3.f_2 = 0x00000001;
		}
	}
	else
	{
		iVar18 = 0x00000000;
		while (iVar18 < 0x00000005)
		{
			if (iVar8 >= Global_24B2D0.f_9B3.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0x00000000;
							bVar4 = 0x00000000;
						}
						else
						{
							bVar4 = 0x00000001;
						}
						if (uParam2->f_15)
						{
							fVar0 = func_151(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_151(vParam0, Global_24B2D0.f_99A, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = 0x00000001;
					}
					if ((func_75(Global_24B2D0.f_1E6) && iVar8 == Global_24B2D0.f_9B3.f_6[iVar18 /*10*/]) && iVar8 < 0x00001000)
					{
						if (!bVar21)
						{
							fVar2 = func_149(vParam0);
							bVar21 = 0x00000001;
						}
						if (fVar2 < Global_24B2D0.f_9B3.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_138(Var19, iVar18);
							Global_24B2D0.f_9B3.f_2 = 0x00000001;
							return;
						}
					}
					else if (iVar8 > Global_24B2D0.f_9B3.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2D0.f_9B3.f_6[iVar18 /*10*/] && fVar0 > Global_24B2D0.f_9B3.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_138(Var19, iVar18);
						Global_24B2D0.f_9B3.f_2 = 0x00000001;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_F)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_136(vParam0, fVar1, 0x00000001, 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000001);
						fVar6 = func_140(vParam0, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_135(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_135(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = 0x00000001;
					}
					if (iVar8 > Global_24B2D0.f_9B3.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2D0.f_9B3.f_6[iVar18 /*10*/] && fVar3 > Global_24B2D0.f_9B3.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_138(Var19, iVar18);
						Global_24B2D0.f_9B3.f_2 = 0x00000001;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_135(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_136(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = 0x00000000;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = 0x00000001;
					}
				}
			}
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_200(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if (func_137(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0x00000000 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar1), 0x00000000));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = 0x00000001;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam5 || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
						{
							if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar1), 0x00000000));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_137(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_138(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 0x461C3F9A;
	Var0 = { Global_24B2D0.f_9B3.f_6[iParam1 /*10*/] };
	Global_24B2D0.f_9B3.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 0x00000004)
	{
		func_138(Var0, iParam1 + 1);
	}
}

void func_139(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 0x461C3F9A;
	iVar2 = func_133();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] < iVar2)
		{
			Global_24BE46[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] == 0x00000000)
		{
			Global_24BE46[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		if (Global_24BE46[iVar0 /*10*/] > 0x00000000)
		{
			if (Global_24BE46[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_24BE46[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > 0xFFFFFFFF)
	{
		Global_24BE46[iVar4 /*10*/] = { Param0 };
	}
}

float func_140(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar7 = iVar0;
		if (func_6(iVar7, 0x00000001, 0x00000001) || (iParam5 == 0x00000001 && func_6(iVar7, 0x00000000, 0x00000000)))
		{
			if (!iVar7 == unk_0xD803B885F5E47A62() || iParam3 == 0x00000001)
			{
				bVar4 = 0x00000000;
				if (bParam1)
				{
					if (func_141(iVar7))
					{
						bVar4 = 0x00000001;
					}
				}
				if (bParam2)
				{
					if (unk_0x08067D4957B73C02(iVar7) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0x08067D4957B73C02(iVar7) == 0xFFFFFFFF || !func_118(unk_0xD803B885F5E47A62(), 0x00000001))
						{
							bVar4 = 0x00000001;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar7) || !bParam4)
					{
						if (func_137(iVar7))
						{
							vVar5 = { func_8(iVar7) };
							if (!iVar7 == unk_0xD803B885F5E47A62())
							{
								vVar6 = { unk_0x088E3BBDA11FE175(unk_0x9539D44F3E4492F6(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar5, 0x00000001);
							fVar2 = unk_0x0EB28750412C3A5A(vParam0, vVar6, 0x00000001);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_141(int iParam0)
{
	if (func_6(iParam0, 0x00000000, 0x00000001))
	{
		if (!func_147(iParam0))
		{
			if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (!unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
				{
					if (func_104(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
					{
						if (!func_146(unk_0x08067D4957B73C02(iParam0), unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()), 0x00000000))
						{
							return 0x00000001;
						}
					}
					else
					{
						return 0x00000001;
					}
				}
				else if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
				{
					if (!func_104(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
					{
						if (!func_142(iParam0))
						{
							return 0x00000001;
						}
					}
					else
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_142(int iParam0)
{
	if (func_145(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	Global_265942 = { func_144(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 0x00000001;
	}
	if (func_143(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

struct<13> func_144(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_145(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_144(iParam0) };
		Global_26594F = { func_144(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_265942))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_26594F))
			{
				unk_0xD9DA83C40D038174(&Global_2658FC, 0x00000023, &Global_265942);
				unk_0xD9DA83C40D038174(&Global_26591F, 0x00000023, &Global_26594F);
				if (Global_2658FC == Global_26591F)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_146(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0x00000001)
	{
		if (iParam0 == iParam1)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if ((iParam0 > 0xFFFFFFFF && iParam1 > 0xFFFFFFFF) && iParam0 == iParam1)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000000);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000001);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000002);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000003);
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000004);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000005);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000006);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000007);
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000008);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000009);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000A);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000B);
				
				default:
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000C);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000D);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000E);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000F);
				
				default:
			}
			break;
	}
	return 0x00000000;
}

int func_147(int iParam0)
{
	if (func_200(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_148())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 0x00000002))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_148()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

float func_149(vector3 vParam0)
{
	var uVar0;
	
	return func_150(vParam0, &(Global_24B2D0.f_2D), &uVar0);
}

float func_150(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0xFFFFFFFF;
	fVar2 = 1E+07f;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_A)
			{
				case 0x00000000:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_24B2D0.f_AA6) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 0x00000001:
				case 0x00000002:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_151(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0x00000000)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(0x00000008));
	}
	if (bParam2)
	{
		fVar0 = func_135(SYSTEM::VDIST(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_140(vParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
	fVar0 = func_135(fVar4, 0f, func_158(), func_156(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_154(vParam0);
	fVar0 = func_135(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && !func_118(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		fVar5 = 1f;
	}
	fVar4 = func_153(vParam0, unk_0xD803B885F5E47A62(), 0x00000000);
	fVar0 = func_135(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_152(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_135(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_135(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_135(SYSTEM::VDIST(Global_24B2D0.f_1FD, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_152(vector3 vParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0x8529439EA7EEBA65(vParam0, 0x00000001, &uVar3, &uVar2, 0x00000001, 3f, 0f);
	if (unk_0x5DD62183BBF151CD(iVar1))
	{
		unk_0x8502D8EBA9E78216(iVar1, &vVar0);
		*uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = unk_0x755FF954DAE327E1((vParam0.z - vVar0.z));
		return 0x00000001;
	}
	return 0x00000000;
}

float func_153(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_6(iParam1, 0x00000000, 0x00000001))
	{
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000020)
		{
			if (!iParam1 == iVar2 || iParam2 == 0x00000001)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0x00000000, 0x00000001))
				{
					if (unk_0x08067D4957B73C02(iVar3) != unk_0x08067D4957B73C02(iParam1) || (unk_0x08067D4957B73C02(iVar3) == 0xFFFFFFFF && unk_0x08067D4957B73C02(iParam1) == 0xFFFFFFFF))
					{
						if (Global_24E4E9.f_105[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_24E4E9.f_83[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_154(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar4, 0x00000002);
	fVar0 = 1E+07f;
	iVar2 = 0x00000000;
	while (iVar2 < iVar5)
	{
		if (unk_0xC844350D5D58C99A(uVar4[iVar2]))
		{
			if (!unk_0x437347B10A200C4B(uVar4[iVar2], 0x00000000))
			{
				if (func_155(uVar4[iVar2]))
				{
					vVar3 = { unk_0x68F4C0EC296D3901(uVar4[iVar2], 0x00000001) };
					fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar3, 0x00000001);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_24B2D0.f_B6D)
	{
		if (Global_EC947.f_10B > 0x00000000)
		{
			iVar2 = 0x00000000;
			while (iVar2 < Global_EC947.f_10B)
			{
				if (unk_0xC844350D5D58C99A(Global_EC947.f_98[iVar2]))
				{
					if (!unk_0x437347B10A200C4B(Global_EC947.f_98[iVar2], 0x00000000))
					{
						if (func_155(Global_EC947.f_98[iVar2]))
						{
							vVar3 = { unk_0x68F4C0EC296D3901(Global_EC947.f_98[iVar2], 0x00000001) };
							fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar3, 0x00000001);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xD09DF7101876AFB8(iParam0);
	switch (unk_0x256517DE1B6755D4(iVar0, 0x6F0783F5))
	{
		case 0x00000003:
		case 0x00000005:
			return 0x00000001;
			break;
	}
	if (unk_0x1C43D178459D5730(Global_180837[unk_0xD803B885F5E47A62()]))
	{
		switch (unk_0x256517DE1B6755D4(iVar0, Global_180837[unk_0xD803B885F5E47A62()]))
		{
			case 0x00000003:
			case 0x00000005:
				return 0x00000001;
				break;
			}
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000000)
	{
		iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
		if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000004)
		{
			if (unk_0x1C43D178459D5730(Global_180715[iVar1]))
			{
				switch (unk_0x256517DE1B6755D4(iVar0, Global_180715[iVar1]))
				{
					case 0x00000003:
					case 0x00000005:
						return 0x00000001;
						break;
					}
				}
			}
	}
	return 0x00000000;
}

float func_156()
{
	if (func_157())
	{
		if ((unk_0xC41A9202669A24C4(Global_24B2D0.f_2D.f_43) || unk_0xAFB8495D36825275(Global_24B2D0.f_2D.f_43)) || Global_24B2D0.f_2D.f_43 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_157()
{
	if (Global_24B2D0.f_2D.f_41 && !Global_24B2D0.f_2D.f_12D)
	{
		if (!func_147(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_158()
{
	if (func_157())
	{
		if ((unk_0xC41A9202669A24C4(Global_24B2D0.f_2D.f_43) || unk_0xAFB8495D36825275(Global_24B2D0.f_2D.f_43)) || Global_24B2D0.f_2D.f_43 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_159(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x558ADED8B93EA0F6(vParam0, fParam5)) || (fVar0 > 0f && unk_0xEA19D5D9230DBB67(vParam0, fVar0))) || ((iParam2 == 0x00000001 && fParam6 > 0f) && unk_0x9DD97B5335E52CB9(vParam0, fParam6, 0x00000000))) || ((iParam1 == 0x00000001 && fParam7 > 0f) && unk_0x9DD97B5335E52CB9(vParam0, fParam7, 0x00000001)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_160(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	switch (uParam0->f_A)
	{
		case 0x00000000:
			if (func_164(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_163(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (func_161(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_161(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)
{
	vector3 vVar0[8];
	int iVar1;
	
	func_162(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000008)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0x00000000, 0x00000001))
		{
			return 0x00000000;
		}
		iVar1++;
	}
	return 0x00000001;
}

void func_162(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_81(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(SYSTEM::VMAG(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0x00000000 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[0x00000001 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[0x00000002 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[0x00000003 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[0x00000004 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[0x00000005 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[0x00000006 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[0x00000007 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_163(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0x00000000 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[0x00000001 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[0x00000002 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[0x00000003 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[0x00000004 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[0x00000005 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[0x00000006 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[0x00000007 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000008)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0x00000000, 0x00000001))
		{
			return 0x00000000;
		}
		iVar1++;
	}
	return 0x00000001;
}

int func_164(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0x00000000 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[0x00000001 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[0x00000002 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[0x00000003 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0x00000000, 0x00000001))
		{
			return 0x00000000;
		}
		iVar1++;
	}
	return 0x00000001;
}

void func_165(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_94(vVar1);
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CBC3[iVar2])
	{
		if (func_93(vVar1, &(Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C6CD[iVar2 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CBC3[0x00000008])
	{
		if (func_93(vVar1, &(Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C6CD[0x00000008 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_166(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_24B2D0.f_2D.f_37)
	{
		if (unk_0x31609A585163CBAC(Global_24B2D0.f_2D.f_38))
		{
			if (!unk_0xD1BF3090E1F8300E(vParam0))
			{
				iVar0 = unk_0xFBD08BECC9B87937(vParam0);
				if (unk_0x31609A585163CBAC(iVar0))
				{
					iVar1 = unk_0x7C3DA83DB15FFBEB(iVar0);
					if (!iVar1 == Global_24B2D0.f_2D.f_39)
					{
						return 0x00000000;
					}
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
	}
	return 0x00000001;
}

int func_167(vector3 vParam0)
{
	switch (Global_24B2D0.f_9AF)
	{
		case 0x00000000:
			return func_203(vParam0, Global_24B2D0.f_99A, Global_24B2D0.f_99D, 0x00000000, 0x00000000);
			break;
		
		case 0x00000001:
			return func_122(vParam0, Global_24B2D0.f_9A8, Global_24B2D0.f_9AB, 0x00000000, 0x00000000);
			break;
		
		case 0x00000002:
			return unk_0x0399732A9EBC368E(vParam0, Global_24B2D0.f_9A8, Global_24B2D0.f_9AB, Global_24B2D0.f_9AE, 0x00000000, 0x00000001);
			break;
	}
	return 0x00000000;
}

int func_168(vector3 vParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 0x00000001;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0x00000000;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x0399732A9EBC368E(vParam0, vVar2, vVar3, fVar4, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		iVar1++;
	}
	return 0x00000000;
}

int func_169(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_83(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 0x3DCCCCCD, 0x00000000, 0x00000000);
				*uParam0 = { vVar1 };
			}
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_170(int iParam0)
{
	switch (func_120())
	{
		case 0x00000000:
			if (!func_28(iParam0))
			{
				if (Global_184507[iParam0 /*876*/] == 0x00000000)
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_171(int iParam0)
{
	if (func_104(iParam0, 0x00000001, 0x00000000))
	{
		if (Global_184507[iParam0 /*876*/] != 0x00000006)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_172(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_24B2D0.f_A39[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_173(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_110(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = unk_0x79833B02DBD2A244(0.01f, 360f);
			func_83(&vVar1, Global_24B2D0.f_24B, Global_24B2D0.f_24E, 0x3DCCCCCD, 0x00000000, fVar2);
			if (func_111(vVar1, &uVar0) || func_110(vVar1))
			{
				vVar1 = { *uParam0 };
				func_83(&vVar1, Global_24B2D0.f_24B, Global_24B2D0.f_24E, 0x3DCCCCCD, 0x00000001, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0x00000000;
}

int func_174(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_175(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_200(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_137(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0x00000000 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x0EB28750412C3A5A(func_175(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
								{
									if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
									{
										return 0x00000001;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam6 || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
						{
							if (unk_0x0EB28750412C3A5A(func_175(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

Vector3 func_175(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_177() && Global_184507[iVar0 /*876*/].f_34F) && !func_176(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_8(iParam0);
}

int func_176(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_177()
{
	return Global_2564C8.f_11;
}

int func_178(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_180(vParam0, fParam1, iParam2, iParam3, 0x00000000) || func_179(vParam0, iParam2, iParam4))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_179(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (!iParam1 == iVar0 || iParam2 == 0x00000001)
		{
			iVar2 = iVar0;
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000002)
			{
				if (!Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0x00000000)
				{
					if (func_96(vParam0, Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4, 0x3DCCCCCD))
					{
						if (func_6(iVar2, 0x00000000, 0x00000001) && func_6(iParam1, 0x00000000, 0x00000001))
						{
							return 0x00000001;
						}
						else
						{
							return 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_180(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (!iParam2 == iVar0 || iParam3 == 0x00000001)
		{
			iVar1 = iVar0;
			bVar2 = 0x00000000;
			if (bParam4)
			{
				if (func_6(iVar1, 0x00000000, 0x00000001) && func_6(iParam2, 0x00000000, 0x00000001))
				{
					if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(iParam2))
					{
						bVar2 = 0x00000001;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0x00000000, 0x00000001) && func_6(iParam2, 0x00000000, 0x00000001))
				{
					if (Global_24E4E9.f_105[iVar0])
					{
						if (SYSTEM::VDIST(Global_24E4E9.f_83[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 0x00000001;
						}
					}
					else if (SYSTEM::VDIST(func_8(iVar1), vParam0) < 1f)
					{
						return 0x00000001;
					}
				}
				else if (Global_24E4E9.f_105[iVar0])
				{
					if (SYSTEM::VDIST(Global_24E4E9.f_83[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 0x00000001;
					}
				}
				else if (func_6(iVar1, 0x00000000, 0x00000001))
				{
					if (SYSTEM::VDIST(func_8(iVar1), vParam0) < 1f)
					{
						return 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_181(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_24B2D0.f_3 = 0x00000000;
	if (!func_178(vParam0, 0.5f, unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000))
	{
		Global_24B2D0.f_3++;
		if (bParam3)
		{
			if (func_231(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0x00000000, bParam4, iParam5, fParam6, bParam13, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, fParam11, bParam12, 0x00000000))
			{
				Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
				if (!func_185(vParam0, fParam10))
				{
					Global_24B2D0.f_3++;
					if (!func_95(vParam0, 0x3F000000))
					{
						Global_24B2D0.f_3++;
						return 0x00000001;
					}
				}
			}
			else
			{
				Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_231(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0x00000000, bParam4, iParam5, fParam6, bParam13, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, fParam11, bParam12, 0x00000000))
			{
				Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
				if (!func_185(vParam0, fParam10))
				{
					Global_24B2D0.f_3++;
					if (!func_182(vParam0, fParam1, fParam7, fParam8, 0x40A00000))
					{
						Global_24B2D0.f_3++;
						if (!func_95(vParam0, 0x3F000000))
						{
							Global_24B2D0.f_3++;
							return 0x00000001;
						}
					}
				}
			}
			else
			{
				Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
			}
		}
		else if (func_231(vParam0, 6f, 5f, 5f, 5f, 0x00000000, bParam4, iParam5, fParam6, bParam13, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, fParam11, bParam12, 0x00000000))
		{
			Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
			if (!func_185(vParam0, fParam10))
			{
				Global_24B2D0.f_3++;
				if (!func_182(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_24B2D0.f_3++;
					if (!func_95(vParam0, 0x3F000000))
					{
						Global_24B2D0.f_3++;
						return 0x00000001;
					}
				}
			}
		}
		else
		{
			Global_24B2D0.f_3 = (Global_24B2D0.f_3 + Global_24B2D0.f_2);
		}
	}
	return 0x00000000;
}

int func_182(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if (!unk_0xD803B885F5E47A62() == iVar1)
		{
			if ((func_6(iVar1, 0x00000001, 0x00000001) && func_137(iVar1)) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (!func_184(unk_0xD803B885F5E47A62(), iVar1, 0xFFFFFFFE, 0x00000000))
				{
					if (func_183(func_8(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_183(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = SYSTEM::SIN(fParam2);
	vVar0.y = SYSTEM::COS(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return unk_0x0399732A9EBC368E(vParam0, vParam1, vVar1, fParam4, 0x00000000, 0x00000001);
}

bool func_184(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0xFFFFFFFE)
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && unk_0x08067D4957B73C02(iParam1) == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && iParam2 == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_185(vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 0x00000001, 0x00000001) && func_137(iVar1)) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
		{
			if ((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF) && !func_118(unk_0xD803B885F5E47A62(), 0x00000001))
			{
				return 0x00000000;
			}
			else if ((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && !unk_0xD803B885F5E47A62() == iVar1) || !func_184(unk_0xD803B885F5E47A62(), iVar1, 0xFFFFFFFE, 0x00000000))
			{
				if (SYSTEM::VDIST(vParam0, func_8(iVar1)) < fParam1)
				{
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_186(int iParam0)
{
	if ((Global_24B2D0.f_1E6 == 0x00000009 || Global_24B2D0.f_1E6 == 0x00000009) || (Global_24B2D0.f_1E6 == 0x0000000F && iParam0 == 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_187(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam6 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0x00000000)
		{
			if (func_6(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_137(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && iParam7) && bParam4) && func_142(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_8(iVar1), vParam0, 0x00000001) < fParam1)
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_188(vector3 vParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	if (!iVar3 == 0xFFFFFFFF)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0x00000001, 0x00000001))
			{
				if ((!func_200(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1)) && iVar1 != unk_0xD803B885F5E47A62())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
						{
							if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x08067D4957B73C02(iVar1) == iVar3)
					{
						if (unk_0x0EB28750412C3A5A(func_8(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
						{
							if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
							{
								return 0x00000001;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_189(int iParam0)
{
	if (((func_118(iParam0, 0x00000001) || func_191(iParam0)) || func_36(iParam0, 0x00000000)) || func_190(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_190(int iParam0)
{
	if (!func_6(iParam0, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

int func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/] != 0xFFFFFFFF;
	}
	return 0x00000000;
}

void func_192(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_1403FD)
	{
		iVar0 = 0x00000000;
		while (iVar0 < *uParam1)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar1 /*26*/].f_C, 0x0000000B))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2401A9[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2401A9[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2401A9[iVar1 /*26*/].f_6.f_2;
					func_194(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000000F)
	{
		iVar0 = 0x00000000;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_176F[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_40001.f_176F[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_194(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000000E)
	{
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000006)
		{
			iVar0 = 0x00000000;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_179D[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_40001.f_179D[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_194(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_1403DA)
	{
		iVar0 = 0x00000000;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_140131[iVar1 /*8*/].f_1 + Global_140131[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar5, vParam0) < SYSTEM::VDIST(vVar6, vParam0))
			{
				Var4 = { Global_140131[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_140131[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_140131[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_240065[iVar1 /*3*/] };
				func_193(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_193(var uParam0, var uParam1, int iParam2)
{
	Global_24CFB0 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_193(&Global_24CFB0, uParam1, iParam2 + 1);
	}
}

void func_194(var uParam0, var uParam1, int iParam2)
{
	Global_24CFAC = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_194(&Global_24CFAC, uParam1, iParam2 + 1);
	}
}

void func_195(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_24B2D0.f_8CE > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_24B2D0.f_8CE)
		{
			if (func_196(Global_24B2D0.f_8CF[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_24B2D0.f_8CF[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_24B2D0.f_8CF[iVar0 /*4*/] };
					fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
				}
				func_134(Global_24B2D0.f_8CF[iVar0 /*4*/], fVar2, uParam0, uParam1, 0x00000000, 0xFFFFFFFF);
				Global_24B2D0.f_9B3++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_24B2D0.f_B40)
	{
		func_128(&(Global_24B2D0.f_9B3.f_6[0x00000000 /*10*/]), &(Global_24B2D0.f_9B3.f_6[0x00000001 /*10*/]), &(Global_24B2D0.f_9B3.f_6[0x00000002 /*10*/]));
	}
}

int func_196(vector3 vParam0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0x00000000:
			return func_87(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 0x00000001:
		case 0x00000002:
			return func_87(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_B, uParam1->f_E);
		
		default:
	}
	return 0x00000000;
}

void func_197(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_123(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_198()
{
	return Global_14010B.f_4;
}

void func_199(float fParam0, float fParam1)
{
	func_238();
	func_230(fParam0, fParam1);
}

bool func_200(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_201(0xFFFFFFFF, 0x00000000) == 0x00000008;
	}
	else
	{
		bVar0 = Global_184507[iParam0 /*876*/].f_D3 == 0x00000008;
	}
	if (iParam1 == 0x00000001)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 0x00000008;
		}
	}
	return bVar0;
}

int func_201(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_202();
	}
	if (Global_140859[iVar1] == 0x00000001)
	{
		if (bParam1)
		{
		}
		iVar0 = 0x00000008;
	}
	else
	{
		iVar0 = Global_1407E3[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_202()
{
	return Global_1407E9;
}

bool func_203(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_204(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_24B2D0.f_6D2 > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (func_226(uParam0, uParam1, uParam2) == 0x00000000 && iVar0 < 0x00000002)
		{
			iVar0++;
		}
		if (iVar0 == 0x00000002)
		{
			uParam2->f_21 = 0x00000000;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0x00000000;
	while (func_205(uParam0, uParam1, uParam2) == 0x00000000 && iVar0 < 0x00000006)
	{
		iVar0++;
	}
}

int func_205(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0x00000000;
	if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
	{
		uParam2->f_23 = { *uParam0 };
	}
	if (uParam2->f_F)
	{
		if (func_107(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 0x00000001, 0x00000001))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_33)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_30)
	{
		if (func_225(uParam0, 0x00000001))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0x00000000;
	iVar8 = 0x00000001;
	if (uParam2->f_B)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0x00000000;
	}
	else if (uParam2->f_A == 0x00000000 || (uParam2->f_21 > 0x00000000 && uParam2->f_10))
	{
		iVar3++;
		iVar8 = 0x00000000;
	}
	iVar3 += 4;
	iVar11 = 3f;
	iVar12 = 5f;
	switch (uParam2->f_21)
	{
		case 0x00000000:
			iVar11 = 3f;
			iVar12 = 5f;
			break;
		
		case 0x00000001:
			iVar11 = 2.75f;
			iVar12 = 7.5f;
			break;
		
		default:
			iVar11 = 2.5f;
			iVar12 = 10f;
			break;
	}
	iVar13 = 0x00000000;
	Global_24CFBA.f_A2 = 0x00000000;
	Global_24CFBA.f_A3 = 0x00000000;
	Global_24CFBA.f_A4 = 0xFFFFFF9D;
	Global_24CFBA.f_A5 = { 0f, 0f, 0f };
	iVar14 = 0x00000000;
	while (iVar14 < 0x00000028)
	{
		Global_24CFBA[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_24CFBA.f_79[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 0x00000001;
	if (func_101(uParam2->f_22) != 0x00000000)
	{
		iVar15 = 0x00000003;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_12 = 0x00000000;
	}
	while (0x00000001)
	{
		iVar6 = unk_0x8529439EA7EEBA65(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, iVar11, iVar12);
		if (unk_0x5DD62183BBF151CD(iVar6))
		{
			unk_0x8502D8EBA9E78216(iVar6, &vVar1);
			bVar10 = 0x00000000;
			if (Global_24CFBA.f_A4 == iVar6)
			{
				bVar10 = 0x00000001;
			}
			Global_24CFBA.f_A5 = { vVar1 };
			if (((uParam2->f_A || uParam2->f_21 > 0x00000000) || !unk_0x5B33870CBB8B6AC1(iVar6)) || unk_0xD9DC3EBC8290FF92(iVar6))
			{
				unk_0x968116EE0D84C042(vVar1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(vVar1, uParam2->f_23) > uParam2->f_4)
				{
					if (!func_173(&vVar1, 0x00000000))
					{
						if ((uParam2->f_D || uVar5 & 0x00000040 == 0x00000000) || uParam2->f_21 == 0x00000001)
						{
							if (uParam2->f_E || uVar5 & 0x00000010 == 0x00000000)
							{
								if ((uVar5 & 0x00000080 == 0x00000000 && uVar5 & 0x00000100 == 0x00000000) && uVar5 & 0x00000200 == 0x00000000)
								{
									if (!func_224(vVar1))
									{
										vVar1 = { func_220(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, bVar10, 0x00000001, uParam2->f_33) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_95(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_23.f_2 - uParam2->f_7) || uParam2->f_21 >= 0x00000002)
												{
													if (vVar1.z <= (uParam2->f_23.f_2 + uParam2->f_6) || uParam2->f_21 >= 0x00000002)
													{
														if (func_219(vVar1, uParam2))
														{
															if ((uParam2->f_30 && !func_225(&vVar1, 0x00000000)) || uParam2->f_30 == 0x00000000)
															{
																bVar16 = 0x00000001;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + 0xFFFFFFFF);
																		bVar16 = 0x00000000;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_21 >= 0x00000002)
																	{
																		if ((uParam2->f_C && !func_215(vVar1, fVar2, uParam2->f_22, unk_0xD803B885F5E47A62(), 0x00000000, uParam2->f_38)) || !uParam2->f_C)
																		{
																			if (!uParam2->f_F || !func_107(uParam2->f_23, &vVar1, &(uParam2->f_26), &(uParam2->f_2D), 0x00000000, 0x00000001))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_1F;
																					bVar18 = 0x00000001;
																					iVar19 = 0x00000001;
																					fVar20 = uParam2->f_31;
																					if (!uParam2->f_37)
																					{
																						iVar17 = 0x00000000;
																						bVar18 = 0x00000000;
																						iVar19 = 0x00000000;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_11)
																					{
																						iVar17 = 0x00000000;
																						bVar18 = 0x00000000;
																						iVar19 = 0x00000000;
																						if (uParam2->f_21 == 0x00000001)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = 0x00000001;
																						iVar19 = 0x00000001;
																						if (uParam2->f_1C)
																						{
																							if (uParam2->f_21 == 0x00000001)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0x00000000;
																					if (!func_214(vVar1, fVar2, uParam2->f_22))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_231(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 0xFFFFFFFF, 0x00000001, uParam2->f_3, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
																							{
																								iVar21 = 0x00000001;
																							}
																						}
																						else if (func_231(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 0xFFFFFFFF, 0x00000001, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000) && !func_212(vVar1, fVar2, uParam2->f_22, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
																						{
																							iVar21 = 0x00000001;
																						}
																					}
																					if (iVar21 || uParam2->f_21 >= 0x00000002)
																					{
																						if (((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34) || uParam2->f_21 >= 0x00000002)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_34)
																							{
																								iVar22 = func_211(vVar1, uParam2->f_36, &fVar23);
																							}
																							if (!uParam2->f_34 || (uParam2->f_34 && iVar22 <= uParam2->f_35))
																							{
																								if (uParam2->f_34)
																								{
																									if (iVar22 < uParam2->f_35)
																									{
																										iVar14 = 0x00000000;
																										while (iVar14 < Global_24CFBA.f_A2)
																										{
																											Global_24CFBA[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_24CFBA.f_79[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_24CFBA.f_A2 = 0x00000000;
																										uParam2->f_35 = iVar22;
																									}
																								}
																								if (uParam2->f_1E)
																								{
																									if (Global_24CFBA.f_A2 == 0x00000000)
																									{
																										Global_24CFBA[0x00000000 /*3*/] = { vVar1 };
																										Global_24CFBA.f_79[0x00000000] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0x00000000;
																										while (iVar14 < Global_24CFBA.f_A2 + 1)
																										{
																											if (iVar14 < 0x00000028)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_23) < SYSTEM::VDIST2(Global_24CFBA[iVar14 /*3*/], uParam2->f_23))
																												{
																													func_210(vVar1, fVar2, iVar14);
																													iVar14 = Global_24CFBA.f_A2 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_24CFBA.f_A2++;
																									if (Global_24CFBA.f_A2 >= 0x00000005)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0x00000000) || uParam2->f_34 == 0x00000000)
																										{
																											iVar0 = 0x00000064;
																										}
																										else if (Global_24CFBA.f_A2 == 0x00000028)
																										{
																											iVar0 = 0x00000064;
																										}
																									}
																								}
																								else
																								{
																									Global_24CFBA[Global_24CFBA.f_A2 /*3*/] = { vVar1 };
																									Global_24CFBA.f_79[Global_24CFBA.f_A2] = fVar2;
																									Global_24CFBA.f_A2++;
																									if (func_219(vVar1, uParam2))
																									{
																										Global_24CFBA.f_A3++;
																									}
																									if (Global_24CFBA.f_A2 >= 0x0000000A)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0x00000000) || uParam2->f_34 == 0x00000000)
																										{
																											iVar0 = 0x00000064;
																										}
																										else if (Global_24CFBA.f_A2 == 0x00000028)
																										{
																											iVar0 = 0x00000064;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 0x00000001;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 0x00000001;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 0x00000064;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_20)
														{
															iVar0 = 0x00000064;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (0x00000028 + iVar13) || iVar0 >= 0x00000064)
			{
				if (Global_24CFBA.f_A2 > 0x00000000 && ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 0x00000002))
				{
					if (uParam2->f_1E)
					{
						*uParam0 = { Global_24CFBA[0x00000000 /*3*/] };
						*uParam1 = Global_24CFBA.f_79[0x00000000];
						return 0x00000001;
					}
					else
					{
						if (Global_24CFBA.f_A3 > 0x00000000 && !Global_24CFBA.f_A3 == Global_24CFBA.f_A2)
						{
							func_208(0x00000000, uParam2);
						}
						iVar24 = unk_0x09AC81E49EA267F7(0x00000000, Global_24CFBA.f_A2);
						if (uParam2->f_12 && uParam2->f_1E)
						{
							iVar24 = 0x00000000;
						}
						vVar25 = { Global_24CFBA[0x00000000 /*3*/] };
						uVar26 = Global_24CFBA.f_79[0x00000000];
						Global_24CFBA[0x00000000 /*3*/] = { Global_24CFBA[iVar24 /*3*/] };
						Global_24CFBA.f_79[0x00000000] = Global_24CFBA.f_79[iVar24];
						Global_24CFBA[iVar24 /*3*/] = { vVar25 };
						Global_24CFBA.f_79[iVar24] = uVar26;
						*uParam0 = { Global_24CFBA[0x00000000 /*3*/] };
						*uParam1 = Global_24CFBA.f_79[0x00000000];
						return 0x00000001;
					}
				}
				else
				{
					uParam2->f_21++;
					if (uParam2->f_21 < 0x00000003)
					{
						return 0x00000000;
					}
					else
					{
						func_207(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, iVar11, iVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_32)
						{
							bVar29 = 0x00000001;
						}
						else
						{
							bVar29 = 0x00000000;
						}
						if (func_107(uParam2->f_23, &vVar27, &(uParam2->f_26), &(uParam2->f_2D), bVar29, 0x00000001) || func_225(&vVar27, bVar29))
						{
							if (!uParam2->f_32)
							{
								uParam2->f_21 = 0x00000000;
								uParam2->f_32 = 0x00000001;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0x00000000;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 0x00000001;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 0x00000001;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 0x00000003)
			{
				return 0x00000000;
			}
			else
			{
				func_206(&Global_14053D, uParam0, uParam1, *uParam0);
				if (uParam2->f_B)
				{
					uParam2->f_1B = 0x00000001;
				}
				return 0x00000001;
			}
		}
		Global_24CFBA.f_A4 = iVar6;
	}
	return 0x00000000;
}

void func_206(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0xFFFFFFFF;
	iVar2 = 0x00000000;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_178(*(uParam0[iVar2 /*4*/]), 5f, unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == 0xFFFFFFFF)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_207(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001E)
	{
		*iParam2 = unk_0x09AC81E49EA267F7((0x00000001 + iParam0), (0x00000028 + iParam0));
		unk_0x4A13F7D4B1E239A0(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, iParam9, iParam10);
		*uParam3 = { func_220(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_B, uParam5->f_22, &bParam11, 0x00000000, 0x00000000, uParam5->f_33) };
		if (!func_224(*uParam3))
		{
			iVar0 = 0x000003E7;
			return;
		}
		iVar0++;
	}
}

void func_208(int iParam0, var uParam1)
{
	if (!func_219(Global_24CFBA[iParam0 /*3*/], uParam1))
	{
		Global_24CFBA.f_A2 = (Global_24CFBA.f_A2 - 0x00000001);
		func_209(iParam0);
		if (Global_24CFBA.f_A2 > Global_24CFBA.f_A3)
		{
			func_208(iParam0, uParam1);
		}
	}
	else if (iParam0 < 0x00000027)
	{
		func_208(iParam0 + 1, uParam1);
	}
}

void func_209(int iParam0)
{
	while (iParam0 < 0x00000027)
	{
		if (iParam0 < 0x00000027)
		{
			Global_24CFBA[iParam0 /*3*/] = { Global_24CFBA[iParam0 + 1 /*3*/] };
			Global_24CFBA.f_79[iParam0] = Global_24CFBA.f_79[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_210(vector3 vParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_24CFBA[iParam2 /*3*/] };
	uVar1 = Global_24CFBA.f_79[iParam2];
	Global_24CFBA[iParam2 /*3*/] = { vParam0 };
	Global_24CFBA.f_79[iParam2] = fParam1;
	if (iParam2 <= Global_24CFBA.f_A2 && iParam2 < 0x00000027)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_210(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_211(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar3 = iVar0;
		if (func_141(iVar3))
		{
			vVar1 = { func_8(iVar3) };
			fVar5 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_212(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam7 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam7 == 0x00000000)
		{
			if (func_6(iVar1, bParam3, bParam4))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam6 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_137(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && iParam8) && bParam5) && func_142(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar1), 0x00000000))
								{
									iVar3 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar1), 0x00000000);
									if (unk_0xC844350D5D58C99A(iVar3) && !unk_0x437347B10A200C4B(iVar3, 0x00000000))
									{
										iVar4 = unk_0x134B62B726CEC8E6(iVar3);
										vVar5 = { unk_0x68F4C0EC296D3901(iVar3, 0x00000000) };
										fVar6 = unk_0xD9522BA9E27E1349(iVar3);
										if (func_213(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0x00000000))
										{
											return 0x00000001;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_96(func_8(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_213(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_96(vParam0, vParam3, fParam4, iParam5, 0x3DCCCCCD))
	{
		return 0x00000001;
	}
	func_98(iParam2, &vVar2, &vVar3, 0x40C00000, 0x40600000, 0x40400000);
	vVar4 = { 0f, vVar3.y, 0f };
	func_84(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_84(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0x755FF954DAE327E1((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_84(&vVar6, 0f, 0f, fParam1);
	vVar1[0x00000000 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0x00000000 /*3*/].f_2 = (vVar1[0x00000000 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	vVar1[0x00000001 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[0x00000001 /*3*/].f_2 = (vVar1[0x00000001 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	vVar1[0x00000002 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[0x00000002 /*3*/].f_2 = (vVar1[0x00000002 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	vVar1[0x00000003 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[0x00000003 /*3*/].f_2 = (vVar1[0x00000003 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (func_96(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 0x3DCCCCCD))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_213(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_214(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 0x00000001;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 0x00020004);
	iVar1 = unk_0x83C1D4B63BBD91F6(vParam0, 30f, 0x00000000, iVar0);
	if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0x00000000))
	{
		iVar2 = unk_0x134B62B726CEC8E6(iVar1);
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000000) };
		fVar4 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_213(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0x00000000))
		{
			return 0x00000001;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x83C1D4B63BBD91F6(vParam0, 30f, 0x00000000, iVar0);
	if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0x00000000))
	{
		iVar2 = unk_0x134B62B726CEC8E6(iVar1);
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000000) };
		fVar4 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_213(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_215(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_218(vParam0, fParam1, iParam2, iParam3, iParam4) || func_216(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_216(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (!iParam3 == iVar0 || iParam4 == 0x00000001)
		{
			iVar2 = iVar0;
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000002)
			{
				if (func_217(vParam0, iParam2, Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_213(vParam0, fParam1, iParam2, Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4, 0x00000000))
					{
						if (func_6(iVar2, 0x00000000, 0x00000001) && func_6(iParam3, 0x00000000, 0x00000001))
						{
							return 0x00000001;
						}
						else
						{
							return 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_217(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_103(iParam1, 0x3C23D70A);
	fVar1 = func_103(iParam3, 0x3C23D70A);
	fVar2 = SYSTEM::VDIST(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_218(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (!iParam3 == iVar0 || iParam4 == 0x00000001)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0x00000000, 0x00000001) && func_6(iParam3, 0x00000000, 0x00000001))
			{
				if (Global_24E4E9.f_105[iVar0])
				{
					if (func_96(Global_24E4E9.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 0x3DCCCCCD))
					{
						return 0x00000001;
					}
				}
				else if (func_96(func_8(iVar1), vParam0, fParam1, iParam2, 0x3DCCCCCD))
				{
					return 0x00000001;
				}
			}
			else if (Global_24E4E9.f_105[iVar0])
			{
				if (func_96(Global_24E4E9.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 0x3DCCCCCD))
				{
					return 0x00000001;
				}
			}
			else if (func_6(iVar1, 0x00000000, 0x00000000))
			{
				if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
				{
					if (func_96(func_8(iVar1), vParam0, fParam1, iParam2, 0x3DCCCCCD))
					{
						return 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_219(vector3 vParam0, var uParam1)
{
	if (uParam1->f_12)
	{
		switch (uParam1->f_1A)
		{
			case 0x00000000:
				if (func_203(vParam0, uParam1->f_13, uParam1->f_19, 0x00000000, 0x00000000))
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (func_122(vParam0, uParam1->f_13, uParam1->f_16, 0x00000000, 0x00000000))
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000002:
				if (unk_0x0399732A9EBC368E(vParam0, uParam1->f_13, uParam1->f_16, uParam1->f_19, 0x00000000, 0x00000001))
				{
					return 0x00000001;
				}
				break;
		}
		return 0x00000000;
	}
	return 0x00000001;
}

Vector3 func_220(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(vParam4) > 0f)
		{
			if (!func_223(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	unk_0x968116EE0D84C042(vParam0, &uVar1, &uVar2);
	if (uVar2 & 0x00000400 == 0x00000000 && !bParam6)
	{
		unk_0xC05DA9D35DAF88FD(vParam0, 1f, 0x00000001, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 0x00000001;
		}
		if (bParam10)
		{
			if (!uVar2 & 0x00000080 == 0x00000000)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 0x00000100 == 0x00000000)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 0x00000200 == 0x00000000)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0xAFB8495D36825275(iParam7) && func_222(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = 0x00000001;
		}
		else
		{
			bVar8 = 0x00000000;
		}
		bVar9 = 0x00000000;
		if (bVar8)
		{
			if (iVar4 == 0x00000000)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = 0x00000001;
			}
		}
		else if (iVar5 == 0x00000000)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = 0x00000001;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 0x00000002)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 0x00000002)) * 1f));
					}
				}
				else if (iVar4 > 0x00000001)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 0x00000001)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 0x00000002)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 0x00000002)) * 1f));
					}
				}
				else if (iVar5 > 0x00000001)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 0x00000001)) * 1f));
				}
			}
			if (!uVar2 & 0x00000040 == 0x00000000)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 0x00000004 == 0x00000000 || !uVar2 & 0x00000008 == 0x00000000)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 0x00000020 == 0x00000000 && uVar2 & 0x00000004 == 0x00000000) && uVar2 & 0x00000008 == 0x00000000)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 0x00000008 == 0x00000000)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0x00000000)
			{
				if (uVar2 & 0x00000008 != 0x00000000)
				{
					fVar10 = func_221(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_221(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam4) > 0f)
	{
		if (!func_223(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 0x00000400 != 0x00000000 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { unk_0x8A5E176FF719A014(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x2E466A8362971293(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0x00000000)
			{
				vVar13 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
				if (uVar2 & 0x00000008 != 0x00000000)
				{
					fVar10 = func_221(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_221(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_221(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_98(iParam0, &fVar0, &fVar1, 0x40C00000, 0x40600000, 0x40400000);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_222(vector3 vParam0)
{
	float fVar0;
	
	if (unk_0xE82754C349C7B581(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0x00000000, 0x00000000))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_223(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_84(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_80(vVar1, vVar0) >= 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_224(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_94(vParam0);
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CE95[iVar1])
	{
		if (func_93(vParam0, &(Global_24CBD6[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_24CE95[0x00000008])
	{
		if (func_93(vParam0, &(Global_24CBD6[0x00000008 /*78*/][iVar0 /*7*/])))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_225(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (Global_24B2D0.f_1A.f_12)
	{
		switch (Global_24B2D0.f_1A.f_11)
		{
			case 0x00000000:
				if (func_203(*uParam0, Global_24B2D0.f_1A.f_A, Global_24B2D0.f_1A.f_10, 0x00000000, 0x00000000))
				{
					bVar0 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (func_122(*uParam0, Global_24B2D0.f_1A.f_A, Global_24B2D0.f_1A.f_D, 0x00000000, 0x00000000))
				{
					bVar0 = 0x00000001;
				}
				break;
			
			case 0x00000002:
				if (unk_0x0399732A9EBC368E(*uParam0, Global_24B2D0.f_1A.f_A, Global_24B2D0.f_1A.f_D, Global_24B2D0.f_1A.f_10, 0x00000000, 0x00000001))
				{
					bVar0 = 0x00000001;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_85(*uParam0, Global_24B2D0.f_1A.f_A, Global_24B2D0.f_1A.f_D, Global_24B2D0.f_1A.f_10, Global_24B2D0.f_1A.f_11, 0x3DCCCCCD, 0x00000000) };
			}
		}
	}
	return bVar0;
}

int func_226(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_24B2D0.f_6D2 > 0x00000000)
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000000;
		if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
		{
			uParam2->f_23 = { *uParam0 };
		}
		if (uParam2->f_F)
		{
			if (func_107(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 0x00000001, 0x00000001))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_30)
		{
			if (func_225(uParam0, 0x00000001))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_24CFBA.f_A2 = 0x00000000;
		Global_24CFBA.f_A3 = 0x00000000;
		iVar4 = 0x00000000;
		while (iVar4 < 0x00000028)
		{
			Global_24CFBA[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_24CFBA.f_79[iVar4] = 0f;
			iVar4++;
		}
		func_227(*uParam0);
		iVar0 = 0x00000000;
		while (iVar0 < Global_24B2D0.f_6D2)
		{
			iVar1 = Global_24B2D0.f_868[iVar0];
			if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000065)
			{
				vVar2 = { Global_24B2D0.f_6D3[iVar1 /*4*/] };
				fVar3 = Global_24B2D0.f_6D3[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_39 && SYSTEM::VDIST(vVar2, uParam2->f_23) > uParam2->f_4) || uParam2->f_39 == 0x00000000)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_C && !func_215(vVar2, fVar3, uParam2->f_22, unk_0xD803B885F5E47A62(), 0x00000000, uParam2->f_38)) || !uParam2->f_C)
							{
								if (!uParam2->f_F || !func_107(uParam2->f_23, &vVar2, &(uParam2->f_26), &(uParam2->f_2D), 0x00000000, 0x00000001))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_1F;
										bVar6 = 0x00000001;
										iVar7 = 0x00000001;
										fVar8 = uParam2->f_31;
										if (!uParam2->f_37)
										{
											iVar5 = 0x00000000;
											bVar6 = 0x00000000;
											iVar7 = 0x00000000;
											fVar8 = 1f;
										}
										else if (uParam2->f_11)
										{
											iVar5 = 0x00000000;
											bVar6 = 0x00000000;
											iVar7 = 0x00000000;
											if (uParam2->f_21 == 0x00000001)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = 0x00000001;
											iVar7 = 0x00000001;
											if (uParam2->f_1C)
											{
												if (uParam2->f_21 == 0x00000001)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = 0x00000000;
										if (!func_214(vVar2, fVar3, uParam2->f_22))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_231(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 0xFFFFFFFF, 0x00000001, uParam2->f_3, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
												{
													bVar9 = 0x00000001;
												}
											}
											else if (func_231(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 0xFFFFFFFF, 0x00000001, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000) && !func_212(vVar2, fVar3, uParam2->f_22, 0x00000001, 0x00000001, 0x00000000, 0x00000000, uParam2->f_3A, 0x00000000))
											{
												bVar9 = 0x00000001;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34)
											{
												fVar11 = 0f;
												if (uParam2->f_34)
												{
													iVar10 = func_211(vVar2, uParam2->f_36, &fVar11);
												}
												if (!uParam2->f_34 || (uParam2->f_34 && iVar10 <= uParam2->f_35))
												{
													if (uParam2->f_34)
													{
														if (iVar10 < uParam2->f_35)
														{
															iVar4 = 0x00000000;
															while (iVar4 < Global_24CFBA.f_A2)
															{
																Global_24CFBA[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_24CFBA.f_79[iVar4] = 0f;
																iVar4++;
															}
															Global_24CFBA.f_A2 = 0x00000000;
															uParam2->f_35 = iVar10;
														}
													}
													if (uParam2->f_1E)
													{
														if (Global_24CFBA.f_A2 == 0x00000000)
														{
															Global_24CFBA[0x00000000 /*3*/] = { vVar2 };
															Global_24CFBA.f_79[0x00000000] = fVar3;
														}
														else
														{
															iVar4 = 0x00000000;
															while (iVar4 < Global_24CFBA.f_A2 + 1)
															{
																if (iVar4 < 0x00000028)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_23) < SYSTEM::VDIST2(Global_24CFBA[iVar4 /*3*/], uParam2->f_23))
																	{
																		func_210(vVar2, fVar3, iVar4);
																		iVar4 = Global_24CFBA.f_A2 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_24CFBA.f_A2++;
														if (Global_24CFBA.f_A2 >= 0x00000005)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0x00000000) || uParam2->f_34 == 0x00000000)
															{
																iVar0 = Global_24B2D0.f_6D2;
															}
															else if (Global_24CFBA.f_A2 == 0x00000028)
															{
																iVar0 = Global_24B2D0.f_6D2;
															}
														}
													}
													else
													{
														Global_24CFBA[Global_24CFBA.f_A2 /*3*/] = { vVar2 };
														Global_24CFBA.f_79[Global_24CFBA.f_A2] = fVar3;
														Global_24CFBA.f_A2++;
														if (Global_24CFBA.f_A2 >= 0x0000000A)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0x00000000) || uParam2->f_34 == 0x00000000)
															{
																iVar0 = Global_24B2D0.f_6D2;
															}
															else if (Global_24CFBA.f_A2 == 0x00000028)
															{
																iVar0 = Global_24B2D0.f_6D2;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 0x00000001;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 0x00000001;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_24CFBA.f_A2 > 0x00000000)
		{
			if (uParam2->f_1E)
			{
				*uParam0 = { Global_24CFBA[0x00000000 /*3*/] };
				*uParam1 = Global_24CFBA.f_79[0x00000000];
				return 0x00000001;
			}
			else
			{
				if (Global_24CFBA.f_A3 > 0x00000000 && !Global_24CFBA.f_A3 == Global_24CFBA.f_A2)
				{
					func_208(0x00000000, uParam2);
				}
				iVar12 = unk_0x09AC81E49EA267F7(0x00000000, Global_24CFBA.f_A2);
				vVar13 = { Global_24CFBA[0x00000000 /*3*/] };
				uVar14 = Global_24CFBA.f_79[0x00000000];
				Global_24CFBA[0x00000000 /*3*/] = { Global_24CFBA[iVar12 /*3*/] };
				Global_24CFBA.f_79[0x00000000] = Global_24CFBA.f_79[iVar12];
				Global_24CFBA[iVar12 /*3*/] = { vVar13 };
				Global_24CFBA.f_79[iVar12] = uVar14;
				*uParam0 = { Global_24CFBA[0x00000000 /*3*/] };
				*uParam1 = Global_24CFBA.f_79[0x00000000];
				return 0x00000001;
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 0x00000002)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

void func_227(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_24B2D0.f_6D2)
	{
		uVar1 = func_228(vParam0, fVar0, &fVar0);
		Global_24B2D0.f_868[iVar2] = uVar1;
		iVar2++;
	}
}

int func_228(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 0xFFFFFFFF;
	fVar1 = 1E+08f;
	iVar3 = 0x00000000;
	while (iVar3 < Global_24B2D0.f_6D2)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_24B2D0.f_6D3[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_229(int iParam0)
{
	return iParam0 == 0x00000032;
}

void func_230(float fParam0, float fParam1)
{
	unk_0x8A1BBF3B7D62C45F(fParam0, fParam1, 0.1f);
	Global_24B2D0.f_9A2 = unk_0x0D0A574C76D769AC();
	Global_24B2D0.f_9A0 = 0x00000001;
	Global_24B2D0.f_9A3 = unk_0x2B6E0A53779D29EA();
}

int func_231(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_24B2D0.f_2 = 0x00000000;
	if (fParam1 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0, fParam1))
		{
			return 0x00000000;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xEA19D5D9230DBB67(vParam0, fParam2))
		{
			return 0x00000000;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam3, iParam16))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam11)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 2.5f) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (fParam12 > 0f)
	{
		if (func_187(vParam0, fParam12, 0x00000001, 0x00000001, bParam13, bParam15, bParam9, bParam13))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_174(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0x00000000;
			}
		}
	}
	Global_24B2D0.f_2++;
	return 0x00000001;
}

void func_232()
{
	func_237();
	func_236();
	func_235();
	func_234();
	func_233();
}

void func_233()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 0x461C3F9A;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000080)
	{
		Global_24BE46[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_234()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		Global_24B2D0.f_9B3.f_5A[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_235()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000008)
	{
		Global_24B2D0.f_9B3.f_39[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_236()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 0x461C3F9A;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000005)
	{
		Global_24B2D0.f_9B3.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_237()
{
	struct<6> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Global_24B2D0.f_9B3 = { Var0 };
}

void func_238()
{
	if (Global_24B2D0.f_9A0)
	{
		if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_9A2)
		{
			unk_0xDA46A23FFDBCF876();
		}
		else
		{
			unk_0xDA46A23FFDBCF876();
		}
		Global_24B2D0.f_9A0 = 0x00000000;
	}
}

int func_239(bool bParam0)
{
	if (unk_0x757EF87A33649210())
	{
		return 0x00002710;
	}
	if (bParam0)
	{
		return 0x00001388;
	}
	return 0x000003E8;
}

bool func_240(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Local_63.f_31;
			break;
	}
	return 0x00000000;
}

int func_242()
{
	if (iLocal_69 == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000004))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_243()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000000);
		if (iLocal_69 != 0x00000000)
		{
			return 0x00000001;
		}
		else if (func_6(iLocal_71, 0x00000001, 0x00000001))
		{
			if (unk_0x9BFC2168CB5FCF68(0x00000000, 0x00000000) - unk_0xA108079788452A90(0x00000000)) >= func_479(iLocal_69)
			{
				if (unk_0xA3FA8B6D2780D661(func_479(iLocal_69)))
				{
					iVar0 = 0x00000000;
					iVar1 = 0x00000000;
					iVar2 = unk_0x9539D44F3E4492F6(iLocal_71);
					iVar3 = unk_0x263615A674FCA6E9(iVar2, &uLocal_252, 0xFFFFFFFF);
					bVar4 = 0x00000001;
					iVar0 = 0x00000000;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = 0xFFFFFFFF;
							bVar4 = 0x00000000;
							iVar1 = 0x00000000;
							while (iVar1 < func_479(iLocal_69))
							{
								if (iVar5 == 0xFFFFFFFF)
								{
									if (((!unk_0xE9F78D191AD5EDBA(Local_63.f_A[iVar1 /*7*/]) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iVar1 /*7*/].f_2, 0x00000001)) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iVar1 /*7*/].f_2, 0x00000006)) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iVar1 /*7*/].f_2, 0x00000008))
									{
										iVar5 = iVar1;
										bVar4 = 0x00000001;
									}
								}
								iVar1++;
							}
							if (iVar5 != 0xFFFFFFFF)
							{
								if (unk_0xC844350D5D58C99A(uLocal_252[iVar0]))
								{
									if (!unk_0x437347B10A200C4B(uLocal_252[iVar0], 0x00000000))
									{
										if (!unk_0x34BFC6F0CB887BC2(uLocal_252[iVar0]))
										{
											if (func_245(unk_0x134B62B726CEC8E6(uLocal_252[iVar0])))
											{
												if (!unk_0xAF6690C489CC6203(uLocal_252[iVar0]))
												{
													if (!unk_0x405E212DDE472467(uLocal_252[iVar0], 0x00000000))
													{
														if (func_5(unk_0x68F4C0EC296D3901(uLocal_252[iVar0], 0x00000001), unk_0x68F4C0EC296D3901(iVar2, 0x00000001), 625f))
														{
															unk_0x73270B3C9CC833FD(uLocal_252[iVar0], 0x00000001, 0x00000000);
															Local_63.f_A[iVar5 /*7*/].f_6 = iVar0;
															unk_0x5D96D8530B3D0904(&(Local_63.f_A[iVar5 /*7*/].f_2), 0x00000008);
															if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x0000000C))
															{
																Local_63.f_8 = iLocal_74;
																unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x0000000C);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x0000000C))
	{
		iVar6 = 0x00000000;
		iVar7 = 0x00000000;
		bVar8 = 0x00000000;
		iVar6 = 0x00000000;
		while (iVar6 < func_479(iLocal_69))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iVar6 /*7*/].f_2, 0x00000001) || unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iVar6 /*7*/].f_2, 0x00000006))
			{
				iVar7++;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iVar6 /*7*/].f_2, 0x00000008))
			{
				if (!unk_0x437347B10A200C4B(uLocal_252[Local_63.f_A[iVar6 /*7*/].f_6], 0x00000000))
				{
					if (unk_0xAF6690C489CC6203(uLocal_252[Local_63.f_A[iVar6 /*7*/].f_6]))
					{
						if (!unk_0xAFE0D3608EDA7039(uLocal_252[Local_63.f_A[iVar6 /*7*/].f_6]))
						{
							unk_0x0C8A454B494DAA0D(uLocal_252[Local_63.f_A[iVar6 /*7*/].f_6]);
							bVar8 = 0x00000001;
						}
						else
						{
							unk_0xE3A2D2E900FEFBE7(uLocal_252[Local_63.f_A[iVar6 /*7*/].f_6], 0x00000001);
							Local_63.f_A[iVar6 /*7*/] = unk_0xE8C9CB886096272A(uLocal_252[Local_63.f_A[iVar6 /*7*/].f_6]);
							unk_0xF4F945BB00F6E31C(Local_63.f_A[iVar6 /*7*/], 0x00000001);
							unk_0x5D96D8530B3D0904(&(Local_63.f_A[iVar6 /*7*/].f_2), 0x00000000);
							Local_63.f_A[iVar6 /*7*/].f_1 = iLocal_69;
							Local_63.f_A[iVar6 /*7*/].f_4 = func_70(iLocal_69);
							func_68(iVar6);
							unk_0x0674E58A79778E99(&(Local_63.f_A[iVar6 /*7*/].f_2), 0x00000008);
							iVar7++;
						}
					}
					else
					{
						bVar8 = 0x00000001;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_8) > 0x00001388)
		{
			if (iVar7 >= func_479(iLocal_69))
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000004);
			}
			iVar6 = 0x00000000;
			while (iVar6 < 0x00000010)
			{
				uLocal_252[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0x00000000;
			while (iVar6 < func_479(iLocal_69))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iVar6 /*7*/].f_2, 0x00000008))
				{
					func_244(&(Local_63.f_A[iVar6 /*7*/]));
					unk_0x0674E58A79778E99(&(Local_63.f_A[iVar6 /*7*/].f_2), 0x00000008);
				}
				iVar6++;
			}
			unk_0x0674E58A79778E99(&(Local_63.f_1), 0x0000000C);
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_244(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*iParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*iParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_245(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == 0x1422D45B)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_246()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000006))
	{
		return 0x00000001;
	}
	else if (iLocal_69 == 0x00000000)
	{
		Local_63.f_31 = func_247(Local_63.f_24, 0x00000001);
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000006);
		return 0x00000001;
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000006);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_247(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	if (func_248(vParam0, 1301f, -1696f, 300f, 350f, 0x00000000))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_248(vParam0, 1100f, -196f, 300f, 350f, 0x00000000) || func_248(vParam0, 77f, 3657f, 100f, 150f, 0x00000000))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_248(vParam0, 208f, -1835f, 200f, 250f, 0x00000000))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_248(vParam0, -26f, -1450f, 200f, 250f, 0x00000000))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_248(vParam0, -654f, -922f, 300f, 350f, 0x00000000))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_248(vParam0, 1840f, 3657f, 450f, 500f, 0x00000000))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_248(vParam0, 550f, -1885f, 200f, 250f, 0x00000000))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 0x00000001)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000064);
		if (iVar0 < 0x00000021)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 0x00000042)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (vParam0.y > 800f)
		{
			iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000064);
			if (iVar0 < 0x00000021)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_248(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	return unk_0x0EB28750412C3A5A(vParam0, vParam1, bParam3) <= fParam2;
}

void func_249(int iParam0)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
	}
	Local_63.f_24 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	if (func_250(iParam0, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000011);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Local_63.f_1), 0x00000011);
	}
}

int func_250(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) || iParam1)
		{
			if (unk_0x70EED0761B82965E(iParam0))
			{
				if (unk_0xFC0E4F7E386C43F8(iParam0) >= 0.7f)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_251()
{
	bool bVar0;
	
	if (unk_0xBFF81ED3B99522C7())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000007))
		{
			return 0x00000001;
		}
		else
		{
			bVar0 = 0x00000000;
			switch (iLocal_69)
			{
				case 0x00000000:
					if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000B))
					{
						if (func_6(iLocal_71, 0x00000001, 0x00000001))
						{
							if (SYSTEM::VDIST2(func_8(iLocal_71), Local_63.f_27) > 625f)
							{
								unk_0x0674E58A79778E99(&(Local_63.f_2), 0x0000000B);
								unk_0x0674E58A79778E99(&iLocal_66, 0x00000008);
							}
						}
					}
					else
					{
						if (func_6(iLocal_71, 0x00000001, 0x00000001))
						{
							bVar0 = 0x00000001;
							if (func_254())
							{
								bVar0 = 0x00000000;
							}
						}
						if (bVar0)
						{
							func_63();
						}
						else
						{
							func_64();
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000005))
						{
							if (func_253())
							{
								func_64();
								unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000007);
							}
						}
					}
					break;
				
				case 0x00000001:
					if (func_6(iLocal_71, 0x00000001, 0x00000001))
					{
						bVar0 = 0x00000001;
						if (func_252())
						{
							bVar0 = 0x00000000;
						}
					}
					if (bVar0)
					{
						func_63();
					}
					else
					{
						func_64();
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000005))
					{
						if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_5) > 0x00007530)
						{
							func_64();
							unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000007);
						}
					}
					break;
				}
			}
	}
	return 0x00000000;
}

int func_252()
{
	int iVar0;
	
	iVar0 = unk_0x9539D44F3E4492F6(iLocal_71);
	if (((((unk_0xE934758D273C899A(iVar0) || unk_0x70EED0761B82965E(iVar0)) || func_29(iLocal_71, 0x00000001, 0x00000001)) || func_42(iLocal_71, 0x00000000)) || func_42(iLocal_71, 0x00000007)) || func_28(iLocal_71))
	{
		return 0x00000001;
	}
	if (func_118(iLocal_71, 0x00000001))
	{
		if (iLocal_71 > 0xFFFFFFFF)
		{
			if (Global_184507[iLocal_71 /*876*/] != 0x00000001)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_253()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000012))
	{
		if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_5) > 0x00001388)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x00000012);
			return 0x00000001;
		}
	}
	else if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_5) > 0x0000EA60)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_254()
{
	int iVar0;
	
	iVar0 = unk_0x9539D44F3E4492F6(iLocal_71);
	if (((((((((unk_0x9C66D99E63E8E24C(iVar0) > 10f || unk_0xE934758D273C899A(iVar0)) || unk_0x70EED0761B82965E(iVar0)) || func_29(iLocal_71, 0x00000001, 0x00000001)) || func_62(iLocal_71)) || func_42(iLocal_71, 0x00000000)) || func_42(iLocal_71, 0x00000007)) || func_28(iLocal_71)) || Global_25033E[iLocal_71 /*421*/].f_EE) || func_61(unk_0x9539D44F3E4492F6(iLocal_71), joaat("titan")))
	{
		return 0x00000001;
	}
	if (func_118(iLocal_71, 0x00000001))
	{
		if (iLocal_71 > 0xFFFFFFFF)
		{
			if (Global_184507[iLocal_71 /*876*/] != 0x00000001)
			{
				return 0x00000001;
			}
		}
	}
	if (iLocal_71 != 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_71 /*5*/].f_1, 0x00000004))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_255()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x0000000E))
	{
		Local_63.f_9 = iLocal_74;
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x0000000E);
	}
}

void func_256()
{
	if (Local_63.f_2C != Local_65[iLocal_70 /*5*/].f_4)
	{
		Local_63.f_2C = Local_65[iLocal_70 /*5*/].f_4;
	}
}

void func_257()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x0000000A))
	{
		Local_63.f_2D = func_479(iLocal_69);
		Local_63.f_2E = 0x00000000;
		Local_63.f_2F = 0x00000000;
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0x0000000A);
	}
}

void func_258()
{
	func_259();
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000008))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000007))
		{
			if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_7) > 0x000493E0)
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000008);
			}
		}
	}
}

void func_259()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000007))
	{
		Local_63.f_7 = iLocal_74;
		unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000007);
	}
}

void func_260()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000001))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000002))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000003))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000009))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000004))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000005))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x0000000B))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 0x00000007);
			if (Local_63.f_32 || Local_63.f_34)
			{
				unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
			}
			else if (func_374("MPCT_MERts", "FM_MERRYWEATHER", 0x00000055))
			{
				unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000006))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 0x00000007);
			if (Local_63.f_32 || Local_63.f_34)
			{
				unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
			}
			else if (func_374("MPCT_MERtd", "FM_MERRYWEATHER", 0x00000055))
			{
				unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000007))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 0x00000007);
			if (func_339())
			{
				if (!Local_63.f_32)
				{
					if (Local_63.f_34)
					{
						iLocal_253 = func_338(Local_63.f_35);
					}
					else
					{
						iLocal_253 = func_334(0x0000000C);
					}
					if (iLocal_253 > 0x00000000)
					{
						func_332(iLocal_253, 0x00000001, 0x00000000, 0f);
						func_317(iLocal_253, 0x00000004, 0x00000001, 0x00000001);
					}
					unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000000))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000001))
			{
				unk_0x0674E58A79778E99(&iLocal_66, 0x00000007);
				if (func_374("MPCT_mugfail", "LAMAR", 0x00000013))
				{
					unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
				}
			}
		}
		else if (unk_0xD803B885F5E47A62() == iLocal_71)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000C))
				{
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_40001.f_19F2) * Global_40001.f_10C6));
					func_276(0x00000000, "XPT_MEDIUMT", 0x91280CCE, 0x2D2286C6, iVar0, 0x00000001, 0xFFFFFFFF, 0x00000000);
					func_262(0x0000002F, 0x00000001);
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000008))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 0x00000007);
			if (func_339())
			{
				if (iLocal_69 == 0x00000000)
				{
					iLocal_253 = (func_334(0x00000002) * func_479(iLocal_69));
					iVar1 = 0x00000003;
				}
				else
				{
					if (Local_63.f_34)
					{
						iLocal_253 = func_338(Local_63.f_35);
					}
					else
					{
						iLocal_253 = func_334(0x0000000C);
					}
					iVar1 = 0x00000004;
				}
				if (!Local_63.f_32)
				{
					if (iLocal_253 > 0x00000000)
					{
						func_332(iLocal_253, 0x00000001, 0x00000000, 0f);
						func_317(iLocal_253, iVar1, 0x00000001, 0x00000000);
					}
					unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x0000000A))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 0x00000007);
			if (func_339())
			{
				if (iLocal_69 == 0x00000000)
				{
					iLocal_253 = (func_334(0x00000002) * func_479(iLocal_69));
					iVar2 = 0x00000003;
				}
				else
				{
					if (Local_63.f_34)
					{
						iLocal_253 = func_338(Local_63.f_35);
					}
					else
					{
						iLocal_253 = func_334(0x0000000C);
					}
					iVar2 = 0x00000004;
				}
				if (!Local_63.f_32)
				{
					if (iLocal_253 > 0x00000000)
					{
						func_332(iLocal_253, 0x00000001, 0x00000000, 0f);
						func_317(iLocal_253, iVar2, 0x00000001, 0x00000000);
					}
					unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000007);
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000007))
	{
		func_261();
	}
}

void func_261()
{
	unk_0x0674E58A79778E99(&(Global_184507[unk_0x6E61BE9E61434AC1() /*876*/].f_8F), iLocal_69);
	Global_184507[unk_0x6E61BE9E61434AC1() /*876*/].f_90 = 0xFFFFFFFF;
	if (iLocal_69 == 0x00000001)
	{
		if (unk_0xC77B2658E98CC4E5(uLocal_251))
		{
			unk_0x201044F0E8495AF6(uLocal_251);
		}
	}
	func_508();
	func_540();
}

int func_262(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_263(iParam0, iParam1);
}

int func_263(int iParam0, int iParam1)
{
	if (func_275(0x0000000E) && !func_274(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_7929 != 0x00000000 && !Global_12B4E)
	{
		return 0x00000000;
	}
	if (func_273(&Global_4127F1))
	{
		if (func_271(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_264(&Global_4127F1, iParam0))
		{
			return 0x00000001;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0x00000000;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000000;
}

int func_264(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_275(0x0000000E) && !func_274(iParam1))
	{
		return 0x00000000;
	}
	if (func_271(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_270(uParam0) < 0f)
	{
		func_269(uParam0, 0x00000000);
	}
	func_267(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_265(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_265(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_275(0x0000000E) && !func_274(iParam1))
	{
		return 0x00000000;
	}
	if (func_271(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_270(uParam0) < 0f)
	{
		func_269(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_266(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_266(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_267(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_268(uParam0, iVar0);
		iVar0++;
	}
	func_269(uParam0, (Global_4127F0 - 0.5f));
}

void func_268(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_269(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_270(var uParam0)
{
	return uParam0->f_50;
}

bool func_271(var uParam0, int iParam1)
{
	return func_272(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_272(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_273(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0x00000000;
}

bool func_275(int iParam0)
{
	return Global_A1D7 == iParam0;
}

var func_276(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_277(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_277(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_278(iParam0, 0x00000000, sParam1, iParam4, iParam5, 0x00000000, iParam6, 0x00000001, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_278(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_316(unk_0xD803B885F5E47A62()) || func_315(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_25A3 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_25A3;
		}
	}
	else if (func_313() || func_311(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_58F6 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_58F6;
		}
	}
	else if (Global_40001.f_19EB > 0x00003A98)
	{
		iVar2 = 0x00003A98;
	}
	else
	{
		iVar2 = Global_40001.f_19EB;
	}
	if (func_310(sParam2))
	{
	}
	if (func_309())
	{
		if (iParam4 < 0x00000001)
		{
			iParam4 = 0x00000001;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_307(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_306(&iVar1);
		}
		if (iParam1 == 0x00000000)
		{
			switch (iParam0)
			{
				case 0x00000002:
					func_304(0x00000000, &iVar1);
					break;
				
				case 0x00000003:
					func_304(0x00000001, &iVar1);
					break;
				
				case 0x00000001:
					func_302(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_19BCBA)
		{
			return 0x00000000;
		}
		if (iParam1 == 0x00000000)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 0x00000001)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 0x00000002 || iParam0 == 0x00000003)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_299(0x0000048C, iVar1, 0xFFFFFFFF);
			if (iParam1 == 0x00000000)
			{
				func_288((func_298(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0x00000000);
				if (iParam8 == 0x00000000)
				{
				}
				if (iParam9 == 0x00000000)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 0xFFFFFFFF)
				{
					func_299(0x0000048D, iVar1, 0xFFFFFFFF);
				}
				func_283(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 0xFFFFFFFF)
			{
				func_279((func_281(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_279((func_281(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_279(int iParam0)
{
	if (func_309())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_280(joaat("mpply_globalxp"), iParam0);
	}
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_281(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_6(iParam0, 0x00000000, 0x00000001))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_282(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_282(joaat("mpply_globalxp"));
		}
	}
	return 0x00000000;
}

int func_282(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_283(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_144(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_286(func_287(&Var0));
			if (iVar1 == 0x00000000)
			{
				func_285(&Global_152D8B, iParam0);
				func_284(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 0x00000001)
			{
				func_285(&Global_152D8C, iParam0);
				func_284(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 0x00000002)
			{
				func_285(&Global_152D8D, iParam0);
				func_284(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 0x00000003)
			{
				func_285(&Global_152D8E, iParam0);
				func_284(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 0x00000004)
			{
				func_285(&Global_152D8F, iParam0);
				func_284(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_284(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_152D86 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_152D89 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_152D8A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_152D8B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_152D8C = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_152D8D = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_152D8E = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_152D8F = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_152D90 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_152D91 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_152D92 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_152D93 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_152D94 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_152D95 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_152D96 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_286(int iParam0)
{
	if (iParam0 == Global_152D86)
	{
		return 0x00000000;
	}
	else if (iParam0 == Global_152D87)
	{
		return 0x00000001;
	}
	else if (iParam0 == Global_152D88)
	{
		return 0x00000002;
	}
	else if (iParam0 == Global_152D89)
	{
		return 0x00000003;
	}
	else if (iParam0 == Global_152D8A)
	{
		return 0x00000004;
	}
	else
	{
		return 0xFFFFFFFF;
	}
	return 0xFFFFFFFF;
}

int func_287(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_258BBD;
		}
	}
	return Global_258BBD;
}

void func_288(int iParam0, int iParam1, int iParam2)
{
	if (func_309())
	{
		if (iParam0 >= 0x6A8C4212)
		{
			iParam0 = 0x6A8C4212;
		}
		if (Global_40001.f_2583 == 0x00000000 && iParam1 != 0xBFCF576C)
		{
			if (iParam2 == 0x00000000)
			{
				if (iParam0 < Global_152E1C[func_297(0xFFFFFFFF)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 0xE0C5CB02, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_297(0xFFFFFFFF)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 == 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xBAEFBC23, 0xAFCE7619);
				if (iParam2 == 0x00000000)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 < 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xA169804B, iParam1);
				return;
			}
		}
		if (func_296(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_294(iParam0, 0x00000001);
		}
		func_293(0x0000027F, iParam0, 0xFFFFFFFF, 0x00000001);
		func_292(0x00000280, func_294(iParam0, 0x00000001), 0xFFFFFFFF, 0x00000001, 0x00000000);
		Global_152E1C[func_297(0xFFFFFFFF)] = iParam0;
		func_289(0xBDDC2B6E, 0x00000007, 0x00000000);
	}
}

void func_289(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_291(iParam1, iParam2))
	{
		iVar0 = func_290();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_290()
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

int func_291(int iParam0, var uParam1)
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

void func_292(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_297(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_293(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_297(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_297(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_297(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_297(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_297(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_297(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_297(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_297(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_297(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_297(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_297(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_297(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_294(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_295(iParam0, 0x00000000);
}

int func_295(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0x00000000)
	{
	}
	iVar1 = 0x00001F40;
	iVar2 = 0x00000000;
	iVar3 = ((iVar1 - iVar2) / 0x00000002);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000064)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 0x00001F40;
			if (iVar3 == 0x00000000)
			{
				iVar3 = 0x00000001;
			}
			return iVar3;
		}
		if (Global_4713D[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4713D[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 0x00000001);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 0x00001F40;
}

int func_296(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_1, iParam0);
	}
	return 0x00000001;
}

int func_297(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_202();
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

int func_298(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_297(0xFFFFFFFF)];
			}
			else if (func_296(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_297(0xFFFFFFFF)];
	}
	return 0x00000000;
}

void func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_301(iParam0, func_297(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_300(iParam0))
	{
		func_292(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_293(iParam0, iVar0, iParam2, 0x00000001);
	}
}

int func_300(int iParam0)
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

int func_301(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_297(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

void func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != 0xFFFFFFFF)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_146(unk_0x08067D4957B73C02(iVar5), iVar1, 0x00000000))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_145(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = 0x00000001;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_303(*iParam0, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 0x00000004)
	{
		iVar2 = 0x00000004;
	}
	if (iVar2 >= 0x00000002)
	{
		iVar7 = SYSTEM::ROUND((func_303(*iParam0, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_303(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_304(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_6(iVar4, 0x00000000, 0x00000001))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_145(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 0x00000001, 0x00000001))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_305(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_145(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_303(*iParam1, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 0x00000004)
	{
		iVar1 = 0x00000004;
	}
	if (iVar1 >= 0x00000001)
	{
		iVar6 = SYSTEM::ROUND((func_303(*iParam1, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_305(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_306(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 0x00000003)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_303(*iParam0, 0x00000064) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_307(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_298(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_298(unk_0xD803B885F5E47A62());
		}
	}
	if (func_308(0x00001F40, 0x00000000, 0x00000000) > 0x00000000)
	{
		if (func_308(0x00001F40, 0x00000000, 0x00000000) < (iParam0 + func_298(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_308(0x00001F40, 0x00000000, 0x00000000) - func_298(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_308(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0x00000000)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 0x00001F40)
	{
		iParam0 = 0x00001F40;
	}
	return Global_4713D[iParam0];
}

int func_309()
{
	return 0x00000001;
}

int func_310(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 0x00000001;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_311(int iParam0)
{
	return func_312(func_39(iParam0));
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E9:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_313()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_177();
	}
	return func_314(Global_440000.f_2F9AE);
}

int func_314(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_40001.f_1390[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_315(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_316(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

void func_317(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_331(iParam1), 16);
	StringCopy(&Var1, func_330(iParam2), 32);
	switch (iParam1)
	{
		case 0x00000000:
			iVar2 = 0x4CBAC3AA;
			break;
		
		case 0x00000001:
			iVar2 = 0x29358006;
			break;
		
		case 0x00000002:
			iVar2 = 0x5841CC24;
			break;
		
		case 0x00000003:
			iVar2 = 0x5A26EAEF;
			break;
		
		case 0x00000004:
			iVar2 = 0x2183C4D7;
			break;
		
		case 0x00000005:
			iVar2 = 0xF6C6F8D3;
			break;
		
		case 0x00000006:
			iVar2 = 0xAEC77375;
			break;
		
		case 0x00000007:
			iVar2 = 0x267CBC1B;
			break;
		
		case 0x00000008:
			iVar2 = 0x2DC5587F;
			break;
		
		case 0x00000009:
			iVar2 = 0x8A91E076;
			break;
		
		case 0x0000000A:
			iVar2 = 0x2AD8ED30;
			break;
		
		case 0x0000000B:
			iVar2 = 0x8B70731D;
			break;
		
		case 0x0000000C:
			iVar2 = 0x3530C574;
			break;
		
		case 0x0000000D:
			iVar2 = 0xAAF2EA7A;
			break;
		
		case 0x0000000E:
			iVar2 = 0xD8630BC3;
			break;
		
		case 0x0000000F:
			iVar2 = 0x6F225978;
			break;
		
		case 0x00000010:
			iVar2 = 0x0CD9EBA6;
			break;
		
		case 0x00000011:
			iVar2 = 0xBE60A029;
			break;
	}
	if (func_51())
	{
		func_318(iVar2, iParam0, &iVar3, bParam3, bParam3, 0x00000000);
		Global_411012[iVar3 /*85*/].f_E.f_28 = { Var0 };
		Global_411012[iVar3 /*85*/].f_E.f_2C = { Var1 };
	}
	else
	{
		unk_0x70C6C7E43DEB92C4(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_318(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_51())
	{
		return;
	}
	iVar0 = 0x00000001;
	if (bParam4)
	{
		iVar0 = 0x00000004;
	}
	else if (bParam3)
	{
		iVar0 = 0x00000002;
	}
	else if (bParam5)
	{
		iVar0 = 0x00000008;
	}
	switch (iParam0)
	{
		case 0x9DEFCB5B:
		case 0xDD16A585:
		case 0xAEF994E9:
		case 0x1B14F96B:
		case 0xC571DB3D:
		case 0x61F840EB:
		case 0x847B5E8A:
		case 0x26C85CA3:
		case 0x62A4B6CC:
		case 0xCBBC5D1E:
		case 0x040E0F34:
		case 0x8180486D:
		case 0x15DAFB97:
		case 0x10E398B4:
		case 0x11611C06:
		case 0x467E2916:
		case 0xE13B1F5A:
		case 0x3DC70F44:
		case 0x108CD6EE:
		case 0x79D2BE32:
		case 0x6DA50854:
		case 0x3CF098E4:
		case 0x73AF3590:
		case 0xAD32107E:
		case 0x2A6B291E:
		case 0x6597C63C:
		case 0x5A58E3BD:
		case 0x45F48C05:
		case 0xCA5E1B40:
		case 0xD86D0371:
		case 0x48090EBA:
		case 0xDB72FD6E:
		case 0xD80064A4:
		case 0xE7BA9A2C:
		case 0xD30E80F5:
		case 0x8F9E64E9:
		case 0x7323DAB3:
		case 0x3F79E8B3:
		case 0xF54343EF:
		case 0x7F096F7D:
		case 0x601646D2:
		case 0xE1286116:
		case 0x741DADD0:
		case 0x421452FF:
		case 0x92AEAB9C:
		case 0xB62639D4:
		case 0xF2BEFF3E:
		case 0xB3E76D2C:
		case 0x5D40F1F0:
		case 0xFA3E19A3:
		case 0x2C41A631:
		case 0x7A31F111:
		case 0x978B277B:
		case 0x25CFCEFF:
		case 0x6E53C312:
		case 0x2D80114E:
		case 0x73BA02A6:
		case 0x27A4C3FB:
		case 0xB0AE4A42:
		case 0x75CD3B70:
		case 0x10077806:
		case 0x6F6E2AEA:
		case 0xEBECC7F6:
		case 0xABCC04E3:
		case 0x24D87C9E:
		case 0x3A732240:
		case 0x1A108B80:
		case 0xF7E7A848:
		case 0xC88FBB63:
		case 0xAB4EA4F8:
		case 0x98AE71E5:
		case 0x8F2EC53A:
		case 0xA3DDECA8:
		case 0x798D498F:
		case 0x17FDC07D:
		case 0xBBD76B5A:
		case 0x6405F5A6:
		case 0x31F23149:
		case 0xA4A86838:
		case 0x6C36F5BD:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_319(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0xFE249573:
		case 0xC2C5E339:
		case 0xACA75AAE:
		case 0x628502B3:
		case 0xFC8D0020:
		case 0xB77DD8B4:
		case 0xFD389995:
		case 0xEAFF75BD:
		case 0xC4F96E65:
		case 0x2195C3D1:
		case 0x676706D3:
		case 0x381AE70B:
		case 0xB94DDB9B:
		case 0x89AD02CE:
		case 0xBCD304B8:
		case 0xF97DB87A:
		case 0x129A5B6E:
		case 0x762D6BF6:
		case 0xD89979EE:
		case 0x4D8C639E:
		case 0xA174F633:
		case 0x176D9D54:
		case 0x016B1CDE:
		case 0xBFCBE6B6:
		case 0x6A22D039:
		case 0x862FB02E:
		case 0x8D682613:
		case 0x4CBAC3AA:
		case 0x29358006:
		case 0x5841CC24:
		case 0x5A26EAEF:
		case 0x2183C4D7:
		case 0xF6C6F8D3:
		case 0xAEC77375:
		case 0x267CBC1B:
		case 0x2DC5587F:
		case 0x8A91E076:
		case 0x2AD8ED30:
		case 0x8B70731D:
		case 0x3530C574:
		case 0xAAF2EA7A:
		case 0x506A6AF5:
		case 0x60988977:
		case 0x74EC47CE:
		case 0x0C92ECEF:
		case 0xFC71898E:
		case 0x67878154:
		case 0xA87819A3:
		case 0x06A679FE:
		case 0x5AEF7C87:
		case 0x39B3A1A7:
		case 0x5E0B0A1C:
		case 0xC84D30CC:
		case 0xB8D124BE:
		case 0xF353DF93:
		case 0xCF63BF45:
		case 0x3E7AA93E:
		case 0x21ECDA63:
		case 0xCCFA5F2D:
		case 0x328CD5AA:
		case 0xFD2A7DE7:
		case 0xEE884170:
		case 0x1B9AFE05:
		case 0x5C66709A:
		case 0xF9F62A7C:
		case 0xD8630BC3:
		case 0x23C04B23:
		case 0xEC745CB2:
		case 0x20D60B56:
		case 0x31D3FC9B:
		case 0x50503398:
		case 0x3EBB7442:
		case 0x8107BB89:
		case 0xB6D37A76:
		case 0x6F225978:
		case 0x0CD9EBA6:
		case 0xCBC91B24:
		case 0xD4E9820B:
		case 0x53E15D9D:
		case 0xA1DC5A42:
		case 0xFE5D3D39:
		case 0x46521174:
		case 0x370A42A5:
		case 0xED97AFC1:
		case 0x23F59C7C:
		case 0xFF3F6FB2:
		case 0xED74CC1D:
		case 0x33E1D8F6:
		case 0xC5ED889C:
		case 0xFFC0D962:
		case 0xB99C11F6:
		case 0x8DACDD38:
		case 0x32537662:
		case 0x7353182D:
		case 0x6E63A5AC:
		case 0x7D1FD84C:
		case 0x7462F9E7:
		case 0xBA16F44B:
		case 0x87DF725B:
		case 0xA2228687:
		case 0xC6B7C57F:
		case 0x43ADDE78:
		case 0x4B6A869C:
		case 0xDA2AD714:
		case 0x29849CDA:
		case 0x180D054D:
		case 0xCB511DC2:
		case 0xC0925945:
		case 0xAD5032C1:
		case 0xD54402B0:
		case 0x43D5DFD2:
		case 0xDE8FA2AB:
			func_319(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
	switch (iParam0)
	{
		case 0xB001B7EB:
		case 0x9B0E293D:
		case 0x6F581424:
		case 0xD670D38D:
		case 0xB2C78A3D:
		case 0x367BBE86:
		case 0x178D16AE:
		case 0xEC365EEC:
		case 0x63A19A7F:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_319(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0x49F3549B:
		case 0x4A05F619:
		case 0xBE60A029:
		case 0xE285893D:
		case 0x314FB8B0:
		case 0x9145F938:
		case 0x653BCC2D:
		case 0x3F0A835A:
		case 0x6BEA24A6:
		case 0x1AE83BEC:
		case 0x3126BC47:
		case 0x4ABE30A4:
		case 0xA20EEA82:
		case 0x59E889DD:
		case 0x552534EE:
		case 0x8D9EE291:
		case 0x4B318D68:
		case 0x465B7057:
		case 0x545237BE:
		case 0x0F9590A2:
		case 0x87246378:
		case 0x87B8E853:
		case 0x6374FB50:
		case 0x86DA0F67:
		case 0xB703ED29:
		case 0xECF7C43F:
		case 0xE4315BE0:
		case 0x72CBE556:
		case 0x234B8864:
		case 0x7954FD0F:
		case 0x5D7FD908:
		case 0x48B92E52:
		case 0x7A3568F7:
		case 0x235376A5:
		case 0x69D9B7DA:
		case 0xCDCF2380:
			func_319(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_319(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_51())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_202()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam3 == 0x3FA29128 || iParam3 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	bVar3 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		if (Global_411012[iVar2 /*85*/].f_42.f_2 == 0x00000000)
		{
			bVar3 = 0x00000001;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0x00000000;
	}
	*uParam0 = 0x00000005;
	iVar4 = 0x7FFFFFFF;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_326(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 0xFFFFFFFF)
				{
					Global_411012[*uParam0 /*85*/].f_42.f_8 = 0x00000001;
					Global_411012[*uParam0 /*85*/].f_42.f_C = 0x00000001;
				}
			}
			Global_411249 = 0x00000001;
			return 0x00000001;
		}
	}
	else
	{
		if (iParam7 & 0x00000002 != 0x00000000)
		{
			Global_411257 = 0x00000001;
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		if (iParam7 & 0x00000008 != 0x00000000)
		{
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		bVar5 = 0x00000000;
		if (bVar5)
		{
			func_325(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_320(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_320(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_321(iParam0);
	}
}

void func_321(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_51())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_324(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_411012[iParam0 /*85*/].f_42);
		}
		func_322(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_322(var uParam0)
{
	uParam0->f_42 = 0x00000000;
	uParam0->f_42 = 0x7FFFFFFF;
	uParam0->f_42.f_1 = 0x00000000;
	uParam0->f_42.f_2 = 0x00000000;
	uParam0->f_42.f_3 = 0xA10AED30;
	uParam0->f_42.f_4 = 0x83B4A55B;
	uParam0->f_42.f_5 = 0x00000000;
	uParam0->f_42.f_6 = 0x492B4A93;
	uParam0->f_42.f_7 = 0xBABFD2A5;
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_D = 0x00000000;
	uParam0->f_2 = 0x00000000;
	func_323(&(uParam0->f_E));
	func_323(&(uParam0->f_E.f_D));
	StringCopy(&(uParam0->f_E.f_1A), "", 32);
	StringCopy(&(uParam0->f_E.f_22), "", 24);
	StringCopy(&(uParam0->f_E.f_28), "", 16);
	StringCopy(&(uParam0->f_E.f_2C), "", 32);
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_42.f_8 = 0x00000000;
	uParam0->f_42.f_9 = 0x00000000;
	uParam0->f_42.f_A = 0x00000000;
	uParam0->f_42.f_B = 0x00000000;
	uParam0->f_42.f_D = 0x00000000;
	uParam0->f_42.f_C = 0x00000000;
	uParam0->f_42.f_E = 0x00000000;
	uParam0->f_42.f_F = 0x00000000;
	uParam0->f_42.f_10 = 0x00000000;
	uParam0->f_42.f_12 = 0x00000000;
}

void func_323(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000000;
}

int func_324(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_325(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_51())
			{
				iParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 0x00000001;
			Global_411012[iVar0 /*85*/].f_42.f_1 = iParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = iParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = iParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42 = iParam0;
			Global_411012[iVar0 /*85*/].f_42.f_6 = iParam4;
			Global_411012[iVar0 /*85*/].f_42.f_B = uParam8;
			Global_411012[iVar0 /*85*/].f_42.f_A = iParam7;
			Global_411012[iVar0 /*85*/].f_42.f_D = iParam9;
			Global_411012[iVar0 /*85*/].f_42.f_C = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			Global_411012[iVar0 /*85*/].f_42.f_12 = 0x00000000;
			Global_411249 = 0x00000000;
			if (bParam6)
			{
				Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000001;
			}
			if (iParam1 == 0xBC537E0D && iParam10)
			{
				func_327(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_327(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0x00000000)
	{
		return;
	}
	vVar0.f_2 = 0x7FFFFFFF;
	vVar0.x = 0x110AC69F;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_42 };
	vVar0.f_2.f_21 = iParam19;
	iVar1 = func_329(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_328();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_328()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_329(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "NOTREACHTARGET";
			break;
		
		case 0x00000001:
			return "TARGET_ESCAPE";
			break;
		
		case 0x00000002:
			return "DELIVERY_FAIL";
			break;
		
		case 0x00000003:
			return "NOT_USED";
			break;
		
		case 0x00000004:
			return "TEAM_QUIT";
			break;
		
		case 0x00000005:
			return "SERVER_ERROR";
			break;
		
		case 0x00000006:
			return "RECEIVE_LJ_L";
			break;
		
		case 0x00000008:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "BACKUP_VAGOS";
		
		case 0x00000001:
			return "BACKUP_LOST";
		
		case 0x00000002:
			return "BACKUP_FAMILIES";
		
		case 0x00000003:
			return "HIRE_MUGGER";
		
		case 0x00000004:
			return "HIRE_MERCENARY";
		
		case 0x00000005:
			return "BUY_CARDROPOFF";
		
		case 0x00000006:
			return "HELI_PICKUP";
		
		case 0x00000007:
			return "BOAT_PICKUP";
		
		case 0x00000008:
			return "CLEAR_WANTED";
		
		case 0x00000009:
			return "HEAD_2_HEAD";
		
		case 0x0000000A:
			return "CHALLENGE";
		
		case 0x0000000B:
			return "SHARE_LAST_JOB";
		
		case 0x0000000D:
			return "REFUNDAPPEA";
		
		case 0x0000000E:
			return "AMMO_DROP_REF";
		
		case 0x0000000F:
			return "ORBITAL_MANUAL";
		
		case 0x00000010:
			return "ORBITAL_AUTO";
		
		case 0x00000011:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_332(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 0x00000001)
	{
		iParam1 = 0x00000001;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0x00000000)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_4 = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 = (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 + iVar1);
	if (iParam2 == 0x00000001)
	{
		func_333(iVar1, 0x00000000);
	}
}

void func_333(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_334(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (func_337(iParam0) >= 0x00000000)
	{
		iVar0 = func_337(iParam0);
	}
	else
	{
		iVar0 = func_335(iParam0);
	}
	return iVar0;
}

int func_335(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x000003E8;
			break;
		
		case 0x0000000A:
			return 0x00001388;
			break;
		
		case 0x0000000B:
			return 0x00001F40;
			break;
		
		case 0x00000008:
			return 0x000003E8;
			break;
		
		case 0x00000000:
			return 0x000001F4;
			break;
		
		case 0x00000009:
			return 0x000000FA;
			break;
		
		case 0x0000000D:
			return 0x000003E8;
			break;
		
		case 0x0000000C:
			return 0x00001D4C;
			break;
		
		case 0x00000002:
			return 0x000003E8;
			break;
		
		case 0x0000000E:
			return 0x000001F4;
			break;
		
		case 0x00000014:
			if (func_336())
			{
				return 0x00000000;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000001)
			{
				return 0x000000C8;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000002)
			{
				return 0x00000190;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000003)
			{
				return 0x00000258;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000004)
			{
				return 0x00000320;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000005)
			{
				return 0x000003E8;
			}
			break;
		
		case 0x00000006:
			return 0x000001F4;
			break;
		
		case 0x00000016:
			return 0x000000C8;
			break;
		
		case 0x00000017:
			return 0x00000190;
			break;
		
		case 0x00000018:
			return 0x000002BC;
			break;
		
		case 0x00000019:
			return 0x00000064;
			break;
		
		case 0x0000001A:
			return 0x000003E8;
			break;
		
		case 0x00000039:
			return 0x000002BC;
			break;
		
		case 0x00000023:
			return 0x00001388;
			break;
		
		case 0x0000000F:
			return 0x00000000;
			break;
		
		case 0x00000011:
			return 0x00000000;
			break;
		
		case 0x00000012:
			return 0x00000000;
			break;
		
		case 0x00000013:
			return 0x00000000;
			break;
		
		case 0x00000015:
			return 0x00000000;
			break;
		
		case 0x00000024:
			return 0x00000000;
			break;
		
		case 0x00000027:
			return 0x000000C8;
			break;
		
		case 0x00000028:
			return 0x000003E8;
		
		case 0x00000029:
			return 0x000002EE;
		
		case 0x0000002A:
			return 0x00000000;
	}
	return 0x00000000;
}

bool func_336()
{
	return unk_0xEAE0D21A50E6C7F4(func_301(0x00001918, 0xFFFFFFFF, 0x00000000), 0x00000013);
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return Global_40001.f_19F5;
			break;
		
		case 0x0000000A:
			return Global_40001.f_1016;
			break;
		
		case 0x0000000B:
			return Global_40001.f_1017;
			break;
		
		case 0x00000008:
			return Global_40001.f_1014;
			break;
		
		case 0x00000000:
			return Global_40001.f_1006;
			break;
		
		case 0x00000009:
			return Global_40001.f_1015;
			break;
		
		case 0x0000000D:
			return Global_40001.f_1019;
			break;
		
		case 0x0000000C:
			return Global_40001.f_1018;
			break;
		
		case 0x00000002:
			return Global_40001.f_1010;
			break;
		
		case 0x0000000E:
			return Global_40001.f_101A;
			break;
		
		case 0x00000014:
			if (func_336())
			{
				return 0x00000000;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000001)
			{
				return Global_40001.f_19FC;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000002)
			{
				return Global_40001.f_19FD;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000003)
			{
				return Global_40001.f_19FE;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000004)
			{
				return Global_40001.f_19FF;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000005)
			{
				return Global_40001.f_1A00;
			}
			break;
		
		case 0x00000006:
			return Global_40001.f_1013;
			break;
		
		case 0x00000016:
			return Global_40001.f_1020;
			break;
		
		case 0x00000017:
			return Global_40001.f_1021;
			break;
		
		case 0x00000018:
			return Global_40001.f_1022;
			break;
		
		case 0x00000019:
			return Global_40001.f_1023;
			break;
		
		case 0x0000001A:
			return Global_40001.f_1024;
			break;
		
		case 0x00000023:
			return Global_40001.f_1C35;
			break;
		
		case 0x0000000F:
			return Global_40001.f_19F6;
			break;
		
		case 0x00000011:
			return Global_40001.f_19F6;
			break;
		
		case 0x00000012:
			return Global_40001.f_19F6;
			break;
		
		case 0x00000013:
			return Global_40001.f_19F6;
			break;
		
		case 0x00000015:
			return Global_40001.f_19F6;
			break;
		
		case 0x00000024:
			return Global_40001.f_1E08;
			break;
		
		case 0x00000027:
			return 0xFFFFFFFF;
			break;
		
		case 0x00000028:
			return Global_40001.f_3254;
			break;
		
		case 0x00000029:
			return Global_40001.f_3255;
			break;
		
		case 0x0000002A:
			return Global_40001.f_3256;
			break;
		
		case 0x0000002B:
			return Global_40001.f_3C45;
			break;
		
		case 0x0000002C:
			return Global_40001.f_3C47;
			break;
		
		case 0x00000039:
			return Global_40001.f_1022;
			break;
		
		case 0x0000003A:
			return Global_40001.f_61A6;
			break;
		
		case 0x0000003E:
			return Global_40001.f_61A7;
			break;
		
		case 0x0000003F:
			return Global_40001.f_6F29;
			break;
		
		case 0x00000040:
			return Global_40001.f_19F6;
			break;
	}
	return 0x00000000;
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return Global_40001.f_5BA0;
		
		case 0x00000002:
			return Global_40001.f_5BA1;
		
		case 0x00000003:
			return Global_40001.f_5BA2;
		
		default:
	}
	return 0x0098967F;
}

int func_339()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_63.f_32 || Local_63.f_34)
	{
		if (!Local_63.f_33)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000007))
			{
				func_340("HS_UNABLE", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			}
		}
		return 0x00000001;
	}
	switch (iLocal_69)
	{
		case 0x00000000:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 0x00000013;
			break;
		
		case 0x00000001:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 0x00000055;
			break;
	}
	if (func_374(sVar0, sVar1, iVar2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_340(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = unk_0x08067D4957B73C02(iParam1);
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var2))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		if ((iVar1 != 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iVar1 < 0x00000004)
		{
			if (Global_440000.f_2E673[iVar1] != 0xFFFFFFFF)
			{
				unk_0x3A820E495A7BA3E5(func_372(iVar1, iParam1, 0x00000000));
			}
			else
			{
				unk_0x3A820E495A7BA3E5(func_348(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
			}
		}
		else
		{
			unk_0x3A820E495A7BA3E5(func_348(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		}
		unk_0xD06AC7C87A34A6AD(func_346(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		}
		else
		{
			Global_265942 = { func_144(iParam1) };
			if (unk_0xD9DA83C40D038174(&Global_2658FC, 0x00000023, &Global_265942))
			{
				iVar3 = 0x00000000;
				if (unk_0x7F8A39872A07D2CE(&(Global_2658FC.f_16), "Leader") && Global_2658FC.f_1E == 0x00000000)
				{
					iVar3 = 0x00000001;
				}
				if (Global_2658FC.f_15 > 0x00000000)
				{
					iVar4 = 0x00000000;
				}
				else
				{
					iVar4 = 0x00000001;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_345(&Var2) };
					}
					iVar0 = unk_0x0D020422A92A2236(iVar4, unk_0x95A6C443DD6B08B2(&Global_2658FC, 0x00000023), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar3, 0x00000000, Global_2658FC, &Var2, Global_140CF2, Global_140CF3, Global_140CF4);
				}
				else
				{
					iVar0 = unk_0xDCEBC63DB246F9AE(iVar4, unk_0x95A6C443DD6B08B2(&Global_2658FC, 0x00000023), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar3, 0x00000000, Global_2658FC, Global_140CF2, Global_140CF3, Global_140CF4);
				}
			}
			else
			{
				iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
			}
		}
		func_341(0x0000000E, sParam0, 0x00000001, &Var2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_341(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_344() || !unk_0xA14BB9332558B949()) || !func_200(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = func_342(iParam2);
	if (iVar0 >= 0x00000000 && iVar0 < 0x00000005)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = iParam0;
		Global_197EBE.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000000] = iParam4;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000001] = iParam5;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000002] = iParam6;
		Global_197EBE.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_197EBE.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000000 /*6*/]), sParam9, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000001 /*6*/]), sParam10, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000002 /*6*/]), sParam11, 24);
	}
}

int func_342(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Global_197EBE - 0x00000001))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_343(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_197EBE++;
	if (Global_197EBE > 0x00000005)
	{
		Global_197EBE = 0x00000005;
		return Global_197EBE;
	}
	return (Global_197EBE - 0x00000001);
}

void func_343(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000004;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 0x00000001) /*53*/] };
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

bool func_344()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

struct<16> func_345(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_346(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_347(&cVar0);
}

var func_347(char[4] cParam0)
{
	return cParam0;
}

int func_348(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_147(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	if (iParam1 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000004)
		{
			if (Global_440000.f_2E673[iVar0] != 0xFFFFFFFF)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_147(unk_0xD803B885F5E47A62()) || (func_371() && func_370())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001F)) && !bParam4)
	{
		iVar1 = func_369();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 0xFFFFFFFF)
				{
					if (func_6(unk_0x83FACCC48B68F9D1(iVar1), 0x00000000, 0x00000001))
					{
						if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
						{
							if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
							{
								return func_372(iParam1, iParam0, 0x00000000);
							}
							else
							{
								return func_360(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_360(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
			{
				if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
				{
					return func_372(iParam1, iParam0, 0x00000000);
				}
				else
				{
					return func_349(0x00000000, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				return func_349(0x00000000, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
	if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
	{
		if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
		{
			return func_372(iParam1, iParam0, 0x00000000);
		}
		else
		{
			return func_360(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_360(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_349(bool bParam0, int iParam1, bool bParam2)
{
	return func_350(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_350(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 0x00000003;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_359() || (func_358() && func_356())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_355(iParam2, iVar0);
		}
		else
		{
			return func_355(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 0xFFFFFFFF)
		{
			if (func_146(iVar0, iParam2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012))
			{
				if (iVar0 == iParam2)
				{
					return func_354(0x00000001);
				}
				else
				{
					return func_354(0x00000000);
				}
			}
			else if (bParam3)
			{
				return 0x0000001C;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000014))
			{
				return func_351(iVar0, iParam2, 0x00000001, 0x00000004);
			}
			else
			{
				return func_351(iVar0, iParam2, 0x00000000, 0x00000004);
			}
		}
		return 0x0000001C;
	}
	if (iVar0 == iParam2 || iParam2 == 0xFFFFFFFF)
	{
		return func_354(0x00000001);
	}
	return func_354(0x00000000);
}

int func_351(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_353(iParam0, iParam1, iParam3);
	if (func_352(Global_440000.f_2F9AE, 0x00000001))
	{
		if (iVar0 == 0x00000001)
		{
			iVar0 = 0x00000000;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			
			case 0x00000003:
				return 0x0000001F;
			
			case 0x00000004:
				return 0x00000020;
			
			case 0x00000005:
				return 0x00000021;
			
			case 0x00000006:
				return 0x00000022;
			
			case 0x00000007:
				return 0x00000023;
			
			case 0x00000008:
				return 0x00000024;
			
			case 0x00000009:
				return 0x00000025;
			
			case 0x0000000A:
				return 0x00000026;
			
			case 0x0000000B:
				return 0x00000027;
			
			case 0x0000000C:
				return 0x00000028;
			
			case 0x0000000D:
				return 0x00000029;
			
			case 0x0000000E:
				return 0x0000002A;
			
			case 0x0000000F:
				return 0x0000002B;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			}
		
		default:
	}
	return 0x0000001C;
}

int func_352(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_38DB3 == 0x00000041)
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (iParam0 == Global_40001.f_233B[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_353(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_146(iParam0, iVar0, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_354(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000076;
	}
	return 0x00000074;
}

int func_355(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_353(iParam1, iParam0, 0x00000004);
	}
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		default:
	}
	return 0x0000001C;
}

bool func_356()
{
	if (func_357())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000004);
}

bool func_357()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_358()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

int func_359()
{
	if (func_357() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_360(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094)
	{
		bVar1 = 0x00000001;
	}
	iVar2 = iParam0;
	if (iVar2 > 0xFFFFFFFF)
	{
		if (Global_184507[iVar2 /*876*/] == 0x00000094)
		{
			bVar1 = 0x00000001;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 0xFFFFFFFF)
		{
			if (func_365())
			{
				iVar3 = func_364(iParam0);
				if (!iVar3 == 0xFFFFFFFF)
				{
					return func_362(iVar3);
				}
			}
			if ((func_184(iParam1, iParam0, iVar0, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)) || ((func_146(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000017)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)))
			{
				return func_354(0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A))
			{
				return func_361(0x00000001);
			}
			else
			{
				return func_350(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0x00000000)
		{
			if (iParam0 == iParam1 || (Global_18060A == 0x00000001 && Global_180614 == 0x00000000))
			{
				return func_354(0x00000001);
			}
			else
			{
				return func_350(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 0x0000001C;
		}
	}
	iVar4 = func_364(iParam0);
	if (!iVar4 == 0xFFFFFFFF)
	{
		return func_362(iVar4);
	}
	if (bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_361(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000077;
	}
	return 0x00000074;
}

int func_362(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_363(iParam0);
		switch (iVar0)
		{
			case 0x00000000:
				return 0x000000C0;
			
			case 0x00000001:
				return 0x000000C1;
			
			case 0x00000002:
				return 0x000000C2;
			
			case 0x00000003:
				return 0x000000C3;
			
			case 0x00000004:
				return 0x000000C4;
			
			case 0x00000005:
				return 0x000000C5;
			
			case 0x00000006:
				return 0x000000C6;
			
			case 0x00000007:
				return 0x000000C7;
			
			case 0x00000008:
				return 0x000000C8;
			
			case 0x00000009:
				return 0x000000C9;
			
			case 0x0000000A:
				return 0x000000CA;
			
			case 0x0000000B:
				return 0x000000CB;
			
			case 0x0000000C:
				return 0x000000CC;
			
			case 0x0000000D:
				return 0x000000CD;
			
			case 0x0000000E:
				return 0x000000CE;
			}
		
		default:
	}
	return 0x00000001;
}

var func_363(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_364(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_12(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

int func_365()
{
	if (((func_368() || func_367()) || func_177()) || func_366())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_366()
{
	return Global_2564C8.f_13;
}

var func_367()
{
	return Global_2564C8.f_10;
}

var func_368()
{
	return Global_2564C8.f_F;
}

var func_369()
{
	return Global_240006.f_2;
}

bool func_370()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000004);
}

bool func_371()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

int func_372(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_365())
	{
		iVar2 = func_364(iParam1);
		if (!iVar2 == 0xFFFFFFFF)
		{
			return func_362(iVar2);
		}
	}
	if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000011)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 0x00000018))
		{
			return 0x00000012;
		}
	}
	if (iParam0 > 0xFFFFFFFF && iParam1 != func_13())
	{
		if (Global_440000.f_2E673[iParam0] != 0xFFFFFFFF && Global_440000.f_2E673[iParam0] <= 0x00000004)
		{
			if (Global_440000.f_2E673[iParam0] == 0x00000000)
			{
				iVar0 = 0x0000000F;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000001)
			{
				iVar0 = 0x00000012;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000002)
			{
				iVar0 = 0x00000018;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000004)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001D))
				{
					iVar0 = 0x00000015;
				}
				else
				{
					iVar0 = 0x00000006;
				}
			}
			else
			{
				iVar0 = Global_440000.f_2E673[iParam0];
			}
		}
		else
		{
			iVar0 = func_350(iParam1, !bParam2, iParam0, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 0x0000000D))
		{
			iVar0 = func_373(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 0x0000001D))
		{
			iVar0 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A) && !func_146(iParam0, unk_0x08067D4957B73C02(iParam1), 0x00000000))
		{
			iVar0 = func_361(0x00000001);
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_373(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = Global_440000.f_38E2F;
			break;
		
		case 0x00000001:
			iVar0 = Global_440000.f_38E30;
			break;
		
		case 0x00000002:
			iVar0 = Global_440000.f_38E31;
			break;
		
		case 0x00000003:
			iVar0 = Global_440000.f_38E32;
			break;
	}
	switch (iVar0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		case 0x00000004:
			return 0x00000006;
		
		case 0x00000005:
			return 0x00000009;
		
		case 0x00000006:
			return 0x00000003;
		
		case 0x00000007:
			return 0x00000001;
		
		case 0x00000008:
			return 0x0000000C;
		
		case 0x00000009:
			return 0x00000002;
		
		default:
	}
	return 0x00000002;
}

int func_374(char* sParam0, char* sParam1, int iParam2)
{
	if (!unk_0x7F8A39872A07D2CE(sParam0, "NULL"))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_68, 0x00000000))
		{
			func_478(&uLocal_86, 0x00000003, 0x00000000, sParam1, 0x00000000, 0x00000001);
			if (func_376(&uLocal_86, iParam2, "CT_AUD", sParam0, 0x00000000, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&iLocal_68, 0x00000000);
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_68, 0x00000001))
		{
			if (func_375(0x00000000))
			{
				unk_0x5D96D8530B3D0904(&iLocal_68, 0x00000001);
			}
		}
		else if (!func_375(0x00000000))
		{
			iLocal_68 = 0x00000000;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_375(int iParam0)
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

int func_376(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_476())
	{
		return 0x00000000;
	}
	if (func_475())
	{
		return 0x00000000;
	}
	sVar0 = 0x00000000;
	bVar1 = 0x00000000;
	iVar2 = 0xFFFFFF9D;
	return func_377(uParam0, iParam1, sParam2, sParam3, 0x00000001, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, 0xFFFFFFFF);
}

int func_377(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam2) > 0x00000007)
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam3))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam3) > 0x0000000F)
	{
		return 0x00000000;
	}
	iVar0 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
	iVar1 = func_474(sParam2, sParam3);
	iVar2 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		iVar2 = unk_0x12AB0310C2281427(sParam7);
	}
	if (func_473(iVar0, iVar1, iVar2))
	{
		return 0x00000001;
	}
	if (!func_468(iParam6))
	{
		return 0x00000000;
	}
	if (func_465(iVar0, iVar1, iVar2))
	{
		if (func_464())
		{
			return 0x00000000;
		}
		func_463();
		return func_384(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_383(iParam4))
	{
		return 0x00000000;
	}
	func_378(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0x00000000;
}

void func_378(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_14E99F.f_28.f_1 = iParam0;
	Global_14E99F.f_28.f_2 = iParam1;
	Global_14E99F.f_28.f_3 = iParam2;
	StringCopy(&(Global_14E99F.f_28.f_4), sParam3, 16);
	Global_14E99F.f_28.f_8 = iParam4;
	Global_14E99F.f_28.f_9 = iParam5;
	Global_14E99F.f_28.f_E = iParam6;
	func_379(iParam4);
	func_463();
	Global_14E99F.f_28.f_D = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x00001B58);
}

void func_379(int iParam0)
{
	if (func_382(iParam0))
	{
		func_381();
		return;
	}
	func_380();
}

void func_380()
{
	Global_14E99F.f_28.f_A = 0x00000000;
}

void func_381()
{
	Global_14E99F.f_28.f_A = 0x00000001;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
		case 0x00000005:
			return 0x00000001;
		
		case 0x00000000:
		case 0x00000001:
		case 0x00000007:
		case 0x00000008:
		case 0x00000002:
		case 0x00000003:
			return 0x00000000;
		
		default:
	}
	return 0x00000000;
}

bool func_383(int iParam0)
{
	return iParam0 > Global_14E99F.f_28.f_8;
}

int func_384(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_462();
	if (iParam6 == 0x00000005)
	{
		iParam6 = 0x00000000;
	}
	if (iParam5 == 0x00000008)
	{
		return func_459(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 0x00000004)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_456(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 0x00000001 || iParam5 == 0x00000007)
	{
		if (iParam6 == 0x00000002)
		{
			return func_459(uParam0, sParam3, sParam4);
		}
		return func_438(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 0x00000005)
	{
		return func_437(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000002)
	{
		return func_425(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000003)
	{
		return func_424(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000006)
	{
		return func_385(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0x00000000;
}

int func_385(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_423();
	bVar0 = 0x00000001;
	if (func_387(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_386(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_386(int iParam0)
{
	Global_14E99F.f_28.f_B = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam0);
	Global_14E99F.f_28.f_C = 0x00000001;
}

int func_387(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_417(iVar0);
		if (iVar1 == 0x00000000)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_14E99F.f_28.f_D))
			{
				return 0x00000000;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0x00000000;
	sVar4 = func_416(sParam5, bParam6, &iVar3);
	uVar5 = func_414(iParam7, &iVar3);
	iVar6 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = 0x00000001;
	iVar8 = 0x00000000;
	iVar9 = 0x00000000;
	iVar10 = 0x00000001;
	iVar11 = 0x00000000;
	if (bParam3)
	{
		iVar9 = 0x00000001;
		iVar10 = 0x00000002;
		iVar11 = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000001))
		{
			iVar8 = 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000002))
	{
		iVar10 = 0x00000002;
	}
	bVar12 = 0x00000000;
	if (!iVar3 == 0x00000000 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_413(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_391(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_390();
	}
	func_423();
	func_389();
	func_388();
	return 0x00000001;
}

void func_388()
{
	Global_14E99F.f_39 = 0x00000000;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_389()
{
	Global_14E99F.f_28 = 0x00000003;
}

void func_390()
{
	unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000008);
}

int func_391(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0x00000000;
	sVar1 = "NULL";
	iVar2 = 0xFFFFFF9D;
	sVar3 = "NULL";
	iVar4 = 0x00000000;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 0x00000003;
	if (func_392(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
	{
		if (bParam7 == 0x00000001)
		{
			Global_1F7F = iParam6;
			unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000000);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_392(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_406();
	iVar0 = 0x00000000;
	switch (iParam16)
	{
		case 0x00000000:
			if (Global_4C1E == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_4C1E == 0x00000002)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_4C1E == 0x00000001)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000000;
			break;
	}
	if (iVar0 == 0x00000000)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0x00000000;
			}
		}
		if (Global_4126B6 == 0x00000001)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("appemail")) > 0x00000000)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("appmpemail")) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	if (func_405() == 0x00000000)
	{
		func_403();
		return 0x00000000;
	}
	func_402(Global_4126B5);
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/]), sParam1, 64);
	Global_4121D4[Global_4126B5 /*104*/].f_11 = uParam0;
	if (iParam2 == 0x00000000)
	{
	}
	else
	{
		Global_4121D4[Global_4126B5 /*104*/].f_18 = iParam2;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_19 = iParam7;
	Global_4121D4[Global_4126B5 /*104*/].f_1A = uParam8;
	Global_4121D4[Global_4126B5 /*104*/].f_1D = uParam9;
	Global_4121D4[Global_4126B5 /*104*/].f_1E = uParam12;
	Global_4121D4[Global_4126B5 /*104*/].f_1F = uParam11;
	Global_4121D4[Global_4126B5 /*104*/].f_1C = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_21), sParam4, 64);
	Global_4121D4[Global_4126B5 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_32), sParam5, 64);
	Global_4121D4[Global_4126B5 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_53), sParam15, 64);
	func_406();
	switch (iParam16)
	{
		case 0x00000003:
			Global_4121D4[Global_4126B5 /*104*/].f_63[Global_4C1E] = 0x00000001;
			break;
		
		case 0x00000000:
			Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000000] = 0x00000001;
			break;
		
		case 0x00000002:
			Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000002] = 0x00000001;
			break;
		
		case 0x00000001:
			Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000001] = 0x00000001;
			break;
	}
	if (iParam16 == 0x00000003)
	{
		switch (Global_4C1E)
		{
			case 0x00000000:
				func_401(0x00000000);
				break;
			
			case 0x00000001:
				func_401(0x00000001);
				break;
			
			case 0x00000002:
				func_401(0x00000002);
				break;
			
			case 0x00000003:
				func_401(0x00000003);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 0x00000001)
	{
		switch (iParam16)
		{
			case 0x00000003:
				Global_4126B6 = 0x00000001;
				break;
			
			case 0x00000000:
				Global_4126B6 = 0x00000001;
				break;
			
			case 0x00000002:
				Global_4126B6 = 0x00000001;
				break;
			
			case 0x00000001:
				Global_4126B6 = 0x00000001;
				break;
			}
	}
	Global_5572[Global_4126B5] = 0x00000000;
	if (bParam10)
	{
		func_406();
		if (Global_4BE5)
		{
			StringCopy(&Global_4C13, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
					break;
				
				case 0x00000002:
					StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 0x00000001:
					StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000001)
		{
			if (!func_400())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_399(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_396(0x00000001);
			func_399(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_393(uParam0, sParam1);
	return 0x00000001;
}

void func_393(var uParam0, char* sParam1)
{
	if (!func_394())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0xB9A1844D, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

int func_394()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_13())
	{
		return 0x00000000;
	}
	if (func_395(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_395(int iParam0)
{
	return func_38(iParam0, 0x00000014);
}

void func_396(int iParam0)
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
		if (func_275(0x0000000E))
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
								func_398(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_397(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
								func_397(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_397(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_397(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_397(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_398(&(Global_1CC3[iVar1 /*15*/]));
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
								func_398(&(Global_1CC3[iVar1 /*15*/]));
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
								func_398(&(Global_1CC3[iVar1 /*15*/]));
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
								func_398(&(Global_1CC3[iVar1 /*15*/]));
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
								func_398(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_397(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_397(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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

void func_397(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_398(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_398(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_398(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_398(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_398(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_398(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_399(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_400()
{
	return Global_14086D;
}

void func_401(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1B416.f_36DE[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_402(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_4121D4[iParam0 /*104*/].f_12 = iVar0;
	Global_4121D4[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_4121D4[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_4121D4[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_4121D4[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_4121D4[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_403()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar2 = iVar0;
	Global_4126B5 = 0x0000000B;
	Global_4121D4[Global_4126B5 /*104*/].f_12 = 0xFFFFFFFF;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_1 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_2 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_3 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (!func_404(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
		{
			Global_4126B5 = iVar2;
		}
		iVar2++;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_18 = 0x00000001;
}

int func_404(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0x00000000;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 0x00000001;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0x00000000;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 0x00000001;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 0x00015180);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 0x00015180);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_405()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4121D4[iVar2 /*104*/].f_18 == 0x00000000)
		{
			Global_4126B5 = iVar2;
			return 0x00000001;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4126B5 = 0x0000000B;
	Global_4121D4[Global_4126B5 /*104*/].f_12 = 0xFFFFFFFF;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_1 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_2 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_3 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (Global_4121D4[iVar2 /*104*/].f_18 == 0x00000000 || Global_4121D4[iVar2 /*104*/].f_18 == 0x00000001)
		{
			if (!func_404(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
			{
				Global_4126B5 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4126B5 == 0x0000000B)
	{
		return 0x00000000;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000000] = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000001] = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000002] = 0x00000000;
	return 0x00000001;
}

void func_406()
{
	if (func_275(0x0000000E))
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
		Global_4C1E = func_407();
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

var func_407()
{
	func_408();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_408()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_411(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_410(unk_0x16F2683693E537C9());
			if (func_409(iVar0) && (!func_275(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_409(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_409(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_410(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_411(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_411(int iParam0)
{
	if (func_409(iParam0))
	{
		return func_412(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_412(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_413(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0x00000000:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 0x00000001:
			sParam16 = "NULL";
			break;
		
		case 0x00000002:
			break;
		
		default:
			break;
	}
	iVar0 = 0x00000003;
	if (func_392(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
	{
		if (bParam11 == 0x00000001)
		{
			Global_1F7F = iParam10;
			unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000000);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_414(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFF9D)
	{
		return 0xFFFFFF9D;
	}
	func_415(0x00000002, iParam1);
	return iParam0;
}

void func_415(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0x00000000)
	{
		return;
	}
	bVar0 = 0x00000000;
	bVar1 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000001:
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			bVar1 = 0x00000001;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 0x00000001:
			case 0x00000003:
				break;
			
			case 0x00000000:
				*uParam1 = 0x00000001;
				break;
			
			case 0x00000002:
				*uParam1 = 0x00000003;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 0x00000002:
			case 0x00000003:
				break;
			
			case 0x00000000:
				*uParam1 = 0x00000002;
				break;
			
			case 0x00000001:
				*uParam1 = 0x00000003;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_416(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return sLocal_20;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_415(0x00000001, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x19C9F30A7697B43C(sParam0);
}

int func_417(int iParam0)
{
	int iVar0;
	
	iVar0 = func_420(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_418(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_418(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_420(iParam0) != 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1532B9)
	{
		if (iParam0 == Global_1532B9.f_1)
		{
			return;
		}
	}
	if (func_419(iParam0))
	{
		return;
	}
	if (Global_1532DF >= 0x00000020)
	{
		return;
	}
	Global_1532BE[Global_1532DF] = iParam0;
	Global_1532DF++;
	if (bParam1)
	{
	}
}

int func_419(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532DF)
	{
		if (Global_1532BE[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_420(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0x00000000, 0x00000001))
	{
		return 0xFFFFFFFF;
	}
	if (Global_1532B7 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532B7)
	{
		if (Global_153216[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_153216[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_153216[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_421(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_421(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1532B7)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_153216[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_153216[iParam0 /*5*/].f_2 != 0x00000000)
		{
			StringCopy(&cVar1, unk_0x5283D58F79627134(Global_153216[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_153216[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1532B7)
	{
		Global_153216[iVar2 /*5*/] = { Global_153216[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_422(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_422(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_423()
{
	Global_14E99F.f_28.f_9 = 0x00000004;
}

int func_424(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_423();
	bVar0 = 0x00000000;
	return func_387(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_425(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	return func_426(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_426(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_417(iVar0);
		if (iVar1 == 0x00000000)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_14E99F.f_28.f_D))
			{
				return 0x00000000;
			}
		}
		Global_556A = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0x00000000;
	sVar4 = func_416(sParam5, bParam6, &iVar3);
	uVar5 = func_414(iParam7, &iVar3);
	iVar6 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = 0x00000001;
	iVar8 = 0x00000000;
	iVar9 = 0x00000000;
	iVar10 = 0x00000001;
	iVar11 = 0x00000000;
	if (bParam3)
	{
		iVar9 = 0x00000001;
		iVar10 = 0x00000002;
		iVar11 = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000001))
		{
			iVar8 = 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000002))
	{
		iVar10 = 0x00000002;
	}
	bVar12 = 0x00000000;
	if (!iVar3 == 0x00000000 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_436(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_428(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_390();
	}
	func_427();
	func_389();
	func_388();
	return 0x00000001;
}

void func_427()
{
	Global_14E99F.f_28.f_9 = 0x00000003;
}

int func_428(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000A);
	iVar0 = 0x00000000;
	sVar1 = "NULL";
	iVar2 = 0xFFFFFF9D;
	sVar3 = "NULL";
	iVar4 = 0x00000000;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 0x00000003;
	if (func_430(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
	{
		if (bParam7 == 0x00000001)
		{
			Global_1F7F = iParam6;
			Global_1F1E[0x00000003 /*6*/] = { func_429(iParam0) };
			Global_1F6B = iParam0;
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

struct<4> func_429(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_430(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_406();
	iVar0 = 0x00000000;
	switch (iParam16)
	{
		case 0x00000000:
			if (Global_4C1E == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_4C1E == 0x00000002)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_4C1E == 0x00000001)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000000;
			break;
	}
	if (iVar0 == 0x00000000)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0x00000000;
			}
		}
		if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000001)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0x00000000)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	if (func_435() == 0x00000000)
	{
		func_433();
		return 0x00000000;
	}
	func_432(Global_5570);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/]), sParam1, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_11 = uParam0;
	if (iParam2 == 0x00000000)
	{
	}
	else
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_18 = iParam2;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_19 = iParam7;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1A = uParam8;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1D = uParam9;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1E = uParam12;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1F = uParam11;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1C = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_21), sParam4, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_32), sParam5, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53), sParam15, 64);
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000A))
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000001;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000001;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000001;
		Global_1F7E = 0x00000004;
		func_401(0x00000000);
		func_401(0x00000002);
		func_401(0x00000001);
	}
	else
	{
		func_406();
		switch (iParam16)
		{
			case 0x00000003:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[Global_4C1E] = 0x00000001;
				break;
			
			case 0x00000000:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000001;
				break;
			
			case 0x00000002:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000001;
				break;
			
			case 0x00000001:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000001;
				break;
		}
		if (iParam16 == 0x00000003)
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					func_401(0x00000000);
					Global_1F7E = 0x00000000;
					break;
				
				case 0x00000001:
					func_401(0x00000001);
					Global_1F7E = 0x00000001;
					break;
				
				case 0x00000002:
					func_401(0x00000002);
					Global_1F7E = 0x00000002;
					break;
				
				case 0x00000003:
					func_401(0x00000003);
					Global_1F7E = 0x00000003;
					break;
				
				default:
					Global_1F7E = 0x00000004;
					break;
				}
			}
	}
	if (iParam7 == 0x00000001)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000A))
		{
			Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000001;
			Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000001;
			Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000001;
		}
		else
		{
			switch (iParam16)
			{
				case 0x00000003:
					Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000000:
					Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000002:
					Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000001:
					Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000001;
					break;
				}
			}
	}
	Global_5572[Global_5570] = 0x00000000;
	if (bParam10)
	{
		func_406();
		if (Global_4BE5)
		{
			StringCopy(&Global_4C13, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
					break;
				
				case 0x00000002:
					StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 0x00000001:
					StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000001)
		{
			if (!func_400())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_399(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_396(0x00000001);
			func_399(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_431(uParam0, sParam1);
	return 0x00000001;
}

void func_431(var uParam0, char* sParam1)
{
	if (!func_394())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0x629E0CB1, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

void func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_1B416.f_3738[iParam0 /*104*/].f_12 = iVar0;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_433()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000018;
		iVar1 = 0x00000021;
	}
	else
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000014;
	}
	iVar2 = iVar0;
	Global_5570 = 0x00000022;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 0xFFFFFFFF;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (!func_434(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
		{
			Global_5570 = iVar2;
		}
		iVar2++;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_18 = 0x00000001;
}

int func_434(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0x00000000;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 0x00000001;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0x00000000;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 0x00000001;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 0x00015180);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 0x00015180);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_435()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000018;
		iVar1 = 0x00000021;
	}
	else
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000014;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000000)
		{
			Global_5570 = iVar2;
			return 0x00000001;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_5570 = 0x00000022;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 0xFFFFFFFF;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000000 || Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000001)
		{
			if (!func_434(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
			{
				Global_5570 = iVar2;
			}
		}
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000002)
		{
		}
		iVar2++;
	}
	if (Global_5570 == 0x00000022)
	{
		return 0x00000000;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000000;
	return 0x00000001;
}

int func_436(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0x00000000:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 0x00000001:
			sParam16 = "NULL";
			break;
		
		case 0x00000002:
			break;
		
		default:
			break;
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000A);
	iVar0 = 0x00000003;
	if (func_430(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
	{
		if (bParam11 == 0x00000001)
		{
			Global_1F7F = iParam10;
			Global_1F1E[0x00000003 /*6*/] = { func_429(iParam0) };
			Global_1F6B = iParam0;
			StringCopy(&Global_1F6C, sParam5, 64);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_437(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	func_427();
	bVar0 = 0x00000001;
	if (func_426(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_386(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_438(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
	}
	bVar0 = 0x00000000;
	iVar1 = 0x0000000C;
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000007))
	{
		iVar1 = 0x00000009;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000004))
	{
		bVar0 = func_455(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	else
	{
		bVar0 = func_444(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	if (bVar0)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000003))
		{
			func_443(0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000005))
		{
			func_442(0x00000001);
		}
		func_441();
		func_389();
		func_440();
		func_439();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_439()
{
	Global_26DB8C = 0x00000000;
}

void func_440()
{
	Global_14E99F.f_39 = 0x00000001;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_441()
{
	Global_14E99F.f_28.f_9 = 0x00000001;
}

void func_442(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBE, 0x00000000);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBE, 0x00000000);
	}
}

void func_443(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000014);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000014);
	}
}

int func_444(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_454(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
	Global_5175 = 0x00000000;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000000;
	Global_517B = 0x00000000;
	Global_280001 = 0x00000000;
	return func_445(sParam3, iParam4, bParam7);
}

int func_445(char* sParam0, int iParam1, bool bParam2)
{
	Global_5146 = 0x00000000;
	if (Global_5145 == 0x00000000 || Global_5147 == 0x00000002)
	{
		if (Global_5145 != 0x00000000)
		{
			if (iParam1 > Global_5147)
			{
				if (Global_514C == 0x00000000)
				{
					unk_0x5CEB4DB888A62073(0x00000000);
					Global_4C1E.f_1 = 0x00000003;
					Global_5145 = 0x00000000;
					Global_5146 = 0x00000001;
					Global_517A = 0x00000000;
					Global_5141 = 0x00000000;
					Global_5142 = 0x00000000;
					Global_5150 = 0x00000000;
					Global_514F = 0x00000000;
					Global_4C1D = 0x00000000;
				}
				else
				{
					func_453();
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
		if (func_452(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_451();
		Global_4E7E = { Global_4F23 };
		Global_514B = Global_514C;
		Global_5152 = Global_5153;
		Global_280002 = Global_280001;
		Global_5154 = { Global_5164 };
		Global_514D = Global_514E;
		Global_5523 = Global_5524;
		Global_552B = { Global_5531 };
		Global_5525 = Global_5526;
		Global_5527 = Global_5528;
		Global_5529 = Global_552A;
		Global_4FC8.f_172 = Global_5522;
		Global_4FC8.f_170 = Global_5520;
		Global_4FC8.f_171 = Global_5521;
		Global_5141 = Global_5142;
		if (Global_514B)
		{
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000014);
			unk_0x0674E58A79778E99(&Global_1CBD, 0x00000011);
			unk_0x0674E58A79778E99(&Global_1CBE, 0x00000000);
			if (bParam2)
			{
				func_406();
				if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
				{
					if (iParam1 == 0x0000000D)
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
				if (func_450())
				{
					return 0x00000000;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
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
			if (func_449())
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
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000009))
				{
					return 0x00000000;
				}
			}
			func_448();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_447();
		func_446();
		return 0x00000001;
	}
	if (Global_5145 == 0x00000005)
	{
		return 0x00000000;
	}
	if (iParam1 < Global_5147 || iParam1 == Global_5147)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000002)
	{
	}
	else
	{
		func_453();
	}
	return 0x00000000;
}

void func_446()
{
	if (!func_394())
	{
		return;
	}
	if (Global_514B)
	{
		MemCopy(&(Global_19FCC4.f_1), {Global_4FC8}, 0x00000004);
		Global_19FCC4 = Global_1A0F;
		Global_19FCC4.f_6 = Global_514F;
	}
}

void func_447()
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

void func_448()
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

int func_449()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_450()
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

void func_451()
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

bool func_452(int iParam0, int iParam1)
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

void func_453()
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

void func_454(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
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

int func_455(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_454(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
	Global_5175 = 0x00000001;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000000;
	Global_517B = 0x00000000;
	Global_280001 = 0x00000000;
	return func_445(sParam3, iParam4, bParam7);
}

int func_456(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (func_458(uParam0, iParam1, sParam2, sParam3, 0x00000009, sParam4, 0x00000000, 0x00000000, 0x00000001))
	{
		func_457();
		func_441();
		func_389();
		func_440();
		func_439();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_457()
{
	Global_553F = 0x00000000;
}

bool func_458(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_454(uParam0, iParam1, sParam2, iParam6, iParam7, 0x00000000);
	Global_5175 = 0x00000000;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000001;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000001;
	Global_517B = 0x00000000;
	StringCopy(&Global_51D9, sParam5, 24);
	Global_280001 = 0x00000000;
	return func_445(sParam3, iParam4, bParam8);
}

int func_459(var uParam0, char* sParam1, char* sParam2)
{
	if (func_461(uParam0, sParam1, sParam2, 0x0000000C, 0x00000000, 0x00000000, 0x00000000))
	{
		func_460();
		func_389();
		func_440();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_460()
{
	Global_14E99F.f_28.f_9 = 0x00000002;
}

bool func_461(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_454(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 0x00000007)
	{
		if (iParam3 < 0x0000000C)
		{
			iParam3 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_514E = 0x00000000;
	Global_5153 = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_280001 = 0x00000000;
	return func_445(sParam2, iParam3, 0x00000000);
}

void func_462()
{
	Global_14E99F.f_37 = Global_14E99F.f_28.f_1;
	Global_14E99F.f_37.f_1 = Global_14E99F.f_28.f_A;
}

void func_463()
{
	Global_14E99F.f_28 = 0x00000001;
}

bool func_464()
{
	return Global_14E99F.f_28 == 0x00000001;
}

int func_465(int iParam0, int iParam1, int iParam2)
{
	if (!func_466(iParam0))
	{
		return 0x00000000;
	}
	if (Global_14E99F.f_28.f_2 != iParam1)
	{
		return 0x00000000;
	}
	if (iParam2 != 0x00000000)
	{
		if (Global_14E99F.f_28.f_3 != iParam2)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_466(int iParam0)
{
	if (!func_467())
	{
		return 0x00000000;
	}
	if (!Global_14E99F.f_28.f_1 == iParam0)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_467()
{
	if (Global_14E99F.f_28 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_468(int iParam0)
{
	if (func_472())
	{
		return 0x00000000;
	}
	if (func_471())
	{
		return 0x00000000;
	}
	if (func_375(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_1406D3.f_12 != 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_195C36 || func_470())
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iParam0, 0x00000006))
	{
		if (func_469())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_469()
{
	return unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_152CC2);
}

int func_470()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_471()
{
	return Global_14E99F.f_28 == 0x00000003;
}

bool func_472()
{
	return func_449();
}

int func_473(int iParam0, int iParam1, int iParam2)
{
	if (!func_471())
	{
		return 0x00000000;
	}
	return func_465(iParam0, iParam1, iParam2);
}

int func_474(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

bool func_475()
{
	return Global_26D039.f_1;
}

int func_476()
{
	if (Global_14EA5B.f_2)
	{
		return 0x00000001;
	}
	return func_477();
}

bool func_477()
{
	return func_472();
}

void func_478(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_479(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_480(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 0x000003E8)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_481(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_482(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_482(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 0x00000001;
	}
}

void func_483()
{
	if (unk_0xE5DBF9B6126856CA(Local_63.f_A[iLocal_77 /*7*/]) && !unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_63.f_A[iLocal_77 /*7*/]), 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (func_5(unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_63.f_A[iLocal_77 /*7*/]), 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 50625f))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000004))
				{
					unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000004);
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000005))
			{
				if (Local_63.f_2A != 0xFFFFFFFF)
				{
					if (iLocal_77 == Local_63.f_2A)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000005))
						{
							unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000005);
						}
					}
				}
			}
		}
	}
	func_484(iLocal_77);
	iLocal_77++;
	if (iLocal_77 >= func_479(iLocal_69))
	{
		if ((!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000004) && unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000008)) || unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000005))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1, 0x00000001))
			{
				unk_0x5D96D8530B3D0904(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 0x00000001);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1, 0x00000001))
		{
			unk_0x0674E58A79778E99(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 0x00000001);
		}
		unk_0x0674E58A79778E99(&iLocal_66, 0x00000004);
		unk_0x0674E58A79778E99(&iLocal_66, 0x00000005);
		iLocal_77 = 0x00000000;
	}
}

void func_484(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = 0x00000000;
	vVar3 = { 0f, 0f, 0f };
	bVar4 = 0x00000000;
	if (unk_0xE9F78D191AD5EDBA(Local_63.f_A[iParam0 /*7*/]))
	{
		iVar0 = unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]);
		if (iLocal_69 == 0x00000000)
		{
			if (unk_0xD803B885F5E47A62() == iLocal_71)
			{
				if (Local_63.f_A[iParam0 /*7*/].f_4 == 0x00000000)
				{
					if (Local_63.f_A[iParam0 /*7*/].f_5 == 0x00000002)
					{
						bVar4 = 0x00000001;
					}
				}
			}
		}
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000001))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_67[iParam0], 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&Global_1801DB, 0x00000000);
					unk_0x5D96D8530B3D0904(&(iLocal_67[iParam0]), 0x00000000);
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000009))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_67[iParam0], 0x00000001))
					{
						bVar4 = 0x00000001;
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_67[iParam0], 0x00000001))
				{
					unk_0x0674E58A79778E99(&(iLocal_67[iParam0]), 0x00000001);
				}
			}
		}
		if (bVar4)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_A[iParam0 /*7*/]))
			{
				if (!unk_0x526BC32A660C89E6(Local_63.f_A[iParam0 /*7*/]))
				{
					unk_0x8D30F6387EE75385(Local_63.f_A[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0x526BC32A660C89E6(Local_63.f_A[iParam0 /*7*/]))
		{
			if (unk_0xD803B885F5E47A62() == iLocal_70)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000009) && !unk_0xEAE0D21A50E6C7F4(iLocal_67[iParam0], 0x00000001))
				{
					if (unk_0x6EBC49900DEAF9B9(iVar0, unk_0xD803B885F5E47A62()))
					{
						switch (Local_63.f_A[iParam0 /*7*/].f_1)
						{
							case 0x00000000:
								func_507(iVar0, 0x00000003);
								break;
						}
						unk_0x5D96D8530B3D0904(&(iLocal_67[iParam0]), 0x00000001);
					}
				}
			}
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000) && !unk_0xEB6A8945D1AC98A1(iVar0))
			{
				switch (Local_63.f_A[iParam0 /*7*/].f_5)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						unk_0x9DD8618CA5BF832D(iVar0, 0x000000BB, 0x00000001);
						if (Local_63.f_A[iParam0 /*7*/].f_4 == 0x00000000)
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000002))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000003))
								{
									unk_0x16F8631A5D4FBCE5(iVar0, 3f);
									unk_0x11AD11297DC58CC7(iVar0, 0x00000001);
									unk_0x4E885A246A9D983A(iVar0, 0x00000076, 0x00000000);
								}
							}
						}
						if (unk_0xD803B885F5E47A62() == iLocal_71 && func_5(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000001), 25f))
						{
							unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11ED), 0x00000000);
						}
						else
						{
							unk_0x0674E58A79778E99(&(Global_26B66F.f_11ED), 0x00000000);
						}
						if (!unk_0xE9FDA1035CFEA94F(iVar0))
						{
							if (!unk_0xFEABCECA098C0A91(iVar0, 0x0000001D))
							{
								if (func_6(iLocal_71, 0x00000001, 0x00000001))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000D))
									{
										if (func_506(iLocal_71) && !unk_0x4FB00DDF9C0D8114(unk_0x9539D44F3E4492F6(iLocal_71)))
										{
											if (!func_505(iVar0, 0x950B6492))
											{
												if (func_504(iVar0))
												{
													iVar1 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000000);
													if (unk_0xC844350D5D58C99A(iVar1))
													{
														if (unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
														{
														}
														if (!unk_0x4A43A287EB2A2B60(iVar1, func_503(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000000)))
														{
															unk_0x5B1D360B9C6F0A09(iVar0, iVar1, 0xFFFFFFFF, func_502(unk_0x9539D44F3E4492F6(iLocal_71), iVar1), func_501(iParam0), 0x00120149, 0x00000000);
														}
													}
												}
											}
										}
										else if (!(unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x9539D44F3E4492F6(iLocal_71)) && !unk_0x405E212DDE472467(iVar0, 0x00000001))
										{
											if (func_505(iVar0, 0x950B6492))
											{
												unk_0xA3BF0AA5A2608191(iVar0);
											}
											if (!func_505(iVar0, 0x4924437D))
											{
												if (func_504(iVar0))
												{
													unk_0xE185F110925D87DB(iVar0, unk_0x9539D44F3E4492F6(iLocal_71), 0xFFFFFFFF, 0f, func_501(iParam0), 0x40000000, 0x00000000);
												}
											}
											else
											{
												unk_0x9DD8618CA5BF832D(iVar0, 0x00000097, 0x00000001);
											}
										}
									}
								}
							}
						}
						break;
					
					case 0x00000002:
						if (unk_0xD803B885F5E47A62() == iLocal_71 && func_5(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000001), 25f))
						{
							unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11ED), 0x00000000);
						}
						else
						{
							unk_0x0674E58A79778E99(&(Global_26B66F.f_11ED), 0x00000000);
						}
						if (unk_0xD803B885F5E47A62() == iLocal_71)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1, 0x00000000))
							{
								if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
								{
									if ((func_4(unk_0x68F4C0EC296D3901(iVar0, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) && (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) || unk_0x4FB00DDF9C0D8114(unk_0x16F2683693E537C9()))) || (unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x16F2683693E537C9()))
									{
										iVar2 = func_499(unk_0xD803B885F5E47A62());
										fVar5 = (SYSTEM::TO_FLOAT(Global_40001.f_19FA) / 100f);
										iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) * fVar5));
										iVar6 = func_498(unk_0xD803B885F5E47A62());
										if (iVar6 > 0x00000064)
										{
											iVar6 = 0x00000064;
										}
										if (iVar2 > (iVar6 * Global_40001.f_19FB))
										{
											iVar2 = (iVar6 * Global_40001.f_19FB);
										}
										if (iVar2 > 0x00000000)
										{
											unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000010);
										}
										unk_0xC087319D96BCB2A9(unk_0x16F2683693E537C9(), 0x00001388, 0x00002710, 0x00000004);
										if (!(unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x9539D44F3E4492F6(iLocal_71)))
										{
											vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
											vVar3 = { func_497(vVar3) };
											vVar3.x = (vVar3.x * 3f);
											vVar3.y = (vVar3.y * 3f);
											vVar3.z = (vVar3.z * 3f);
											unk_0xDFC6BA855748EB10(unk_0x16F2683693E537C9(), 0x00000001, vVar3, 0f, 0f, 0.5f, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
										}
										unk_0xBAFED2F6486F771A(iVar0, 0x00000200, 0x00000000);
										unk_0xAFF39FB306F8E232(iVar0, 0x00000011, 0x00000001);
										if (((unk_0x405E212DDE472467(iVar0, 0x00000001) || unk_0xE64AC821059A938D(iVar0)) && func_495(iVar0)) && func_503(iVar0, 0x00000000) == 0xFFFFFFFF)
										{
											unk_0xBAFED2F6486F771A(iVar0, 0x00000002, 0x00000001);
											unk_0xAFF39FB306F8E232(iVar0, 0x00000003, 0x00000000);
											unk_0xAFF39FB306F8E232(iVar0, 0x00000006, 0x00000001);
										}
										else
										{
											unk_0xA3BF0AA5A2608191(iVar0);
											unk_0xF3268524E9BE6D6E(iVar0, unk_0x16F2683693E537C9(), 10000f, 0xFFFFFFFF, 0x00000001, 0x00000000);
										}
										Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_3 = iVar2;
										if (iVar2 > 0x00000000)
										{
											Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_2 = 0xFFFFFFFF;
										}
										unk_0x6DF7BF67E86AAE86(iVar0, Global_18085F);
										unk_0x5D96D8530B3D0904(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 0x00000000);
										unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11ED), 0x00000002);
									}
								}
							}
						}
						break;
					
					case 0x00000003:
						if (unk_0x4E3CE49FD6DA2735(iVar0, 0x000000BB))
						{
							unk_0x9DD8618CA5BF832D(iVar0, 0x000000BB, 0x00000000);
						}
						if (Local_63.f_A[iParam0 /*7*/].f_4 == 0x00000000)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000004))
							{
								unk_0x11AD11297DC58CC7(iVar0, 0x00000000);
								unk_0x4E885A246A9D983A(iVar0, 0x00000076, 0x00000001);
							}
						}
						if (!(unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x9539D44F3E4492F6(iLocal_71)))
						{
							if (!unk_0xE9FDA1035CFEA94F(iVar0))
							{
								if (func_504(iVar0))
								{
									if ((unk_0x405E212DDE472467(iVar0, 0x00000001) || unk_0xE64AC821059A938D(iVar0)) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000A))
									{
										if (!func_505(iVar0, 0xF09B15B3) && !func_505(iVar0, 0xB41F1A34))
										{
											if (unk_0x0E0E6175453415CB(iVar0))
											{
												iVar7 = unk_0x6937EA2286828455(iVar0, 0x00000001);
												iVar8 = unk_0x134B62B726CEC8E6(iVar7);
												if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000D))
												{
													unk_0xAFF39FB306F8E232(iVar0, 0x00000011, 0x00000001);
													unk_0xAFF39FB306F8E232(iVar0, 0x00000006, 0x00000000);
													unk_0xAFF39FB306F8E232(iVar0, 0x00000001, 0x00000000);
												}
												else if (unk_0xAFB8495D36825275(iVar8))
												{
													unk_0x9AFA0796FDCABCD5(iVar0, iVar7, 0x00000000, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0x00000008, 20f, 0f, -1f, 0x00000050, 0x00000050, 0xBF800000, 0x00000000);
												}
												else if (unk_0xC41A9202669A24C4(iVar8))
												{
													unk_0x0C4243AF9A434F34(iVar0, iVar7, 0x00000000, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0x00000008, 25f, 0f, -1f, 0x00000050, 0x00000050, 0x00000001);
												}
												else if (unk_0x134B62B726CEC8E6(iVar7) == joaat("taxi"))
												{
													unk_0xBAFED2F6486F771A(iVar0, 0x00000002, 0x00000000);
													unk_0xAFF39FB306F8E232(iVar0, 0x00000003, 0x00000001);
													unk_0xAFF39FB306F8E232(iVar0, 0x00000006, 0x00000000);
													unk_0xF3268524E9BE6D6E(iVar0, unk_0x9539D44F3E4492F6(iLocal_71), 10000f, 0xFFFFFFFF, 0x00000001, 0x00000000);
												}
												else
												{
													unk_0xE072601B4380E9DF(iVar0, unk_0x6937EA2286828455(iVar0, 0x00000001), 60f, 0x000C0024);
												}
											}
										}
									}
									else if (!func_505(iVar0, 0x6BA30179))
									{
										if (func_6(iLocal_71, 0x00000001, 0x00000001))
										{
											unk_0xF3268524E9BE6D6E(iVar0, unk_0x9539D44F3E4492F6(iLocal_71), 10000f, 0xFFFFFFFF, 0x00000001, 0x00000000);
										}
									}
								}
							}
						}
						break;
					
					case 0x00000004:
						func_493(Local_63.f_A[iParam0 /*7*/], 0x00000000);
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000D))
				{
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]));
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000011, 0x00000001);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000006, 0x00000000);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_A[iParam0 /*7*/]), 0x00000001, 0x00000000);
				}
				func_485(iVar0);
			}
		}
	}
}

void func_485(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000010))
	{
		iVar0 = Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_3;
		iVar1 = func_486(iVar0);
		if (iVar1 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 0x0000000F);
			unk_0x0674E58A79778E99(&iLocal_66, 0x00000010);
			if (!func_51())
			{
				unk_0x6BCFB59E6D5AD205(iVar0, 0x00000000, 0x00000000);
			}
			if (iVar0 > Global_40001.f_1F80)
			{
				iVar0 = Global_40001.f_1F80;
			}
			unk_0x6D80F1AEBA734886(iParam0, iVar0);
			unk_0x5D96D8530B3D0904(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 0x00000005);
		}
		else if (iVar1 == 0x00000000)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 0x0000000F);
			unk_0x0674E58A79778E99(&iLocal_66, 0x00000010);
			unk_0x5D96D8530B3D0904(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 0x00000006);
		}
		else
		{
			return;
		}
	}
}

int func_486(int iParam0)
{
	if (func_51())
	{
		if (func_489(iParam0))
		{
			if (func_488(iLocal_254) == 0x00000002)
			{
				unk_0x7A87D9FAFCB10ADC(func_487(iLocal_254));
				unk_0x6BCFB59E6D5AD205(iParam0, 0x00000000, 0x00000000);
				func_321(iLocal_254);
				return 0x00000001;
			}
			else
			{
				func_321(iLocal_254);
				return 0x00000000;
			}
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0xFFFFFFFF;
}

int func_487(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42;
	}
	return 0xFFFFFFFF;
}

int func_488(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_2;
	}
	return 0x00000000;
}

int func_489(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x0000000F))
	{
		func_319(&iLocal_254, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, 0x6DA50854, iParam0, 0x00000004, 0x00000003);
		func_492(&uLocal_255, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&iLocal_66, 0x0000000F);
	}
	else if (func_491(iLocal_254) || func_490(&uLocal_255, 0x00002710, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_490(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_482(uParam0, bParam2, 0x00000000);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_491(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_2 != 0x00000001;
	}
	return 0x00000000;
}

void func_492(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 0x00000001;
}

void func_493(int iParam0, bool bParam1)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		if (unk_0x526BC32A660C89E6(iParam0))
		{
			if (!func_494(iParam0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000D))
				{
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(iParam0));
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(iParam0), 0x00000011, 0x00000001);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(iParam0), 0x00000006, 0x00000000);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(iParam0), 0x00000001, 0x00000000);
				}
				else
				{
					if (bParam1)
					{
						unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(iParam0));
					}
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(iParam0), 0x00000006, 0x00000001);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(iParam0), 0x00000001, 0x00000001);
				}
			}
		}
		func_244(&iParam0);
	}
}

int func_494(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 0x00000001;
}

int func_495(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000001))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000001);
	}
	if (unk_0xE64AC821059A938D(iParam0))
	{
		iVar0 = unk_0x8B157DA177FBCF50(iParam0);
	}
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		if (func_506(iLocal_71))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iLocal_71), 0x00000001);
		}
	}
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (func_496(iVar0))
		{
			return 0x00000000;
		}
		if (unk_0xC8676198F2355F9F(iParam0) || unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iVar0)))
		{
			if (!unk_0x70EED0761B82965E(iVar0))
			{
				return 0x00000000;
			}
		}
		if (unk_0x134B62B726CEC8E6(iVar0) == 0x8FD54EBB)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_496(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_497(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

var func_498(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_D3.f_6;
}

int func_499(int iParam0)
{
	var uVar0;
	
	uVar0 = func_500(iParam0);
	return uVar0;
}

int func_500(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return unk_0x62F8C2EDB26F57B3(0xFFFFFFFF);
		}
		else if (func_296(iParam0))
		{
			return Global_184507[iParam0 /*876*/].f_D3.f_3;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

float func_501(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iParam0 /*7*/].f_2, 0x00000002))
	{
		return 1f;
	}
	return 3f;
}

int func_502(int iParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, 0xFFFFFFFF, 0x00000000) == iParam0)
			{
				return 0xFFFFFFFF;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000000, 0x00000000) == iParam0)
			{
				return 0x00000000;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000001, 0x00000000) == iParam0)
			{
				return 0x00000001;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000002, 0x00000000) == iParam0)
			{
				return 0x00000002;
			}
		}
	}
	return 0xFFFFFFFE;
}

int func_503(int iParam0, int iParam1)
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

int func_504(int iParam0)
{
	if ((!unk_0xEB6A8945D1AC98A1(iParam0) && !unk_0x15D0A3E61766C539(iParam0, 0x00000000)) && !unk_0x869EFD0BC0868856(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_505(int iParam0, int iParam1)
{
	if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_506(int iParam0)
{
	if (unk_0xFC697FBCBDCA38C5(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x0E0E6175453415CB(unk_0x9539D44F3E4492F6(iParam0)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_507(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x30F813723591D02E(iParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "AttributeDamage");
	}
	unk_0x5D96D8530B3D0904(&iVar0, iParam1);
	unk_0xB7E567188872123E(iParam0, "AttributeDamage", iVar0);
}

void func_508()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000006);
	bVar1 = unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000A);
	func_513();
	if (iLocal_69 != 0x00000001)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x0000000C))
		{
			func_510();
		}
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_78))
	{
		func_509(&iLocal_78);
	}
	iVar3 = 0x00000000;
	while (iVar3 < func_479(iLocal_69))
	{
		iLocal_67[iVar3] = 0x00000000;
		iVar3++;
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		Local_63.f_2A = 0xFFFFFFFF;
		Local_63.f_5 = iLocal_74;
		Local_63.f_6 = iLocal_74;
		Local_63.f_7 = iLocal_74;
		Local_63.f_1 = 0x00000000;
		Local_63.f_4 = 0x00000000;
		Local_63.f_2 = 0x00000000;
		iVar3 = 0x00000000;
		while (iVar3 < func_479(iLocal_69))
		{
			bVar2 = unk_0xEAE0D21A50E6C7F4(Local_63.f_A[iVar3 /*7*/].f_2, 0x00000006);
			Local_63.f_A[iVar3 /*7*/].f_2 = 0x00000000;
			Local_63.f_A[iVar3 /*7*/].f_6 = 0xFFFFFFFF;
			if (bVar2)
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_A[iVar3 /*7*/].f_2), 0x00000006);
			}
			iVar3++;
		}
	}
	Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1 = 0x00000000;
	Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_2 = 0xFFFFFFFF;
	iLocal_66 = 0x00000000;
	if (bVar0)
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x00000006);
	}
	if (bVar1)
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0x0000000B);
		unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000008);
	}
	unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000004);
	unk_0x5D96D8530B3D0904(&iLocal_66, 0x0000000B);
}

void func_509(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
		bVar0 = 0x00000001;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_1));
		bVar0 = 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_7))
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_7, 0x00000000))
		{
			if (unk_0x3C583F939C836C5C(iParam0->f_7))
			{
				unk_0xA29E145196B9739D(iParam0->f_7, 0x00000000);
			}
		}
		bVar0 = 0x00000001;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_510()
{
	switch (iLocal_69)
	{
		case 0x00000000:
			func_512(&(Global_180867[0x00000003]));
			break;
		
		case 0x00000001:
			func_511();
			break;
	}
}

void func_511()
{
	int iVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			unk_0x0E2400AB9174FA81(0x00000003, Global_180837[iVar0], 0xA882EB57);
			unk_0x0E2400AB9174FA81(0x00000003, 0xA882EB57, Global_180837[iVar0]);
			iVar0++;
		}
	}
}

void func_512(var uParam0)
{
	int iVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			unk_0x0E2400AB9174FA81(0x00000003, Global_180837[iVar0], *uParam0);
			unk_0x0E2400AB9174FA81(0x00000003, *uParam0, Global_180837[iVar0]);
			iVar0++;
		}
	}
}

void func_513()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < func_479(iLocal_69))
	{
		bVar1 = 0x00000000;
		if (iLocal_69 == 0x00000000)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000001))
			{
				bVar1 = 0x00000001;
			}
		}
		func_493(Local_63.f_A[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_514()
{
	func_515();
	if (iLocal_69 != 0x00000001)
	{
		func_483();
	}
}

void func_515()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < func_479(iLocal_69))
	{
		if (unk_0xE9F78D191AD5EDBA(Local_63.f_A[iVar0 /*7*/]))
		{
			if (unk_0x526BC32A660C89E6(Local_63.f_A[iVar0 /*7*/]))
			{
				iVar1 = unk_0x1B50683925F00106(Local_63.f_A[iVar0 /*7*/]);
				if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
				{
					unk_0x9DD8618CA5BF832D(iVar1, 0x00000097, 0x00000001);
				}
			}
		}
		iVar0++;
	}
	if (Global_26B66F.f_6A7)
	{
	}
	if (iLocal_69 == 0x00000001)
	{
		if (unk_0xD803B885F5E47A62() == iLocal_71)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000000))
			{
				if (!unk_0xC77B2658E98CC4E5(uLocal_251))
				{
					if (func_6(iLocal_71, 0x00000001, 0x00000001))
					{
						if (Local_63.f_32)
						{
							unk_0x67FCD2DB807B4E58(0x0000000F, unk_0x9539D44F3E4492F6(iLocal_71), 0x00000004, 0f, &uLocal_251, 0xA882EB57, 0x00000000);
						}
						else if (Local_63.f_34)
						{
							unk_0x67FCD2DB807B4E58(0x00000010, unk_0x9539D44F3E4492F6(iLocal_71), 0x00000004, 0f, &uLocal_251, 0xA882EB57, Local_63.f_35);
						}
						else
						{
							unk_0x67FCD2DB807B4E58(0x0000000E, unk_0x9539D44F3E4492F6(iLocal_71), 0x00000004, 0f, &uLocal_251, 0x00000000, 0x00000000);
						}
					}
				}
				if (Global_26B66F.f_6A7)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1, 0x00000003))
					{
						unk_0x5D96D8530B3D0904(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 0x00000003);
					}
				}
			}
		}
	}
	else if (iLocal_69 == 0x00000000)
	{
		if (Local_63.f_2A != 0xFFFFFFFF)
		{
			if (unk_0xE5DBF9B6126856CA(Local_63.f_A[Local_63.f_2A /*7*/]))
			{
				if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_63.f_A[Local_63.f_2A /*7*/]), 0x00000000) && !func_519(unk_0x1B50683925F00106(Local_63.f_A[Local_63.f_2A /*7*/])))
				{
					if (Local_63.f_A[Local_63.f_2A /*7*/].f_5 == 0x00000003)
					{
						func_516(Local_63.f_A[Local_63.f_2A /*7*/], &iLocal_78, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
						if (unk_0xE4EDC4B0E92C078B(iLocal_78))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000006))
							{
								unk_0xDC5B2F9D0CCE3A10(iLocal_78, "FM_MGR_BLP");
								unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000006);
							}
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(iLocal_78))
				{
					func_509(&iLocal_78);
				}
			}
			if (unk_0xD803B885F5E47A62() == iLocal_70)
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x0000000E))
				{
					if (func_374("MPCT_mugsuc", "LAMAR", 0x00000013))
					{
						unk_0x5D96D8530B3D0904(&iLocal_66, 0x0000000E);
					}
				}
			}
		}
	}
}

void func_516(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		if (func_518())
		{
			Global_2537E2 = unk_0xD803B885F5E47A62();
		}
		if (bParam3)
		{
			func_517(unk_0x1B50683925F00106(iParam0), iParam1, 0x00000001, Global_2537E2, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_517(unk_0x1B50683925F00106(iParam0), iParam1, 0xFFFFFFFF, Global_2537E2, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(*iParam1))
	{
		func_509(iParam1);
	}
}

int func_517(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0x00000000)
	{
		iParam3 = unk_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x3C583F939C836C5C(iParam0))
		{
			if (iParam8 == 0xFFFFFFFF)
			{
				unk_0xA29E145196B9739D(iParam0, 0x00000001);
			}
			else
			{
				unk_0xE23B4401F4442A7E(iParam0, 0x00000001, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x03E7282D82C7B3B6(iParam0, iParam2);
			unk_0xF8BE15A7B963DB56(iParam0, fParam6);
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x2A065371C9D96655(*uParam1, 0x00000007);
			}
		}
		if (!iParam9 == 0xFFFFFFFF)
		{
			unk_0xFABCB9076292E3BA(iParam0, iParam9);
		}
		unk_0xF947FFD8DA795A7F(iParam0, bParam4);
		unk_0xB46A36D2F28E60DE(iParam0, iParam5);
		*uParam1 = unk_0x380B922C6BB1F223(iParam0);
		if (!iParam9 == 0xFFFFFFFF)
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!iParam8 == 0xFFFFFFFF)
				{
					unk_0x61755AC17D8F538E(*uParam1, iParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						unk_0xD06AC7C87A34A6AD(sParam7);
					}
					else
					{
						unk_0x6B012227B3921E18(sParam7);
					}
					unk_0x4FA118D51B4F2476(*uParam1);
				}
				unk_0x2A065371C9D96655(*uParam1, 0x00000007);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 0x00000002))
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_6), 0x00000002);
			}
		}
		if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			uParam1->f_1 = unk_0x498C79575FE5BBCE(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 0x00000003))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!iParam8 == 0xFFFFFFFF)
					{
						unk_0x61755AC17D8F538E(uParam1->f_1, iParam8);
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam7))
					{
						unk_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							unk_0xD06AC7C87A34A6AD(sParam7);
						}
						else
						{
							unk_0x6B012227B3921E18(sParam7);
						}
						unk_0x4FA118D51B4F2476(uParam1->f_1);
					}
					unk_0x2A065371C9D96655(uParam1->f_1, 0x00000007);
					unk_0x5D96D8530B3D0904(&(uParam1->f_6), 0x00000003);
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0x00000000;
				unk_0x0674E58A79778E99(&(uParam1->f_6), 0x00000003);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0x00000000;
			unk_0x0674E58A79778E99(&(uParam1->f_6), 0x00000003);
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_518()
{
	return Global_140856;
}

int func_519(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000000);
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
			{
				if (unk_0x30F813723591D02E(iVar0, "MPBitset"))
				{
					iVar1 = unk_0x1E2DFB0EF4BB4566(iVar0, "MPBitset");
				}
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 0x0000000C))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_520()
{
	return Local_63;
}

int func_521(int iParam0)
{
	return Local_65[iParam0 /*5*/];
}

void func_522()
{
	if (unk_0xD803B885F5E47A62() == iLocal_71)
	{
		if (Global_78C6)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 0x00000004))
			{
				unk_0x5D96D8530B3D0904(&(Local_65[iLocal_76 /*5*/].f_1), 0x00000004);
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&(Local_65[iLocal_76 /*5*/].f_1), 0x00000004);
		}
	}
}

void func_523()
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (unk_0xD803B885F5E47A62() == iLocal_70)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1801DB, 0x00000000))
		{
			unk_0x0674E58A79778E99(&Global_1801DB, 0x00000000);
			bVar0 = 0x00000001;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_70 /*5*/].f_1, 0x00000002))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x0000000B))
			{
				unk_0x5D96D8530B3D0904(&(Local_65[iLocal_70 /*5*/].f_1), 0x00000002);
				bVar0 = 0x00000001;
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x0000000B))
		{
			unk_0x0674E58A79778E99(&(Local_65[iLocal_70 /*5*/].f_1), 0x00000002);
		}
		if (bVar0)
		{
			Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_4 = func_527();
			func_524(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_4);
		}
	}
	else if (Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_4 != Local_63.f_2C)
	{
		Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_4 = Local_63.f_2C;
		func_524(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_4);
		bVar0 = 0x00000001;
	}
}

void func_524(int iParam0)
{
	switch (iLocal_69)
	{
		case 0x00000000:
			func_526(&(Global_180867[0x00000003]), iParam0);
			break;
		
		case 0x00000001:
			func_525(iParam0);
			break;
	}
}

void func_525(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			unk_0x0E2400AB9174FA81(0x00000001, Global_180837[iVar0], 0xA882EB57);
			unk_0x0E2400AB9174FA81(0x00000001, 0xA882EB57, Global_180837[iVar0]);
		}
		else
		{
			unk_0x0E2400AB9174FA81(0x00000003, Global_180837[iVar0], 0xA882EB57);
			unk_0x0E2400AB9174FA81(0x00000003, 0xA882EB57, Global_180837[iVar0]);
		}
		iVar0++;
	}
}

void func_526(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam1, iVar0))
		{
			unk_0x0E2400AB9174FA81(0x00000001, Global_180837[iVar0], *uParam0);
			unk_0x0E2400AB9174FA81(0x00000001, *uParam0, Global_180837[iVar0]);
		}
		else
		{
			unk_0x0E2400AB9174FA81(0x00000003, Global_180837[iVar0], *uParam0);
			unk_0x0E2400AB9174FA81(0x00000003, *uParam0, Global_180837[iVar0]);
		}
		iVar0++;
	}
}

int func_527()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		if (iLocal_69 == 0x00000001 || iLocal_69 == 0x00000000)
		{
			if (iLocal_70 == unk_0x117658E336116132(iVar1))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iVar1);
			}
		}
		else if (unk_0xD803B885F5E47A62() == unk_0x117658E336116132(iVar1))
		{
			unk_0x5D96D8530B3D0904(&iVar0, iVar1);
		}
		else if (func_6(unk_0x117658E336116132(iVar1), 0x00000000, 0x00000001))
		{
			if (func_52(unk_0x117658E336116132(iVar1)))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_528()
{
	switch (iLocal_69)
	{
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x0000000B))
			{
				if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
				{
					if (func_6(iLocal_71, 0x00000001, 0x00000001))
					{
						func_340("GC_TCK_60", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
						unk_0x5D96D8530B3D0904(&iLocal_66, 0x0000000B);
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x0000000C))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000008))
				{
					if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
					{
						if (func_6(iLocal_71, 0x00000001, 0x00000001))
						{
							func_340("GC_TCK_62", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
							unk_0x5D96D8530B3D0904(&iLocal_66, 0x0000000C);
						}
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000A))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000008))
				{
					if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
					{
						if (func_6(iLocal_71, 0x00000001, 0x00000001))
						{
							func_340("GC_TCK_65", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
							unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000008);
						}
					}
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x0000000D))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x0000000B))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000008))
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0x00000006))
						{
							if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
							{
								if (func_6(iLocal_71, 0x00000001, 0x00000001))
								{
									func_340("GC_TCK_63", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
									unk_0x5D96D8530B3D0904(&iLocal_66, 0x0000000D);
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x0000000B))
			{
				if (unk_0xD803B885F5E47A62() == iLocal_70)
				{
					if (func_6(iLocal_71, 0x00000001, 0x00000001) && unk_0xD803B885F5E47A62() != iLocal_71)
					{
						if (Local_63.f_32)
						{
							func_340("HS_SUCC", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
						}
						else if (Local_63.f_34)
						{
							func_340("GO_ASS_SUCC", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
						}
						else
						{
							func_340("GC_TCK_70", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
						}
						unk_0x5D96D8530B3D0904(&iLocal_66, 0x0000000B);
					}
				}
				else if (unk_0xD803B885F5E47A62() == iLocal_71)
				{
					if (func_6(iLocal_70, 0x00000001, 0x00000001))
					{
						if (Local_63.f_32)
						{
							if (Local_63.f_33)
							{
								func_530("HS_A_SUCC");
							}
							else
							{
								func_340("HS_SENT", iLocal_70, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
							}
						}
						else if (Local_63.f_34)
						{
							func_340("GO_ASS_SENT", iLocal_70, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
						}
						else
						{
							func_340("GC_TCK_71", iLocal_70, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
						}
						unk_0x5D96D8530B3D0904(&iLocal_66, 0x0000000B);
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x0000000A))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000000))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000006))
					{
						if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
						{
							if (func_6(iLocal_71, 0x00000000, 0x00000001))
							{
								func_529(0xFFFFFFFF);
								if (Local_63.f_32)
								{
									if (!Local_63.f_33)
									{
										func_340("HS_KILLED", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
									}
								}
								else if (Local_63.f_34)
								{
									func_340("GO_ASS_KILL", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
								}
								else
								{
									func_340("GC_TCK_73", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
								}
								unk_0x5D96D8530B3D0904(&iLocal_66, 0x0000000A);
							}
						}
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 0x00000009))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0x00000000))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0x00000007))
					{
						if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
						{
							if (func_6(iLocal_71, 0x00000000, 0x00000001))
							{
								if (Local_63.f_32)
								{
									func_340("HS_ESCAPED", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
								}
								else if (Local_63.f_34)
								{
									func_340("GO_ASS_ESC", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
								}
								else
								{
									func_340("GC_TCK_75", iLocal_71, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
								}
								unk_0x5D96D8530B3D0904(&iLocal_66, 0x00000009);
							}
						}
					}
				}
			}
			break;
	}
}

void func_529(int iParam0)
{
	if (Global_180601)
	{
		if (Global_180605 && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000094)
		{
			if (Global_18040E.f_E == unk_0x117658E336116132(iParam0))
			{
				Global_18D1D5++;
			}
		}
		else
		{
			Global_18D1D5++;
		}
	}
}

int func_530(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	unk_0x1E64CE678ED5F61E(sParam0);
	iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
	func_341(0x00000000, sParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	return iVar0;
}

void func_531()
{
	if (unk_0x9BFC2168CB5FCF68(0x00000000, 0x00000000) != Local_63.f_2D)
	{
		if (func_539(Local_63.f_2D, 0x00000000, 0x00000001))
		{
			if (unk_0xA108079788452A90(0x00000000) <= Local_63.f_2D)
			{
				unk_0x0BEC04ECA8485A3A(Local_63.f_2D);
			}
		}
	}
	if (unk_0x11225ACFD0C1477E(0x00000000, 0x00000000) != Local_63.f_2E)
	{
		if (func_538(Local_63.f_2D, 0x00000000, 0x00000001))
		{
			if (unk_0xA0FAF378D1CA33E8(0x00000000) <= Local_63.f_2E)
			{
				unk_0x28E5F00F131890E3(Local_63.f_2E);
			}
		}
	}
	if (unk_0xBF3DE18643F54472(0x00000000, 0x00000000) != Local_63.f_2F)
	{
		if (func_532(Local_63.f_2D, 0x00000000, 0x00000001))
		{
			if (unk_0x479CE2F0004FE5B7(0x00000000) <= Local_63.f_2F)
			{
				unk_0x3A4967AE7C71F999(Local_63.f_2F);
			}
		}
	}
}

bool func_532(int iParam0, bool bParam1, bool bParam2)
{
	return func_533(0x00000002, iParam0, 0x00000001, bParam1, bParam2);
}

int func_533(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1532F0, 0x00000000))
	{
		return 0x00000000;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_537(iParam0) - func_536(iParam0, 0x00000000)))
	{
		return 0x00000001;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_536(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_537(iParam0) - func_535(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_536(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_537(iParam0) - func_536(iParam0, 0x00000001));
		}
		if (!bParam4 && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000003)
		{
			iVar1 = (iVar1 - func_534(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x0000000A;
			break;
		
		case 0x00000002:
			return 0x0000000A;
			break;
	}
	return 0x00000000;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1532F0.f_1;
			break;
		
		case 0x00000001:
			return Global_1532F0.f_2;
			break;
		
		case 0x00000002:
			return Global_1532F0.f_3;
			break;
	}
	return 0x00000000;
}

int func_536(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0x00000000:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D1;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0x00000000);
			}
			break;
		
		case 0x00000001:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D2;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0x00000000);
			}
			break;
		
		case 0x00000002:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D3;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0x00000000);
			}
			break;
	}
	return 0x00000000;
}

int func_537(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1532F8;
			break;
		
		case 0x00000001:
			return Global_1532F9;
			break;
		
		case 0x00000002:
			return Global_1532FA;
			break;
	}
	return 0x00000000;
}

bool func_538(int iParam0, bool bParam1, bool bParam2)
{
	return func_533(0x00000001, iParam0, 0x00000001, bParam1, bParam2);
}

bool func_539(int iParam0, bool bParam1, bool bParam2)
{
	return func_533(0x00000000, iParam0, 0x00000001, bParam1, bParam2);
}

void func_540()
{
	if (Local_63.f_32)
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			func_542(0x00000009);
		}
		else if (unk_0xD803B885F5E47A62() == iLocal_71)
		{
			func_542(0x0000000D);
		}
	}
	else if (Local_63.f_34)
	{
	}
	func_541();
}

void func_541()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_542(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

int func_543()
{
	var uVar0;
	
	func_550(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_549())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_548())
	{
		return 0x00000001;
	}
	if (func_547(0x0000009F))
	{
		if (!func_546())
		{
			return 0x00000001;
		}
	}
	if (func_547(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_544() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_544()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_544()
{
	switch (func_120())
	{
		case 0x00000000:
			return func_545();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_545()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_546()
{
	return Global_2564C8.f_256;
}

int func_547(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_548()
{
	return Global_258C08;
}

bool func_549()
{
	return Global_2564C8.f_251;
}

void func_550(var uParam0)
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
					func_551(iVar0);
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

void func_551(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_6(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_552(iVar2, &bVar3))
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

int func_552(int iParam0, var uParam1)
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

void func_553()
{
	SYSTEM::WAIT(0x00000000);
}

void func_554(struct<21> Param0)
{
	func_560(0x00000020, Param0);
	func_559(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_63, 0x00000038);
	unk_0x35B62793EAE9ADDF(&Local_65, 0x000000A1);
	unk_0x256D93AFAE851A7A(0x00000000);
	if (!func_558())
	{
		func_261();
	}
	iLocal_69 = Param0.f_10;
	iLocal_70 = unk_0x117658E336116132(Param0.f_11);
	if (unk_0x40B8C182D63932FC(iLocal_70))
	{
	}
	iLocal_71 = unk_0x117658E336116132(Param0.f_12);
	if (unk_0x40B8C182D63932FC(iLocal_71))
	{
		iLocal_72 = unk_0x12AB0310C2281427(unk_0x6E524813889AECF8(iLocal_71));
	}
	if (func_557(iLocal_70, 0x00000009) && iLocal_69 == 0x00000001)
	{
		Local_63.f_32 = 0x00000001;
		if (func_557(iLocal_71, 0x0000000D))
		{
			Local_63.f_33 = 0x00000001;
		}
	}
	if (iLocal_69 == 0x00000001)
	{
		if (func_556(iLocal_70))
		{
			Local_63.f_34 = 0x00000001;
			Local_63.f_35 = func_555(iLocal_70);
		}
	}
	vLocal_73 = { Param0.f_A };
	if (iLocal_69 == 0x00000001)
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x5D96D8530B3D0904(&Global_1801DB, 0x00000000);
		}
	}
	Global_193B1F = 0x00000000;
	Global_193B20 = 0x00000000;
	if (iLocal_69 == 0x00000001)
	{
		Global_26B66F.f_6A7 = 0x00000000;
	}
	Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 0x00000000;
}

var func_555(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_B7.f_4;
}

bool func_556(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_B7 != func_13();
}

bool func_557(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_5, iParam1);
}

int func_558()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (0x00000001)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000000;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 0x00000001;
		}
		if (func_549())
		{
			return 0x00000000;
		}
		if (func_547(0x0000009D))
		{
			return 0x00000000;
		}
		if (iVar0 >= 0x00000E10)
		{
			return 0x00000000;
		}
		SYSTEM::WAIT(0x00000000);
	}
	return 0x00000000;
}

int func_559(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_541();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_518())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_541();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_549())
				{
					if (!bParam2)
					{
						func_541();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_547(0x0000009D))
				{
					if (!bParam2)
					{
						func_541();
					}
					else
					{
						return 0x00000000;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_541();
				}
				else
				{
					return 0x00000000;
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > 0xFFFFFFFF)
	{
		Global_1406F5 = iVar0;
	}
	if (iParam0 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_541();
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_541();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_560(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_541();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

