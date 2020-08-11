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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[2] = { 0, 0 };
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56[2] = { 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	vector3 vLocal_61[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_62[2] = { 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	float fLocal_64 = 0f;
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	vector3 vLocal_69 = { 0f, 0f, 0f };
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88[2] = { 0, 0 };
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91[2] = { 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	char[] cLocal_105[8] = 0;
	struct<10> Local_106[16];
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = -1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 1000;
	var uLocal_121 = 1000;
	var uLocal_122 = 0;
	var uLocal_123 = 8;
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
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 1;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	float fLocal_275 = 0f;
	vector3 vLocal_276 = { 0f, 0f, 0f };
	vector3 vLocal_277 = { 0f, 0f, 0f };
	int iLocal_278 = 0;
	vector3 vLocal_279 = { 0f, 0f, 0f };
	float fLocal_280 = 0f;
	int iLocal_281[2] = { 0, 0 };
	int iLocal_282 = 0;
	vector3 vLocal_283 = { 0f, 0f, 0f };
	vector3 vLocal_284 = { 0f, 0f, 0f };
	vector3 vLocal_285 = { 0f, 0f, 0f };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	float fLocal_290 = 0f;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	vector3 vLocal_293 = { 0f, 0f, 0f };
	int iLocal_294[2] = { 0, 0 };
	int iLocal_295 = 0;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300[2] = { 0, 0 };
	int iLocal_301[2] = { 0, 0 };
	struct<2> Local_302 = { 0, 5 } ;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 5;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
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
	iLocal_18 = 0x00000003;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	vLocal_65 = { 0.0203f, -3.1441f, 0.5027f };
	vLocal_66 = { 90f, 0f, 0f };
	vLocal_68 = { 0f, 0f, 0f };
	vLocal_69 = { 0f, 0f, 0f };
	iLocal_95 = 0x00000001;
	iLocal_96 = 0x00000001;
	cLocal_105 = "RESECAU";
	iLocal_271 = 0xFFFFFFFF;
	fLocal_275 = -3.55f;
	vLocal_276 = { 0.014f, -0.9111f, 1.2317f };
	vLocal_277 = { 0f, -3.4368f, 1.2317f };
	iLocal_286 = 0xFFFFFFFF;
	iLocal_287 = 0xFFFFFFFF;
	iLocal_295 = 0xFFFFFFFF;
	vLocal_67 = { vLocal_67 };
	vLocal_67 = { ScriptParam_302.f_1[0x00000000 /*3*/] };
	if (SYSTEM::VDIST(vLocal_67, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		iLocal_45 = 0x00000001;
	}
	else if (SYSTEM::VDIST(vLocal_67, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		iLocal_45 = 0x00000002;
	}
	else if (SYSTEM::VDIST(vLocal_67, -389f, 6061f, 31f) < 5f)
	{
		iLocal_45 = 0x00000003;
	}
	else if (SYSTEM::VDIST(vLocal_67, -600f, -1094f, 22.76f) < 5f)
	{
		iLocal_45 = 0x00000004;
	}
	else if (SYSTEM::VDIST(vLocal_67, -1025f, -1086f, 2f) < 5f)
	{
		iLocal_45 = 0x00000005;
	}
	else if (SYSTEM::VDIST(vLocal_67, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		iLocal_45 = 0x00000006;
	}
	else if (SYSTEM::VDIST(vLocal_67, 3018.384f, 3634.017f, 70.4076f) < 5f)
	{
		iLocal_45 = 0x00000007;
	}
	else if (SYSTEM::VDIST(vLocal_67, -2815.661f, 2208.171f, 27.8382f) < 5f)
	{
		iLocal_45 = 0x00000008;
	}
	else if (SYSTEM::VDIST(vLocal_67, 856.7742f, -2067.845f, 29.0704f) < 5f)
	{
		iLocal_45 = 0x00000009;
	}
	else if (SYSTEM::VDIST(vLocal_67, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		iLocal_45 = 0x0000000A;
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (Global_3)
	{
		if (iLocal_45 != 0x00000002)
		{
			unk_0x10FAF14A60A0DBE1();
		}
	}
	else
	{
		if (unk_0x2EBF608FFE6CA406(0x0000000B))
		{
			iVar0 = 0x00000000;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(iLocal_49[iVar0], iLocal_50, 0x00000000))
						{
							unk_0x5B1D360B9C6F0A09(iLocal_49[iVar0], iLocal_50, 0xFFFFFFFF, func_248(iLocal_50), 2f, 0x00000001, 0x00000000);
						}
					}
					else
					{
						unk_0x93D47DFD0AE94949(iLocal_49[iVar0], 0x00002710);
					}
				}
				iVar0++;
			}
			func_231();
		}
		if (!func_191(vLocal_67, 0x00000009, iLocal_45, 0x00000001, 0x00000000))
		{
			unk_0x10FAF14A60A0DBE1();
		}
		else
		{
			func_188(0xFFFFFFFF);
		}
	}
	func_187();
	iLocal_59 = unk_0x7D6CA5F52B3748BF(vLocal_63 + Vector(30f, 30f, 30f), vLocal_63 - Vector(30f, 30f, 30f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_184(&uLocal_123);
		if (!func_183())
		{
			if (func_182())
			{
				func_231();
			}
			unk_0x1A6DFFFEEC27BF4F("RE_SV", 0x00000000);
			switch (iLocal_298)
			{
				case 0x00000000:
					if (unk_0x338D6FF72D84D90F() && !func_170())
					{
						if (func_161())
						{
							if ((iLocal_44 == 0x00000003 && !(unk_0x8E28E832BEAC3DCE(vLocal_63, 3f) && func_160(unk_0x16F2683693E537C9(), vLocal_63, 0x00000001) < 150f)) || iLocal_44 != 0x00000003)
							{
								if (iLocal_44 == 0x00000003)
								{
									if (!unk_0x8E28E832BEAC3DCE(vLocal_63, 8f))
									{
										unk_0x536F1BE96C726C4B(vLocal_63, 4f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
									}
									iLocal_46 = 0x00000004;
									bLocal_79 = 0x00000001;
								}
								else
								{
									iLocal_46 = 0x00000001;
								}
								func_159();
								if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && iLocal_44 == 0x00000003)
								{
									unk_0x1AEF7184B203A58D(iLocal_50, 5f);
								}
								SYSTEM::SETTIMERA(0x00000000);
								iLocal_298++;
							}
						}
					}
					else
					{
						func_231();
					}
					break;
				
				case 0x00000001:
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
					{
						if (((SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001)) < 10000f || !unk_0x03068588A1FCED1A(iLocal_50)) || (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0x03068588A1FCED1A(iLocal_49[0x00000000]))) || (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) && !unk_0x03068588A1FCED1A(iLocal_49[0x00000001])))
						{
							iLocal_298++;
						}
					}
					if (func_158())
					{
						iLocal_298++;
					}
					if (iLocal_298 != 0x00000001)
					{
						SYSTEM::SETTIMERA(0x00000000);
					}
					break;
				
				case 0x00000002:
					if (SYSTEM::TIMERA() > 0x000007D0)
					{
						if (iLocal_44 != 0x00000003)
						{
							func_153();
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_50) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (iLocal_44 == 0x00000003)
						{
							func_148();
							if (!unk_0x03068588A1FCED1A(iLocal_50) && (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 100f || func_158()))
							{
								func_139(0x00000001);
							}
						}
						else if (((!unk_0x03068588A1FCED1A(iLocal_50) && iLocal_46 == 0x00000004) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_70, vLocal_71, fLocal_72, 0x00000000, 0x00000001, 0x00000000)) || func_158())
						{
							func_139(0x00000001);
						}
						if ((iLocal_46 == 0x00000004 && unk_0x03068588A1FCED1A(iLocal_50)) && iLocal_44 != 0x00000003)
						{
							if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001)) > 100f)
							{
								func_231();
							}
							else
							{
								func_139(0x00000001);
							}
						}
					}
					break;
			}
			if (iLocal_298 > 0x00000000)
			{
				if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && unk_0x03068588A1FCED1A(iLocal_50))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001)) > 62500f)
					{
						func_231();
					}
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001)) > 10000f && !unk_0x338D6FF72D84D90F())
					{
						func_231();
					}
				}
			}
		}
		else
		{
			unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
			if (!unk_0xE4EDC4B0E92C078B(iLocal_57))
			{
				if (!func_138(0x00000002) && !bLocal_84)
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						func_137("SV_VANHELP1", 0x00003A98);
						func_136(0x00000002);
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_52))
				{
					if (iLocal_299 != 0x00000000)
					{
						if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_52, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = 0x00000000;
							func_135(&uLocal_111, 0x00000000, 0x00000000);
						}
					}
				}
				else if (((bLocal_79 && !unk_0x762119754C50557A(iLocal_103)) && unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000)) && !bLocal_89)
				{
					if (iLocal_299 != 0x00000001)
					{
						if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = 0x00000001;
							func_135(&uLocal_111, 0x00000000, 0x00000000);
						}
					}
				}
				else if (unk_0x762119754C50557A(iLocal_103))
				{
					if (iLocal_299 != 0x00000002)
					{
						if (SYSTEM::VDIST2(unk_0xE925E52ACABA4CE7(iLocal_103), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = 0x00000002;
							func_135(&uLocal_111, 0x00000000, 0x00000000);
						}
					}
				}
				if (iLocal_299 == 0x00000000)
				{
					if (unk_0xC844350D5D58C99A(iLocal_52))
					{
						func_128(&uLocal_111, iLocal_52, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
						if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_52, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = 0xFFFFFFFF;
							func_135(&uLocal_111, 0x00000000, 0x00000000);
						}
					}
				}
				else if (iLocal_299 == 0x00000001)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_50, 0x00000001))
					{
						func_128(&uLocal_111, iLocal_50, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
						if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = 0xFFFFFFFF;
							func_135(&uLocal_111, 0x00000000, 0x00000000);
						}
					}
				}
				else if (iLocal_299 == 0x00000002)
				{
					if (unk_0x762119754C50557A(iLocal_103))
					{
						func_105(&uLocal_111, unk_0xE925E52ACABA4CE7(iLocal_103), 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
						if (SYSTEM::VDIST2(unk_0xE925E52ACABA4CE7(iLocal_103), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_299 = 0xFFFFFFFF;
							func_135(&uLocal_111, 0x00000000, 0x00000000);
						}
					}
				}
				if (((!unk_0x437347B10A200C4B(iLocal_50, 0x00000000) && bLocal_79) && !bLocal_81) && (!func_138(0x00000000) || (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_stickybomb"), 0x00000000) && !func_138(0x00000001))))
				{
					switch (iLocal_100)
					{
						case 0x00000000:
							if (!unk_0xFEBC1E4EC9E001F0() && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 225f)
							{
								func_137("SV_DOORHELP1", 0x00003A98);
								func_136(0x00000000);
								iLocal_100++;
							}
							break;
						
						case 0x00000001:
							if (!unk_0xFEBC1E4EC9E001F0())
							{
								iLocal_101 = unk_0x1C0640BA9A7327B3();
								iLocal_100++;
							}
							break;
						
						case 0x00000002:
							if ((unk_0x1C0640BA9A7327B3() - iLocal_101) > 0x000007D0 && unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_stickybomb"), 0x00000000))
							{
								func_137("SV_DOORHELP2", 0x00003A98);
								func_136(0x00000001);
								iLocal_100++;
							}
							break;
						}
				}
				if (bLocal_81 || bLocal_89)
				{
					if (func_104("SV_DOORHELP1") || func_104("SV_DOORHELP2"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
				}
			}
			switch (iLocal_46)
			{
				case 0x00000001:
					func_153();
					break;
				
				case 0x00000002:
					func_96();
					break;
				
				case 0x00000003:
					func_94();
					break;
				
				case 0x00000004:
					func_148();
					break;
				
				case 0x00000005:
					func_90();
					break;
				
				case 0x00000006:
					func_86();
					break;
				
				case 0x00000007:
					if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]))
					{
						if (unk_0x8589BAED2CA9C5B7(iLocal_49[0x00000000]) != 0x00000003)
						{
							unk_0xEBE904C8FC460B66(iLocal_49[0x00000000], 0x00000003);
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
					{
						if (unk_0x8589BAED2CA9C5B7(iLocal_49[0x00000001]) != 0x00000003)
						{
							unk_0xEBE904C8FC460B66(iLocal_49[0x00000001], 0x00000003);
						}
					}
					if (((!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0x437347B10A200C4B(iLocal_49[0x00000000], 0x00000000)) && !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001])) && !unk_0x437347B10A200C4B(iLocal_49[0x00000001], 0x00000000))
					{
						iLocal_95 = 0x00000001;
						func_79(iLocal_49[0x00000001]);
						func_77(0x00000000, 0x00000001);
					}
					else if (iLocal_95 == 0x00000001)
					{
						if (unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) || unk_0x437347B10A200C4B(iLocal_49[0x00000001], 0x00000000))
						{
							iLocal_48 = 0x00000000;
							iLocal_95 = 0x00000000;
						}
						else
						{
							func_79(iLocal_49[0x00000001]);
						}
					}
					else if (iLocal_95 == 0x00000000)
					{
						if (unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) || unk_0x437347B10A200C4B(iLocal_49[0x00000000], 0x00000000))
						{
							iLocal_95 = 0xFFFFFFFF;
						}
						else
						{
							func_79(iLocal_49[0x00000000]);
						}
					}
					break;
				
				case 0x00000008:
					func_71();
					break;
				
				case 0x00000009:
					func_231();
					break;
			}
			if (func_69())
			{
				func_68(0x00000009);
			}
			if ((((unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0xA30B8362589C124A(iLocal_50, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9()) && !bLocal_83) && iLocal_46 != 0x00000008)
			{
				if (bLocal_79)
				{
					func_68(0x00000008);
				}
				else
				{
					func_68(0x00000005);
				}
			}
			if (bLocal_80)
			{
				if (unk_0x256517DE1B6755D4(iLocal_60, 0x6F0783F5) != 0x00000005)
				{
					unk_0x0E2400AB9174FA81(0x00000005, iLocal_60, 0x6F0783F5);
					unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, iLocal_60);
				}
			}
			if (bLocal_81)
			{
				if ((unk_0x762119754C50557A(iLocal_103) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0xE925E52ACABA4CE7(iLocal_103)) > 250f)
				{
					func_68(0x00000009);
				}
			}
			if (!bLocal_89)
			{
				if (func_67())
				{
					bLocal_89 = 0x00000001;
				}
			}
			else
			{
				iVar1 = 0x00000001;
				iVar2 = 0x00000000;
				if (unk_0xC844350D5D58C99A(iLocal_49[iVar2]))
				{
					if ((!unk_0x437347B10A200C4B(iLocal_49[iVar2], 0x00000000) && !unk_0xEB6A8945D1AC98A1(iLocal_49[iVar2])) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_49[0x00000000], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 10000f)
					{
						iVar1 = 0x00000000;
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_50))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_50, 0x00000000))
						{
							iVar3 = 0x00000001;
						}
					}
					if ((SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 10000f && unk_0x03068588A1FCED1A(iLocal_50)) || SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 62500f)
					{
						iVar3 = 0x00000001;
					}
				}
				if (iVar3 && iVar1)
				{
					func_43();
				}
			}
			func_39();
			func_34();
			func_29();
		}
		if (!bLocal_77)
		{
			if (func_28())
			{
				iLocal_93 = unk_0x1C0640BA9A7327B3();
				bLocal_77 = 0x00000001;
			}
		}
		if (bLocal_77)
		{
			if (!bLocal_78)
			{
				if ((unk_0x1C0640BA9A7327B3() - iLocal_93) > 0x00001388)
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
					if (func_27() < 30f)
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_COPS", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
						{
							bLocal_78 = 0x00000001;
						}
					}
					else
					{
						bLocal_78 = 0x00000001;
					}
				}
			}
		}
		if (((unk_0x1C0640BA9A7327B3() - iLocal_93) > 0x00002710 && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) && !iLocal_92)
		{
			iVar4 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
			if (iVar4 == 0x00000000)
			{
				unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 0x00000001)
			{
				unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_92 = 0x00000001;
		}
		if (bLocal_78)
		{
			if ((!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) || !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001])) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(func_3(), 0x00000001)) < SYSTEM::POW(50f, 2f))
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
					}
					unk_0xD42D247B7AD47E76(unk_0xD803B885F5E47A62(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
				}
			}
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000 && func_2())
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		}
		if (func_1())
		{
			func_68(0x00000009);
		}
		if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0xF409BCB95E61D4DB(iLocal_50, 0x00000000) > 0f || unk_0xF409BCB95E61D4DB(iLocal_50, 0x00000001) > 0f)
			{
				if (unk_0x9C7B8DC16535B879(iLocal_50) == 0x00000003)
				{
					unk_0x71EDC33E5A423750(iLocal_50, 0x00000001);
				}
			}
			if (!bLocal_82)
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_50, 0x00000000))
				{
					bLocal_82 = 0x00000001;
				}
			}
			if (!bLocal_82)
			{
				if (unk_0xF409BCB95E61D4DB(iLocal_50, 0x00000000) == 0f && unk_0xF409BCB95E61D4DB(iLocal_50, 0x00000001) == 0f)
				{
					if (unk_0x9C7B8DC16535B879(iLocal_50) == 0x00000001)
					{
						unk_0x71EDC33E5A423750(iLocal_50, 0x00000003);
					}
				}
			}
		}
		if (iLocal_97 != 0x00000000)
		{
			if ((iLocal_46 == 0x00000008 || iLocal_46 == 0x00000006) || iLocal_46 == 0x00000004)
			{
				unk_0x850CF499433B183D(iLocal_97);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_52))
		{
			iVar5 = 0x00000000;
			while (iVar5 < iLocal_49)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar5]) && !unk_0x437347B10A200C4B(iLocal_49[iVar5], 0x00000000))
				{
					if (unk_0x50B5F6F3C29E9380(iLocal_52, iLocal_49[iVar5]))
					{
						if (iLocal_46 == 0x00000001)
						{
							if (!iLocal_300[iVar5])
							{
								unk_0x6569264C5DBAC6F6(iLocal_49[iVar5], 0x00000000, "random@security_van", "sec_idle", 0x41000000, 0x00000001);
								unk_0x6569264C5DBAC6F6(iLocal_49[iVar5], 0x00000001, "random@security_van", "sec_walk_calm", 0x41000000, 0x00000001);
								iLocal_300[iVar5] = 0x00000001;
							}
						}
						if (iLocal_46 == 0x00000007)
						{
							if (!iLocal_301[iVar5])
							{
								unk_0x6569264C5DBAC6F6(iLocal_49[iVar5], 0x00000000, "random@security_van", "sec_idle", 0x41000000, 0x00000001);
								unk_0x6569264C5DBAC6F6(iLocal_49[iVar5], 0x00000001, "random@security_van", "sec_walk_panic", 0x41000000, 0x00000001);
								iLocal_301[iVar5] = 0x00000001;
							}
						}
						if (unk_0x03A10A5707B2BB1F(iLocal_49[iVar5], 0x00000004) && !iLocal_85)
						{
							unk_0x6C5B8C4234CEA349(iLocal_49[iVar5], 0x00000001);
							iLocal_85 = 0x00000001;
						}
					}
					else
					{
						if (iLocal_300[iVar5])
						{
							unk_0x95E9A490A3D0029F(iLocal_49[iVar5], 0x00000000, 0xC1000000);
							unk_0x95E9A490A3D0029F(iLocal_49[iVar5], 0x00000001, 0xC1000000);
							iLocal_300[iVar5] = 0x00000000;
						}
						if (iLocal_301[iVar5])
						{
							unk_0x95E9A490A3D0029F(iLocal_49[iVar5], 0x00000000, 0xC1000000);
							unk_0x95E9A490A3D0029F(iLocal_49[iVar5], 0x00000001, 0xC1000000);
							iLocal_301[iVar5] = 0x00000000;
						}
						if (iLocal_300[iVar5] || iLocal_301[iVar5])
						{
							iLocal_300[iVar5] = 0x00000000;
							iLocal_301[iVar5] = 0x00000000;
							unk_0x95E9A490A3D0029F(iLocal_49[iVar5], 0x00000000, 0xC1000000);
							unk_0x95E9A490A3D0029F(iLocal_49[iVar5], 0x00000001, 0xC1000000);
						}
						if (unk_0x03A10A5707B2BB1F(iLocal_49[iVar5], 0x00000004) && iLocal_85)
						{
							unk_0x6C5B8C4234CEA349(iLocal_49[iVar5], 0x00000001);
							iLocal_85 = 0x00000000;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0x00000000;
			while (iVar5 < iLocal_49)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar5]))
				{
					if (iLocal_300[iVar5] || iLocal_301[iVar5])
					{
						iLocal_300[iVar5] = 0x00000000;
						iLocal_301[iVar5] = 0x00000000;
						unk_0x95E9A490A3D0029F(iLocal_49[iVar5], 0x00000000, 0xC1000000);
						unk_0x95E9A490A3D0029F(iLocal_49[iVar5], 0x00000001, 0xC1000000);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_79 && !bLocal_288)
		{
			if (((((unk_0xC844350D5D58C99A(iLocal_52) && unk_0xD59B17D2DFF98E26(iLocal_52)) && !unk_0xEB6A8945D1AC98A1(iLocal_49[iLocal_96])) && !unk_0xB4ECF989E2C1DAC8(iLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(iLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_panic", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(iLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_calm", 0x00000003))
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 1000f, -4f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
		if (!iLocal_86)
		{
			if (unk_0xC844350D5D58C99A(iLocal_50))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_50, unk_0x16F2683693E537C9(), 0x00000001))
				{
					iLocal_86 = 0x00000001;
				}
				unk_0xE910A68AA670B4AA(iLocal_50);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && (((unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && bLocal_84) && unk_0x762119754C50557A(iLocal_103)) || (!unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && unk_0x762119754C50557A(iLocal_103)))) && SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001)) < 20f) && SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0xE925E52ACABA4CE7(iLocal_103)) < 20f)
	{
		iVar1 = unk_0xF187F2EA5437526A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), fVar0, fVar0, fVar0, 0xFFFFFFFF);
		if (!unk_0xEB6A8945D1AC98A1(iVar1))
		{
			if (unk_0x134B62B726CEC8E6(iVar1) == joaat("s_m_y_cop_01") || unk_0x134B62B726CEC8E6(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 0x00000001;
			}
		}
		iVar1 = unk_0xF187F2EA5437526A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), fVar0, fVar0, fVar0, 0xFFFFFFFF);
		if (!unk_0xEB6A8945D1AC98A1(iVar1))
		{
			if (unk_0x134B62B726CEC8E6(iVar1) == joaat("s_m_y_cop_01") || unk_0x134B62B726CEC8E6(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 0x00000001;
			}
		}
		iVar2 = unk_0x6E7D01E16ABEFABB(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), fVar0, 0x00000000, 0x00000400);
		if (unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
		{
			return 0x00000001;
		}
		iVar2 = unk_0x6E7D01E16ABEFABB(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), fVar0, 0x00000000, 0x00000400);
		if (unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

var func_3()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]))
		{
			fVar0 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_49[0x00000000], 0x00000001));
			iVar1 = 0x00000000;
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
		{
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_49[0x00000001], 0x00000001)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_49[0x00000001], 0x00000001));
				iVar1 = 0x00000001;
			}
		}
	}
	return iLocal_49[iVar1];
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0x00000000);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_23();
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
				func_15();
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
				if (func_14())
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
			if (func_13())
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
			func_12();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_11();
		func_6();
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
		func_25();
	}
	return 0x00000000;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_10())
	{
		return 0x00000000;
	}
	if (func_8(unk_0xD803B885F5E47A62()))
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

