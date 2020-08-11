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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	var uLocal_78 = 1;
	var uLocal_79 = 0;
	var uLocal_80 = 1;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	var uLocal_84 = 0;
	var uLocal_85 = 16;
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
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	struct<2> Local_261 = { 0, 5 } ;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 5;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	iLocal_28 = 0x00000003;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_60 = 0xFFFFFFFF;
	iLocal_61 = 0x00000802;
	iLocal_62 = 0xFFFFFFFF;
	iLocal_63 = 0xFFFFFFFF;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 0x00000001;
	iLocal_69 = 0x00000107;
	fLocal_77 = 4f;
	vLocal_56 = { ScriptParam_261.f_1[0x00000000 /*3*/] };
	vLocal_56 = { vLocal_56 };
	uLocal_54 = uLocal_54;
	Local_52 = { Local_52 };
	bVar0 = 0x00000000;
	if (unk_0x2EBF608FFE6CA406(0x00000072))
	{
		func_141(0x00000001);
	}
	iLocal_53 = unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62());
	iLocal_59 = 0x00000000;
	func_139(&Global_1AED1, 0x00000000);
	func_133();
	unk_0xDF8BDD00CF1D4043(0x00000001);
	if (func_132(uLocal_58, 0x00000001))
	{
		iLocal_64 = 0x0000000A;
	}
	else
	{
		iLocal_64 = 0x00000009;
	}
	while (!Global_914F)
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (!func_132(uLocal_58, 0x00000008))
	{
		if (!func_130(iLocal_64))
		{
			if (func_129(0x00000000, iLocal_63))
			{
				func_141(0x00000000);
			}
			else
			{
				func_141(0x00000001);
			}
		}
	}
	if (iLocal_63 != 0xFFFFFFFF)
	{
		if (!func_129(0x00000000, iLocal_63))
		{
			func_141(0x00000001);
		}
	}
	if (func_132(uLocal_58, 0x00800000))
	{
		func_141(0x00000001);
	}
	if (func_132(uLocal_58, 0x00080000) && (func_128() && !func_127()))
	{
		func_141(0x00000001);
	}
	if (unk_0x8A22C4C08282BF26(unk_0x7CF4675EC2B8ED0B()) > 0x00000001 && !func_132(uLocal_58, 0x00400000))
	{
		if (iLocal_69 != 0x00000107)
		{
			func_126(iLocal_69, 0x00000001, 0x00000000);
			iLocal_69 = 0x00000107;
		}
		func_125(0x0000000A);
	}
	while (0x00000001)
	{
		if (Global_3)
		{
			func_141(0x00000001);
		}
		iLocal_53 = unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62());
		if (func_132(uLocal_58, 0x00100000))
		{
			if (unk_0x437347B10A200C4B(iLocal_53, 0x00000000))
			{
				func_141(0x00000001);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_53) && !unk_0x437347B10A200C4B(iLocal_53, 0x00000000))
		{
			vLocal_55 = { unk_0x68F4C0EC296D3901(iLocal_53, 0x00000001) };
			fLocal_57 = SYSTEM::VDIST2(vLocal_55, ScriptParam_261.f_1[0x00000000 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_261.f_1[0x00000000 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = SYSTEM::VDIST2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0x00000000:
					if (func_130(iLocal_64) || (func_132(uLocal_58, 0x00000010) && !func_132(uLocal_58, 0x00080000)))
					{
						iLocal_62 = 0xFFFFFFFF;
						func_121();
						func_125(0x00000001);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 0x00000107)
							{
								func_126(iLocal_69, 0x00000001, 0x00000000);
								iLocal_69 = 0x00000107;
							}
							func_125(0x0000000A);
						}
						if ((vLocal_55.z - ScriptParam_261.f_1[0x00000000 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 0x00000001:
					if (func_119())
					{
						iLocal_67 = iLocal_67;
						func_125(0x00000003);
					}
					else
					{
						func_121();
					}
					break;
				
				case 0x00000003:
					if (unk_0x8FE4F98FD4BE2689())
					{
						func_141(0x00000001);
						return;
					}
					if (!func_130(iLocal_64))
					{
						if (!func_132(uLocal_58, 0x00000008))
						{
							bVar1 = 0x00000001;
							if (unk_0x7F8A39872A07D2CE(&(Global_181B8.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = 0x00000000;
							}
							if (bVar1)
							{
								func_141(0x00000000);
								break;
							}
						}
					}
					if (!func_132(uLocal_58, 0x00000004))
					{
						func_116();
						func_115(&uLocal_58, 0x00000004);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_181DA)
					{
						if (iLocal_69 != 0x00000107)
						{
							if (func_114(0x00000006) && !func_113(iLocal_69))
							{
							}
							else
							{
								func_126(iLocal_69, 0x00000001, 0x00000000);
								iLocal_69 = 0x00000107;
							}
						}
						func_125(0x0000000A);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar2 = !func_132(uLocal_58, 0x00000040);
						func_139(&uLocal_58, 0x00000080);
						if (!func_112(0x00000003) && !Global_181DA)
						{
							if (func_132(uLocal_58, 0x00200000))
							{
								if ((!func_132(uLocal_58, 0x00000001) || !unk_0xC844350D5D58C99A(func_111())) && !Global_181DA)
								{
									func_125(0x0000000A);
									break;
								}
							}
						}
						if (func_132(uLocal_58, 0x00080000) && (func_128() && !func_127()))
						{
							func_141(0x00000001);
						}
						if (func_110())
						{
							func_141(0x00000001);
						}
						if ((!func_102(0x00000006) || Global_1B05D) || func_101())
						{
							bVar2 = 0x00000000;
						}
						if (func_132(uLocal_58, 0x00000001))
						{
							if (!func_100())
							{
								func_98(&uLocal_58, 0x00000080);
								bVar2 = 0x00000000;
							}
						}
						if (func_97(0x00000001))
						{
							bVar2 = 0x00000000;
						}
						if (Global_12B4E)
						{
							bVar2 = 0x00000000;
						}
						if (func_96())
						{
							bVar2 = 0x00000000;
						}
						if (unk_0x991B1F0980C62628())
						{
							bVar2 = 0x00000000;
						}
						if (func_95() || func_94(0x00000008, 0xFFFFFFFF))
						{
							bVar2 = 0x00000000;
						}
						if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
						{
							bVar2 = 0x00000000;
						}
						if (!unk_0x04B2EAD6D5301B36(unk_0xD803B885F5E47A62()))
						{
							bVar2 = 0x00000000;
						}
						if (func_93(0x00000000) || func_92())
						{
							bVar2 = 0x00000000;
						}
						if (bVar2)
						{
							if (!unk_0x5A91F08DF773C39D(iLocal_53, ScriptParam_261.f_1[0x00000000 /*3*/], fLocal_77, fLocal_77, 2f, 0x00000000, 0x00000001, iLocal_67))
							{
								bVar2 = 0x00000000;
							}
							if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
							{
								bVar2 = 0x00000000;
							}
							if (bVar2)
							{
								unk_0x558EC149EB2BC0A2(0x00000000, 0x00000033);
								if (func_91(uLocal_54))
								{
									if (iLocal_60 == 0xFFFFFFFF)
									{
										func_90(&iLocal_60, 0x00000004, sLocal_65, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
										func_98(&uLocal_58, 0x00000800);
									}
									else if (!func_132(uLocal_58, 0x00000800) || !unk_0xFEBC1E4EC9E001F0())
									{
										func_89(&iLocal_60);
										func_139(&uLocal_58, 0x00000800);
									}
									if (func_87(iLocal_60, 0x00000001))
									{
										sLocal_65 = sLocal_65;
										func_89(&iLocal_60);
										func_139(&uLocal_58, 0x00000800);
										unk_0x92DCE5C81176D2B4(&Local_52);
										unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000038);
										func_125(0x00000005);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_89(&iLocal_60);
									func_139(&uLocal_58, 0x00000800);
									unk_0x92DCE5C81176D2B4(&Local_52);
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000038);
									func_125(0x00000005);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_60 != 0xFFFFFFFF)
							{
								func_89(&iLocal_60);
								func_139(&uLocal_58, 0x00000800);
								unk_0xA37A90C62806D848(0x00000000);
							}
						}
					}
					func_84();
					break;
				
				case 0x00000005:
					unk_0x558EC149EB2BC0A2(0x00000000, 0x00000033);
					if (unk_0x1FBF08B001C4788A(&Local_52))
					{
						if (iLocal_60 != 0xFFFFFFFF)
						{
							func_89(&iLocal_60);
						}
						iVar3 = 0x00000002;
						bVar0 = 0x00000000;
						if (func_132(uLocal_58, 0x00000001))
						{
							if (func_114(0x00000006) || func_114(0x00000007))
							{
								iVar3 = 0x00000001;
								bVar0 = 0x00000001;
							}
						}
						if (iVar3 != 0x00000001)
						{
							iVar3 = func_81(&iLocal_62, 0x00000006, iLocal_64, 0x00000000, 0x00000000);
						}
						if (iVar3 == 0x00000001)
						{
							if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
							{
								unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
							}
							func_80();
							if (Global_A664)
							{
								func_71(unk_0x16F2683693E537C9());
							}
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000038);
							iLocal_50 = func_24();
							func_98(&uLocal_58, 0x00000002);
							func_125(0x00000006);
							func_20(&iLocal_71);
							if (iLocal_63 != 0xFFFFFFFF)
							{
								func_19(iLocal_63);
								func_16(func_18(iLocal_63), 0x00000000, 0x00000000);
							}
						}
						else if (iVar3 == 0x00000002)
						{
							func_15();
						}
						else if (iVar3 == 0x00000000)
						{
							func_125(0x0000000A);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 0x00000006:
					if (func_132(Global_1AED1, 0x00040000))
					{
						func_139(&Global_1AED1, 0x00040000);
						func_14();
					}
					if (func_132(uLocal_58, 0x00200000))
					{
						if (!func_112(0x00000003) && !unk_0x1727A44C562FBED2(iLocal_50))
						{
							func_125(0x0000000A);
						}
					}
					if (!unk_0x1727A44C562FBED2(iLocal_50))
					{
						unk_0x11E0F00830F70E15(SYSTEM::ROUND((func_10(&iLocal_71) * 1000f)), iLocal_63, 0x00000000);
						func_9(&iLocal_71);
						func_139(&uLocal_58, 0x00000100);
						func_8();
						if (bVar0)
						{
							func_139(&uLocal_58, 0x00000002);
						}
						else if (func_132(uLocal_58, 0x00000002))
						{
							if (func_132(Global_1AED1, 0x00000000))
							{
								func_7(&iLocal_62);
								iLocal_62 = 0xFFFFFFFF;
								func_139(&uLocal_58, 0x00000002);
							}
							else
							{
								func_7(&iLocal_62);
								iLocal_62 = 0xFFFFFFFF;
								func_139(&uLocal_58, 0x00000002);
							}
						}
						func_125(0x00000000);
						if (iLocal_63 != 0xFFFFFFFF)
						{
							if (func_132(Global_1AED1, 0x00000000))
							{
								unk_0x353729B0A07DC11A(func_18(iLocal_63), 0x00000000, Global_181DD, 0x00000000);
								func_6(func_18(iLocal_63), 0x00000000, Global_181DD, 0x00000001, 0x00000000);
							}
							else
							{
								unk_0x353729B0A07DC11A(func_18(iLocal_63), 0x00000000, Global_181DD, 0x00000000);
								func_6(func_18(iLocal_63), 0x00000000, Global_181DD, 0x00000000, 0x00000000);
							}
						}
						func_5();
						func_139(&Global_1AED1, 0x00000000);
						if (func_132(uLocal_58, 0x01000000))
						{
							func_141(0x00000001);
						}
						if (iLocal_63 != 0xFFFFFFFF)
						{
							if (Global_1B416.f_2378)
							{
								if (!func_129(0x00000000, iLocal_63))
								{
									func_141(0x00000001);
								}
							}
						}
					}
					func_4();
					break;
				
				case 0x00000008:
					func_125(0x00000000);
					break;
				
				case 0x0000000A:
					func_141(0x00000001);
					break;
				
				case 0x00000009:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 0x00000107)
						{
							func_126(iLocal_69, 0x00000001, 0x00000000);
							iLocal_69 = 0x00000107;
						}
						func_125(0x0000000A);
					}
					break;
				
				case 0x00000007:
					func_2();
					if (iLocal_69 != 0x00000107)
					{
						func_126(iLocal_69, 0x00000000, 0x00000000);
					}
					if (iLocal_60 != 0xFFFFFFFF)
					{
						func_89(&iLocal_60);
					}
					if (!unk_0xEA6BC48857E0AC4C(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
					}
					func_125(0x00000004);
					break;
				
				case 0x00000004:
					if ((iLocal_68 % 0x00000096) == 0x00000000)
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (iLocal_70 == 0x00000002)
							{
								if (iLocal_70 == 0x00000002)
								{
									if (func_130(iLocal_64) && func_129(0x00000000, iLocal_63))
									{
										func_133();
										if (iLocal_69 != 0x00000107)
										{
											func_126(iLocal_69, 0x00000001, 0x00000000);
										}
										func_125(0x00000000);
									}
								}
							}
							else if (iLocal_70 == 0x00000000)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 0x00000107)
									{
										func_126(iLocal_69, 0x00000001, 0x00000000);
										iLocal_69 = 0x00000107;
									}
									func_125(0x0000000A);
								}
							}
							else if (iLocal_70 == 0x00000001)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_133();
									if (iLocal_69 != 0x00000107)
									{
										func_126(iLocal_69, 0x00000001, 0x00000000);
									}
									func_125(0x00000000);
								}
							}
						}
						else
						{
							func_126(iLocal_69, 0x00000001, 0x00000000);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0x00000000);
	}
}

bool func_1(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_2()
{
	func_3(&uLocal_78);
	func_3(&uLocal_80);
	unk_0x8D17794CE3273D70("pickup_object");
	unk_0x8D17794CE3273D70("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0x00000000)
		{
			unk_0x71199B01895C6202((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xEA6BC48857E0AC4C(&Global_17646))
	{
		return;
	}
	if (unk_0xF166B8FB0B765CF2(sParam0, &Global_17646, 0x00000000, 0xFFFFFFFF) != 0x00000000)
	{
		return;
	}
	unk_0x73B08BBDEAC9B885(sParam0, iParam1, iParam2, iParam3, iParam4, Global_16AF9);
	StringCopy(&Global_17646, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!*iParam0 == Global_A1B1)
	{
		*iParam0 = 0xFFFFFFFF;
		return;
	}
	*iParam0 = 0xFFFFFFFF;
	Global_A1B0 = 0x00000000;
	Global_A1B2 = 0x00000000;
	Global_A1D7 = 0x0000000F;
	Global_F045 = 0x00000000;
	Global_F046 = 0x00000000;
}

void func_8()
{
	vector3 vVar0[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		unk_0x3CFFF3C8EACD8DC1(StackVal, 0x00000000, 0x00000000, 0x00000000);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x8DECFDD6715449E4(0x00000000, &cVar0);
	}
}

void func_9(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0x00000000;
}

float func_10(int iParam0)
{
	if (func_13(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11(bool bParam0)
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

bool func_12(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_13(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

int func_14()
{
	return 0x00000001;
}

void func_15()
{
}

void func_16(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEA6BC48857E0AC4C(&Global_17646))
	{
		unk_0x73B08BBDEAC9B885(&Global_17646, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		StringCopy(&Global_17646, "", 64);
	}
	StringCopy(&Global_17646, sParam0, 64);
	unk_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_17(0x00000000));
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

char* func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "OJBJ";
			break;
		
		case 0x00000001:
			return "MGDT";
			break;
		
		case 0x00000002:
			return "MGGF";
			break;
		
		case 0x00000003:
			return "OJHU";
			break;
		
		case 0x00000004:
			return "MGOR";
			break;
		
		case 0x00000005:
			return "MGPS";
			break;
		
		case 0x00000006:
			return "MGRP";
			break;
		
		case 0x00000007:
			return "MGSEA";
			break;
		
		case 0x00000008:
			return "MGSTR";
			break;
		
		case 0x00000009:
			return "MGSC";
			break;
		
		case 0x0000000A:
			return "MGSP";
			break;
		
		case 0x0000000B:
			return "MGSRm";
			break;
		
		case 0x0000000C:
			return "OJTX";
			break;
		
		case 0x0000000D:
			return "MGTN";
			break;
		
		case 0x0000000E:
			return "OJTW";
			break;
		
		case 0x0000000F:
			return "OJDA";
			break;
		
		case 0x00000010:
			return "OJDG";
			break;
		
		case 0x00000011:
			return "MGTR";
			break;
		
		case 0x00000012:
			return "MGYG";
			break;
		
		case 0x00000013:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_19(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		unk_0x3CFFF3C8EACD8DC1(0x00000008, &uVar0, 0x00000001, 0x00000001);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x8DECFDD6715449E4(0x00000008, &cVar1);
	}
}

void func_20(int iParam0)
{
	if (!func_13(iParam0))
	{
		func_23(iParam0);
	}
	else
	{
		func_21(iParam0);
	}
}

void func_21(int iParam0)
{
	func_22(iParam0, 0f);
}

void func_22(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_11(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_23(int iParam0)
{
	if (!func_13(iParam0))
	{
		func_21(iParam0);
	}
}

int func_24()
{
	int iVar0;
	
	Global_1B416.f_4A12 = iLocal_82;
	switch (iLocal_82)
	{
		case 0x00000004:
		case 0x00000008:
			func_25(0x00000001);
			break;
		
		case 0x00000005:
		case 0x0000000C:
		case 0x00000006:
			func_25(0x00000000);
			break;
		
		default:
			break;
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
	}
	iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_51, &vLocal_83, 0x000000AA, iLocal_61);
	unk_0x5E8C29AE121DF1C7(&Local_51);
	return iVar0;
}

void func_25(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	
	vVar6 = { func_70(iLocal_82) };
	vVar6 = { func_69(SYSTEM::COS(vVar6.z), SYSTEM::SIN(vVar6.z), unk_0x76F7F8AA07822C28(vVar6.x)) };
	unk_0xD67D6A3F0D653D93(func_68(iLocal_82), vVar6, 5000f, 0x00000000);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100);
	unk_0x8BCB70EB440DED83(0x00000000);
	unk_0xBFE31971E49FA500(0x00000000);
	func_66(0x00000001);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
		if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 0.3f)
		{
			unk_0x93D47DFD0AE94949(unk_0x16F2683693E537C9(), 0xFFFFFFFF);
			while (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 0.3f)
			{
				SYSTEM::WAIT(0x00000000);
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_255))
		{
			vVar4 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - unk_0x68F4C0EC296D3901(iLocal_255, 0x00000000) };
			vVar4.z = 0f;
			fVar7 = SYSTEM::VMAG(vVar4);
			unk_0xDD353D0E9C789D0E(&iVar1);
			if (fVar7 > 0.8f)
			{
				vVar4 = { vVar4 * FtoV((0.78f / fVar7)) };
				vVar5 = { unk_0x68F4C0EC296D3901(iLocal_255, 0x00000000) + vVar4 };
				if (iLocal_82 == 0x0000000C)
				{
					unk_0x96167B03C5A77156(0x00000000, vVar5, 1f, 0x00004E20, 0.25f, 0x00000000, func_65(vVar5, unk_0x68F4C0EC296D3901(iLocal_255, 0x00000000)));
				}
				else
				{
					unk_0x80AA372E04ED318D(0x00000000, vVar5, 1f, 0xFFFFFFFF, func_65(vVar5, unk_0x68F4C0EC296D3901(iLocal_255, 0x00000000)), 0x3F000000);
				}
			}
			else if (fVar7 > 0.15f)
			{
				unk_0xE655C47E46F9A7E4(0x00000000, func_65(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_255, 0x00000000)), 0x00000000);
			}
			unk_0xC6EB89C59F2AF6B8(0x00000000, "pickup_object", "pickup_low", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iVar1);
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
				unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iVar1);
			}
			unk_0xF82EA857DA10E0CD(&iVar1);
			func_66(0x00000001);
		}
	}
	func_23(&iLocal_251);
	while ((func_10(&iLocal_251) < 6f && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "pickup_object", "pickup_low", 0x00000003))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
		SYSTEM::WAIT(0x00000000);
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "pickup_object", "pickup_low", 0x00000003))
	{
		unk_0x8352CA08CF578D18(unk_0x16F2683693E537C9(), "pickup_object", "pickup_low", 0.8f);
		bVar8 = 0x00000001;
	}
	while ((func_10(&iLocal_251) < 6f && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
		if (!bVar8 && unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "pickup_object", "pickup_low", 0x00000003))
		{
			unk_0x8352CA08CF578D18(unk_0x16F2683693E537C9(), "pickup_object", "pickup_low", 0.8f);
			bVar8 = 0x00000001;
		}
		SYSTEM::WAIT(0x00000000);
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!bVar8 && unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "pickup_object", "pickup_low", 0x00000003))
		{
			unk_0x8352CA08CF578D18(unk_0x16F2683693E537C9(), "pickup_object", "pickup_low", 0.7f);
			bVar8 = 0x00000001;
		}
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
	}
	func_9(&iLocal_251);
	func_41();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_35() == 0x00000000)
		{
			unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000009, 0x00000005, 0x00000000, 0x00000000);
		}
		else if (func_35() == 0x00000001)
		{
			unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000008, 0x00000001, 0x00000000, 0x00000000);
		}
		else if (func_35() == 0x00000002)
		{
			unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000008, 0x00000003, 0x00000000, 0x00000000);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_82)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0x96167B03C5A77156(unk_0x16F2683693E537C9(), func_34(iLocal_82), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
		}
		if (unk_0xC844350D5D58C99A(iLocal_255))
		{
			unk_0xF690C84DADBB3551(&iLocal_255);
		}
		iVar2 = unk_0xAE06CCC36C49929C(0x019286A9, func_32(iLocal_82), func_31(iLocal_82), func_30(iLocal_82), 0x00000001, 0x00000002);
		iVar3 = unk_0xAE06CCC36C49929C(0x019286A9, func_29(iLocal_82), func_28(iLocal_82), func_27(iLocal_82), 0x00000000, 0x00000002);
		unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0x297734EBF6EB6285("HAND_SHAKE", 0.2f);
		func_23(&iVar0);
		while (func_10(&iVar0) < 1.5f)
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0xF1E4C781086FABC1(iVar3, iVar2, func_26(iLocal_82), 0x00000001, 0x00000001);
		func_21(&iVar0);
		while (func_10(&iVar0) < ((SYSTEM::TO_FLOAT(func_26(iLocal_82)) / 1000f) + 0.3f))
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
			}
			SYSTEM::WAIT(0x00000000);
		}
	}
	else
	{
		vLocal_83.z = iLocal_255;
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000B1, 0x00000001);
	}
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
		case 0x00000008:
			return 0x00000DAC;
			break;
	}
	return 0x00000000;
}

