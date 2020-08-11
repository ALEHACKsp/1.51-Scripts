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
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
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
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	int iLocal_82 = 0;
	vector3 vLocal_83[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_94 = 0f;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 16;
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
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	struct<100> Local_267 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<2> Local_274 = { 0, 5 } ;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 5;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	bLocal_78 = 0x00000001;
	iLocal_79 = 0x00000006;
	iLocal_80 = 0x00000012;
	iLocal_82 = 0xFFFFFFFF;
	bLocal_96 = 0x00000001;
	iLocal_97 = 0x00000001;
	vLocal_56 = { ScriptParam_274.f_1[0x00000000 /*3*/] };
	vLocal_56 = { vLocal_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = 0x00000000;
	if (unk_0x2EBF608FFE6CA406(0x00000052))
	{
		func_151(0x00000001);
	}
	iLocal_53 = unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62());
	iLocal_59 = 0x00000000;
	func_149(&Global_1AED1, 0x00000000);
	func_143();
	unk_0xDF8BDD00CF1D4043(0x00000001);
	if (func_142(uLocal_58, 0x00000001))
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
	if (!func_142(uLocal_58, 0x00000008))
	{
		if (!func_140(iLocal_64))
		{
			if (func_139(0x00000000, iLocal_63))
			{
				func_151(0x00000000);
			}
			else
			{
				func_151(0x00000001);
			}
		}
	}
	if (iLocal_63 != 0xFFFFFFFF)
	{
		if (!func_139(0x00000000, iLocal_63))
		{
			bLocal_78 = 0x00000000;
		}
	}
	if (func_142(uLocal_58, 0x00800000))
	{
		func_151(0x00000001);
	}
	if (func_142(uLocal_58, 0x00080000) && (func_138() && !func_137()))
	{
		func_151(0x00000001);
	}
	if (unk_0x8A22C4C08282BF26(unk_0x7CF4675EC2B8ED0B()) > 0x00000001 && !func_142(uLocal_58, 0x00400000))
	{
		if (iLocal_69 != 0x00000107)
		{
			func_136(iLocal_69, 0x00000001, 0x00000000);
			iLocal_69 = 0x00000107;
		}
		func_135(0x0000000A);
	}
	while (0x00000001)
	{
		if (!func_142(uLocal_58, 0x10000000))
		{
			fVar1 = 0f;
			if (unk_0xE82754C349C7B581(ScriptParam_274.f_1[0x00000000 /*3*/], &fVar1, 0x00000000, 0x00000000))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_274.f_1[0x00000000 /*3*/].f_2 = fVar1;
					func_134(&uLocal_58, 0x10000000);
				}
			}
		}
		iLocal_53 = unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62());
		if (func_142(uLocal_58, 0x00100000))
		{
			if (unk_0x437347B10A200C4B(iLocal_53, 0x00000000))
			{
				func_151(0x00000001);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_53) && !unk_0x437347B10A200C4B(iLocal_53, 0x00000000))
		{
			vLocal_55 = { unk_0x68F4C0EC296D3901(iLocal_53, 0x00000001) };
			fLocal_57 = SYSTEM::VDIST2(vLocal_55, ScriptParam_274.f_1[0x00000000 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_274.f_1[0x00000000 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = SYSTEM::VDIST2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0x00000000:
					if (func_140(iLocal_64) || (func_142(uLocal_58, 0x00000010) && !func_142(uLocal_58, 0x00080000)))
					{
						iLocal_62 = 0xFFFFFFFF;
						func_130();
						func_135(0x00000001);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 0x00000107)
							{
								func_136(iLocal_69, 0x00000001, 0x00000000);
								iLocal_69 = 0x00000107;
							}
							func_135(0x0000000A);
						}
						if ((vLocal_55.z - ScriptParam_274.f_1[0x00000000 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 0x00000001:
					if (func_128() && fLocal_57 > ((fLocal_77 * 1.5f) * (fLocal_77 * 1.5f)))
					{
						iLocal_67 = iLocal_67;
						func_135(0x00000003);
					}
					else
					{
						func_130();
					}
					break;
				
				case 0x00000003:
					if (unk_0x8FE4F98FD4BE2689())
					{
						func_151(0x00000001);
						return;
					}
					if (!func_140(iLocal_64))
					{
						if (!func_142(uLocal_58, 0x00000008))
						{
							bVar2 = 0x00000001;
							if (unk_0x7F8A39872A07D2CE(&(Global_181B8.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar2 = 0x00000000;
							}
							if (bVar2)
							{
								func_151(0x00000000);
								break;
							}
						}
					}
					if (!func_142(uLocal_58, 0x00000004))
					{
						func_117();
						func_134(&uLocal_58, 0x00000004);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_181DA)
					{
						if (iLocal_69 != 0x00000107)
						{
							if (func_116(0x00000006) && !func_115(iLocal_69))
							{
							}
							else
							{
								func_136(iLocal_69, 0x00000001, 0x00000000);
								iLocal_69 = 0x00000107;
							}
						}
						func_135(0x0000000A);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_142(uLocal_58, 0x00000040);
						func_149(&uLocal_58, 0x00000080);
						if (!func_114(0x00000003) && !Global_181DA)
						{
							if (func_142(uLocal_58, 0x00200000))
							{
								if ((!func_142(uLocal_58, 0x00000001) || !unk_0xC844350D5D58C99A(func_113())) && !Global_181DA)
								{
									func_135(0x0000000A);
									break;
								}
							}
						}
						if (func_142(uLocal_58, 0x00080000) && (func_138() && !func_137()))
						{
							func_151(0x00000001);
						}
						if (func_112())
						{
							func_151(0x00000001);
						}
						if ((!func_104(0x00000006) || Global_1B05D) || func_103())
						{
							bVar3 = 0x00000000;
						}
						if (!bLocal_78)
						{
							func_101(&uLocal_58, 0x00000080);
							bVar3 = 0x00000000;
						}
						if (func_142(uLocal_58, 0x00000001))
						{
							if (!func_100())
							{
								func_101(&uLocal_58, 0x00000080);
								bVar3 = 0x00000000;
							}
						}
						if (func_99(0x00000001))
						{
							bVar3 = 0x00000000;
						}
						if (Global_12B4E)
						{
							bVar3 = 0x00000000;
						}
						if (func_98())
						{
							bVar3 = 0x00000000;
						}
						if (unk_0x991B1F0980C62628())
						{
							bVar3 = 0x00000000;
						}
						if (func_97() || func_96(0x00000008, 0xFFFFFFFF))
						{
							bVar3 = 0x00000000;
						}
						if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
						{
							bVar3 = 0x00000000;
						}
						if (!unk_0x04B2EAD6D5301B36(unk_0xD803B885F5E47A62()))
						{
							bVar3 = 0x00000000;
						}
						if (func_95(0x00000000) || func_94())
						{
							bVar3 = 0x00000000;
						}
						if (bVar3)
						{
							if (!unk_0x5A91F08DF773C39D(iLocal_53, ScriptParam_274.f_1[0x00000000 /*3*/], fLocal_77, fLocal_77, 2f, 0x00000000, 0x00000001, iLocal_67))
							{
								bVar3 = 0x00000000;
							}
							iVar4 = unk_0xD8A54335F18763BA();
							if (iLocal_79 > iLocal_80)
							{
								if (iVar4 < iLocal_79 && iVar4 >= iLocal_80)
								{
									func_101(&uLocal_58, 0x00000080);
									bVar3 = 0x00000000;
									if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
									{
										if (!func_142(uLocal_58, 0x08000000))
										{
											func_93("MG_NA_TIME", iLocal_79, iLocal_80);
											func_101(&uLocal_58, 0x08000000);
										}
									}
									else
									{
										func_149(&uLocal_58, 0x08000000);
									}
								}
							}
							else if (iVar4 < iLocal_79 || iVar4 >= iLocal_80)
							{
								func_101(&uLocal_58, 0x00000080);
								bVar3 = 0x00000000;
								if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
								{
									if (!func_142(uLocal_58, 0x08000000))
									{
										func_93("MG_NA_TIME", iLocal_79, iLocal_80);
										func_101(&uLocal_58, 0x08000000);
									}
								}
								else
								{
									func_149(&uLocal_58, 0x08000000);
								}
							}
							if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
							{
								bVar3 = 0x00000000;
							}
							if (bVar3)
							{
								unk_0x558EC149EB2BC0A2(0x00000000, 0x00000033);
								if (func_92(iLocal_54))
								{
									if (iLocal_60 == 0xFFFFFFFF)
									{
										func_91(&iLocal_60, 0x00000004, sLocal_65, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
										func_101(&uLocal_58, 0x00000800);
									}
									else if (!func_142(uLocal_58, 0x00000800) || !unk_0xFEBC1E4EC9E001F0())
									{
										func_90(&iLocal_60);
										func_149(&uLocal_58, 0x00000800);
									}
									if (func_88(iLocal_60, 0x00000001))
									{
										sLocal_65 = sLocal_65;
										func_90(&iLocal_60);
										func_149(&uLocal_58, 0x00000800);
										unk_0x92DCE5C81176D2B4(&Local_52);
										unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000038);
										func_135(0x00000005);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_90(&iLocal_60);
									func_149(&uLocal_58, 0x00000800);
									unk_0x92DCE5C81176D2B4(&Local_52);
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000038);
									func_135(0x00000005);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != 0xFFFFFFFF)
							{
								func_90(&iLocal_60);
								func_149(&uLocal_58, 0x00000800);
								unk_0xA37A90C62806D848(0x00000000);
							}
						}
					}
					func_50();
					break;
				
				case 0x00000005:
					unk_0x558EC149EB2BC0A2(0x00000000, 0x00000033);
					if (unk_0x1FBF08B001C4788A(&Local_52))
					{
						if (iLocal_60 != 0xFFFFFFFF)
						{
							func_90(&iLocal_60);
						}
						iVar5 = 0x00000002;
						bVar0 = 0x00000000;
						if (func_142(uLocal_58, 0x00000001))
						{
							if (func_116(0x00000006) || func_116(0x00000007))
							{
								iVar5 = 0x00000001;
								bVar0 = 0x00000001;
							}
						}
						if (iVar5 != 0x00000001)
						{
							iVar5 = func_47(&iLocal_62, 0x00000006, iLocal_64, 0x00000000, 0x00000000);
						}
						if (iVar5 == 0x00000001)
						{
							if (!unk_0x437347B10A200C4B(iLocal_54, 0x00000000))
							{
								unk_0x046C362CF15F1935(&iLocal_54);
							}
							if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
							{
								unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
							}
							func_46();
							if (Global_A664)
							{
								func_37(unk_0x16F2683693E537C9());
							}
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000038);
							iLocal_50 = func_36();
							func_101(&uLocal_58, 0x00000002);
							func_135(0x00000006);
							func_32(&iLocal_71);
							if (iLocal_63 != 0xFFFFFFFF)
							{
								func_31(iLocal_63);
								func_29(func_30(iLocal_63), 0x00000000, 0x00000000);
							}
						}
						else if (iVar5 == 0x00000002)
						{
							func_28();
						}
						else if (iVar5 == 0x00000000)
						{
							func_135(0x0000000A);
						}
					}
					else
					{
						func_28();
					}
					break;
				
				case 0x00000006:
					if (func_142(Global_1AED1, 0x00040000))
					{
						func_149(&Global_1AED1, 0x00040000);
						func_27();
					}
					if (func_142(uLocal_58, 0x00200000))
					{
						if (!func_114(0x00000003) && !unk_0x1727A44C562FBED2(iLocal_50))
						{
							func_135(0x0000000A);
						}
					}
					if (!unk_0x1727A44C562FBED2(iLocal_50))
					{
						unk_0x11E0F00830F70E15(SYSTEM::ROUND((func_23(&iLocal_71) * 1000f)), iLocal_63, 0x00000000);
						func_22(&iLocal_71);
						func_149(&uLocal_58, 0x00000100);
						func_21();
						if (bVar0)
						{
							func_149(&uLocal_58, 0x00000002);
						}
						else if (func_142(uLocal_58, 0x00000002))
						{
							if (func_142(Global_1AED1, 0x00000000))
							{
								func_20(&iLocal_62);
								iLocal_62 = 0xFFFFFFFF;
								func_149(&uLocal_58, 0x00000002);
							}
							else
							{
								func_20(&iLocal_62);
								iLocal_62 = 0xFFFFFFFF;
								func_149(&uLocal_58, 0x00000002);
							}
						}
						func_135(0x00000000);
						if (iLocal_63 != 0xFFFFFFFF)
						{
							if (func_142(Global_1AED1, 0x00000000))
							{
								unk_0x353729B0A07DC11A(func_30(iLocal_63), 0x00000000, Global_181DD, 0x00000000);
								func_19(func_30(iLocal_63), 0x00000000, Global_181DD, 0x00000001, 0x00000000);
							}
							else
							{
								unk_0x353729B0A07DC11A(func_30(iLocal_63), 0x00000000, Global_181DD, 0x00000000);
								func_19(func_30(iLocal_63), 0x00000000, Global_181DD, 0x00000000, 0x00000000);
							}
						}
						func_5();
						func_149(&Global_1AED1, 0x00000000);
						if (func_142(uLocal_58, 0x01000000))
						{
							func_151(0x00000001);
						}
						if (iLocal_63 != 0xFFFFFFFF)
						{
							if (Global_1B416.f_2378)
							{
								if (!func_139(0x00000000, iLocal_63))
								{
									func_151(0x00000001);
								}
							}
						}
					}
					func_4();
					break;
				
				case 0x00000008:
					func_135(0x00000000);
					break;
				
				case 0x0000000A:
					func_151(0x00000001);
					break;
				
				case 0x00000009:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 0x00000107)
						{
							func_136(iLocal_69, 0x00000001, 0x00000000);
							iLocal_69 = 0x00000107;
						}
						func_135(0x0000000A);
					}
					break;
				
				case 0x00000007:
					func_2();
					if (iLocal_69 != 0x00000107)
					{
						func_136(iLocal_69, 0x00000000, 0x00000000);
					}
					if (iLocal_60 != 0xFFFFFFFF)
					{
						func_90(&iLocal_60);
					}
					if (!unk_0xEA6BC48857E0AC4C(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
					}
					func_135(0x00000004);
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
									if (func_140(iLocal_64) && func_139(0x00000000, iLocal_63))
									{
										func_143();
										if (iLocal_69 != 0x00000107)
										{
											func_136(iLocal_69, 0x00000001, 0x00000000);
										}
										func_135(0x00000000);
									}
								}
							}
							else if (iLocal_70 == 0x00000000)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 0x00000107)
									{
										func_136(iLocal_69, 0x00000001, 0x00000000);
										iLocal_69 = 0x00000107;
									}
									func_135(0x0000000A);
								}
							}
							else if (iLocal_70 == 0x00000001)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_143();
									if (iLocal_69 != 0x00000107)
									{
										func_136(iLocal_69, 0x00000001, 0x00000000);
									}
									func_135(0x00000000);
								}
							}
						}
						else
						{
							func_136(iLocal_69, 0x00000001, 0x00000000);
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
	char* sVar0;
	
	func_3(&(Local_267.f_47));
	func_3(&(Local_267.f_4D));
	func_3(&(Local_267.f_63));
	unk_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x8D17794CE3273D70("amb@world_human_aa_smoke@male@idle_a");
	unk_0x8D17794CE3273D70("random@street_race");
	unk_0x8D17794CE3273D70("gestures@m@standing@casual");
	switch (iLocal_82)
	{
		case 0x00000000:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 0x00000001:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 0x00000003:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 0x00000004:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 0x00000005:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 0x00000002:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!unk_0xEA6BC48857E0AC4C(sVar0))
	{
		if (unk_0xDA8F5DDC86FE3C26(sVar0))
		{
			if (unk_0x8ED9A0095B69A728(sVar0))
			{
				unk_0x2723524E448F4BDD(sVar0, 0x00000000);
			}
		}
	}
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
	if (func_142(Global_1B416.f_4A43, 0x00000001))
	{
		func_149(&(Global_1B416.f_4A43), 0x00000001);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()
{
	if (func_7(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_181DF.f_8)
	{
		if (Global_181DF.f_A > 0x00000000)
		{
			return 0x00000000;
		}
	}
	else if (Global_181DF.f_A > 0x00000001)
	{
		return 0x00000000;
	}
	Global_181DF.f_A++;
	return 0x00000001;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_8()
{
	if (Global_1B416.f_4A43.f_12 < Global_1B416.f_4A43.f_13[iLocal_82] || Global_1B416.f_4A43.f_13[iLocal_82] == 0x00000000)
	{
		Global_1B416.f_4A43.f_13[iLocal_82] = Global_1B416.f_4A43.f_12;
		Global_1B416.f_4A43.f_12 = 0x000003E7;
	}
	if (iLocal_82 == Global_1B416.f_4A43.f_1 || Global_1B416.f_4A43.f_1 == 0xFFFFFFFF)
	{
		if (Global_1B416.f_4A43.f_1 != 0x00000005)
		{
			Global_1B416.f_4A43.f_1++;
			switch (Global_1B416.f_4A43.f_1)
			{
				case 0x00000001:
					func_136(0x00000046, 0x00000001, 0x00000000);
					func_17(0x00000046, 0x00000001);
					func_136(0x00000047, 0x00000001, 0x00000000);
					break;
				
				case 0x00000002:
					func_136(0x00000046, 0x00000001, 0x00000000);
					func_17(0x00000046, 0x00000001);
					func_136(0x00000047, 0x00000001, 0x00000000);
					func_17(0x00000047, 0x00000001);
					func_136(0x00000048, 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_136(0x00000046, 0x00000001, 0x00000000);
					func_17(0x00000046, 0x00000001);
					func_136(0x00000047, 0x00000001, 0x00000000);
					func_17(0x00000047, 0x00000001);
					func_136(0x00000048, 0x00000001, 0x00000000);
					func_17(0x00000048, 0x00000001);
					func_136(0x00000049, 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_136(0x00000046, 0x00000001, 0x00000000);
					func_17(0x00000046, 0x00000001);
					func_136(0x00000047, 0x00000001, 0x00000000);
					func_17(0x00000047, 0x00000001);
					func_136(0x00000048, 0x00000001, 0x00000000);
					func_17(0x00000048, 0x00000001);
					func_136(0x00000049, 0x00000001, 0x00000000);
					func_17(0x00000049, 0x00000001);
					func_136(0x0000004A, 0x00000001, 0x00000000);
					break;
				
				case 0x00000005:
					func_136(0x00000046, 0x00000001, 0x00000000);
					func_17(0x00000046, 0x00000001);
					func_136(0x00000047, 0x00000001, 0x00000000);
					func_17(0x00000047, 0x00000001);
					func_136(0x00000048, 0x00000001, 0x00000000);
					func_17(0x00000048, 0x00000001);
					func_136(0x00000049, 0x00000001, 0x00000000);
					func_17(0x00000049, 0x00000001);
					func_136(0x0000004A, 0x00000001, 0x00000000);
					func_17(0x0000004A, 0x00000001);
					func_136(0x0000004B, 0x00000001, 0x00000000);
					break;
			}
			func_14("OFFR_NEW", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			func_136(0x00000046, 0x00000001, 0x00000000);
			func_17(0x00000046, 0x00000001);
			func_136(0x00000047, 0x00000001, 0x00000000);
			func_17(0x00000047, 0x00000001);
			func_136(0x00000049, 0x00000001, 0x00000000);
			func_17(0x00000049, 0x00000001);
			func_136(0x0000004A, 0x00000001, 0x00000000);
			func_17(0x0000004A, 0x00000001);
			func_136(0x0000004B, 0x00000001, 0x00000000);
			func_17(0x0000004B, 0x00000001);
			func_136(0x00000048, 0x00000001, 0x00000000);
			func_17(0x00000048, 0x00000001);
		}
		switch (Global_1B416.f_4A43.f_1)
		{
			case 0x00000000:
				func_13(0x00000046);
				func_9(0x00000047);
				break;
			
			case 0x00000001:
				func_13(0x00000047);
				func_9(0x00000048);
				break;
			
			case 0x00000002:
				func_13(0x00000048);
				func_9(0x00000049);
				break;
			
			case 0x00000003:
				func_13(0x00000049);
				func_9(0x0000004A);
				break;
			
			case 0x00000004:
				func_13(0x0000004A);
				func_9(0x0000004B);
				break;
			
			case 0x00000005:
				func_13(0x0000004B);
				break;
			}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 0x00000001, 0x00000000);
	func_11(iParam0, 0x00000001);
	func_10(iParam0, 0x00000001);
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000004))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000004);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000004);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000005))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000005);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000005);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000006))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000006);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000006);
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000B);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000B);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_13(int iParam0)
{
	func_12(iParam0, 0x00000000, 0x00000000);
	func_11(iParam0, 0x00000001);
	func_10(iParam0, 0x00000001);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x000001F4 && iParam5 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam4 < 0x00000000 && iParam4 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam6 < 0x00000001 || iParam6 > 0x00000007)
	{
		return;
	}
	if (iParam7 == 0x000000EB)
	{
		return;
	}
	if (iParam8 == 0x000000EB)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_1B416.f_4FB5.f_91 < 0x00000009)
	{
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_4), sParam1, 16);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_9 = iParam5;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_B = iParam6;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_C = uParam2;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_D = iParam7;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_E = iParam8;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 0xFFFFFFFF)
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = 0xFFFFFFFF;
		}
		Global_1B416.f_4FB5.f_91++;
		func_16();
	}
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000000))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000000])
			{
				Global_1B416.f_4FB5.f_92[0x00000000] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000001))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000001])
			{
				Global_1B416.f_4FB5.f_92[0x00000001] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000002))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000002])
			{
				Global_1B416.f_4FB5.f_92[0x00000002] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000014))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000014);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000014);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000014);
}