bool func_8(int iParam0)
{
	return func_9(iParam0, 0x00000014);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_10()
{
	return 0xFFFFFFFF;
}

void func_11()
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

void func_12()
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

int func_13()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_14()
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

void func_15()
{
	if (func_22(0x0000000E))
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
		Global_4C1E = func_16();
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

int func_16()
{
	func_17();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_17()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_20(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_19(unk_0x16F2683693E537C9());
			if (func_18(iVar0) && (!func_22(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_18(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_18(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_21(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_22(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

float func_27()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]))
		{
			fVar0 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_49[0x00000000], 0x00000001));
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
		{
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_49[0x00000001], 0x00000001)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_49[0x00000001], 0x00000001));
			}
		}
	}
	return SYSTEM::SQRT(fVar0);
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar1 = 0x00000000;
		while (iVar1 < iLocal_49)
		{
			if (unk_0xC844350D5D58C99A(iLocal_49[iVar1]))
			{
				if (((!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar1]) && unk_0xB87D13D0C064E9D1(iLocal_49[iVar1], unk_0x16F2683693E537C9(), 0x00000001)) || unk_0xEB6A8945D1AC98A1(iLocal_49[iVar1])) || unk_0x437347B10A200C4B(iLocal_49[iVar1], 0x00000000))
				{
					iVar0 = 0x00000001;
				}
			}
			iVar1++;
		}
		if ((!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001])) && iLocal_86)
		{
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

void func_29()
{
	if (!bLocal_89)
	{
		if (!bLocal_79)
		{
			if (unk_0xC844350D5D58C99A(iLocal_52))
			{
				if (!unk_0xD59B17D2DFF98E26(iLocal_52))
				{
					unk_0xF690C84DADBB3551(&iLocal_52);
					if (!unk_0x762119754C50557A(iLocal_103) && !bLocal_81)
					{
						func_30(0f, 0f, 0f, 0x00000000);
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() - iLocal_102) > 0x00000BB8)
				{
					if (unk_0xEB6A8945D1AC98A1(iLocal_49[iLocal_96]) || unk_0x869EFD0BC0868856(iLocal_49[iLocal_96]))
					{
						unk_0x15AFB6CBDE990FB6(iLocal_52, 0x00000001, 0x00000001);
						iLocal_102 = unk_0x1C0640BA9A7327B3();
					}
				}
			}
			else if (!unk_0x762119754C50557A(iLocal_103))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_49[iLocal_96]) || ((!unk_0xEB6A8945D1AC98A1(iLocal_49[iLocal_96]) && unk_0x869EFD0BC0868856(iLocal_49[iLocal_96])) && !bLocal_81))
				{
					func_30(0f, 0f, 0f, 0x00000000);
				}
			}
		}
	}
	else
	{
		if (unk_0xC844350D5D58C99A(iLocal_52))
		{
			unk_0xF690C84DADBB3551(&iLocal_52);
		}
		if (unk_0x762119754C50557A(iLocal_103))
		{
			unk_0x40B7230FD4C59AA2(iLocal_103);
		}
	}
}

void func_30(vector3 vParam0, bool bParam1)
{
	if (!bLocal_89 && !bLocal_81)
	{
		if (!bParam1)
		{
			if (bLocal_79)
			{
				vParam0 = { unk_0x550B1459B4642A86(unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, -3.3f, 0f), 1.2f, 1.5f) };
			}
			else
			{
				vParam0 = { unk_0x550B1459B4642A86(unk_0x68F4C0EC296D3901(iLocal_49[iLocal_96], 0x00000000), 1.2f, 1.5f) };
			}
		}
		unk_0x5D96D8530B3D0904(&iLocal_104, 0x00000003);
		unk_0x5D96D8530B3D0904(&iLocal_104, 0x00000004);
		unk_0x5D96D8530B3D0904(&iLocal_104, 0x00000001);
		if (bParam1)
		{
			iLocal_103 = unk_0x2D7B5CDDF12654D2(joaat("pickup_money_security_case"), vParam0, unk_0x835730A2D89F6093(iLocal_52, 0x00000002), 0x00000000, iLocal_94, 0x00000002, 0x00000001, 0x00000000);
		}
		else
		{
			iLocal_103 = unk_0xA6FF0828D17CF374(joaat("pickup_money_security_case"), vParam0, iLocal_104, iLocal_94, 0x00000001, 0x00000000);
		}
		if (!unk_0xE4EDC4B0E92C078B(iLocal_58))
		{
			iLocal_58 = func_31(iLocal_103);
		}
		if (unk_0xC844350D5D58C99A(iLocal_52))
		{
			unk_0xF690C84DADBB3551(&iLocal_52);
		}
		bLocal_81 = 0x00000001;
	}
}

int func_31(int iParam0)
{
	return func_32(iParam0);
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_33(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

float func_33(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_34()
{
	if (func_36())
	{
		if (unk_0xC844350D5D58C99A(iLocal_53))
		{
			unk_0x611DFA9294B339CA(iLocal_50, 0x00000002, 0x00000000, 0x00000000);
			unk_0x611DFA9294B339CA(iLocal_50, 0x00000003, 0x00000000, 0x00000000);
			if (unk_0xC844350D5D58C99A(iLocal_53))
			{
				unk_0xF690C84DADBB3551(&iLocal_53);
			}
		}
	}
	switch (iLocal_47)
	{
		case 0x00000000:
			if (bLocal_79)
			{
				iLocal_47 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (unk_0xF409BCB95E61D4DB(iLocal_50, 0x00000002) == 0f && unk_0xF409BCB95E61D4DB(iLocal_50, 0x00000003) == 0f)
			{
				if (unk_0xC844350D5D58C99A(iLocal_52))
				{
					if (unk_0xD59B17D2DFF98E26(iLocal_52))
					{
						unk_0x15AFB6CBDE990FB6(iLocal_52, 0x00000001, 0x00000001);
					}
					unk_0x9F528B1B53FBC5D9(iLocal_52, iLocal_50, 0x00000000, vLocal_65, vLocal_66, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					iLocal_47 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			if (!bLocal_81 && !bLocal_89)
			{
				if (!unk_0x437347B10A200C4B(iLocal_50, 0x00000000))
				{
					if (((unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && unk_0xF409BCB95E61D4DB(iLocal_50, 0x00000002) > 0.25f) && unk_0xF409BCB95E61D4DB(iLocal_50, 0x00000003) > 0.25f) || !unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
					{
						if (unk_0xC844350D5D58C99A(iLocal_52))
						{
							if (unk_0xD59B17D2DFF98E26(iLocal_52))
							{
								unk_0xEB819BD1E585E9CB(unk_0xD68EA767274B7444(), "DOORS_BLOWN", unk_0xBF584557291FDD31(iLocal_50, 0x0000000D), "RE_SECURITY_VAN_SOUNDSET", 0x00000000, 0x00000000, 0x00000000);
								unk_0x15AFB6CBDE990FB6(iLocal_52, 0x00000001, 0x00000000);
								unk_0x20641932E5104B25(iLocal_52, 0x00000001, 0x00000000);
								unk_0xAC0C6241732E36F6(iLocal_52);
								unk_0x272295383B6513AB(iLocal_52, 0x00000001);
								vLocal_279 = { unk_0x68F4C0EC296D3901(iLocal_52, 0x00000001) - unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001) * Vector(1.5f, 1.5f, 1.5f) };
								if (SYSTEM::VMAG(vLocal_279) > 10f)
								{
									vLocal_279 = { func_35(vLocal_279) };
									vLocal_279 = { vLocal_279 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_99 < 0x00000064)
								{
									iLocal_87 = 0x00000001;
								}
								unk_0xDFC6BA855748EB10(iLocal_52, 0x00000001, 0f, 1f, 5f, 0f, 0f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
								iLocal_278 = unk_0x1C0640BA9A7327B3();
							}
							else if (unk_0x89AA362D00A86F72(unk_0x68F4C0EC296D3901(iLocal_52, 0x00000001), unk_0x68E4ADDDDCD7BDDE(iLocal_50, vLocal_276), unk_0x68E4ADDDDCD7BDDE(iLocal_50, vLocal_277), 0x00000000) >= 1f)
							{
								iLocal_47 = 0x00000003;
								iLocal_91[0x00000000] = 0x00000000;
								iLocal_91[0x00000001] = 0x00000000;
							}
							else if ((unk_0x1C0640BA9A7327B3() - iLocal_278) > 0x00001388)
							{
								func_30(0f, 0f, 0f, 0x00000000);
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_50))
				{
					unk_0x611DFA9294B339CA(iLocal_50, 0x00000002, 0x00000000, 0x00000000);
					unk_0x611DFA9294B339CA(iLocal_50, 0x00000003, 0x00000000, 0x00000000);
					func_30(unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, 2f, 0f), 0x00000000);
				}
			}
			break;
		
		case 0x00000003:
			if (iLocal_46 != 0x00000008)
			{
				func_68(0x00000008);
			}
			if (unk_0xC844350D5D58C99A(iLocal_52) && !unk_0x762119754C50557A(iLocal_103))
			{
				if (unk_0x9C66D99E63E8E24C(iLocal_52) == 0f && (unk_0x1C0640BA9A7327B3() - iLocal_278) > 0x000003E8)
				{
					func_30(unk_0x68F4C0EC296D3901(iLocal_52, 0x00000001), 0x00000001);
					unk_0xF690C84DADBB3551(&iLocal_52);
				}
				else if ((unk_0x1C0640BA9A7327B3() - iLocal_278) > 0x00001388)
				{
					func_30(0f, 0f, 0f, 0x00000000);
				}
			}
			break;
	}
}

Vector3 func_35(vector3 vParam0)
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

int func_36()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iLocal_53) && unk_0xD59B17D2DFF98E26(iLocal_53))
	{
		if (!iLocal_272)
		{
			if (unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iLocal_53, 0x00000001), joaat("weapon_stickybomb"), 0.25f, 0x00000000) || unk_0xBF75E4DF4C367CD9(unk_0x68F4C0EC296D3901(iLocal_53, 0x00000001), 0.3f, unk_0x6B7EC7B5B6B57364(joaat("weapon_stickybomb")), 0x00000000))
			{
				iLocal_272 = 0x00000001;
			}
		}
		iVar0 = 0x00000000;
		unk_0x5F3EEC968FEB7235(unk_0x68F4C0EC296D3901(iLocal_53, 0x00000001), 0.1f, 0x000000FF, 0x00000000, 0x00000000, 0x000000FF);
		if (func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_53, 0x00000001), 1f, 0x00000001) || (unk_0x681F21BF9F7B449B(0x00000002, unk_0x68F4C0EC296D3901(iLocal_53, 0x00000001), 0.3f) && iLocal_272))
		{
			iLocal_87 = 0x00000001;
			iVar0 = 0x00000001;
		}
		if (unk_0x7F6DC62EA9922664(iLocal_53) < iLocal_98 && unk_0xB87D13D0C064E9D1(iLocal_53, unk_0x16F2683693E537C9(), 0x00000000))
		{
			iLocal_99 = (iLocal_99 + (iLocal_98 - unk_0x7F6DC62EA9922664(iLocal_53)));
			unk_0xE910A68AA670B4AA(iLocal_53);
		}
		if ((unk_0x1C0640BA9A7327B3() - iLocal_273) > 0x000000C8 && unk_0xC844350D5D58C99A(iLocal_50))
		{
			if (unk_0x53129655DBEDC6EA(unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, 0f, (1.2195f - 0.27f)), unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, fLocal_275, (1.2195f + 0.09f)), 0.45f, 0x00000001))
			{
				iLocal_273 = unk_0x1C0640BA9A7327B3();
				iLocal_274++;
			}
		}
		if (iLocal_274 > 0x00000005)
		{
			return 0x00000001;
		}
		if (iLocal_99 > 0x00000064 || iVar0)
		{
			return 0x00000001;
		}
		iLocal_98 = unk_0x7F6DC62EA9922664(iLocal_53);
	}
	return 0x00000000;
}

int func_37(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (!func_38(vParam0 + vParam1))
	{
		if ((((((((((((((((((((((unk_0x372F6F38C16E36DA(0x00000005, vParam1, vParam0) || (unk_0x372F6F38C16E36DA(0x00000002, vParam1, vParam0) && !bParam4)) || (unk_0x372F6F38C16E36DA(0x00000014, vParam1, vParam0) && !bParam4)) || unk_0x372F6F38C16E36DA(0x00000004, vParam1, vParam0)) || (unk_0x372F6F38C16E36DA(0x0000001C, vParam1, vParam0) && !bParam4)) || unk_0x372F6F38C16E36DA(0x00000020, vParam1, vParam0)) || unk_0x372F6F38C16E36DA(0x00000019, vParam1, vParam0)) || unk_0x372F6F38C16E36DA(0x00000009, vParam1, vParam0)) || (unk_0x372F6F38C16E36DA(0x00000003, vParam1, vParam0) && !bParam4)) || (unk_0x372F6F38C16E36DA(0x00000006, vParam1, vParam0) && !bParam4)) || unk_0x372F6F38C16E36DA(0x00000000, vParam1, vParam0)) || unk_0x372F6F38C16E36DA(0x00000001, vParam1, vParam0)) || unk_0x372F6F38C16E36DA(0x00000017, vParam1, vParam0)) || unk_0x372F6F38C16E36DA(0x00000022, vParam1, vParam0)) || unk_0x372F6F38C16E36DA(0x0000000E, vParam1, vParam0)) || (unk_0x372F6F38C16E36DA(0x0000001E, vParam1, vParam0) && !bParam4)) || (unk_0x372F6F38C16E36DA(0x0000000C, vParam1, vParam0) && !bParam4)) || unk_0x372F6F38C16E36DA(0x00000007, vParam1, vParam0)) || (unk_0x372F6F38C16E36DA(0x00000015, vParam1, vParam0) && !bParam4)) || (unk_0x372F6F38C16E36DA(0x00000012, vParam1, vParam0) && !bParam4)) || unk_0x372F6F38C16E36DA(0x0000000F, vParam1, vParam0)) || unk_0x372F6F38C16E36DA(0x0000000A, vParam1, vParam0)) || unk_0x372F6F38C16E36DA(0x0000001B, vParam1, vParam0))
		{
			iVar0 = 0x00000001;
		}
	}
	else if ((((((((((((((((((((((unk_0x681F21BF9F7B449B(0x00000005, vParam2, fParam3) || (unk_0x681F21BF9F7B449B(0x00000002, vParam2, fParam3) && !bParam4)) || (unk_0x681F21BF9F7B449B(0x00000014, vParam2, fParam3) && !bParam4)) || unk_0x681F21BF9F7B449B(0x00000004, vParam2, fParam3)) || (unk_0x681F21BF9F7B449B(0x0000001C, vParam2, fParam3) && !bParam4)) || unk_0x681F21BF9F7B449B(0x00000020, vParam2, fParam3)) || unk_0x681F21BF9F7B449B(0x00000019, vParam2, fParam3)) || unk_0x681F21BF9F7B449B(0x00000009, vParam2, fParam3)) || (unk_0x681F21BF9F7B449B(0x00000003, vParam2, fParam3) && !bParam4)) || (unk_0x681F21BF9F7B449B(0x00000006, vParam2, fParam3) && !bParam4)) || unk_0x681F21BF9F7B449B(0x00000000, vParam2, fParam3)) || unk_0x681F21BF9F7B449B(0x00000001, vParam2, fParam3)) || unk_0x681F21BF9F7B449B(0x00000017, vParam2, fParam3)) || unk_0x681F21BF9F7B449B(0x00000022, vParam2, fParam3)) || unk_0x681F21BF9F7B449B(0x0000000E, vParam2, fParam3)) || (unk_0x681F21BF9F7B449B(0x0000001E, vParam2, fParam3) && !bParam4)) || (unk_0x681F21BF9F7B449B(0x0000000C, vParam2, fParam3) && !bParam4)) || unk_0x681F21BF9F7B449B(0x00000007, vParam2, fParam3)) || (unk_0x681F21BF9F7B449B(0x00000015, vParam2, fParam3) && !bParam4)) || (unk_0x681F21BF9F7B449B(0x00000012, vParam2, fParam3) && !bParam4)) || unk_0x681F21BF9F7B449B(0x0000000F, vParam2, fParam3)) || unk_0x681F21BF9F7B449B(0x0000000A, vParam2, fParam3)) || unk_0x681F21BF9F7B449B(0x0000001B, vParam2, fParam3))
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_38(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_39()
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!unk_0xE4EDC4B0E92C078B(iLocal_57))
	{
		if (!bLocal_80)
		{
			if ((!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) && unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000)) && !bLocal_89)
			{
				if (!bLocal_79)
				{
					if (!unk_0xE4EDC4B0E92C078B(uLocal_56[0x00000001]))
					{
						uLocal_56[0x00000001] = func_42(iLocal_49[0x00000001], 0x00000000, 0x00000091);
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(uLocal_56[0x00000001]))
					{
						unk_0x142CC44DB769B57E(&(uLocal_56[0x00000001]));
					}
					if (!unk_0xE4EDC4B0E92C078B(iLocal_55))
					{
						iLocal_55 = func_40(iLocal_50, 0x00000000, 0x00000000);
					}
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(uLocal_56[0x00000001]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_56[0x00000001]));
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_55))
				{
					unk_0x142CC44DB769B57E(&iLocal_55);
				}
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_56[0x00000000]) && unk_0x76137156E5D43335(uLocal_56[0x00000000]) != 0x00000077)
			{
				unk_0x142CC44DB769B57E(&(uLocal_56[0x00000000]));
			}
			if (unk_0xE4EDC4B0E92C078B(uLocal_56[0x00000001]) && unk_0x76137156E5D43335(uLocal_56[0x00000001]) != 0x00000077)
			{
				unk_0x142CC44DB769B57E(&(uLocal_56[0x00000001]));
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_55) && unk_0x76137156E5D43335(iLocal_55) != 0x00000077)
			{
				unk_0x142CC44DB769B57E(&iLocal_55);
			}
			if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
			{
				iVar0 = 0x00000000;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_49[iVar0], iLocal_50, 0x00000000))
						{
							bVar1 = 0x00000001;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_55))
				{
					iLocal_55 = func_40(iLocal_50, 0x00000001, 0x00000000);
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(iLocal_55))
			{
				unk_0x142CC44DB769B57E(&iLocal_55);
			}
			if ((unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && unk_0xE4EDC4B0E92C078B(iLocal_55)) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_50, 0x00000000))
				{
					if (unk_0x4FA921CB56EDB0F8(iLocal_55) != 0x00000000)
					{
						unk_0x7F010F50CE03A8AF(iLocal_55, 0x00000000);
					}
				}
				else if (unk_0x4FA921CB56EDB0F8(iLocal_55) != 0x000000FF)
				{
					unk_0x7F010F50CE03A8AF(iLocal_55, 0x000000FF);
				}
			}
			iVar0 = 0x00000000;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x762119754C50557A(iLocal_103) && !unk_0x405E212DDE472467(iLocal_49[iVar0], 0x00000000))
					{
						if (!unk_0xE9FDA1035CFEA94F(iLocal_49[iVar0]) || SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_49[iVar0], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 30f)
						{
							iVar2[iVar0] = 0x00000001;
						}
					}
					if (iLocal_46 == 0x00000008 && !unk_0x405E212DDE472467(iLocal_49[iVar0], 0x00000000))
					{
						iVar2[iVar0] = 0x00000001;
					}
					if (iLocal_46 == 0x00000005)
					{
						iVar2[iVar0] = 0x00000000;
					}
				}
				if (iVar2[iVar0])
				{
					if (!unk_0xE4EDC4B0E92C078B(uLocal_56[iVar0]))
					{
						uLocal_56[iVar0] = func_42(iLocal_49[iVar0], 0x00000001, 0x00000091);
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(uLocal_56[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_56[iVar0]));
				}
				iVar0++;
			}
			if (unk_0x762119754C50557A(iLocal_103) && !bLocal_89)
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_58))
				{
					iLocal_58 = func_32(iLocal_103);
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(iLocal_58))
			{
				unk_0x142CC44DB769B57E(&iLocal_58);
			}
		}
	}
	else if ((unk_0xC844350D5D58C99A(iLocal_50) && unk_0xC844350D5D58C99A(iLocal_49[0x00000000])) && unk_0xC844350D5D58C99A(iLocal_49[0x00000001]))
	{
		if ((((((!unk_0x03068588A1FCED1A(iLocal_50) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_50, 100f, 100f, 30f, 0x00000000, 0x00000001, 0x00000000)) || (!unk_0x03068588A1FCED1A(iLocal_49[0x00000000]) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_49[0x00000000], 100f, 100f, 30f, 0x00000000, 0x00000001, 0x00000000))) || (!unk_0x03068588A1FCED1A(iLocal_49[0x00000001]) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_49[0x00000001], 100f, 100f, 30f, 0x00000000, 0x00000001, 0x00000000))) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_50, 50f, 50f, 20f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_49[0x00000000], 50f, 50f, 20f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_49[0x00000001], 50f, 50f, 20f, 0x00000000, 0x00000001, 0x00000000))
		{
			unk_0x142CC44DB769B57E(&iLocal_57);
		}
	}
	if (unk_0xE4EDC4B0E92C078B(uLocal_56[0x00000000]))
	{
		unk_0xF2D30B8ACAF12A39(uLocal_56[0x00000000], iLocal_90);
	}
	if (unk_0xE4EDC4B0E92C078B(uLocal_56[0x00000001]))
	{
		unk_0xF2D30B8ACAF12A39(uLocal_56[0x00000001], bLocal_90);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_55))
	{
		unk_0xF2D30B8ACAF12A39(iLocal_55, bLocal_90);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_58))
	{
		unk_0xF2D30B8ACAF12A39(iLocal_58, bLocal_90);
	}
	if (!bLocal_90)
	{
		if (bLocal_80 || iLocal_47 == 0x00000003)
		{
			bLocal_90 = 0x00000000;
		}
	}
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	return func_41(iParam0, !bParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_33(unk_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			unk_0x61755AC17D8F538E(iVar0, 0x00000002);
		}
	}
	else if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_33(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_33(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_42(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_41(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_43()
{
	func_45(0x00000009, iLocal_45);
	while (!func_44())
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_231();
}

int func_44()
{
	return 0x00000001;
}

void func_45(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_65();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_64(iParam0))
	{
		func_63(iParam0, iParam1);
		if (!func_62(0x00000033))
		{
			func_58("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_61(), 0x00000000, 0x0000008A, 0x00000000);
			func_57(0x00000033);
		}
		if (func_56(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_55(iParam0, iParam1) != 0x00000142)
		{
			func_47(func_55(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_46(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_46(0x00000007);
			}
			else
			{
				func_46(0x00000001);
			}
		}
	}
}

void func_46(int iParam0)
{
	Global_1B408 = iParam0;
}

void func_47(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0x00000000)
	{
	}
	if (iParam0 == 0x00000141 || iParam0 > 0x00000141)
	{
	}
	else
	{
		func_53((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
	}
	bVar0 = 0x00000001;
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 0x00000001)
	{
		if (Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000B || Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000C)
		{
			bVar0 = 0x00000000;
		}
	}
	else
	{
		Global_1B416.f_27CD[iParam0 /*12*/].f_5 = 0x00000001;
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = uParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = uParam2;
		if (iParam0 == 0x0000011F)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000011E)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000012B)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 0x00000032, 0x00000000);
		}
	}
	if (bVar0)
	{
		func_48();
	}
}

void func_48()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0x00000000;
	Global_1B30E = 0x00000000;
	Global_1B30F = 0x00000000;
	Global_1B310 = 0x00000000;
	Global_1B311 = 0x00000000;
	Global_1B312 = 0x00000000;
	Global_1B313 = 0x00000000;
	Global_1B314 = 0x00000000;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_1B416.f_27CD.f_F0D;
	Global_1B416.f_27CD.f_F0D = 0f;
	while (iVar0 < 0x00000141)
	{
		if (Global_1B416.f_27CD[iVar0 /*12*/].f_5 == 0x00000001)
		{
			switch (Global_1B416.f_27CD[iVar0 /*12*/].f_6)
			{
				case 0x00000001:
					Global_1B30E++;
					fVar1 = (fVar1 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000003:
					Global_1B30F++;
					fVar2 = (fVar2 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000005:
					Global_1B310++;
					fVar3 = (fVar3 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000007:
					Global_1B311++;
					fVar4 = (fVar4 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000009:
					Global_1B312++;
					fVar5 = (fVar5 + (Global_1B416.f_27CD[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 0x0000000B:
					Global_1B313++;
					fVar6 = (fVar6 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x0000000D:
					Global_1B314++;
					fVar7 = (fVar7 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_1B2FD > 0x00000000)
	{
		if (Global_1B30E == Global_1B2FD)
		{
			fVar1 = 55f;
		}
	}
	if (Global_1B2FE > 0x00000000)
	{
		if (Global_1B30F == Global_1B2FE)
		{
			fVar2 = 10f;
		}
	}
	if (Global_1B2FF > 0x00000000)
	{
		if (Global_1B310 == Global_1B2FF)
		{
			fVar3 = 0f;
		}
	}
	if (Global_1B300 > 0x00000000)
	{
		if (Global_1B311 == Global_1B300)
		{
			fVar4 = 10f;
		}
	}
	if (Global_1B301 > 0x00000000)
	{
		if (((Global_1B312 == Global_1B301 || (Global_1B301 * 10 / Global_1B312) < 0x00000029) || Global_1B312 > Global_1B304) || Global_1B312 == Global_1B304)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F10, 0x0000000E))
			{
				if (Global_1B312 == Global_1B301)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_1B301, 0x00000000);
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F10), 0x0000000E);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_1B302 > 0x00000000)
	{
		if (Global_1B313 == Global_1B302)
		{
			fVar6 = 15f;
		}
	}
	if (Global_1B303 > 0x00000000)
	{
		if (Global_1B314 == Global_1B303)
		{
			fVar7 = 5f;
		}
	}
	Global_1B416.f_27CD.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_1B312 > Global_1B304 || Global_1B312 == Global_1B304)
	{
		iVar9 = Global_1B304;
	}
	else
	{
		iVar9 = Global_1B312;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_1B30E, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_1B2FD, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_1B30F, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_1B2FE, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_1B310, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_1B2FF, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_1B311, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_1B300, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_1B304, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_1B314 + Global_1B313), 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_1B303 + Global_1B302), 0x00000001);
	Global_1B315 = (Global_1B30E * 100 / Global_1B2FD);
	Global_1B317 = ((Global_1B310 + Global_1B30F) * 100 / (Global_1B2FF + Global_1B2FE));
	Global_1B316 = ((Global_1B311 + iVar9) * 100 / (Global_1B300 + Global_1B304));
	Global_1B318 = ((Global_1B313 + Global_1B314) * 100 / (Global_1B302 + Global_1B303));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_1B416.f_27CD.f_F0D, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_1B315, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_1B316, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_1B317, 0x00000001);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D))
	{
		func_52(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_51() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()
{
	if (func_50(0x00000000))
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

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_51()
{
	return Global_7830;
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 > 0x0000004E)
	{
		return 0x00000000;
	}
	if (iParam1 <= 0x00000000 || iParam1 > 0x00000064)
	{
		return 0x00000000;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0x00000000;
}

int func_53(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_54();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_54()
{
	return Global_1407E9;
}

int func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x000000FA;
			break;
		
		case 0x00000001:
			return 0x000000E2;
			break;
		
		case 0x00000002:
			return 0x000000F3;
			break;
		
		case 0x00000003:
			return 0x00000100;
			break;
		
		case 0x00000004:
			return 0x00000103;
			break;
		
		case 0x00000005:
			if (iParam1 == 0x00000001)
			{
				return 0x00000119;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x0000011A;
			}
			break;
		
		case 0x00000006:
			return 0x00000109;
			break;
		
		case 0x00000007:
			return 0x000000DA;
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000001)
			{
				return 0x0000010F;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000110;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x00000111;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x00000112;
			}
			if (iParam1 == 0x00000005)
			{
				return 0x00000113;
			}
			if (iParam1 == 0x00000006)
			{
				return 0x00000114;
			}
			if (iParam1 == 0x00000007)
			{
				return 0x00000115;
			}
			if (iParam1 == 0x00000008)
			{
				return 0x00000116;
			}
			if (iParam1 == 0x00000009)
			{
				return 0x00000117;
			}
			if (iParam1 == 0x0000000A)
			{
				return 0x00000118;
			}
			break;
		
		case 0x0000000A:
			return 0x000000DB;
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000001)
			{
				return 0x000000F6;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000F7;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x000000F8;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x000000F9;
			}
			break;
		
		case 0x0000000C:
			return 0x000000FE;
			break;
		
		case 0x0000000D:
			if (iParam1 == 0x00000001)
			{
				return 0x00000104;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000105;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x00000106;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x00000108;
			}
			break;
		
		case 0x0000000E:
			return 0x0000011B;
			break;
		
		case 0x0000000F:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E0;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E1;
			}
			break;
		
		case 0x00000010:
			return 0x000000FC;
			break;
		
		case 0x00000011:
			if (iParam1 == 0x00000001)
			{
				return 0x000000F4;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000F5;
			}
			break;
		
		case 0x00000012:
			return 0x000000FD;
			break;
		
		case 0x00000013:
			return 0x000000D7;
			break;
		
		case 0x00000014:
			return 0x000000D8;
			break;
		
		case 0x00000015:
			return 0x000000FB;
			break;
		
		case 0x00000016:
			if (iParam1 == 0x00000001)
			{
				return 0x000000DD;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000DE;
			}
			break;
		
		case 0x00000017:
			if (iParam1 == 0x00000001)
			{
				return 0x000000D5;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000D6;
			}
			break;
		
		case 0x00000018:
			return 0x000000F2;
			break;
		
		case 0x00000019:
			if (iParam1 == 0x00000001)
			{
				return 0x0000010B;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x0000010C;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x0000010D;
			}
			break;
		
		case 0x00000008:
			return 0x000000FF;
			break;
		
		case 0x0000001A:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E3;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E4;
			}
			break;
		
		case 0x0000001B:
			if (iParam1 == 0x00000001)
			{
				return 0x00000101;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000102;
			}
			break;
		
		case 0x0000001C:
			return 0x000000D9;
			break;
		
		case 0x0000001D:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E5;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E6;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x000000E7;
			}
			break;
		
		case 0x0000001E:
			return 0x0000011D;
			break;
		
		case 0x0000001F:
			return 0x0000013E;
			break;
		
		case 0x00000020:
			return 0x0000013F;
			break;
		
		case 0x00000021:
			return 0x00000140;
			break;
	}
	return 0x00000142;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000001D:
		case 0x0000001E:
		case 0x00000002:
		case 0x00000012:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

void func_57(int iParam0)
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

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_59(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_60();
	}
}

void func_60()
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

int func_61()
{
	func_17();
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

int func_62(int iParam0)
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

void func_63(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 0x00000005;
			break;
		
		case 0x00000005:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000009:
			iVar0 = 0x0000000A;
			break;
		
		case 0x0000000B:
			iVar0 = 0x00000004;
			break;
		
		case 0x0000000D:
			iVar0 = 0x00000004;
			break;
		
		case 0x0000000F:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000011:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000016:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000017:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000019:
			iVar0 = 0x00000003;
			break;
		
		case 0x0000001A:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000001B:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000001D:
			iVar0 = 0x00000003;
			break;
	}
	return iVar0;
}

int func_65()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_66(Var0);
	return uVar1;
}