float func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
			return 50f;
		
		case 0x00000008:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
			return 58.4197f, 0f, -47.9402f;
		
		case 0x00000008:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 0x00000008:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
			return 50f;
		
		case 0x00000008:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
			return -4.0151f, 0f, -47.5544f;
		
		case 0x00000008:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 0x00000008:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_33(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 0x00000008:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()
{
	func_36();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_36()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_39(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_38(unk_0x16F2683693E537C9());
			if (func_37(iVar0) && (!func_114(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_37(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_37(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_40(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_41()
{
	vector3 vVar0;
	var uVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
	if (unk_0xC844350D5D58C99A(iLocal_255))
	{
		unk_0xF690C84DADBB3551(&iLocal_255);
	}
	func_49(0x00000000, 0x00000000, 0x00000001);
	iLocal_255 = unk_0xB0BE3DFBBB59A620(joaat("p_parachute_s"), func_48(iLocal_82), 0x00000001, 0x00000001, 0x00000000);
	unk_0xC023D1C4BF532815(iLocal_255, func_47(iLocal_82), 0x00000002, 0x00000001);
	func_42(&vVar0, &uVar1);
	vVar2 = { 0f, 0f, uVar1 };
	iVar3 = unk_0xE9744DB7B8CA6965(vVar0, vVar2, 0x00000002);
	unk_0xE14EC663EED44AD5(iLocal_255, iVar3, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 0x00000001, 0x447A0000);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iVar3, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
	}
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Grab_Parachute", "BASEJUMPS_SOUNDS", 0x00000001);
	iVar4 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", 0x00000000);
	unk_0x93E9ED66DAB9FBE3(iVar4, iVar3, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0xE3BB8E05FCEB3FBE(iVar4, 0x00000001);
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	while (unk_0xA45992A6CE82FB43(iVar3) < 0.6f)
	{
		SYSTEM::WAIT(0x00000000);
	}
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
}

void func_42(var uParam0, var uParam1)
{
	*uParam0 = { func_46(iLocal_82) };
	switch (iLocal_82)
	{
		case 0x00000005:
			*uParam1 = -1.8f;
			break;
		
		case 0x00000004:
			*uParam1 = func_45(func_65(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_44(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_43(*uParam1, -104.04f);
			}
			break;
		
		case 0x00000008:
			*uParam1 = func_45(func_65(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_44(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_43(*uParam1, -8f);
			}
			break;
		
		case 0x00000006:
			*uParam1 = func_45(func_65(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), *uParam0), -180f, 180f);
			break;
		
		case 0x0000000C:
			*uParam1 = func_45(func_65(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), *uParam0), -180f, 180f);
			break;
	}
}

float func_43(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_44(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_45(float fParam0, float fParam1, float fParam2)
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

Vector3 func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 0x00000001:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 0x00000002:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 0x00000003:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 0x00000004:
			return -92.35f, -854.3f, 39.571f;
		
		case 0x00000005:
			return -120.92f, -976.05f, 295.49f;
		
		case 0x00000006:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 0x00000007:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 0x00000008:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 0x00000009:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 0x0000000A:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 0x0000000B:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 0x0000000C:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
			return 12f, 0f, 12.77f;
		
		case 0x00000005:
			return 10f, 0f, -134.58f;
		
		case 0x00000006:
			return 76f, 0f, -89.95f;
		
		case 0x00000008:
			return 12f, 0f, 89.56f;
		
		case 0x0000000C:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
			return -92.25f, -854.28f, 39.85f;
		
		case 0x00000005:
			return -120.92f, -976.05f, 295.49f;
		
		case 0x00000006:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 0x00000008:
			return -801.57f, 298.85f, 85.25f;
		
		case 0x0000000C:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_61(0x00000000);
	func_51(0x00000001, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
	func_50(0x00000017, 0x00000001);
}

void func_50(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_7927, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7927, iParam0);
	}
}

void func_51(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_60(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_59())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_58(0x00000001, iParam3, uParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_60(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_58(0x00000000, iParam3, uParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_56(unk_0xD803B885F5E47A62())) && !func_53(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_52()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_56(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_52()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_53(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_54(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_54(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_55();
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

int func_55()
{
	return Global_1407E9;
}

int func_56(int iParam0)
{
	if (func_53(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_57())
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

bool func_57()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_58(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

int func_59()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_60(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000D);
	}
}

void func_61(int iParam0)
{
	if (func_64())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_63())
		{
			func_62(0x00000001, 0x00000001);
		}
		else
		{
			func_62(0x00000000, 0x00000000);
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
	if (!func_59())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_62(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_93(0x00000000))
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

bool func_63()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_64()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

float func_65(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		func_67();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_93(0x00000000))
		{
			func_61(0x00000000);
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

void func_67()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

Vector3 func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 0x00000001:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 0x00000002:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 0x00000003:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 0x00000004:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 0x00000005:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 0x00000006:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 0x00000007:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 0x00000008:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 0x00000009:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 0x0000000A:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 0x0000000B:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 0x0000000C:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_69(vector3 vParam0)
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

Vector3 func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 0x00000001:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 0x00000002:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 0x00000003:
			return -39.935f, 0f, 12.8174f;
		
		case 0x00000004:
			return 0.9749f, 0f, -5.2236f;
		
		case 0x00000005:
			return -12.889f, 0f, 1.6227f;
		
		case 0x00000006:
			return -48.5605f, 0f, 160.4909f;
		
		case 0x00000007:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 0x00000008:
			return -17.4118f, 0f, 117.7175f;
		
		case 0x00000009:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 0x0000000A:
			return -20.9567f, 0f, 170.5743f;
		
		case 0x0000000B:
			return 1.9344f, 0f, -55.2084f;
		
		case 0x0000000C:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0x00000000)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	if (!iVar0 == 0xFFFFFFFF)
	{
		iVar1 = Global_A58F[iVar0 /*5*/];
		func_74(0x00000001, iVar1, 0x00000001);
		return;
	}
	iVar2 = func_73(iParam0);
	if (iVar2 == 0xFFFFFFFF)
	{
		return;
	}
	func_72(iVar2);
}

void func_72(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000005)
	{
		return;
	}
	if (!Global_A575[iParam0 /*5*/].f_1 == 0x00000000)
	{
		if (Global_A575[iParam0 /*5*/].f_1 == unk_0x16F2683693E537C9())
		{
			Global_A662 = 0x00000000;
		}
	}
	Global_A575[iParam0 /*5*/] = 0x0000000D;
	Global_A575[iParam0 /*5*/].f_1 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_2 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_3 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_4 = 0x00000000;
	Global_A573 = (Global_A573 - 0x00000001);
	if (Global_A573 < 0x00000000)
	{
		Global_A573 = 0x00000000;
	}
}

int func_73(int iParam0)
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

void func_74(int iParam0, int iParam1, int iParam2)
{
	func_75(iParam0, iParam1, iParam2, 0x00000000, 0x00000000, 0x00000001);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_77(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_76();
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

int func_76()
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

int func_77(int iParam0, int iParam1, int iParam2)
{
	if (func_78(iParam0, iParam1, iParam2) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_78(int iParam0, int iParam1, int iParam2)
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

int func_79(int iParam0)
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

void func_80()
{
	if (Global_1FE1[0x00000000 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000000 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	if (Global_1FE1[0x00000001 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000001 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	if (Global_1FE1[0x00000002 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000002 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000019);
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
}

int func_81(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 0x00000007)
	{
		return 0x00000000;
	}
	if (!bParam3)
	{
		if (Global_177DE.f_2C == 0x00000001)
		{
			return 0x00000002;
		}
	}
	if (iParam1 == 0x00000000)
	{
		if (func_83(0x00000000))
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*iParam0 = Global_A1B3;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0x00000000);
		Global_56C3.f_5 = 0x00000000;
		if (iParam2 != 0x00000005)
		{
			unk_0x4C7B0415764B64BA(0x00000008);
		}
		Global_A1D7 = iParam2;
		Global_A1B1 = *iParam0;
		Global_A1B2 = iParam4;
		Global_A1B0 = 0x00000000;
		return 0x00000001;
	}
	if (*iParam0 != 0xFFFFFFFF)
	{
		if (Global_A1B0 > 0x00000000)
		{
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < Global_A1B0)
			{
				if (Global_A1B6[iVar0 /*4*/] == *iParam0)
				{
					return 0x00000002;
				}
				iVar0++;
			}
		}
		else if (Global_A1B1 == *iParam0)
		{
			return 0x00000001;
		}
		*iParam0 = 0xFFFFFFFF;
	}
	if (*iParam0 == 0xFFFFFFFF)
	{
		if (!func_130(iParam2))
		{
			return 0x00000000;
		}
		if (Global_A1B0 == 0x00000008)
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*iParam0 = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/] = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/].f_1 = iParam1;
		Global_A1B6[Global_A1B0 /*4*/].f_2 = iParam2;
		Global_A1B6[Global_A1B0 /*4*/].f_3 = 0x00000000;
		Global_A1B0++;
		if (iParam4 != 0x00000000)
		{
			func_82(iParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_82(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_A1B0 == 0x00000000)
	{
		return;
	}
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_A1B0)
	{
		if (Global_A1B6[iVar0 /*4*/] == *uParam0)
		{
			Global_A1B6[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = 0xFFFFFFFF;
}

int func_83(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_130(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_84()
{
	switch (iLocal_82)
	{
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x0000000C:
			func_85();
			break;
		
		default:
			break;
	}
}

void func_85()
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		vLocal_83.y = iVar0;
	}
	if (unk_0xC844350D5D58C99A(iLocal_255))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iLocal_255, 0x00000001) };
		if (SYSTEM::VDIST2(vVar1, vLocal_56) > 25f)
		{
			func_86(0x00000000);
		}
	}
}

void func_86(int iParam0)
{
	if (iParam0 == 0x00000002)
	{
	}
	else if (iParam0 == 0x00000000)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0x00000000;
	iLocal_59 = 0x00000007;
}

int func_87(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_88(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_93(0x00000000))
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

int func_88(int iParam0)
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

void func_89(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_88(*iParam0);
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

void func_90(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == 0xFFFFFFFF)
		{
			func_89(iParam0);
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

int func_91(var uParam0)
{
	return 0x00000001;
}

var func_92()
{
	return Global_12061;
}

int func_93(int iParam0)
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

bool func_94(int iParam0, int iParam1)
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

bool func_95()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_96()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_97(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

void func_98(var uParam0, int iParam1)
{
	func_99(uParam0, iParam1);
}

void func_99(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_100()
{
	return 0x00000001;
}

bool func_101()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001);
	if (((iVar0 == 0x00000000 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = 0x00000000;
	}
	else
	{
		bVar1 = 0x00000001;
	}
	if (bVar1)
	{
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return ((((bVar1 && unk_0x06F8112AA79C53D9(0x00000000, 0x00000045)) || (bVar1 && unk_0x06F8112AA79C53D9(0x00000000, 0x00000046))) || (bVar1 && unk_0x06F8112AA79C53D9(0x00000000, 0x00000044))) || unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()));
	}
	return (((((bVar1 && unk_0x06F8112AA79C53D9(0x00000000, 0x00000018)) || (bVar1 && unk_0x06F8112AA79C53D9(0x00000000, 0x00000019))) || (bVar1 && unk_0x06F8112AA79C53D9(0x00000000, 0x0000002F))) || unk_0x05569C69D7945F99(unk_0x16F2683693E537C9())) || unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()));
}

int func_102(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_109()) || Global_1B05D) || Global_7832) || func_108()) || func_94(0x00000008, 0xFFFFFFFF)) || func_107()) || func_106()) || func_105()) || func_96()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_109()) || Global_7832) || func_108()) || func_94(0x00000008, 0xFFFFFFFF)) || func_105()) || func_107()) || func_106()) || func_96()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_109()) || Global_1B05D) || Global_7832) || func_108()) || func_94(0x00000008, 0xFFFFFFFF)) || func_105()) || func_107()) || func_106()) || func_96()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_109()) || Global_1B05D) || Global_7832) || func_108()) || func_94(0x00000008, 0xFFFFFFFF)) || func_107()) || func_106()) || func_96()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_109() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_94(0x00000008, 0xFFFFFFFF)) || func_96()) || func_104()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_94(0x00000008, 0xFFFFFFFF) || func_107()) || func_106()) || func_104()) || func_103())
						{
							return 0x00000000;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 0x00000003) && unk_0x00A15D69BCAA5267() < 0x00000008)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000006:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_109()) || Global_7832) || func_108()) || func_94(0x00000008, 0xFFFFFFFF)) || func_106()) || func_105()) || func_96()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_109()) || func_106()) || Global_1B05D) || Global_7832) || func_108()) || Global_A664) || func_94(0x00000008, 0xFFFFFFFF)) || func_105()) || func_104()) || func_96()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_109()) || Global_1B05D) || Global_7832) || func_108()) || func_94(0x00000008, 0xFFFFFFFF)) || func_105()) || func_104()) || func_107()) || func_106()) || func_96())
						{
							return 0x00000000;
						}
						break;
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
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_103()
{
	return Global_181DF.f_1;
}