void func_18()
{
	unk_0xB547E3FFEB27073E();
	unk_0x008B42B5123B79DB();
	switch (iLocal_82)
	{
		case 0x00000000:
			unk_0x842F1AEB2FCC00B7(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 0x00000001);
			break;
		
		case 0x00000001:
			unk_0x842F1AEB2FCC00B7(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0x00000001);
			break;
		
		case 0x00000003:
			unk_0x842F1AEB2FCC00B7(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0x00000001);
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			unk_0x842F1AEB2FCC00B7(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0x00000001);
			break;
		
		case 0x00000002:
			unk_0x842F1AEB2FCC00B7(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0x00000001);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_20(int iParam0)
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

void func_21()
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

void func_22(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0x00000000;
}

float func_23(int iParam0)
{
	if (func_26(iParam0))
	{
		if (func_25(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_24(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_24(bool bParam0)
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

bool func_25(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_26(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001);
}

int func_27()
{
	func_8();
	return 0x00000001;
}

void func_28()
{
}

void func_29(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEA6BC48857E0AC4C(&Global_17646))
	{
		unk_0x73B08BBDEAC9B885(&Global_17646, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		StringCopy(&Global_17646, "", 64);
	}
	StringCopy(&Global_17646, sParam0, 64);
	unk_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_7(0x00000000));
}

char* func_30(int iParam0)
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

void func_31(int iParam0)
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

void func_32(int iParam0)
{
	if (!func_26(iParam0))
	{
		func_35(iParam0);
	}
	else
	{
		func_33(iParam0);
	}
}

void func_33(int iParam0)
{
	func_34(iParam0, 0f);
}

void func_34(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_24(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_35(int iParam0)
{
	if (!func_26(iParam0))
	{
		func_33(iParam0);
	}
}

int func_36()
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	
	unk_0xA37A90C62806D848(0x00000001);
	Var0.f_4 = 0x00000005;
	Var0.f_A = 0x00000005;
	Var0 = iLocal_82;
	Var0.f_1 = { vLocal_81 };
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Var0.f_4)
	{
		Var0.f_4[iVar1] = Local_267[iVar1 /*14*/];
		Var0.f_A[iVar1] = Local_267[iVar1 /*14*/].f_1;
		iVar1++;
	}
	Var0.f_10 = Local_267.f_53;
	Var0.f_11 = Local_267.f_53.f_1;
	unk_0x82A772610883F395("SwitchSceneNeutral", 0x00000000, 0x00000001);
	SYSTEM::WAIT(0x00000190);
	iVar2 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_51, &Var0, 0x00000012, iLocal_61);
	unk_0x5E8C29AE121DF1C7(&Local_51);
	return iVar2;
}

void func_37(int iParam0)
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
	iVar0 = func_45(iParam0);
	if (!iVar0 == 0xFFFFFFFF)
	{
		iVar1 = Global_A58F[iVar0 /*5*/];
		func_40(0x00000001, iVar1, 0x00000001);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == 0xFFFFFFFF)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)
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

int func_39(int iParam0)
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

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_41(iParam0, iParam1, iParam2, 0x00000000, 0x00000000, 0x00000001);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
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

int func_42()
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

int func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_44(iParam0, iParam1, iParam2) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_44(int iParam0, int iParam1, int iParam2)
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

int func_45(int iParam0)
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

void func_46()
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

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_49(0x00000000))
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
		if (!func_140(iParam2))
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
			func_48(iParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_48(var uParam0, int iParam1)
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

int func_49(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_140(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_50()
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_81);
	if (fVar0 < 62500f)
	{
		func_80();
		func_77();
		if (iLocal_97)
		{
			if (fVar0 < 64f)
			{
				func_76();
				iLocal_97 = 0x00000000;
			}
		}
		if (fVar0 < 400f)
		{
			func_54();
		}
	}
	if (!iLocal_98)
	{
		if (func_52())
		{
			iLocal_98 = 0x00000001;
			func_51();
		}
	}
}

void func_51()
{
	iLocal_46++;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < func_53())
	{
		if (!unk_0xC844350D5D58C99A(Local_267[iVar0 /*14*/]) || !unk_0xC844350D5D58C99A(Local_267[iVar0 /*14*/].f_1))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	if (!unk_0xC844350D5D58C99A(Local_267.f_53) || !unk_0xC844350D5D58C99A(Local_267.f_53.f_1))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_53()
{
	switch (iLocal_82)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000005:
		case 0x00000002:
			return 0x00000005;
			break;
		
		case 0x00000001:
		case 0x00000004:
			return 0x00000004;
			break;
	}
	return 0x00000000;
}

void func_54()
{
	int iVar0;
	char* sVar1;
	
	if (!func_26(&iLocal_90))
	{
		func_35(&iLocal_90);
		return;
	}
	if (unk_0xC844350D5D58C99A(iLocal_95) && !unk_0x437347B10A200C4B(iLocal_95, 0x00000000))
	{
		if (unk_0x65636D4556D82155(iLocal_95))
		{
			return;
		}
	}
	if (func_23(&iLocal_90) >= 8f)
	{
		iVar0 = (unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF) % 0x00000003) + 1;
		if (iVar0 > 0x00000000 && iVar0 <= 0x00000003)
		{
			if (unk_0x437347B10A200C4B(Local_267[(iVar0 - 0x00000001) /*14*/], 0x00000000))
			{
				return;
			}
			switch (iVar0)
			{
				case 0x00000001:
					sVar1 = "ORR_GUY1";
					break;
				
				case 0x00000002:
					sVar1 = "ORR_GUY2";
					break;
				
				case 0x00000003:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_55(&uLocal_101, "ORRAUD", sVar1, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			func_33(&iLocal_90);
		}
	}
}

int func_55(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_56(sParam2, iParam3, 0x00000000);
}

int func_56(char* sParam0, int iParam1, bool bParam2)
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
					func_74();
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
		if (func_96(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_73();
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
				func_66();
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
				if (func_65())
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
			if (func_64())
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
			func_63();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_62();
		func_57();
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
		func_74();
	}
	return 0x00000000;
}

void func_57()
{
	if (!func_58())
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

int func_58()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_61())
	{
		return 0x00000000;
	}
	if (func_59(unk_0xD803B885F5E47A62()))
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

bool func_59(int iParam0)
{
	return func_60(iParam0, 0x00000014);
}

bool func_60(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_61()
{
	return 0xFFFFFFFF;
}

void func_62()
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

void func_63()
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

int func_64()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_65()
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

void func_66()
{
	if (func_116(0x0000000E))
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
		Global_4C1E = func_67();
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

var func_67()
{
	func_68();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_68()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_71(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_70(unk_0x16F2683693E537C9());
			if (func_69(iVar0) && (!func_116(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_69(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_69(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_72(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_73()
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

void func_74()
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

void func_75(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = uParam5;
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

void func_76()
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0x437347B10A200C4B(Local_267.f_53, 0x00000000))
	{
		iVar0 = unk_0xD8A54335F18763BA();
		if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
		{
			iLocal_97 = 0x00000000;
			return;
		}
		unk_0xC0B0B9E466C0ED17(Local_267.f_53, 0f, 0f, 0.75f, 0x00000001, 0x000007D0, 0x000007D0, 0x000007D0, 0x00000000);
	}
}

void func_77()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xD8A54335F18763BA();
	if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
	{
		iLocal_266 = 0x00000000;
		return;
	}
	if (!unk_0x437347B10A200C4B(iLocal_95, 0x00000000) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		switch (iLocal_266)
		{
			case 0x00000000:
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_95, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 64f && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_99 = 0x00000000;
					iLocal_100 = 0x00000000;
					iLocal_266 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				unk_0xDD353D0E9C789D0E(&iVar1);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x75ABDC5F81978924(iVar1);
				unk_0x78ADC381772E3D54(iLocal_95, iVar1);
				unk_0xF82EA857DA10E0CD(&iVar1);
				iLocal_266 = 0x00000002;
				break;
			
			case 0x00000002:
				if ((unk_0xD1960163A3042274(iLocal_95, 0x0E763797) != 0x00000001 || unk_0x7069CC4DE1EA3FAA(iLocal_95, unk_0x16F2683693E537C9(), 20f)) && !unk_0x25037C66EB32B076())
				{
					unk_0xF96A174EE26D7588(iLocal_95, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
					if (!iLocal_100)
					{
						func_78(iLocal_95, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 0x0000000B);
					}
					else
					{
						func_78(iLocal_95, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 0x0000000B);
					}
					iLocal_266 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (!unk_0x65636D4556D82155(iLocal_95))
				{
					func_33(&iLocal_87);
					unk_0xC6EB89C59F2AF6B8(iLocal_95, "random@street_race", "_streetracer_wait_loop", 4f, -4f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_266 = 0x00000004;
				}
				break;
			
			case 0x00000004:
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_95, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 225f)
				{
					unk_0xDD353D0E9C789D0E(&iVar2);
					unk_0xE655C47E46F9A7E4(0x00000000, Local_267.f_53.f_9, 0x000003E8);
					unk_0xC6EB89C59F2AF6B8(0x00000000, Local_267.f_53.f_C, Local_267.f_53.f_D, 4f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iVar2);
					unk_0x78ADC381772E3D54(iLocal_95, iVar2);
					unk_0xF82EA857DA10E0CD(&iVar2);
					iLocal_266 = 0x00000000;
				}
				if (func_26(&iLocal_87))
				{
					if (func_23(&iLocal_87) >= 5f && !iLocal_99)
					{
						iLocal_99 = 0x00000001;
						iLocal_266 = 0x00000001;
					}
					else if (func_23(&iLocal_87) >= 10f && !iLocal_100)
					{
						iLocal_100 = 0x00000001;
						iLocal_266 = 0x00000001;
					}
				}
				break;
			
			case 0x00000005:
				break;
			}
	}
}

void func_78(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_79(iParam3), 0x00000000);
}

int func_79(int iParam0)
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

void func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(Local_267[iVar2 /*14*/].f_1) && unk_0xC844350D5D58C99A(Local_267[iVar2 /*14*/]))
		{
			if (func_85(Local_267[iVar2 /*14*/], 0x00000001, 0x00000000, 0x00000000, 0x00000000) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_267[iVar2 /*14*/].f_1, 0x00000001))
			{
				func_83();
				func_82(iLocal_69);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			}
			if (!unk_0xEB6A8945D1AC98A1(Local_267[iVar2 /*14*/]))
			{
				if (func_26(&(vLocal_83[iVar2 /*3*/])))
				{
					if (func_23(&(vLocal_83[iVar2 /*3*/])) > fLocal_93[iVar2])
					{
						if (unk_0xDF1306B443CD3D15(Local_267[iVar2 /*14*/].f_1, 0x00000000) && unk_0xC42A92762C58E1B9(Local_267[iVar2 /*14*/], Local_267[iVar2 /*14*/].f_1, 0x00000000))
						{
							iVar0 = unk_0x09AC81E49EA267F7(0x000000FA, 0x000001F4);
							iVar1 = unk_0x09AC81E49EA267F7(0x000000FA, 0x000001F4);
							unk_0xDD353D0E9C789D0E(&iVar3);
							unk_0xD1F0F33C375B8446(0x00000000, Local_267[iVar2 /*14*/].f_1, 0x00000001, iVar0);
							unk_0xD1F0F33C375B8446(0x00000000, Local_267[iVar2 /*14*/].f_1, 0x0000001F, iVar1);
							unk_0x75ABDC5F81978924(iVar3);
							if (!unk_0xEB6A8945D1AC98A1(Local_267[iVar2 /*14*/]))
							{
								unk_0x78ADC381772E3D54(Local_267[iVar2 /*14*/], iVar3);
							}
							unk_0xF82EA857DA10E0CD(&iVar3);
						}
						func_33(&(vLocal_83[iVar2 /*3*/]));
						fLocal_93[iVar2] = unk_0x79833B02DBD2A244(0f, 3f);
					}
				}
				else
				{
					func_35(&(vLocal_83[iVar2 /*3*/]));
				}
			}
			if (!unk_0x437347B10A200C4B(Local_267[iVar2 /*14*/], 0x00000000))
			{
				if ((unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), Local_267[iVar2 /*14*/]) && !unk_0x869EFD0BC0868856(Local_267[iVar2 /*14*/])) && !unk_0xA48EBBEA418ADC94(Local_267[iVar2 /*14*/]))
				{
					Local_267[iVar2 /*14*/].f_B = 0x00000001;
				}
				else if (Local_267[iVar2 /*14*/].f_B)
				{
					unk_0xDD353D0E9C789D0E(&iVar3);
					unk_0xE655C47E46F9A7E4(0x00000000, Local_267[iVar2 /*14*/].f_9, 0x000003E8);
					unk_0xC6EB89C59F2AF6B8(0x00000000, Local_267[iVar2 /*14*/].f_C, Local_267[iVar2 /*14*/].f_D, 4f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iVar3);
					unk_0x78ADC381772E3D54(Local_267[iVar2 /*14*/], iVar3);
					unk_0xF82EA857DA10E0CD(&iVar3);
					Local_267[iVar2 /*14*/].f_B = 0x00000000;
				}
				if (unk_0x869EFD0BC0868856(Local_267[iVar2 /*14*/]) || unk_0xA48EBBEA418ADC94(Local_267[iVar2 /*14*/]))
				{
					if (!Local_267[iVar2 /*14*/].f_A && (unk_0x869EFD0BC0868856(Local_267[iVar2 /*14*/]) || unk_0xA48EBBEA418ADC94(Local_267[iVar2 /*14*/])))
					{
						Local_267.f_65++;
					}
					Local_267[iVar2 /*14*/].f_A = 0x00000001;
				}
				else if (Local_267[iVar2 /*14*/].f_A)
				{
					unk_0xDD353D0E9C789D0E(&iVar3);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "gestures@m@standing@casual", func_81(), 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xE655C47E46F9A7E4(0x00000000, Local_267[iVar2 /*14*/].f_9, 0x000003E8);
					unk_0xC6EB89C59F2AF6B8(0x00000000, Local_267[iVar2 /*14*/].f_C, Local_267[iVar2 /*14*/].f_D, 4f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iVar3);
					unk_0x78ADC381772E3D54(Local_267[iVar2 /*14*/], iVar3);
					unk_0xF82EA857DA10E0CD(&iVar3);
					Local_267[iVar2 /*14*/].f_A = 0x00000000;
				}
			}
		}
		iVar2++;
	}
	if (unk_0xC844350D5D58C99A(Local_267.f_53.f_1) && unk_0xC844350D5D58C99A(Local_267.f_53))
	{
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_267.f_53.f_1, 0x00000000))
		{
			iLocal_54 = Local_267.f_53.f_1;
		}
		if (func_85(Local_267.f_53, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
		{
			func_83();
			func_82(iLocal_69);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
		}
		if (!unk_0xEB6A8945D1AC98A1(Local_267.f_53))
		{
			if (func_26(&iLocal_84))
			{
				if (func_23(&iLocal_84) > fLocal_94)
				{
					if (unk_0xDF1306B443CD3D15(Local_267.f_53.f_1, 0x00000000) && unk_0xC42A92762C58E1B9(Local_267.f_53, Local_267.f_53.f_1, 0x00000000))
					{
						iVar0 = unk_0x09AC81E49EA267F7(0x000000FA, 0x000001F4);
						iVar1 = unk_0x09AC81E49EA267F7(0x000000FA, 0x000001F4);
						unk_0xDD353D0E9C789D0E(&iVar3);
						unk_0xD1F0F33C375B8446(0x00000000, Local_267.f_53.f_1, 0x00000001, iVar0);
						unk_0xD1F0F33C375B8446(0x00000000, Local_267.f_53.f_1, 0x0000001F, iVar1);
						unk_0x75ABDC5F81978924(iVar3);
						if (!unk_0xEB6A8945D1AC98A1(Local_267.f_53))
						{
							unk_0x78ADC381772E3D54(Local_267.f_53, iVar3);
						}
						unk_0xF82EA857DA10E0CD(&iVar3);
					}
					func_33(&iLocal_84);
					fLocal_94 = unk_0x79833B02DBD2A244(0f, 3f);
				}
			}
			else
			{
				func_35(&iLocal_84);
			}
		}
		if (!unk_0x437347B10A200C4B(Local_267.f_53, 0x00000000))
		{
			if ((unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), Local_267.f_53) && !unk_0x869EFD0BC0868856(Local_267.f_53)) && !unk_0xA48EBBEA418ADC94(Local_267.f_53))
			{
				Local_267.f_53.f_B = 0x00000001;
			}
			else if (Local_267.f_53.f_B)
			{
				unk_0xDD353D0E9C789D0E(&iVar3);
				unk_0xE655C47E46F9A7E4(0x00000000, Local_267.f_53.f_9, 0x000003E8);
				unk_0xC6EB89C59F2AF6B8(0x00000000, Local_267.f_53.f_C, Local_267.f_53.f_D, 4f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iVar3);
				unk_0x78ADC381772E3D54(Local_267.f_53, iVar3);
				unk_0xF82EA857DA10E0CD(&iVar3);
				Local_267.f_53.f_B = 0x00000000;
			}
			if (unk_0x869EFD0BC0868856(Local_267.f_53) || unk_0xA48EBBEA418ADC94(Local_267.f_53))
			{
				if (!Local_267.f_53.f_A)
				{
					Local_267.f_65++;
				}
				Local_267.f_53.f_A = 0x00000001;
			}
			else if (Local_267.f_53.f_A)
			{
				unk_0xDD353D0E9C789D0E(&iVar3);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "gestures@m@standing@casual", func_81(), 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xE655C47E46F9A7E4(0x00000000, Local_267.f_53.f_9, 0x000003E8);
				unk_0xC6EB89C59F2AF6B8(0x00000000, Local_267.f_53.f_C, Local_267.f_53.f_D, 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iVar3);
				unk_0x78ADC381772E3D54(Local_267.f_53, iVar3);
				unk_0xF82EA857DA10E0CD(&iVar3);
				iLocal_266 = 0x00000004;
				func_33(&iLocal_87);
				Local_267.f_53.f_A = 0x00000000;
			}
		}
	}
}

char* func_81()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF) % 0x00000002);
	switch (iVar0)
	{
		case 0x00000000:
			sVar1 = "gesture_what_hard";
			break;
		
		case 0x00000001:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_82(int iParam0)
{
	if (iLocal_59 < 0x00000005)
	{
		if (iParam0 != 0x00000107)
		{
			if (iParam0 < 0x00000000 || iParam0 >= 0x00000107)
			{
			}
			func_136(iParam0, 0x00000000, 0x00000000);
		}
		iLocal_69 = 0x00000107;
		func_90(&iLocal_60);
		iLocal_59 = 0x00000009;
	}
}

void func_83()
{
	int iVar0[10];
	int iVar1;
	int iVar2;
	
	unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &iVar0, 0xFFFFFFFF);
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < iVar0)
	{
		if (unk_0xC844350D5D58C99A(iVar0[iVar2]) && !unk_0xEB6A8945D1AC98A1(iVar0[iVar2]))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000004))
			{
				unk_0xF3268524E9BE6D6E(iVar0[iVar2], unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xDD353D0E9C789D0E(&iVar1);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), unk_0x09AC81E49EA267F7(0x0000012C, 0x00000384));
				unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iVar1);
				unk_0x78ADC381772E3D54(iVar0[iVar2], iVar1);
				unk_0xF82EA857DA10E0CD(&iVar1);
			}
		}
		iVar2++;
	}
	switch (Global_1B416.f_4A43.f_1)
	{
		case 0x00000000:
			func_84(0x00000000);
			break;
		
		case 0x00000001:
			func_84(0x00000000);
			break;
		
		case 0x00000003:
			func_84(0x00000000);
			break;
		
		case 0x00000004:
			func_84(0x00000000);
			break;
		
		case 0x00000005:
			func_84(0x00000000);
			break;
		
		case 0x00000002:
			func_84(0x00000000);
			break;
	}
}

