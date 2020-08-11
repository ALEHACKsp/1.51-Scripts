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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	struct<14> Local_73 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 16;
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
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	int iLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	int iLocal_275[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_276 = 0;
	bool bLocal_277 = 0;
	bool bLocal_278 = 0;
	bool bLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	float fLocal_286 = 0f;
	float fLocal_287 = 0f;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	int iLocal_305 = 0;
	var uLocal_306 = 0;
	int iLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313[4] = { 0, 0, 0, 0 };
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_319 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_320 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	struct<4> Local_327[32];
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	char* sLocal_331 = NULL;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	struct<21> Local_336 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 0x00000003;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_91 = 0x00000001;
	bLocal_93 = 0x00000001;
	bLocal_95 = 0x00000001;
	iLocal_100 = 0xFFFFFFFF;
	bLocal_278 = 0x00000001;
	bLocal_279 = 0x00000001;
	iLocal_282 = 0xFFFFFFFF;
	iLocal_283 = 0xFFFFFFFF;
	iLocal_307 = 0xFFFFFFFF;
	iLocal_310 = 0xFFFFFFFF;
	if (!func_540(ScriptParam_336))
	{
		func_536();
	}
	iLocal_318[0x00000000] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-891.3f, 807.9f, 188.1f));
	iLocal_318[0x00000001] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-276.5f, -206.3f, 38.4f));
	iLocal_318[0x00000002] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1485.5f, -644.5f, 30.1f));
	iLocal_318[0x00000003] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1746.3f, -939.5f, 7.7f));
	iLocal_318[0x00000004] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-2106.4f, -345.3f, 13f));
	iLocal_318[0x00000005] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1520f, 74.4f, 61.3f));
	iLocal_318[0x00000006] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1333f, -286f, 40.3f));
	iLocal_318[0x00000007] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1178.1f, 54.8f, 53.9f));
	iLocal_318[0x00000008] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1298.7f, -359.4f, 36.7f));
	iLocal_318[0x00000009] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-355.2f, 147.5f, 75.8f));
	iLocal_318[0x0000000A] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-982.1f, -1064.7f, 2.2f));
	iLocal_318[0x0000000B] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1313.1f, -1560.2f, 4.3f));
	while (0x00000001)
	{
		func_535();
		bLocal_76 = 0x00000000;
		bLocal_78 = 0x00000000;
		bLocal_81 = 0x00000000;
		bLocal_84 = 0x00000000;
		bLocal_86 = 0x00000000;
		Global_26B66F.f_697 = 0x00000000;
		if (func_525() || func_524())
		{
			func_536();
		}
		if (func_518())
		{
			if (!func_517())
			{
				if (!func_516())
				{
					if (func_514())
					{
						if (!iLocal_74)
						{
							func_510();
							func_509(&Local_319, 0x00000005);
							func_508();
							bLocal_95 = 0x00000001;
							bLocal_96 = 0x00000001;
							if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000001))
							{
								unk_0x0674E58A79778E99(&iLocal_328, 0x00000001);
							}
							iLocal_74 = 0x00000001;
							iLocal_310 = 0xFFFFFC19;
						}
					}
				}
			}
			else if (!func_516())
			{
				if (!bLocal_96)
				{
					if (!func_507(&uLocal_273))
					{
						func_506(&uLocal_273, 0x00000000, 0x00000000);
					}
					else if (func_505(&uLocal_273, 0x00000064, 0x00000000))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000001))
						{
							if (func_514())
							{
								func_495(&Local_319, 0x00000005, Global_200000[func_504() /*10930*/].f_181E.f_25);
								bLocal_95 = 0x00000000;
								bLocal_96 = 0x00000001;
								iLocal_74 = 0x00000001;
								iLocal_310 = 0xFFFFFC19;
							}
						}
					}
				}
			}
			func_398();
			func_394();
			func_380();
			func_373();
			func_264();
			func_176();
		}
		func_172();
		func_142();
		func_76();
		func_73();
		if (!iLocal_98)
		{
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), 0x00000001);
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 0x00000001);
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), 0x00000001);
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 0x00000001);
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), 0x00000001);
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), 0x00000001);
				iLocal_98 = 0x00000001;
			}
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_93)
	{
	}
	else
	{
		if (iLocal_94 >= Local_327)
		{
			iLocal_94 = 0x00000000;
			unk_0x0674E58A79778E99(&iLocal_328, 0x0000000A);
			unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000007);
			unk_0x0674E58A79778E99(&iLocal_328, 0x0000000B);
			unk_0x0674E58A79778E99(&iLocal_328, 0x00000017);
			if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000001);
				unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000003);
			}
		}
		iVar0 = iLocal_94;
		if (Local_327[iVar0 /*4*/].f_1 == 0x00000002)
		{
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000005)
			{
				if (!Local_320[iVar1] == 0xFFFFFFFF)
				{
					if (!Local_320.f_6[iVar1])
					{
						if (Local_320[iVar1] == Local_327[iVar0 /*4*/])
						{
							if (Local_320[iVar1] == Local_320.f_1C)
							{
								func_72();
							}
							Local_320.f_21 = 0x00000000;
							Local_320.f_20++;
						}
					}
				}
				iVar1++;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000007))
			{
				if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
				{
					if (Local_327[iVar0 /*4*/].f_3 > 0x00000000 || func_71(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0)), 0x00000006))
					{
						if (Local_327[iVar0 /*4*/].f_3 < 0x00000003)
						{
							unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000007);
						}
					}
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x0000000B))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_327[iVar0 /*4*/].f_2, 0x00000002))
				{
					unk_0x5D96D8530B3D0904(&iLocal_328, 0x0000000B);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000015))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000003))
				{
					if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_327[iVar0 /*4*/].f_2, 0x00000003))
						{
							unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000015);
						}
					}
				}
			}
		}
		iLocal_94++;
		if (iLocal_94 >= Local_327)
		{
			unk_0x5D96D8530B3D0904(&iLocal_328, 0x0000000A);
			if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000007) || unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000017))
			{
				unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000001);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x0000000B))
			{
				unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000003);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000015))
			{
				unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000006);
			}
		}
	}
	if (func_70())
	{
		if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_320.f_1D) > 0x0002BF20)
		{
			func_69();
		}
	}
	switch (Local_320.f_14)
	{
		case 0x00000000:
			func_66();
			Local_320.f_20++;
			Local_320.f_14 = 0x00000001;
			func_65();
			break;
		
		case 0x00000001:
			if (func_64())
			{
				uLocal_306 = unk_0x2B6E0A53779D29EA();
				Local_320.f_14 = 0x00000002;
			}
			else if (Local_320.f_1C == 0xFFFFFFFF)
			{
				func_72();
			}
			break;
		
		case 0x00000002:
			if (!Local_320.f_11 && unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), uLocal_306) > Global_40001.f_2CCD)
			{
				Local_320.f_14 = 0x00000000;
			}
			break;
		
		case 0x00000003:
			break;
	}
	func_2();
}

void func_2()
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	switch (Local_320.f_1A)
	{
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000000))
			{
				if (bLocal_278)
				{
					if (bLocal_279)
					{
						if (Global_26B66F.f_67C)
						{
							unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000002);
							unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000006);
							unk_0x0674E58A79778E99(&iLocal_328, 0x00000015);
							unk_0x28E5F00F131890E3(0x00000000);
							Local_320.f_22 = 0x00000000;
							unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000000);
							Global_26B66F.f_67C = 0x00000000;
						}
					}
					else if (Local_320.f_1B == 0xFFFFFFF1)
					{
						unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000002);
						unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000006);
						unk_0x0674E58A79778E99(&iLocal_328, 0x00000015);
						unk_0x28E5F00F131890E3(0x00000000);
						Local_320.f_22 = 0x00000000;
						iVar2 = func_63();
						func_49(&(Local_320.f_1B), func_62(iVar2), func_61(iVar2), func_60(iVar2), func_59(iVar2), func_58(iVar2), func_56(iVar2));
						func_48(&(Local_320.f_1B), 0x00000000, unk_0x09AC81E49EA267F7(0x00000000, 0x0000003C), unk_0x09AC81E49EA267F7(0x00000000, 0x00000008), 0x00000001, 0x00000000, 0x00000000);
					}
					else if (!func_47(0x00000006))
					{
						if (!func_507(&uLocal_295))
						{
							func_506(&uLocal_295, 0x00000000, 0x00000000);
						}
						else if (func_505(&uLocal_295, 0x00002710, 0x00000000))
						{
							func_46(&uLocal_295);
							if (func_42(Local_320.f_1B))
							{
								unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000000);
							}
						}
					}
				}
			}
			else if (Local_320.f_43 == 0x00000000)
			{
				if (func_36(0x00000001, 0x00000001, 0x00000001))
				{
					if (unk_0x23002DD5E7B94FD7(Local_320.f_18))
					{
						unk_0xBD63401BCCEC233B(Local_320.f_18);
					}
					Local_320.f_18 = 0xFFFFFFFF;
					iLocal_281 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
					iVar3 = func_33();
					if (iVar3 != 0x00000000)
					{
						Local_320.f_43 = iVar3;
						unk_0x28E5F00F131890E3(0x00000001);
						Local_320.f_22 = 0x00000001;
					}
				}
			}
			else if (unk_0xE75B31D140F2F10B(0x00000001))
			{
				if (func_32(Local_320.f_43))
				{
					if (!unk_0xE9F78D191AD5EDBA(Local_320.f_16))
					{
						if (func_21(&vVar0, &fVar1))
						{
							if (func_18(&(Local_320.f_16), Local_320.f_43, vVar0, fVar1, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
							{
								if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
								{
									if (unk_0x30F813723591D02E(unk_0xB177666FAB6F4417(Local_320.f_16), "MPBitset"))
									{
										iVar4 = unk_0x1E2DFB0EF4BB4566(unk_0xB177666FAB6F4417(Local_320.f_16), "MPBitset");
									}
									unk_0x5D96D8530B3D0904(&iVar4, 0x00000005);
									unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_320.f_16), "MPBitset", iVar4);
								}
								if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
								{
									if (unk_0x30F813723591D02E(unk_0xB177666FAB6F4417(Local_320.f_16), "MPBitset"))
									{
										iVar5 = unk_0x1E2DFB0EF4BB4566(unk_0xB177666FAB6F4417(Local_320.f_16), "MPBitset");
									}
									unk_0x5D96D8530B3D0904(&iVar5, 0x0000000A);
									unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_320.f_16), "MPBitset", iVar5);
								}
								if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 0x00000003))
								{
									unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_320.f_16), "Not_Allow_As_Saved_Veh", 0x00000001);
								}
								unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000000);
								unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000002);
								unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000004);
								unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000003);
								unk_0x0674E58A79778E99(&iLocal_328, 0x0000000B);
								unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000006);
								unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000017);
								unk_0x71199B01895C6202(Local_320.f_43);
								Local_320.f_1A = 0x00000001;
								func_46(&(Local_320.f_1E));
								func_506(&(Local_320.f_1E), 0x00000000, 0x00000000);
								unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000007);
								unk_0xA485C14FF45FDB92(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001);
								unk_0xAB8E2DDC7AF955E0(Local_320.f_43, 0x00000001);
								unk_0x32DFF210E11D4B0F(Local_320.f_16, 0x00000001);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000002))
			{
				if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
				{
					if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000000))
					{
						Local_73.f_2 = 0x294A817D;
						func_16(Local_73, func_17(0x00000001));
						unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000002);
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000003) || (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x0000000A) && unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000001)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000003))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000002))
					{
						if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
						{
							if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000000))
							{
								Local_73.f_2 = 0x294A817D;
								func_16(Local_73, func_17(0x00000001));
								unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000002);
							}
						}
					}
				}
				Local_320.f_1A = 0x00000002;
			}
			if (func_15(unk_0xB177666FAB6F4417(Local_320.f_16)))
			{
				Local_320.f_1A = 0x00000002;
				Local_73.f_2 = 0x6A9A099B;
				func_16(Local_73, func_17(0x00000001));
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000004))
			{
				if (func_505(&(Local_320.f_1E), 0x00057E40, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000004);
					func_46(&(Local_320.f_1E));
					func_506(&(Local_320.f_1E), 0x00000000, 0x00000000);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x0000000A))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000003))
				{
					if (func_507(&(Local_320.f_1E)))
					{
						if (func_505(&(Local_320.f_1E), 0x0001D4C0, 0x00000000))
						{
							Local_320.f_1A = 0x00000002;
							Local_73.f_2 = 0x6A9A099B;
							func_16(Local_73, func_17(0x00000001));
						}
					}
					else
					{
						func_506(&(Local_320.f_1E), 0x00000000, 0x00000000);
					}
				}
				else if (func_507(&(Local_320.f_1E)))
				{
					func_46(&(Local_320.f_1E));
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000006))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000003))
				{
					if (Local_320.f_1A == 0x00000001)
					{
						Local_320.f_1A = 0x00000002;
					}
				}
			}
			if (func_11(0x00000006))
			{
				if (Local_320.f_1A == 0x00000001)
				{
					Local_320.f_1A = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
			{
				if (func_10(Local_320.f_16))
				{
					func_9(&(Local_320.f_16));
					Local_320.f_1A = 0x00000003;
				}
			}
			else
			{
				Local_320.f_1A = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x0000000A))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000001))
				{
					Local_320.f_1A = 0x00000000;
					unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000000);
					Local_320.f_1B = 0xFFFFFFF1;
					if (Local_320.f_43 != 0x00000000)
					{
						unk_0xAB8E2DDC7AF955E0(Local_320.f_43, 0x00000000);
					}
					Local_320.f_43 = 0x00000000;
					if (bLocal_279)
					{
						func_7(func_8(unk_0x15673EFF6BDD825C("AM_LAUNCHER", 0xFFFFFFFF, 0x00000000)), 0x00000000);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		switch (Local_320.f_45)
		{
			case 0x00000000:
				if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000008))
				{
					if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
					{
						if (!func_6())
						{
							if (unk_0x9222738B0C7F632D(unk_0xB177666FAB6F4417(Local_320.f_16)))
							{
								if (!unk_0x3D1053F9EB43B7AD(unk_0xB177666FAB6F4417(Local_320.f_16), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000009))
									{
										unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000009);
									}
								}
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000009))
						{
							unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000009);
						}
					}
				}
				break;
			}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000009))
	{
		if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
		{
			if (func_4(Local_320.f_16))
			{
				if (unk_0x526BC32A660C89E6(Local_320.f_16))
				{
					unk_0x20641932E5104B25(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001, 0x00000000);
					unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001);
					unk_0x1E9649458B15960F(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000000);
					unk_0xBA2CB24C70C8E726(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001, 0x00000001);
					unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000009);
				}
				else
				{
					unk_0x8D30F6387EE75385(Local_320.f_16);
				}
			}
			else
			{
				unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000009);
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&(Local_320.f_17), 0x00000009);
		}
	}
}