int func_66(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x12AB0310C2281427(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 0x00000017;
			break;
		
		case joaat("re_accident"):
			return 0x00000000;
			break;
		
		case joaat("re_arrests"):
			return 0x0000000F;
			break;
		
		case joaat("re_atmrobbery"):
			return 0x00000001;
			break;
		
		case joaat("re_bikethief"):
			return 0x0000001A;
			break;
		
		case joaat("re_border"):
			return 0x0000001D;
			break;
		
		case joaat("re_burials"):
			return 0x00000018;
			break;
		
		case joaat("re_bus_tours"):
			return 0x00000002;
			break;
		
		case joaat("re_cartheft"):
			return 0x00000011;
			break;
		
		case joaat("re_chasethieves"):
			return 0x0000000B;
			break;
		
		case joaat("re_crashrescue"):
			return 0x00000010;
			break;
		
		case joaat("re_cultshootout"):
			return 0x00000012;
			break;
		
		case joaat("re_dealgonewrong"):
			return 0x0000000C;
			break;
		
		case joaat("re_domestic"):
			return 0x00000003;
			break;
		
		case joaat("re_drunkdriver"):
			return 0x0000001B;
			break;
		
		case joaat("re_gang_intimidation"):
			return 0x00000014;
			break;
		
		case joaat("re_gangfight"):
			return 0x00000013;
			break;
		
		case joaat("re_getaway_driver"):
			return 0x00000004;
			break;
		
		case joaat("re_hitch_lift"):
			return 0x0000000D;
			break;
		
		case joaat("re_homeland_security"):
			return 0x0000001C;
			break;
		
		case joaat("re_lured"):
			return 0x00000007;
			break;
		
		case joaat("re_muggings"):
			return 0x00000019;
			break;
		
		case joaat("re_paparazzi"):
			return 0x0000000A;
			break;
		
		case joaat("re_prisonerlift"):
			return 0x00000016;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 0x00000015;
			break;
		
		case joaat("re_securityvan"):
			return 0x00000009;
			break;
		
		case joaat("re_shoprobbery"):
			return 0x00000005;
			break;
		
		case joaat("re_snatched"):
			return 0x00000006;
			break;
		
		case joaat("re_stag_do"):
			return 0x0000000E;
			break;
		
		case joaat("re_yetarian"):
			return 0x0000001E;
			break;
		
		case joaat("re_duel"):
			return 0x0000001F;
			break;
		
		case joaat("re_seaplane"):
			return 0x00000020;
			break;
		
		case joaat("re_monkey"):
			return 0x00000021;
			break;
	}
	return 0xFFFFFFFF;
}

int func_67()
{
	if (bLocal_81)
	{
		if (unk_0xEB751B41BC4080D4(iLocal_103))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_68(int iParam0)
{
	iLocal_46 = iParam0;
	iLocal_48 = 0x00000000;
}

int func_69()
{
	if (!unk_0x762119754C50557A(iLocal_103))
	{
		if (bLocal_79)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
			{
				if (!func_70(iLocal_50))
				{
					if (iLocal_271 == 0xFFFFFFFF)
					{
						iLocal_271 = unk_0x1C0640BA9A7327B3();
					}
				}
				else if (iLocal_271 != 0xFFFFFFFF)
				{
					iLocal_271 = 0xFFFFFFFF;
				}
			}
		}
		if (!bLocal_79)
		{
			if (iLocal_96 != 0xFFFFFFFF)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iLocal_96]))
				{
					if (!func_70(iLocal_50))
					{
						if (iLocal_271 == 0xFFFFFFFF)
						{
							iLocal_271 = unk_0x1C0640BA9A7327B3();
						}
					}
					else if (iLocal_271 != 0xFFFFFFFF)
					{
						iLocal_271 = 0xFFFFFFFF;
					}
				}
			}
		}
		if (iLocal_271 != 0xFFFFFFFF)
		{
			if ((unk_0x1C0640BA9A7327B3() - iLocal_271) > 0x00000BB8)
			{
				unk_0x6DAD7906B73F064D(&(iLocal_49[0x00000000]));
				unk_0x6DAD7906B73F064D(&(iLocal_49[0x00000001]));
				unk_0x1BF8B16C32704027(iLocal_50, -1000f, 0x00000001);
				unk_0x20641932E5104B25(iLocal_50, 0x00000001, 0x00000000);
				unk_0x046C362CF15F1935(&iLocal_50);
				return 0x00000001;
			}
		}
	}
	else
	{
		if (iLocal_271 != 0xFFFFFFFF)
		{
			iLocal_271 = 0xFFFFFFFF;
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && SYSTEM::VDIST(unk_0xE925E52ACABA4CE7(iLocal_103), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 300f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_70(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) < 150f)
		{
			return 0x00000001;
		}
		else if (!unk_0x03068588A1FCED1A(iParam0) && SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) < 300f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_71()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_295 == 0xFFFFFFFF)
	{
		iLocal_295 = unk_0x1C0640BA9A7327B3();
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		switch (iLocal_48)
		{
			case 0x00000000:
				bLocal_80 = 0x00000001;
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) || !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
				{
					if (func_27() < 30f && !unk_0xEB6A8945D1AC98A1(Local_106[0x00000003 /*10*/]))
					{
						func_4(&Local_106, cLocal_105, "RESEC_SHT1", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				iVar0 = 0x00000000;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]) && unk_0xC844350D5D58C99A(iLocal_52))
					{
						if ((iVar0 != iLocal_96 || bLocal_79) || !unk_0x50B5F6F3C29E9380(iLocal_52, iLocal_49[iVar0]))
						{
							unk_0xA3BF0AA5A2608191(iLocal_49[iVar0]);
							unk_0xDD353D0E9C789D0E(&iLocal_54);
							if (unk_0x405E212DDE472467(iLocal_49[iVar0], 0x00000000))
							{
								if (iLocal_87)
								{
									if (unk_0x59F02DA2266A744C("move_injured_generic"))
									{
										unk_0x79C43E2BAC7C696F(iLocal_49[iVar0], "move_injured_generic", 0x3E800000);
										iLocal_88[iVar0] = 0x00000001;
									}
								}
								unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000100);
							}
							unk_0xBC43ED9FE28DB191(0x00000000);
							if (iLocal_88[iVar0])
							{
								unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000003E8, 0x00000BB8));
							}
							unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							unk_0x75ABDC5F81978924(iLocal_54);
							unk_0x78ADC381772E3D54(iLocal_49[iVar0], iLocal_54);
							unk_0xF82EA857DA10E0CD(&iLocal_54);
						}
						unk_0xAFF39FB306F8E232(iLocal_49[iVar0], 0x00000006, 0x00000000);
						unk_0xAFF39FB306F8E232(iLocal_49[iVar0], 0x00000000, 0x00000001);
						unk_0xAFF39FB306F8E232(iLocal_49[iVar0], 0x00000001, 0x00000000);
						unk_0x3CC33E4E9CE523F4(iLocal_49[iVar0], 0x00000001);
						unk_0x26A6B1686E33113F(iLocal_49[iVar0], 0x00000001);
						unk_0x11AD11297DC58CC7(iLocal_49[iVar0], 0x00000001);
					}
					iVar0++;
				}
				if ((unk_0xC844350D5D58C99A(iLocal_52) && unk_0xD59B17D2DFF98E26(iLocal_52)) && !unk_0xEB6A8945D1AC98A1(iLocal_49[iLocal_96]))
				{
					unk_0xA3BF0AA5A2608191(iLocal_49[iLocal_96]);
				}
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_48++;
				break;
			
			case 0x00000001:
				if (func_76(iLocal_96))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iLocal_96]))
					{
						unk_0xA3BF0AA5A2608191(iLocal_49[iLocal_96]);
						unk_0xDD353D0E9C789D0E(&iLocal_54);
						if (unk_0x405E212DDE472467(iLocal_49[iLocal_96], 0x00000000))
						{
							unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000100);
						}
						unk_0xBC43ED9FE28DB191(0x00000000);
						unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						unk_0x75ABDC5F81978924(iLocal_54);
						unk_0x78ADC381772E3D54(iLocal_49[iLocal_96], iLocal_54);
						unk_0xF82EA857DA10E0CD(&iLocal_54);
					}
					iLocal_48++;
				}
				break;
			
			case 0x00000002:
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) || !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
				{
					if (unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
					{
						if (Local_106[0x00000003 /*10*/] != iLocal_49[0x00000001])
						{
							func_75(&Local_106, 0x00000003);
							func_75(&Local_106, 0x00000004);
							func_74(&Local_106, 0x00000003, iLocal_49[0x00000001], "SECVANGUY1", 0x00000000, 0x00000001);
						}
					}
					iVar0 = 0x00000000;
					while (iVar0 < iLocal_49)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]))
						{
							if ((iLocal_47 == 0x00000002 && !iLocal_91[iVar0]) && !unk_0x437347B10A200C4B(iLocal_50, 0x00000000))
							{
								unk_0x5BCC146C60688877(iLocal_49[iVar0], iLocal_50, unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, -4f, 0f), 5f, 0x00000000);
								iLocal_91[iVar0] = 0x00000001;
							}
							if (((unk_0x762119754C50557A(iLocal_103) && !iLocal_91[iVar0]) && iLocal_47 == 0x00000003) && !bLocal_89)
							{
								unk_0x5BCC146C60688877(iLocal_49[iVar0], iLocal_50, unk_0xE925E52ACABA4CE7(iLocal_103), 5f, 0x00000000);
								iLocal_91[iVar0] = 0x00000001;
							}
							if (bLocal_89)
							{
								if (iLocal_91[iVar0])
								{
									unk_0xB3F77607A42FF835(iLocal_49[iVar0], 0x00000000);
									iLocal_91[iVar0] = 0x00000000;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x1C0640BA9A7327B3() - iLocal_292)) > unk_0x79833B02DBD2A244(10000f, 15000f))
					{
						if (!func_73() && func_27() < 30f)
						{
							if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000004))
							{
								if (func_4(&Local_106, cLocal_105, "RESEC_SHT2", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_292 = unk_0x1C0640BA9A7327B3();
								}
							}
						}
					}
					if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
					{
						if (!bLocal_79)
						{
							if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_50, 0x00000000) && (unk_0x1C0640BA9A7327B3() - iLocal_295) > 0x00001388)
							{
								if (func_27() > (30f + (30f / 10f)))
								{
									func_68(0x00000007);
								}
								if (func_27() > (30f / 2f) && !func_72())
								{
									if (!bLocal_79)
									{
										func_68(0x00000007);
									}
									else
									{
										func_68(0x00000006);
									}
								}
								if (iLocal_46 != 0x00000008)
								{
									iLocal_91[0x00000000] = 0x00000000;
									iLocal_91[0x00000001] = 0x00000000;
									iLocal_295 = 0xFFFFFFFF;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]))
			{
				if (iVar0 == 0x00000000)
				{
					iVar1 = 0x00001B58;
				}
				else
				{
					iVar1 = 0x00002328;
				}
				if (SYSTEM::TIMERA() > iVar1 && iLocal_88[iVar0])
				{
					unk_0x76D5D8AF296F50CE(iLocal_49[iVar0], 0x3E800000);
					iLocal_88[iVar0] = 0x00000000;
				}
			}
			iVar0++;
		}
	}
}