void func_84(int iParam0)
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

int func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (Local_267.f_65 >= 0x00000003)
	{
		return 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
			if (bParam1)
			{
				if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
				{
					return 0x00000001;
				}
			}
			if (bParam2)
			{
				if (unk_0x4734A6196B611C3B(iParam0, iVar0))
				{
					return 0x00000001;
				}
			}
			if (bParam4)
			{
				if (unk_0x1B3D109B39CC2C89(iVar0, iParam0))
				{
					return 0x00000001;
				}
			}
			if (bParam3)
			{
				if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
				{
					if (func_86(iParam0, 0x00000001) < 20f)
					{
						return 0x00000001;
					}
				}
			}
			if (unk_0x405E212DDE472467(iParam0, 0x00000000))
			{
				if (unk_0xB87D13D0C064E9D1(unk_0x6937EA2286828455(iParam0, 0x00000000), iVar0, 0x00000001))
				{
					return 0x00000001;
				}
			}
			if (unk_0xE9FDA1035CFEA94F(iParam0))
			{
				return 0x00000001;
			}
			if (unk_0x03A10A5707B2BB1F(iVar0, 0x00000004))
			{
				if (unk_0x168558745A6AC21E(iVar0))
				{
					if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(iVar0, 0x00000001), 45f, 45f, 45f, 0x00000000, 0x00000001, 0x00000000))
					{
						return 0x00000001;
					}
				}
			}
			if (unk_0xD3DCEC81D13AAFB1(vVar1, 4f, 0x00000001))
			{
				return 0x00000001;
			}
			if (unk_0x723EE7F83DF1497D((vVar1.x - 5f), (vVar1.y - 5f), (vVar1.z - 5f), (vVar1.x + 5f), (vVar1.y + 5f), (vVar1.z + 5f), 0x00000000))
			{
				return 0x00000001;
			}
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == iVar0)
				{
					return 0x00000001;
				}
			}
			if ((unk_0x681F21BF9F7B449B(0xFFFFFFFF, vVar1, 25f) && !unk_0x681F21BF9F7B449B(0x0000000B, vVar1, 25f)) && !unk_0x681F21BF9F7B449B(0x0000000D, vVar1, 25f))
			{
				return 0x00000001;
			}
			unk_0xE910A68AA670B4AA(iParam0);
		}
		else if (bParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_86(int iParam0, bool bParam1)
{
	return func_87(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

float func_87(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, bParam2);
}

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_89(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_95(0x00000000))
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

int func_89(int iParam0)
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

void func_90(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_89(*iParam0);
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

void func_91(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == 0xFFFFFFFF)
		{
			func_90(iParam0);
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

int func_92(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000001;
}

void func_93(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
}

var func_94()
{
	return Global_12061;
}

int func_95(int iParam0)
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

bool func_96(int iParam0, int iParam1)
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

bool func_97()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_98()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

int func_100()
{
	return 0x00000001;
}

void func_101(var uParam0, int iParam1)
{
	func_102(uParam0, iParam1);
}

void func_102(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_103()
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

int func_104(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_67();
				if (!func_69(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_111()) || Global_1B05D) || Global_7832) || func_110()) || func_96(0x00000008, 0xFFFFFFFF)) || func_109()) || func_108()) || func_107()) || func_98()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_111()) || Global_7832) || func_110()) || func_96(0x00000008, 0xFFFFFFFF)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_111()) || Global_1B05D) || Global_7832) || func_110()) || func_96(0x00000008, 0xFFFFFFFF)) || func_107()) || func_109()) || func_108()) || func_98()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_111()) || Global_1B05D) || Global_7832) || func_110()) || func_96(0x00000008, 0xFFFFFFFF)) || func_109()) || func_108()) || func_98()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_111() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_96(0x00000008, 0xFFFFFFFF)) || func_98()) || func_106()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_96(0x00000008, 0xFFFFFFFF) || func_109()) || func_108()) || func_106()) || func_105())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_111()) || Global_7832) || func_110()) || func_96(0x00000008, 0xFFFFFFFF)) || func_108()) || func_107()) || func_98()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_111()) || func_108()) || Global_1B05D) || Global_7832) || func_110()) || Global_A664) || func_96(0x00000008, 0xFFFFFFFF)) || func_107()) || func_106()) || func_98()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_111()) || Global_1B05D) || Global_7832) || func_110()) || func_96(0x00000008, 0xFFFFFFFF)) || func_107()) || func_106()) || func_109()) || func_108()) || func_98())
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