int func_4(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_5(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0x00000000;
}

int func_5(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
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

int func_6()
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
	{
		if (func_4(Local_320.f_16))
		{
			iVar0 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_320.f_16), 0xFFFFFFFF, 0x00000000);
			if (iVar0 != 0x00000000)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_7(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 0x52F61E60;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam1;
	if (!iParam0 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iParam0);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

void func_9(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_10(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0x00000000;
}

bool func_11(int iParam0)
{
	return !func_12(iParam0);
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			if (Global_40001.f_1A04)
			{
				return 0x00000000;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000005:
			if (Global_40001.f_1A05)
			{
				return 0x00000000;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (Global_40001.f_1A06)
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			if (Global_40001.f_1A07)
			{
				return 0x00000000;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000F:
			if (func_13(0x00000004))
			{
				return 0x00000000;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000011:
			if (func_13(0x00000004))
			{
				return 0x00000000;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000010:
			if (func_13(0x00000004))
			{
				return 0x00000000;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000012:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
			if (func_13(0x00000004))
			{
				return 0x00000000;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000001))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000013:
			if (func_13(0x00000004))
			{
				return 0x00000000;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000014:
			if (func_13(0x00000004))
			{
				return 0x00000000;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 0x00000007))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			break;
		
		case 0x0000000C:
			break;
	}
	return 0x00000001;
}

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_14(unk_0x117658E336116132(iVar0), 0x00000000, 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iVar0 /*421*/].f_D0, iParam0))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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

int func_15(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0xF1D385D359D58F72("bombdec1", 0x00000003))
		{
			if (unk_0x30F813723591D02E(iParam0, "bombdec1"))
			{
				return 0x00000001;
			}
		}
		if (unk_0xF1D385D359D58F72("bombdec", 0x00000003))
		{
			if (unk_0x30F813723591D02E(iParam0, "bombdec"))
			{
				return 0x00000001;
			}
		}
		if (unk_0xF1D385D359D58F72("bombowner", 0x00000003))
		{
			if (unk_0x30F813723591D02E(iParam0, "bombowner"))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_16(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0x75BF07BC;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Param0, 0x0000000E, iParam13);
	}
}

int func_17(int iParam0)
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
			if (func_14(iVar2, 0x00000000, 0x00000000))
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

int func_18(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xE75B31D140F2F10B(0x00000001))
	{
		return 0x00000000;
	}
	fVar0 = 1.5f;
	if (iParam1 == 0xFE0A508C)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_26B66F.f_1974 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam13)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 0x00000001);
			}
			unk_0x120A395B0ECB8EA5(iVar1, iParam8);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam6)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000000);
				}
				if (bParam11)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 0x00000001);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam7);
			unk_0x8E44A2B22BBBAFE4(iVar1, 0x00000001);
			if (bParam10)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 0x00000005, 0x00000005, 1f);
			}
			func_19(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_19(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_20(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
	{
		if ((Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 == iParam3 && Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_24B2D0.f_B60[0x00000001 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000002)
		{
			if (iVar0 < 0x00000001)
			{
				Global_24B2D0.f_B60[iVar0 /*6*/] = { Global_24B2D0.f_B60[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_24B2D0.f_B60[0x00000001 /*6*/] = { vParam0 };
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_3 = fParam1;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 = iParam2;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 = iParam3;
	}
}

int func_20(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > 0xFFFFFFFF)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000002)
		{
			if (Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return 0xFFFFFFFF;
}

int func_21(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!func_31(*uParam0, 0f, 0f, 0f, 0x00000000))
	{
		return 0x00000001;
	}
	switch (iLocal_281)
	{
		case 0x00000000:
			vVar0 = { -810.8889f, -126.9419f, 33f };
			vVar1 = { -807.2521f, -116.098f, 38f };
			vVar2 = { -809.0935f, -121.9038f, 36.504f };
			fVar3 = 240.8011f;
			break;
		
		case 0x00000001:
			vVar0 = { -804.004f, -1317.293f, 0.0005f };
			vVar1 = { -797.881f, -1310.998f, 7.0005f };
			vVar2 = { -801.6295f, -1313.865f, 4.0005f };
			fVar3 = 350.3062f;
			break;
		
		case 0x00000002:
			vVar0 = { -194.8607f, -1955.005f, 25.6205f };
			vVar1 = { -189.4078f, -1945.248f, 28.6205f };
			vVar2 = { -191.5592f, -1950.239f, 26.6205f };
			fVar3 = 288.8187f;
			break;
		
		case 0x00000003:
			vVar0 = { -2966.875f, 459.3981f, 13.4644f };
			vVar1 = { -2961.456f, 466.0484f, 16.1725f };
			vVar2 = { -2963.887f, 462.7986f, 14.2156f };
			fVar3 = 30.4415f;
			break;
		
		case 0x00000004:
			vVar0 = { -420.6335f, 1217.742f, 322.7591f };
			vVar1 = { -411.9892f, 1220.346f, 326.6421f };
			vVar2 = { -416.0102f, 1219.771f, 324.6421f };
			fVar3 = 230.4509f;
			break;
		
		case 0x00000005:
			vVar0 = { -1634.708f, -890.849f, 6.97f };
			vVar1 = { -1633.903f, -879.869f, 9.1264f };
			vVar2 = { -1634.006f, -885.3531f, 8.0518f };
			fVar3 = 321.31f;
			break;
		
		case 0x00000006:
			vVar0 = { -338.4312f, -947.4233f, 28.0788f };
			vVar1 = { -331.5926f, -944.408f, 32.0788f };
			vVar2 = { -334.8547f, -945.2789f, 30.0788f };
			fVar3 = 69.0442f;
			break;
		
		case 0x00000007:
			vVar0 = { 1093.925f, 245.6548f, 77.9908f };
			vVar1 = { 1094.243f, 255.0715f, 82.8556f };
			vVar2 = { 1093.686f, 250.4772f, 79.8556f };
			fVar3 = 328.5602f;
			break;
		
		case 0x00000008:
			vVar0 = { -1407.823f, 58.1796f, 50.8018f };
			vVar1 = { -1400.19f, 63.9074f, 54.3222f };
			vVar2 = { -1404.459f, 62.1459f, 52.0258f };
			fVar3 = 241.2814f;
			break;
		
		case 0x00000009:
			vVar0 = { -1230.324f, -1656.814f, 2.0412f };
			vVar1 = { -1226.429f, -1648.143f, 4.1986f };
			vVar2 = { -1228.901f, -1652.397f, 3.1204f };
			fVar3 = 305.0972f;
			break;
	}
	if (!func_31(vVar0, 0f, 0f, 0f, 0x00000000))
	{
		if (iLocal_281 < 0x0000000A)
		{
			if (Local_320.f_18 == 0xFFFFFFFF)
			{
				Local_320.f_18 = unk_0x198D598261EEA7EA(vVar0, vVar1);
			}
			else if (unk_0x23002DD5E7B94FD7(Local_320.f_18))
			{
				if (unk_0x9E6C7E283363593B(Local_320.f_18))
				{
					if (!unk_0x6FE31D882B028E10(Local_320.f_18))
					{
						if (!func_22(vVar2, 0x40A00000, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000))
						{
							*uParam0 = { vVar2 };
							*uParam1 = fVar3;
							unk_0xBD63401BCCEC233B(Local_320.f_18);
							Local_320.f_18 = 0xFFFFFFFF;
							return 0x00000001;
						}
						else
						{
							iLocal_281++;
							unk_0xBD63401BCCEC233B(Local_320.f_18);
							Local_320.f_18 = 0xFFFFFFFF;
						}
					}
					else
					{
						iLocal_281++;
						unk_0xBD63401BCCEC233B(Local_320.f_18);
						Local_320.f_18 = 0xFFFFFFFF;
					}
				}
			}
		}
		else
		{
			iLocal_281 = 0x00000000;
		}
	}
	return 0x00000000;
}

int func_22(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_14(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_27(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
		if (func_14(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_24(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_23(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
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
								if (unk_0x0EB28750412C3A5A(func_27(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_27(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
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

int func_23(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_25(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1407E9;
}

Vector3 func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_30() && Global_184507[iVar0 /*876*/].f_34F) && !func_29(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_28(iParam0);
}

Vector3 func_28(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_29(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_30()
{
	return Global_2564C8.f_11;
}

bool func_31(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_32(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	if (Global_40001.f_91F != 0x00000000)
	{
		iVar1 = Global_40001.f_91F;
		if (unk_0x3FC14104C3FD24D5(iVar1))
		{
			if (unk_0x4DAC2AD66FE0E696(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0x00000000)
	{
		iVar2 = func_35(&Local_320);
		iVar0 = func_34(iVar2);
	}
	return iVar0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return joaat("zion");
		
		case 0x00000001:
			return joaat("serrano");
		
		case 0x00000002:
			return joaat("jackal");
		
		case 0x00000003:
			return joaat("schafter2");
		
		case 0x00000004:
			return joaat("dubsta");
		
		case 0x00000005:
			return joaat("f620");
		
		case 0x00000006:
			return joaat("schwarzer");
		
		case 0x00000007:
			return joaat("rocoto");
		
		case 0x00000008:
			return joaat("sentinel2");
		
		case 0x00000009:
			return joaat("felon2");
		
		case 0x0000000A:
			return joaat("comet2");
		
		case 0x0000000B:
			return joaat("banshee");
		
		case 0x0000000C:
			return joaat("surano");
		
		case 0x0000000D:
			return joaat("coquette");
		
		case 0x0000000E:
			return joaat("carbonizzare");
		
		case 0x0000000F:
			return joaat("exemplar");
		
		case 0x00000010:
			return joaat("feltzer2");
		
		case 0x00000011:
			return joaat("bullet");
		
		case 0x00000012:
			return joaat("superd");
		
		case 0x00000013:
			return joaat("infernus");
		
		default:
	}
	return 0x00000000;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000005);
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000005)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 0x00000005)
		{
			iVar2 = (iVar2 - 0x00000005);
		}
		if (!(*uParam0)[iVar2] == 0xFFFFFFFF)
		{
			if (uParam0->f_6[iVar2] == 0x00000000)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return 0xFFFFFFFF;
}

bool func_36(int iParam0, bool bParam1, bool bParam2)
{
	return func_37(0x00000001, iParam0, 0x00000001, bParam1, bParam2);
}

int func_37(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1532F0, 0x00000000))
	{
		return 0x00000000;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_41(iParam0) - func_40(iParam0, 0x00000000)))
	{
		return 0x00000001;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_39(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_40(iParam0, 0x00000001));
		}
		if (!bParam4 && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000003)
		{
			iVar1 = (iVar1 - func_38(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_38(int iParam0)
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

int func_39(int iParam0)
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

int func_40(int iParam0, bool bParam1)
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

int func_41(int iParam0)
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

bool func_42(int iParam0)
{
	return func_43(func_63(), iParam0);
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_44(iParam1) || !func_44(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_58(iParam0);
	iVar1 = func_58(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_59(iParam0);
	iVar1 = func_59(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_60(iParam0);
	iVar1 = func_60(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_61(iParam0);
	iVar1 = func_61(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_62(iParam0);
	iVar1 = func_62(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_44(int iParam0)
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
	iVar0 = func_62(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_61(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_60(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_56(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_58(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_59(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_45(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_45(int iParam0, int iParam1)
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

void func_46(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

bool func_47(int iParam0)
{
	return !func_12(iParam0);
}

void func_48(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_56(*uParam0);
	iVar1 = func_58(*uParam0);
	iVar2 = func_59(*uParam0);
	iVar3 = func_60(*uParam0);
	iVar4 = func_61(*uParam0);
	iVar5 = func_62(*uParam0);
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
	iVar6 = func_45(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_45(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, iParam1);
	func_54(uParam0, iParam2);
	func_53(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_51(uParam0, iParam4);
	func_50(uParam0, iParam6);
}

void func_50(var uParam0, int iParam1)
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

void func_51(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_58(*uParam0);
	iVar1 = func_56(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_45(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_56(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_57(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_57(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_58(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_59(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_60(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_61(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_62(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_63()
{
	var uVar0;
	
	func_55(&uVar0, unk_0x4460E481B9E33ADA());
	func_54(&uVar0, unk_0x8D199E381D262EEF());
	func_53(&uVar0, unk_0xD8A54335F18763BA());
	func_51(&uVar0, unk_0x972A296334C9D57B());
	func_52(&uVar0, unk_0x118229AD063C3C1D());
	func_50(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_64()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (!Local_320.f_6[iVar0])
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_65()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000005))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			Local_320.f_23[iVar0] = 0xFFFFFFFF;
			iVar0++;
		}
		unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000005);
	}
}

void func_66()
{
	int iVar0;
	
	func_509(&Local_320, 0x00000005);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Local_320.f_C[iVar0] = func_67();
		iVar0++;
	}
	Local_320.f_21 = 0x00000001;
}

int func_67()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
	while (func_68(iVar0))
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000A);
	}
	return iVar0;
}

int func_68(int iParam0)
{
	int iVar0;
	
	if (!iParam0 == 0xFFFFFFFF)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			if (Local_320.f_C[iVar0] == iParam0)
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_69()
{
	int iVar0;
	
	iVar0 = func_35(&Local_320);
	if (iVar0 != Local_320.f_1C)
	{
		Local_320.f_1C = iVar0;
		Local_320.f_1D = unk_0x2B6E0A53779D29EA();
	}
}

int func_70()
{
	if (Local_320.f_14 > 0x00000000)
	{
		if (Local_320[0x00000000] != Local_320[0x00000001])
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_71(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

void func_72()
{
	Local_320.f_1D = 0x00000000;
}

void func_73()
{
	int iVar0;
	
	if (func_70())
	{
		if (Global_26B66F.f_1122 == 0x00000000 || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1123, 0x00000000))
		{
			if (!func_507(&uLocal_301) || func_505(&uLocal_301, 0x000007D0, 0x00000000))
			{
				iVar0 = func_35(&Local_319);
				if (iVar0 > 0xFFFFFFFF)
				{
					Global_26B66F.f_1122 = func_34(iVar0);
					func_46(&uLocal_299);
					func_506(&uLocal_299, 0x00000000, 0x00000000);
					if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1123, 0x00000000))
					{
						unk_0x0674E58A79778E99(&(Global_26B66F.f_1123), 0x00000000);
					}
				}
				else
				{
					func_46(&uLocal_301);
					func_506(&uLocal_301, 0x00000000, 0x00000000);
				}
			}
		}
		else if (Global_26B66F.f_1122 != 0x00000000)
		{
			if (func_505(&uLocal_299, 0x00004E20, 0x00000000))
			{
				if (!func_74(&Local_319, Global_26B66F.f_1122))
				{
					Global_26B66F.f_1122 = 0x00000000;
				}
				func_46(&uLocal_299);
				func_506(&uLocal_299, 0x00000000, 0x00000000);
			}
		}
	}
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam1);
	if (!iVar0 == 0xFFFFFFFF)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000005)
		{
			if (!(*uParam0)[iVar1] == 0xFFFFFFFF)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 0x00000001;
					}
				}
			}
			iVar1++;
		}
	}
	return 0x00000000;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 0x00000000;
		
		case joaat("serrano"):
			return 0x00000001;
		
		case joaat("jackal"):
			return 0x00000002;
		
		case joaat("schafter2"):
			return 0x00000003;
		
		case joaat("dubsta"):
			return 0x00000004;
		
		case joaat("f620"):
			return 0x00000005;
		
		case joaat("schwarzer"):
			return 0x00000006;
		
		case joaat("rocoto"):
			return 0x00000007;
		
		case joaat("sentinel2"):
			return 0x00000008;
		
		case joaat("felon2"):
			return 0x00000009;
		
		case joaat("comet2"):
			return 0x0000000A;
		
		case joaat("banshee"):
			return 0x0000000B;
		
		case joaat("surano"):
			return 0x0000000C;
		
		case joaat("coquette"):
			return 0x0000000D;
		
		case joaat("carbonizzare"):
			return 0x0000000E;
		
		case joaat("exemplar"):
			return 0x0000000F;
		
		case joaat("feltzer2"):
			return 0x00000010;
		
		case joaat("bullet"):
			return 0x00000011;
		
		case joaat("superd"):
			return 0x00000012;
		
		case joaat("infernus"):
			return 0x00000013;
		
		default:
	}
	return 0xFFFFFFFF;
}

void func_76()
{
	int iVar0;
	
	if (((((bLocal_80 || bLocal_81) || bLocal_82) || bLocal_84) || bLocal_83) || bLocal_85)
	{
		if (((((Global_26B66F.f_1C.f_29 || func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000)) || func_138(unk_0xD803B885F5E47A62())) || !func_136()) || func_124()) || func_118())
		{
			bLocal_80 = 0x00000000;
			bLocal_82 = 0x00000000;
			bLocal_81 = 0x00000000;
			bLocal_84 = 0x00000000;
			bLocal_83 = 0x00000000;
			func_117();
		}
	}
	if ((func_116("FM_CTUT_RSP") || func_116("FM_CTUT_REP")) || func_116("FM_CTUT_LLS"))
	{
		if (!func_115() || func_118())
		{
			func_117();
		}
	}
	if (bLocal_85)
	{
		if (!func_116("FM_IHELP_LCP"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (func_98())
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
					{
						if (func_97())
						{
							func_91("FM_IHELP_LCP", 0x00000000);
						}
					}
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000012))
	{
		if (func_116("FM_IHELP_LCP"))
		{
			func_84("FM_IHELP_LCP");
		}
	}
	if (bLocal_80)
	{
		if (!func_116("FM_CTUT_MOD"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (func_98())
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000002))
					{
						if (func_97())
						{
							func_91("FM_CTUT_MOD", 0x00000000);
						}
					}
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000012))
	{
		if (func_116("FM_CTUT_MOD"))
		{
			func_84("FM_CTUT_MOD");
		}
	}
	if (bLocal_82)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (unk_0x0F1CCD77290EE12F())
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (!func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_RSP", 0x00000000);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000012))
	{
		if (func_116("FM_CTUT_RSP"))
		{
			func_84("FM_CTUT_RSP");
		}
	}
	if (bLocal_83)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (unk_0x0F1CCD77290EE12F())
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (!func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_REP", 0x00000000);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000012))
	{
		if (func_116("FM_CTUT_REP"))
		{
			func_84("FM_CTUT_REP");
		}
	}
	if (bLocal_84)
	{
		if (!func_116("FM_CTUT_LLS"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (func_98() || func_77())
				{
					if (func_97())
					{
						if (func_115())
						{
						}
					}
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000012))
	{
		if (func_116("FM_CTUT_LLS"))
		{
			func_84("FM_CTUT_LLS");
		}
	}
	if (bLocal_81)
	{
		if (!func_116("FM_IMP_SIM"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (func_98() || func_77())
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000003))
					{
						if (!iLocal_87)
						{
							if (func_97())
							{
								func_91("FM_IMP_SIM", 0x00000000);
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
									{
										iLocal_316 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
									}
								}
							}
						}
						else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
								if (iVar0 != iLocal_316)
								{
									iLocal_87 = 0x00000000;
									func_46(&uLocal_303);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_507(&uLocal_303))
		{
			func_506(&uLocal_303, 0x00000000, 0x00000000);
		}
		else if (func_505(&uLocal_303, 0x00004E20, 0x00000000))
		{
			func_117();
			iLocal_87 = 0x00000001;
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000012))
	{
		if (func_116("FM_IMP_SIM"))
		{
			func_84("FM_IMP_SIM");
		}
	}
}

bool func_77()
{
	return (((((func_78(0x00000027) || func_78(0x00000028)) || func_78(0x00000029)) || func_78(0x0000002A)) || func_78(0x0000002B)) || func_78(0x0000002C));
}

int func_78(int iParam0)
{
	return func_79(iParam0, 0x00000006, 0x00000001);
}

int func_79(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_181EC.f_54D[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_83() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_80(func_82(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_81(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_26();
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

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000033B;
			break;
		
		case 0x00000001:
			return 0x0000033C;
			break;
		
		case 0x00000002:
			return 0x0000033D;
			break;
		
		case 0x00000003:
			return 0x0000033E;
			break;
		
		case 0x00000004:
			return 0x0000033F;
			break;
		
		case 0x00000005:
			return 0x00000340;
			break;
		
		case 0x00000006:
			return 0x00000341;
			break;
		
		case 0x00000007:
			return 0x00000342;
			break;
		
		case 0x00000008:
			return 0x00000343;
			break;
		
		case 0x00000009:
			return 0x00000344;
			break;
		
		case 0x0000000A:
			return 0x00000345;
			break;
		
		case 0x0000000B:
			return 0x00000346;
			break;
		
		case 0x0000000C:
			return 0x00000347;
			break;
		
		case 0x0000000D:
			return 0x00000348;
			break;
		
		case 0x0000000E:
			return 0x00000349;
			break;
		
		case 0x0000000F:
			return 0x0000034B;
			break;
		
		case 0x00000010:
			return 0x0000034C;
			break;
		
		case 0x00000011:
			return 0x0000034D;
			break;
		
		case 0x00000012:
			return 0x0000034E;
			break;
		
		case 0x00000013:
			return 0x0000034F;
			break;
		
		case 0x00000014:
			return 0x00000350;
			break;
		
		case 0x00000015:
			return 0x00000351;
			break;
		
		case 0x00000016:
			return 0x00000352;
			break;
		
		case 0x00000017:
			return 0x00000353;
			break;
		
		case 0x00000018:
			return 0x00000354;
			break;
		
		case 0x00000019:
			return 0x00000355;
			break;
		
		case 0x0000001A:
			return 0x00000356;
			break;
		
		case 0x0000001B:
			return 0x00000357;
			break;
		
		case 0x0000001C:
			return 0x00000358;
			break;
		
		case 0x0000001D:
			return 0x00000359;
			break;
		
		case 0x0000001E:
			return 0x0000035A;
			break;
		
		case 0x0000001F:
			return 0x0000035B;
			break;
		
		case 0x00000020:
			return 0x0000035C;
			break;
		
		case 0x00000021:
			return 0x0000035D;
			break;
		
		case 0x00000022:
			return 0x0000035E;
			break;
		
		case 0x00000023:
			return 0x0000035F;
			break;
		
		case 0x00000024:
			return 0x00000360;
			break;
		
		case 0x00000025:
			return 0x00000361;
			break;
		
		case 0x00000026:
			return 0x00000362;
			break;
		
		case 0x00000027:
			return 0x00000363;
			break;
		
		case 0x00000028:
			return 0x00000367;
			break;
		
		case 0x00000029:
			return 0x00000368;
			break;
		
		case 0x0000002A:
			return 0x00000369;
			break;
		
		case 0x0000002B:
			return 0x0000036A;
			break;
		
		case 0x0000002C:
			return 0x000026F9;
			break;
		
		case 0x0000002D:
			return 0x00000EE0;
			break;
		
		case 0x0000002E:
			return 0x00001507;
			break;
		
		case 0x0000002F:
			return 0x0000180B;
			break;
		
		case 0x00000030:
			return 0x00001C40;
			break;
		
		case 0x00000031:
			return 0x00001EC6;
			break;
		
		case 0x00000034:
			return 0x000022D0;
			break;
		
		case 0x00000032:
			return 0x00002049;
			break;
		
		case 0x00000033:
			return 0x0000204B;
			break;
		
		default:
			break;
	}
	return 0x00002CF7;
}

int func_83()
{
	return Global_7830;
}

void func_84(char* sParam0)
{
	bool bVar0;
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	bVar0 = 0x00000000;
	if (func_90())
	{
		if (Global_140749 == 0x0000000B)
		{
			if (unk_0x7724E025FD444F45(sParam0) > 0x0000003F)
			{
				return;
			}
			bVar0 = unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
		}
		else
		{
			if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
			{
				return;
			}
			bVar0 = unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_85();
}

void func_85()
{
	func_87();
	func_86(0x00000000);
}

void func_86(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x8CD06866876216F2();
	Global_140749 = 0x00000014;
	StringCopy(&(Global_140749.f_1), "", 32);
	Global_140749.f_9 = 0x00000000;
	if (bVar0)
	{
		Global_140749.f_A = unk_0x2B6E0A53779D29EA();
		Global_140749.f_B = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_140749.f_C), "", 16);
	StringCopy(&(Global_140749.f_10), "", 64);
	StringCopy(&(Global_140749.f_20), "", 64);
	Global_140749.f_34 = 0x00000000;
	Global_140749.f_35 = 0x00000000;
	Global_140749.f_36 = 0x00000000;
	Global_140749.f_37 = 0xFFFFFFFF;
	Global_140749.f_38 = 0x00000000;
	Global_140749.f_3B = 0x00000000;
	if (bParam0)
	{
		return;
	}
}

void func_87()
{
	if (!func_89())
	{
	}
	if (func_90())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_88();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_88()
{
	switch (Global_140749)
	{
		case 0x00000014:
			return;
		
		case 0x00000000:
			return;
		
		case 0x00000001:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			return;
		
		case 0x00000002:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			unk_0x6D99DF8263D35CE5(Global_140749.f_35);
			return;
		
		case 0x00000003:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000004:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000005:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000006:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000007:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000008:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000009:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000A:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		case 0x0000000C:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000D:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000B:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000E:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000F:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000011:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			return;
		
		case 0x00000010:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000013:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000012:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		default:
	}
}

int func_89()
{
	if (!func_90())
	{
		return 0x00000000;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_88();
	return unk_0xB165082A56EE6E7F();
}

int func_90()
{
	if (Global_140749 == 0x00000014)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_91(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return;
	}
	if (func_95(sParam0))
	{
		return;
	}
	func_85();
	Global_140749 = 0x00000000;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_94();
	func_93(bParam1);
	func_92();
}

void func_92()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000001);
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000000);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0x00000000);
}

void func_94()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x05265C00);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

bool func_95(char* sParam0)
{
	if (!func_90())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		return func_96(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_96(char* sParam0)
{
	if (!func_90())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

bool func_97()
{
	bool bVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
	{
		if (func_4(Local_320.f_16))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_16)))
				{
				}
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_329, 0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_329, 0x00000001))
		{
			bVar0 = 0x00000001;
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_329, 0x00000002))
		{
			bVar0 = 0x00000001;
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_329, 0x00000003))
		{
			bVar0 = 0x00000001;
		}
		if (!bVar0)
		{
			unk_0x5D96D8530B3D0904(&iLocal_329, 0x00000000);
		}
	}
	return bVar0;
}

int func_98()
{
	if ((((((((((((((((((!func_14(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || func_114(0x00000008, 0xFFFFFFFF)) || func_114(0x0000000F, 0xFFFFFFFF)) || func_113()) || func_114(0x00000003, 0xFFFFFFFF)) || func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000)) || func_112()) || func_115()) || func_111()) || func_110()) || func_108()) || func_107()) || unk_0xD17F06053799A7CA()) || func_106() > 0x00000000) || !func_136()) || func_99()) || func_118())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_99()
{
	if (func_71(unk_0xD803B885F5E47A62(), 0x00000008))
	{
		return 0x00000001;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0x0000000A))
	{
		return 0x00000001;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0x0000000C))
	{
		return 0x00000001;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0x0000000E))
	{
		return 0x00000001;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0x0000000D))
	{
		return 0x00000001;
	}
	if (func_105())
	{
		return 0x00000001;
	}
	if (func_104())
	{
		return 0x00000001;
	}
	if (!func_103() && !func_102())
	{
		if (!func_101())
		{
			if (!func_100())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_100()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000007))
	{
		return 0x00000001;
	}
	iVar0 = Global_152E10[func_81(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000006))
	{
		unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C3), 0x00000007);
		return 0x00000001;
	}
	if (func_103())
	{
		return 0x00000001;
	}
	if (func_102())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_101()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000002);
}

bool func_102()
{
	return Global_140861;
}

bool func_103()
{
	return Global_140863;
}

int func_104()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x0000001C) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x0000001D))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_105()
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C4, 0x00000003);
}

int func_106()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C5;
}

int func_107()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_108()
{
	return func_109();
}

bool func_109()
{
	return Global_14E99F.f_28 == 0x00000003;
}

bool func_110()
{
	return Global_2537E2.f_BE7.f_242;
}

bool func_111()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_112()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

var func_113()
{
	return Global_248AB9;
}

bool func_114(int iParam0, int iParam1)
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

bool func_115()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_116(char* sParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (!func_90())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		if (unk_0x7724E025FD444F45(sParam0) > 0x0000003F)
		{
			return 0x00000000;
		}
	}
	else if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return 0x00000000;
	}
	return func_95(sParam0);
}

void func_117()
{
	if (!func_90())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_85();
}

int func_118()
{
	if (func_123(0x00000011))
	{
		return 0x00000001;
	}
	if (func_123(0x00000000))
	{
		return 0x00000001;
	}
	if (func_122(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		return 0x00000001;
	}
	if (func_119(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_119(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_120(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

int func_120(int iParam0)
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

int func_121()
{
	return 0xFFFFFFFF;
}

int func_122(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(0x000009B0, 0xFFFFFFFF, 0x00000000);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

int func_124()
{
	if (func_128())
	{
		return 0x00000001;
	}
	if (func_125(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		return 0x00000001;
	}
	if (func_122(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_125(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF && func_126(Global_18D84D[iParam0 /*615*/].f_B.f_21))
	{
		return 0x00000001;
	}
	if (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF)
	{
		if (func_126(Global_18D84D[iParam0 /*615*/].f_B.f_20))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000009B:
		case 0x000000A0:
		case 0x00000099:
		case 0x000000A2:
		case 0x0000009A:
		case 0x000000A3:
		case 0x000000AB:
		case 0x000000AC:
		case 0x000000F0:
		case 0x000000EF:
			return 0x00000001;
		
		default:
	}
	return func_127(iParam0, 0x00000000);
	return 0x00000000;
}

int func_127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x000000C7:
		case 0x000000CD:
		case 0x000000D2:
		case 0x000000D3:
			return 0x00000001;
		
		default:
	}
	if (iParam1 == 0x00000000)
	{
		switch (iParam0)
		{
			case 0x000000C2:
			case 0x000000C1:
			case 0x000000BD:
			case 0x00000099:
				return 0x00000001;
			}
		
		default:
	}
	return 0x00000000;
}

int func_128()
{
	if (!func_135(unk_0xD803B885F5E47A62()))
	{
		if (func_131(unk_0xD803B885F5E47A62()) || func_130(unk_0xD803B885F5E47A62()) != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
		if (func_129(unk_0xD803B885F5E47A62()) && Global_1806FA.f_4 == 0x00000085)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_129(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000004);
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 0xFFFFFFFF;
}

int func_131(int iParam0)
{
	if (func_134(iParam0))
	{
		return 0x00000001;
	}
	if (func_132(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_133(iParam0, 0x00000009);
	}
	return 0x00000000;
}

bool func_133(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_134(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

bool func_135(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000002);
}

int func_136()
{
	if (func_137() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_137()
{
	return Global_1406D3.f_12;
}

int func_138(int iParam0)
{
	if (!func_14(iParam0, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

int func_139(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_140(iParam0))
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

bool func_140(int iParam0)
{
	return func_141(iParam0);
}

bool func_141(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

void func_142()
{
	if (bLocal_78)
	{
		if (!unk_0xE4EDC4B0E92C078B(Global_195C0F))
		{
			Global_195C0F = unk_0x6CC513A908911CF0(Global_195C10);
			unk_0xBC8E0A7390523199(Global_195C0F, 0x00000125);
			unk_0x516E63E474722206(Global_195C0F, 1f);
			unk_0x6ABCCE651368DB93(Global_195C0F, 0x00000000);
			unk_0xDC5B2F9D0CCE3A10(Global_195C0F, "IMPEX_BLIP_FM");
			if (func_171())
			{
				unk_0xF412DD40DE84CE72(Global_195C0F, 0x00000001);
			}
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(Global_195C0F))
	{
		unk_0x142CC44DB769B57E(&Global_195C0F);
		if (bLocal_277)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					if (!func_166(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), 0x4874A9FF, &uLocal_308, 0x00000000, 0x000001F4, 0x00000001, 0x00000000))
					{
						if (func_118())
						{
							func_165("IMPEX_HIPR_DAM", 0xFFFFFFFF);
						}
					}
				}
			}
		}
	}
	if (bLocal_79)
	{
		if (iLocal_100 == 0xFFFFFFFF)
		{
			iLocal_100 = func_149(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000004, 0xFFFFFFFF);
			if (iLocal_100 != 0xFFFFFFFF)
			{
				func_143(iLocal_100, 0x00000001);
			}
		}
	}
	else if (iLocal_100 != 0xFFFFFFFF)
	{
		func_143(iLocal_100, 0x00000000);
		iLocal_100 = 0xFFFFFFFF;
	}
}

void func_143(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000027:
			func_144(0x00000027, bParam1);
			break;
		
		case 0x00000028:
			func_144(0x00000028, bParam1);
			break;
		
		case 0x00000029:
			func_144(0x00000029, bParam1);
			break;
		
		case 0x0000002A:
			func_144(0x0000002A, bParam1);
			break;
		
		case 0x0000002B:
			func_144(0x0000002B, bParam1);
			break;
		
		case 0x0000002C:
			func_144(0x0000002C, bParam1);
			break;
		
		default:
			break;
	}
}

void func_144(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_79(iParam0, 0x00000008, 0x00000000))
		{
			func_148(iParam0, 0x00000008, 0x00000000);
			func_147(iParam0);
		}
	}
	else if (func_79(iParam0, 0x00000008, 0x00000000))
	{
		func_145(iParam0, 0x00000008, 0x00000000);
		func_147(iParam0);
	}
}

void func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0674E58A79778E99(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_83() == 0x00000000)
		{
			iVar0 = func_80(func_82(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_146(func_82(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_147(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 0x00000001;
	Global_181EC.f_B4 = 0x00000001;
}

void func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_83() == 0x00000000)
		{
			iVar0 = func_80(func_82(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_146(func_82(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_149(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000034)
	{
		if (iParam1 == 0x00000006 || iParam1 == func_164(iVar0))
		{
			iVar4 = iVar0;
			if (func_163(iVar4))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_150(iVar0, 0x00000000), 0x00000001);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == 0xFFFFFFFF))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_150(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0f, 0f, 0f;
			break;
		
		case 0x00000000:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 0x00000001:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 0x00000002:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 0x00000003:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 0x00000004:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 0x00000005:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 0x00000006:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 0x00000007:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 0x00000008:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 0x00000009:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 0x0000000A:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 0x0000000B:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 0x0000000C:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 0x0000000D:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 0x0000000E:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 0x0000000F:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 0x00000010:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 0x00000011:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 0x00000012:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 0x00000013:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 0x00000014:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 0x00000015:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 0x00000016:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 0x00000017:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 0x00000018:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 0x00000019:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 0x0000001A:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 0x0000001B:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 0x0000001C:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 0x0000001D:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 0x0000001E:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 0x0000001F:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 0x00000020:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 0x00000021:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 0x00000022:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 0x00000023:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 0x00000024:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 0x00000025:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 0x00000026:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 0x00000027:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 0x00000028:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 0x00000029:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 0x0000002A:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 0x0000002B:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 0x0000002C:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 0x0000002D:
			return func_160(Global_189E7);
			break;
		
		case 0x0000002E:
			if (Global_184466 != func_121())
			{
				if (func_159(Global_184466))
				{
					return func_152(0x00000002, 0x00000002);
				}
				else if (func_151(Global_184466))
				{
					return func_152(0x0000002D, 0x00000003);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 0x0000002F:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 0x00000030:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 0x00000031:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 0x00000034:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 0x00000032:
			return Global_19E130;
			break;
		
		case 0x00000033:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_151(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_152(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184466 != func_121())
	{
		if (iParam1 == 0x00000003)
		{
			if (func_153(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000004))
			{
				if (func_153(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000005))
			{
				if (func_153(iParam0, 0x00000002, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_153(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_158(iParam3, &Var0))
	{
		return 0x00000000;
	}
	if (!func_158(iParam1, &vVar1))
	{
		return 0x00000000;
	}
	if (!bParam4)
	{
		Var2 = { func_156(iParam0) };
	}
	else
	{
		Var2 = { func_155(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_154(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_154(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 0x00000001;
}

Vector3 func_154(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_155(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000001:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000002:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x00000003:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x00000004:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000005:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000006:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000008:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_156(int iParam0)
{
	return func_157(iParam0);
}

struct<6> func_157(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000001:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000013:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000014:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000002:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 0x00000005:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 0x00000006:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 0x00000008:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 0x00000009:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000A:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 0x0000000B:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000C:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003D:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003E:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000D:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 0x0000000E:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000F:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003F:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000010:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 0x00000011:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000012:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000041:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000042:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002C:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000015:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000016:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000017:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000018:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000019:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x0000001A:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001B:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001C:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001D:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001E:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x0000001F:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000020:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000021:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000022:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000023:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000024:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000025:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000026:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000027:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 0x00000028:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000029:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000002A:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002B:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002D:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002E:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002F:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000030:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000031:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000032:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000033:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 0x00000034:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 0x00000035:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 0x00000036:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000037:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000038:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000039:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003A:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003B:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003C:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000043:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000044:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000047:
		case 0x00000045:
		case 0x00000046:
		case 0x00000049:
		case 0x00000048:
		case 0x0000004A:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_158(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000001:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000002:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_159(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000005))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000002:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000003:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 0x00000006:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 0x00000007:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 0x00000008:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 0x00000009:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 0x00000004:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 0x00000005:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 0x0000000A:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 0x0000000B:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 0x0000000C:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 0x0000000D:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 0x0000000E:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 0x0000000F:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 0x00000010:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 0x00000011:
			if (func_161() == 0x00000000)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_161()
{
	return func_162(unk_0xD803B885F5E47A62());
}

var func_162(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

bool func_163(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000027:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x00000027]);
			break;
		
		case 0x00000028:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x00000028]);
			break;
		
		case 0x00000029:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x00000029]);
			break;
		
		case 0x0000002A:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x0000002A]);
			break;
		
		case 0x0000002B:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x0000002B]);
			break;
		
		case 0x0000002C:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[0x0000002C]);
			break;
	}
	return bVar0;
}

int func_164(int iParam0)
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

void func_165(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_166(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_507(uParam2))
	{
		func_506(uParam2, 0x00000000, 0x00000000);
	}
	fParam3 = 0f;
	if (func_167(iParam0, iParam1, 0x00000001, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_167(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (!func_507(uParam3))
	{
		func_506(uParam3, 0x00000000, 0x00000000);
	}
	func_170(&Var3, iParam1);
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (func_168(iParam0, iParam1, 0x0000001E))
			{
				if (unk_0xEC560E589DF8370E(iParam0))
				{
					iVar0 = unk_0x940C1429253D3B1B(iParam0);
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (unk_0x34BFC6F0CB887BC2(iVar0))
						{
							iVar2 = unk_0x83FACCC48B68F9D1(iVar0);
							if (bParam2)
							{
								if (unk_0x54FF5F80FBB239F8(iParam1, iVar2, fParam4, 0xFFFFFFFF))
								{
									if (uParam7 || (!unk_0x51D830A7B896F825(iParam1, iVar2, 0x00000002) && !(Var3.f_7 != 0x00000000 && unk_0x51D830A7B896F825(iParam1, iVar2, 0x00000003))))
									{
										if (bParam6)
										{
											return 0x00000001;
										}
										else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
										{
											return 0x00000001;
										}
										else
										{
											return 0x00000000;
										}
									}
								}
							}
							else if (unk_0x54FF5F80FBB239F8(iParam1, iVar2, fParam4, 0xFFFFFFFF))
							{
								if (bParam6)
								{
									return 0x00000001;
								}
								else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
								{
									return 0x00000001;
								}
								else
								{
									return 0x00000000;
								}
							}
							else if (unk_0x51D830A7B896F825(iParam1, iVar2, 0x00000002))
							{
								if (bParam6)
								{
									return 0x00000001;
								}
								else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
								{
									return 0x00000001;
								}
								else
								{
									return 0x00000000;
								}
							}
							else if (Var3.f_7 != 0x00000000 && unk_0x51D830A7B896F825(iParam1, iVar2, 0x00000003))
							{
								if (bParam6)
								{
									return 0x00000001;
								}
								else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
								{
									return 0x00000001;
								}
								else
								{
									return 0x00000000;
								}
							}
						}
						else if (unk_0x405E212DDE472467(iVar0, 0x00000000))
						{
							iVar1 = unk_0x6937EA2286828455(iVar0, 0x00000000);
							if (unk_0xC844350D5D58C99A(iVar1))
							{
								if (bParam2)
								{
									if (unk_0x13F159934787D446(iParam1, iVar1, fParam4, 0xFFFFFFFF))
									{
										if (uParam7 || (!unk_0x48E02A6C90F89678(iParam1, iVar1, 0x00000002) && !(Var3.f_7 != 0x00000000 && unk_0x48E02A6C90F89678(iParam1, iVar1, 0x00000003))))
										{
											if (bParam6)
											{
												return 0x00000001;
											}
											else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
											{
												return 0x00000001;
											}
											else
											{
												return 0x00000000;
											}
										}
									}
								}
								else if (unk_0x13F159934787D446(iParam1, iVar1, fParam4, 0xFFFFFFFF))
								{
									if (bParam6)
									{
										return 0x00000001;
									}
									else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
									{
										return 0x00000001;
									}
									else
									{
										return 0x00000000;
									}
								}
								else if (unk_0x48E02A6C90F89678(iParam1, iVar1, 0x00000002))
								{
									if (bParam6)
									{
										return 0x00000001;
									}
									else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
									{
										return 0x00000001;
									}
									else
									{
										return 0x00000000;
									}
								}
								else if (Var3.f_7 != 0x00000000 && unk_0x48E02A6C90F89678(iParam1, iVar1, 0x00000003))
								{
									if (bParam6)
									{
										return 0x00000001;
									}
									else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
									{
										return 0x00000001;
									}
									else
									{
										return 0x00000000;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (unk_0x13F159934787D446(iParam1, iParam0, fParam4, 0xFFFFFFFF))
							{
								if (uParam7 || (!unk_0x48E02A6C90F89678(iParam1, iParam0, 0x00000002) && !(Var3.f_7 != 0x00000000 && unk_0x48E02A6C90F89678(iParam1, iParam0, 0x00000003))))
								{
									if (bParam6)
									{
										return 0x00000001;
									}
									else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
									{
										return 0x00000001;
									}
									else
									{
										return 0x00000000;
									}
								}
							}
						}
						else if (unk_0x13F159934787D446(iParam1, iParam0, fParam4, 0xFFFFFFFF))
						{
							if (bParam6)
							{
								return 0x00000001;
							}
							else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
							{
								return 0x00000001;
							}
							else
							{
								return 0x00000000;
							}
						}
						else if (unk_0x48E02A6C90F89678(iParam1, iParam0, 0x00000002))
						{
							if (bParam6)
							{
								return 0x00000001;
							}
							else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
							{
								return 0x00000001;
							}
							else
							{
								return 0x00000000;
							}
						}
						else if (Var3.f_7 != 0x00000000 && unk_0x48E02A6C90F89678(iParam1, iParam0, 0x00000003))
						{
							if (bParam6)
							{
								return 0x00000001;
							}
							else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
							{
								return 0x00000001;
							}
							else
							{
								return 0x00000000;
							}
						}
					}
				}
				else if (unk_0xE2F1E99DD161A861(iParam0) || unk_0x6BC06B42AD71CD8B(iParam0))
				{
					if (bParam2)
					{
						if (unk_0x13F159934787D446(iParam1, iParam0, fParam4, 0xFFFFFFFF))
						{
							if (uParam7 || (!unk_0x48E02A6C90F89678(iParam1, iParam0, 0x00000002) && !(Var3.f_7 != 0x00000000 && unk_0x48E02A6C90F89678(iParam1, iParam0, 0x00000003))))
							{
								if (bParam6)
								{
									return 0x00000001;
								}
								else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
								{
									return 0x00000001;
								}
								else
								{
									return 0x00000000;
								}
							}
						}
					}
					else if (unk_0x13F159934787D446(iParam1, iParam0, fParam4, 0xFFFFFFFF))
					{
						if (bParam6)
						{
							return 0x00000001;
						}
						else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
						{
							return 0x00000001;
						}
						else
						{
							return 0x00000000;
						}
					}
					else if (unk_0x48E02A6C90F89678(iParam1, iParam0, 0x00000002))
					{
						if (bParam6)
						{
							return 0x00000001;
						}
						else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
						{
							return 0x00000001;
						}
						else
						{
							return 0x00000000;
						}
					}
					else if (Var3.f_7 != 0x00000000 && unk_0x48E02A6C90F89678(iParam1, iParam0, 0x00000003))
					{
						if (bParam6)
						{
							return 0x00000001;
						}
						else if (iParam5 <= 0x00000000 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
						{
							return 0x00000001;
						}
						else
						{
							return 0x00000000;
						}
					}
				}
			}
		}
	}
	func_46(uParam3);
	return 0x00000000;
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != 0xFFFFFFFF)
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), func_169(iParam1), 0x00000001) <= IntToFloat(iParam2))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_169(int iParam0)
{
	switch (iParam0)
	{
		case 0x4874A9FF:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case 0x9A0B5EA0:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 0x4372B174:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 0x36A417D7:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 0x4FEB4A65:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case 0xCC53432F:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_170(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
		case 0x4874A9FF:
			*uParam0 = 0x00000063;
			uParam0->f_1 = 0x4874A9FF;
			uParam0->f_2 = 0x00000000;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = 0xF14165A2;
			uParam0->f_7 = 0x00000000;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_B = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_E = 32.498f;
			uParam0->f_1B = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_1B.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_1B.f_6 = 7f;
			return;
			break;
		
		case 0x00000001:
		case 0x9A0B5EA0:
			*uParam0 = 0x00000063;
			uParam0->f_1 = 0x9A0B5EA0;
			uParam0->f_2 = 0x00000001;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0x00000000;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_B = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_E = 60.0199f;
			uParam0->f_1B = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_1B.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_1B.f_6 = 7f;
			return;
			break;
		
		case 0x00000002:
		case 0x4372B174:
			*uParam0 = 0x00000063;
			uParam0->f_1 = 0x4372B174;
			uParam0->f_2 = 0x00000002;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0x00000000;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_B = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_E = 64.5334f;
			uParam0->f_1B = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_1B.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_1B.f_6 = 5.5f;
			return;
			break;
		
		case 0x00000003:
		case 0x36A417D7:
			*uParam0 = 0x00000063;
			uParam0->f_1 = 0x36A417D7;
			uParam0->f_2 = 0x00000003;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0x00000000;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_B = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_E = 60.0241f;
			uParam0->f_1B = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_1B.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_1B.f_6 = 5.5f;
			return;
			break;
		
		case 0x00000004:
		case 0x4FEB4A65:
			*uParam0 = 0x00000063;
			uParam0->f_1 = 0x4FEB4A65;
			uParam0->f_2 = 0x00000004;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0x00000000;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_B = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_E = 67.562f;
			uParam0->f_1B = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_1B.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_1B.f_6 = 5.5f;
			return;
			break;
		
		case 0x00000005:
		case 0xCC53432F:
			*uParam0 = 0x00000063;
			uParam0->f_1 = 0xCC53432F;
			uParam0->f_2 = 0x00000005;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0x00000000;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_B = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_E = 67.3374f;
			uParam0->f_1B = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_1B.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_1B.f_6 = 5.5f;
			return;
			break;
	}
}

int func_171()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_80(0x000004AF, 0xFFFFFFFF, 0x00000000);
	if (!unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000001))
	{
		iVar0 = 0x00000001;
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000002))
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

void func_172()
{
	if (bLocal_76)
	{
		if (!iLocal_77)
		{
			func_174(0x4874A9FF, 0x00000001, 0x00000000);
			func_173(0x00000001);
			iLocal_77 = 0x00000001;
		}
	}
	else if (iLocal_77)
	{
		func_174(0x4874A9FF, 0x00000000, 0x00000000);
		func_173(0x00000000);
		iLocal_77 = 0x00000000;
	}
}

void func_173(bool bParam0)
{
	if (Global_26B66F.f_11A7 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_26B66F.f_11A7 = bParam0;
	}
}

void func_174(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x8CD06866876216F2())
	{
	}
	else if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1192, func_175(iParam0)))
		{
			if (bParam2)
			{
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1192.f_1), func_175(iParam0));
			}
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1192), func_175(iParam0));
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1192, func_175(iParam0)))
	{
		if (bParam2)
		{
			unk_0x0674E58A79778E99(&(Global_26B66F.f_1192.f_1), func_175(iParam0));
		}
		unk_0x0674E58A79778E99(&(Global_26B66F.f_1192), func_175(iParam0));
	}
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0x4874A9FF:
			return 0x00000000;
			break;
		
		case 0x9A0B5EA0:
			return 0x00000001;
			break;
		
		case 0x4372B174:
			return 0x00000002;
			break;
		
		case 0x36A417D7:
			return 0x00000003;
			break;
		
		case 0x4FEB4A65:
			return 0x00000004;
			break;
		
		case 0xCC53432F:
			return 0x00000005;
			break;
	}
	return 0x00000000;
}

void func_176()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000000))
	{
		if (iLocal_311 >= 0x00000020)
		{
			unk_0x0674E58A79778E99(&iLocal_328, 0x00000005);
			iLocal_311 = 0x00000000;
			iLocal_283 = 0xFFFFFFFF;
		}
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_311)))
		{
			iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_311));
			iVar1 = unk_0x9539D44F3E4492F6(iVar0);
			if (func_14(iVar0, 0x00000000, 0x00000001))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000003))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_327[iLocal_311 /*4*/].f_2, 0x00000001))
					{
						unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000003);
					}
				}
				if (iLocal_283 == 0xFFFFFFFF)
				{
					if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
					{
						if (func_4(Local_320.f_16))
						{
							if (!unk_0xEB6A8945D1AC98A1(iVar1))
							{
								if (unk_0x82CCEAB29E9451DD(iVar1, unk_0xB177666FAB6F4417(Local_320.f_16)))
								{
									if (unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_320.f_16), 0xFFFFFFFF, 0x00000000) == iVar1)
									{
										iLocal_283 = iLocal_311;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_311++;
		if (iLocal_311 >= 0x00000020)
		{
			unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000005);
		}
		func_262();
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000003))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 0x00000003))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 0x00000001))
				{
					if (func_260())
					{
						unk_0x5D96D8530B3D0904(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 0x00000003);
					}
				}
			}
		}
	}
	if (iLocal_280 != Local_320.f_22)
	{
		if (Local_320.f_22 == 0x00000000)
		{
			if (!unk_0xE5DBF9B6126856CA(Local_320.f_16))
			{
				iLocal_280 = Local_320.f_22;
				unk_0x28E5F00F131890E3(iLocal_280);
			}
		}
		else
		{
			iLocal_280 = Local_320.f_22;
			unk_0x28E5F00F131890E3(iLocal_280);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000000))
	{
		switch (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3)
		{
			case 0x00000000:
				if (!Global_26B66F.f_67B)
				{
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 0x00000003))
				{
					unk_0x0674E58A79778E99(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 0x00000003);
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000015))
				{
					unk_0x0674E58A79778E99(&iLocal_328, 0x00000015);
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 0x00000001))
				{
					unk_0x0674E58A79778E99(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 0x00000001);
				}
				if (((!func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && !func_112()) && !func_259(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000)) || func_71(unk_0xD803B885F5E47A62(), 0x00000006))
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000003))
					{
						unk_0x0674E58A79778E99(&iLocal_328, 0x00000003);
					}
					if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000013))
					{
						unk_0x0674E58A79778E99(&iLocal_328, 0x00000013);
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 0x00000003))
					{
						unk_0x0674E58A79778E99(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 0x00000003);
					}
					if (iLocal_282 != 0xFFFFFFFF)
					{
						iLocal_282 = 0xFFFFFFFF;
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000000))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000010))
						{
							unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000010);
							func_258(0x00000006, 0x00000001);
							unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000007);
							Global_26B66F.f_67A = 0x00000001;
							Global_26B66F.f_67B = 0x00000000;
						}
						if (unk_0xE75B31D140F2F10B(0x00000001))
						{
							if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
							{
								if (func_252())
								{
									if (Local_320.f_43 != 0x00000000)
									{
										unk_0xAB8E2DDC7AF955E0(Local_320.f_43, 0x00000001);
									}
									Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 0x00000001;
									Global_195C19 = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(Local_320.f_16));
									if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_320.f_16))))
									{
										unk_0xBC8E0A7390523199(Global_195C19, 0x0000015C);
										func_165("IMPEX_HIPB_INT", 0xFFFFFFFF);
									}
									else
									{
										unk_0xBC8E0A7390523199(Global_195C19, 0x000000E1);
										func_165("IMPEX_HIPR_INT", 0xFFFFFFFF);
									}
									unk_0x61755AC17D8F538E(Global_195C19, 0x00000002);
									unk_0xDC5B2F9D0CCE3A10(Global_195C19, "IMPEX_HIPR_BLP");
									func_258(0x00000006, 0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000007);
									Global_26B66F.f_67A = 0x00000001;
									if (func_118())
									{
										unk_0x9D7CDDB4B55142AF(Global_195C19, 0x00000000);
									}
								}
							}
						}
					}
				}
				else if (!Global_26B66F.f_67B)
				{
					Global_26B66F.f_67B = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
				{
					if (unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_16)))
							{
								func_251(0x00000001);
								if (func_250())
								{
									func_245(0x00000002, 0x00000000, 0x00000001);
								}
								if (unk_0xE4EDC4B0E92C078B(Global_195C19))
								{
									unk_0x142CC44DB769B57E(&Global_195C19);
								}
							}
							else
							{
								func_251(0x00000000);
								if (!func_244(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000000))
								{
									if (!unk_0xE4EDC4B0E92C078B(Global_195C19))
									{
										if (!iLocal_99)
										{
											func_243();
										}
									}
								}
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000013))
						{
							if (func_252())
							{
								if (func_241())
								{
									if (!unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_16)))
									{
										if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001)) < 2500f)
										{
											if (func_118())
											{
												func_165("FM_IMP_JAC", 0xFFFFFFFF);
											}
											unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000013);
										}
									}
								}
							}
						}
						if (func_240())
						{
						}
						func_238();
					}
					else
					{
						if (unk_0xE4EDC4B0E92C078B(Global_195C19))
						{
							unk_0x142CC44DB769B57E(&Global_195C19);
						}
						func_258(0x00000006, 0x00000000);
						unk_0x0674E58A79778E99(&iLocal_328, 0x00000007);
						Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 0x00000003;
					}
				}
				else
				{
					if (Local_320.f_43 != 0x00000000)
					{
						unk_0xAB8E2DDC7AF955E0(Local_320.f_43, 0x00000000);
					}
					if (unk_0xE4EDC4B0E92C078B(Global_195C19))
					{
						unk_0x142CC44DB769B57E(&Global_195C19);
					}
					func_258(0x00000006, 0x00000000);
					unk_0x0674E58A79778E99(&iLocal_328, 0x00000007);
					Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 0x00000003;
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000003))
				{
					func_258(0x00000006, 0x00000000);
					unk_0x0674E58A79778E99(&iLocal_328, 0x00000007);
					if (unk_0xE4EDC4B0E92C078B(Global_195C19))
					{
						unk_0x142CC44DB769B57E(&Global_195C19);
					}
					Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 0x00000003;
				}
				if (Local_320.f_1A == 0x00000003)
				{
					if (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 == 0x00000001)
					{
						if (Local_320.f_43 != 0x00000000)
						{
							unk_0xAB8E2DDC7AF955E0(Local_320.f_43, 0x00000000);
						}
						if (unk_0xE4EDC4B0E92C078B(Global_195C19))
						{
							unk_0x142CC44DB769B57E(&Global_195C19);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000010))
						{
							unk_0x0674E58A79778E99(&iLocal_328, 0x00000010);
						}
						func_258(0x00000006, 0x00000000);
						unk_0x0674E58A79778E99(&iLocal_328, 0x00000007);
						Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 0x00000003;
					}
				}
				break;
			
			case 0x00000003:
				func_251(0x00000000);
				break;
		}
		if (func_235())
		{
			if (func_234("IMPEX_HIPR_INT"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			if (unk_0xE4EDC4B0E92C078B(Global_195C19))
			{
				unk_0x142CC44DB769B57E(&Global_195C19);
			}
			if (Local_320.f_43 != 0x00000000)
			{
				unk_0xAB8E2DDC7AF955E0(Local_320.f_43, 0x00000000);
			}
			Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 0x00000003;
			func_258(0x00000006, 0x00000000);
			unk_0x0674E58A79778E99(&iLocal_328, 0x00000007);
			if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000010))
			{
				unk_0x0674E58A79778E99(&iLocal_328, 0x00000010);
			}
			func_251(0x00000000);
		}
		func_191();
		if (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 > 0x00000000 && Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 < 0x00000003)
		{
			func_188();
		}
	}
	else
	{
		if (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 != 0x00000000)
		{
			if (Local_320.f_43 != 0x00000000)
			{
				unk_0xAB8E2DDC7AF955E0(Local_320.f_43, 0x00000000);
			}
			Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000015))
		{
			unk_0x0674E58A79778E99(&iLocal_328, 0x00000015);
		}
		if (Global_26B66F.f_67A)
		{
			if (!func_507(&uLocal_293))
			{
				func_506(&uLocal_293, 0x00000000, 0x00000000);
			}
			else if (func_505(&uLocal_293, 0x00001388, 0x00000000))
			{
				func_46(&uLocal_293);
				Global_26B66F.f_67A = 0x00000000;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000010))
		{
			if (Local_320.f_22 == 0x00000000)
			{
				unk_0x0674E58A79778E99(&iLocal_328, 0x00000010);
			}
		}
	}
	func_177();
}