bool func_72()
{
	int iVar0;
	
	if ((unk_0x1C0640BA9A7327B3() - iLocal_282) > 0x000000FA)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			iVar0 = 0x00000000;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]))
				{
					if (unk_0xF649DD3BF44195C7(iLocal_49[iVar0], unk_0x16F2683693E537C9(), 0x00000013) && unk_0x6AB6A474D29FA7D8(iLocal_49[iVar0], unk_0x16F2683693E537C9()))
					{
						iLocal_281[iVar0] = 0x00000001;
					}
					else
					{
						iLocal_281[iVar0] = 0x00000000;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_281[0x00000000] || iLocal_281[0x00000001]);
}

int func_73()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_74(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_75(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

bool func_76(int iParam0)
{
	bool bVar0;
	
	if (unk_0xC844350D5D58C99A(iLocal_52))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iParam0]))
		{
			if (unk_0x50B5F6F3C29E9380(iLocal_52, iLocal_49[iParam0]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_49[iParam0], "weapons@holster_1h", "holster", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_49[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0x15AFB6CBDE990FB6(iLocal_52, 0x00000001, 0x00000001);
						unk_0xF690C84DADBB3551(&iLocal_52);
					}
				}
				else
				{
					unk_0x11AD11297DC58CC7(iLocal_49[iParam0], 0x00000001);
					unk_0xC6EB89C59F2AF6B8(iLocal_49[iParam0], "weapons@holster_1h", "holster", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
		}
	}
	bVar0 = (!unk_0xC844350D5D58C99A(iLocal_52) || (unk_0xC844350D5D58C99A(iLocal_52) && !unk_0x50B5F6F3C29E9380(iLocal_52, iLocal_49[iParam0])));
	if (bVar0)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iParam0]))
		{
			unk_0x11AD11297DC58CC7(iLocal_49[iParam0], 0x00000000);
		}
	}
	return bVar0;
}

void func_77(int iParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3[2];
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar0 = { func_35(unk_0x5293C88BD2F4DE13(iLocal_50, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001))) };
		fVar1 = ((unk_0xD9522BA9E27E1349(iLocal_50) + unk_0xE7D606C557C86100(vVar0.x, vVar0.y)) + 45f);
		fVar2 = ((unk_0xD9522BA9E27E1349(iLocal_50) + unk_0xE7D606C557C86100(vVar0.x, vVar0.y)) - 45f);
		vVar3[0x00000000 /*3*/] = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), fVar1, 0f, 4.5f, 0f) };
		vVar3[0x00000001 /*3*/] = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), fVar2, 0f, 4.5f, 0f) };
		func_78(&fVar1);
		func_78(&fVar2);
		if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_293) > 2f)
		{
			bVar5 = 0x00000001;
		}
		iVar4 = 0x00000000;
		while (iVar4 < iLocal_49)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar4]))
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_49[iVar4], 0x00000001), vVar3[iVar4 /*3*/]) > 2f)
				{
					bVar5 = 0x00000001;
				}
			}
			iVar4++;
		}
		if (bVar5)
		{
			iVar4 = 0x00000000;
			while (iVar4 < iLocal_49)
			{
				if ((((((!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar4]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_49[iVar4], 0x00000001), vVar3[iVar4 /*3*/]) > 2f) && (unk_0x1C0640BA9A7327B3() - iLocal_294[iVar4]) > 0x000003E8) && !unk_0x405E212DDE472467(iLocal_49[iVar4], 0x00000000)) && !iLocal_281[iVar4]) && (iParam0 == 0xFFFFFFFF || iParam0 == iVar4))
				{
					if (bParam1)
					{
						if (func_72())
						{
							vLocal_293 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						}
						unk_0xDD353D0E9C789D0E(&iVar6);
						if (func_72() || func_38(vLocal_293))
						{
							unk_0xE20F700AC2AFCA92(0x00000000, vVar3[iVar4 /*3*/], unk_0x16F2683693E537C9(), 2f, 0x00000000, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000001);
						}
						else
						{
							unk_0x4AA5B7135D59B3E5(0x00000000, vVar3[iVar4 /*3*/], vLocal_293, 2f, 0x00000000, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C);
							unk_0x731C6942D48648D6(0x00000000, vLocal_293, 0xFFFFFFFF, 0x00000001, 0x00000000);
						}
						unk_0x75ABDC5F81978924(iVar6);
						unk_0x78ADC381772E3D54(iLocal_49[iVar4], iVar6);
						unk_0xF82EA857DA10E0CD(&iVar6);
					}
					iLocal_294[iVar4] = unk_0x1C0640BA9A7327B3();
				}
				iVar4++;
			}
		}
	}
}

void func_78(float fParam0)
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_79(int iParam0)
{
	float fVar0;
	
	if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
	{
		switch (iLocal_48)
		{
			case 0x00000000:
				if (!bLocal_79)
				{
					unk_0x11AD11297DC58CC7(iParam0, 0x00000001);
					unk_0xA3BF0AA5A2608191(iParam0);
					vLocal_283 = { unk_0xBF584557291FDD31(iLocal_50, 0x00000000) };
					vLocal_284 = { unk_0x835730A2D89F6093(iLocal_50, 0x00000002) };
					vLocal_285 = { unk_0x1BB04F10296A1C5E("random@security_van", "sec_case_into_van_panic", vLocal_283, vLocal_284, 0x00000000, 0x00000002) };
					if (((!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) && !unk_0x437347B10A200C4B(iLocal_49[0x00000001], 0x00000000)) && !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000])) && !unk_0x437347B10A200C4B(iLocal_49[0x00000000], 0x00000000))
					{
						if (func_27() < 20f)
						{
							if (bLocal_80)
							{
								func_4(&Local_106, cLocal_105, "RESEC_REC", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						if (unk_0x762119754C50557A(iLocal_103))
						{
							if (bLocal_80)
							{
								unk_0x96167B03C5A77156(iParam0, unk_0xE925E52ACABA4CE7(iLocal_103), 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
							}
							else
							{
								unk_0x96167B03C5A77156(iParam0, unk_0xE925E52ACABA4CE7(iLocal_103), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
							}
							iLocal_48++;
						}
						else
						{
							func_85(iParam0);
							iLocal_48 = 0x00000002;
						}
					}
					else if (!unk_0xEB6A8945D1AC98A1(iParam0))
					{
						if (unk_0x762119754C50557A(iLocal_103))
						{
							unk_0x96167B03C5A77156(iParam0, unk_0xE925E52ACABA4CE7(iLocal_103), 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
							iLocal_48++;
						}
						else
						{
							func_85(iParam0);
							iLocal_48 = 0x00000002;
						}
					}
				}
				else
				{
					iLocal_48 = 0x00000004;
				}
				break;
			
			case 0x00000001:
				if (!unk_0xEB6A8945D1AC98A1(iParam0) && unk_0x762119754C50557A(iLocal_103))
				{
					if ((unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0xE925E52ACABA4CE7(iLocal_103), 0x00000001) < 2f && !unk_0x869EFD0BC0868856(iParam0)) && (unk_0x1C0640BA9A7327B3() - iLocal_102) > 0x00000BB8)
					{
						if (unk_0x03A10A5707B2BB1F(iParam0, 0x00000004))
						{
							unk_0x5745EA6329A91E29(iParam0, joaat("weapon_unarmed"), 0x00000001);
						}
						unk_0x40B7230FD4C59AA2(iLocal_103);
						func_85(iParam0);
						unk_0x5745EA6329A91E29(iParam0, joaat("weapon_unarmed"), 0x00000001);
						bLocal_81 = 0x00000000;
						iLocal_96 = iLocal_95;
						iLocal_48++;
					}
				}
				break;
			
			case 0x00000002:
				if (!unk_0xEB6A8945D1AC98A1(iParam0) && unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
				{
					if (unk_0xD1960163A3042274(iParam0, 0x2A89B8A7) != 0x00000001)
					{
						if (bLocal_80)
						{
							unk_0x96167B03C5A77156(iParam0, vLocal_285, 2f, 0xFFFFFFFF, 0.1f, 0x00000200, vLocal_284.z);
						}
						else
						{
							unk_0x96167B03C5A77156(iParam0, vLocal_285, 1f, 0xFFFFFFFF, 0.1f, 0x00000200, vLocal_284.z);
						}
						iLocal_48++;
					}
				}
				break;
			
			case 0x00000003:
				if (!unk_0xEB6A8945D1AC98A1(iParam0))
				{
					if (unk_0x762119754C50557A(iLocal_103))
					{
						iLocal_48 = 0x00000000;
					}
					else
					{
						fVar0 = unk_0xD9522BA9E27E1349(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (vLocal_284.z > 180f)
						{
							vLocal_284.z = (vLocal_284.z - 360f);
						}
						if (vLocal_284.z <= -180f)
						{
							vLocal_284.z = (vLocal_284.z + 360f);
						}
						if (SYSTEM::VDIST(vLocal_285, unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) < 0.3f)
						{
							if (unk_0x755FF954DAE327E1((fVar0 - vLocal_284.z)) < 15f)
							{
								unk_0x33B89BCE228F08FC(iParam0, -8f);
								unk_0xA3BF0AA5A2608191(iParam0);
								bLocal_288 = 0x00000001;
								iLocal_286 = unk_0xE9744DB7B8CA6965(vLocal_283, vLocal_284, 0x00000002);
								if (bLocal_80)
								{
									unk_0x915804B434753CBD(iParam0, iLocal_286, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 0x00000003, 0x00000000, 4f, 0x00000000);
									unk_0xE14EC663EED44AD5(iLocal_50, iLocal_286, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0x00000000, -1000f);
								}
								else
								{
									unk_0x915804B434753CBD(iParam0, iLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 0x00000003, 0x00000000, 4f, 0x00000000);
									unk_0xE14EC663EED44AD5(iLocal_50, iLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0x00000000, -1000f);
								}
								unk_0xF895E10BF4C72645(iParam0, 0x00000000, 0x00000000);
								iLocal_48++;
							}
						}
						else if (unk_0x03068588A1FCED1A(iParam0) && !unk_0x8E28E832BEAC3DCE(vLocal_283, 2f))
						{
							unk_0xA47B46945FF6DE74(iParam0, vLocal_283, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						}
					}
				}
				break;
			
			case 0x00000004:
				if (unk_0x69DF961355195C3C(iLocal_286))
				{
					if (bLocal_80)
					{
						fLocal_296 = 0.42f;
					}
					else
					{
						fLocal_296 = 0.3893f;
					}
					if (bLocal_80)
					{
						fLocal_297 = 0.52f;
					}
					else
					{
						fLocal_297 = 0.546243f;
					}
					if (!bLocal_79)
					{
						if ((unk_0xC844350D5D58C99A(iLocal_52) && unk_0x50B5F6F3C29E9380(iLocal_52, iParam0)) && unk_0xA45992A6CE82FB43(iLocal_286) > fLocal_296)
						{
							if (!unk_0x50B5F6F3C29E9380(iLocal_52, iLocal_50))
							{
								unk_0x15AFB6CBDE990FB6(iLocal_52, 0x00000001, 0x00000001);
								unk_0x20641932E5104B25(iLocal_52, 0x00000000, 0x00000000);
								unk_0x9F528B1B53FBC5D9(iLocal_52, iLocal_50, 0x00000000, unk_0x5293C88BD2F4DE13(iLocal_50, unk_0x68F4C0EC296D3901(iLocal_52, 0x00000001)), 90f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
							}
							bLocal_79 = 0x00000001;
						}
					}
					else if (unk_0xA45992A6CE82FB43(iLocal_286) > fLocal_297)
					{
						unk_0x1BF8B16C32704027(iLocal_50, -4f, 0x00000001);
						unk_0xA3BF0AA5A2608191(iParam0);
						if (unk_0xC844350D5D58C99A(iLocal_52))
						{
							iLocal_76 = 0x00000000;
							unk_0x152BCACCF710B36E(iLocal_50, 0x00000002, 0x00000001);
							unk_0x152BCACCF710B36E(iLocal_50, 0x00000003, 0x00000001);
							unk_0x11AD11297DC58CC7(iParam0, 0x00000000);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 0x00000005:
				if ((unk_0x69DF961355195C3C(iLocal_286) && unk_0xA45992A6CE82FB43(iLocal_286) > fLocal_297) || !unk_0x69DF961355195C3C(iLocal_286))
				{
					if (!bLocal_80)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]))
						{
							unk_0x5B1D360B9C6F0A09(iLocal_49[0x00000000], iLocal_50, 0xFFFFFFFF, 0xFFFFFFFF, 1f, 0x00000001, 0x00000000);
						}
					}
					iLocal_48++;
				}
				break;
			
			case 0x00000006:
				if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
				{
					if (bLocal_80)
					{
						func_68(0x00000006);
					}
					else
					{
						func_68(0x00000004);
					}
				}
				else
				{
					func_68(0x00000008);
				}
				break;
			}
	}
	if (!unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) || !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
		{
			func_68(0x00000008);
		}
	}
	if ((!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) || !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001])) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!bLocal_79)
		{
			if ((((((func_27() < 10f && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006)) && func_72()) || ((func_27() < 20f && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006)) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))) || (func_27() < 5f && bLocal_80)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && func_80(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))) || ((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1())) && func_80(unk_0x728870EB733D12A1())))
			{
				func_68(0x00000008);
			}
		}
	}
	if (iLocal_46 != 0x00000007)
	{
		if (bLocal_79)
		{
			if (unk_0x69DF961355195C3C(iLocal_286))
			{
				unk_0x1BF8B16C32704027(iLocal_50, -8f, 0x00000001);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			unk_0x11AD11297DC58CC7(iParam0, 0x00000000);
		}
	}
	if ((unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && iLocal_46 != 0x00000007) && unk_0x69DF961355195C3C(iLocal_286))
	{
		unk_0x1BF8B16C32704027(iLocal_50, -8f, 0x00000001);
	}
}

int func_80(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var2;
	vector3 vVar3[4];
	vector3 vVar4[4];
	vector3 vVar5[4];
	vector3 vVar6[4];
	var uVar7;
	float fVar8;
	float fVar9;
	
	iVar0 = 0x00000000;
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iLocal_50))
	{
		uVar7 = 0x00000004;
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var1, &Var2);
		vVar3[0x00000000 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var1, Var2.f_1, 0f) };
		vVar3[0x00000001 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var2, Var2.f_1, 0f) };
		vVar3[0x00000002 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var2, Var1.f_1, 0f) };
		vVar3[0x00000003 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var1, Var1.f_1, 0f) };
		fVar8 = -3.7f;
		fVar9 = 1.35f;
		vVar4[0x00000000 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, (-fVar9 - 0.25f), fVar8, 0f) };
		vVar4[0x00000001 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, (fVar9 + 0.25f), fVar8, 0f) };
		vVar4[0x00000002 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, (fVar9 - 0.25f), (fVar8 - 1.55f), 0f) };
		vVar4[0x00000003 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, (-fVar9 + 0.25f), (fVar8 - 1.55f), 0f) };
		vVar5[0x00000000 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, -fVar9, 0.5f, 0f) };
		vVar5[0x00000001 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, (-fVar9 - 0.75f), 0.5f, 0f) };
		vVar5[0x00000002 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, (-fVar9 - 0.75f), 1.5f, 0f) };
		vVar5[0x00000003 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, -fVar9, 1.5f, 0f) };
		vVar6[0x00000000 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, fVar9, 0.5f, 0f) };
		vVar6[0x00000001 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, (fVar9 + 0.75f), 0.5f, 0f) };
		vVar6[0x00000002 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, (fVar9 + 0.75f), 1.5f, 0f) };
		vVar6[0x00000003 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, fVar9, 1.5f, 0f) };
		if (!bLocal_79)
		{
			if (func_81(&vVar4, &vVar3, &uVar7))
			{
				iVar0 = 0x00000001;
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0xC42A92762C58E1B9(iLocal_49[0x00000000], iLocal_50, 0x00000001))
		{
			if (func_81(&vVar5, &vVar3, &uVar7))
			{
				iVar0 = 0x00000001;
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) && !unk_0xC42A92762C58E1B9(iLocal_49[0x00000001], iLocal_50, 0x00000001))
		{
			if (func_81(&vVar6, &vVar3, &uVar7))
			{
				iVar0 = 0x00000001;
			}
		}
	}
	return iVar0;
}

int func_81(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0x00000000;
		}
		iVar1 = 0x00000000;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0x00000000;
			}
			if (func_82(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 0x00000001;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_82(vector3 vParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = vParam0.x;
	fVar1 = Param1;
	fVar2 = Param3;
	fVar3 = Param5;
	fVar4 = vParam0.y;
	fVar5 = Param1.f_1;
	fVar6 = Param3.f_1;
	fVar7 = Param5.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0x00000000;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_84(fVar0, fVar1) || fVar11 > func_83(fVar0, fVar1)) || fVar11 < func_84(fVar2, fVar3)) || fVar11 > func_83(fVar2, fVar3))
	{
		return 0x00000000;
	}
	if (((fVar12 < func_84(fVar4, fVar5) || fVar12 > func_83(fVar4, fVar5)) || fVar12 < func_84(fVar6, fVar7)) || fVar12 > func_83(fVar6, fVar7))
	{
		return 0x00000000;
	}
	*uParam7 = fVar11;
	uParam7->f_1 = fVar12;
	uParam7->f_2 = vParam0.z;
	return 0x00000001;
}

float func_83(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_84(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_85(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0xC844350D5D58C99A(iLocal_52))
		{
			iLocal_52 = unk_0x7707E48765093646(iLocal_75, vLocal_63, 0x00000001, 0x00000001, 0x00000000);
			unk_0x98868AF51859FC75(iLocal_52, 0x00000000);
		}
		if (unk_0xC844350D5D58C99A(iLocal_52))
		{
			unk_0x9F528B1B53FBC5D9(iLocal_52, iParam0, unk_0x4A089F2B762B8D33(iParam0, 0x00006F06), vLocal_68, vLocal_69, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
		}
	}
}

void func_86()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]))
				{
					unk_0x11AD11297DC58CC7(iLocal_49[iVar0], 0x00000001);
				}
				iVar0++;
			}
			bLocal_80 = 0x00000001;
			if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
			{
				if (unk_0xC844350D5D58C99A(func_89()))
				{
					if (!unk_0xEB6A8945D1AC98A1(func_89()))
					{
						if (unk_0xA30B8362589C124A(iLocal_50, 0xFFFFFFFF, 0x00000000) != func_89() && unk_0xBBA8A868118C90ED(iLocal_50, 0xFFFFFFFF, 0x00000000))
						{
							unk_0x5B1D360B9C6F0A09(func_89(), iLocal_50, 0x00004E20, 0xFFFFFFFF, 2f, 0x00000001, 0x00000000);
						}
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) && func_89() != iLocal_49[0x00000001])
				{
					if (unk_0xA30B8362589C124A(iLocal_50, 0x00000000, 0x00000000) != iLocal_49[0x00000001] && unk_0xBBA8A868118C90ED(iLocal_50, 0x00000000, 0x00000000))
					{
						unk_0x5B1D360B9C6F0A09(iLocal_49[0x00000001], iLocal_50, 0xFFFFFFFF, 0x00000000, 2f, 0x00000001, 0x00000000);
					}
				}
				iLocal_48++;
			}
			else
			{
				func_68(0x00000008);
			}
			break;
		
		case 0x00000001:
			if (func_88())
			{
				if (unk_0xC844350D5D58C99A(func_89()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x89258193691A7600(func_89(), iLocal_50, unk_0x16F2683693E537C9(), 0x00000008, 50f, 0x000C0034, 100f, 5f, 0x00000001);
					iLocal_48++;
				}
			}
			break;
		
		case 0x00000002:
			if (func_87())
			{
				if (unk_0xC844350D5D58C99A(func_89()))
				{
					unk_0x60274E99F9B27DEA(func_89(), iLocal_50, 0x00000000, 0x00000005, 0f, 0x000C0034, 100f, 100f, 0x00000001);
					iLocal_48++;
				}
			}
			break;
		
		case 0x00000003:
			if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
			{
				if (unk_0x9C66D99E63E8E24C(iLocal_50) < 2f)
				{
					func_68(0x00000008);
				}
			}
			break;
	}
	if ((unk_0xC844350D5D58C99A(iLocal_50) && unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(iLocal_50, 0xFFFFFFFF, 0x00000000))) && (unk_0x437347B10A200C4B(unk_0xA30B8362589C124A(iLocal_50, 0xFFFFFFFF, 0x00000000), 0x00000000) || unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A(iLocal_50, 0xFFFFFFFF, 0x00000000))))
	{
		iVar1 = 0x00000000;
		if (unk_0xA30B8362589C124A(iLocal_50, 0xFFFFFFFF, 0x00000000) == iLocal_49[0x00000000])
		{
			iVar1 = 0x00000001;
		}
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 100f)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar1]) && unk_0xD1960163A3042274(iLocal_49[iVar1], 0x0E763797) != 0x00000001)
			{
				unk_0xBAFED2F6486F771A(iLocal_49[iVar1], 0x00000002, 0x00000001);
				unk_0xDD353D0E9C789D0E(&iVar2);
				unk_0x16A6C233289238AA(0x00000000, iLocal_50, 0x00000000);
				unk_0x89258193691A7600(0x00000000, iLocal_50, unk_0x16F2683693E537C9(), 0x00000008, 50f, 0x000C0034, 100f, 5f, 0x00000001);
				unk_0x75ABDC5F81978924(iVar2);
				unk_0x78ADC381772E3D54(iLocal_49[iVar1], iVar2);
				unk_0xF82EA857DA10E0CD(&iVar2);
			}
		}
		else
		{
			func_68(0x00000008);
		}
	}
	if (((((((!unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) || unk_0x762119754C50557A(iLocal_103)) || iLocal_47 == 0x00000003) || unk_0x7B5606C651AB51B5(iLocal_50, 0x00000000, 0x00001B58)) || unk_0x7B5606C651AB51B5(iLocal_50, 0x00000003, 0x00007530)) || unk_0x7B5606C651AB51B5(iLocal_50, 0x00000002, 0x00007530)) || unk_0x7B5606C651AB51B5(iLocal_50, 0x00000001, 0x00009C40)) || (iLocal_48 > 0x00000001 && !func_88()))
	{
		if (!func_88())
		{
		}
		func_68(0x00000008);
	}
}