var func_105()
{
	return Global_181DF.f_1;
}

int func_106()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_107()
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

bool func_108()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_109()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_110()
{
	return Global_14086D;
}

int func_111()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_112()
{
	if (unk_0x8A22C4C08282BF26(joaat("stripperhome")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_113()
{
	return Global_17170;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			if (func_116(0x00000006) || func_116(0x00000007))
			{
				return 0x00000001;
			}
			else
			{
				return func_114(0x00000003);
			}
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			if (func_140(0x00000005))
			{
				if (func_104(0x00000004))
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

bool func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0x00000000;
	}
	return unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13);
}

bool func_116(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_117()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xD8A54335F18763BA();
	if ((iVar0 <= iLocal_79 && iVar0 >= iLocal_80) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000000)
	{
		return;
	}
	if (bLocal_96)
	{
		func_127();
		func_126();
		switch (iLocal_82)
		{
			case 0x00000000:
				func_125(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_125(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_125(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_125(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_125(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_124(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 0x00000001:
				func_125(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_125(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_125(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_125(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_124(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			
			case 0x00000003:
				func_125(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_125(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_125(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_125(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_125(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_124(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			
			case 0x00000004:
				func_125(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_125(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_125(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_125(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_124(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			
			case 0x00000005:
				func_125(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_125(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_125(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_125(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_125(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_124(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 0x00000002:
				func_125(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_125(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_125(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_125(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_125(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_124(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_82)
		{
			case 0x00000000:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 0x00000001:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 0x00000003:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 0x00000004:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 0x00000005:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 0x00000002:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!unk_0xEA6BC48857E0AC4C(sVar1))
		{
			if (unk_0xDA8F5DDC86FE3C26(sVar1))
			{
				if (!unk_0x8ED9A0095B69A728(sVar1))
				{
					unk_0x2723524E448F4BDD(sVar1, 0x00000001);
				}
			}
		}
	}
	func_118();
}

void func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_74 > 9f)
	{
		iVar5 = 0x00000000;
		iVar5 = 0x00000000;
		while (iVar5 < Local_267)
		{
			if (!func_123(Local_267[iVar5 /*14*/].f_2))
			{
				Local_267[iVar5 /*14*/].f_1 = unk_0x122AAB0B1D6F55AD(func_122(0x00000000), Local_267[iVar5 /*14*/].f_2, Local_267[iVar5 /*14*/].f_5, 0x00000001, 0x00000001, 0x00000000);
				unk_0xB9FD7450C0DAB575(Local_267[iVar5 /*14*/].f_1, 0x40A00000);
				unk_0x44A200C9B6E1CEA6(Local_267[iVar5 /*14*/].f_1, 0x00000001);
				if (func_123(Local_267[iVar5 /*14*/].f_6))
				{
					Local_267[iVar5 /*14*/] = unk_0x852A19533F896693(Local_267[iVar5 /*14*/].f_1, 0x00000004, func_121(), 0xFFFFFFFF, 0x00000001, 0x00000001);
					unk_0x56FDC9ADE35F7DB0(Local_267[iVar5 /*14*/].f_1, 0x00000001, 0x00000000, 0x00000000);
				}
				else
				{
					Local_267[iVar5 /*14*/] = unk_0x36F2404464202779(0x00000004, func_121(), Local_267[iVar5 /*14*/].f_6, Local_267[iVar5 /*14*/].f_9, 0x00000001, 0x00000001);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0x00000000:
						case 0x00000003:
							sVar4 = "idle_a";
							break;
						
						case 0x00000001:
						case 0x00000004:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0x00000000:
						case 0x00000004:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 0x00000001:
						case 0x00000003:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 0x00000002:
						case 0x00000005:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_267[iVar5 /*14*/].f_C = sVar3;
					Local_267[iVar5 /*14*/].f_D = sVar4;
					unk_0xDD353D0E9C789D0E(&iVar0);
					unk_0x78A77CDD64392938(0x00000000, unk_0x09AC81E49EA267F7(0x00000064, 0x000001F4));
					unk_0xC6EB89C59F2AF6B8(0x00000000, sVar3, sVar4, 8f, -8f, 0xFFFFFFFF, 0x00002001, unk_0x79833B02DBD2A244(0f, 1f), 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iVar0);
					unk_0x78ADC381772E3D54(Local_267[iVar5 /*14*/], iVar0);
					unk_0xF82EA857DA10E0CD(&iVar0);
				}
				unk_0xCC095276B3DD380E(Local_267[iVar5 /*14*/], 0x00000001);
				unk_0x83F619A03CDDE284(Local_267[iVar5 /*14*/], 0x00000001, 0x00001000, 0xFFFFFFFF);
			}
			iVar5++;
		}
		Local_267.f_53.f_1 = unk_0x122AAB0B1D6F55AD(func_122(0x00000001), Local_267.f_53.f_2, Local_267.f_53.f_5, 0x00000001, 0x00000001, 0x00000000);
		unk_0xB9FD7450C0DAB575(Local_267.f_53.f_1, 0x40A00000);
		unk_0x44A200C9B6E1CEA6(Local_267.f_53.f_1, 0x00000001);
		if (func_123(Local_267.f_53.f_6))
		{
			Local_267.f_53 = unk_0x852A19533F896693(Local_267.f_53.f_1, 0x00000004, func_121(), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x56FDC9ADE35F7DB0(Local_267.f_53.f_1, 0x00000001, 0x00000000, 0x00000000);
		}
		else
		{
			Local_267.f_53 = unk_0x36F2404464202779(0x00000004, func_121(), Local_267.f_53.f_6, Local_267.f_53.f_9, 0x00000001, 0x00000001);
			iVar1 = (unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF) % 0x00000003);
			switch (iVar1)
			{
				case 0x00000000:
					sVar4 = "idle_a";
					break;
				
				case 0x00000001:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_267.f_53.f_C = "amb@world_human_aa_smoke@male@idle_a";
			Local_267.f_53.f_D = sVar4;
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0x93D47DFD0AE94949(0x00000000, func_120((unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF) % 0x000003E8), 0x00000001, 0x000003E8));
			unk_0xC6EB89C59F2AF6B8(0x00000000, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, 0xFFFFFFFF, 0x00000001, unk_0x79833B02DBD2A244(0f, 1f), 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(Local_267.f_53, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
	}
	else if (fLocal_74 < 225f)
	{
	}
	iLocal_95 = Local_267.f_53;
	if (!unk_0x437347B10A200C4B(Local_267[0x00000000 /*14*/], 0x00000000))
	{
		func_119(&uLocal_101, 0x00000001, Local_267[0x00000000 /*14*/], "MALE1", 0x00000000, 0x00000001);
	}
	if (!unk_0x437347B10A200C4B(Local_267[0x00000001 /*14*/], 0x00000000))
	{
		func_119(&uLocal_101, 0x00000002, Local_267[0x00000001 /*14*/], "MALE2", 0x00000000, 0x00000001);
	}
	if (!unk_0x437347B10A200C4B(Local_267[0x00000002 /*14*/], 0x00000000))
	{
		func_119(&uLocal_101, 0x00000003, Local_267[0x00000003 /*14*/], "MALE3", 0x00000000, 0x00000001);
	}
	if (!func_26(&iLocal_90))
	{
		func_35(&iLocal_90);
	}
	else
	{
		func_33(&iLocal_90);
	}
}

void func_119(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_120(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_121()
{
	return joaat("a_m_y_motox_01");
}

int func_122(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Local_267.f_47)
	{
		if (unk_0x4DAC2AD66FE0E696(Local_267.f_47[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_82 == 0x00000001)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 0x00000001);
		}
	}
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, iVar0);
	if (Local_267.f_47[iVar0] == 0x00000000)
	{
		if (Local_267.f_47[0x00000000] == 0x00000000)
		{
			switch (iLocal_82)
			{
				case 0x00000000:
					return joaat("sanchez");
					break;
				
				case 0x00000001:
					return joaat("mesa");
					break;
				
				case 0x00000003:
					return joaat("sanchez");
					break;
				
				case 0x00000004:
					return joaat("sanchez");
					break;
				
				case 0x00000005:
					return joaat("mesa");
					break;
				
				case 0x00000002:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_267.f_47[0x00000000];
		}
	}
	return Local_267.f_47[iVar0];
}

int func_123(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_124(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	if (func_123(Local_267.f_53.f_2))
	{
		Local_267.f_53.f_2 = { vParam0 };
		Local_267.f_53.f_5 = fParam1;
		Local_267.f_53.f_6 = { vParam2 };
		Local_267.f_53.f_9 = fParam3;
	}
}

void func_125(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0x00000000;
	bVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Local_267)
	{
		if (!bVar1 && func_123(Local_267[iVar0 /*14*/].f_2))
		{
			Local_267[iVar0 /*14*/].f_2 = { vParam0 };
			Local_267[iVar0 /*14*/].f_5 = fParam1;
			Local_267[iVar0 /*14*/].f_6 = { vParam2 };
			Local_267[iVar0 /*14*/].f_9 = fParam3;
			bVar1 = 0x00000001;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_126()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Local_267)
	{
		Local_267[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_267[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_267.f_53.f_2 = { 0f, 0f, 0f };
	Local_267.f_53.f_5 = 0f;
}

void func_127()
{
	switch (iLocal_82)
	{
		case 0x00000000:
			unk_0xB5376EA942202450(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 0x00000001, 0x00000000, 0x00000001);
			unk_0x28F5E4DA506AC0CA(-227.43f, 3888.9f, 36.41f, 50f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xCD7D80FD792F9954("WORLD_HUMAN_HIKER", 0x00000000);
			break;
		
		case 0x00000001:
			unk_0xB5376EA942202450(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0x00000000, 0x00000000, 0x00000001);
			break;
		
		case 0x00000003:
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0x00000000);
			unk_0xB5376EA942202450(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0x00000001, 0x00000000, 0x00000001);
			unk_0x10F452EDECF82313(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xB5376EA942202450(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, 0x00000001, 0x00000000, 0x00000001);
			unk_0xCD7D80FD792F9954("WORLD_HUMAN_HIKER", 0x00000000);
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_EMPTY", 0x00000000);
			unk_0xCD7D80FD792F9954("WORLD_MOUNTAIN_LION_WANDER", 0x00000000);
			break;
		
		case 0x00000004:
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0x00000000);
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_EMPTY", 0x00000001);
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", 0x00000001);
			break;
		
		case 0x00000005:
			unk_0xCD7D80FD792F9954("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0x00000000);
			unk_0xB5376EA942202450(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, 0x00000001, 0x00000000, 0x00000001);
			unk_0x10F452EDECF82313(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x00000002:
			unk_0x2723524E448F4BDD("QUARRY", 0x00000000);
			unk_0xB5376EA942202450(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0x00000001, 0x00000000, 0x00000001);
			unk_0x10F452EDECF82313(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			break;
	}
}

bool func_128()
{
	return ((((((((func_129(&(Local_267.f_47)) && func_129(&(Local_267.f_4D))) && func_129(&(Local_267.f_63))) && unk_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_a@idle_a")) && unk_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_b@idle_a")) && unk_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_c@idle_a")) && unk_0xB4AE0788C1587752("amb@world_human_aa_smoke@male@idle_a")) && unk_0xB4AE0788C1587752("random@street_race")) && unk_0xB4AE0788C1587752("gestures@m@standing@casual"));
}

int func_129(var uParam0)
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

void func_130()
{
	char cVar0[64];
	
	func_132(&(Local_267.f_4D), joaat("a_m_y_motox_01"));
	func_132(&(Local_267.f_63), joaat("a_m_y_motox_01"));
	switch (iLocal_82)
	{
		case 0x00000000:
			func_132(&(Local_267.f_47), joaat("sanchez"));
			func_132(&(Local_267.f_47), joaat("blazer"));
			break;
		
		case 0x00000001:
			func_132(&(Local_267.f_47), joaat("mesa"));
			func_132(&(Local_267.f_47), joaat("bjxl"));
			func_132(&(Local_267.f_47), joaat("patriot"));
			func_132(&(Local_267.f_47), joaat("dubsta2"));
			func_132(&(Local_267.f_47), joaat("bfinjection"));
			break;
		
		case 0x00000003:
			func_132(&(Local_267.f_47), joaat("sanchez"));
			func_132(&(Local_267.f_47), joaat("blazer"));
			break;
		
		case 0x00000004:
			func_132(&(Local_267.f_47), joaat("sanchez"));
			func_132(&(Local_267.f_47), joaat("blazer"));
			break;
		
		case 0x00000005:
			func_132(&(Local_267.f_47), joaat("mesa"));
			func_132(&(Local_267.f_47), joaat("bfinjection"));
			func_132(&(Local_267.f_47), joaat("bjxl"));
			func_132(&(Local_267.f_47), joaat("sadler"));
			func_132(&(Local_267.f_47), joaat("rebel"));
			break;
		
		case 0x00000002:
			func_132(&(Local_267.f_47), joaat("sanchez"));
			func_132(&(Local_267.f_47), joaat("blazer"));
			break;
	}
	unk_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_a@idle_a");
	unk_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_b@idle_a");
	unk_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_c@idle_a");
	unk_0x3F423BF5B8125A50("amb@world_human_aa_smoke@male@idle_a");
	unk_0x3F423BF5B8125A50("random@street_race");
	unk_0x3F423BF5B8125A50("gestures@m@standing@casual");
	if (iLocal_82 == 0x00000000)
	{
		unk_0x523BCC9DC80CD82F(0xF0EA8AE4);
		unk_0x523BCC9DC80CD82F(0x5A215D4C);
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_82)
	{
		case 0x00000000:
			StringIntConCat(&cVar0, 0x00000001, 64);
			break;
		
		case 0x00000001:
			StringIntConCat(&cVar0, 0x00000002, 64);
			break;
		
		case 0x00000002:
			StringIntConCat(&cVar0, 0x00000006, 64);
			break;
		
		case 0x00000003:
			StringIntConCat(&cVar0, 0x00000003, 64);
			break;
		
		case 0x00000004:
			StringIntConCat(&cVar0, 0x00000004, 64);
			break;
		
		case 0x00000005:
			StringIntConCat(&cVar0, 0x00000005, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	unk_0x36187931D29E5BBE(0x00000001, &cVar0);
	func_131(&(Local_267.f_4D));
	func_131(&(Local_267.f_47));
	func_131(&(Local_267.f_63));
}

void func_131(var uParam0)
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

int func_132(var uParam0, int iParam1)
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
	iVar1 = func_133(uParam0);
	if (iVar1 < 0x00000000 || iVar1 >= *uParam0)
	{
		return 0x00000000;
	}
	(*uParam0)[iVar1] = iParam1;
	return 0x00000001;
}

int func_133(var uParam0)
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

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_135(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_136(int iParam0, bool bParam1, bool bParam2)
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

int func_137()
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

int func_138()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

bool func_139(int iParam0, int iParam1)
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

bool func_140(int iParam0)
{
	return func_141(iParam0, Global_A1D7);
}

int func_141(int iParam0, int iParam1)
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

bool func_142(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_143()
{
	StringCopy(&Local_51, "Offroad_Races", 64);
	unk_0xDF8BDD00CF1D4043(0x00000001);
	fLocal_77 = (6f + 4f);
	iLocal_63 = 0x00000004;
	func_101(&uLocal_58, 0x00400000);
	iLocal_61 = 0x000088B8;
	iLocal_54 = 0x00000000;
	iLocal_79 = 0x00000000;
	iLocal_80 = 0x00000019;
	iLocal_67 = 0x00000000;
	iLocal_82 = func_147(vLocal_56, &vLocal_81);
	iLocal_69 = func_146(iLocal_82);
	fLocal_66 = (SYSTEM::TO_FLOAT(func_145(iLocal_69)) + 5f);
	if (func_139(0x00000000, iLocal_63))
	{
		bLocal_96 = 0x00000001;
	}
	else
	{
		func_82(iLocal_69);
		bLocal_96 = 0x00000000;
	}
	if (iLocal_82 > Global_1B416.f_4A43.f_1)
	{
		if (func_115(func_146(iLocal_82)))
		{
		}
		iLocal_69 = 0x00000107;
		func_82(iLocal_69);
	}
	if (!func_115(func_146(iLocal_82)) && unk_0x0F1CCD77290EE12F())
	{
		if (iLocal_69 != 0x00000107)
		{
			if (func_144(iLocal_69, 0x00000001))
			{
				iLocal_69 = 0x00000107;
			}
		}
		func_82(iLocal_69);
	}
	if (iLocal_82 == 0x00000002)
	{
		iLocal_79 = 0x00000014;
		iLocal_80 = 0x00000003;
	}
	if (iLocal_82 == 0x00000001 || iLocal_82 == 0x00000005)
	{
		sLocal_65 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_65 = "PLAY_OFFROAD_M";
	}
}

bool func_144(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000F);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000);
}

int func_145(int iParam0)
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

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000046;
		
		case 0x00000001:
			return 0x00000047;
		
		case 0x00000003:
			return 0x00000049;
		
		case 0x00000004:
			return 0x0000004A;
		
		case 0x00000005:
			return 0x0000004B;
		
		case 0x00000002:
			return 0x00000048;
		
		default:
	}
	return 0x00000107;
}

int func_147(vector3 vParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1[7];
	float fVar2;
	int iVar3;
	float fVar4;
	
	iVar0 = 0x00000000;
	vVar1[0x00000000 /*3*/] = { func_148(0x00000000) };
	vVar1[0x00000001 /*3*/] = { func_148(0x00000001) };
	vVar1[0x00000003 /*3*/] = { func_148(0x00000003) };
	vVar1[0x00000004 /*3*/] = { func_148(0x00000004) };
	vVar1[0x00000005 /*3*/] = { func_148(0x00000005) };
	vVar1[0x00000002 /*3*/] = { func_148(0x00000002) };
	vVar1[0x00000006 /*3*/] = { func_148(0x00000006) };
	fVar2 = SYSTEM::VDIST2(vParam0, vVar1[0x00000000 /*3*/]);
	iVar3 = 0x00000000;
	fVar4 = 0f;
	iVar3 = 0x00000001;
	while (iVar3 <= (0x00000007 - 0x00000001))
	{
		fVar4 = SYSTEM::VDIST2(vParam0, vVar1[iVar3 /*3*/]);
		if (fVar4 < fVar2)
		{
			iVar0 = iVar3;
			fVar2 = fVar4;
		}
		iVar3++;
	}
	*uParam1 = { vVar1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_148(int iParam0)
{
	if (iParam0 >= 0x00000007 || iParam0 <= 0xFFFFFFFF)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 0x00000001:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 0x00000003:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 0x00000004:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 0x00000005:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 0x00000002:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_149(var uParam0, int iParam1)
{
	func_150(uParam0, iParam1);
}

void func_150(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_151(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 0x00000107)
		{
			func_136(iLocal_69, 0x00000000, 0x00000000);
		}
	}
	func_90(&iLocal_60);
	if (func_142(uLocal_58, 0x00000002))
	{
		func_5();
		func_149(&uLocal_58, 0x00000002);
		func_20(&iLocal_62);
	}
	iLocal_62 = 0xFFFFFFFF;
	func_152();
	unk_0x10FAF14A60A0DBE1();
}

void func_152()
{
	func_149(&uLocal_58, 0x00000004);
	func_153();
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

void func_153()
{
}