void func_177()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	var uVar3;
	bool bVar4;
	
	if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
	{
		if (func_4(Local_320.f_16))
		{
			if (!func_241())
			{
				if (!func_507(&uLocal_334))
				{
					func_506(&uLocal_334, 0x00000000, 0x00000000);
				}
				if (func_505(&uLocal_334, 0x000003E8, 0x00000000))
				{
					if (unk_0x526BC32A660C89E6(Local_320.f_16))
					{
						vVar1 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001) };
						if (func_185(vVar1, func_186(0x00000027), func_150(0x00000027, 0x00000000)))
						{
							if (func_180(0x00000027, 0x00000000, &vVar0, &fVar2, &uVar3, 0x00000000))
							{
								bVar4 = 0x00000001;
							}
						}
						else if (func_185(vVar1, func_186(0x00000028), func_150(0x00000028, 0x00000000)))
						{
							if (func_180(0x00000028, 0x00000000, &vVar0, &fVar2, &uVar3, 0x00000000))
							{
								bVar4 = 0x00000001;
							}
						}
						else if (func_185(vVar1, func_186(0x00000029), func_150(0x00000029, 0x00000000)))
						{
							if (func_180(0x00000029, 0x00000000, &vVar0, &fVar2, &uVar3, 0x00000000))
							{
								bVar4 = 0x00000001;
							}
						}
						else if (func_185(vVar1, func_186(0x0000002A), func_150(0x0000002A, 0x00000000)))
						{
							if (func_180(0x0000002A, 0x00000000, &vVar0, &fVar2, &uVar3, 0x00000000))
							{
								bVar4 = 0x00000001;
							}
						}
						else if (func_185(vVar1, func_186(0x0000002B), func_150(0x0000002B, 0x00000000)))
						{
							if (func_180(0x0000002B, 0x00000000, &vVar0, &fVar2, &uVar3, 0x00000000))
							{
								bVar4 = 0x00000001;
							}
						}
						else if (func_185(vVar1, func_186(0x0000002C), func_150(0x0000002C, 0x00000000)))
						{
							if (func_180(0x0000002C, 0x00000000, &vVar0, &fVar2, &uVar3, 0x00000000))
							{
								bVar4 = 0x00000001;
							}
						}
					}
					func_46(&uLocal_334);
				}
				if (bVar4)
				{
					if (unk_0x526BC32A660C89E6(Local_320.f_16))
					{
						if (func_178(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
						{
							unk_0x08841CDB215AE18F(unk_0xB177666FAB6F4417(Local_320.f_16), vVar0, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(unk_0xB177666FAB6F4417(Local_320.f_16), fVar2);
							unk_0xBA2CB24C70C8E726(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001, 0x00000001);
							unk_0x1E9649458B15960F(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000000);
							unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001);
						}
					}
				}
			}
		}
	}
}