int func_87()
{
	if (unk_0xC844350D5D58C99A(iLocal_50))
	{
		if (!unk_0x437347B10A200C4B(iLocal_50, 0x00000000))
		{
			if (((((unk_0x7F6DC62EA9922664(iLocal_50) < 0x0000012C || unk_0x6EE94F60DA2A2273(iLocal_50) < 200f) || (unk_0x464B3D84B739AE72(iLocal_50, 0x00000000, 0x00000000) && unk_0x464B3D84B739AE72(iLocal_50, 0x00000001, 0x00000000))) || (unk_0x464B3D84B739AE72(iLocal_50, 0x00000004, 0x00000000) && unk_0x464B3D84B739AE72(iLocal_50, 0x00000005, 0x00000000))) || (unk_0x464B3D84B739AE72(iLocal_50, 0x00000000, 0x00000000) && unk_0x464B3D84B739AE72(iLocal_50, 0x00000004, 0x00000000))) || (unk_0x464B3D84B739AE72(iLocal_50, 0x00000001, 0x00000000) && unk_0x464B3D84B739AE72(iLocal_50, 0x00000005, 0x00000000)))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_88()
{
	int iVar0;
	
	iVar0 = 0x00000001;
	if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0x437347B10A200C4B(iLocal_49[0x00000000], 0x00000000))
		{
			if (!unk_0xC42A92762C58E1B9(iLocal_49[0x00000000], iLocal_50, 0x00000000))
			{
				iVar0 = 0x00000000;
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) && !unk_0x437347B10A200C4B(iLocal_49[0x00000001], 0x00000000))
		{
			if (!unk_0xC42A92762C58E1B9(iLocal_49[0x00000001], iLocal_50, 0x00000000))
			{
				iVar0 = 0x00000000;
			}
		}
	}
	else
	{
		iVar0 = 0x00000000;
	}
	return iVar0;
}

int func_89()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0x437347B10A200C4B(iLocal_49[0x00000000], 0x00000000))
	{
		return iLocal_49[0x00000000];
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) && !unk_0x437347B10A200C4B(iLocal_49[0x00000001], 0x00000000))
	{
		return iLocal_49[0x00000001];
	}
	return 0x00000000;
}

void func_90()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_48)
	{
		case 0x00000000:
			if (!bLocal_79)
			{
				if (unk_0xC844350D5D58C99A(iLocal_52) && unk_0xD59B17D2DFF98E26(iLocal_52))
				{
					unk_0x15AFB6CBDE990FB6(iLocal_52, 0x00000001, 0x00000001);
				}
			}
			if ((!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) || !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001])) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (func_27() < 20f)
				{
					func_4(&Local_106, cLocal_105, "RESEC_FFLEE", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				iVar0 = 0x00000000;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]))
					{
						unk_0xAFF39FB306F8E232(iLocal_49[iVar0], 0x00000011, 0x00000001);
						unk_0xBAFED2F6486F771A(iLocal_49[iVar0], 0x00000080, 0x00000001);
						unk_0xBAFED2F6486F771A(iLocal_49[iVar0], 0x00000010, 0x00000001);
						unk_0xAFF39FB306F8E232(iLocal_49[iVar0], 0x00000001, 0x00000000);
						unk_0xDD353D0E9C789D0E(&iVar1);
						if (unk_0x405E212DDE472467(iLocal_49[iVar0], 0x00000001))
						{
							unk_0x75CDA8644CD3B5F5(iLocal_49[iVar0], 0x00000000, 0x00000100);
						}
						unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iVar1);
						unk_0x78ADC381772E3D54(iLocal_49[iVar0], iVar1);
						unk_0xF82EA857DA10E0CD(&iVar1);
					}
					iVar0++;
				}
			}
			bLocal_83 = 0x00000001;
			iLocal_48++;
			break;
		
		case 0x00000001:
			if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
			{
				if (func_91(iLocal_50, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
				{
					iLocal_48++;
				}
			}
			break;
	}
}

int func_91(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
	if (iParam4 || !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < iVar1)
		{
			iVar2 = func_93(iParam0, (iVar0 - 0x00000001), bParam6, iParam7);
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x16F2683693E537C9())
				{
				}
				else if (bParam2)
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						iVar3 = unk_0x83FACCC48B68F9D1(iVar2);
						if (((!unk_0xEB6A8945D1AC98A1(iVar2) && iVar3 != func_10()) && func_92(iVar3, 0x00000001, 0x00000001)) || iParam8)
						{
							if (unk_0x179932739160BA96(unk_0x83FACCC48B68F9D1(iVar2)) == 0x00000000)
							{
								if (!bParam5)
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
				}
				else if (iParam1 == 0x00000000)
				{
					return 0x00000000;
				}
				else if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					return 0x00000000;
				}
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

int func_92(int iParam0, bool bParam1, bool bParam2)
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

int func_93(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0xBBA8A868118C90ED(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, iParam1);
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xD1960163A3042274(iVar0, 0x1AE73569) == 0x00000001 || unk_0xD1960163A3042274(iVar0, 0xCE98FBB3) == 0x00000001)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, 0x00000000), unk_0x68F4C0EC296D3901(iVar0, 0x00000000)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = 0xFFFFFFFF;
		}
	}
	return iVar0;
}

void func_94()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
	{
		switch (iLocal_48)
		{
			case 0x00000000:
				if (func_4(&Local_106, cLocal_105, "RESEC_CAR1", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(iLocal_52) && unk_0xD59B17D2DFF98E26(iLocal_52))
					{
						if (!unk_0x50B5F6F3C29E9380(iLocal_52, iLocal_49[0x00000000]))
						{
							func_95(0x00000000);
						}
						else
						{
							unk_0xA3BF0AA5A2608191(iLocal_49[0x00000000]);
						}
						if (!unk_0x50B5F6F3C29E9380(iLocal_52, iLocal_49[0x00000001]))
						{
							func_95(0x00000001);
						}
						else
						{
							unk_0xA3BF0AA5A2608191(iLocal_49[0x00000001]);
						}
						iLocal_48++;
					}
					else
					{
						func_95(0x00000000);
						func_95(0x00000001);
						iLocal_48 = 0x00000002;
					}
				}
				break;
			
			case 0x00000001:
				if (func_76(iLocal_96))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iLocal_96]))
					{
						func_95(iLocal_96);
					}
					iLocal_48++;
				}
				break;
			
			case 0x00000002:
				if (!func_73())
				{
					if (func_4(&Local_106, cLocal_105, "RESEC_CAR2", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
					{
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_48++;
					}
				}
				break;
			
			case 0x00000003:
				if ((SYSTEM::TIMERA() > 0x00002EE0 && !func_73()) && func_4(&Local_106, cLocal_105, "RESEC_CAR3", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
				{
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_48++;
				}
				break;
			
			case 0x00000004:
				if ((SYSTEM::TIMERA() > 0x00001B58 && !func_73()) && func_4(&Local_106, cLocal_105, "RESEC_CAR4", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
				{
					SYSTEM::SETTIMERA(0x00000000);
					func_68(0x00000008);
				}
				break;
			}
	}
	if (iLocal_48 > 0x00000000)
	{
		func_77(0xFFFFFFFF, 0x00000001);
	}
	if (unk_0xC844350D5D58C99A(iLocal_51))
	{
		if (!unk_0x437347B10A200C4B(iLocal_51, 0x00000000) && unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
		{
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_51, 0x00000001), unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001)) > 10f)
			{
				func_68(0x00000007);
			}
		}
		if ((unk_0x437347B10A200C4B(iLocal_51, 0x00000000) || !unk_0xDF1306B443CD3D15(iLocal_51, 0x00000000)) || (!unk_0x10BA239D3B8FDC7F(iLocal_51, 0x42B40000) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_51, 0x00000001)))
		{
			if (!func_80(iLocal_51))
			{
				func_68(0x00000007);
			}
			else
			{
				func_68(0x00000008);
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_49[0x00000000], unk_0x16F2683693E537C9(), 0x00000001))
		{
			func_68(0x00000008);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_49[0x00000001], unk_0x16F2683693E537C9(), 0x00000001))
		{
			func_68(0x00000008);
		}
	}
	if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (iLocal_86)
		{
			func_68(0x00000008);
		}
	}
	if (bLocal_89)
	{
		func_68(0x00000008);
	}
	if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && func_72()) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000007))
	{
		func_68(0x00000002);
	}
	if (!unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
	{
		func_68(0x00000005);
	}
}

void func_95(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xA3BF0AA5A2608191(iLocal_49[iParam0]);
		unk_0xDD353D0E9C789D0E(&iLocal_54);
		if (unk_0x405E212DDE472467(iLocal_49[iParam0], 0x00000000))
		{
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000100);
		}
		unk_0xBC43ED9FE28DB191(0x00000000);
		unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
		unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
		unk_0x75ABDC5F81978924(iLocal_54);
		unk_0x78ADC381772E3D54(iLocal_49[iParam0], iLocal_54);
		unk_0xF82EA857DA10E0CD(&iLocal_54);
		if (iLocal_97 == 0x00000000)
		{
			iLocal_97 = unk_0x7D0D8317DC09FF68(0x00000076, unk_0x68F4C0EC296D3901(iLocal_49[iParam0], 0x00000001), -1f);
		}
	}
}

void func_96()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]))
			{
				unk_0x11AD11297DC58CC7(iLocal_49[0x00000000], 0x00000001);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
			{
				unk_0x11AD11297DC58CC7(iLocal_49[0x00000001], 0x00000001);
			}
			if (func_103())
			{
				if (func_4(&Local_106, cLocal_105, "RESEC_ATT1", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
				{
					SYSTEM::SETTIMERA(0x00000000);
					func_68(0x00000008);
				}
			}
			else if ((!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001])) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (func_102() || func_101())
				{
					func_4(&Local_106, cLocal_105, "RESEC_ENT1", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000004))
				{
					func_4(&Local_106, cLocal_105, "RESEC_WEP1", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_4(&Local_106, cLocal_105, "RESEC_WARN", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				SYSTEM::SETTIMERA(0x00000000);
				if (unk_0xC844350D5D58C99A(iLocal_52) && unk_0xD59B17D2DFF98E26(iLocal_52))
				{
					if (!unk_0x50B5F6F3C29E9380(iLocal_52, iLocal_49[0x00000000]))
					{
						func_95(0x00000000);
					}
					else
					{
						unk_0xA3BF0AA5A2608191(iLocal_49[0x00000000]);
					}
					if (!unk_0x50B5F6F3C29E9380(iLocal_52, iLocal_49[0x00000001]))
					{
						func_95(0x00000001);
					}
					else
					{
						unk_0xA3BF0AA5A2608191(iLocal_49[0x00000001]);
					}
					iLocal_48++;
				}
				else
				{
					func_95(0x00000000);
					func_95(0x00000001);
					iLocal_48 = 0x00000002;
				}
			}
			break;
		
		case 0x00000001:
			if (func_76(iLocal_96))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iLocal_96]))
				{
					func_95(iLocal_96);
				}
				iLocal_48++;
			}
			break;
		
		case 0x00000002:
			if (!func_100())
			{
				if (!func_99(iLocal_50, 0x000003E8) && SYSTEM::TIMERA() > 0x00002710)
				{
					bVar0 = 0x00000001;
				}
				else if (SYSTEM::TIMERA() > 0x00001B58)
				{
					SYSTEM::SETTIMERA(0x00001B58);
				}
				if (SYSTEM::TIMERA() > 0x00001388)
				{
					if (func_102())
					{
						bVar0 = 0x00000001;
					}
				}
				if (SYSTEM::TIMERA() > 0x00002710)
				{
					if (func_101())
					{
						bVar0 = 0x00000001;
					}
				}
				iVar1 = 0x00000000;
				while (iVar1 < iLocal_49)
				{
					if (!func_99(iLocal_49[iVar1], 0x000003E8) && (func_27() < 2f && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006)))
					{
						bVar0 = 0x00000001;
					}
					if (!unk_0x437347B10A200C4B(iLocal_49[iVar1], 0x00000000))
					{
						if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_49[iVar1]) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_49[iVar1]))
						{
							bVar0 = 0x00000001;
						}
					}
					iVar1++;
				}
				func_77(0xFFFFFFFF, 0x00000001);
				if (IntToFloat((unk_0x1C0640BA9A7327B3() - iLocal_292)) > unk_0x79833B02DBD2A244(5000f, 7500f))
				{
					if (!func_73())
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_WARN", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_292 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
				if (bVar0)
				{
					func_97();
					func_68(0x00000008);
				}
			}
			break;
	}
	iVar2 = 0x00000000;
	while (iVar2 < iLocal_49)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xC844350D5D58C99A(iLocal_49[iVar2]))
		{
			if ((unk_0xEB6A8945D1AC98A1(iLocal_49[iVar2]) || unk_0x437347B10A200C4B(iLocal_49[iVar2], 0x00000000)) && unk_0xB87D13D0C064E9D1(iLocal_49[iVar2], unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_68(0x00000008);
			}
		}
		iVar2++;
	}
	if ((unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) || unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001])) || bLocal_89)
	{
		func_68(0x00000008);
	}
	if ((unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && func_72())
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_50, unk_0x16F2683693E537C9(), 0x00000001))
		{
			func_68(0x00000008);
		}
	}
	if (!unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
	{
		func_68(0x00000005);
	}
	if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006)) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		func_68(0x00000008);
	}
	if (func_27() > 20f || ((!iLocal_281[0x00000000] && !iLocal_281[0x00000001]) && func_27() > 5f))
	{
		func_68(0x00000007);
	}
}

void func_97()
{
	Global_4CD7 = 0x00000000;
	func_98();
}

void func_98()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC844350D5D58C99A(iParam0))
		{
			if ((unk_0xEC560E589DF8370E(iParam0) && !unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0))) || (unk_0xE2F1E99DD161A861(iParam0) && unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0x00000000)))
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) > fLocal_290)
				{
					iVar0 = 0x00000001;
				}
				if ((unk_0x1C0640BA9A7327B3() - iLocal_291) > iParam1)
				{
					fLocal_290 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iParam0, 0x00000001));
					iLocal_291 = unk_0x1C0640BA9A7327B3();
				}
			}
		}
	}
	return iVar0;
}