int func_104()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_105()
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

bool func_106()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_107()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_108()
{
	return Global_14086D;
}

int func_109()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_110()
{
	if (unk_0x8A22C4C08282BF26(joaat("stripperhome")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_111()
{
	return Global_17170;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			if (func_114(0x00000006) || func_114(0x00000007))
			{
				return 0x00000001;
			}
			else
			{
				return func_112(0x00000003);
			}
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			if (func_130(0x00000005))
			{
				if (func_102(0x00000004))
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

bool func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0x00000000;
	}
	return unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13);
}

bool func_114(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_115(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_116()
{
	vector3 vVar0;
	
	if (bLocal_254)
	{
		switch (iLocal_82)
		{
			case 0x00000004:
			case 0x00000005:
			case 0x00000008:
				iLocal_255 = unk_0xB0BE3DFBBB59A620(joaat("p_parachute_s"), func_48(iLocal_82), 0x00000001, 0x00000001, 0x00000000);
				unk_0xC023D1C4BF532815(iLocal_255, func_47(iLocal_82), 0x00000002, 0x00000001);
				unk_0x1E9649458B15960F(iLocal_255, 0x00000001);
				break;
			
			case 0x00000006:
			case 0x0000000C:
				iLocal_255 = unk_0xB0BE3DFBBB59A620(joaat("p_parachute_s"), func_48(iLocal_82), 0x00000001, 0x00000001, 0x00000000);
				unk_0xC023D1C4BF532815(iLocal_255, func_47(iLocal_82), 0x00000002, 0x00000001);
				unk_0xAEAAE8FB447447B5(iLocal_255);
				vVar0 = { func_118(iLocal_82) };
				if (!func_33(vVar0))
				{
					iLocal_256 = unk_0x122AAB0B1D6F55AD(joaat("bati"), vVar0, func_117(iLocal_82), 0x00000001, 0x00000001, 0x00000000);
					iLocal_256 = iLocal_256;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000006:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000006:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_119()
{
	switch (iLocal_82)
	{
		case 0x00000005:
		case 0x00000004:
		case 0x00000008:
		case 0x00000006:
			return (((unk_0xB4AE0788C1587752("pickup_object") && unk_0xB4AE0788C1587752("oddjobs@basejump@ig_15")) && func_120(&uLocal_78)) && func_120(&uLocal_80));
			break;
		
		case 0x0000000C:
			return ((unk_0xB4AE0788C1587752("pickup_object") && unk_0xB4AE0788C1587752("oddjobs@basejump@ig_15")) && func_120(&uLocal_78));
			break;
		
		default:
			break;
	}
	return (func_120(&uLocal_78) && func_120(&uLocal_80));
}

int func_120(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0x00000000)
		{
			if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
			{
				if (!unk_0xB87F6CF6E5628C67((*uParam0)[iVar0]))
				{
				}
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_121()
{
	switch (iLocal_82)
	{
		case 0x00000005:
		case 0x00000008:
			func_123(&uLocal_78, joaat("p_parachute_s"));
			unk_0x3F423BF5B8125A50("pickup_object");
			unk_0x3F423BF5B8125A50("oddjobs@basejump@ig_15");
			break;
		
		case 0x00000004:
		case 0x00000006:
			func_123(&uLocal_78, joaat("p_parachute_s"));
			func_123(&uLocal_80, joaat("bati"));
			unk_0x3F423BF5B8125A50("pickup_object");
			unk_0x3F423BF5B8125A50("oddjobs@basejump@ig_15");
			break;
		
		case 0x0000000C:
			func_123(&uLocal_78, joaat("p_parachute_s"));
			unk_0x3F423BF5B8125A50("pickup_object");
			unk_0x3F423BF5B8125A50("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_122(&uLocal_78);
	func_122(&uLocal_80);
}

void func_122(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0x00000000)
		{
			unk_0x523BCC9DC80CD82F((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_123(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0x00000000)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	iVar1 = func_124(uParam0);
	if (iVar1 < 0x00000000 || iVar1 >= *uParam0)
	{
		return 0x00000000;
	}
	(*uParam0)[iVar1] = iParam1;
	return 0x00000001;
}

int func_124(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0x00000000)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_125(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_126(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000F);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
		if (Global_79A7 == 0x00000001)
		{
			Global_79A8 = 0x00000001;
		}
		Global_79A7 = 0x00000001;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000003);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13))
		{
			unk_0xCD816869CA451988(0x00000001);
			unk_0x142CC44DB769B57E(&(Global_79AA[iVar0 /*23*/].f_13));
			unk_0xCD816869CA451988(0x00000000);
		}
	}
}

int func_127()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_128()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

bool func_129(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 0x0000000B || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000020)
	{
		return 0x00000000;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

bool func_130(int iParam0)
{
	return func_131(iParam0, Global_A1D7);
}

int func_131(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000000F)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000010:
			switch (iParam1)
			{
				case 0x00000009:
				case 0x0000000A:
				case 0x00000007:
				case 0x0000000D:
				case 0x0000000E:
					return 0x00000000;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000004:
			if (iParam1 == 0x00000011)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
		case 0x00000008:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000007:
			if (iParam1 == 0x00000006)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000A:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			switch (iParam1)
			{
				case 0x00000011:
				case 0x0000000C:
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000012:
		case 0x0000000C:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
	}
	return 0x00000000;
}

bool func_132(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_133()
{
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		func_98(&uLocal_58, 0x00800000);
		return;
	}
	StringCopy(&Local_51, "bj", 64);
	iLocal_82 = func_137(vLocal_56, 0x00000000);
	switch (iLocal_82)
	{
		case 0x00000004:
			iLocal_69 = 0x00000081;
			break;
		
		case 0x00000005:
			iLocal_69 = 0x00000082;
			break;
		
		case 0x00000006:
			iLocal_69 = 0x00000083;
			break;
		
		case 0x00000008:
			iLocal_69 = 0x00000085;
			break;
		
		case 0x0000000C:
			iLocal_69 = 0x00000089;
			break;
		
		default:
			break;
	}
	if (iLocal_69 == 0x00000081)
	{
		if (func_136(0x00000013))
		{
			func_135(iLocal_69);
		}
	}
	func_98(&uLocal_58, 0x00400000);
	iLocal_63 = 0x00000000;
	fLocal_66 = (SYSTEM::TO_FLOAT(func_134(iLocal_69)) + 5f);
	fLocal_77 = 1.1f;
	sLocal_65 = "PLAY_BASEJUMP_G";
	if (iLocal_69 != 0x00000107)
	{
		if (!func_129(0x00000000, iLocal_63))
		{
			bLocal_254 = 0x00000000;
			func_135(iLocal_69);
		}
		else
		{
			bLocal_254 = 0x00000001;
		}
	}
	else
	{
		bLocal_254 = 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("bj")) > 0x00000000)
	{
		func_98(&uLocal_58, 0x00000008);
	}
	else
	{
		func_139(&uLocal_58, 0x00000008);
	}
	if (func_114(0x0000000C))
	{
		func_98(&uLocal_58, 0x00000008);
	}
	iLocal_61 = 0x000088B8;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000006E:
		case 0x0000006F:
			return 0x00000014;
			break;
		
		case 0x00000042:
		case 0x00000043:
		case 0x0000004C:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000085:
		case 0x00000089:
			return 0x00000064;
			break;
		
		case 0x0000007D:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000084:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000044:
		case 0x00000045:
		case 0x0000005F:
		case 0x00000046:
		case 0x00000047:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x00000048:
			return 0x000000D1;
			break;
	}
	return 0xFFFFFFFF;
}

void func_135(int iParam0)
{
	if (iLocal_59 < 0x00000005)
	{
		if (iParam0 != 0x00000107)
		{
			if (iParam0 < 0x00000000 || iParam0 >= 0x00000107)
			{
			}
			func_126(iParam0, 0x00000000, 0x00000000);
		}
		iLocal_69 = 0x00000107;
		func_89(&iLocal_60);
		iLocal_59 = 0x00000009;
	}
}

bool func_136(int iParam0)
{
	return Global_1B085[iParam0 /*10*/].f_1;
}

int func_137(vector3 vParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0x00000000;
	while (iVar3 < 0x0000000D)
	{
		if (iParam1 == func_138(iVar3))
		{
			fVar1 = SYSTEM::VDIST2(vParam0, func_46(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_139(var uParam0, int iParam1)
{
	func_140(uParam0, iParam1);
}

void func_140(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_141(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 0x00000107)
		{
			func_126(iLocal_69, 0x00000000, 0x00000000);
		}
	}
	func_89(&iLocal_60);
	if (func_132(uLocal_58, 0x00000002))
	{
		func_5();
		func_139(&uLocal_58, 0x00000002);
		func_7(&iLocal_62);
	}
	iLocal_62 = 0xFFFFFFFF;
	func_142();
	unk_0x10FAF14A60A0DBE1();
}

void func_142()
{
	func_139(&uLocal_58, 0x00000004);
	func_143();
	if (unk_0x1727A44C562FBED2(iLocal_50))
	{
		unk_0x4000D538E4D54254(iLocal_50, 0x00000003);
	}
	if (!unk_0x2EBF5002C6B6A06C(&Local_52))
	{
		if (unk_0x4880526EC51D1C27(&Local_52) != 0x00000000)
		{
			unk_0x5E8C29AE121DF1C7(&Local_52);
		}
	}
}

void func_143()
{
}