int func_178(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			iVar2 = func_179(iParam0, (iVar0 - 0x00000001), bParam6, iParam7);
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
						if (((!unk_0xEB6A8945D1AC98A1(iVar2) && iVar3 != func_121()) && func_14(iVar3, 0x00000001, 0x00000001)) || iParam8)
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

int func_179(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_180(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = 0f;
	*uParam4 = 1f;
	if (iParam0 == 0x00000027)
	{
		if (iParam1 == 0x00000000)
		{
			*uParam2 = { -1136.491f, -1991.127f, 12.1674f };
			*uParam3 = 312.0856f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000001)
		{
			*uParam2 = { -1133.253f, -1993.854f, 12.1687f };
			*uParam3 = 314.389f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000002)
		{
			*uParam2 = { -1130.806f, -1997.875f, 12.1713f };
			*uParam3 = 317.9671f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 0x00000003)
		{
			*uParam2 = { -1127.329f, -2001.548f, 12.1741f };
			*uParam3 = 315.1484f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x00000004)
		{
			*uParam2 = { -1123.286f, -2006.263f, 12.1791f };
			*uParam3 = 236.5043f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 0x00000005)
		{
			*uParam2 = { -1115.469f, -2012.307f, 12.1802f };
			*uParam3 = 264.1943f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x00000006)
		{
			*uParam2 = { -1110.562f, -2015.446f, 12.1999f };
			*uParam3 = 302.6618f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 0x00000007)
		{
			*uParam2 = { -1121.69f, -2000.23f, 12.1718f };
			*uParam3 = 238.2144f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 0x00000008)
		{
			*uParam2 = { -1111.589f, -2006.454f, 12.1692f };
			*uParam3 = 238.336f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 0x00000009)
		{
			*uParam2 = { -1138.648f, -1979.826f, 12.1634f };
			*uParam3 = 278.7886f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 0x0000000A)
		{
			*uParam2 = { -1124.321f, -1978.124f, 12.1856f };
			*uParam3 = 276.276f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 0x0000000B)
		{
			*uParam2 = { -1110.264f, -1975.971f, 12.1588f };
			*uParam3 = 279.4681f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x0000000C)
		{
			*uParam2 = { -1128.293f, -1984.828f, 12.1659f };
			*uParam3 = 295.1603f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 0x0000000D)
		{
			*uParam2 = { -1126.066f, -1991.346f, 12.1683f };
			*uParam3 = 227.6551f;
			*uParam4 = 0.7f;
		}
	}
	else if (iParam0 == 0x00000028)
	{
		if (iParam1 == 0x00000000)
		{
			*uParam2 = { 717.5009f, -1082.013f, 21.2916f };
			*uParam3 = 3.6761f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000001)
		{
			*uParam2 = { 716.7202f, -1069.264f, 21.2546f };
			*uParam3 = 3.5291f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000002)
		{
			*uParam2 = { 717.009f, -1058.204f, 21.0152f };
			*uParam3 = 355.8705f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 0x00000003)
		{
			*uParam2 = { 712.7385f, -1083.534f, 21.3647f };
			*uParam3 = 359.9393f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 0x00000004)
		{
			*uParam2 = { 712.7766f, -1072.967f, 21.307f };
			*uParam3 = 359.9453f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 0x00000005)
		{
			*uParam2 = { 712.8783f, -1061.094f, 21.1883f };
			*uParam3 = 357.2739f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 0x00000006)
		{
			*uParam2 = { 708.5093f, -1081.285f, 21.3978f };
			*uParam3 = 358.5361f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 0x00000007)
		{
			*uParam2 = { 708.9708f, -1068.358f, 21.3519f };
			*uParam3 = 357.9787f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 0x00000008)
		{
			*uParam2 = { 710.7449f, -1053.611f, 21.2011f };
			*uParam3 = 339.2883f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 0x00000009)
		{
			*uParam2 = { 704.6691f, -1079.536f, 21.3804f };
			*uParam3 = 359.4009f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x0000000A)
		{
			*uParam2 = { 704.4818f, -1065.911f, 21.4447f };
			*uParam3 = 0.9557f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 0x0000000B)
		{
			*uParam2 = { 716.4031f, -1044.615f, 20.9157f };
			*uParam3 = 280.6607f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 0x0000000C)
		{
			*uParam2 = { 725.7982f, -1044.226f, 21.046f };
			*uParam3 = 271.6107f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x0000000D)
		{
			*uParam2 = { 727.0708f, -1047.951f, 21.2648f };
			*uParam3 = 270.6534f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 0x00000029)
	{
		if (iParam1 == 0x00000000)
		{
			*uParam2 = { -365.9221f, -125.5196f, 37.6785f };
			*uParam3 = 65.4762f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000001)
		{
			*uParam2 = { -362.3411f, -122.0465f, 37.6788f };
			*uParam3 = 68.8025f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000002)
		{
			*uParam2 = { -363.4988f, -117.1944f, 37.6792f };
			*uParam3 = 78.9594f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 0x00000003)
		{
			*uParam2 = { -372.3338f, -115.238f, 37.6796f };
			*uParam3 = 74.7182f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 0x00000004)
		{
			*uParam2 = { -371.1733f, -121.0303f, 37.6797f };
			*uParam3 = 62.123f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x00000005)
		{
			*uParam2 = { -369.2153f, -127.0247f, 37.6784f };
			*uParam3 = 61.9032f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 0x00000006)
		{
			*uParam2 = { -371.8094f, -130.2364f, 37.6798f };
			*uParam3 = 52.11f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 0x00000007)
		{
			*uParam2 = { -378.4785f, -130.0621f, 37.6796f };
			*uParam3 = 36.469f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x00000008)
		{
			*uParam2 = { -387.4156f, -118.9469f, 37.6829f };
			*uParam3 = 38.3679f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 0x00000009)
		{
			*uParam2 = { -382.709f, -112.8489f, 37.6985f };
			*uParam3 = 65.0749f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 0x0000000A)
		{
			*uParam2 = { -397.1963f, -107.1517f, 37.6834f };
			*uParam3 = 33.315f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x0000000B)
		{
			*uParam2 = { -404.3896f, -96.5394f, 39.0491f };
			*uParam3 = 34.1156f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 0x0000002A)
	{
		if (iParam1 == 0x00000000)
		{
			*uParam2 = { 120.3574f, 6599.573f, 31.0156f };
			*uParam3 = 269.5703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000001)
		{
			*uParam2 = { 123.4549f, 6594.44f, 30.9958f };
			*uParam3 = 269.5584f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 0x00000002)
		{
			*uParam2 = { 126.712f, 6589.798f, 30.9386f };
			*uParam3 = 269.5731f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x00000003)
		{
			*uParam2 = { 133.9324f, 6585.555f, 30.9551f };
			*uParam3 = 269.4128f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x00000004)
		{
			*uParam2 = { 136.8265f, 6580.12f, 31.013f };
			*uParam3 = 269.4126f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x00000005)
		{
			*uParam2 = { 141.8716f, 6575.214f, 30.9522f };
			*uParam3 = 270.5616f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x00000006)
		{
			*uParam2 = { 140.8046f, 6606.312f, 30.8449f };
			*uParam3 = 178.8423f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 0x00000007)
		{
			*uParam2 = { 145.8316f, 6601.099f, 30.85f };
			*uParam3 = 180.9941f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 0x00000008)
		{
			*uParam2 = { 150.5503f, 6596.533f, 30.8449f };
			*uParam3 = 177.9041f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 0x00000009)
		{
			*uParam2 = { 155.6983f, 6591.292f, 30.8449f };
			*uParam3 = 177.9025f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x0000000A)
		{
			*uParam2 = { 159.1213f, 6580.544f, 30.841f };
			*uParam3 = 208.1021f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 0x0000000B)
		{
			*uParam2 = { 153.3835f, 6581.357f, 30.843f };
			*uParam3 = 208.9007f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 0x0000000C)
		{
			*uParam2 = { 160.6086f, 6567.498f, 30.8061f };
			*uParam3 = 210.3887f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 0x0000000D)
		{
			*uParam2 = { 166.7977f, 6567.135f, 30.7544f };
			*uParam3 = 210.3833f;
			*uParam4 = 0.2f;
		}
	}
	else if (iParam0 == 0x0000002B)
	{
		if (iParam1 == 0x00000000)
		{
			*uParam2 = { 1182.498f, 2653.582f, 36.8099f };
			*uParam3 = 304.7889f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000001)
		{
			*uParam2 = { 1190.678f, 2661.143f, 36.8165f };
			*uParam3 = 321.483f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000002)
		{
			*uParam2 = { 1196.733f, 2669.66f, 36.7883f };
			*uParam3 = 345.6812f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 0x00000003)
		{
			*uParam2 = { 1200.466f, 2666.494f, 36.8099f };
			*uParam3 = 347.5349f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 0x00000004)
		{
			*uParam2 = { 1205.586f, 2667.136f, 36.8099f };
			*uParam3 = 352.7466f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x00000005)
		{
			*uParam2 = { 1210.698f, 2666.592f, 36.8099f };
			*uParam3 = 7.6557f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 0x00000006)
		{
			*uParam2 = { 1193.573f, 2688.714f, 36.7457f };
			*uParam3 = 87.5179f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x00000007)
		{
			*uParam2 = { 1181.127f, 2689.26f, 36.8532f };
			*uParam3 = 87.4959f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 0x00000008)
		{
			*uParam2 = { 1162.459f, 2689.204f, 37.1039f };
			*uParam3 = 87.5173f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 0x00000009)
		{
			*uParam2 = { 1162.663f, 2677.458f, 37.078f };
			*uParam3 = 268.6483f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 0x0000000A)
		{
			*uParam2 = { 1171.858f, 2677.125f, 36.995f };
			*uParam3 = 267.8824f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x0000000B)
		{
			*uParam2 = { 1224.358f, 2677.226f, 36.6702f };
			*uParam3 = 272.1325f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 0x0000002C)
	{
		if (iParam1 == 0x00000000)
		{
			*uParam2 = { -199.5331f, -1301.69f, 30.296f };
			*uParam3 = 263.703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000001)
		{
			*uParam2 = { -205.9477f, -1303.868f, 30.2575f };
			*uParam3 = 1.5267f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 0x00000002)
		{
			*uParam2 = { -200.7847f, -1298.636f, 30.296f };
			*uParam3 = 89.6847f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 0x00000003)
		{
			*uParam2 = { -193.9668f, -1305.65f, 30.3643f };
			*uParam3 = 86.5508f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 0x00000004)
		{
			*uParam2 = { -213.389f, -1305.822f, 30.3533f };
			*uParam3 = 88.0277f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 0x00000005)
		{
			*uParam2 = { -210.4487f, -1301.42f, 30.296f };
			*uParam3 = 50.2894f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x00000006)
		{
			*uParam2 = { -193.1976f, -1302.892f, 30.296f };
			*uParam3 = 310.5602f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 0x00000007)
		{
			*uParam2 = { -198.882f, -1304.772f, 30.325f };
			*uParam3 = 268.713f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 0x00000008)
		{
			*uParam2 = { -230.2501f, -1305.596f, 30.3533f };
			*uParam3 = 89.1508f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x00000009)
		{
			*uParam2 = { -186.4736f, -1305.746f, 30.3495f };
			*uParam3 = 270.2632f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x0000000A)
		{
			*uParam2 = { -236.5289f, -1302.071f, 30.296f };
			*uParam3 = 270.2677f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 0x0000000B)
		{
			*uParam2 = { -181.8344f, -1299.311f, 30.296f };
			*uParam3 = 88.0286f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_184(iParam0, iParam5))
	{
		if (iParam1 == 0x00000000)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000001)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 0x00000002)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 0x00000003)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 0x00000004)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 0x00000005)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x00000006)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 0x00000007)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 0x00000008)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x00000009)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x0000000A)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 0x0000000B)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_183(iParam0, iParam5))
	{
		switch (iParam5)
		{
			case 0x00000006:
				if (iParam1 == 0x00000000)
				{
					*uParam2 = { -1574.907f, -569.6819f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 0x00000001)
				{
					*uParam2 = { -1573.983f, -570.0646f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 0x00000002)
				{
					*uParam2 = { -1575.289f, -570.6058f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 0x00000003)
				{
					*uParam2 = { -1575.83f, -569.2993f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 0x00000004)
				{
					*uParam2 = { -1574.524f, -568.7581f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 0x00000005)
				{
					*uParam2 = { -1574.365f, -570.9885f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 0x00000006)
				{
					*uParam2 = { -1576.213f, -570.2231f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 0x00000007)
				{
					*uParam2 = { -1575.448f, -568.3754f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 0x00000008)
				{
					*uParam2 = { -1573.6f, -569.1407f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 0x00000009)
				{
					*uParam2 = { -1573.059f, -570.4473f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 0x0000000A)
				{
					*uParam2 = { -1575.672f, -571.5297f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 0x0000000B)
				{
					*uParam2 = { -1576.754f, -568.9166f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 0x00000007:
				if (iParam1 == 0x00000000)
				{
					*uParam2 = { -1387.561f, -481.637f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 0x00000001)
				{
					*uParam2 = { -1386.637f, -482.0197f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 0x00000002)
				{
					*uParam2 = { -1387.944f, -482.5609f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 0x00000003)
				{
					*uParam2 = { -1388.485f, -481.2543f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 0x00000004)
				{
					*uParam2 = { -1387.178f, -480.7131f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 0x00000005)
				{
					*uParam2 = { -1387.02f, -482.9435f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 0x00000006)
				{
					*uParam2 = { -1388.868f, -482.1782f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 0x00000007)
				{
					*uParam2 = { -1388.102f, -480.3304f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 0x00000008)
				{
					*uParam2 = { -1386.255f, -481.0958f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 0x00000009)
				{
					*uParam2 = { -1385.713f, -482.4024f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 0x0000000A)
				{
					*uParam2 = { -1388.327f, -483.4847f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 0x0000000B)
				{
					*uParam2 = { -1389.409f, -480.8716f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 0x00000008:
				if (iParam1 == 0x00000000)
				{
					*uParam2 = { -142.5312f, -590.6586f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 0x00000001)
				{
					*uParam2 = { -141.6073f, -591.0413f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 0x00000002)
				{
					*uParam2 = { -142.9139f, -591.5825f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 0x00000003)
				{
					*uParam2 = { -143.4551f, -590.2759f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 0x00000004)
				{
					*uParam2 = { -142.1485f, -589.7347f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 0x00000005)
				{
					*uParam2 = { -141.99f, -591.9651f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 0x00000006)
				{
					*uParam2 = { -143.8378f, -591.1998f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 0x00000007)
				{
					*uParam2 = { -143.0724f, -589.352f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 0x00000008)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 0x00000009)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 0x0000000A)
				{
					*uParam2 = { -140.6835f, -591.424f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 0x0000000B)
				{
					*uParam2 = { -143.2966f, -592.5063f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 0x00000009:
				if (iParam1 == 0x00000000)
				{
					*uParam2 = { -74.8035f, -814.8599f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 0x00000001)
				{
					*uParam2 = { -73.8796f, -815.2426f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 0x00000002)
				{
					*uParam2 = { -75.1862f, -815.7838f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 0x00000003)
				{
					*uParam2 = { -75.7274f, -814.4772f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 0x00000004)
				{
					*uParam2 = { -74.4208f, -813.936f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 0x00000005)
				{
					*uParam2 = { -74.2623f, -816.1664f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 0x00000006)
				{
					*uParam2 = { -76.11f, -815.4011f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 0x00000007)
				{
					*uParam2 = { -75.3447f, -813.5533f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 0x00000008)
				{
					*uParam2 = { -73.4969f, -814.3187f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 0x00000009)
				{
					*uParam2 = { -72.9557f, -815.6252f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 0x0000000A)
				{
					*uParam2 = { -75.5689f, -816.7076f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 0x0000000B)
				{
					*uParam2 = { -76.6513f, -814.0945f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				break;
		}
	}
	else if (func_182(iParam0, iParam5))
	{
		if (iParam1 == 0x00000000)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000001)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 0x00000002)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 0x00000003)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 0x00000004)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 0x00000005)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x00000006)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 0x00000007)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 0x00000008)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x00000009)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x0000000A)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 0x0000000B)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_181(iParam0, iParam5))
	{
		if (iParam1 == 0x00000000)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 0x00000001)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 0x00000002)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 0x00000003)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 0x00000004)
		{
			*uParam2 = { 2799.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 0x00000005)
		{
			*uParam2 = { 2801.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 0x00000006)
		{
			*uParam2 = { 2799.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 0x00000007)
		{
			*uParam2 = { 2801.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 0x00000008)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x00000009)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 0x0000000A)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 0x0000000B)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
	}
	return !func_31(*uParam2, 0f, 0f, 0f, 0x00000000);
}

int func_181(int iParam0, int iParam1)
{
	if (iParam0 == 0x0000002D)
	{
		if (iParam1 == 0x00000011)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_182(int iParam0, int iParam1)
{
	if (iParam0 == 0x0000002D)
	{
		if (iParam1 == 0x0000000A)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_183(int iParam0, int iParam1)
{
	if (iParam0 == 0x0000002D)
	{
		if (((iParam1 == 0x00000006 || iParam1 == 0x00000007) || iParam1 == 0x00000008) || iParam1 == 0x00000009)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_184(int iParam0, int iParam1)
{
	if (iParam0 == 0x0000002D)
	{
		if ((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_185(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = unk_0x0D1736C2E221BCEA(vParam2, sParam1);
		if (!unk_0x31609A585163CBAC(iVar0))
		{
			return 0x00000000;
		}
		iVar1 = unk_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

char* func_186(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "";
			break;
		
		case 0x00000000:
			return "v_hairdresser";
			break;
		
		case 0x00000001:
			return "v_barbers";
			break;
		
		case 0x00000002:
			return "v_barbers";
			break;
		
		case 0x00000003:
			return "v_barbers";
			break;
		
		case 0x00000004:
			return "v_barbers";
			break;
		
		case 0x00000005:
			return "v_barbers";
			break;
		
		case 0x00000006:
			return "v_barbers";
			break;
		
		case 0x00000007:
			return "v_clotheslo";
			break;
		
		case 0x00000008:
			return "v_clotheslo";
			break;
		
		case 0x00000009:
			return "v_clotheslo";
			break;
		
		case 0x0000000A:
			return "v_clotheslo";
			break;
		
		case 0x0000000B:
			return "v_clotheslo";
			break;
		
		case 0x0000000C:
			return "v_clotheslo";
			break;
		
		case 0x0000000D:
			return "v_clotheslo";
			break;
		
		case 0x0000000E:
			return "v_clothesmid";
			break;
		
		case 0x0000000F:
			return "v_clothesmid";
			break;
		
		case 0x00000010:
			return "v_clothesmid";
			break;
		
		case 0x00000011:
			return "v_clothesmid";
			break;
		
		case 0x00000012:
			return "v_clotheshi";
			break;
		
		case 0x00000013:
			return "v_clotheshi";
			break;
		
		case 0x00000014:
			return "v_clotheshi";
			break;
		
		case 0x00000015:
			return "";
			break;
		
		case 0x00000016:
			return "v_tattoo";
			break;
		
		case 0x00000017:
			return "v_tattoo2";
			break;
		
		case 0x00000018:
			return "v_tattoo2";
			break;
		
		case 0x00000019:
			return "v_tattoo";
			break;
		
		case 0x0000001A:
			return "v_tattoo";
			break;
		
		case 0x0000001B:
			return "v_tattoo";
			break;
		
		case 0x0000001C:
			return "v_gun";
			break;
		
		case 0x0000001D:
			return "v_gun2";
			break;
		
		case 0x0000001E:
			return "v_gun2";
			break;
		
		case 0x0000001F:
			return "v_gun2";
			break;
		
		case 0x00000020:
			return "v_gun2";
			break;
		
		case 0x00000021:
			return "v_gun2";
			break;
		
		case 0x00000022:
			return "v_gun2";
			break;
		
		case 0x00000023:
			return "v_gun2";
			break;
		
		case 0x00000024:
			return "v_gun2";
			break;
		
		case 0x00000025:
			return "v_gun2";
			break;
		
		case 0x00000026:
			return "v_gun";
			break;
		
		case 0x00000027:
			return "v_carmod";
			break;
		
		case 0x00000028:
			return "v_lockup";
			break;
		
		case 0x00000029:
			return "v_carmod";
			break;
		
		case 0x0000002A:
			return "v_carmod3";
			break;
		
		case 0x0000002B:
			return "v_carmod3";
			break;
		
		case 0x0000002C:
			return "lr_supermod_int";
			break;
		
		case 0x0000002D:
			return func_187(Global_189E7);
			break;
		
		case 0x0000002E:
			return "gr_grdlc_int_01";
			break;
		
		case 0x0000002F:
			return "xm_x17dlc_int_01";
			break;
		
		case 0x00000030:
			return "ba_dlc_int_03_ba";
			break;
		
		case 0x00000031:
			return "xs_x18_int_mod";
			break;
		
		case 0x00000034:
			return "ch_dlc_plan";
			break;
		
		case 0x00000032:
			return "vw_dlc_casino_apart";
			break;
		
		case 0x00000033:
			return "vw_dlc_casino_main";
			break;
	}
	return "";
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "imp_impexp_intwaremed";
			break;
		
		case 0x00000002:
			return "imp_impexp_intwaremed";
			break;
		
		case 0x00000003:
			return "imp_impexp_intwaremed";
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 0x00000004:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 0x00000005:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 0x0000000A:
			return "gr_grdlc_int_01";
			break;
		
		case 0x0000000B:
			return "gr_grdlc_int_02";
			break;
		
		case 0x0000000C:
			return "sm_smugdlc_int_01";
			break;
		
		case 0x0000000D:
			return "xm_x17dlc_int_01";
			break;
		
		case 0x0000000E:
			return "xm_x17dlc_int_02";
			break;
		
		case 0x0000000F:
			return "ba_dlc_int_01_ba";
			break;
		
		case 0x00000010:
			return "ba_dlc_int_03_ba";
			break;
		
		case 0x00000011:
			if (func_161() == 0x00000000)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_188()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_283 > 0xFFFFFFFF)
	{
		if (iLocal_283 != unk_0x57270EE11514DC67())
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_283)))
			{
				iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_283));
				bVar1 = 0x00000001;
				if (unk_0xF816C4B5324CB295(iVar0, unk_0xD803B885F5E47A62()))
				{
					iVar2 = 0x00000001;
				}
			}
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
	{
		if (func_4(Local_320.f_16))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000000))
				{
					if (Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 == 0x00000000)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_189(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000000, 0x0000000A);
						}
					}
				}
			}
		}
	}
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA402F6C87C08815C(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
	if (iParam1 == 0x00000000)
	{
	}
	unk_0x00D1596840E78F77(iParam0);
	if (func_14(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (func_190(iParam0) == 0x00000000)
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0x00000000))
				{
					if (unk_0xC03F94FBD72F6D02(iParam0))
					{
						unk_0x52B4A38883F77FE6(iParam0, "MP_Arrow");
						unk_0xE2B7BC472E1C601F(iParam0, uVar0, uVar1, uVar2, 0x000000BE);
						unk_0x07B14BDE5C8EF39E(iParam0, 0x00000001);
					}
				}
			}
		}
	}
}

int func_190(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if (unk_0xAFB8495D36825275(iVar0) == 0x00000000 && unk_0xC41A9202669A24C4(iVar0) == 0x00000000)
	{
		return 0x00000000;
	}
	if (unk_0xF79A7BCA9E38BBBC(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_191()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000005))
	{
		if (iLocal_282 != iLocal_283)
		{
			if (iLocal_283 > 0xFFFFFFFF)
			{
				if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_283)))
				{
					iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_283));
					if (iVar0 != unk_0xD803B885F5E47A62())
					{
						if (!func_259(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
						{
							func_192("IMPEX_TICK_DHPV", iVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
						}
					}
					if (unk_0xBFF81ED3B99522C7())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000008))
						{
							unk_0x5D96D8530B3D0904(&(Local_320.f_17), 0x00000008);
						}
					}
				}
			}
			iLocal_282 = iLocal_283;
		}
	}
}

int func_192(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
				unk_0x3A820E495A7BA3E5(func_232(iVar1, iParam1, 0x00000000));
			}
			else
			{
				unk_0x3A820E495A7BA3E5(func_201(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
			}
		}
		else
		{
			unk_0x3A820E495A7BA3E5(func_201(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		}
		unk_0xD06AC7C87A34A6AD(func_199(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		}
		else
		{
			Global_265942 = { func_198(iParam1) };
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
						Var2 = { func_197(&Var2) };
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
		func_193(0x0000000E, sParam0, 0x00000001, &Var2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_193(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_196() || !unk_0xA14BB9332558B949()) || !func_24(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = func_194(iParam2);
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

int func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Global_197EBE - 0x00000001))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_195(iVar0);
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

void func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000004;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 0x00000001) /*53*/] };
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

bool func_196()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

struct<16> func_197(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_198(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

var func_199(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_200(&cVar0);
}

var func_200(char[4] cParam0)
{
	return cParam0;
}

int func_201(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_230(iParam0) && !bParam4)
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
	if (((func_230(unk_0xD803B885F5E47A62()) || (func_229() && func_228())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001F)) && !bParam4)
	{
		iVar1 = func_227();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 0xFFFFFFFF)
				{
					if (func_14(unk_0x83FACCC48B68F9D1(iVar1), 0x00000000, 0x00000001))
					{
						if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
						{
							if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
							{
								return func_232(iParam1, iParam0, 0x00000000);
							}
							else
							{
								return func_214(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_214(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
			{
				if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
				{
					return func_232(iParam1, iParam0, 0x00000000);
				}
				else
				{
					return func_202(0x00000000, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				return func_202(0x00000000, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
	if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
	{
		if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
		{
			return func_232(iParam1, iParam0, 0x00000000);
		}
		else
		{
			return func_214(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_214(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_202(bool bParam0, int iParam1, bool bParam2)
{
	return func_203(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_203(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 0x00000003;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_213() || (func_212() && func_210())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_209(iParam2, iVar0);
		}
		else
		{
			return func_209(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 0xFFFFFFFF)
		{
			if (func_208(iVar0, iParam2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012))
			{
				if (iVar0 == iParam2)
				{
					return func_207(0x00000001);
				}
				else
				{
					return func_207(0x00000000);
				}
			}
			else if (bParam3)
			{
				return 0x0000001C;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000014))
			{
				return func_204(iVar0, iParam2, 0x00000001, 0x00000004);
			}
			else
			{
				return func_204(iVar0, iParam2, 0x00000000, 0x00000004);
			}
		}
		return 0x0000001C;
	}
	if (iVar0 == iParam2 || iParam2 == 0xFFFFFFFF)
	{
		return func_207(0x00000001);
	}
	return func_207(0x00000000);
}

int func_204(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_206(iParam0, iParam1, iParam3);
	if (func_205(Global_440000.f_2F9AE, 0x00000001))
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

int func_205(int iParam0, bool bParam1)
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

int func_206(int iParam0, int iParam1, int iParam2)
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
			if (!func_208(iParam0, iVar0, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_207(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000076;
	}
	return 0x00000074;
}

int func_208(int iParam0, int iParam1, int iParam2)
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

int func_209(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_206(iParam1, iParam0, 0x00000004);
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

bool func_210()
{
	if (func_211())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000004);
}

bool func_211()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_212()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

int func_213()
{
	if (func_211() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_214(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_223())
			{
				iVar3 = func_219(iParam0);
				if (!iVar3 == 0xFFFFFFFF)
				{
					return func_217(iVar3);
				}
			}
			if ((func_216(iParam1, iParam0, iVar0, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)) || ((func_208(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000017)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)))
			{
				return func_207(0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A))
			{
				return func_215(0x00000001);
			}
			else
			{
				return func_203(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0x00000000)
		{
			if (iParam0 == iParam1 || (Global_18060A == 0x00000001 && Global_180614 == 0x00000000))
			{
				return func_207(0x00000001);
			}
			else
			{
				return func_203(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 0x0000001C;
		}
	}
	iVar4 = func_219(iParam0);
	if (!iVar4 == 0xFFFFFFFF)
	{
		return func_217(iVar4);
	}
	if (bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_215(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000077;
	}
	return 0x00000074;
}

bool func_216(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_217(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_218(iParam0);
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

var func_218(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_219(int iParam0)
{
	if (!iParam0 == func_121())
	{
		if (func_221(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_220(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

int func_220(int iParam0)
{
	if (iParam0 != func_121())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_121();
}

bool func_221(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_222(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_121();
}

int func_222(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_121())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_223()
{
	if (((func_226() || func_225()) || func_30()) || func_224())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_224()
{
	return Global_2564C8.f_13;
}

var func_225()
{
	return Global_2564C8.f_10;
}

var func_226()
{
	return Global_2564C8.f_F;
}

var func_227()
{
	return Global_240006.f_2;
}

bool func_228()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000004);
}

bool func_229()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

int func_230(int iParam0)
{
	if (func_24(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_231())
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

bool func_231()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_232(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_223())
	{
		iVar2 = func_219(iParam1);
		if (!iVar2 == 0xFFFFFFFF)
		{
			return func_217(iVar2);
		}
	}
	if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000011)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 0x00000018))
		{
			return 0x00000012;
		}
	}
	if (iParam0 > 0xFFFFFFFF && iParam1 != func_121())
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
			iVar0 = func_203(iParam1, !bParam2, iParam0, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 0x0000000D))
		{
			iVar0 = func_233(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 0x0000001D))
		{
			iVar0 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A) && !func_208(iParam0, unk_0x08067D4957B73C02(iParam1), 0x00000000))
		{
			iVar0 = func_215(0x00000001);
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_233(int iParam0)
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

int func_234(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_235()
{
	if ((Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 > 0x00000000 && Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 < 0x00000003) || (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 == 0x00000000 && func_71(unk_0xD803B885F5E47A62(), 0x00000006)))
	{
		if (func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) || func_112())
		{
			if ((!func_236(unk_0xD803B885F5E47A62(), 0x00000005) && !func_236(unk_0xD803B885F5E47A62(), 0x00000020)) && !func_236(unk_0xD803B885F5E47A62(), 0x00000094))
			{
				return 0x00000001;
			}
			else if (!iLocal_99)
			{
				if (unk_0xE4EDC4B0E92C078B(Global_195C19))
				{
					unk_0x142CC44DB769B57E(&Global_195C19);
				}
				iLocal_99 = 0x00000001;
			}
		}
		else if (iLocal_99)
		{
			func_243();
			iLocal_99 = 0x00000000;
		}
		if (Local_320.f_1A == 0x00000003)
		{
			if (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 == 0x00000000 && func_71(unk_0xD803B885F5E47A62(), 0x00000006))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_236(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_83() != 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_237(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = iParam0;
	if (Global_184507[iVar0 /*876*/] == iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_237(int iParam0)
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

void func_238()
{
	if (unk_0xE4EDC4B0E92C078B(Global_195C19))
	{
		if (func_118() || func_239())
		{
			unk_0x9D7CDDB4B55142AF(Global_195C19, 0x00000000);
		}
		else
		{
			unk_0x9D7CDDB4B55142AF(Global_195C19, 0x00000004);
		}
		if (!iLocal_88)
		{
			if (func_259(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
			{
				unk_0x6ABCCE651368DB93(Global_195C19, 0x00000001);
				iLocal_88 = 0x00000001;
			}
		}
		else if (!func_259(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
		{
			unk_0x6ABCCE651368DB93(Global_195C19, 0x00000000);
			iLocal_88 = 0x00000000;
		}
	}
}

var func_239()
{
	return Global_24DDCF.f_714;
}

int func_240()
{
	if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
	{
		if (func_4(Local_320.f_16))
		{
			if (unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000000, 0x00001B58) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001, 0x00009C40))
			{
				if (unk_0x83F012E6200426DB(Local_320.f_16))
				{
					if (unk_0x526BC32A660C89E6(Local_320.f_16))
					{
						unk_0x5DAB50E08C3C504A(unk_0xB177666FAB6F4417(Local_320.f_16), -2000f);
						unk_0xDC544F7DF5E5164D(unk_0xB177666FAB6F4417(Local_320.f_16), 0f);
					}
					return 0x00000001;
				}
				else if (unk_0xBFF81ED3B99522C7())
				{
					if (func_10(Local_320.f_16))
					{
						unk_0x5DAB50E08C3C504A(unk_0xB177666FAB6F4417(Local_320.f_16), -2000f);
						unk_0xDC544F7DF5E5164D(unk_0xB177666FAB6F4417(Local_320.f_16), 0f);
						return 0x00000001;
					}
				}
				else
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_241()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_283 == 0xFFFFFFFF && unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000005))
	{
		return 0x00000000;
	}
	if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
	{
		if (func_4(Local_320.f_16))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_16)))
				{
					if (func_242(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_16), 0xFFFFFFFF))
					{
						return 0x00000001;
					}
				}
			}
			if (iLocal_283 >= 0x00000000)
			{
				if (iLocal_283 != unk_0x57270EE11514DC67())
				{
					if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_283)))
					{
						iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_283));
						if (func_14(iVar0, 0x00000001, 0x00000001))
						{
							iVar1 = unk_0x9539D44F3E4492F6(iVar0);
							if (unk_0x82CCEAB29E9451DD(iVar1, unk_0xB177666FAB6F4417(Local_320.f_16)))
							{
								if (func_242(iVar1, unk_0xB177666FAB6F4417(Local_320.f_16), 0xFFFFFFFF))
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
	return 0x00000000;
}

int func_242(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, iParam2, 0x00000000) == iParam0)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_243()
{
	Global_195C19 = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(Local_320.f_16));
	if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_320.f_16))))
	{
		unk_0xBC8E0A7390523199(Global_195C19, 0x0000015C);
	}
	else
	{
		unk_0xBC8E0A7390523199(Global_195C19, 0x000000E1);
	}
	unk_0x61755AC17D8F538E(Global_195C19, 0x00000002);
	unk_0xDC5B2F9D0CCE3A10(Global_195C19, "IMPEX_HIPR_BLP");
	if (func_118())
	{
		unk_0x9D7CDDB4B55142AF(Global_195C19, 0x00000000);
	}
}

int func_244(int iParam0, int iParam1)
{
	if (func_166(iParam0, 0x4874A9FF, &uLocal_308, 0f, 0x000001F4, 0x00000001, iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_245(int iParam0, int iParam1, bool bParam2)
{
	if (func_250())
	{
		if (iParam1 == 0x00000001)
		{
			if (Global_26B66F.f_112B == 0xFFFFFFFF)
			{
				Global_26B66F.f_112B = Global_40001.f_6719;
			}
			func_249(&(Global_26B66F.f_1129), 0x00000000, 0x00000000);
			if (bParam2)
			{
				if (Global_26B66F.f_112E == 0xFFFFFFFF)
				{
					Global_26B66F.f_112E = Global_40001.f_671A;
				}
				func_249(&(Global_26B66F.f_112C), 0x00000000, 0x00000000);
			}
			else
			{
				Global_1406A2 = 0x00000000;
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
				func_248(0x00000001);
			}
		}
		else
		{
			Global_1406A2 = 0x00000000;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
			func_248(0x00000001);
		}
		if ((!unk_0xA14BB9332558B949() && !func_247()) && !func_246(unk_0xD803B885F5E47A62()))
		{
			Global_EC6CC = 0x00000000;
		}
		unk_0x6EC9FBED3024FDF5(0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, iParam0);
	}
}

int func_246(int iParam0)
{
	if (func_139(iParam0, 0x00000001, 0x00000000))
	{
		if (Global_184507[iParam0 /*876*/] != 0x00000006)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_247()
{
	return Global_2564C8.f_2E4;
}

void func_248(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_250())
		{
			if (func_14(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000156, 0x00000000);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000007A, 0x00000000);
			}
			unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 1f);
			unk_0x2F82E0AC5EC27DF2(0x00000000);
			unk_0xDC4BBCD7EBECDC32(0x00000001);
			if (Global_1406A2.f_1 == 0x00000000 || Global_1406A2.f_2 == 0x00000001)
			{
				Global_1406A2.f_2 = 0x00000000;
				if (bParam0)
				{
					unk_0x03718F4C6E876DE6(0x00000000, 0x00000000);
				}
			}
		}
		else
		{
			if (func_14(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000156, 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000007A, 0x00000001);
				unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 0.5f);
				if (Global_1406A2.f_1 == 0x00000000 || Global_1406A2.f_2 == 0x00000001)
				{
					unk_0x03718F4C6E876DE6(0x00000001, 0x00000000);
				}
			}
			unk_0x2F82E0AC5EC27DF2(0x00000001);
			unk_0xDC4BBCD7EBECDC32(0x00000000);
		}
	}
}

void func_249(var uParam0, bool bParam1, bool bParam2)
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

bool func_250()
{
	return Global_1406A2;
}

void func_251(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001C))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EF), 0x0000001C);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001C))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_11EF), 0x0000001C);
	}
}

int func_252()
{
	if (func_118())
	{
		return 0x00000000;
	}
	if (!func_253(0x00000000, 0x00000001, 0x00000001, 0x00000001))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_253(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xFEBC1E4EC9E001F0())
	{
		return 0x00000000;
	}
	if (func_107())
	{
		return 0x00000000;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0x00000000;
	}
	if (func_115())
	{
		return 0x00000000;
	}
	if (func_112())
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
		{
			return 0x00000000;
		}
	}
	if (bParam0)
	{
		if (func_257(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (func_110())
	{
		return 0x00000000;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (bParam3)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (Global_180528)
	{
		return 0x00000000;
	}
	if (func_256())
	{
		return 0x00000000;
	}
	if (func_255())
	{
		return 0x00000000;
	}
	if (func_524())
	{
		return 0x00000000;
	}
	if (Global_12061)
	{
		return 0x00000000;
	}
	if (Global_26DD70)
	{
		return 0x00000000;
	}
	if (func_254(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_254(int iParam0)
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

bool func_255()
{
	return Global_2564C8.f_24F;
}

bool func_256()
{
	return Global_2564C8.f_2E8;
}

int func_257(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_D0 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_258(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
	}
}

int func_259(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_121())
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

int func_260()
{
	vector3 vVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
	{
		if (func_4(Local_320.f_16))
		{
			if (!func_241())
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001) };
				if (func_261(vVar0, 0x4874A9FF, 0x00000012))
				{
					if (func_244(unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_261(vector3 vParam0, int iParam1, int iParam2)
{
	if (unk_0x0EB28750412C3A5A(vParam0, func_169(iParam1), 0x00000001) <= IntToFloat(iParam2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_262()
{
	if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
	{
		if (func_4(Local_320.f_16))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 0x00000002))
					{
						unk_0x5D96D8530B3D0904(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 0x00000002);
					}
				}
				else if (func_263(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_16), 0x00000001) < 180f)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 0x00000002))
					{
						unk_0x5D96D8530B3D0904(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 0x00000002);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 0x00000002))
				{
					unk_0x0674E58A79778E99(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 0x00000002);
				}
			}
		}
	}
}

float func_263(int iParam0, int iParam1, int iParam2)
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
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, iParam2);
}

void func_264()
{
	int iVar0;
	
	if (iLocal_74)
	{
		func_369();
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000001))
		{
			if (Global_26B66F.f_693 > 0x00000000)
			{
				if (Global_26B66F.f_696 == 0x00000000)
				{
					Global_26B66F.f_696 = unk_0x2B6E0A53779D29EA();
				}
				else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_26B66F.f_696) > Global_40001.f_2CCD)
				{
					if (!func_107())
					{
						if (func_70())
						{
							if (func_252())
							{
								if (!func_368())
								{
									if (!func_367(0x00000000) && !func_124())
									{
										Global_5596 = 0x00000000;
										iVar0 = func_80(0x000004AF, 0xFFFFFFFF, 0x00000000);
										if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000000))
										{
											if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_26B66F.f_696) > 0x00004E20)
											{
												if (func_366(0x00000012, "CELL_CLTEST6", 0x00000002, "NULL", Global_26B66F.f_693, "TestSender1", 0x00000004, 0x00000000, 0x00000001, 0x00000000, 0x00000000, bLocal_95, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
												{
													unk_0x5D96D8530B3D0904(&iVar0, 0x00000000);
													func_146(0x000004AF, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
													unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000001);
													func_364(0f, 0f, 0f, func_365(0x00000013), "");
													Global_26B66F.f_695 = 0x00000001;
													iLocal_74 = 0x00000000;
												}
											}
										}
										else if (func_366(0x00000012, "CELL_CLTEST1", 0x00000002, "NULL", Global_26B66F.f_693, "TestSender1", 0x00000004, 0x00000000, 0x00000001, 0x00000000, 0x00000000, bLocal_95, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
										{
											func_364(0f, 0f, 0f, func_365(0x00000013), "");
											unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000001);
											Global_26B66F.f_695 = 0x00000001;
											iLocal_74 = 0x00000000;
										}
									}
								}
								else
								{
									Global_26B66F.f_696 = unk_0x2B6E0A53779D29EA();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000001))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000005))
		{
			if (func_252())
			{
				if (bLocal_95)
				{
					func_165("IMPEX_HELP_LNCH", 0xFFFFFFFF);
				}
				unk_0x5D96D8530B3D0904(&iLocal_305, 0x00000005);
				func_506(&uLocal_291, 0x00000000, 0x00000000);
			}
		}
	}
	if (iLocal_97)
	{
		if (func_514())
		{
			if (!func_507(&uLocal_105))
			{
				func_506(&uLocal_105, 0x00000000, 0x00000000);
			}
			else if (func_505(&uLocal_105, 0x00002710, 0x00000000))
			{
				if (func_265(0x00000012, "CELL_IMPT", 0x00000000, 0x00000000))
				{
					iLocal_97 = 0x00000000;
					func_46(&uLocal_105);
				}
			}
		}
	}
}

bool func_265(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0x00000000;
	bVar1 = 0x00000000;
	iVar2 = 0xFFFFFF9D;
	return func_266(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_266(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar1;
	
	uVar0 = 0x00000010;
	iVar1 = 0x00000002;
	if (bParam7)
	{
		iVar1 = 0x00000005;
	}
	return func_267(&uVar0, iParam0, func_363(), sParam1, iVar1, 0x00000003, iParam8, sParam2, bParam3, iParam4, sParam5, sParam6, 0xFFFFFFFF);
}

int func_267(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_362(sParam2, sParam3);
	iVar2 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		iVar2 = unk_0x12AB0310C2281427(sParam7);
	}
	if (func_361(iVar0, iVar1, iVar2))
	{
		return 0x00000001;
	}
	if (!func_357(iParam6))
	{
		return 0x00000000;
	}
	if (func_354(iVar0, iVar1, iVar2))
	{
		if (func_353())
		{
			return 0x00000000;
		}
		func_352();
		return func_274(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_273(iParam4))
	{
		return 0x00000000;
	}
	func_268(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0x00000000;
}

void func_268(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_14E99F.f_28.f_1 = iParam0;
	Global_14E99F.f_28.f_2 = iParam1;
	Global_14E99F.f_28.f_3 = iParam2;
	StringCopy(&(Global_14E99F.f_28.f_4), sParam3, 16);
	Global_14E99F.f_28.f_8 = iParam4;
	Global_14E99F.f_28.f_9 = iParam5;
	Global_14E99F.f_28.f_E = iParam6;
	func_269(iParam4);
	func_352();
	Global_14E99F.f_28.f_D = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x00001B58);
}

void func_269(int iParam0)
{
	if (func_272(iParam0))
	{
		func_271();
		return;
	}
	func_270();
}

void func_270()
{
	Global_14E99F.f_28.f_A = 0x00000000;
}

void func_271()
{
	Global_14E99F.f_28.f_A = 0x00000001;
}

int func_272(int iParam0)
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

bool func_273(int iParam0)
{
	return iParam0 > Global_14E99F.f_28.f_8;
}

int func_274(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_351();
	if (iParam6 == 0x00000005)
	{
		iParam6 = 0x00000000;
	}
	if (iParam5 == 0x00000008)
	{
		return func_348(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 0x00000004)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_345(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 0x00000001 || iParam5 == 0x00000007)
	{
		if (iParam6 == 0x00000002)
		{
			return func_348(uParam0, sParam3, sParam4);
		}
		return func_328(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 0x00000005)
	{
		return func_327(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000002)
	{
		return func_316(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000003)
	{
		return func_315(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000006)
	{
		return func_275(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0x00000000;
}

int func_275(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_314();
	bVar0 = 0x00000001;
	if (func_277(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_276(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_276(int iParam0)
{
	Global_14E99F.f_28.f_B = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam0);
	Global_14E99F.f_28.f_C = 0x00000001;
}

int func_277(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_121();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_308(iVar0);
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
	sVar4 = func_307(sParam5, bParam6, &iVar3);
	uVar5 = func_305(iParam7, &iVar3);
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
		bVar12 = func_304(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_281(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_280();
	}
	func_314();
	func_279();
	func_278();
	return 0x00000001;
}

void func_278()
{
	Global_14E99F.f_39 = 0x00000000;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_279()
{
	Global_14E99F.f_28 = 0x00000003;
}

void func_280()
{
	unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000008);
}

int func_281(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_282(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
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

int func_282(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_297();
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
	if (func_296() == 0x00000000)
	{
		func_294();
		return 0x00000000;
	}
	func_293(Global_4126B5);
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
	func_297();
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
				func_292(0x00000000);
				break;
			
			case 0x00000001:
				func_292(0x00000001);
				break;
			
			case 0x00000002:
				func_292(0x00000002);
				break;
			
			case 0x00000003:
				func_292(0x00000003);
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
		func_297();
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
			if (!func_291())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_290(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_286(0x00000001);
			func_290(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_283(uParam0, sParam1);
	return 0x00000001;
}

void func_283(var uParam0, char* sParam1)
{
	if (!func_284())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0xB9A1844D, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

int func_284()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_121())
	{
		return 0x00000000;
	}
	if (func_285(unk_0xD803B885F5E47A62()))
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

bool func_285(int iParam0)
{
	return func_133(iParam0, 0x00000014);
}

void func_286(int iParam0)
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
		if (func_289(0x0000000E))
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
								func_288(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_287(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
								func_287(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_287(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_287(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_287(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_288(&(Global_1CC3[iVar1 /*15*/]));
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
								func_288(&(Global_1CC3[iVar1 /*15*/]));
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
								func_288(&(Global_1CC3[iVar1 /*15*/]));
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
								func_288(&(Global_1CC3[iVar1 /*15*/]));
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
								func_288(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_287(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_287(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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

void func_287(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
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
		func_288(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_288(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_288(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_288(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_288(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_288(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_289(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_290(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
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

bool func_291()
{
	return Global_14086D;
}

void func_292(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1B416.f_36DE[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_293(int iParam0)
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

void func_294()
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
		if (!func_295(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
		{
			Global_4126B5 = iVar2;
		}
		iVar2++;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_18 = 0x00000001;
}

int func_295(struct<6> Param0, struct<6> Param1)
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

int func_296()
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
			if (!func_295(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
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

void func_297()
{
	if (func_289(0x0000000E))
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
		Global_4C1E = func_298();
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

var func_298()
{
	func_299();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_299()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_302(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_301(unk_0x16F2683693E537C9());
			if (func_300(iVar0) && (!func_289(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_300(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_300(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_301(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_302(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_302(int iParam0)
{
	if (func_300(iParam0))
	{
		return func_303(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_303(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_304(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_282(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
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

int func_305(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFF9D)
	{
		return 0xFFFFFF9D;
	}
	func_306(0x00000002, iParam1);
	return iParam0;
}

void func_306(int iParam0, var uParam1)
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

char* func_307(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_306(0x00000001, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x19C9F30A7697B43C(sParam0);
}

int func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = func_311(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_309(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_309(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_311(iParam0) != 0xFFFFFFFF)
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
	if (func_310(iParam0))
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

int func_310(int iParam0)
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

int func_311(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0x00000000, 0x00000001))
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
			func_312(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_312(int iParam0)
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
	func_313(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_313(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_121();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_314()
{
	Global_14E99F.f_28.f_9 = 0x00000004;
}

int func_315(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_314();
	bVar0 = 0x00000000;
	return func_277(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_316(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	return func_317(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_317(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_121();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_308(iVar0);
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
	sVar4 = func_307(sParam5, bParam6, &iVar3);
	uVar5 = func_305(iParam7, &iVar3);
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
		bVar12 = func_366(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_319(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_280();
	}
	func_318();
	func_279();
	func_278();
	return 0x00000001;
}

void func_318()
{
	Global_14E99F.f_28.f_9 = 0x00000003;
}

int func_319(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_321(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
	{
		if (bParam7 == 0x00000001)
		{
			Global_1F7F = iParam6;
			Global_1F1E[0x00000003 /*6*/] = { func_320(iParam0) };
			Global_1F6B = iParam0;
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

struct<4> func_320(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_321(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_297();
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
	if (func_326() == 0x00000000)
	{
		func_324();
		return 0x00000000;
	}
	func_323(Global_5570);
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
		func_292(0x00000000);
		func_292(0x00000002);
		func_292(0x00000001);
	}
	else
	{
		func_297();
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
					func_292(0x00000000);
					Global_1F7E = 0x00000000;
					break;
				
				case 0x00000001:
					func_292(0x00000001);
					Global_1F7E = 0x00000001;
					break;
				
				case 0x00000002:
					func_292(0x00000002);
					Global_1F7E = 0x00000002;
					break;
				
				case 0x00000003:
					func_292(0x00000003);
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
		func_297();
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
			if (!func_291())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_290(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_286(0x00000001);
			func_290(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_322(uParam0, sParam1);
	return 0x00000001;
}

void func_322(var uParam0, char* sParam1)
{
	if (!func_284())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0x629E0CB1, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

void func_323(int iParam0)
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

void func_324()
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
		if (!func_325(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
		{
			Global_5570 = iVar2;
		}
		iVar2++;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_18 = 0x00000001;
}

int func_325(struct<6> Param0, struct<6> Param1)
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

int func_326()
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
			if (!func_325(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
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

int func_327(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	func_318();
	bVar0 = 0x00000001;
	if (func_317(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_276(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_328(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
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
		bVar0 = func_344(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	else
	{
		bVar0 = func_334(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	if (bVar0)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000003))
		{
			func_333(0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000005))
		{
			func_332(0x00000001);
		}
		func_331();
		func_279();
		func_330();
		func_329();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_329()
{
	Global_26DB8C = 0x00000000;
}

void func_330()
{
	Global_14E99F.f_39 = 0x00000001;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_331()
{
	Global_14E99F.f_28.f_9 = 0x00000001;
}

void func_332(int iParam0)
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

void func_333(int iParam0)
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

int func_334(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_343(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
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
	return func_335(sParam3, iParam4, bParam7);
}

int func_335(char* sParam0, int iParam1, bool bParam2)
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
					func_342();
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
		if (func_114(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_341();
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
				func_297();
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
				if (func_340())
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
			if (func_339())
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
			func_338();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_337();
		func_336();
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
		func_342();
	}
	return 0x00000000;
}

void func_336()
{
	if (!func_284())
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

void func_337()
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

void func_338()
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

int func_339()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_340()
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

void func_341()
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

void func_342()
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

void func_343(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_344(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_343(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
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
	return func_335(sParam3, iParam4, bParam7);
}

int func_345(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (func_347(uParam0, iParam1, sParam2, sParam3, 0x00000009, sParam4, 0x00000000, 0x00000000, 0x00000001))
	{
		func_346();
		func_331();
		func_279();
		func_330();
		func_329();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_346()
{
	Global_553F = 0x00000000;
}

bool func_347(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_343(uParam0, iParam1, sParam2, iParam6, iParam7, 0x00000000);
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
	return func_335(sParam3, iParam4, bParam8);
}

int func_348(var uParam0, char* sParam1, char* sParam2)
{
	if (func_350(uParam0, sParam1, sParam2, 0x0000000C, 0x00000000, 0x00000000, 0x00000000))
	{
		func_349();
		func_279();
		func_330();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_349()
{
	Global_14E99F.f_28.f_9 = 0x00000002;
}

bool func_350(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_343(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_335(sParam2, iParam3, 0x00000000);
}

void func_351()
{
	Global_14E99F.f_37 = Global_14E99F.f_28.f_1;
	Global_14E99F.f_37.f_1 = Global_14E99F.f_28.f_A;
}

void func_352()
{
	Global_14E99F.f_28 = 0x00000001;
}

bool func_353()
{
	return Global_14E99F.f_28 == 0x00000001;
}

int func_354(int iParam0, int iParam1, int iParam2)
{
	if (!func_355(iParam0))
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

int func_355(int iParam0)
{
	if (!func_356())
	{
		return 0x00000000;
	}
	if (!Global_14E99F.f_28.f_1 == iParam0)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_356()
{
	if (Global_14E99F.f_28 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_357(int iParam0)
{
	if (func_360())
	{
		return 0x00000000;
	}
	if (func_109())
	{
		return 0x00000000;
	}
	if (func_367(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_1406D3.f_12 != 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_195C36 || func_359())
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iParam0, 0x00000006))
	{
		if (func_358())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_358()
{
	return unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_152CC2);
}

int func_359()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_360()
{
	return func_339();
}

int func_361(int iParam0, int iParam1, int iParam2)
{
	if (!func_109())
	{
		return 0x00000000;
	}
	return func_354(iParam0, iParam1, iParam2);
}

int func_362(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

char* func_363()
{
	return "TXTMSG";
}

int func_364(vector3 vParam0, char* sParam1, char* sParam2)
{
	int iVar0;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000010)
		{
			if (!unk_0x7F8A39872A07D2CE(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4), sParam1))
			{
				if (unk_0xEA6BC48857E0AC4C(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4)))
				{
					Global_26B66F.f_F80[iVar0 /*26*/] = 0x00000001;
					Global_26B66F.f_F80[iVar0 /*26*/].f_1 = { vParam0 };
					StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_A), sParam2, 64);
					return 0x00000001;
				}
			}
			else if (!func_31(Global_26B66F.f_F80[iVar0 /*26*/].f_1, vParam0, 0x00000000))
			{
				Global_26B66F.f_F80[iVar0 /*26*/] = 0x00000001;
				Global_26B66F.f_F80[iVar0 /*26*/].f_1 = { vParam0 };
				StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_A), sParam2, 64);
				return 0x00000001;
			}
			else
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

char* func_365(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_366(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_321(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
	{
		if (bParam11 == 0x00000001)
		{
			Global_1F7F = iParam10;
			Global_1F1E[0x00000003 /*6*/] = { func_320(iParam0) };
			Global_1F6B = iParam0;
			StringCopy(&Global_1F6C, sParam5, 64);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_367(int iParam0)
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

bool func_368()
{
	return func_356();
}

void func_369()
{
	if (func_70())
	{
		if (!iLocal_310 == Local_320.f_20)
		{
			Global_26B66F.f_66B = { Local_319 };
			func_370();
			iLocal_310 = Local_320.f_20;
		}
	}
}

void func_370()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000005)
	{
		StringCopy(&(Global_26B66F.f_67E[iVar1 /*4*/]), "", 16);
		if (!Global_26B66F.f_66B[iVar1] == 0xFFFFFFFF && Global_26B66F.f_66B.f_6[iVar1] == 0x00000000)
		{
			StringCopy(&(Global_26B66F.f_67E[iVar0 /*4*/]), func_371(Global_26B66F.f_66B[iVar1], 0x00000001), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_26B66F.f_693 = iVar0;
}

char* func_371(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return func_372(bParam1, "IMPEX_2020_0B", "IMPEX_2020_0");
		
		case 0x00000001:
			return func_372(bParam1, "IMPEX_2020_1B", "IMPEX_2020_1");
		
		case 0x00000002:
			return func_372(bParam1, "IMPEX_2020_2B", "IMPEX_2020_2");
		
		case 0x00000003:
			return func_372(bParam1, "IMPEX_2020_3B", "IMPEX_2020_3");
		
		case 0x00000004:
			return func_372(bParam1, "IMPEX_2020_4B", "IMPEX_2020_4");
		
		case 0x00000005:
			return func_372(bParam1, "IMPEX_2020_5B", "IMPEX_2020_5");
		
		case 0x00000006:
			return func_372(bParam1, "IMPEX_2020_6B", "IMPEX_2020_6");
		
		case 0x00000007:
			return func_372(bParam1, "IMPEX_2020_7B", "IMPEX_2020_7");
		
		case 0x00000008:
			return func_372(bParam1, "IMPEX_2020_8B", "IMPEX_2020_8");
		
		case 0x00000009:
			return func_372(bParam1, "IMPEX_2020_9B", "IMPEX_2020_9");
		
		case 0x0000000A:
			return func_372(bParam1, "IMPEX_2020_10B", "IMPEX_2020_10");
		
		case 0x0000000B:
			return func_372(bParam1, "IMPEX_2020_11B", "IMPEX_2020_11");
		
		case 0x0000000C:
			return func_372(bParam1, "IMPEX_2020_12B", "IMPEX_2020_12");
		
		case 0x0000000D:
			return func_372(bParam1, "IMPEX_2020_13B", "IMPEX_2020_13");
		
		case 0x0000000E:
			return func_372(bParam1, "IMPEX_2020_14B", "IMPEX_2020_14");
		
		case 0x0000000F:
			return func_372(bParam1, "IMPEX_2020_15B", "IMPEX_2020_15");
		
		case 0x00000010:
			return func_372(bParam1, "IMPEX_2020_16B", "IMPEX_2020_16");
		
		case 0x00000011:
			return func_372(bParam1, "IMPEX_2020_17B", "IMPEX_2020_17");
		
		case 0x00000012:
			return func_372(bParam1, "IMPEX_2020_18B", "IMPEX_2020_18");
		
		case 0x00000013:
			return func_372(bParam1, "IMPEX_2020_19B", "IMPEX_2020_19");
		
		default:
	}
	return "";
}

char* func_372(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_373()
{
	int iVar0;
	
	if (!iLocal_89)
	{
		if (!func_378(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			if (!func_122(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				if (!Local_320.f_1C == 0xFFFFFFFF)
				{
					if (!iLocal_312 == func_34(Local_320.f_1C))
					{
						if (!func_377(unk_0x16F2683693E537C9()))
						{
							if (!func_376(unk_0xD803B885F5E47A62()))
							{
								iLocal_312 = func_34(Local_320.f_1C);
								iVar0 = 0x00000000;
								while (iVar0 < iLocal_318)
								{
									unk_0x912240369F496C2F(iLocal_318[iVar0], iLocal_312);
									iVar0++;
								}
								iLocal_89 = 0x00000001;
								unk_0x523BCC9DC80CD82F(iLocal_312);
								func_375();
								func_374(iLocal_312);
							}
						}
					}
				}
			}
		}
	}
	else if ((((func_378(unk_0xD803B885F5E47A62(), 0x00000001) || (Local_320.f_1C > 0xFFFFFFFF && !iLocal_312 == func_34(Local_320.f_1C))) || func_377(unk_0x16F2683693E537C9())) || func_122(unk_0xD803B885F5E47A62(), 0x00000000)) || func_376(unk_0xD803B885F5E47A62()))
	{
		unk_0x71199B01895C6202(iLocal_312);
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_318)
		{
			unk_0x5B75DC33FA4C5798(iLocal_318[iVar0]);
			iVar0++;
		}
		func_375();
		iLocal_312 = 0x00000000;
		iLocal_89 = 0x00000000;
	}
}

void func_374(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000000))
	{
		if (iParam0 == Local_320.f_43)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_275[0x00000000] = unk_0x5BB0132D6ED407B7(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000001] = unk_0x5BB0132D6ED407B7(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000002] = unk_0x5BB0132D6ED407B7(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000003] = unk_0x5BB0132D6ED407B7(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000004] = unk_0x5BB0132D6ED407B7(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000005] = unk_0x5BB0132D6ED407B7(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000006] = unk_0x5BB0132D6ED407B7(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000007] = unk_0x5BB0132D6ED407B7(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000008] = unk_0x5BB0132D6ED407B7(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000009] = unk_0x5BB0132D6ED407B7(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_276 = 0x00000001;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_275[0x00000000] = unk_0x5BB0132D6ED407B7(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000001] = unk_0x5BB0132D6ED407B7(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000002] = unk_0x5BB0132D6ED407B7(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000003] = unk_0x5BB0132D6ED407B7(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000004] = unk_0x5BB0132D6ED407B7(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000005] = unk_0x5BB0132D6ED407B7(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000006] = unk_0x5BB0132D6ED407B7(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000007] = unk_0x5BB0132D6ED407B7(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000008] = unk_0x5BB0132D6ED407B7(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000009] = unk_0x5BB0132D6ED407B7(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_276 = 0x00000001;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_275[0x00000000] = unk_0x5BB0132D6ED407B7(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000001] = unk_0x5BB0132D6ED407B7(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000002] = unk_0x5BB0132D6ED407B7(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000003] = unk_0x5BB0132D6ED407B7(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000004] = unk_0x5BB0132D6ED407B7(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000005] = unk_0x5BB0132D6ED407B7(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000006] = unk_0x5BB0132D6ED407B7(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000007] = unk_0x5BB0132D6ED407B7(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000008] = unk_0x5BB0132D6ED407B7(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000009] = unk_0x5BB0132D6ED407B7(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_276 = 0x00000001;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_275[0x00000000] = unk_0x5BB0132D6ED407B7(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000001] = unk_0x5BB0132D6ED407B7(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000002] = unk_0x5BB0132D6ED407B7(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000003] = unk_0x5BB0132D6ED407B7(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000004] = unk_0x5BB0132D6ED407B7(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000005] = unk_0x5BB0132D6ED407B7(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000006] = unk_0x5BB0132D6ED407B7(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000007] = unk_0x5BB0132D6ED407B7(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000008] = unk_0x5BB0132D6ED407B7(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_275[0x00000009] = unk_0x5BB0132D6ED407B7(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
			iLocal_276 = 0x00000001;
			break;
	}
}

void func_375()
{
	int iVar0;
	
	if (iLocal_276)
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0x82F37C78CC14B4AB(iLocal_275[iVar0]))
		{
			unk_0x90B060395E2869BD(iLocal_275[iVar0]);
		}
		iLocal_275[iVar0] = 0x00000000;
		iVar0++;
	}
	iLocal_276 = 0x00000000;
}

int func_376(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_120(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

bool func_377(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
	}
	return unk_0x4D570FEF9D230CE7(iParam0) == Global_24B20;
}

bool func_378(int iParam0, bool bParam1)
{
	if (func_83() != 0x00000000)
	{
		return func_379(iParam0) != 0x00000000;
	}
	return func_139(iParam0, bParam1, 0x00000000);
}

int func_379(int iParam0)
{
	if (func_14(iParam0, 0x00000000, 0x00000001))
	{
		return Global_25033E[iParam0 /*421*/].f_1;
	}
	return 0x00000000;
}

void func_380()
{
	var uVar0;
	
	if (!func_507(&uLocal_297))
	{
		func_506(&uLocal_297, 0x00000000, 0x00000000);
	}
	else if (func_505(&uLocal_297, 0x000000FA, 0x00000000))
	{
		func_46(&uLocal_297);
		if (func_393(0x00000001, 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000005) && !func_392())
			{
			}
			else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if ((func_391() || func_392()) || func_388())
				{
					if (!func_387(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
					{
						if (!func_386(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) && !func_15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
						{
							if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
							{
								if (func_382(&uVar0))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000002))
									{
										if (func_252() && SYSTEM::TIMERA() > 0x000001F4)
										{
											func_165("IMPEX_FSPRAY_FM", 0xFFFFFFFF);
											unk_0x5D96D8530B3D0904(&iLocal_305, 0x00000002);
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0x00000000);
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000008))
								{
									if (func_252() && SYSTEM::TIMERA() > 0x000001F4)
									{
										func_165("IMPEX_CASH_FM", 0xFFFFFFFF);
										unk_0x5D96D8530B3D0904(&iLocal_305, 0x00000008);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0x00000000);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x0000000B))
							{
								if (func_252() && SYSTEM::TIMERA() > 0x000001F4)
								{
									func_165("IMPEX_WANTED_FM", 0xFFFFFFFF);
									unk_0x5D96D8530B3D0904(&iLocal_305, 0x0000000B);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0x00000000);
							}
						}
						else if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
						{
							if (!func_381())
							{
								if (!func_15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000003))
									{
										unk_0x0674E58A79778E99(&iLocal_305, 0x00000007);
										if (func_252() && SYSTEM::TIMERA() > 0x000007D0)
										{
											if (Global_26B66F.f_11A6 == 0x00000000)
											{
												if (!func_244(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
												{
													func_165("IMPEX_DELIVER_FM", 0xFFFFFFFF);
													unk_0x5D96D8530B3D0904(&iLocal_305, 0x00000003);
												}
											}
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0x00000000);
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000007))
								{
									if (func_252() && SYSTEM::TIMERA() > 0x000007D0)
									{
										func_165("IMPEX_RIG_FM", 0xFFFFFFFF);
										unk_0x5D96D8530B3D0904(&iLocal_305, 0x00000007);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0x00000000);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000006))
							{
								if (func_252() && SYSTEM::TIMERA() > 0x000007D0)
								{
									func_165("IMPEX_WANTED_P", 0xFFFFFFFF);
									unk_0x5D96D8530B3D0904(&iLocal_305, 0x00000006);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0x00000000);
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000004))
						{
							if (func_252() && SYSTEM::TIMERA() > 0x00001388)
							{
								func_165("IMPEX_WANTED_FM", 0xFFFFFFFF);
								unk_0x5D96D8530B3D0904(&iLocal_305, 0x00000004);
							}
						}
						else
						{
							SYSTEM::SETTIMERA(0x00000000);
						}
					}
				}
				else
				{
					if (func_234("IMPEX_FSPRAY_FM"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					unk_0x0674E58A79778E99(&iLocal_305, 0x00000002);
					unk_0x0674E58A79778E99(&iLocal_305, 0x00000003);
					unk_0x0674E58A79778E99(&iLocal_305, 0x00000004);
					unk_0x0674E58A79778E99(&iLocal_305, 0x00000006);
					unk_0x0674E58A79778E99(&iLocal_305, 0x00000007);
					unk_0x0674E58A79778E99(&iLocal_305, 0x00000008);
					unk_0x0674E58A79778E99(&iLocal_305, 0x0000000B);
					SYSTEM::SETTIMERA(0x00000000);
				}
			}
			else
			{
				if (func_234("IMPEX_FSPRAY_FM"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				unk_0x0674E58A79778E99(&iLocal_305, 0x00000002);
				unk_0x0674E58A79778E99(&iLocal_305, 0x00000003);
				unk_0x0674E58A79778E99(&iLocal_305, 0x00000004);
				unk_0x0674E58A79778E99(&iLocal_305, 0x00000006);
				unk_0x0674E58A79778E99(&iLocal_305, 0x00000007);
				unk_0x0674E58A79778E99(&iLocal_305, 0x00000008);
				unk_0x0674E58A79778E99(&iLocal_305, 0x0000000B);
				if (SYSTEM::TIMERA() > 0x00000000)
				{
					SYSTEM::SETTIMERA(0x00000000);
				}
			}
		}
		else if (func_234("IMPEX_FSPRAY_FM"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

int func_381()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000004)
	{
		iVar1 = (iVar2 - 0x00000001);
		if (!unk_0xBBA8A868118C90ED(iVar3, iVar1, 0x00000000))
		{
			if (unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(iVar3, iVar1, 0x00000000)))
			{
				if (!unk_0x437347B10A200C4B(unk_0xA30B8362589C124A(iVar3, iVar1, 0x00000000), 0x00000000))
				{
					iVar0 = unk_0xA30B8362589C124A(iVar3, iVar1, 0x00000000);
					if (!unk_0x34BFC6F0CB887BC2(iVar0))
					{
						return 0x00000001;
					}
				}
			}
		}
		iVar2++;
	}
	return 0x00000000;
}

int func_382(var uParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (unk_0xC844350D5D58C99A(iVar0) && unk_0xAFE0D3608EDA7039(iVar0))
		{
			*uParam0 = func_383(iVar0);
			if (!unk_0x7A7BDE279347E517((0x00000190 + *uParam0), 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000))
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

int func_383(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar3 = unk_0xA471721ED5268046(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 0x00000008;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 0x00000004;
	}
	fVar3 = (unk_0x6EE94F60DA2A2273(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0x00000000;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 0x00000014;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 0x00000028;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 0x00000050;
	}
	else
	{
		iVar5 = 0x00000064;
	}
	fVar3 = (unk_0xD96C5EC6FCB061BA(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0x00000000;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 0x00000014;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 0x00000028;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 0x0000003C;
	}
	else
	{
		iVar6 = 0x0000004B;
	}
	fVar3 = (SYSTEM::TO_FLOAT(unk_0x7F6DC62EA9922664(iParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0x00000000;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 0x00000028;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 0x00000050;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 0x00000096;
	}
	else
	{
		iVar8 = 0x000000C8;
	}
	if (unk_0xAFB99709A487B3A4(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0xDBF86CCBD1D2F357(iParam0, 0x00000001))
	{
		iVar8 += 50;
	}
	else if (unk_0x0B3E621E4A1D12D7(iParam0, 0x00000001))
	{
		iVar8 += 25;
	}
	if (unk_0xDBF86CCBD1D2F357(iParam0, 0x00000000))
	{
		iVar8 += 50;
	}
	else if (unk_0x0B3E621E4A1D12D7(iParam0, 0x00000000))
	{
		iVar8 += 25;
	}
	if (!unk_0xB8BCFE7E6CA4F9ED(iParam0))
	{
		iVar10 += 20;
		if (!unk_0xD6CC9546EDEF00CE(iParam0, 0x00000006))
		{
			iVar10 += 40;
		}
		if (!unk_0xD6CC9546EDEF00CE(iParam0, 0x00000007))
		{
			iVar10 += 40;
		}
	}
	if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iParam0)))
	{
		iVar1 = 0x00000000;
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000000))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000001))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000002))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000003))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000004))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 0x00000005))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0xE347785EEDFB544D(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0x25D57666028A7E5A(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000008)
	{
		if (unk_0x464B3D84B739AE72(iParam0, iVar2, 0x00000000))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0xA081CDBBF4F02A19(iParam0))
	{
		iVar11 = 0x00000032;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_385(unk_0x134B62B726CEC8E6(iParam0), 0x00000000))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_2D1F));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_40001.f_2D1F)))
		{
			iVar4 = Global_40001.f_2D1D;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_40001.f_2D1E)
		{
			iVar0 = Global_40001.f_2D1E;
		}
	}
	else if (func_384(iParam0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_2D22));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_40001.f_2D22)))
		{
			iVar4 = Global_40001.f_2D20;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_40001.f_2D21)
		{
			iVar0 = Global_40001.f_2D21;
		}
	}
	else
	{
		if (iVar0 > 0x00000000)
		{
			iVar4 = 0x00000032;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 0x000004E2)
		{
			iVar0 = 0x000004E2;
		}
	}
	return iVar0;
}

int func_384(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_385(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0x00000001;
			break;
		
		case joaat("sabregt2"):
			if (!Global_40001.f_378B)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_40001.f_378C)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_40001.f_378A)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_40001.f_378D)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_40001.f_378F)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_40001.f_378E)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case joaat("comet3"):
			if (Global_40001.f_48ED)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("diablous2"):
			if (Global_40001.f_48EF)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("fcr2"):
			if (Global_40001.f_48F3)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("elegy"):
			if (Global_40001.f_48F0)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("nero2"):
			if (Global_40001.f_48F7)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("italigtb2"):
			if (Global_40001.f_48F5)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("specter2"):
			if (Global_40001.f_48FA)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x50D4D19F:
			if (Global_40001.f_5091)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8D4B7A8A:
			if (Global_40001.f_5092)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8526E2F5:
		case 0x163F8520:
		case 0x67D52852:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x256E92BA:
		case 0x5BA0FF1E:
		case 0x49E25BA1:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x3C26BD0C:
		case 0x8D45DF49:
		case 0x9804F4C7:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xFE5F0722:
		case 0x93F09558:
		case 0xAE12C99C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x669EB40A:
		case 0x32174AFC:
		case 0xD556917C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xD6FB0F30:
		case 0xAE0A3D4F:
		case 0xB2E046FB:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x27D79225:
		case 0x9B065C9E:
		case 0x8644331A:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x6B73A9BE:
		case 0x817AFAAD:
		case 0x0409D787:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x665F785D:
		case 0x4201A843:
		case 0xC98BBAD6:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

bool func_386(int iParam0)
{
	return unk_0x30F813723591D02E(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_387(int iParam0)
{
	if (unk_0x30F813723591D02E(iParam0, "Veh_Modded_By_Player") && unk_0x1E2DFB0EF4BB4566(iParam0, "Veh_Modded_By_Player") != unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_388()
{
	int iVar0;
	
	if (func_516())
	{
		return 0x00000000;
	}
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (!func_390(iVar0, 0x00000001))
		{
			if (func_389(unk_0x134B62B726CEC8E6(iVar0)))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_389(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam0);
	if (iVar0 > 0xFFFFFFFF)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000A)
		{
			if (Local_320.f_23[iVar1] == iVar0)
			{
				if (!func_505(&(Local_320.f_2E[iVar1 /*2*/]), 0x0001D4C0, 0x00000000))
				{
					return 0x00000001;
				}
			}
			iVar1++;
		}
	}
	return 0x00000000;
}

int func_390(int iParam0, bool bParam1)
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

int func_391()
{
	int iVar0;
	
	if (func_516())
	{
		return 0x00000000;
	}
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		if (!Global_193797)
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (!func_390(iVar0, 0x00000001))
			{
				if (!unk_0x92C2290AA46758D3(iVar0, 0x00000000))
				{
					if (unk_0xDF1306B443CD3D15(iVar0, 0x00000001))
					{
						if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C <= 0x00000000)
						{
							if (!unk_0x30F813723591D02E(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_193796)
								{
									if (bLocal_277)
									{
										bLocal_277 = 0x00000000;
									}
									if (func_74(&Local_319, unk_0x134B62B726CEC8E6(iVar0)))
									{
										Global_26B66F.f_697 = 0x00000001;
										return 0x00000001;
									}
								}
							}
						}
					}
					else if (!bLocal_277)
					{
						bLocal_277 = 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_392()
{
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_320.f_17, 0x00000000))
		{
			if (unk_0xE5DBF9B6126856CA(Local_320.f_16))
			{
				if (func_4(Local_320.f_16))
				{
					if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_16)))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

bool func_393(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = 0x00000001;
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		bVar0 = 0x00000000;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				bVar0 = 0x00000000;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				bVar0 = 0x00000000;
			}
		}
	}
	if (bVar0)
	{
		if (func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
		{
			bVar0 = 0x00000000;
		}
	}
	if (bVar0)
	{
		if (func_112())
		{
			bVar0 = 0x00000000;
		}
	}
	if (!func_14(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000))
	{
		bVar0 = 0x00000000;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		bVar0 = 0x00000000;
	}
	if (func_122(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		bVar0 = 0x00000000;
	}
	return bVar0;
}

void func_394()
{
	int iVar0;
	
	switch (iLocal_102)
	{
		case 0x00000000:
			if (!func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
			{
				if (!func_507(&uLocal_103) || func_505(&uLocal_103, 0x000007D0, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							func_397(&uLocal_107, 0x00000004, iLocal_101, "MECHANIC_IMP", 0x00000000, 0x00000001);
							iLocal_330 = 0x00000000;
							iLocal_102++;
						}
					}
					func_46(&uLocal_103);
					func_506(&uLocal_103, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_86)
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (!iLocal_330)
									{
										iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
										if (func_383(iVar0) > 0x000001F4)
										{
											sLocal_331 = "FM_IEPOOR";
										}
										else
										{
											sLocal_331 = "FM_IEGOOD";
										}
										iLocal_330 = 0x00000001;
									}
									else if (func_396(&uLocal_107, "FM_1AU", sLocal_331, 0x0000000C, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_272 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
										iLocal_102++;
										iLocal_330 = 0x00000000;
									}
								}
							}
						}
					}
					else
					{
						func_395();
						iLocal_102 = 0x00000000;
					}
				}
				else
				{
					func_395();
					iLocal_102 = 0x00000000;
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_86)
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) != iLocal_272)
								{
									iLocal_102 = 0x00000001;
								}
							}
						}
					}
					else
					{
						func_395();
						iLocal_102 = 0x00000000;
					}
				}
				else
				{
					func_395();
					iLocal_102 = 0x00000000;
				}
			}
			break;
	}
}

void func_395()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iLocal_101))
	{
		unk_0x71199B01895C6202(joaat("s_m_y_xmech_02"));
		iVar0 = iLocal_101;
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
}

bool func_396(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_343(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	Global_280001 = 0x00000001;
	return func_335(sParam2, iParam3, 0x00000000);
}

void func_397(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_398()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	vector3 vVar9;
	int iVar10;
	
	if (func_393(0x00000001, 0x00000001))
	{
		switch (Local_327[unk_0x57270EE11514DC67() /*4*/].f_1)
		{
			case 0x00000000:
				if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					bVar7 = func_388();
					if ((func_391() || func_392()) || bVar7)
					{
						if (!func_381())
						{
							if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
							{
								if (!func_494())
								{
									if (bLocal_85)
									{
										bLocal_85 = 0x00000000;
									}
									iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
									if (unk_0xF1D385D359D58F72("AllowModSprayRepair", 0x00000002))
									{
										if (!unk_0x30F813723591D02E(iVar3, "AllowModSprayRepair") || (unk_0x30F813723591D02E(iVar3, "AllowModSprayRepair") && unk_0xB2C7CF65CF9B897C(iVar3, "AllowModSprayRepair") == 0x00000000))
										{
											unk_0xA1093ABB024EC9BD(iVar3, "AllowModSprayRepair", 0x00000001);
										}
									}
									if (!iLocal_91)
									{
										if (func_493(iVar3))
										{
											unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
											unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
										}
									}
									iLocal_332 = iVar3;
									if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x0000000F))
									{
										unk_0x0674E58A79778E99(&iLocal_328, 0x0000000F);
									}
									if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000009))
									{
										unk_0x0674E58A79778E99(&iLocal_305, 0x00000009);
									}
									if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x0000000C))
									{
										unk_0x0674E58A79778E99(&iLocal_305, 0x0000000C);
									}
									if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x0000000A))
									{
										unk_0x0674E58A79778E99(&iLocal_305, 0x0000000A);
									}
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x0000000C))
									{
										if (bVar7)
										{
											unk_0x5D96D8530B3D0904(&iLocal_328, 0x0000000C);
										}
									}
									else if (!bVar7)
									{
										unk_0x0674E58A79778E99(&iLocal_328, 0x0000000C);
									}
									if (func_386(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_78 = 0x00000001;
											if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
											{
												if (bLocal_84)
												{
													bLocal_84 = 0x00000000;
												}
												if (unk_0xA30B8362589C124A(iVar3, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
												{
													bLocal_81 = 0x00000001;
												}
											}
											else if (func_77())
											{
												if (bLocal_81)
												{
													bLocal_81 = 0x00000000;
												}
												bLocal_84 = 0x00000001;
											}
											bLocal_79 = 0x00000000;
											bLocal_80 = 0x00000000;
											bLocal_82 = 0x00000000;
											bLocal_83 = 0x00000000;
											bLocal_85 = 0x00000000;
											bLocal_86 = 0x00000001;
											if (func_492(0x4874A9FF, 0x00000012))
											{
												bLocal_76 = 0x00000001;
											}
											iLocal_314 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
											if (!unk_0x20906E1D6BDC7044(iLocal_314))
											{
												if (func_244(iLocal_314, 0x00000000))
												{
													if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000011))
													{
														unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000011);
													}
													else if (func_244(iLocal_314, 0x00000001))
													{
														vVar9 = { unk_0x56E9E0FD5ACCD35D(iLocal_314) };
														if (unk_0x9C66D99E63E8E24C(iLocal_314) < 0.5f || unk_0x755FF954DAE327E1(vVar9.y) < 1.3f)
														{
															func_491();
															func_482(unk_0xD803B885F5E47A62(), 0x00000000, 0x00004004, 0x00000000);
															if (func_392())
															{
																unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000004);
																unk_0x5D96D8530B3D0904(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 0x00000001);
															}
															if (func_391() || func_388())
															{
																unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000006);
															}
															if (func_481())
															{
																bLocal_75 = 0x00000001;
															}
															else
															{
																bLocal_75 = 0x00000000;
															}
															unk_0x71EDC33E5A423750(iLocal_314, 0x00000002);
															if (unk_0xAFE0D3608EDA7039(iLocal_314))
															{
																unk_0xAA6B3A4292417750(iLocal_314, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
															}
															Local_327[unk_0x57270EE11514DC67() /*4*/] = func_75(unk_0x134B62B726CEC8E6(iLocal_314));
															Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 = 0x00000001;
															iVar5 = 0x00000000;
															iVar4 = 0x00000000;
															while (iVar4 < 0x00000004)
															{
																iVar1 = (iVar4 - 0x00000001);
																iLocal_313[iVar4] = func_121();
																if (!unk_0xBBA8A868118C90ED(iLocal_314, iVar1, 0x00000000))
																{
																	if (unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(iLocal_314, iVar1, 0x00000000)))
																	{
																		if (!unk_0x437347B10A200C4B(unk_0xA30B8362589C124A(iLocal_314, iVar1, 0x00000000), 0x00000000))
																		{
																			iVar0 = unk_0xA30B8362589C124A(iLocal_314, iVar1, 0x00000000);
																			if (unk_0x34BFC6F0CB887BC2(iVar0))
																			{
																				if (func_14(unk_0x83FACCC48B68F9D1(iVar0), 0x00000000, 0x00000000))
																				{
																					if (unk_0xFB75B0F82CA525F6(unk_0x83FACCC48B68F9D1(iVar0)))
																					{
																						iLocal_313[iVar4] = unk_0x83FACCC48B68F9D1(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_284 = func_480(unk_0x134B62B726CEC8E6(iLocal_314));
															iLocal_285 = func_383(iLocal_314);
															fLocal_286 = SYSTEM::TO_FLOAT((iLocal_284 - iLocal_285));
															fLocal_286 = (fLocal_286 * Global_40001.f_96C);
															if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000004))
															{
																fLocal_286 = (fLocal_286 * 1.3f);
															}
															fLocal_286 = (fLocal_286 / SYSTEM::TO_FLOAT(iVar5));
															fLocal_287 = 500f;
															func_479();
															func_173(0x00000000);
															func_477(0x000004DF, 0x00000001, 0xFFFFFFFF);
															if (func_234("IMPEX_DELIVER_FM"))
															{
																unk_0xA37A90C62806D848(0x00000001);
															}
															unk_0x0674E58A79778E99(&iLocal_328, 0x0000000C);
															iVar6 = func_80(0x000004AF, 0xFFFFFFFF, 0x00000000);
															if (!unk_0xEAE0D21A50E6C7F4(iVar6, 0x00000001))
															{
																unk_0x5D96D8530B3D0904(&iVar6, 0x00000001);
																func_146(0x000004AF, iVar6, 0xFFFFFFFF, 0x00000001, 0x00000000);
															}
															else if (!unk_0xEAE0D21A50E6C7F4(iVar6, 0x00000002))
															{
																unk_0x5D96D8530B3D0904(&iVar6, 0x00000002);
																func_146(0x000004AF, iVar6, 0xFFFFFFFF, 0x00000001, 0x00000000);
															}
															func_476();
															iLocal_288 = 0x00000000;
															iLocal_288 = SYSTEM::ROUND(fLocal_286);
															iLocal_288 = (iLocal_288 - (iLocal_288 % 0x00000019));
															if (iLocal_333 == iVar3)
															{
																iLocal_288 = (iLocal_288 + iLocal_290);
															}
															if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000004))
															{
																if (iLocal_288 > Global_40001.f_A4)
																{
																	iLocal_288 = Global_40001.f_A4;
																}
															}
															else if (iLocal_288 > Global_40001.f_A4)
															{
																iLocal_288 = Global_40001.f_A4;
															}
															iLocal_289 = 0x00000000;
															fLocal_287 = (fLocal_287 * Global_40001.f_1084);
															iLocal_289 = SYSTEM::ROUND(fLocal_287);
															unk_0x0674E58A79778E99(&iLocal_328, 0x00000011);
															iLocal_315 = iLocal_314;
															iLocal_317 = unk_0x134B62B726CEC8E6(iLocal_314);
															if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000004))
															{
																unk_0x816B51B6D3C89626(0x00000013, iLocal_289, iLocal_288, iLocal_314);
															}
															else
															{
																unk_0x816B51B6D3C89626(0x00000078, iLocal_289, iLocal_288, iLocal_314);
															}
															func_475(0x00000013, 0x00000001);
															func_474();
															func_510();
														}
														else if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
														{
															func_482(unk_0xD803B885F5E47A62(), 0x00000000, 0x00004004, 0x00000000);
														}
													}
												}
												else if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000011))
												{
													unk_0x0674E58A79778E99(&iLocal_328, 0x00000011);
												}
											}
										}
										else
										{
											if (bLocal_78)
											{
												bLocal_78 = 0x00000000;
											}
											if (bLocal_86)
											{
												bLocal_86 = 0x00000000;
											}
											if (bLocal_81)
											{
												bLocal_81 = 0x00000000;
											}
											if (bLocal_84)
											{
												bLocal_84 = 0x00000000;
											}
											if (bLocal_85)
											{
												bLocal_85 = 0x00000000;
											}
										}
									}
									else if (!func_15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
									{
										if (func_382(&iVar8))
										{
											if (!func_387(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
											{
												if (unk_0xA30B8362589C124A(iVar3, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
												{
													if (iLocal_333 != iVar3)
													{
														iLocal_333 = iVar3;
														iLocal_290 = 0x00000000;
													}
													else if (iLocal_290 != iVar8)
													{
														if (iLocal_290 < iVar8)
														{
															iLocal_290 = iVar8;
														}
													}
												}
												if (!bLocal_79)
												{
													bLocal_79 = 0x00000001;
												}
												if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
												{
													if (func_77())
													{
														if (bLocal_80)
														{
															bLocal_80 = 0x00000000;
														}
														if (unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
														{
															if (func_383(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) > 0x00000000)
															{
																if (!bLocal_83)
																{
																	bLocal_83 = 0x00000001;
																}
															}
															else
															{
																if (bLocal_83)
																{
																	bLocal_83 = 0x00000000;
																}
																if (!bLocal_82)
																{
																	bLocal_82 = 0x00000001;
																}
															}
														}
													}
												}
												else if (!func_77())
												{
													if (bLocal_82)
													{
														bLocal_82 = 0x00000000;
													}
													if (bLocal_83)
													{
														bLocal_83 = 0x00000000;
													}
													if (!bLocal_80)
													{
														if (unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
														{
															bLocal_80 = 0x00000001;
														}
													}
												}
											}
											else
											{
												func_473();
											}
										}
										else
										{
											func_473();
										}
									}
									else
									{
										func_473();
										if (bLocal_86)
										{
											bLocal_86 = 0x00000000;
										}
									}
								}
							}
							else
							{
								iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
								if (iLocal_332 != iVar3)
								{
									if (!iLocal_91)
									{
										if (func_493(iVar3))
										{
											unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
											unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
										}
									}
									iLocal_332 = iVar3;
								}
								if (!bLocal_85)
								{
									func_473();
									bLocal_85 = 0x00000001;
								}
							}
						}
					}
					else
					{
						func_473();
						if (bLocal_86)
						{
							bLocal_86 = 0x00000000;
						}
						if (iLocal_91)
						{
							if (Local_320.f_21)
							{
								if (bLocal_96)
								{
									iLocal_91 = 0x00000000;
								}
							}
						}
						if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if ((func_234("IMPEX_NOT_NEED") || func_234("IMPEX_NO_MORE")) || func_234("IMPEX_NOT_PVEH"))
							{
								unk_0xA37A90C62806D848(0x00000001);
							}
						}
						iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (func_390(iVar2, 0x00000001))
						{
							if (unk_0xA30B8362589C124A(iVar2, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
							{
								if (unk_0x30F813723591D02E(iVar2, "Player_Vehicle"))
								{
									if (unk_0x1E2DFB0EF4BB4566(iVar2, "Player_Vehicle") != unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()) || iVar2 == iLocal_332)
									{
										if (unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
										{
											if (func_252())
											{
												if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x0000000F))
												{
													if (bVar7 || func_74(&Local_319, unk_0x134B62B726CEC8E6(iVar2)))
													{
														func_165("IMPEX_NOT_PVEH", 0xFFFFFFFF);
														unk_0x5D96D8530B3D0904(&iLocal_328, 0x0000000F);
													}
												}
											}
										}
									}
									else if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x0000000F))
									{
										if (iVar2 != iLocal_332)
										{
											unk_0x0674E58A79778E99(&iLocal_328, 0x0000000F);
										}
									}
								}
							}
						}
						else
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x0000000F))
							{
								if (iVar2 != iLocal_332)
								{
									unk_0x0674E58A79778E99(&iLocal_328, 0x0000000F);
								}
							}
							if (bLocal_92)
							{
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && func_492(0x4874A9FF, 0x00000012))
								{
									iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
									if (func_244(iVar2, 0x00000000))
									{
										if (!iLocal_90)
										{
											func_173(0x00000001);
											iLocal_90 = 0x00000001;
										}
										bLocal_76 = 0x00000001;
									}
								}
								else if (iLocal_90)
								{
									func_173(0x00000000);
									iLocal_90 = 0x00000000;
									bLocal_76 = 0x00000000;
								}
							}
						}
						if (func_492(0x4874A9FF, 0x00000012))
						{
							if (func_252())
							{
								if (func_390(iVar2, 0x00000001))
								{
									if (unk_0xDF1306B443CD3D15(iVar2, 0x00000000))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x0000000A))
										{
											func_165("IMPEX_NOT_PVEH", 0xFFFFFFFF);
											unk_0x5D96D8530B3D0904(&iLocal_305, 0x0000000A);
										}
									}
								}
								else if (func_74(&Local_319, unk_0x134B62B726CEC8E6(iVar2)))
								{
									if (unk_0x92C2290AA46758D3(iVar2, 0x00000000))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x0000000C))
										{
											func_165("IMPEX_NOT_CREW", 0xFFFFFFFF);
											unk_0x5D96D8530B3D0904(&iLocal_305, 0x0000000C);
										}
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000009))
								{
									if (unk_0xA30B8362589C124A(iVar2, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
									{
										func_165("IMPEX_NOT_NEED", 0xFFFFFFFF);
										unk_0x5D96D8530B3D0904(&iLocal_305, 0x00000009);
									}
								}
							}
						}
						else
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x00000009))
							{
								unk_0x0674E58A79778E99(&iLocal_305, 0x00000009);
							}
							if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x0000000A))
							{
								unk_0x0674E58A79778E99(&iLocal_305, 0x0000000A);
							}
							if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 0x0000000C))
							{
								unk_0x0674E58A79778E99(&iLocal_305, 0x0000000C);
							}
							if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x0000000C))
							{
								if (func_252())
								{
									func_165("IMPEX_NO_MORE", 0xFFFFFFFF);
									unk_0x0674E58A79778E99(&iLocal_328, 0x0000000C);
									func_117();
								}
							}
						}
					}
				}
				else
				{
					func_473();
					if (bLocal_86)
					{
						bLocal_86 = 0x00000000;
					}
					if (iLocal_91)
					{
						iLocal_91 = 0x00000000;
					}
				}
				break;
			
			case 0x00000001:
				if (func_14(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
				{
					if (!func_166(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), 0x4874A9FF, &uLocal_308, 0x00000000, 0x000001F4, 0x00000001, 0x00000000))
					{
						Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 = 0x00000002;
					}
				}
				else
				{
					unk_0x0674E58A79778E99(&iLocal_328, 0x00000004);
					unk_0x0674E58A79778E99(&iLocal_328, 0x00000006);
					Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 = 0x00000000;
				}
				break;
			
			case 0x00000002:
				Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 = 0x00000003;
				break;
			
			case 0x00000003:
				if (unk_0x0F1CCD77290EE12F())
				{
					func_470(0x00000011, 0x00000001, 0xFFFFFFFF);
					if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000004))
					{
						unk_0x5D96D8530B3D0904(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 0x00000001);
						func_469();
					}
					else
					{
						func_467();
					}
					if (bLocal_75)
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000006))
						{
							Local_73.f_2 = 0xA41051AB;
						}
						else
						{
							Local_73.f_2 = 0x77A513A5;
						}
						Local_73.f_3 = Local_327[unk_0x57270EE11514DC67() /*4*/];
						Local_73.f_A = iLocal_313[0x00000000];
						Local_73.f_B = iLocal_313[0x00000001];
						Local_73.f_C = iLocal_313[0x00000002];
						Local_73.f_D = iLocal_313[0x00000003];
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000006))
						{
						}
					}
					unk_0x0674E58A79778E99(&iLocal_328, 0x00000006);
					func_466(0x00000004, iLocal_288);
					func_450(&iLocal_288, 0x00000001);
					if (iLocal_288 > 0x00000000)
					{
						if (func_449())
						{
							func_438(0x381AE70B, iLocal_288, &iVar10, 0x00000000, 0x00000000, 0x00000000);
							Global_411012[iVar10 /*85*/].f_3 = iLocal_317;
						}
						else
						{
							unk_0x530219CFD5D2CF9D(iLocal_288, iLocal_317);
						}
					}
					if (iLocal_285 > 0x00000000)
					{
						func_437("IMPEX_PASS", iLocal_288, 0x00001B58, 0x00000000);
					}
					else
					{
						func_437("IMPEX_PASS", iLocal_288, 0x00001B58, 0x00000000);
					}
					func_403(0x00000002, "XPT_IMPEXP", 0x9E79F1A6, 0x8CEBBE2E, iLocal_289, 0x00000001, 0xFFFFFFFF, 0x00000000);
					func_402(0x0000001D);
					func_482(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
					Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 = 0x00000000;
					Local_327[unk_0x57270EE11514DC67() /*4*/] = 0xFFFFFFFF;
					unk_0x0674E58A79778E99(&iLocal_328, 0x00000004);
					iLocal_97 = 0x00000001;
					func_399(0xFB554D49, 0x0000000C, 0x00000000);
				}
				break;
		}
	}
	else
	{
		if (!func_378(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			if (!bLocal_92)
			{
				if (iLocal_90)
				{
					func_173(0x00000000);
					iLocal_90 = 0x00000000;
				}
			}
			else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && func_492(0x4874A9FF, 0x00000012))
			{
				iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (func_244(iVar2, 0x00000000))
				{
					if (!iLocal_90)
					{
						func_173(0x00000001);
						iLocal_90 = 0x00000001;
					}
					bLocal_76 = 0x00000001;
				}
			}
			else if (iLocal_90)
			{
				func_173(0x00000000);
				iLocal_90 = 0x00000000;
				bLocal_76 = 0x00000000;
			}
		}
		if (bLocal_79)
		{
			bLocal_79 = 0x00000000;
		}
		if (bLocal_80)
		{
			bLocal_80 = 0x00000000;
		}
		if (bLocal_82)
		{
			bLocal_82 = 0x00000000;
		}
		if (bLocal_83)
		{
			bLocal_83 = 0x00000000;
		}
	}
}

void func_399(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_401(iParam1, iParam2))
	{
		iVar0 = func_400();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_400()
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

int func_401(int iParam0, var uParam1)
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

void func_402(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_200000[func_504() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
		{
			if (Global_14073A.f_1[iVar0] == 0xFFFFFFFF)
			{
				Global_14073A.f_1[iVar0] = iParam0;
				Global_14073A = 0x00000001;
				return;
			}
		}
		iVar0++;
	}
}

var func_403(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_404(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_404(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_405(iParam0, 0x00000000, sParam1, iParam4, iParam5, 0x00000000, iParam6, 0x00000001, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_405(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_436(unk_0xD803B885F5E47A62()) || func_435(unk_0xD803B885F5E47A62()))
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
	else if (func_433() || func_430(unk_0xD803B885F5E47A62()))
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
	if (func_429(sParam2))
	{
	}
	if (func_428())
	{
		if (iParam4 < 0x00000001)
		{
			iParam4 = 0x00000001;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_426(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_425(&iVar1);
		}
		if (iParam1 == 0x00000000)
		{
			switch (iParam0)
			{
				case 0x00000002:
					func_423(0x00000000, &iVar1);
					break;
				
				case 0x00000003:
					func_423(0x00000001, &iVar1);
					break;
				
				case 0x00000001:
					func_420(&iVar1);
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
			func_477(0x0000048C, iVar1, 0xFFFFFFFF);
			if (iParam1 == 0x00000000)
			{
				func_415((func_419(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0x00000000);
				if (iParam8 == 0x00000000)
				{
				}
				if (iParam9 == 0x00000000)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 0xFFFFFFFF)
				{
					func_477(0x0000048D, iVar1, 0xFFFFFFFF);
				}
				func_410(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 0xFFFFFFFF)
			{
				func_406((func_408(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_406((func_408(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_406(int iParam0)
{
	if (func_428())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_407(joaat("mpply_globalxp"), iParam0);
	}
}

void func_407(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_408(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_14(iParam0, 0x00000000, 0x00000001))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_409(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_409(joaat("mpply_globalxp"));
		}
	}
	return 0x00000000;
}

int func_409(int iParam0)
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

void func_410(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_198(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_413(func_414(&Var0));
			if (iVar1 == 0x00000000)
			{
				func_412(&Global_152D8B, iParam0);
				func_411(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 0x00000001)
			{
				func_412(&Global_152D8C, iParam0);
				func_411(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 0x00000002)
			{
				func_412(&Global_152D8D, iParam0);
				func_411(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 0x00000003)
			{
				func_412(&Global_152D8E, iParam0);
				func_411(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 0x00000004)
			{
				func_412(&Global_152D8F, iParam0);
				func_411(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_411(int iParam0, int iParam1)
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

void func_412(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_413(int iParam0)
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

int func_414(var uParam0)
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

void func_415(int iParam0, int iParam1, int iParam2)
{
	if (func_428())
	{
		if (iParam0 >= 0x6A8C4212)
		{
			iParam0 = 0x6A8C4212;
		}
		if (Global_40001.f_2583 == 0x00000000 && iParam1 != 0xBFCF576C)
		{
			if (iParam2 == 0x00000000)
			{
				if (iParam0 < Global_152E1C[func_81(0xFFFFFFFF)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 0xE0C5CB02, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_81(0xFFFFFFFF)])
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
		if (func_237(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_417(iParam0, 0x00000001);
		}
		func_416(0x0000027F, iParam0, 0xFFFFFFFF, 0x00000001);
		func_146(0x00000280, func_417(iParam0, 0x00000001), 0xFFFFFFFF, 0x00000001, 0x00000000);
		Global_152E1C[func_81(0xFFFFFFFF)] = iParam0;
		func_399(0xBDDC2B6E, 0x00000007, 0x00000000);
	}
}

void func_416(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_81(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_417(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_418(iParam0, 0x00000000);
}

int func_418(int iParam0, int iParam1)
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

int func_419(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_81(0xFFFFFFFF)];
			}
			else if (func_237(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_81(0xFFFFFFFF)];
	}
	return 0x00000000;
}

void func_420(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_208(unk_0x08067D4957B73C02(iVar5), iVar1, 0x00000000))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_422(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_421(*iParam0, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 0x00000004)
	{
		iVar2 = 0x00000004;
	}
	if (iVar2 >= 0x00000002)
	{
		iVar7 = SYSTEM::ROUND((func_421(*iParam0, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_421(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_422(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_198(iParam0) };
		Global_26594F = { func_198(iParam1) };
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

void func_423(bool bParam0, int iParam1)
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
				if (func_14(iVar4, 0x00000000, 0x00000001))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_422(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_14(iVar4, 0x00000001, 0x00000001))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_424(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_422(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_421(*iParam1, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 0x00000004)
	{
		iVar1 = 0x00000004;
	}
	if (iVar1 >= 0x00000001)
	{
		iVar6 = SYSTEM::ROUND((func_421(*iParam1, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_424(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_28(iParam0), func_28(iParam1));
	return 0f;
}

int func_425(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 0x00000003)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_421(*iParam0, 0x00000064) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_426(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_419(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_419(unk_0xD803B885F5E47A62());
		}
	}
	if (func_427(0x00001F40, 0x00000000, 0x00000000) > 0x00000000)
	{
		if (func_427(0x00001F40, 0x00000000, 0x00000000) < (iParam0 + func_419(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_427(0x00001F40, 0x00000000, 0x00000000) - func_419(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_427(int iParam0, bool bParam1, int iParam2)
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

int func_428()
{
	return 0x00000001;
}

int func_429(char* sParam0)
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

int func_430(int iParam0)
{
	return func_431(func_432(iParam0));
}

int func_431(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E9:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_432(int iParam0)
{
	if (func_122(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_433()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_30();
	}
	return func_434(Global_440000.f_2F9AE);
}

int func_434(int iParam0)
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

bool func_435(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_436(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

void func_437(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x12F275EDEEF63A2B(iParam2, 0x00000001);
}

void func_438(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_449())
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
				func_439(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_439(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
				func_439(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_439(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_439(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_449())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_26()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_446(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
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
			func_445(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_440(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_440(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_441(iParam0);
	}
}

void func_441(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_449())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_444(iParam0))
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
		func_442(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_442(var uParam0)
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
	func_443(&(uParam0->f_E));
	func_443(&(uParam0->f_E.f_D));
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

void func_443(var uParam0)
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

int func_444(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_445(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_446(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_449())
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
				func_447(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_447(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_8(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_448();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_448()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_449()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

void func_450(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0x00000000)
	{
		if (!func_465())
		{
			if (func_464(0x00000000))
			{
				if (!func_460(0x00000000))
				{
					if (unk_0x40B8C182D63932FC(func_459()))
					{
						if (func_458() == 0x00000064)
						{
							iVar0 = *iParam0;
							*iParam0 = 0x00000000;
						}
						else
						{
							iVar0 = ((*iParam0 / 0x00000064) * func_458());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_456(&iVar0, 0x00000000);
						if (iParam1 == 0x00000001)
						{
							func_455("GB_BCUT_TICK1", func_459(), iVar0, 0x00000000, 0x00000000, 0x00000001);
						}
						func_454(0x00000014);
						func_451(func_459(), iVar0, 0x00000001);
					}
				}
			}
		}
	}
}

void func_451(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_14(iParam0, 0x00000000, 0x00000001))
	{
		Var0 = 0xB2D63074;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_453(iParam0);
		func_452(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, func_8(iParam0));
	}
}

void func_452(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_453(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_454(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_455(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_201(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		unk_0xD06AC7C87A34A6AD(func_199(&Var1));
		if (!iParam3 == 0x00000000)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		func_193(0x0000001B, sParam0, 0x00000001, &Var1, iParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_456(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_457(0x00000001);
	}
	else
	{
		iVar1 = func_457(0x00000000);
	}
	iVar0 = ((*iParam0 / 0x00000064) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_457(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_458()
{
	return Global_40001.f_3065;
}

int func_459()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_460(bool bParam0)
{
	return func_461(unk_0xD803B885F5E47A62(), bParam0);
}

int func_461(int iParam0, bool bParam1)
{
	return func_462(iParam0, bParam1, 0x00000001);
}

int func_462(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_121())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_463(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_121() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_463(int iParam0, int iParam1)
{
	if (iParam0 != func_121())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_121())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_464(bool bParam0)
{
	return func_221(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_465()
{
	return func_222(unk_0xD803B885F5E47A62());
}

void func_466(int iParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		if (Global_40001.f_5BC1 == 0x00000000 || Global_40001.f_5BC1 == 0x00000001)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_40001.f_5BC1 == 0x00000001)
			{
				Global_26B66F.f_11B = iParam0;
				if (iParam1 > Global_40001.f_19B8)
				{
					iParam1 = Global_40001.f_19B8;
				}
				Global_26B66F.f_11C = iParam1;
				Global_26B66F.f_11D = 0x00000000;
			}
		}
	}
}

void func_467()
{
	int iVar0;
	
	iVar0 = func_468(0x0000002A);
	Global_24D752[iVar0 /*83*/] = 0x0000002A;
	StringCopy(&(Global_24D752[iVar0 /*83*/].f_12[0x00000000 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_468(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000013;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000013)
	{
		if (Global_24D752[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		else if (Global_24D752[iVar1 /*83*/] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		iVar1++;
	}
	return iVar0;
}

void func_469()
{
	int iVar0;
	
	iVar0 = func_468(0x0000002B);
	Global_24D752[iVar0 /*83*/] = 0x0000002B;
	StringCopy(&(Global_24D752[iVar0 /*83*/].f_12[0x00000000 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_470(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_472(iParam0, func_81(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_471(iParam0, iVar0, iParam2);
}

void func_471(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_81(iParam2)];
	unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
}

int func_472(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_81(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_473()
{
	if (bLocal_85)
	{
		bLocal_85 = 0x00000000;
	}
	if (bLocal_80)
	{
		bLocal_80 = 0x00000000;
	}
	if (bLocal_81)
	{
		bLocal_81 = 0x00000000;
	}
	if (bLocal_82)
	{
		bLocal_82 = 0x00000000;
	}
	if (bLocal_84)
	{
		bLocal_84 = 0x00000000;
	}
	if (bLocal_83)
	{
		bLocal_83 = 0x00000000;
	}
}

void func_474()
{
	Global_200000[func_504() /*10930*/].f_181E.f_23 = unk_0xDD0E7998AE8AD485();
}

void func_475(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (bParam1)
	{
		iVar0 = 0xFFFFFFFF;
	}
	switch (iParam0)
	{
		case 0x0000003B:
			Global_200000[func_504() /*10930*/].f_181E.f_13 = iVar0;
			break;
		
		case 0x00000013:
			Global_200000[func_504() /*10930*/].f_181E.f_12 = iVar0;
			break;
		
		case 0x0000004A:
			Global_200000[func_504() /*10930*/].f_181E.f_C = iVar0;
			break;
		
		case 0x0000001D:
			Global_200000[func_504() /*10930*/].f_181E.f_E = iVar0;
			break;
		
		case 0x00000008:
			Global_200000[func_504() /*10930*/].f_181E.f_F = iVar0;
			break;
		
		case 0x0000001F:
			Global_200000[func_504() /*10930*/].f_181E.f_10 = iVar0;
			break;
		
		case 0x00000003:
			Global_200000[func_504() /*10930*/].f_181E.f_14 = iVar0;
			break;
		
		case 0x00000006:
			Global_200000[func_504() /*10930*/].f_181E.f_11 = iVar0;
			break;
		
		case 0x00000067:
		case 0x00000068:
		case 0x00000062:
		case 0x00000069:
			Global_200000[func_504() /*10930*/].f_181E.f_17 = iVar0;
			break;
		
		case 0x0000004C:
			Global_200000[func_504() /*10930*/].f_181E.f_18 = iVar0;
			break;
		
		case 0x0000005D:
			Global_200000[func_504() /*10930*/].f_181E.f_19 = iVar0;
			break;
		
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x0000004D:
		case 0x00000051:
			Global_200000[func_504() /*10930*/].f_181E.f_1A = iVar0;
			break;
		
		case 0x00000041:
		case 0x0000004B:
		case 0x0000005F:
			Global_200000[func_504() /*10930*/].f_181E.f_1B = iVar0;
			break;
			break;
		
		case 0x00000061:
			Global_200000[func_504() /*10930*/].f_181E.f_1D = iVar0;
			break;
		
		case 0x00000058:
			Global_200000[func_504() /*10930*/].f_181E.f_1C = iVar0;
			break;
		
		case 0x00000064:
			Global_200000[func_504() /*10930*/].f_181E.f_1F = iVar0;
			break;
		
		case 0x0000006A:
			Global_200000[func_504() /*10930*/].f_181E.f_20 = iVar0;
			break;
		
		case 0x00000063:
			Global_200000[func_504() /*10930*/].f_181E.f_1E = iVar0;
			break;
	}
}

void func_476()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_80(0x000004AF, 0xFFFFFFFF, 0x00000000);
	if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
		unk_0x5D96D8530B3D0904(&iLocal_329, 0x00000001);
		bVar1 = 0x00000001;
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
		unk_0x5D96D8530B3D0904(&iLocal_329, 0x00000002);
		bVar1 = 0x00000001;
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000005);
		unk_0x5D96D8530B3D0904(&iLocal_329, 0x00000003);
		bVar1 = 0x00000001;
	}
	if (bVar1)
	{
		func_146(0x000004AF, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
	}
}

void func_477(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, func_81(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_478(iParam0))
	{
		func_146(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_416(iParam0, iVar0, iParam2, 0x00000001);
	}
}

int func_478(int iParam0)
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

void func_479()
{
	if (!Global_26B66F.f_11B0)
	{
		Global_26B66F.f_11B0 = 0x00000001;
	}
	func_249(&(Global_26B66F.f_11B1), 0x00000000, 0x00000000);
}

int func_480(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 0x00002328;
		
		case joaat("serrano"):
			return 0x00002426;
		
		case joaat("jackal"):
			return 0x00002486;
		
		case joaat("schafter2"):
			return 0x0000264C;
		
		case joaat("dubsta"):
			return 0x00002904;
		
		case joaat("f620"):
			return 0x00002EE0;
		
		case joaat("schwarzer"):
			return 0x00002EE0;
		
		case joaat("rocoto"):
			return 0x000031CE;
		
		case joaat("sentinel2"):
			return 0x000037AA;
		
		case joaat("felon2"):
			return 0x000037AA;
		
		case joaat("comet2"):
			return 0x00003A98;
		
		case joaat("banshee"):
			return 0x00003D86;
		
		case joaat("surano"):
			return 0x00004074;
		
		case joaat("coquette"):
			return 0x00004D58;
		
		case joaat("carbonizzare"):
			return 0x00004E20;
		
		case joaat("exemplar"):
			return 0x00004E20;
		
		case joaat("feltzer2"):
			return 0x00004E20;
		
		case joaat("bullet"):
			return 0x00004E20;
		
		case joaat("superd"):
			return 0x00004E20;
		
		case joaat("infernus"):
			return 0x00004E20;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_481()
{
	int iVar0;
	
	if (func_14(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (!unk_0xBBA8A868118C90ED(iVar0, 0xFFFFFFFF, 0x00000000))
				{
					if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_482(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(0x00000000);
		}
	}
	if (func_490())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 0x00000001;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = 0x00000001;
		bVar2 = iParam2 & 0x00000002 != 0x00000000;
		bVar3 = iParam2 & 0x00000004 != 0x00000000;
		bVar4 = iParam2 & 0x00000008 != 0x00000000;
		bVar5 = iParam2 & 0x00000010 != 0x00000000;
		bVar6 = iParam2 & 0x00000020 != 0x00000000;
		bVar7 = iParam2 & 0x00000040 != 0x00000000;
		bVar8 = iParam2 & 0x00000080 != 0x00000000;
		bVar9 = iParam2 & 0x00000100 != 0x00000000;
		bVar10 = iParam2 & 0x00000200 != 0x00000000;
		bVar11 = iParam2 & 0x00000400 != 0x00000000;
		bVar12 = iParam2 & 0x00000800 != 0x00000000;
		bVar13 = iParam2 & 0x00001000 != 0x00000000;
		bVar14 = iParam2 & 0x00002000 != 0x00000000;
		bVar15 = iParam2 & 0x00004000 != 0x00000000;
		bVar16 = iParam2 & 0x00008000 != 0x00000000;
		bVar17 = iParam2 & 0x00010000 != 0x00000000;
		bVar18 = iParam2 & 0x00020000 != 0x00000000;
		bVar19 = iParam2 & 0x00040000 != 0x00000000;
		bVar20 = iParam2 & 0x00080000 != 0x00000000;
		bVar21 = iParam2 & 0x00100000 != 0x00000000;
		bVar22 = iParam2 & 0x00200000 != 0x00000000;
		bVar23 = iParam2 & 0x00400000 != 0x00000000;
		bVar24 = iParam2 & 0x00800000 != 0x00000000;
		bVar25 = iParam2 & 0x01000000 != 0x00000000;
		if (iParam2 & 0x02000000 != 0x00000000 || unk_0xA14BB9332558B949())
		{
			bVar1 = 0x00000000;
		}
		if (!func_136())
		{
			bVar26 = 0x00000000;
			if (bParam1 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar16 == 0x00000000 && !bVar21)
			{
				bVar26 = 0x00000001;
			}
			if (bVar10 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 0x00000001))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0x00000000) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(0x00000001);
				}
				else if (bVar14 || (!func_24(unk_0xD803B885F5E47A62(), 0x00000000) && !func_231()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0x00000000);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0x00000000);
					}
					Global_25033E[iParam0 /*421*/].f_F4 = 0x00000000;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_487(0x00000000, 0x00000000, 0x00000000);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_486(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, 0x00000001, 0x00000000);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000000);
					}
					unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, 0x00000000);
				}
				unk_0x25C5402CC10F76CD(iVar27, 0x00000001);
				unk_0x62DE699599F0417E(iParam0, 0x00000000);
				unk_0x7569764C11F70C0A(iParam0, 0x00000000);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 0x00000001);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					func_485();
					func_484();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_25033E[iParam0 /*421*/].f_F5 = 0x00000000;
				if (!bVar24)
				{
					bVar3 = 0x00000001;
				}
				if (Global_24B2D0.f_A70)
				{
					Global_24B2D0.f_A70 = 0x00000000;
				}
			}
			else
			{
				if (!func_486(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0x00000000);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
						}
					}
					if (func_483(Global_440000.f_38DB3))
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000001);
					}
				}
				if (Global_140856)
				{
					bVar10 = 0x00000000;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000000);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000001);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0x00000000))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0x00000000;
			if (bVar2)
			{
				iVar28 |= 0x00000002;
			}
			if (bVar3)
			{
				iVar28 |= 0x00000004;
			}
			if (bVar4)
			{
				iVar28 |= 0x00000008;
			}
			if (bVar5)
			{
				iVar28 |= 0x00000010;
			}
			if (bVar6)
			{
				iVar28 |= 0x00000020;
			}
			if (bVar7)
			{
				iVar28 |= 0x00000040;
			}
			if (bVar8)
			{
				iVar28 |= 0x00000080;
			}
			if (bVar9)
			{
				iVar28 |= 0x00000100;
			}
			if (bVar10)
			{
				iVar28 |= 0x00000200;
			}
			if (bVar11)
			{
				iVar28 |= 0x00000400;
			}
			if (bVar12)
			{
				iVar28 |= 0x00000800;
			}
			if (bVar13)
			{
				iVar28 |= 0x00001000;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_483(int iParam0)
{
	return iParam0 == 0x00000011;
}

void func_484()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_485()
{
	Global_24B2D0.f_2B6 = 0x00000000;
	Global_24B2D0.f_AA6 = 0x00000000;
	Global_24B2D0.f_200 = 0x00000000;
	Global_24B2D0.f_258 = 0x00000000;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0x00000000;
	Global_24B2D0.f_A79 = 0x00000000;
}

int func_486(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, 0x950B6492);
		if (iVar0 == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_487(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
	}
	if (iParam0 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 0x00000001;
				}
			}
		}
	}
	if (iVar0 == 0x00000000)
	{
		if (iParam2 == 0x00000001)
		{
			if (iParam0 == 0x00000001)
			{
				func_489();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
				{
					iVar1 = 0x00000000;
					while (iVar1 < 0x00000008)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_240006.f_3A[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000001);
			}
		}
		if (func_24(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 0x00000001);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_488(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_488(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 0x00000001);
	}
}

void func_489()
{
	int iVar0;
	
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				Global_240006.f_3A[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000002);
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000000);
		}
	}
}

int func_490()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_491()
{
	func_117();
}

int func_492(int iParam0, int iParam1)
{
	if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), func_169(iParam0), 0x00000001) <= IntToFloat(iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_493(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
		{
			if (!func_387(iParam0))
			{
				if (iParam0 != iLocal_332)
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000002)
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_494()
{
	if (Global_2537E2.f_1F6.f_C || Global_2537E2.f_1F6.f_D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_495(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		(*uParam0)[iVar0] = 0xFFFFFFFF;
		uParam0->f_6[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_496(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0x00000000;
		}
		else
		{
			(*uParam0)[iVar0] = 0xFFFFFFFF;
			uParam0->f_6[iVar0] = 0x00000001;
		}
		iVar0++;
	}
}

int func_496(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = func_503(iParam1);
			break;
		
		case 0x00000001:
			iVar0 = func_502(iParam1);
			break;
		
		case 0x00000002:
			iVar0 = func_501(iParam1);
			break;
		
		case 0x00000003:
			iVar0 = func_500(iParam1);
			break;
		
		case 0x00000004:
			iVar0 = func_499(iParam1);
			break;
		
		case 0x00000005:
			iVar0 = func_498(iParam1);
			break;
		
		case 0x00000006:
			iVar0 = func_497(iParam1);
			break;
	}
	return iVar0;
}

int func_497(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 0x00000001:
			iVar0 = func_75(joaat("serrano"));
			break;
		
		case 0x00000002:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 0x00000003:
			iVar0 = func_75(joaat("infernus"));
			break;
		
		case 0x00000004:
			iVar0 = func_75(joaat("coquette"));
			break;
	}
	return iVar0;
}

int func_498(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = func_75(joaat("zion"));
			break;
		
		case 0x00000001:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 0x00000002:
			iVar0 = func_75(joaat("comet2"));
			break;
		
		case 0x00000003:
			iVar0 = func_75(joaat("surano"));
			break;
		
		case 0x00000004:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_499(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 0x00000001:
			iVar0 = func_75(joaat("schwarzer"));
			break;
		
		case 0x00000002:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 0x00000003:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 0x00000004:
			iVar0 = func_75(joaat("feltzer2"));
			break;
	}
	return iVar0;
}

int func_500(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 0x00000001:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 0x00000002:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 0x00000003:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 0x00000004:
			iVar0 = func_75(joaat("comet2"));
			break;
	}
	return iVar0;
}

int func_501(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = func_75(joaat("feltzer2"));
			break;
		
		case 0x00000001:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 0x00000002:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 0x00000003:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 0x00000004:
			iVar0 = func_75(joaat("rocoto"));
			break;
	}
	return iVar0;
}

int func_502(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 0x00000001:
			iVar0 = func_75(joaat("coquette"));
			break;
		
		case 0x00000002:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 0x00000003:
			iVar0 = func_75(joaat("dubsta"));
			break;
		
		case 0x00000004:
			iVar0 = func_75(joaat("infernus"));
			break;
	}
	return iVar0;
}

int func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = func_75(joaat("rocoto"));
			break;
		
		case 0x00000001:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 0x00000002:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 0x00000003:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 0x00000004:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_504()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

int func_505(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_506(uParam0, bParam2, 0x00000000);
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

void func_506(var uParam0, bool bParam1, bool bParam2)
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

bool func_507(var uParam0)
{
	return uParam0->f_1;
}

void func_508()
{
	Global_200000[func_504() /*10930*/].f_181E.f_24 = unk_0xDD0E7998AE8AD485();
}

void func_509(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xDDD4A799D5B1FDA5();
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		(*uParam0)[iVar0] = 0xFFFFFFFF;
		uParam0->f_6[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_496(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0x00000000;
		}
		else
		{
			(*uParam0)[iVar0] = 0xFFFFFFFF;
			uParam0->f_6[iVar0] = 0x00000001;
		}
		iVar0++;
	}
	Global_200000[func_504() /*10930*/].f_181E.f_25 = iVar1;
}

void func_510()
{
	func_513("CELL_CLTEST1", 0x00000000);
	func_511("CELL_CLTEST1");
	func_513("CELL_CLTEST6", 0x00000000);
	func_511("CELL_CLTEST6");
}

void func_511(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_1B416.f_3738[iVar0 /*104*/])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar0 /*104*/]), sParam0))
			{
				if (Global_1B416.f_3738[iVar0 /*104*/].f_18 == 0x00000002)
				{
				}
				else
				{
					func_297();
					Global_1B416.f_3738[iVar0 /*104*/].f_63[Global_4C1E] = 0x00000000;
					if (func_512(iVar0))
					{
					}
					else
					{
						Global_1B416.f_3738[iVar0 /*104*/].f_18 = 0x00000000;
						Global_1B416.f_3738[iVar0 /*104*/].f_1C = 0x00000000;
						Global_1B416.f_3738[iVar0 /*104*/].f_1D = 0x00000000;
					}
					unk_0xD59AE843FA2C6B40(Global_1B416.f_3738[iVar0 /*104*/].f_10);
				}
			}
		}
		iVar0++;
	}
}

int func_512(int iParam0)
{
	if ((Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000000] == 0x00000001 || Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000001] == 0x00000001) || Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000002] == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_513(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_1B416.f_3738[iVar0 /*104*/])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar0 /*104*/]), sParam0))
			{
				if (Global_1B416.f_3738[iVar0 /*104*/].f_18 == 0x00000000)
				{
				}
				Global_1B416.f_3738[iVar0 /*104*/].f_18 = 0x00000001;
				if (Global_1B416.f_3738[iVar0 /*104*/].f_19 == 0x00000001)
				{
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[0x00000000] == 0x00000001)
					{
						Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000000;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[0x00000001] == 0x00000001)
					{
						Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000000;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[0x00000002] == 0x00000001)
					{
						Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000000;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[0x00000003] == 0x00000001)
					{
						Global_1B416.f_36DE[0x00000003 /*20*/].f_11 = 0x00000000;
					}
					Global_1B416.f_3738[iVar0 /*104*/].f_19 = 0x00000000;
					if (iParam1 == 0x00000001)
					{
						Global_1B416.f_3738[iVar0 /*104*/].f_1B = 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_514()
{
	if (unk_0xFEBC1E4EC9E001F0())
	{
		return 0x00000000;
	}
	if (func_107())
	{
		return 0x00000000;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0x00000000;
	}
	if (func_115())
	{
		return 0x00000000;
	}
	if (func_112())
	{
		return 0x00000000;
	}
	if (func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_110())
	{
		return 0x00000000;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (Global_180528)
	{
		return 0x00000000;
	}
	if (func_256())
	{
		return 0x00000000;
	}
	if (func_255())
	{
		return 0x00000000;
	}
	if (func_524())
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	if (func_515())
	{
		return 0x00000000;
	}
	if (!func_136())
	{
		return 0x00000000;
	}
	if (func_108())
	{
		return 0x00000000;
	}
	if (unk_0x09BE1E6DF7B80B43())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_515()
{
	return Global_12061;
}

bool func_516()
{
	if (Global_200000[func_504() /*10930*/].f_181E.f_23 == 0x00000000)
	{
		return 0x00000000;
	}
	return (unk_0xDD0E7998AE8AD485() - Global_200000[func_504() /*10930*/].f_181E.f_23) < 0x00015180;
}

bool func_517()
{
	if (Global_200000[func_504() /*10930*/].f_181E.f_24 == 0x00000000)
	{
		return 0x00000000;
	}
	return (unk_0xDD0E7998AE8AD485() - Global_200000[func_504() /*10930*/].f_181E.f_24) < 0x00015180;
}

bool func_518()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000002))
	{
		if (!func_24(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			if (((((!unk_0x09BE1E6DF7B80B43() && !func_139(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000)) && !func_112()) && (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))) && unk_0x0F1CCD77290EE12F()) && func_519(0x00000013))
			{
				unk_0x5D96D8530B3D0904(&iLocal_328, 0x00000002);
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000002);
}

int func_519(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_521(iParam0);
	if (iVar0 == 0x00000001)
	{
		return 0x00000001;
	}
	iVar1 = func_520(unk_0xD803B885F5E47A62(), 0x00000001);
	iVar2 = func_417(iVar1, 0x00000001);
	if (iVar2 >= iVar0 && iVar0 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_520(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_419(iParam0);
}

int func_521(int iParam0)
{
	if (func_103())
	{
		return 0x00000001;
	}
	if (func_102())
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000010:
		case 0x00000001:
		case 0x00000002:
		case 0x0000001C:
			return 0x00000001;
		
		case 0x00000015:
			return 0x00000002;
		
		case 0x00000016:
		case 0x00000012:
		case 0x00000011:
		case 0x00000049:
		case 0x0000001E:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000004C:
		case 0x0000000D:
		case 0x0000005A:
		case 0x00000000:
		case 0x00000063:
		case 0x00000005:
		case 0x00000020:
		case 0x0000007D:
		case 0x00000081:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
		case 0x00000086:
		case 0x00000088:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x00000090:
		case 0x00000092:
		case 0x00000089:
		case 0x00000094:
		case 0x00000087:
		case 0x000000EC:
		case 0x00000096:
			if (!func_522(0xFFFFFFFF))
			{
				return 0x00000003;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000017:
		case 0x00000066:
		case 0x0000006E:
		case 0x0000009C:
			return 0x00000005;
		
		case 0x0000000C:
		case 0x0000000B:
		case 0x0000000E:
		case 0x0000000F:
		case 0x0000001B:
		case 0x0000007A:
			return 0x00000006;
		
		case 0x00000061:
		case 0x0000006B:
			return 0x00000007;
		
		case 0x00000004:
			return 0x00000008;
		
		case 0x00000013:
			return 0x00000008;
		
		case 0x0000001D:
			return 0x0000000A;
		
		case 0x00000008:
			return 0x0000000B;
		
		case 0x0000003D:
		case 0x00000077:
		case 0x00000079:
		case 0x00000060:
		case 0x00000080:
			return 0x0000000C;
		
		case 0x00000059:
			return 0x0000000D;
		
		case 0x0000001F:
			return 0x0000000E;
		
		case 0x00000003:
		case 0x00000067:
		case 0x0000007C:
		case 0x0000007E:
		case 0x0000007F:
		case 0x0000004E:
			return 0x0000000F;
		
		case 0x0000006D:
		case 0x00000058:
			return 0x00000010;
		
		case 0x0000004A:
		case 0x00000064:
			return 0x00000011;
		
		case 0x00000006:
			return 0x00000012;
		
		case 0x00000014:
			return 0x00000013;
		
		case 0x0000003E:
		case 0x0000006C:
		case 0x00000082:
			return 0x00000014;
		
		case 0x00000041:
		case 0x0000005D:
			return 0x00000015;
		
		case 0x0000003F:
		case 0x00000068:
			return 0x00000019;
		
		case 0x0000004D:
		case 0x0000006A:
			return 0x0000001E;
		
		case 0x00000051:
		case 0x00000062:
			return 0x00000023;
		
		case 0x0000004B:
		case 0x0000005F:
			return 0x00000028;
		
		case 0x00000069:
			return 0x0000002D;
			break;
		
		case 0x00000043:
		case 0x00000040:
			return 0x00000032;
	}
	return 0xFFFFFFFF;
}

bool func_522(int iParam0)
{
	return func_523(0x0000007B, iParam0);
}

int func_523(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_81(uParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

bool func_524()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

int func_525()
{
	var uVar0;
	
	func_532(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_531())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_530())
	{
		return 0x00000001;
	}
	if (func_529(0x0000009F))
	{
		if (!func_528())
		{
			return 0x00000001;
		}
	}
	if (func_529(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_526() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_526()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_526()
{
	switch (func_83())
	{
		case 0x00000000:
			return func_527();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_527()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_528()
{
	return Global_2564C8.f_256;
}

int func_529(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_530()
{
	return Global_258C08;
}

bool func_531()
{
	return Global_2564C8.f_251;
}

void func_532(var uParam0)
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
					func_533(iVar0);
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

void func_533(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_14(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_534(iVar2, &bVar3))
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

int func_534(int iParam0, var uParam1)
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

void func_535()
{
	SYSTEM::WAIT(0x00000000);
}

void func_536()
{
	if (iLocal_100 != 0xFFFFFFFF)
	{
		func_143(iLocal_100, 0x00000000);
	}
	func_538(&iLocal_307);
	if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000001))
	{
		func_537(0f, 0f, 0f, func_365(0x00000013), 0x00000001);
	}
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			if (unk_0x23002DD5E7B94FD7(Local_320.f_18))
			{
				unk_0xBD63401BCCEC233B(Local_320.f_18);
			}
			Local_320.f_18 = 0xFFFFFFFF;
		}
	}
	func_375();
	Global_26B66F.f_677 = 0x00000000;
	Global_26B66F.f_678 = 0x00000000;
	Global_26B66F.f_67A = 0x00000000;
	Global_26B66F.f_694 = 0x00000000;
	if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 0x00000007))
	{
		func_258(0x00000006, 0x00000000);
	}
	func_395();
	if (unk_0xE4EDC4B0E92C078B(Global_195C0F))
	{
		unk_0x142CC44DB769B57E(&Global_195C0F);
	}
	func_251(0x00000000);
	if (unk_0xE4EDC4B0E92C078B(Global_195C19))
	{
		unk_0x142CC44DB769B57E(&Global_195C19);
	}
	if (unk_0x8CD06866876216F2())
	{
		if (iLocal_77)
		{
			func_174(0x4874A9FF, 0x00000000, 0x00000000);
			func_173(0x00000000);
		}
		if (iLocal_90)
		{
			func_173(0x00000000);
		}
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_537(vector3 vParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000010)
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_31(Global_26B66F.f_F80[iVar0 /*26*/].f_1, vParam0, 0x00000000))
				{
					Global_26B66F.f_F80[iVar0 /*26*/] = 0x00000000;
					Global_26B66F.f_F80[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_26B66F.f_F80[iVar0 /*26*/].f_A), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_538(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_539(*iParam0);
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

int func_539(int iParam0)
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

int func_540(struct<21> Param0)
{
	func_546(func_547(Param0), Param0);
	func_543(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_320, 0x0000004A);
	unk_0x35B62793EAE9ADDF(&Local_327, 0x00000081);
	unk_0x256D93AFAE851A7A(0x00000000);
	if (!func_542())
	{
		return 0x00000000;
	}
	Global_26B66F.f_67A = 0x00000000;
	Global_26B66F.f_1122 = 0x00000000;
	if (unk_0xBFF81ED3B99522C7())
	{
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0x00000006))
	{
		func_258(0x00000006, 0x00000000);
	}
	func_541();
	return 0x00000001;
}

void func_541()
{
	int iVar0;
	
	iVar0 = func_80(0x000004AF, 0xFFFFFFFF, 0x00000000);
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003))
	{
		unk_0x5D96D8530B3D0904(&iLocal_329, 0x00000001);
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004))
	{
		unk_0x5D96D8530B3D0904(&iLocal_329, 0x00000002);
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005))
	{
		unk_0x5D96D8530B3D0904(&iLocal_329, 0x00000003);
		unk_0x5D96D8530B3D0904(&iLocal_329, 0x00000000);
	}
}

int func_542()
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
		if (func_531())
		{
			return 0x00000000;
		}
		if (func_529(0x0000009D))
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

int func_543(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_545();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_544())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_545();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_531())
				{
					if (!bParam2)
					{
						func_545();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_529(0x0000009D))
				{
					if (!bParam2)
					{
						func_545();
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
					func_545();
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
				func_545();
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
			func_545();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_544()
{
	return Global_140856;
}

void func_545()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_546(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_545();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_547(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000003:
			return 0x00000002;
		
		case 0x00000001:
			return 0x00000020;
		
		case 0x00000020:
			return 0x00000020;
		
		case 0x00000021:
			return 0x00000020;
		
		case 0x00000022:
			return 0x00000020;
		
		case 0x00000023:
			return 0x00000020;
		
		case 0x00000024:
			return 0x00000020;
		
		case 0x00000025:
			return 0x00000020;
		
		case 0x00000026:
			return 0x00000020;
		
		case 0x00000027:
			return 0x00000020;
		
		case 0x00000028:
			return 0x00000020;
		
		case 0x00000029:
			return 0x00000020;
		
		case 0x0000002A:
			return 0x00000020;
		
		case 0x0000002B:
			return 0x00000020;
		
		case 0x0000002C:
			return 0x00000020;
		
		case 0x0000002D:
			return 0x00000020;
		
		case 0x0000002E:
			return 0x00000020;
		
		case 0x0000002F:
			return 0x00000020;
		
		case 0x00000030:
			return 0x00000020;
		
		case 0x00000031:
			return 0x00000020;
		
		case 0x00000032:
			return 0x00000004;
		
		case 0x00000033:
			return 0x00000020;
		
		case 0x00000034:
			return 0x00000020;
		
		case 0x00000035:
			return 0x00000020;
		
		case 0x00000036:
			return 0x00000020;
		
		case 0x00000037:
			return 0x00000020;
		
		case 0x00000038:
			return 0x00000020;
		
		case 0x00000039:
			return 0x00000020;
		
		case 0x0000003A:
			return 0x00000020;
		
		case 0x0000003B:
			return 0x00000020;
		
		case 0x0000003C:
			return 0x00000020;
		
		case 0x0000003D:
			return 0x00000020;
		
		case 0x0000003E:
			return 0x00000020;
		
		case 0x0000003F:
			return 0x00000020;
		
		case 0x00000040:
			return 0x00000004;
		
		case 0x00000041:
			return 0x00000020;
		
		case 0x00000042:
			return 0x00000004;
		
		case 0x00000043:
			return 0x00000004;
		
		case 0x00000044:
			return 0x00000020;
		
		case 0x00000045:
			return 0x00000020;
		
		case 0x00000046:
			return 0x00000004;
		
		case 0x00000047:
			return 0x00000020;
		
		case 0x00000048:
			return 0x00000020;
		
		case 0x00000049:
		case 0x0000004A:
			return 0x00000004;
		
		case 0x0000004B:
			return 0x00000020;
		
		case 0x0000004C:
			return 0x00000020;
		
		case 0x0000004D:
			return 0x00000020;
		
		case 0x0000004E:
			return 0x00000020;
		
		case 0x0000004F:
			return 0x00000020;
		
		case 0x00000050:
			return 0x00000020;
		
		case 0x00000051:
			return 0x00000020;
		
		case 0x00000052:
			return 0x00000020;
		
		case 0x00000054:
			return 0x00000020;
		
		case 0x00000053:
			return 0x00000020;
		
		case 0x00000055:
			return 0x00000020;
		
		case 0x00000056:
			return 0x00000008;
		
		case 0x00000057:
			return 0x00000020;
		
		case 0x00000058:
			return 0x00000020;
		
		case 0x00000059:
			return 0x00000020;
		
		case 0x0000005A:
			return 0x00000020;
		
		case 0x0000005B:
			return 0x00000008;
		
		case 0x0000005C:
			return 0x00000020;
		
		case 0x0000005D:
			return 0x00000008;
		
		case 0x0000005E:
			return 0x00000008;
		
		case 0x00000066:
			return 0x00000008;
		
		case 0x0000005F:
			return 0x00000008;
		
		case 0x00000060:
			return 0x00000020;
		
		case 0x00000061:
			return 0x00000020;
		
		case 0x00000062:
			return 0x00000020;
		
		case 0x00000063:
			return 0x00000008;
		
		case 0x00000064:
			return 0x00000020;
		
		case 0x00000065:
			return 0x00000020;
		
		case 0x00000067:
			return 0x00000020;
		
		case 0x00000068:
			return 0x00000020;
		
		case 0x00000069:
			return 0x00000020;
		
		case 0x0000006A:
			return 0x00000008;
		
		case 0x0000006B:
			return 0x00000008;
		
		case 0x0000006C:
			return 0x00000008;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000008;
		
		case 0x0000006F:
			return 0x00000008;
		
		case 0x00000070:
			return 0x00000008;
		
		case 0x00000071:
			return 0x00000008;
		
		case 0x00000072:
			return 0x00000020;
		
		case 0x00000073:
			return 0x00000008;
		
		case 0x00000074:
			return 0x00000008;
		
		case 0x00000075:
			return 0x00000008;
		
		case 0x00000076:
			return 0x00000008;
		
		case 0x00000077:
			return 0x00000020;
		
		case 0x00000078:
			return 0x00000020;
		
		case 0x00000079:
			return 0x00000020;
		
		case 0x0000007A:
			return 0x00000020;
		
		case 0x0000007B:
			return 0x00000008;
		
		case 0x0000007C:
			return 0x00000008;
		
		case 0x0000007D:
			return 0x00000008;
		
		case 0x0000007E:
			return 0x00000008;
		
		case 0x0000007F:
			return 0x00000020;
		
		case 0x00000080:
			return 0x00000020;
		
		case 0x00000081:
			return 0x00000020;
		
		case 0x0000000C:
			return 0x00000020;
		
		case 0x00000004:
			return 0x00000010;
		
		case 0x0000000D:
			return 0x00000020;
		
		case 0x00000005:
			return 0x00000010;
		
		case 0x00000006:
			return 0x00000002;
		
		case 0x00000008:
			return 0x00000002;
		
		case 0x00000009:
			return 0x00000002;
		
		case 0x00000007:
			return 0x00000010;
		
		case 0x0000000A:
			return 0x00000002;
		
		case 0x0000000B:
			return 0x00000004;
		
		case 0x0000000F:
			return 0x00000020;
		
		case 0x00000010:
			return 0x00000020;
		
		case 0x0000001B:
			return 0x00000002;
		
		case 0x00000019:
			return 0x00000002;
		
		case 0x0000001A:
			return 0x00000002;
		
		case 0x00000012:
			return 0x00000020;
		
		case 0x0000001C:
			return 0x00000020;
		
		case 0x0000001D:
			return 0x00000002;
		
		case 0x0000001E:
			return 0x00000020;
		
		case 0x0000001F:
			return 0x00000020;
		
		case 0x00000011:
			return 0x00000002;
		
		case 0x00000082:
			return 0x00000020;
		
		case 0x00000083:
			return 0x00000020;
		
		case 0x00000013:
			return 0x00000020;
		
		case 0x00000016:
			return 0x00000020;
		
		case 0x00000017:
			return 0x00000020;
		
		case 0x00000018:
			return 0x00000020;
		
		case 0x00000014:
			return 0x00000002;
		
		case 0x00000000:
			return 0x00000000;
		
		case 0x00000015:
			return 0x00000020;
		
		case 0x0000008E:
			return 0x00000020;
		
		case 0x0000008F:
			return 0x00000020;
		
		case 0x00000084:
			return 0x00000020;
		
		case 0x00000085:
			return 0x00000020;
		
		case 0x00000089:
			return 0x00000020;
		
		case 0x00000087:
			return 0x00000020;
		
		case 0x00000088:
			return 0x00000020;
		
		case 0x0000008C:
			return 0x00000020;
		
		case 0x0000008D:
			return 0x00000020;
		
		case 0x0000008A:
			return 0x00000020;
		
		case 0x0000008B:
			return 0x00000020;
		
		case 0x00000090:
			return 0x00000020;
		
		case 0x00000091:
			return 0x00000020;
		
		case 0x00000092:
			return 0x00000020;
		
		case 0x00000093:
			return 0x00000020;
		
		case 0x00000094:
			return 0x00000002;
		
		case 0x00000099:
			return 0x00000001;
		
		case 0x00000095:
			return 0x00000002;
		
		case 0x00000096:
			return 0x00000004;
		
		case 0x00000097:
			return 0x00000002;
		
		case 0x00000098:
			return 0x00000002;
		
		case 0x00000086:
			return 0x00000001;
		
		case 0x0000009A:
			return 0x00000002;
		
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x0000009E:
		case 0x0000009F:
		case 0x000000A0:
			return 0x00000000;
		
		case 0x000000B0:
			return 0x00000001;
		
		case 0x000000A1:
			return 0x00000004;
		
		case 0x000000A4:
			return 0x00000004;
		
		case 0x000000A5:
			return 0x00000001;
		
		case 0x000000A6:
			return 0x00000001;
		
		case 0x000000AC:
			return 0x00000001;
		
		case 0x000000A8:
			return 0x00000002;
		
		case 0x000000AD:
			return 0x00000001;
		
		case 0x000000A9:
			return 0x00000001;
		
		case 0x000000A7:
			return 0x00000002;
		
		case 0x000000AA:
			return 0x00000008;
		
		case 0x000000AB:
			return 0x00000008;
		
		case 0x000000AE:
			return 0x00000001;
		
		case 0x000000A2:
			return 0x00000010;
		
		case 0x000000A3:
			return 0x00000020;
		
		default:
	}
	return 0x00000000;
}