int func_100()
{
	if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_50, 20f, 20f, 5f, 0x00000000, 0x00000001, 0x00000000) && !unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_101()
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, 1.7532f, 0.5984f), unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, 3.3477f, 3.5984f), 2.8f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]))
			{
				if ((!unk_0xC42A92762C58E1B9(iLocal_49[iVar0], iLocal_50, 0x00000000) && unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), iLocal_50)) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_49[iVar0], 0x00000001)) < 400f)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_102()
{
	if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()) == iLocal_50)
		{
			if (unk_0x3366C505CA31A0C9(unk_0x16F2683693E537C9()))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_103()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if ((!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && unk_0x12DE711B1C681E9E(iLocal_49[0x00000000], unk_0x16F2683693E537C9(), 20f, 20f, 5f, 0x00000000, 0x00000001, 0x00000000)) || (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) && unk_0x12DE711B1C681E9E(iLocal_49[0x00000001], unk_0x16F2683693E537C9(), 20f, 20f, 5f, 0x00000000, 0x00000001, 0x00000000)))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000004) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_104(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_105(var uParam0, vector3 vParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_135(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_106(uParam0, vParam1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_106(var uParam0, vector3 vParam1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	iVar0 = uParam2;
	if (unk_0x2EBF5002C6B6A06C(iVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_104(iVar0))
	{
		func_127();
	}
	if (!unk_0x8C74DE122769E1BF())
	{
		if (func_122(uParam0, bParam4, bParam6, 0x00000000))
		{
			func_121(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0x00000000;
		}
		else if (uParam0->f_6 == 0x00000002)
		{
			if (func_111(iVar0))
			{
				if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam5)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_110(0x00000001);
							}
						}
					}
				}
			}
		}
		else if (func_111(iVar0))
		{
			if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
			{
				if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && uParam5)
				{
					if (!func_104(iVar0))
					{
						func_137(iVar0, 0xFFFFFFFF);
						uParam0->f_3 = iVar0;
						if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
						{
							func_110(0x00000001);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x2EBF5002C6B6A06C(iVar0))
		{
			if (func_104(iVar0) && unk_0xFEBC1E4EC9E001F0())
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000004)
				{
					func_135(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
				{
					func_135(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
				{
					func_135(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
				{
					func_135(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
				{
					func_135(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
			{
				func_135(uParam0, iVar0, 0x00000001);
			}
		}
		if (!func_122(uParam0, bParam4, bParam6, 0x00000000))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
			{
				func_107(uParam0);
			}
		}
	}
}

void func_107(var uParam0)
{
	if (func_108(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0xF3039DE1FDB4F6FD(0x00000001);
		unk_0x29D5132FBDCF2B1E(0x00000000);
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		unk_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0x00000000, 0x00000000);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusOut", "HintCamSounds", 0x00000001);
			uParam0->f_B = 0x00000000;
		}
	}
	uParam0->f_2 = 0xFFFFFFFF;
	*uParam0 = 0x00000001;
}

int func_108(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0x00000000))
			{
				return 0x00000001;
			}
		}
		else if (unk_0xEC560E589DF8370E(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0)))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_109(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0x00000000)
	{
		iVar0 = (uParam0->f_A / 0x00000002);
		if (uParam0->f_2 + iVar0) > unk_0x1C0640BA9A7327B3()
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_110(bool bParam0)
{
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (bParam0)
			{
				Global_1B416.f_273C.f_64++;
			}
			return Global_1B416.f_273C.f_64;
			break;
		
		case 0x00000004:
			if (bParam0)
			{
				Global_1B416.f_273C.f_65++;
			}
			return Global_1B416.f_273C.f_65;
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (bParam0)
			{
				Global_1B416.f_273C.f_66++;
			}
			return Global_1B416.f_273C.f_66;
			break;
		
		default:
			break;
	}
	return 0x00000003;
}

int func_111(char* sParam0)
{
	if (!func_112(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_104(sParam0)) || func_104("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_110(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_110(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_110(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (bParam2)
	{
		return 0x00000001;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0x00000000;
	}
	if (func_120(0x00000000))
	{
		return 0x00000000;
	}
	if (func_119())
	{
		return 0x00000000;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 0x00000000;
	}
	if (Global_12061)
	{
		return 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_E545)
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
			{
				return 0x00000000;
			}
			if (unk_0xC4E6FF7CA2A185EA())
			{
				return 0x00000000;
			}
		}
	}
	if ((func_118() || func_117(Global_440000.f_38DB3)) || func_116())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_115(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_114(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_113(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_113(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_92(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_92(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_114(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
		{
			switch (iParam1)
			{
				case 0x00000011:
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
				case 0x00000016:
					return 0x00000001;
					break;
				
				default:
					if (unk_0x461CAC843A21E4B6(iParam0, iParam1) > 0x00000000)
					{
						return 0x00000001;
					}
					break;
				}
			}
	}
	return 0x00000000;
}

int func_115(int iParam0, int iParam1)
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

var func_116()
{
	return Global_2564C8.f_11;
}

bool func_117(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_118()
{
	return Global_2564C8.f_10;
}

bool func_119()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_120(int iParam0)
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

void func_121(var uParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xF3039DE1FDB4F6FD(0x00000000);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_A;
	if (iParam2 == 0x66EADDF5)
	{
		if (iVar0 < 0x000005DC)
		{
			iVar0 = 0x000005DC;
		}
		if (iVar1 < 0x000005DC)
		{
			iVar1 = 0x000005DC;
		}
	}
	unk_0x98EF6C2D1F172740(vParam1, 0xFFFFFFFF, iVar0, iVar1, iParam2);
	iVar2 = 0x00000800;
	iVar3 = 0x00000003;
	unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), vParam1, 0xFFFFFFFF, iVar2, iVar3);
	unk_0x82A772610883F395("FocusIn", 0x00000000, 0x00000000);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusIn", "HintCamSounds", 0x00000001);
	uParam0->f_B = 0x00000001;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 0x00000001;
	*uParam0 = 0x00000000;
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	switch (uParam0->f_5)
	{
		case 0x00000000:
			uParam0->f_7 = 0x00000000;
			if (uParam0->f_6 == 0x00000000)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_109(uParam0))
			{
				uParam0->f_7 = 0x00000001;
				uParam0->f_5 = 0x00000004;
			}
			break;
		
		case 0x00000001:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) <= 0x000001F4)
			{
				if (uParam0->f_6 == 0x00000000)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
			}
			else
			{
				uParam0->f_5 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (uParam0->f_6 == 0x00000000)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_125(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002))
				{
					uParam0->f_5 = 0x00000000;
				}
				else if (!func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > 0x000001F4)
			{
				if (uParam0->f_6 == 0x00000000)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002))
					{
						uParam0->f_5 = 0x00000000;
					}
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_109(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_112(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_127();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			if (unk_0x9A01369A10646AFE(0x00000000, 0x00000050))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x9A01369A10646AFE(0x00000000, 0x00000050))
			{
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000050) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000050) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_127()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_129(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_129(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_135(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_130(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_130(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	iVar0 = sParam3;
	if (unk_0x2EBF5002C6B6A06C(iVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_104(iVar0))
	{
		func_127();
	}
	if (func_108(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
	{
		iVar1 = 0x00000000;
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			unk_0x4862370C9F046219(unk_0x940C1429253D3B1B(iParam1));
			unk_0xB9099320B5179E0A(unk_0x940C1429253D3B1B(iParam1), 0x00000001);
			if (unk_0x71313E3D03CEEB37(unk_0x940C1429253D3B1B(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		else if (unk_0xE2F1E99DD161A861(iParam1))
		{
			unk_0x00D1596840E78F77(unk_0x96A5FE5834B81CE7(iParam1));
			if (unk_0xC03F94FBD72F6D02(unk_0x96A5FE5834B81CE7(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam1))
		{
			unk_0xFF7829816FC6D977(unk_0x486F67509A82DB2D(iParam1));
			if (unk_0x660643587812C91B(unk_0x486F67509A82DB2D(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		if (!unk_0x8C74DE122769E1BF())
		{
			if (func_122(uParam0, bParam5, bParam7, 0x00000000))
			{
				func_131(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0x00000000;
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_111(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
						{
							if (!func_104(iVar0))
							{
								func_137(iVar0, 0xFFFFFFFF);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_110(0x00000001);
								}
							}
						}
					}
				}
			}
			else if (func_111(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_110(0x00000001);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x2EBF5002C6B6A06C(sParam3))
			{
				if (func_104(sParam3))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000004)
					{
						func_135(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
					{
						func_135(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
					{
						func_135(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
					{
						func_135(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
					{
						func_135(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
				{
					func_135(uParam0, iVar0, 0x00000001);
				}
			}
			if (!func_122(uParam0, bParam5, bParam7, 0x00000000))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
				{
					func_107(uParam0);
				}
			}
		}
	}
	else
	{
		func_135(uParam0, iVar0, 0x00000000);
	}
}

void func_131(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1420CD == 0x00000001)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		func_135(uParam0, 0x00000000, 0x00000000);
	}
	if (func_134(vParam2, 0f, 0f, 0f, 0x00000000))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0x00000000))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_132())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xCED082ADD3739B9F(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xF3039DE1FDB4F6FD(0x00000000);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_A;
	if (iParam3 == 0x66EADDF5)
	{
		if (iVar1 < 0x000005DC)
		{
			iVar1 = 0x000005DC;
		}
		if (iVar2 < 0x000005DC)
		{
			iVar2 = 0x000005DC;
		}
	}
	unk_0xC0B0B9E466C0ED17(iParam1, vParam2, 0x00000001, 0xFFFFFFFF, iVar1, iVar2, iParam3);
	iVar3 = 0x00000800;
	iVar4 = 0x00000003;
	unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam1, 0xFFFFFFFF, iVar3, iVar4);
	unk_0x82A772610883F395("FocusIn", 0x00000000, 0x00000000);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusIn", "HintCamSounds", 0x00000001);
	uParam0->f_B = 0x00000001;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 0x00000001;
	*uParam0 = 0x00000000;
}

bool func_132()
{
	return func_133(unk_0xD803B885F5E47A62());
}

int func_133(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_134(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_135(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001A))
		{
			return;
		}
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(iParam2);
		unk_0x9A1335ECD7BD117F("FocusIn");
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0x00000000, 0x00000000);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusOut", "HintCamSounds", 0x00000001);
			uParam0->f_B = 0x00000000;
		}
	}
	unk_0xF3039DE1FDB4F6FD(0x00000001);
	uParam0->f_1 = 0x00000000;
	*uParam0 = 0x00000000;
	uParam0->f_2 = 0xFFFFFFFF;
	uParam0->f_8 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	sVar0 = iParam1;
	if (unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_104(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_104(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

void func_136(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_6), iParam0);
}

void func_137(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

bool func_138(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_6, iParam0);
}

int func_139(int iParam0)
{
	if (func_142())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_56(Global_1B40B))
		{
			func_140(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_56(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_137(func_141(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_2++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000000);
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000001))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_137(func_141(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_3++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000001);
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000002))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_137(func_141(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

char* func_141(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "AM_H_REFS";
			break;
		
		case 0x00000001:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 0x00000002:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_142()
{
	switch (func_143(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
	{
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000000:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_143(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_147(0x00000000))
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*uParam0 = Global_A1B3;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0x00000000);
		Global_56C3.f_5 = 0x00000000;
		if (iParam2 != 0x00000005)
		{
			unk_0x4C7B0415764B64BA(0x00000008);
		}
		Global_A1D7 = iParam2;
		Global_A1B1 = *uParam0;
		Global_A1B2 = iParam4;
		Global_A1B0 = 0x00000000;
		return 0x00000001;
	}
	if (*uParam0 != 0xFFFFFFFF)
	{
		if (Global_A1B0 > 0x00000000)
		{
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < Global_A1B0)
			{
				if (Global_A1B6[iVar0 /*4*/] == *uParam0)
				{
					return 0x00000002;
				}
				iVar0++;
			}
		}
		else if (Global_A1B1 == *uParam0)
		{
			return 0x00000001;
		}
		*uParam0 = 0xFFFFFFFF;
	}
	if (*uParam0 == 0xFFFFFFFF)
	{
		if (!func_145(iParam2))
		{
			return 0x00000000;
		}
		if (Global_A1B0 == 0x00000008)
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*uParam0 = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/] = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/].f_1 = iParam1;
		Global_A1B6[Global_A1B0 /*4*/].f_2 = iParam2;
		Global_A1B6[Global_A1B0 /*4*/].f_3 = 0x00000000;
		Global_A1B0++;
		if (iParam4 != 0x00000000)
		{
			func_144(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_144(var uParam0, int iParam1)
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

bool func_145(int iParam0)
{
	return func_146(iParam0, Global_A1D7);
}

int func_146(int iParam0, int iParam1)
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

int func_147(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_145(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_148()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_48)
	{
		case 0x00000000:
			if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
				{
					unk_0xAFF39FB306F8E232(iLocal_49[0x00000000], 0x00000006, 0x00000001);
					unk_0xAFF39FB306F8E232(iLocal_49[0x00000001], 0x00000006, 0x00000001);
					unk_0x11AD11297DC58CC7(iLocal_49[0x00000000], 0x00000001);
					unk_0x11AD11297DC58CC7(iLocal_49[0x00000001], 0x00000001);
					if (unk_0xC42A92762C58E1B9(iLocal_49[0x00000000], iLocal_50, 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_49[0x00000001], iLocal_50, 0x00000000))
					{
						if (iLocal_45 == 0x00000002)
						{
							unk_0xDD353D0E9C789D0E(&iVar0);
							unk_0xE9362E4D600DD12A(0x00000000, iLocal_50, -574.6195f, -847.232f, 25.2925f, 10f, 0x00000000, joaat("stockade"), 0x000C00AB, 2f, 4f);
							unk_0xE072601B4380E9DF(0x00000000, iLocal_50, 10f, 0x000C00AB);
							unk_0x75ABDC5F81978924(iVar0);
							unk_0x78ADC381772E3D54(iLocal_49[0x00000000], iVar0);
							unk_0xF82EA857DA10E0CD(&iVar0);
							iLocal_48++;
						}
						else if (iLocal_45 == 0x00000004)
						{
							unk_0xDD353D0E9C789D0E(&iVar1);
							unk_0xE9362E4D600DD12A(0x00000000, iLocal_50, -551.2968f, -1119.418f, 20.4011f, 10f, 0x00000000, joaat("stockade"), 0x000C00AB, 2f, 4f);
							unk_0xE072601B4380E9DF(0x00000000, iLocal_50, 10f, 0x000C00AB);
							unk_0x75ABDC5F81978924(iVar1);
							unk_0x78ADC381772E3D54(iLocal_49[0x00000000], iVar1);
							unk_0xF82EA857DA10E0CD(&iVar1);
							iLocal_48++;
						}
						else if (iLocal_45 == 0x00000007)
						{
							unk_0xDD353D0E9C789D0E(&iVar2);
							unk_0xE9362E4D600DD12A(0x00000000, iLocal_50, 2786.752f, 4358.032f, 48.6794f, 10f, 0x00000000, joaat("stockade"), 0x000C00AB, 2f, 4f);
							unk_0xE072601B4380E9DF(0x00000000, iLocal_50, 10f, 0x000C00AB);
							unk_0x75ABDC5F81978924(iVar2);
							unk_0x78ADC381772E3D54(iLocal_49[0x00000000], iVar2);
							unk_0xF82EA857DA10E0CD(&iVar2);
							iLocal_48++;
						}
						else
						{
							unk_0xE072601B4380E9DF(iLocal_49[0x00000000], iLocal_50, 10f, 0x000C00AB);
							iLocal_48++;
						}
					}
					else
					{
						if (!unk_0xC42A92762C58E1B9(iLocal_49[0x00000000], iLocal_50, 0x00000000) && unk_0xD1960163A3042274(iLocal_49[0x00000000], 0x950B6492) != 0x00000001)
						{
							unk_0x5B1D360B9C6F0A09(iLocal_49[0x00000000], iLocal_50, 0xFFFFFFFF, 0xFFFFFFFF, 1f, 0x00800000, 0x00000000);
						}
						if (!unk_0xC42A92762C58E1B9(iLocal_49[0x00000001], iLocal_50, 0x00000000) && unk_0xD1960163A3042274(iLocal_49[0x00000001], 0x950B6492) != 0x00000001)
						{
							unk_0x5B1D360B9C6F0A09(iLocal_49[0x00000001], iLocal_50, 0xFFFFFFFF, 0x00000000, 1f, 0x00800000, 0x00000000);
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (((((func_152() || func_151()) || func_102()) || func_101()) || func_150()) || func_149())
			{
				if (func_27() < 20f)
				{
					func_97();
					func_4(&Local_106, cLocal_105, "RESEC_VFLEE1", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				func_68(0x00000006);
			}
			if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar3 = 0x00000000;
				while (iVar3 < iLocal_49)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar3]) && !unk_0x437347B10A200C4B(iLocal_49[iVar3], 0x00000000))
					{
						if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()) && unk_0x36646919F20EAFFC(iLocal_49[iVar3]))
						{
							func_68(0x00000008);
						}
					}
					else
					{
						func_68(0x00000006);
					}
					iVar3++;
				}
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_50, 0x00000001))
				{
					func_68(0x00000008);
				}
			}
			break;
	}
	if (iLocal_46 == 0x00000004)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar4, 0x00000001);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x00EE06C17607E306("PLAYER HAS PROJECTILE WEAPON", unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
				if ((unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, -3.44f, -3f), unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, -13.44f, 3f), 2.3f, 0x00000000, 0x00000001, 0x00000000)) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001)) < 225f)
				{
					func_68(0x00000006);
				}
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, -3.44f, -3f), unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, -13.44f, 3f), 2.3f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x26F63FD28070F2CE("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
				}
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001)) < 225f)
				{
					unk_0x26F63FD28070F2CE("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
				}
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
				}
			}
		}
		if (((unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), 25f, 0x00000000)) || (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_49[0x00000000], 0x00000001), 20f, 0x00000000))) || (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_49[0x00000001], 0x00000001), 20f, 0x00000000)))
		{
			func_68(0x00000006);
		}
		if (iLocal_46 != 0x00000004)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]))
			{
				unk_0xAFF39FB306F8E232(iLocal_49[0x00000000], 0x00000006, 0x00000000);
				unk_0x11AD11297DC58CC7(iLocal_49[0x00000000], 0x00000000);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
			{
				unk_0xAFF39FB306F8E232(iLocal_49[0x00000001], 0x00000006, 0x00000000);
				unk_0x11AD11297DC58CC7(iLocal_49[0x00000001], 0x00000000);
			}
		}
	}
}

int func_149()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if ((unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001) };
		vVar1 = { unk_0x08D89CE2E20AE305(iLocal_50) };
		vVar2 = { unk_0x5293C88BD2F4DE13(iLocal_50, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) };
		if (((vVar2.y > 1f && (((unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_50) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_50)) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_49[0x00000000])) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_49[0x00000001]))) && unk_0x755FF954DAE327E1(unk_0x07AB02F3C4AE2B04(vVar1.x, vVar1.y, vVar0.x, vVar0.y)) < 60f) && unk_0x07AB02F3C4AE2B04(vVar1.z, vVar1.y, vVar0.z, vVar0.y) < 30f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_150()
{
	if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_50, 2.7f, 7f, -2f), unk_0x68E4ADDDDCD7BDDE(iLocal_50, 2.7f, -3.25f, 3f), 3f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_50, -2.7f, 7f, -2f), unk_0x68E4ADDDDCD7BDDE(iLocal_50, -2.7f, -3.25f, 3f), 3f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, 7f, -2f), unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0f, 0f, 3f), 2.4f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_151()
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
		{
			iVar0 = unk_0x728870EB733D12A1();
		}
		if (unk_0xC844350D5D58C99A(iVar0) && unk_0xC844350D5D58C99A(iLocal_50))
		{
			return ((unk_0xDF1306B443CD3D15(iVar0, 0x00000000) && unk_0x1B3D109B39CC2C89(iVar0, iLocal_50)) && unk_0x9C66D99E63E8E24C(iVar0) > 10f);
		}
	}
	return 0x00000000;
}

int func_152()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (iLocal_86)
		{
			return 0x00000001;
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) || unk_0x437347B10A200C4B(iLocal_49[0x00000000], 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_49[0x00000000], unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000001;
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) || unk_0x437347B10A200C4B(iLocal_49[0x00000001], 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_49[0x00000001], unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_153()
{
	float fVar0;
	
	if ((!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001])) && unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
	{
		switch (iLocal_48)
		{
			case 0x00000000:
				vLocal_283 = { unk_0xBF584557291FDD31(iLocal_50, 0x00000000) };
				vLocal_284 = { unk_0x835730A2D89F6093(iLocal_50, 0x00000002) };
				vLocal_285 = { unk_0x1BB04F10296A1C5E("random@security_van", "sec_case_into_van_calm", vLocal_283, vLocal_284, 0x00000000, 0x00000002) };
				bLocal_288 = 0x00000000;
				iLocal_289 = 0x00000000;
				unk_0xB9FD7450C0DAB575(iLocal_50, 0x40A00000);
				unk_0xDD353D0E9C789D0E(&iLocal_54);
				unk_0x93D47DFD0AE94949(0x00000000, 0x00001388);
				unk_0x96167B03C5A77156(0x00000000, vLocal_285, 1f, 0xFFFFFFFF, 0.1f, 0x00000200, vLocal_284.z);
				unk_0xE655C47E46F9A7E4(0x00000000, vLocal_284.z, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_54);
				unk_0x78ADC381772E3D54(iLocal_49[0x00000001], iLocal_54);
				unk_0xF82EA857DA10E0CD(&iLocal_54);
				iLocal_48++;
				break;
			
			case 0x00000001:
				vLocal_283 = { unk_0xBF584557291FDD31(iLocal_50, 0x00000000) };
				vLocal_284 = { unk_0x835730A2D89F6093(iLocal_50, 0x00000002) };
				vLocal_285 = { unk_0x1BB04F10296A1C5E("random@security_van", "sec_case_into_van_calm", vLocal_283, vLocal_284, 0x00000000, 0x00000002) };
				if (!unk_0x69DF961355195C3C(iLocal_287))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_63) < 22500f && unk_0x41659B1143875599(iLocal_50))
					{
						iLocal_287 = unk_0xE9744DB7B8CA6965(vLocal_283, vLocal_284, 0x00000002);
						unk_0x915804B434753CBD(iLocal_49[0x00000000], iLocal_287, "random@security_van", "driver_idle", 2f, -8f, 0x0000000D, 0x00000000, 0x447A0000, 0x00000000);
						unk_0xC90224D9E95E5E3A(iLocal_287, 0x00000001);
					}
				}
				if (unk_0xD1960163A3042274(iLocal_49[0x00000001], 0x0E763797) != 0x00000001)
				{
					unk_0xDD353D0E9C789D0E(&iLocal_54);
					unk_0x96167B03C5A77156(0x00000000, vLocal_285, 1f, 0xFFFFFFFF, 0.1f, 0x00000200, vLocal_284.z);
					unk_0xE655C47E46F9A7E4(0x00000000, vLocal_284.z, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_54);
					unk_0x78ADC381772E3D54(iLocal_49[0x00000001], iLocal_54);
					unk_0xF82EA857DA10E0CD(&iLocal_54);
				}
				fVar0 = unk_0xD9522BA9E27E1349(iLocal_49[0x00000001]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (vLocal_284.z > 180f)
				{
					vLocal_284.z = (vLocal_284.z - 360f);
				}
				if (vLocal_284.z <= -180f)
				{
					vLocal_284.z = (vLocal_284.z + 360f);
				}
				if (unk_0x755FF954DAE327E1((fVar0 - vLocal_284.z)) < 15f && SYSTEM::VDIST(vLocal_285, unk_0x68F4C0EC296D3901(iLocal_49[0x00000001], 0x00000001)) < 0.2f)
				{
					unk_0x33B89BCE228F08FC(iLocal_49[0x00000001], -8f);
					unk_0xA3BF0AA5A2608191(iLocal_49[0x00000001]);
					bLocal_288 = 0x00000001;
					iLocal_286 = unk_0xE9744DB7B8CA6965(vLocal_283, vLocal_284, 0x00000002);
					unk_0x915804B434753CBD(iLocal_49[0x00000001], iLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 0x00000003, 0x00000000, 4f, 0x00000000);
					unk_0xE14EC663EED44AD5(iLocal_50, iLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0x00000000, -1000f);
					iLocal_48++;
				}
				break;
			
			case 0x00000002:
				if (!iLocal_76)
				{
					if (((unk_0x69DF961355195C3C(iLocal_286) && unk_0xA45992A6CE82FB43(iLocal_286) > 0.09f) && unk_0xA45992A6CE82FB43(iLocal_286) < 0.11f) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_49[0x00000001], 20f, 20f, 5f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (func_4(&Local_106, cLocal_105, "RESEC_CHT1", 0x00000003, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_76 = 0x00000001;
							}
						}
					}
				}
				if (unk_0x69DF961355195C3C(iLocal_286))
				{
					if (!bLocal_79)
					{
						if ((unk_0xC844350D5D58C99A(iLocal_52) && unk_0x50B5F6F3C29E9380(iLocal_52, iLocal_49[0x00000001])) && unk_0xA45992A6CE82FB43(iLocal_286) > 0.3793f)
						{
							if (!unk_0x50B5F6F3C29E9380(iLocal_52, iLocal_50))
							{
								unk_0x15AFB6CBDE990FB6(iLocal_52, 0x00000001, 0x00000001);
								unk_0x20641932E5104B25(iLocal_52, 0x00000000, 0x00000000);
								unk_0x9F528B1B53FBC5D9(iLocal_52, iLocal_50, 0x00000000, unk_0x5293C88BD2F4DE13(iLocal_50, unk_0x68F4C0EC296D3901(iLocal_52, 0x00000001)), 90f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
							}
							bLocal_79 = 0x00000001;
						}
					}
					else if (unk_0xA45992A6CE82FB43(iLocal_286) > 0.546243f)
					{
						unk_0x1BF8B16C32704027(iLocal_50, -4f, 0x00000001);
						if (unk_0xC844350D5D58C99A(iLocal_52))
						{
							iLocal_76 = 0x00000000;
							unk_0x152BCACCF710B36E(iLocal_50, 0x00000002, 0x00000001);
							unk_0x152BCACCF710B36E(iLocal_50, 0x00000003, 0x00000001);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 0x00000003:
				if (!iLocal_76)
				{
					if (((unk_0x69DF961355195C3C(iLocal_286) && unk_0xA45992A6CE82FB43(iLocal_286) > 0.56f) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_49[0x00000001], 20f, 20f, 5f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_CHT2", 0x00000003, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_76 = 0x00000001;
						}
					}
				}
				if (!iLocal_289)
				{
					if ((unk_0x69DF961355195C3C(iLocal_286) && unk_0xA45992A6CE82FB43(iLocal_286) > 0.6f) || !unk_0x69DF961355195C3C(iLocal_286))
					{
						if (unk_0x69DF961355195C3C(iLocal_287))
						{
							unk_0xA3BF0AA5A2608191(iLocal_49[0x00000000]);
							iLocal_287 = unk_0xE9744DB7B8CA6965(vLocal_283, vLocal_284, 0x00000002);
							unk_0x915804B434753CBD(iLocal_49[0x00000000], iLocal_287, "random@security_van", "driver_exit_calm", 4f, -4f, 0x00000009, 0x00000000, 0x447A0000, 0x00000000);
						}
						iLocal_289 = 0x00000001;
					}
				}
				else if ((unk_0x69DF961355195C3C(iLocal_287) && unk_0xA45992A6CE82FB43(iLocal_287) >= 0.92f) || !unk_0x69DF961355195C3C(iLocal_287))
				{
					if (!unk_0xC42A92762C58E1B9(iLocal_49[0x00000000], iLocal_50, 0x00000000) && unk_0xD1960163A3042274(iLocal_49[0x00000000], 0x950B6492) != 0x00000001)
					{
						unk_0xA3BF0AA5A2608191(iLocal_49[0x00000000]);
						unk_0x5B1D360B9C6F0A09(iLocal_49[0x00000000], iLocal_50, 0xFFFFFFFF, 0xFFFFFFFF, 1f, 0x00000001, 0x00000000);
					}
				}
				if (unk_0x69DF961355195C3C(iLocal_286) && unk_0xDDCA9A4E51DADA2B(iLocal_49[0x00000001], unk_0x12AB0310C2281427("ENDS_IN_WALK")))
				{
					unk_0xA3BF0AA5A2608191(iLocal_49[0x00000001]);
					unk_0x5B1D360B9C6F0A09(iLocal_49[0x00000001], iLocal_50, 0xFFFFFFFF, 0x00000000, 1f, 0x00000001, 0x00000000);
					SYSTEM::SETTIMERA(0x00000000);
				}
				if ((func_88() && unk_0xF409BCB95E61D4DB(iLocal_50, 0x00000000) == 0f) && unk_0xF409BCB95E61D4DB(iLocal_50, 0x00000001) == 0f)
				{
					func_68(0x00000004);
				}
				break;
			
			case 0x00000004:
				if (SYSTEM::TIMERA() > 0x00003A98)
				{
					unk_0x152BCACCF710B36E(iLocal_50, 0x00000000, 0x00000001);
					unk_0x152BCACCF710B36E(iLocal_50, 0x00000001, 0x00000001);
				}
				break;
		}
		if (((!unk_0xEB6A8945D1AC98A1(func_3()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(func_3(), 0x00000001)) < 30f) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000000)
		{
			func_68(0x00000008);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
	{
		if (unk_0x762119754C50557A(iLocal_103))
		{
			func_68(0x00000007);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_157())
		{
			if (func_88())
			{
				func_68(0x00000006);
			}
			else
			{
				func_68(0x00000008);
			}
		}
		else if (func_155())
		{
			func_68(0x00000002);
		}
		else if (func_154())
		{
			func_68(0x00000003);
		}
	}
	if (iLocal_46 != 0x00000001)
	{
		if (iLocal_46 != 0x00000004)
		{
			func_97();
			if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_49[0x00000000], "random@security_van", "driver_idle", 0x00000003))
				{
					if (iLocal_45 != 0x00000002)
					{
						unk_0x3E8E48829F3C7624(iLocal_49[0x00000000], "random@security_van", "driver_exit_panic", vLocal_283, vLocal_284, 1000f, -8f, 0xFFFFFFFF, 0x00001000, 0f, 0x00000002, 0x00000000);
					}
					else
					{
						unk_0xA3BF0AA5A2608191(iLocal_49[0x00000000]);
						unk_0xC6EB89C59F2AF6B8(iLocal_49[0x00000000], "random@security_van", "driver_exit_panic", 1000f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			if ((unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && unk_0x69DF961355195C3C(iLocal_286)) && !unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
			{
				unk_0x1BF8B16C32704027(iLocal_50, -1000f, 0x00000001);
				unk_0xA3BF0AA5A2608191(iLocal_49[0x00000001]);
			}
		}
		if (bLocal_79 && !unk_0x762119754C50557A(iLocal_103))
		{
			unk_0x152BCACCF710B36E(iLocal_50, 0x00000002, 0x00000001);
			unk_0x152BCACCF710B36E(iLocal_50, 0x00000003, 0x00000001);
		}
	}
}

int func_154()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
			{
				if (func_80(unk_0x728870EB733D12A1()))
				{
					iLocal_51 = unk_0x728870EB733D12A1();
					return 0x00000001;
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
		{
			if (func_80(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
			{
				fLocal_280 = (fLocal_280 + unk_0x6117725E0134737F());
			}
			else if (fLocal_280 > 0f)
			{
				fLocal_280 = (fLocal_280 - (unk_0x6117725E0134737F() * 10f));
			}
			else if (fLocal_280 < 0f)
			{
				fLocal_280 = 0f;
			}
			if (fLocal_280 > 3f)
			{
				iLocal_51 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_155()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_49)
	{
		if ((((((!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]) && unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_49[iVar0]) || unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_49[iVar0], 0x00000001)) < 9f) && !unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000007)) && func_72())
		{
			return 0x00000001;
		}
		if (unk_0x869EFD0BC0868856(iLocal_49[iVar0]))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	if (func_101())
	{
		return 0x00000001;
	}
	if ((func_156() || func_102()) && func_72())
	{
		if (!unk_0xC42A92762C58E1B9(iLocal_49[0x00000000], iLocal_50, 0x00000000) || !unk_0xC42A92762C58E1B9(iLocal_49[0x00000001], iLocal_50, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_156()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001);
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000007) || (iVar0 == joaat("weapon_petrolcan") && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9())))
		{
			if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]))
				{
					if (unk_0x12DE711B1C681E9E(iLocal_49[0x00000000], unk_0x16F2683693E537C9(), 12f, 12f, 5f, 0x00000000, 0x00000001, 0x00000000))
					{
						return 0x00000001;
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]))
				{
					if (unk_0x12DE711B1C681E9E(iLocal_49[0x00000001], unk_0x16F2683693E537C9(), 12f, 12f, 5f, 0x00000000, 0x00000001, 0x00000000))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_157()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_49)
	{
		if ((((((!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]) && unk_0xB87D13D0C064E9D1(iLocal_49[iVar0], unk_0x16F2683693E537C9(), 0x00000001)) || (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]) && unk_0x4734A6196B611C3B(iLocal_49[iVar0], unk_0x16F2683693E537C9()))) || unk_0xB87D13D0C064E9D1(iLocal_49[iVar0], unk_0x16F2683693E537C9(), 0x00000001)) || (unk_0xB87D13D0C064E9D1(iLocal_50, unk_0x16F2683693E537C9(), 0x00000001) && func_72())) || unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0])) || unk_0x437347B10A200C4B(iLocal_49[iVar0], 0x00000000))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	if (func_150() || func_103())
	{
		return 0x00000001;
	}
	if (unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]))
			{
				if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()) && unk_0x36646919F20EAFFC(iLocal_49[iVar0]))
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_50, 0x00000001))
		{
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_63, 25f, 25f, 20f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (((unk_0xDF1306B443CD3D15(iLocal_50, 0x00000000) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_50, 0x00000001), 25f, 0x00000000)) || (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000000]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_49[0x00000000], 0x00000001), 20f, 0x00000000))) || (!unk_0xEB6A8945D1AC98A1(iLocal_49[0x00000001]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x68F4C0EC296D3901(iLocal_49[0x00000001], 0x00000001), 20f, 0x00000000)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_158()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_49)
	{
		if (unk_0xC844350D5D58C99A(iLocal_49[iVar0]))
		{
			if ((!unk_0xEB6A8945D1AC98A1(iLocal_49[iVar0]) && !unk_0x437347B10A200C4B(iLocal_49[iVar0], 0x00000000)) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if ((unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iLocal_49[iVar0], 0x00000001), 5f, 0x00000001) || func_37(unk_0x68F4C0EC296D3901(iLocal_49[iVar0], 0x00000001) + Vector(5f, 10f, 10f), unk_0x68F4C0EC296D3901(iLocal_49[iVar0], 0x00000001) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0x00000000, 0x00000000)) || unk_0xB87D13D0C064E9D1(iLocal_49[iVar0], unk_0x16F2683693E537C9(), 0x00000001))
				{
					bLocal_80 = 0x00000001;
					return 0x00000001;
				}
			}
			else
			{
				bLocal_80 = 0x00000001;
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_159()
{
	int iVar0;
	
	iLocal_50 = unk_0x122AAB0B1D6F55AD(iLocal_74, vLocal_63, fLocal_64, 0x00000001, 0x00000001, 0x00000000);
	iLocal_53 = unk_0x7707E48765093646(joaat("prop_security_case_01"), vLocal_63, 0x00000001, 0x00000001, 0x00000000);
	unk_0x9F528B1B53FBC5D9(iLocal_53, iLocal_50, 0x00000000, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	unk_0x4A4806F9D471E491(iLocal_53, 0x00000000, 0x00000000);
	unk_0xB0703A3FDD659128(iLocal_53, iLocal_50, 0x00000000);
	unk_0xB9FD7450C0DAB575(iLocal_50, 0x40A00000);
	unk_0x71EDC33E5A423750(iLocal_50, 0x00000003);
	unk_0xAA6B3A4292417750(iLocal_53, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
	unk_0xE2F0767314863BD8(iLocal_50, 0x00000001, 0x00000000);
	unk_0xD458AC1C1D29C3B4(iLocal_50, 0x000002BC, 0x00000000);
	unk_0x9A8BCD43DBDDCDCA(iLocal_50, 0x00000000, 0x00000000);
	unk_0xE8832A9E16A57A1F(iLocal_50, 0x00000001, 0x00000001);
	unk_0x6F83A63131598C64(iLocal_50, 0x00000000);
	unk_0xB26AC67EF006D7D4(iLocal_50, 0x00000001);
	unk_0x10FEEAFF01E32639((vLocal_63.x - 200f), (vLocal_63.y - 200f), (vLocal_63.x + 200f), (vLocal_63.y + 200f));
	if (iLocal_44 == 0x00000003)
	{
		iLocal_49[0x00000000] = unk_0x852A19533F896693(iLocal_50, 0x0000001A, iLocal_73, 0xFFFFFFFF, 0x00000001, 0x00000001);
		iLocal_49[0x00000001] = unk_0x852A19533F896693(iLocal_50, 0x0000001A, iLocal_73, 0x00000000, 0x00000001, 0x00000001);
		unk_0x56FDC9ADE35F7DB0(iLocal_50, 0x00000001, 0x00000001, 0x00000000);
		unk_0xE8832A9E16A57A1F(iLocal_50, 0x00000001, 0x00000001);
	}
	else
	{
		iLocal_49[0x00000001] = unk_0x36F2404464202779(0x0000001A, iLocal_73, vLocal_61[0x00000001 /*3*/], fLocal_62[0x00000001], 0x00000001, 0x00000001);
		iLocal_49[0x00000000] = unk_0x36F2404464202779(0x0000001A, iLocal_73, vLocal_61[0x00000000 /*3*/], fLocal_62[0x00000000], 0x00000001, 0x00000001);
		unk_0x0C8C0C840C2D1AD2(iLocal_49[0x00000001], iLocal_49[0x00000000], 0xFFFFFFFF, 0x00000000, 0x00000002);
	}
	func_85(iLocal_49[0x00000001]);
	unk_0xF63400DBE3303D26("Security_guards", &iLocal_60);
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_49)
	{
		unk_0x6D80F1AEBA734886(iLocal_49[iVar0], 0x00000000);
		unk_0xAFF39FB306F8E232(iLocal_49[iVar0], 0x00000001, 0x00000000);
		unk_0xAFF39FB306F8E232(iLocal_49[iVar0], 0x0000000D, 0x00000000);
		unk_0xAFF39FB306F8E232(iLocal_49[iVar0], 0x00000006, 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_49[iVar0], 0x00000008, 0x00000000);
		unk_0xAFF39FB306F8E232(iLocal_49[iVar0], 0x0000000A, 0x00000001);
		unk_0xBAFED2F6486F771A(iLocal_49[iVar0], 0x00000200, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_49[iVar0], 0x00000076, 0x00000000);
		unk_0xBAFED2F6486F771A(iLocal_49[iVar0], 0x00000080, 0x00000001);
		unk_0xF4CB0B98F8F79D8D(iLocal_49[iVar0], 0x00000000);
		unk_0xE2F0767314863BD8(iLocal_49[iVar0], 0x00000001, 0x00000000);
		unk_0x579B0182884711E5(iLocal_49[iVar0], 0x00000001);
		unk_0xD69ADA1AA251FFD6(iLocal_49[iVar0], 0x00000001);
		unk_0x262EF6C6306BEA6C(iLocal_49[iVar0], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
		unk_0x6DF7BF67E86AAE86(iLocal_49[iVar0], iLocal_60);
		unk_0xFADC0A217229F6B5(iLocal_49[iVar0], 0x00000001);
		unk_0x25BD67336EA4AECE(iLocal_49[iVar0], 0x000000FA);
		iVar0++;
	}
	unk_0xE8832A9E16A57A1F(iLocal_49[0x00000001], 0x00000001, 0x00000001);
	unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, iLocal_60);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_60, 0xA49E591C);
	unk_0x0E2400AB9174FA81(0x00000002, iLocal_60, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000002, 0x6F0783F5, iLocal_60);
	if (iLocal_44 == 0x00000001)
	{
		unk_0x9A28E8CB86CD4694(iLocal_49[0x00000000], 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		unk_0x00A6D36F507FD6EA(iLocal_49[0x00000000], 0x00000000);
		unk_0x9A28E8CB86CD4694(iLocal_49[0x00000001], 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		unk_0x00A6D36F507FD6EA(iLocal_49[0x00000001], 0x00000000);
	}
	if (func_16() == 0x00000000 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_74(&Local_106, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
	}
	if (func_16() == 0x00000001 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_74(&Local_106, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
	}
	if (func_16() == 0x00000002 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_74(&Local_106, 0x00000002, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
	}
	func_74(&Local_106, 0x00000003, iLocal_49[0x00000000], "SECVANGUY1", 0x00000000, 0x00000001);
	func_74(&Local_106, 0x00000004, iLocal_49[0x00000001], "SECVANGUY2", 0x00000000, 0x00000001);
	unk_0xAB8E2DDC7AF955E0(iLocal_74, 0x00000001);
	unk_0xC05DBA7D4F88D5E5(iLocal_73, 0x00000001);
	if (iLocal_44 != 0x00000003)
	{
	}
}

float func_160(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

bool func_161()
{
	func_169(&uLocal_123, iLocal_73);
	func_169(&uLocal_123, iLocal_74);
	func_169(&uLocal_123, iLocal_75);
	func_167(&uLocal_123, "random@security_van");
	func_167(&uLocal_123, "weapons@holster_1h");
	func_167(&uLocal_123, "move_injured_generic");
	func_166(&uLocal_123, 0x00000003);
	return func_162(&uLocal_123);
}

int func_162(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_91)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001D))
			{
				return 0x00000000;
			}
			if (!func_163(uParam0[iVar0 /*18*/]))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	uParam0->f_91 = 0x00000000;
	return 0x00000001;
}

bool func_163(var uParam0)
{
	return func_164(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_164(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001D))
		{
			switch (func_165(iParam0))
			{
				case 0x00000000:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 0x00000001:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 0x00000002:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 0x00000003:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 0x00000004:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 0x00000005:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 0x00000006:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001B), 0xFFFFFFFF);
					break;
				
				case 0x00000007:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 0x00000008:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 0x00000009:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_166(var uParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		uParam0->f_93 = iParam1;
	}
}

void func_167(var uParam0, char* sParam1)
{
	func_168(uParam0, 0x00000001, 0xFFFFFFFF, sParam1, 0x00000000);
}

void func_168(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != 0xFFFFFFFF)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 0x00000004)
				{
					if (!unk_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (unk_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 0x00000009)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_91)
	{
		uParam0->f_91 = 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], 0x0000001E);
			return;
		}
		iVar0++;
	}
}

void func_169(var uParam0, int iParam1)
{
	func_168(uParam0, 0x00000000, iParam1, "NULL", 0x00000000);
}

int func_170()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_43) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_181())
		{
			return 0x00000000;
		}
	}
	if (func_177())
	{
		return 0x00000001;
	}
	if (func_171(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_171(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = 0xFFFFFFFF;
	fVar3 = fParam0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_18(func_16()))
		{
			iVar5 = func_61();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_172(iVar1, &Var0);
					fVar4 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Var0.f_6, 0x00000001);
					if (fVar4 < fVar3)
					{
						bVar7 = 0x00000001;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = 0x00000000;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_173(uParam1, "Barry1", func_175(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_173(uParam1, "Barry2", func_175(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_173(uParam1, "Barry3", func_175(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_173(uParam1, "Barry3A", func_175(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_173(uParam1, "Barry3C", func_175(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_173(uParam1, "Barry4", func_175(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_173(uParam1, "Hao1", func_175(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_173(uParam1, "Josh1", func_175(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_173(uParam1, "Josh2", func_175(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_173(uParam1, "Josh3", func_175(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_173(uParam1, "Josh4", func_175(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_173(uParam1, "Maude1", func_175(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_173(uParam1, "Minute1", func_175(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_173(uParam1, "Minute2", func_175(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_173(uParam1, "Minute3", func_175(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_173(uParam1, "Omega1", func_175(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_173(uParam1, "Omega2", func_175(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_174(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_174(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000001;
			break;
		
		case 0x00000006:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000000;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000000;
			break;
		
		case 0x0000000B:
			return 0x00000000;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000000;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000000;
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
			return 0x00000001;
			break;
		
		case 0x00000017:
			return 0x00000001;
			break;
		
		case 0x00000018:
			return 0x00000001;
			break;
		
		case 0x00000019:
			return 0x00000001;
			break;
		
		case 0x0000001A:
			return 0x00000001;
			break;
		
		case 0x0000001B:
			return 0x00000000;
			break;
		
		case 0x0000001C:
			return 0x00000001;
			break;
		
		case 0x0000001D:
			return 0x00000001;
			break;
		
		case 0x0000001E:
			return 0x00000001;
			break;
		
		case 0x0000001F:
			return 0x00000000;
			break;
		
		case 0x00000020:
			return 0x00000001;
			break;
		
		case 0x00000021:
			return 0x00000001;
			break;
		
		case 0x00000022:
			return 0x00000001;
			break;
		
		case 0x00000023:
			return 0x00000000;
			break;
		
		case 0x00000024:
			return 0x00000000;
			break;
		
		case 0x00000025:
			return 0x00000000;
			break;
		
		case 0x00000026:
			return 0x00000001;
			break;
		
		case 0x00000027:
			return 0x00000001;
			break;
		
		case 0x00000028:
			return 0x00000001;
			break;
		
		case 0x00000029:
			return 0x00000001;
			break;
		
		case 0x0000002A:
			return 0x00000001;
			break;
		
		case 0x0000002B:
			return 0x00000001;
			break;
		
		case 0x0000002C:
			return 0x00000000;
			break;
		
		case 0x0000002D:
			return 0x00000000;
			break;
		
		case 0x0000002E:
			return 0x00000001;
			break;
		
		case 0x0000002F:
			return 0x00000001;
			break;
		
		case 0x00000030:
			return 0x00000000;
			break;
		
		case 0x00000031:
			return 0x00000001;
			break;
		
		case 0x00000032:
			return 0x00000001;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
		
		case 0x00000034:
			return 0x00000001;
			break;
		
		case 0x00000036:
			return 0x00000001;
			break;
		
		case 0x00000037:
			return 0x00000001;
			break;
		
		case 0x00000038:
			return 0x00000001;
			break;
		
		case 0x00000035:
			return 0x00000001;
			break;
		
		case 0x00000039:
			return 0x00000001;
			break;
		
		case 0x0000003A:
			return 0x00000001;
			break;
		
		case 0x0000003B:
			return 0x00000001;
			break;
		
		case 0x0000003C:
			return 0x00000001;
			break;
		
		case 0x0000003D:
			return 0x00000001;
			break;
		
		case 0x0000003E:
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

struct<2> func_175(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_176(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_176(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 0x00000001:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 0x00000006:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 0x00000007:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 0x00000008:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 0x00000009:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 0x0000000A:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 0x0000000B:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 0x0000000C:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 0x0000000D:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 0x0000000E:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 0x0000000F:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 0x00000010:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 0x00000011:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 0x00000012:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 0x00000013:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 0x00000014:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 0x00000015:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 0x00000016:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 0x00000017:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 0x00000018:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 0x00000019:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 0x0000001A:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 0x0000001B:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 0x0000001C:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 0x0000001D:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 0x0000001E:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 0x0000001F:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 0x00000020:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 0x00000021:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 0x00000022:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 0x00000023:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 0x00000024:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 0x00000025:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 0x00000026:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 0x00000027:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 0x00000028:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 0x00000029:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 0x0000002A:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 0x0000002B:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 0x0000002C:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 0x0000002D:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 0x0000002E:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 0x0000002F:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 0x00000030:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 0x00000031:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 0x00000032:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 0x00000033:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 0x00000034:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 0x00000035:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 0x00000036:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 0x00000037:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 0x00000038:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 0x00000039:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 0x0000003A:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 0x0000003B:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 0x0000003C:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 0x0000003D:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 0x0000003E:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_177()
{
	if (func_180() && !func_181())
	{
		return 0x00000001;
	}
	if (func_179() && func_178())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_178()
{
	return Global_1B2FC > 0x00000000;
}

int func_179()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_180()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_181()
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

int func_182()
{
	if (!func_145(0x00000005))
	{
		return 0x00000001;
	}
	if (func_177())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_181())
		{
			return 0x00000000;
		}
	}
	if (func_171(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_183()
{
	if ((Global_1B40B == func_65() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_184(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_91)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_92 + uParam0->f_93) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x00000002)) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001D))
					{
						func_185(uParam0[iVar0 /*18*/]);
						uParam0->f_92 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_185(int iParam0)
{
	func_186(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_186(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001E))
	{
		switch (func_165(*iParam0))
		{
			case 0x00000000:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 0x00000001:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 0x00000002:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 0x00000003:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001C));
				break;
			
			case 0x00000004:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 0x00000006:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001B), 0xFFFFFFFF);
				break;
			
			case 0x00000007:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 0x00000008:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 0x00000009:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 0x0000001D);
	}
}

void func_187()
{
	iLocal_75 = joaat("prop_security_case_01");
	iLocal_74 = joaat("stockade");
	iLocal_73 = joaat("s_m_m_armoured_01");
	iLocal_94 = unk_0x09AC81E49EA267F7(0x00000BB8, 0x00001F40);
	switch (iLocal_45)
	{
		case 0x00000001:
			vLocal_70 = { -315.889f, -1550.554f, 7.233013f };
			vLocal_71 = { -315.2352f, -1366.581f, 45.29617f };
			fLocal_72 = 180f;
			vLocal_63 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_64 = -64.3539f;
			vLocal_61[0x00000000 /*3*/] = { -335.564f, -1462.237f, 29.5452f };
			fLocal_62[0x00000000] = 158.3857f;
			vLocal_61[0x00000001 /*3*/] = { -342.7024f, -1475.043f, 29.6004f };
			fLocal_62[0x00000001] = 290.3041f;
			iLocal_44 = 0x00000001;
			break;
		
		case 0x00000002:
			vLocal_70 = { -538.2149f, -868.7426f, 17.96054f };
			vLocal_71 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_72 = 121.5f;
			vLocal_63 = { -588.5128f, -866.9584f, 25.32786f };
			fLocal_64 = -89.02679f;
			vLocal_61[0x00000000 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_62[0x00000000] = 12.5464f;
			vLocal_61[0x00000001 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_62[0x00000001] = 352.4951f;
			iLocal_44 = 0x00000001;
			break;
		
		case 0x00000003:
			vLocal_70 = { -468.6309f, 6101.907f, 14.8912f };
			vLocal_71 = { -359.9734f, 5994.152f, 50.36843f };
			fLocal_72 = 152.25f;
			vLocal_63 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_64 = 188.9862f;
			vLocal_61[0x00000000 /*3*/] = { -398.4612f, 6051.296f, 30.5003f };
			fLocal_62[0x00000000] = 251.7138f;
			vLocal_61[0x00000001 /*3*/] = { -378.408f, 6035.689f, 30.498f };
			fLocal_62[0x00000001] = 154.0836f;
			iLocal_44 = 0x00000002;
			break;
		
		case 0x00000004:
			vLocal_70 = { -631.3408f, -1105.581f, 7.220509f };
			vLocal_71 = { -462.1721f, -1103.597f, 62.53583f };
			fLocal_72 = 177.25f;
			vLocal_63 = { -595.7766f, -1094.089f, 21.1785f };
			fLocal_64 = 263.4662f;
			vLocal_61[0x00000000 /*3*/] = { -600.8182f, -1103.778f, 21.3292f };
			fLocal_62[0x00000000] = 338.8304f;
			vLocal_61[0x00000001 /*3*/] = { -595.3461f, -1096.054f, 21.1785f };
			fLocal_62[0x00000001] = 151.297f;
			iLocal_44 = 0x00000001;
			break;
		
		case 0x00000005:
			vLocal_63 = { -1042.768f, -1049.296f, 1.0825f };
			fLocal_64 = 26.9919f;
			iLocal_44 = 0x00000003;
			break;
		
		case 0x00000006:
			vLocal_63 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_64 = 271.1543f;
			iLocal_44 = 0x00000003;
			break;
		
		case 0x00000007:
			vLocal_63 = { 3018.384f, 3634.017f, 70.4076f };
			fLocal_64 = 335.9052f;
			iLocal_44 = 0x00000003;
			break;
		
		case 0x00000008:
			vLocal_63 = { -2815.661f, 2208.171f, 27.8382f };
			fLocal_64 = 119.1519f;
			iLocal_44 = 0x00000003;
			break;
		
		case 0x00000009:
			vLocal_63 = { 856.7742f, -2067.845f, 29.0704f };
			fLocal_64 = 83.1204f;
			iLocal_44 = 0x00000003;
			break;
		
		case 0x0000000A:
			vLocal_63 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_64 = 248.8625f;
			iLocal_44 = 0x00000003;
			break;
		
		default:
			break;
	}
}

void func_188(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_65();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_190(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_189();
}

void func_189()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0xAB8E2DDC7AF955E0(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)), 0x00000001);
		}
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
	}
}

void func_190(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_191(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_24AC9)
	{
		return 0x00000000;
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_65();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_230())
		{
			return 0x00000000;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_181())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_50(0x00000000))
		{
			return 0x00000000;
		}
		if (func_177())
		{
			return 0x00000000;
		}
		if (func_229())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_18(func_16()))
		{
			if (func_171(100f, 0x00000001) != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0x00000000;
			}
		}
		if (!func_228(iParam1))
		{
			return 0x00000000;
		}
		if (func_18(func_16()))
		{
			if (func_227(func_16()) == 0x00000004 || func_227(func_16()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_226(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_225(Global_1B416.f_619E.f_2B[iParam1]))
		{
			return 0x00000000;
		}
		if ((unk_0x1C0640BA9A7327B3() - Global_1B40D) < 0x000249F0)
		{
			if (iParam1 != 0x0000001E)
			{
				return 0x00000000;
			}
		}
		if (func_224())
		{
			return 0x00000000;
		}
		if (unk_0x2C1AA3A291786CDC())
		{
			return 0x00000000;
		}
		if (unk_0xD4A2BF1975E2C50F())
		{
			return 0x00000000;
		}
		if (!func_216(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_145(0x00000005))
		{
			return 0x00000000;
		}
		if (func_215(iParam1, iParam2) && !bParam3)
		{
			return 0x00000000;
		}
		if (Global_3 && iParam1 != 0x0000000A)
		{
			return 0x00000000;
		}
		if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
		{
			if ((unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(377.153f, -717.567f, 10.0536f) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(320.9934f, 265.2515f, 82.1221f)) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(-1425.564f, -244.3f, 15.8053f))
			{
				return 0x00000000;
			}
		}
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_215(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_228(0x0000001E) && !func_215(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_214(iVar4))
				{
					if (func_192(iVar2))
					{
						if (!func_134(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_16() != iVar2)
								{
									return 0x00000000;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 0x00000001;
}

bool func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_193(iVar0);
}

int func_193(int iParam0)
{
	return func_194(iParam0, 0x00000001);
}

int func_194(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_214(iParam0))
	{
		return 0x00000000;
	}
	func_195(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_196(func_207(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_196(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_205(iParam1);
		iVar1 = func_203(iParam0);
		iVar2 = (func_203(iParam0) - func_203(iParam1));
		iVar3 = (func_205(iParam0) - func_205(iParam1));
		iVar4 = (func_202(iParam0) - func_202(iParam1));
		iVar5 = (func_201(iParam0) - func_201(iParam1));
		iVar6 = (func_200(iParam0) - func_200(iParam1));
		iVar7 = (func_199(iParam0) - func_199(iParam1));
	}
	else
	{
		iVar0 = func_205(iParam0);
		iVar1 = func_203(iParam1);
		iVar2 = (func_203(iParam1) - func_203(iParam0));
		iVar3 = (func_205(iParam1) - func_205(iParam0));
		iVar4 = (func_202(iParam1) - func_202(iParam0));
		iVar5 = (func_201(iParam1) - func_201(iParam0));
		iVar6 = (func_200(iParam1) - func_200(iParam0));
		iVar7 = (func_199(iParam1) - func_199(iParam0));
	}
	while (iVar7 < 0x00000000)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 0x00000001);
	}
	while (iVar7 > 0x0000003B)
	{
		iVar7 = (iVar7 - 0x0000003C);
		iVar6++;
	}
	while (iVar6 < 0x00000000)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 0x00000001);
	}
	while (iVar6 > 0x0000003B)
	{
		iVar6 = (iVar6 - 0x0000003C);
		iVar5++;
	}
	while (iVar5 < 0x00000000)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 0x00000001);
	}
	while (iVar5 > 0x00000017)
	{
		iVar5 = (iVar5 - 0x00000018);
		iVar4++;
	}
	while (iVar4 < 0x00000000)
	{
		while (iVar3 < 0x00000000)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 0x00000001);
		}
		iVar4 = (iVar4 + func_198(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_197(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0x00000000)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 0x00000001);
	}
	while (iVar3 > 0x0000000C)
	{
		iVar3 = (iVar3 - 0x0000000C);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_197(float fParam0, float fParam1, float fParam2)
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

int func_198(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		iParam1 = 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000004:
		case 0x00000006:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000B:
			return 0x0000001F;
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000008:
		case 0x0000000A:
			return 0x0000001E;
			break;
		
		case 0x00000001:
			if ((iParam1 % 0x00000004) == 0x00000000)
			{
				if ((iParam1 % 0x00000064) != 0x00000000)
				{
					return 0x0000001D;
				}
				else if ((iParam1 % 0x00000190) == 0x00000000)
				{
					return 0x0000001D;
				}
			}
			return 0x0000001C;
			break;
	}
	return 0x0000001E;
}

int func_199(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_200(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_201(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_202(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_203(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_204(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_204(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_205(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_206(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_214(iParam1) || !func_214(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_207()
{
	var uVar0;
	
	func_213(&uVar0, unk_0x4460E481B9E33ADA());
	func_212(&uVar0, unk_0x8D199E381D262EEF());
	func_211(&uVar0, unk_0xD8A54335F18763BA());
	func_210(&uVar0, unk_0x972A296334C9D57B());
	func_209(&uVar0, unk_0x118229AD063C3C1D());
	func_208(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 <= 0x00000000)
	{
		return;
	}
	if (iParam1 > 0x000007FB || iParam1 < 0x000007BB)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x7C000000);
	if (iParam1 < 0x000007DB)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((0x000007DB - iParam1), 0x0000001A));
		*uParam0 |= 0x80000000;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 0x000007DB), 0x0000001A));
		*uParam0 = (*uParam0 - *uParam0 & 0x80000000);
	}
}

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_210(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_205(*uParam0);
	iVar1 = func_203(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_198(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 0xFFFFFFF1)
	{
		return 0x00000000;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_200(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_201(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_203(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_205(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_202(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_198(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_215(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_216(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_1()) || Global_1B05D) || Global_7832) || func_223()) || func_24(0x00000008, 0xFFFFFFFF)) || func_222()) || func_221()) || func_220()) || func_219()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_1()) || Global_7832) || func_223()) || func_24(0x00000008, 0xFFFFFFFF)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_1()) || Global_1B05D) || Global_7832) || func_223()) || func_24(0x00000008, 0xFFFFFFFF)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_1()) || Global_1B05D) || Global_7832) || func_223()) || func_24(0x00000008, 0xFFFFFFFF)) || func_222()) || func_221()) || func_219()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_1() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_24(0x00000008, 0xFFFFFFFF)) || func_219()) || func_218()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_24(0x00000008, 0xFFFFFFFF) || func_222()) || func_221()) || func_218()) || func_217())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_1()) || Global_7832) || func_223()) || func_24(0x00000008, 0xFFFFFFFF)) || func_221()) || func_220()) || func_219()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_1()) || func_221()) || Global_1B05D) || Global_7832) || func_223()) || Global_A664) || func_24(0x00000008, 0xFFFFFFFF)) || func_220()) || func_218()) || func_219()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_1()) || Global_1B05D) || Global_7832) || func_223()) || func_24(0x00000008, 0xFFFFFFFF)) || func_220()) || func_218()) || func_222()) || func_221()) || func_219())
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

var func_217()
{
	return Global_181DF.f_1;
}

int func_218()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_219()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_220()
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

bool func_221()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_222()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_223()
{
	return Global_14086D;
}

int func_224()
{
	func_15();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_225(int iParam0)
{
	return func_206(func_207(), iParam0);
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_16();
	if (iParam2 != 0x00000091 && ((iParam2 == 0x00000000 || iParam2 == 0x00000001) || iParam2 == 0x00000002))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 0x00000012:
			if (iVar1 == 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000013:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000014:
			if (iVar1 != 0x00000001)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000001C:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000D:
			if (iVar1 == 0x00000000)
			{
				if (iParam1 == 0x00000002)
				{
					iVar0 = 0x00000000;
				}
				else
				{
					iVar0 = 0x00000001;
				}
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000016:
			if (iParam1 == 0x00000002 || iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000001E:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000001;
			break;
	}
	return iVar0;
}

int func_227(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_228(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_230())
		{
			return 0x00000000;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 0x0000001F)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 0x0000001F);
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_1, iVar0);
	}
	return bVar1;
}

int func_229()
{
	int iVar0;
	
	if (Global_78C6)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000)))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_230()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000006);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000002);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000004);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000006);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar0, 0x00000001);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(0x00000362);
					unk_0x5D96D8530B3D0904(&iVar0, 0x00000000);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 0x00000001;
			}
		}
	}
	if (Global_24BC8 == 0x00000002)
	{
		return 0x00000001;
	}
	else if (Global_24BC8 == 0x00000003)
	{
		return 0x00000000;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(0x00000362), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_231()
{
	if (func_183())
	{
		if (unk_0x762119754C50557A(iLocal_103))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_58))
			{
				unk_0x142CC44DB769B57E(&iLocal_58);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_53))
		{
			unk_0xF690C84DADBB3551(&iLocal_53);
		}
		if (unk_0xC844350D5D58C99A(iLocal_52))
		{
			if (unk_0x03068588A1FCED1A(iLocal_52))
			{
				unk_0xF690C84DADBB3551(&iLocal_52);
			}
			else
			{
				unk_0xEEEE2E5FA6F78DF0(&iLocal_52);
			}
		}
		unk_0x71199B01895C6202(iLocal_74);
		unk_0x71199B01895C6202(iLocal_73);
		unk_0x71199B01895C6202(iLocal_75);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC05DBA7D4F88D5E5(iLocal_73, 0x00000000);
		unk_0xAB8E2DDC7AF955E0(iLocal_74, 0x00000000);
	}
	if (iLocal_97 != 0x00000000)
	{
		unk_0x850CF499433B183D(iLocal_97);
	}
	unk_0x2952D66A502EA873(iLocal_59, 0x00000000);
	func_135(&uLocal_111, 0x00000000, 0x00000000);
	func_237(0xFFFFFFFF);
	func_232(&uLocal_123, 0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_232(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_234(uParam0);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		func_233(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_91 = 0x00000000;
	uParam0->f_92 = 0xFFFFFFFF;
}

void func_233(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0xFFFFFFFF;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			func_235(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_91 = 0x00000001;
}

void func_235(var uParam0)
{
	func_236(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_236(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		switch (func_165(iParam0))
		{
			case 0x00000000:
				unk_0x71199B01895C6202(iParam2);
				break;
			
			case 0x00000001:
				unk_0x8D17794CE3273D70(sParam1);
				break;
			
			case 0x00000002:
				unk_0x413168EF79E35C7B(sParam1);
				break;
			
			case 0x00000003:
				unk_0xF5A41F3D3B38EFE3(sParam1);
				break;
			
			case 0x00000004:
				unk_0xDB8844D4B7C60440(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x2F3540C2227116A3(sParam1);
				break;
			
			case 0x00000006:
				unk_0x8C26F31DFF77D124();
				break;
			
			case 0x00000007:
				unk_0xB60B60856BF98DCE(iParam2);
				break;
			
			case 0x00000008:
				unk_0x11CCD0ACA866C6C5(iParam2, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001A));
				break;
			
			case 0x00000009:
				unk_0x29D7581AEF4440C2();
				break;
			
			default:
				break;
		}
	}
}

void func_237(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_65();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_183())
	{
		func_241(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_240(0x00007530);
		StringCopy(&cVar0, func_239(Global_1B40B, 0x00000001), 64);
		if (func_64(Global_1B40B) > 0x00000000)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_1B40A, 64);
		}
		unk_0xCDD9EADCF57830A9(&cVar0, Global_1B408, (unk_0x1C0640BA9A7327B3() - Global_1B409), 0x00000000);
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000000) && Global_1B416.f_619E.f_2 < 0x00000003)
	{
		unk_0x0674E58A79778E99(&Global_1B412, 0x00000000);
	}
	func_238(&Global_786B);
	Global_1B40C = 0x00000000;
	func_190(0xFFFFFFFF);
}

void func_238(var uParam0)
{
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!*uParam0 == Global_A1B1)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	*uParam0 = 0xFFFFFFFF;
	Global_A1B0 = 0x00000000;
	Global_A1B2 = 0x00000000;
	Global_A1D7 = 0x0000000F;
	Global_F045 = 0x00000000;
	Global_F046 = 0x00000000;
}

char* func_239(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "RE_ACCIDENT";
			break;
		
		case 0x00000001:
			return "RE_ATMROBBERY";
			break;
		
		case 0x00000002:
			return "RE_BUSTOUR";
			break;
		
		case 0x00000003:
			return "RE_DOMESTIC";
			break;
		
		case 0x00000004:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 0x00000005:
			return "RE_SHOPROBBERY";
			break;
		
		case 0x00000006:
			return "RE_SNATCHED";
			break;
		
		case 0x00000007:
			return "RE_LURED";
			break;
		
		case 0x00000008:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 0x00000009:
			return "RE_SECURITYVAN";
			break;
		
		case 0x0000000A:
			return "RE_PAPARAZZI";
			break;
		
		case 0x0000000B:
			return "RE_CHASETHIEVES";
			break;
		
		case 0x0000000C:
			return "RE_DEALGONEWRONG";
			break;
		
		case 0x0000000D:
			return "RE_HITCHLIFT";
			break;
		
		case 0x0000000E:
			return "RE_STAG";
			break;
		
		case 0x0000000F:
			return "RE_ARREST";
			break;
		
		case 0x00000010:
			return "RE_CRASHRESCUE";
			break;
		
		case 0x00000011:
			return "RE_CARTHEFT";
			break;
		
		case 0x00000012:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 0x00000013:
			return "RE_GANGFIGHT";
			break;
		
		case 0x00000014:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 0x00000015:
			return "RE_PRISONVANBREAK";
			break;
		
		case 0x00000016:
			return "RE_PRISONERLIFT";
			break;
		
		case 0x00000017:
			return "RE_ABANDONEDCAR";
			break;
		
		case 0x00000018:
			return "RE_BURIAL";
			break;
		
		case 0x00000019:
			return "RE_MUGGING";
			break;
		
		case 0x0000001A:
			return "RE_BIKETHIEF";
			break;
		
		case 0x0000001B:
			return "RE_DRUNKDRIVER";
			break;
		
		case 0x0000001C:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 0x0000001D:
			return "RE_BORDERPATROL";
			break;
		
		case 0x0000001E:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 0x0000001F:
			return "RE_DUEL";
			break;
		
		case 0x00000020:
			return "RE_SEAPLANE";
			break;
		
		case 0x00000021:
			return "RE_MONKEYPHOTO";
			break;
		
		case 0xFFFFFFFF:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_240(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_241(int iParam0)
{
	func_242(iParam0, 0x00000000, func_247(iParam0));
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_207();
	func_245(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_244(iParam0, &uVar0);
	Var1 = { func_243(&uVar0) };
}

struct<16> func_243(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_201(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_200(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_199(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_202(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_203(*uParam0), 64);
	return Var0;
}

void func_244(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_205(*uParam0);
	iVar2 = func_202(*uParam0);
	iVar3 = func_201(*uParam0);
	iVar4 = func_200(*uParam0);
	iVar5 = func_199(*uParam0);
	if (((((iParam6 == 0x00000000 && iParam5 == 0x00000000) && iParam4 == 0x00000000) && iParam3 == 0x00000000) && iParam2 == 0x00000000) && iParam1 == 0x00000000)
	{
		return;
	}
	if (iParam1 < 0x00000000)
	{
		return;
	}
	if (iParam2 < 0x00000000)
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam4 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x00000000)
	{
		return;
	}
	if (iParam6 < 0x00000000)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 0x0000003C)
	{
		iParam2++;
		iVar5 = (iVar5 - 0x0000003C);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 0x0000003C)
	{
		iParam3++;
		iVar4 = (iVar4 - 0x0000003C);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 0x00000018)
	{
		iParam4++;
		iVar3 = (iVar3 - 0x00000018);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_198(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_198(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_246(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_213(uParam0, iParam1);
	func_212(uParam0, iParam2);
	func_211(uParam0, iParam3);
	func_209(uParam0, iParam5);
	func_210(uParam0, iParam4);
	func_208(uParam0, iParam6);
}

int func_247(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000017:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000000:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000F:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000001:
			iVar0 = 0x000000C8;
			break;
		
		case 0x0000001A:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000008:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000001D:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000018:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000011:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000B:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000010:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000012:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000C:
			iVar0 = 0x00000078;
			break;
		
		case 0x00000003:
			iVar0 = 0x0000003C;
			break;
		
		case 0x0000001B:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000013:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000014:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000004:
			iVar0 = 0x0000003C;
			break;
		
		case 0x0000001C:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000D:
			iVar0 = 0x00000023;
			break;
		
		case 0x00000007:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000019:
			iVar0 = 0x00000028;
			break;
		
		case 0x0000000A:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000016:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000015:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000005:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000001E:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000009:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000006:
			iVar0 = 0x00000028;
			break;
		
		case 0x0000000E:
			iVar0 = 0x00000028;
			break;
	}
	return iVar0;
}

int func_248(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0xBBA8A868118C90ED(iParam0, 0xFFFFFFFF, 0x00000000))
		{
			return 0xFFFFFFFF;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000002, 0x00000000))
		{
			return 0x00000002;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000003, 0x00000000))
		{
			return 0x00000003;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000004, 0x00000000))
		{
			return 0x00000004;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000005, 0x00000000))
		{
			return 0x00000005;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000006, 0x00000000))
		{
			return 0x00000006;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000007, 0x00000000))
		{
			return 0x00000007;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000008, 0x00000000))
		{
			return 0x00000008;
		}
	}
	return 0xFFFFFFFE;
}

