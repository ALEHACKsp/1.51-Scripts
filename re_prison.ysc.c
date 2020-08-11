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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_53[12] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<7> Local_70 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 16;
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
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	vector3 vLocal_248 = { 0f, 0f, 0f };
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	struct<76> Local_252 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	int iLocal_263[3] = { 0, 0, 0 };
	int iLocal_264[3] = { 0, 0, 0 };
	int iLocal_265[3] = { 0, 0, 0 };
	float fLocal_266 = 0f;
	bool bLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	struct<13> Local_270[10];
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
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
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = 0;
	int iLocal_295 = 0;
	var uLocal_296[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_297[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	vector3 vLocal_305 = { 0f, 0f, 0f };
	int iLocal_306 = 0;
	struct<41> Local_307 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
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
	fLocal_266 = 0f;
	bLocal_267 = 0x00000001;
	vLocal_305 = { 1683.682f, 2518.867f, 44.5651f };
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_89(0x00000000);
	}
	iLocal_247 = unk_0x16F2683693E537C9();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x9B96FC9CDDC93764(unk_0xD803B885F5E47A62());
	}
	while (0x00000001)
	{
		if (unk_0x437347B10A200C4B(iLocal_247, 0x00000000))
		{
			func_89(0x00000000);
		}
		func_88();
		vLocal_248 = { unk_0x68F4C0EC296D3901(iLocal_247, 0x00000001) };
		switch (iLocal_246)
		{
			case 0x00000000:
				func_86();
				iLocal_246 = 0x00000001;
				break;
			
			case 0x00000001:
				if (!Global_7838)
				{
					func_85();
					func_84();
					func_83();
					func_81();
					iLocal_246 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if ((((func_80() && func_79()) && func_78()) && func_77()) && func_76())
				{
					iLocal_246 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				func_70();
				SYSTEM::WAIT(0x00000000);
				func_69();
				SYSTEM::WAIT(0x00000000);
				func_66();
				func_65();
				iLocal_246 = 0x00000004;
				break;
			
			case 0x00000004:
				if (!Global_7838)
				{
					if (Global_175B8)
					{
						func_89(0x00000000);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (func_1(0x00000000))
				{
					func_89(0x00000001);
				}
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

int func_1(bool bParam0)
{
	if (bParam0)
	{
		if (func_3())
		{
			return 0x00000001;
		}
	}
	if (func_2(0x0000000E))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_2(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_3()
{
	if (Global_1AFF7)
	{
		return 0x00000001;
	}
	if (!func_2(0x0000000E) && unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_4()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = 0x00000000;
	if (iLocal_51 == 0x00000001)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0x00000001, 0x00000001);
					iLocal_59[0x00000000] = 0x00000001;
				}
			}
			else
			{
				iLocal_59[0x00000000] = 0x00000000;
			}
		}
	}
	else if (iLocal_51 == 0x00000002)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0x00000001, 0x00000001);
					iLocal_59[0x00000001] = 0x00000001;
				}
			}
			else
			{
				iLocal_59[0x00000001] = 0x00000000;
			}
		}
	}
	else if (iLocal_51 == 0x00000003)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0x00000001, 0x00000001);
					iLocal_59[0x00000002] = 0x00000001;
				}
			}
			else
			{
				iLocal_59[0x00000002] = 0x00000000;
			}
		}
	}
	else if (iLocal_51 == 0x00000004)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0x00000001, 0x00000001);
					iLocal_59[0x00000003] = 0x00000001;
				}
			}
			else
			{
				iLocal_59[0x00000003] = 0x00000000;
			}
		}
	}
	else if (iLocal_51 == 0x00000005)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0x00000001, 0x00000001);
					iLocal_59[0x00000004] = 0x00000001;
				}
			}
			else
			{
				iLocal_59[0x00000004] = 0x00000000;
			}
		}
	}
	else if (iLocal_51 == 0x00000006)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0x00000001, 0x00000001);
					iLocal_59[0x00000005] = 0x00000001;
				}
			}
			else
			{
				iLocal_59[0x00000005] = 0x00000000;
			}
		}
	}
	else if (iLocal_51 == 0x00000007)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0x00000001, 0x00000001);
					iLocal_59[0x00000006] = 0x00000001;
				}
			}
			else
			{
				iLocal_59[0x00000006] = 0x00000000;
			}
		}
	}
	else if (iLocal_51 == 0x00000008)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0x00000001, 0x00000001);
					iLocal_59[0x00000007] = 0x00000001;
				}
			}
			else
			{
				iLocal_59[0x00000007] = 0x00000000;
			}
		}
	}
	else if (iLocal_51 == 0x00000009)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0x00000001, 0x00000001);
					iLocal_59[0x00000008] = 0x00000001;
				}
			}
			else
			{
				iLocal_59[0x00000008] = 0x00000000;
			}
		}
	}
	else if (iLocal_51 == 0x0000000A)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0x00000001, 0x00000001);
					iLocal_59[0x00000009] = 0x00000001;
				}
			}
			else
			{
				iLocal_59[0x00000009] = 0x00000000;
			}
		}
	}
	iLocal_51++;
	if (iLocal_51 > 0x0000000A)
	{
		iLocal_51 = 0x00000000;
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			if (iLocal_59[iVar0])
			{
				bVar1 = 0x00000001;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_55)
			{
				unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0x00000000, 0x00000001);
				unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000001, 0x00000001);
			}
		}
	}
}

void func_5()
{
	vector3 vVar0;
	
	switch (iLocal_50)
	{
		case 0x00000000:
			unk_0x523BCC9DC80CD82F(joaat("police3"));
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_cop_01"));
			if (unk_0xB87F6CF6E5628C67(joaat("police3")) && unk_0xB87F6CF6E5628C67(joaat("s_m_y_cop_01")))
			{
				iLocal_50++;
			}
			break;
		
		case 0x00000001:
			iLocal_66 = unk_0x122AAB0B1D6F55AD(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, 0x00000001, 0x00000001, 0x00000000);
			iLocal_68 = unk_0x852A19533F896693(iLocal_66, 0x00000006, joaat("s_m_y_cop_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			func_26(&iLocal_68);
			iLocal_50++;
			break;
		
		case 0x00000002:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			}
			if ((func_16(iLocal_68, iLocal_66, &Local_70, &uLocal_71, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001) || func_16(iLocal_69, iLocal_67, &Local_70, &uLocal_71, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001)) || (func_15(vVar0, 0x00000004, 0x00000014, 0x00000000) && !unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9())))
			{
				unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0x00000000, 0f, 50f, 0x00000000);
				unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0x00000000, 0f, 50f, 0x00000000);
				if (!unk_0x437347B10A200C4B(iLocal_68, 0x00000000))
				{
					unk_0x6C3AE6E278DB3D0E(iLocal_68, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				}
				if (!func_14(&iLocal_72))
				{
					func_11(&iLocal_72);
				}
				iLocal_50++;
			}
			break;
		
		case 0x00000003:
			if (func_14(&iLocal_72))
			{
				if (func_8(&iLocal_72) > 15f)
				{
					iLocal_67 = unk_0x122AAB0B1D6F55AD(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, 0x00000001, 0x00000001, 0x00000000);
					iLocal_69 = unk_0x852A19533F896693(iLocal_67, 0x00000006, joaat("s_m_y_cop_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
					func_26(&iLocal_69);
					unk_0x6C3AE6E278DB3D0E(iLocal_69, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					iLocal_50++;
				}
				else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
					}
					if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 0x43160000))
					{
						func_6();
						iLocal_50 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				}
				if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 0x43160000))
				{
					func_6();
					iLocal_50 = 0x00000000;
				}
			}
			break;
	}
}

void func_6()
{
	if (unk_0xC844350D5D58C99A(iLocal_66))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_66);
	}
	if (unk_0xC844350D5D58C99A(iLocal_68))
	{
		unk_0xEBA53F35D0085654(&iLocal_68);
	}
	if (unk_0xC844350D5D58C99A(iLocal_67))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_67);
	}
	if (unk_0xC844350D5D58C99A(iLocal_69))
	{
		unk_0xEBA53F35D0085654(&iLocal_69);
	}
}

int func_7(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (SYSTEM::VDIST2(vParam0, vParam1) < (fParam2 * fParam2))
	{
		if (((unk_0xC844350D5D58C99A(iLocal_66) && unk_0xC844350D5D58C99A(iLocal_68)) && unk_0xC844350D5D58C99A(iLocal_67)) && unk_0xC844350D5D58C99A(iLocal_69))
		{
			if (unk_0x03068588A1FCED1A(iLocal_66) || !unk_0x0A059E0DB9253280(iLocal_66))
			{
				if (unk_0x03068588A1FCED1A(iLocal_68) || !unk_0x0A059E0DB9253280(iLocal_68))
				{
					if (unk_0x03068588A1FCED1A(iLocal_67) || !unk_0x0A059E0DB9253280(iLocal_67))
					{
						if (unk_0x03068588A1FCED1A(iLocal_69) || !unk_0x0A059E0DB9253280(iLocal_69))
						{
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(vParam0, vParam1) > 62500f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_8(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_9(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_9(bool bParam0)
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

bool func_10(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000002);
}

void func_11(int iParam0)
{
	if (!func_14(iParam0))
	{
		func_12(iParam0);
	}
}

void func_12(int iParam0)
{
	func_13(iParam0, 0f);
}

void func_13(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_9(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

bool func_14(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001);
}

int func_15(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
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

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0x00000000) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (!func_25(*uParam2, 0x00000001))
		{
			if (func_24(iParam0, uParam2))
			{
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
		}
		if (!func_25(*uParam2, 0x00000002))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
		}
		if (!func_25(*uParam2, 0x00000004))
		{
			if (func_22(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
		}
		if (!func_25(*uParam2, 0x00000008))
		{
			if (func_21(iVar0, iParam0, uParam2))
			{
				*uParam3 = 0x00000008;
				return 0x00000001;
			}
		}
		bVar1 = !func_25(*uParam2, 0x00000080);
		if (bParam4)
		{
			if (func_17(iParam0, iParam1, 0x00000001, bParam6, bVar1, 0x00000001))
			{
				*uParam3 = 0x00000020;
				return 0x00000001;
			}
		}
		else if (!func_25(*uParam2, 0x00000010))
		{
			if (func_17(iParam0, iParam1, 0x00000000, bParam6, bVar1, bParam8))
			{
				*uParam3 = 0x00000010;
				return 0x00000001;
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (iParam7 && unk_0xB87D13D0C064E9D1(iParam0, iVar0, 0x00000001))
		{
			*uParam3 = 0x00000010;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_45 = 0x00000001;
		}
		iLocal_47 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 0x00000001))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 0x00000001;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
	{
		return 0x00000001;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar1, 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == unk_0x16F2683693E537C9())
				{
					return 0x00000001;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC021B60D52071374(iParam0))
		{
			return 0x00000001;
		}
	}
	if (func_20(unk_0x16F2683693E537C9(), iParam0))
	{
		return 0x00000001;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_18(iParam0, 0x00000001) < 1.5f)
		{
			return 0x00000001;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iParam0, 0x00000000)))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0))
		{
			return 0x00000001;
		}
		if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

float func_18(int iParam0, bool bParam1)
{
	return func_19(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

float func_19(int iParam0, int iParam1, bool bParam2)
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

int func_20(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000001);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(iParam1, 0x00000001)) < 2.5f)
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 180f))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_21(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x03A10A5707B2BB1F(iParam0, 0x00000004))
	{
		if (unk_0x168558745A6AC21E(iParam0) && !unk_0x52AE17073D025311(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_22(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	if (unk_0xD3DCEC81D13AAFB1(vVar0, 4f, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0xD15F544473A95FE8(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 0x00000001, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x03A10A5707B2BB1F(iParam0, 0x00000002))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 0x00000011))
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x940C1429253D3B1B(iParam1), 0x00000000))
			{
				iVar1 = unk_0x6937EA2286828455(unk_0x940C1429253D3B1B(iParam1), 0x00000000);
			}
			if (unk_0xFB275CE013F3A38C(iParam0) || func_23(iVar1))
			{
				if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 0x00000011))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000) != 0x00000000)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_19(unk_0x16F2683693E537C9(), iParam0, 0x00000001) < 40f)
						{
							if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
							{
								if ((unk_0xE2F1E99DD161A861(iVar1) && unk_0x96A5FE5834B81CE7(iVar1) == iParam0) || (unk_0xEC560E589DF8370E(iVar1) && unk_0x940C1429253D3B1B(iVar1) == unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000)))
								{
									if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000018)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000045)))
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

int func_24(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_18(iParam0, 0x00000001) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0x00000000)
						{
							uParam1->f_1 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
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

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_26(int iParam0)
{
	unk_0x262EF6C6306BEA6C(*iParam0, joaat("weapon_assaultshotgun"), 0xFFFFFFFF, 0x00000000, 0x00000001);
	unk_0x11AD11297DC58CC7(*iParam0, 0x00000001);
	unk_0xAFF39FB306F8E232(*iParam0, 0x0000000D, 0x00000001);
	unk_0xAFF39FB306F8E232(*iParam0, 0x00000000, 0x00000001);
	unk_0x26A6B1686E33113F(*iParam0, 0x00000001);
	unk_0x3CC33E4E9CE523F4(*iParam0, 0x00000001);
	unk_0x16F8631A5D4FBCE5(*iParam0, 0f);
	unk_0xFADC0A217229F6B5(*iParam0, 0x00000001);
	unk_0x298903DD96203C2C(*iParam0, 0x00000064);
	unk_0xB35CCEC0D4946813(*iParam0, 0x00000002);
	unk_0xAFF39FB306F8E232(*iParam0, 0x00000017, 0x00000000);
	unk_0x9FA191B317572861(*iParam0, 1000f);
	unk_0xAFF39FB306F8E232(*iParam0, 0x00000001, 0x00000001);
}

void func_27()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (bLocal_294)
	{
		if (!unk_0x437347B10A200C4B(iLocal_289, 0x00000000))
		{
			if (!unk_0x20D6474D5F4B9FC6(iLocal_289))
			{
				unk_0x4D3C3C0B0DE2663E(iLocal_289, 0x00000065, "PrisonHeli", 0x00000001);
			}
			if (!unk_0x437347B10A200C4B(iLocal_290, 0x00000000))
			{
				vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_290, 0f, 4f, -2f) };
				unk_0x0B2D887B6817D59D(iLocal_290, vVar0);
			}
			if (bLocal_292)
			{
				if (!func_28())
				{
					bLocal_292 = 0x00000000;
					unk_0xC6730DF337EA7449(iLocal_289, 0x00000000, 0x00000000);
				}
			}
			else if (func_28())
			{
				bLocal_292 = 0x00000001;
				unk_0xC6730DF337EA7449(iLocal_289, 0x00000001, 0x00000000);
			}
			if (bLocal_292)
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iLocal_289, 0x00000001) };
				if (SYSTEM::VDIST2(vLocal_248, vVar1) < 90000f)
				{
					if (!iLocal_293)
					{
						iLocal_293 = 0x00000001;
					}
				}
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(iLocal_291))
		{
			unk_0x142CC44DB769B57E(&iLocal_291);
		}
	}
}

int func_28()
{
	if (unk_0xD8A54335F18763BA() >= 0x00000014 || unk_0xD8A54335F18763BA() < 0x00000006)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_29()
{
	int iVar0;
	vector3 vVar1;
	
	if (!Local_307.f_12[0x00000000])
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
		if (!bLocal_58)
		{
			if (SYSTEM::VDIST2(vVar1, vLocal_305) < 5625f)
			{
				iLocal_306 = 0x00000001;
			}
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1B[iVar0]))
		{
			if (!Local_307.f_12[iVar0])
			{
				if (func_16(Local_307.f_1B[iVar0], 0x00000000, &Local_70, &uLocal_71, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001) || iLocal_306)
				{
					unk_0x6C3AE6E278DB3D0E(Local_307.f_1B[iVar0], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					Local_307.f_12[iVar0] = 0x00000001;
				}
			}
			if (!Local_307.f_12[iVar0])
			{
				if (!unk_0xB72E131222E66495(Local_307.f_1B[iVar0]))
				{
					unk_0xF44B0E19CAC31C33(Local_307.f_1B[iVar0], Local_307.f_E[iVar0], 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(Local_307.f_24[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(Local_307.f_24[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xC844350D5D58C99A(Local_307.f_1F[iVar0]))
		{
			if (unk_0xEB6A8945D1AC98A1(Local_307.f_1F[iVar0]))
			{
				if (unk_0xE4EDC4B0E92C078B(Local_307.f_28[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(Local_307.f_28[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_307.f_16[0x00000000])
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1F[0x00000000]))
		{
			if ((func_16(Local_307.f_1F[0x00000000], 0x00000000, &Local_70, &uLocal_71, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001) || Local_307.f_12[0x00000001] == 0x00000001) || iLocal_306)
			{
				unk_0xA3BF0AA5A2608191(Local_307.f_1F[0x00000000]);
				unk_0x6C3AE6E278DB3D0E(Local_307.f_1F[0x00000000], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				Local_307.f_16[0x00000000] = 0x00000001;
			}
		}
	}
	if (!Local_307.f_16[0x00000001])
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1F[0x00000001]))
		{
			if ((func_16(Local_307.f_1F[0x00000001], 0x00000000, &Local_70, &uLocal_71, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001) || Local_307.f_12[0x00000001] == 0x00000001) || iLocal_306)
			{
				unk_0xA3BF0AA5A2608191(Local_307.f_1F[0x00000001]);
				unk_0x6C3AE6E278DB3D0E(Local_307.f_1F[0x00000001], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				Local_307.f_16[0x00000001] = 0x00000001;
			}
		}
	}
	if (!Local_307.f_16[0x00000002])
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1F[0x00000002]))
		{
			if ((func_16(Local_307.f_1F[0x00000002], 0x00000000, &Local_70, &uLocal_71, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001) || Local_307.f_12[0x00000002] == 0x00000001) || iLocal_306)
			{
				unk_0xA3BF0AA5A2608191(Local_307.f_1F[0x00000002]);
				unk_0x6C3AE6E278DB3D0E(Local_307.f_1F[0x00000002], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				Local_307.f_16[0x00000002] = 0x00000001;
			}
		}
	}
	if (!Local_307.f_16[0x00000003])
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1F[0x00000003]))
		{
			if ((func_16(Local_307.f_1F[0x00000003], 0x00000000, &Local_70, &uLocal_71, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001) || Local_307.f_12[0x00000002] == 0x00000001) || iLocal_306)
			{
				unk_0xA3BF0AA5A2608191(Local_307.f_1F[0x00000003]);
				unk_0x6C3AE6E278DB3D0E(Local_307.f_1F[0x00000003], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				Local_307.f_16[0x00000003] = 0x00000001;
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1B[0x00000001]))
	{
		if (unk_0xB72E131222E66495(Local_307.f_1B[0x00000001]))
		{
			if (!Local_307.f_16[0x00000000])
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1F[0x00000000]))
				{
					unk_0xA8CC11FF8D2962D4(Local_307.f_1F[0x00000000], Local_307.f_1B[0x00000001], -2f, 0f, 0f, 1f, 0xFFFFFFFF, 0x3DCCCCCD, 0x00000001);
				}
			}
			if (!Local_307.f_16[0x00000001])
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1F[0x00000001]))
				{
					unk_0xA8CC11FF8D2962D4(Local_307.f_1F[0x00000001], Local_307.f_1B[0x00000001], -1f, 0f, 0f, 1f, 0xFFFFFFFF, 0x3DCCCCCD, 0x00000001);
				}
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1B[0x00000002]))
	{
		if (unk_0xB72E131222E66495(Local_307.f_1B[0x00000002]))
		{
			if (!Local_307.f_16[0x00000002])
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1F[0x00000002]))
				{
					unk_0xA8CC11FF8D2962D4(Local_307.f_1F[0x00000002], Local_307.f_1B[0x00000002], 1f, 0f, 0f, 1f, 0xFFFFFFFF, 0x3DCCCCCD, 0x00000001);
				}
			}
			if (!Local_307.f_16[0x00000003])
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1F[0x00000003]))
				{
					unk_0xA8CC11FF8D2962D4(Local_307.f_1F[0x00000003], Local_307.f_1B[0x00000002], -1f, 0f, 0f, 1f, 0xFFFFFFFF, 0x3DCCCCCD, 0x00000001);
				}
			}
		}
	}
}

void func_30()
{
	int iVar0;
	vector3 vVar1;
	
	iLocal_269++;
	if (iLocal_269 >= 0x0000001E)
	{
		if (!bLocal_58)
		{
			if (func_15(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000004, 0x00000064, 0x00000000))
			{
				iVar0 = 0x00000000;
				while (iVar0 < 0x0000000A)
				{
					if (unk_0xC844350D5D58C99A(Local_252.f_40[iVar0]) && !unk_0xEB6A8945D1AC98A1(Local_252.f_40[iVar0]))
					{
						if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) != 0xFFFFFFFF)
						{
							if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000001 || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000002)
							{
								unk_0x298903DD96203C2C(Local_252.f_40[iVar0], 0x0000000A);
								iLocal_268 = 0x00000001;
							}
						}
						else if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
						{
							unk_0x298903DD96203C2C(Local_252.f_40[iVar0], 0x0000000A);
							iLocal_268 = 0x00000001;
						}
						else
						{
							unk_0x298903DD96203C2C(Local_252.f_40[iVar0], 0x00000064);
							iLocal_268 = 0x00000001;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_268 = 0x00000000;
			}
		}
		iLocal_269 = 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xC844350D5D58C99A(Local_252.f_40[iVar0]) && !unk_0xEB6A8945D1AC98A1(Local_252.f_40[iVar0]))
		{
			if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0x00000000))
			{
				unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
			}
			if ((((func_16(Local_252.f_40[iVar0], 0x00000000, &Local_70, &uLocal_71, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001) || unk_0xD3DCEC81D13AAFB1(Local_252[iVar0 /*3*/], 20f, 0x00000001)) || unk_0xE6F41F94FEE25AFF(Local_252[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_252[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_268) || func_32(&(Local_252.f_40[iVar0])))
			{
				if (!func_2(0x00000005))
				{
					if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
					{
						if (bLocal_61)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				if (!unk_0xB72E131222E66495(Local_252.f_40[iVar0]))
				{
					unk_0xF44B0E19CAC31C33(Local_252.f_40[iVar0], Local_252.f_2A[iVar0], 0x00000000, 0x00000000, 0xFFFFFFFF);
					Local_252.f_35[iVar0] = 0x00000000;
				}
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(Local_252.f_4B[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(Local_252.f_4B[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (((unk_0xC844350D5D58C99A(iLocal_264[iVar0]) && !unk_0x437347B10A200C4B(iLocal_264[iVar0], 0x00000000)) && unk_0xC844350D5D58C99A(iLocal_263[iVar0])) && !unk_0x437347B10A200C4B(iLocal_263[iVar0], 0x00000000))
		{
			vVar1 = { unk_0x68E4ADDDDCD7BDDE(iLocal_264[iVar0], 0f, 3.5f, -2f) };
			unk_0x0B2D887B6817D59D(iLocal_264[iVar0], vVar1);
			unk_0x56FDC9ADE35F7DB0(iLocal_263[iVar0], 0x00000000, 0x00000000, 0x00000000);
			if (iLocal_265[iVar0])
			{
				if (!func_28())
				{
					if (!unk_0x437347B10A200C4B(iLocal_263[iVar0], 0x00000000))
					{
						iLocal_265[iVar0] = 0x00000000;
						unk_0xC6730DF337EA7449(iLocal_263[iVar0], 0x00000000, 0x00000000);
					}
				}
			}
			else if (func_28())
			{
				if (!unk_0x437347B10A200C4B(iLocal_263[iVar0], 0x00000000))
				{
					iLocal_265[iVar0] = 0x00000001;
					unk_0xC6730DF337EA7449(iLocal_263[iVar0], 0x00000001, 0x00000000);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_266 > 20f)
	{
		bLocal_267 = 0x00000000;
	}
	else if (fLocal_266 < -20f)
	{
		bLocal_267 = 0x00000001;
	}
	if (bLocal_267)
	{
		fLocal_266 = (fLocal_266 + 0.25f);
	}
	else
	{
		fLocal_266 = (fLocal_266 - 0.25f);
	}
	if (unk_0xC844350D5D58C99A(iLocal_263[0x00000000]))
	{
		unk_0xD8F6A53F4799FAFE(iLocal_263[0x00000000], (53f + fLocal_266));
	}
	if (unk_0xC844350D5D58C99A(iLocal_263[0x00000001]))
	{
		unk_0xD8F6A53F4799FAFE(iLocal_263[0x00000001], (13f + fLocal_266));
	}
	if (unk_0xC844350D5D58C99A(iLocal_263[0x00000002]))
	{
		unk_0xD8F6A53F4799FAFE(iLocal_263[0x00000002], (250f + fLocal_266));
	}
}

void func_31(int iParam0)
{
	if (!Local_252.f_35[iParam0])
	{
		unk_0x2C4A1A0F54A166E8(Local_252.f_40[iParam0], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
		unk_0x9FA191B317572861(Local_252.f_40[iParam0], 1000f);
		unk_0x2ECF845953E95D1B(Local_252.f_40[iParam0]);
		Local_252.f_35[iParam0] = 0x00000001;
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000003, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		}
	}
}

int func_32(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	}
	if (!unk_0x437347B10A200C4B(*uParam0, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(*uParam0, 0x00000001) };
	}
	if (SYSTEM::VDIST2(vVar0, vVar1) < 100f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_33()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) >= 0x00000002 || func_15(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000004, 0x00000096, 0x00000000))
		{
			if (unk_0x93776B156FD8804A("PRISON_ALARMS"))
			{
				unk_0x6021F0389B7BAA70("PRISON_ALARMS", 0x00000000);
			}
		}
		else
		{
			unk_0x7B35981153AECDBE("PRISON_ALARMS", 0x00000000);
		}
	}
}

void func_34()
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0x00000000, 0x00000001, 0x00000000))
		{
			func_63(&Local_70, 0x00000002);
		}
		else
		{
			func_61(&Local_70, 0x00000002);
		}
	}
	if (iLocal_49 > 0x00000014)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
			{
				if (func_15(vVar0, 0x00000004, 0x00000096, 0x00000000))
				{
					func_60(0x00000004, 0x00000001);
					if (!func_14(&iLocal_78))
					{
						func_11(&iLocal_78);
					}
					if (!bLocal_60)
					{
						if (unk_0xC844350D5D58C99A(iLocal_68) && !unk_0x437347B10A200C4B(iLocal_68, 0x00000000))
						{
							func_59(&uLocal_81, 0x00000008, iLocal_68, "TANNOY", 0x00000000, 0x00000001);
							if (func_37(&uLocal_81, "FH1AUD", "FH1_TANNOY", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
							{
								bLocal_58 = 0x00000001;
								bLocal_60 = 0x00000001;
							}
						}
					}
				}
				else
				{
					func_60(0x00000004, 0x00000000);
					if (func_14(&iLocal_78))
					{
						func_12(&iLocal_78);
					}
					bLocal_58 = 0x00000000;
				}
			}
			else
			{
				func_60(0x00000004, 0x00000000);
				if (func_14(&iLocal_78))
				{
					func_12(&iLocal_78);
				}
				bLocal_58 = 0x00000000;
			}
			if (bLocal_58)
			{
				if (func_14(&iLocal_78))
				{
					if (func_8(&iLocal_78) > 10f)
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000004)
						{
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000004, 0x00000000);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
							bLocal_61 = 0x00000001;
							bLocal_58 = 0x00000000;
							func_60(0x00000004, 0x00000000);
						}
					}
				}
			}
			if (!bLocal_55)
			{
				if (bLocal_60)
				{
					if (!func_36())
					{
						if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
						{
							unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
							unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 0x00000001, 0x00000001);
							bLocal_55 = 0x00000001;
						}
					}
				}
				else if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 0x00000001, 0x00000001);
					bLocal_55 = 0x00000001;
				}
			}
			if (!bLocal_58)
			{
				if (func_15(vVar0, 0x00000004, 0x00000064, 0x00000000))
				{
					if (!bLocal_55)
					{
						if (bLocal_60)
						{
							if (!func_36())
							{
								unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
								unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 0x00000001, 0x00000001);
								bLocal_55 = 0x00000001;
							}
						}
						else
						{
							unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0x00000000, 0x00000001);
							unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 0x00000001, 0x00000001);
							bLocal_55 = 0x00000001;
						}
					}
					func_35();
				}
			}
			iLocal_49 = 0x00000000;
		}
	}
	iLocal_49++;
}

void func_35()
{
	int iVar0;
	
	if (!iLocal_54)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			iLocal_52[iVar0] = unk_0x544B74C043CE9948(vLocal_53[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0x00000000, 0x00000007);
			iVar0++;
		}
		iLocal_54 = 0x00000001;
	}
}

int func_36()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_38(sParam2, iParam3, 0x00000000);
}

int func_38(char* sParam0, int iParam1, bool bParam2)
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
					func_57();
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
		if (func_56(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_55();
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
				func_48();
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
				if (func_47())
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
			if (func_46())
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
			func_45();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_44();
		func_39();
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
		func_57();
	}
	return 0x00000000;
}

void func_39()
{
	if (!func_40())
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

int func_40()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_43())
	{
		return 0x00000000;
	}
	if (func_41(unk_0xD803B885F5E47A62()))
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

bool func_41(int iParam0)
{
	return func_42(iParam0, 0x00000014);
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_43()
{
	return 0xFFFFFFFF;
}

void func_44()
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

void func_45()
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

int func_46()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_47()
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

void func_48()
{
	if (func_2(0x0000000E))
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
		Global_4C1E = func_49();
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

var func_49()
{
	func_50();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_50()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_53(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_52(unk_0x16F2683693E537C9());
			if (func_51(iVar0) && (!func_2(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_51(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_51(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_53(int iParam0)
{
	if (func_51(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_54(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_55()
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

bool func_56(int iParam0, int iParam1)
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

void func_57()
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_59(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_60(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&Global_78CE, iParam0);
	StringCopy(&(Global_78CF[iParam0 /*6*/]), unk_0xBB0808A181D4745C(), 24);
	Global_7906[iParam0] = iParam1;
}

void func_61(var uParam0, int iParam1)
{
	func_62(uParam0, iParam1);
}

void func_62(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_63(var uParam0, int iParam1)
{
	func_64(uParam0, iParam1);
}

void func_64(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_65()
{
	unk_0x71199B01895C6202(joaat("s_m_m_security_01"));
	unk_0x71199B01895C6202(joaat("s_m_m_prisguard_01"));
}

void func_66()
{
	func_68();
	func_67();
}

void func_67()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(Local_307.f_1B[iVar0]) && !unk_0x437347B10A200C4B(Local_307.f_1B[iVar0], 0x00000000))
		{
			unk_0x262EF6C6306BEA6C(Local_307.f_1B[iVar0], joaat("weapon_assaultrifle"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x25BD67336EA4AECE(Local_307.f_1B[iVar0], 0x000003E8);
			unk_0x6DF7BF67E86AAE86(Local_307.f_1B[iVar0], 0xF50B51B7);
			unk_0xF5B281233FC43E54(Local_307.f_1B[iVar0], 0x00000000);
			unk_0x11AD11297DC58CC7(Local_307.f_1B[iVar0], 0x00000001);
			if (!unk_0xEB6A8945D1AC98A1(Local_307.f_1B[iVar0]))
			{
				unk_0xF44B0E19CAC31C33(Local_307.f_1B[iVar0], Local_307.f_E[iVar0], 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
		}
		iVar0++;
	}
}

void func_68()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0xC844350D5D58C99A(Local_307.f_1B[iVar0]))
		{
			Local_307.f_1B[iVar0] = unk_0x36F2404464202779(0x00000006, joaat("s_m_m_prisguard_01"), Local_307[iVar0 /*3*/], Local_307.f_A[iVar0], 0x00000001, 0x00000001);
			SYSTEM::WAIT(0x00000000);
		}
		iVar0++;
	}
	vVar1 = { unk_0x8A5E176FF719A014(Local_307[0x00000001 /*3*/], Local_307.f_A[0x00000001], -2f, 0f, 0f) };
	vVar2 = { unk_0x8A5E176FF719A014(Local_307[0x00000001 /*3*/], Local_307.f_A[0x00000001], -1f, 0f, 0f) };
	vVar3 = { unk_0x8A5E176FF719A014(Local_307[0x00000002 /*3*/], Local_307.f_A[0x00000002], 1f, 0f, 0f) };
	vVar4 = { unk_0x8A5E176FF719A014(Local_307[0x00000002 /*3*/], Local_307.f_A[0x00000002], -1f, 0f, 0f) };
	Local_307.f_1F[0x00000000] = unk_0x36F2404464202779(0x00000006, joaat("s_m_m_prisguard_01"), vVar1, Local_307.f_A[0x00000001], 0x00000001, 0x00000001);
	Local_307.f_1F[0x00000001] = unk_0x36F2404464202779(0x00000006, joaat("s_m_m_prisguard_01"), vVar2, Local_307.f_A[0x00000001], 0x00000001, 0x00000001);
	Local_307.f_1F[0x00000002] = unk_0x36F2404464202779(0x00000006, joaat("s_m_m_prisguard_01"), vVar3, Local_307.f_A[0x00000002], 0x00000001, 0x00000001);
	Local_307.f_1F[0x00000003] = unk_0x36F2404464202779(0x00000006, joaat("s_m_m_prisguard_01"), vVar4, Local_307.f_A[0x00000002], 0x00000001, 0x00000001);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xC844350D5D58C99A(Local_307.f_1F[iVar0]))
		{
			unk_0x262EF6C6306BEA6C(Local_307.f_1F[iVar0], joaat("weapon_assaultrifle"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x25BD67336EA4AECE(Local_307.f_1F[iVar0], 0x000001F4);
			unk_0x6DF7BF67E86AAE86(Local_307.f_1F[iVar0], 0xF50B51B7);
			unk_0x7B97190AACA7600D(Local_307.f_1F[iVar0], 0x00000000);
			unk_0x11AD11297DC58CC7(Local_307.f_1F[iVar0], 0x00000001);
		}
		iVar0++;
	}
	unk_0x71199B01895C6202(joaat("s_m_m_prisguard_01"));
}

void func_69()
{
	if (bLocal_294)
	{
		iLocal_289 = unk_0x122AAB0B1D6F55AD(joaat("polmav"), 10f, 10f, -30f, 0f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x56FDC9ADE35F7DB0(iLocal_289, 0x00000001, 0x00000001, 0x00000000);
		unk_0x873BCADC75FF6D20(iLocal_289);
		unk_0x37806EBF326ECEE9(iLocal_289, 0f, 0f, 10f);
		unk_0x25BD67336EA4AECE(iLocal_289, 0x000001F4);
		if (func_28())
		{
			bLocal_292 = 0x00000001;
			unk_0xC6730DF337EA7449(iLocal_289, 0x00000001, 0x00000000);
		}
		iLocal_290 = unk_0x36F2404464202779(0x00000006, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 0x00000001, 0x00000001);
		unk_0xF821F915BC24D246(iLocal_290, iLocal_289, 0xFFFFFFFF);
		if (!unk_0x437347B10A200C4B(iLocal_289, 0x00000000))
		{
			unk_0x4D3C3C0B0DE2663E(iLocal_289, 0x00000065, "PrisonHeli", 0x00000001);
		}
		unk_0x71199B01895C6202(joaat("polmav"));
	}
}

void func_70()
{
	func_75();
	func_74();
	func_73();
	func_72();
	func_71();
}

void func_71()
{
	Local_270[0x00000000 /*13*/][0x00000000 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_270[0x00000000 /*13*/][0x00000001 /*3*/] = { 1826.054f, 2478.934f, 61.7157f };
	Local_270[0x00000000 /*13*/][0x00000002 /*3*/] = { 1820.909f, 2477.528f, 61.7153f };
	Local_270[0x00000000 /*13*/][0x00000003 /*3*/] = { 1822.585f, 2472.122f, 61.7167f };
	unk_0xBE70FF5503360367("miss_Tower_01");
	unk_0x8579C4FAF39811AB(0x00000000, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000000 /*13*/][0x00000000 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000001, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000000 /*13*/][0x00000001 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000002, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000000 /*13*/][0x00000002 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000003, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000000 /*13*/][0x00000003 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x091DAC24E0536E2F(0x00000000, 0x00000001);
	unk_0x091DAC24E0536E2F(0x00000001, 0x00000002);
	unk_0x091DAC24E0536E2F(0x00000002, 0x00000003);
	unk_0x091DAC24E0536E2F(0x00000003, 0x00000000);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[0x00000001 /*13*/][0x00000000 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_270[0x00000001 /*13*/][0x00000001 /*3*/] = { 1763.129f, 2413.976f, 61.7328f };
	Local_270[0x00000001 /*13*/][0x00000002 /*3*/] = { 1758.079f, 2411.984f, 61.7403f };
	Local_270[0x00000001 /*13*/][0x00000003 /*3*/] = { 1760.213f, 2406.827f, 61.7419f };
	unk_0xBE70FF5503360367("miss_Tower_02");
	unk_0x8579C4FAF39811AB(0x00000000, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000001 /*13*/][0x00000000 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000001, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000001 /*13*/][0x00000001 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000002, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000001 /*13*/][0x00000002 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000003, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000001 /*13*/][0x00000003 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x091DAC24E0536E2F(0x00000000, 0x00000001);
	unk_0x091DAC24E0536E2F(0x00000001, 0x00000002);
	unk_0x091DAC24E0536E2F(0x00000002, 0x00000003);
	unk_0x091DAC24E0536E2F(0x00000003, 0x00000000);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[0x00000002 /*13*/][0x00000000 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_270[0x00000002 /*13*/][0x00000001 /*3*/] = { 1662.521f, 2394.692f, 61.7532f };
	Local_270[0x00000002 /*13*/][0x00000002 /*3*/] = { 1658.854f, 2398.062f, 61.7573f };
	Local_270[0x00000002 /*13*/][0x00000003 /*3*/] = { 1655.15f, 2394.705f, 61.7429f };
	unk_0xBE70FF5503360367("miss_Tower_03");
	unk_0x8579C4FAF39811AB(0x00000000, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000002 /*13*/][0x00000000 /*3*/], 1655.908f, 2349.021f, 55.1775f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000001, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000002 /*13*/][0x00000001 /*3*/], 1733.875f, 2385.521f, 44.9049f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000002, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000002 /*13*/][0x00000002 /*3*/], 1662.234f, 2446.357f, 44.5652f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000003, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000002 /*13*/][0x00000003 /*3*/], 1524.631f, 2426.997f, 44.6212f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x091DAC24E0536E2F(0x00000000, 0x00000001);
	unk_0x091DAC24E0536E2F(0x00000001, 0x00000002);
	unk_0x091DAC24E0536E2F(0x00000002, 0x00000003);
	unk_0x091DAC24E0536E2F(0x00000003, 0x00000000);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[0x00000003 /*13*/][0x00000000 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_270[0x00000003 /*13*/][0x00000001 /*3*/] = { 1542.189f, 2465.756f, 61.7247f };
	Local_270[0x00000003 /*13*/][0x00000002 /*3*/] = { 1543.899f, 2470.971f, 61.7482f };
	Local_270[0x00000003 /*13*/][0x00000003 /*3*/] = { 1539.14f, 2473.264f, 61.7359f };
	unk_0xBE70FF5503360367("miss_Tower_04");
	unk_0x8579C4FAF39811AB(0x00000000, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000003 /*13*/][0x00000000 /*3*/], 1455.081f, 2432.642f, 51.3366f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000001, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000003 /*13*/][0x00000001 /*3*/], 1576.174f, 2407.076f, 44.8143f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000002, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000003 /*13*/][0x00000002 /*3*/], 1578.1f, 2486.227f, 44.5655f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000003, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000003 /*13*/][0x00000003 /*3*/], 1512.837f, 2560.419f, 44.8417f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x091DAC24E0536E2F(0x00000000, 0x00000001);
	unk_0x091DAC24E0536E2F(0x00000001, 0x00000002);
	unk_0x091DAC24E0536E2F(0x00000002, 0x00000003);
	unk_0x091DAC24E0536E2F(0x00000003, 0x00000000);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[0x00000004 /*13*/][0x00000000 /*3*/] = { 1535.098f, 2581.919f, 61.7312f };
	Local_270[0x00000004 /*13*/][0x00000001 /*3*/] = { 1535.124f, 2581.101f, 61.7002f };
	Local_270[0x00000004 /*13*/][0x00000002 /*3*/] = { 1538.325f, 2585.722f, 61.7251f };
	Local_270[0x00000004 /*13*/][0x00000003 /*3*/] = { 1534.679f, 2589.268f, 61.7123f };
	unk_0xBE70FF5503360367("miss_Tower_05");
	unk_0x8579C4FAF39811AB(0x00000000, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000004 /*13*/][0x00000000 /*3*/], 1484.2f, 2584.409f, 51.9283f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000001, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000004 /*13*/][0x00000001 /*3*/], 1535.154f, 2538.926f, 44.496f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000002, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000004 /*13*/][0x00000002 /*3*/], 1570.661f, 2587.814f, 44.5655f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000003, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000004 /*13*/][0x00000003 /*3*/], 1538.227f, 2655.531f, 44.9156f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x091DAC24E0536E2F(0x00000000, 0x00000001);
	unk_0x091DAC24E0536E2F(0x00000001, 0x00000002);
	unk_0x091DAC24E0536E2F(0x00000002, 0x00000003);
	unk_0x091DAC24E0536E2F(0x00000003, 0x00000000);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[0x00000005 /*13*/][0x00000000 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_270[0x00000005 /*13*/][0x00000001 /*3*/] = { 1567.927f, 2677.463f, 61.7741f };
	Local_270[0x00000005 /*13*/][0x00000002 /*3*/] = { 1572.574f, 2678.193f, 61.7702f };
	Local_270[0x00000005 /*13*/][0x00000003 /*3*/] = { 1572.359f, 2683.086f, 61.7664f };
	unk_0xBE70FF5503360367("miss_Tower_06");
	unk_0x8579C4FAF39811AB(0x00000000, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000005 /*13*/][0x00000000 /*3*/], 1505.538f, 2727.242f, 37.6965f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000001, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000005 /*13*/][0x00000001 /*3*/], 1545.95f, 2632.524f, 44.7178f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000002, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000005 /*13*/][0x00000002 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000003, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000005 /*13*/][0x00000003 /*3*/], 1599.041f, 2713.393f, 44.4309f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x091DAC24E0536E2F(0x00000000, 0x00000001);
	unk_0x091DAC24E0536E2F(0x00000001, 0x00000002);
	unk_0x091DAC24E0536E2F(0x00000002, 0x00000003);
	unk_0x091DAC24E0536E2F(0x00000003, 0x00000000);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[0x00000006 /*13*/][0x00000000 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_270[0x00000006 /*13*/][0x00000001 /*3*/] = { 1646.051f, 2756.671f, 61.9091f };
	Local_270[0x00000006 /*13*/][0x00000002 /*3*/] = { 1651.533f, 2754.668f, 61.9021f };
	Local_270[0x00000006 /*13*/][0x00000003 /*3*/] = { 1653.125f, 2759.327f, 61.9056f };
	unk_0xBE70FF5503360367("miss_Tower_07");
	unk_0x8579C4FAF39811AB(0x00000000, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000006 /*13*/][0x00000000 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000001, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000006 /*13*/][0x00000001 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000002, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000006 /*13*/][0x00000002 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000003, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000006 /*13*/][0x00000003 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x091DAC24E0536E2F(0x00000000, 0x00000001);
	unk_0x091DAC24E0536E2F(0x00000001, 0x00000002);
	unk_0x091DAC24E0536E2F(0x00000002, 0x00000003);
	unk_0x091DAC24E0536E2F(0x00000003, 0x00000000);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[0x00000007 /*13*/][0x00000000 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_270[0x00000007 /*13*/][0x00000001 /*3*/] = { 1769.768f, 2763.816f, 61.9248f };
	Local_270[0x00000007 /*13*/][0x00000002 /*3*/] = { 1772.442f, 2759.139f, 61.9193f };
	Local_270[0x00000007 /*13*/][0x00000003 /*3*/] = { 1776.893f, 2762.356f, 61.9258f };
	unk_0xBE70FF5503360367("miss_Tower_08");
	unk_0x8579C4FAF39811AB(0x00000000, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000007 /*13*/][0x00000000 /*3*/], 1783.204f, 2811.375f, 44.4414f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000001, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000007 /*13*/][0x00000001 /*3*/], 1709.275f, 2764.432f, 44.5747f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000002, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000007 /*13*/][0x00000002 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000003, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000007 /*13*/][0x00000003 /*3*/], 1822.456f, 2749.189f, 44.9326f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x091DAC24E0536E2F(0x00000000, 0x00000001);
	unk_0x091DAC24E0536E2F(0x00000001, 0x00000002);
	unk_0x091DAC24E0536E2F(0x00000002, 0x00000003);
	unk_0x091DAC24E0536E2F(0x00000003, 0x00000000);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[0x00000009 /*13*/][0x00000000 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_270[0x00000009 /*13*/][0x00000001 /*3*/] = { 1820.524f, 2621.49f, 61.9951f };
	Local_270[0x00000009 /*13*/][0x00000002 /*3*/] = { 1820.414f, 2621.544f, 61.9908f };
	Local_270[0x00000009 /*13*/][0x00000003 /*3*/] = { 1823.45f, 2617.477f, 61.9829f };
	unk_0xBE70FF5503360367("miss_Tower_10");
	unk_0x8579C4FAF39811AB(0x00000000, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000009 /*13*/][0x00000000 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000001, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000009 /*13*/][0x00000001 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000002, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000009 /*13*/][0x00000002 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x8579C4FAF39811AB(0x00000003, "WORLD_HUMAN_GUARD_STAND", Local_270[0x00000009 /*13*/][0x00000003 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x09AC81E49EA267F7(0x00001388, 0x00002710));
	unk_0x091DAC24E0536E2F(0x00000000, 0x00000001);
	unk_0x091DAC24E0536E2F(0x00000001, 0x00000002);
	unk_0x091DAC24E0536E2F(0x00000002, 0x00000003);
	unk_0x091DAC24E0536E2F(0x00000003, 0x00000000);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xC844350D5D58C99A(Local_252.f_40[iVar0]) && !unk_0x437347B10A200C4B(Local_252.f_40[iVar0], 0x00000000))
		{
			unk_0x6DF7BF67E86AAE86(Local_252.f_40[iVar0], 0xF50B51B7);
			unk_0x4E885A246A9D983A(Local_252.f_40[iVar0], 0x00000084, 0x00000001);
			unk_0x23CBFFA16CA5CF45(Local_252.f_40[iVar0], 300f, 0x0000000A);
			unk_0x9FA191B317572861(Local_252.f_40[iVar0], 1000f);
			unk_0xA656189732A3FF4B(Local_252.f_40[iVar0], 1000f);
			unk_0x967762C930C0C5FD(Local_252.f_40[iVar0], 1000f);
			unk_0x083F03A847B640E9(Local_252.f_40[iVar0], 0x00000002);
			unk_0xAFF39FB306F8E232(Local_252.f_40[iVar0], 0x0000000D, 0x00000001);
			unk_0xAFF39FB306F8E232(Local_252.f_40[iVar0], 0x00000000, 0x00000000);
			unk_0x26A6B1686E33113F(Local_252.f_40[iVar0], 0x00000001);
			unk_0x3CC33E4E9CE523F4(Local_252.f_40[iVar0], 0x00000001);
			unk_0x16F8631A5D4FBCE5(Local_252.f_40[iVar0], 0f);
			unk_0xFADC0A217229F6B5(Local_252.f_40[iVar0], 0x00000001);
			unk_0x298903DD96203C2C(Local_252.f_40[iVar0], 0x00000014);
			unk_0xB35CCEC0D4946813(Local_252.f_40[iVar0], 0x00000002);
			unk_0xAFF39FB306F8E232(Local_252.f_40[iVar0], 0x00000017, 0x00000000);
			unk_0x262EF6C6306BEA6C(Local_252.f_40[iVar0], joaat("weapon_sniperrifle"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x25BD67336EA4AECE(Local_252.f_40[iVar0], 0x000003E8);
			unk_0x11AD11297DC58CC7(Local_252.f_40[iVar0], 0x00000001);
			unk_0x9FA191B317572861(Local_252.f_40[iVar0], 1000f);
			if (!unk_0xEB6A8945D1AC98A1(Local_252.f_40[iVar0]))
			{
				if (iVar0 == 0x00000000)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_40[iVar0], "miss_Tower_01", 0x00000001, 0x00000000, 0x00000001);
				}
				else if (iVar0 == 0x00000001)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_40[iVar0], "miss_Tower_02", 0x00000001, 0x00000000, 0x00000001);
				}
				else if (iVar0 == 0x00000002)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_40[iVar0], "miss_Tower_03", 0x00000001, 0x00000000, 0x00000001);
				}
				else if (iVar0 == 0x00000003)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_40[iVar0], "miss_Tower_04", 0x00000001, 0x00000000, 0x00000001);
				}
				else if (iVar0 == 0x00000004)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_40[iVar0], "miss_Tower_05", 0x00000001, 0x00000000, 0x00000001);
				}
				else if (iVar0 == 0x00000005)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_40[iVar0], "miss_Tower_06", 0x00000001, 0x00000000, 0x00000001);
				}
				else if (iVar0 == 0x00000006)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_40[iVar0], "miss_Tower_07", 0x00000001, 0x00000000, 0x00000001);
				}
				else if (iVar0 == 0x00000007)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_40[iVar0], "miss_Tower_08", 0x00000001, 0x00000000, 0x00000001);
				}
				else if (iVar0 == 0x00000009)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_40[iVar0], "miss_Tower_10", 0x00000001, 0x00000000, 0x00000001);
				}
				else
				{
					unk_0xF44B0E19CAC31C33(Local_252.f_40[iVar0], Local_252.f_2A[iVar0], 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
			}
		}
		iVar0++;
	}
}

void func_73()
{
	int iVar0;
	
	if (!unk_0x8E28E832BEAC3DCE(1823.845f, 2621.267f, 57f, 0.5f))
	{
		iLocal_263[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, 0x00000001, 0x00000001, 0x00000000);
		if (unk_0xC844350D5D58C99A(iLocal_263[0x00000000]) && !unk_0x437347B10A200C4B(iLocal_263[0x00000000], 0x00000000))
		{
			iLocal_264[0x00000000] = unk_0x852A19533F896693(iLocal_263[0x00000000], 0x00000006, joaat("s_m_m_prisguard_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x98868AF51859FC75(iLocal_264[0x00000000], 0x00000000);
			unk_0x6DF7BF67E86AAE86(iLocal_264[0x00000000], iLocal_250);
			unk_0x20641932E5104B25(iLocal_263[0x00000000], 0x00000000, 0x00000000);
			unk_0x4A4806F9D471E491(iLocal_263[0x00000000], 0x00000000, 0x00000000);
			unk_0x98868AF51859FC75(iLocal_263[0x00000000], 0x00000000);
			unk_0x1E9649458B15960F(iLocal_263[0x00000000], 0x00000001);
		}
		SYSTEM::WAIT(0x00000000);
	}
	if (!unk_0x8E28E832BEAC3DCE(1761.418f, 2410.378f, 61f, 0.5f))
	{
		iLocal_263[0x00000001] = unk_0x122AAB0B1D6F55AD(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, 0x00000001, 0x00000001, 0x00000000);
		if (unk_0xC844350D5D58C99A(iLocal_263[0x00000001]) && !unk_0x437347B10A200C4B(iLocal_263[0x00000001], 0x00000000))
		{
			iLocal_264[0x00000001] = unk_0x852A19533F896693(iLocal_263[0x00000001], 0x00000006, joaat("s_m_m_prisguard_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x98868AF51859FC75(iLocal_264[0x00000001], 0x00000000);
			unk_0x6DF7BF67E86AAE86(iLocal_264[0x00000001], iLocal_250);
			unk_0x20641932E5104B25(iLocal_263[0x00000001], 0x00000000, 0x00000000);
			unk_0x4A4806F9D471E491(iLocal_263[0x00000001], 0x00000000, 0x00000000);
			unk_0x98868AF51859FC75(iLocal_263[0x00000001], 0x00000000);
			unk_0x1E9649458B15960F(iLocal_263[0x00000001], 0x00000001);
		}
		SYSTEM::WAIT(0x00000000);
	}
	if (!unk_0x8E28E832BEAC3DCE(1534.635f, 2585.162f, 61f, 0.5f))
	{
		iLocal_263[0x00000002] = unk_0x122AAB0B1D6F55AD(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, 0x00000001, 0x00000001, 0x00000000);
		if (unk_0xC844350D5D58C99A(iLocal_263[0x00000002]) && !unk_0x437347B10A200C4B(iLocal_263[0x00000002], 0x00000000))
		{
			iLocal_264[0x00000002] = unk_0x852A19533F896693(iLocal_263[0x00000002], 0x00000006, joaat("s_m_m_prisguard_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x98868AF51859FC75(iLocal_264[0x00000002], 0x00000000);
			unk_0x6DF7BF67E86AAE86(iLocal_264[0x00000002], iLocal_250);
			unk_0x20641932E5104B25(iLocal_263[0x00000002], 0x00000000, 0x00000000);
			unk_0x4A4806F9D471E491(iLocal_263[0x00000002], 0x00000000, 0x00000000);
			unk_0x98868AF51859FC75(iLocal_263[0x00000002], 0x00000000);
			unk_0x1E9649458B15960F(iLocal_263[0x00000002], 0x00000001);
		}
		SYSTEM::WAIT(0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if ((unk_0xC844350D5D58C99A(iLocal_264[iVar0]) && !unk_0x437347B10A200C4B(iLocal_264[iVar0], 0x00000000)) && !unk_0x437347B10A200C4B(iLocal_263[iVar0], 0x00000000))
		{
			if (func_28())
			{
				iLocal_265[iVar0] = 0x00000001;
				unk_0xC6730DF337EA7449(iLocal_263[iVar0], 0x00000001, 0x00000000);
			}
		}
		iVar0++;
	}
}

void func_74()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (!unk_0xC844350D5D58C99A(Local_252.f_40[iVar0]))
		{
			Local_252.f_40[iVar0] = unk_0x36F2404464202779(0x00000006, joaat("s_m_m_prisguard_01"), Local_252[iVar0 /*3*/], Local_252.f_1F[iVar0], 0x00000001, 0x00000001);
			unk_0x71199B01895C6202(joaat("s_m_m_prisguard_01"));
			SYSTEM::WAIT(0x00000000);
		}
		iVar0++;
	}
}

void func_75()
{
	Local_252[0x00000000 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_252[0x00000001 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_252[0x00000002 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_252[0x00000003 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_252[0x00000004 /*3*/] = { 1530.493f, 2585.172f, 61.7001f };
	Local_252[0x00000005 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_252[0x00000006 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_252[0x00000007 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_252[0x00000008 /*3*/] = { 1852.475f, 2697.632f, 61.9547f };
	Local_252[0x00000009 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_252.f_1F[0x00000000] = 248.9733f;
	Local_252.f_1F[0x00000001] = 45.8793f;
	Local_252.f_1F[0x00000002] = 186.3656f;
	Local_252.f_1F[0x00000003] = 313.5206f;
	Local_252.f_1F[0x00000004] = 95.9574f;
	Local_252.f_1F[0x00000005] = 289.3531f;
	Local_252.f_1F[0x00000006] = 13.7511f;
	Local_252.f_1F[0x00000007] = 0f;
	Local_252.f_1F[0x00000008] = 208.5786f;
	Local_252.f_1F[0x00000009] = 280.9389f;
}

int func_76()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		while (!unk_0x1C2E18E9C63BEB77(Local_307.f_E[iVar0]))
		{
			SYSTEM::WAIT(0x00000000);
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_77()
{
	if (bLocal_298)
	{
		if (!unk_0xB87F6CF6E5628C67(joaat("s_m_y_prisoner_01")))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (!unk_0x1C2E18E9C63BEB77(Local_252.f_2A[iVar0]))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("polmav")))
	{
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("s_m_m_prisguard_01")))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_79()
{
	if (bLocal_294)
	{
		if (!unk_0xB87F6CF6E5628C67(joaat("polmav")))
		{
			return 0x00000000;
		}
		if (!unk_0x3DDA6C6A285628E4(0x00000065, "PrisonHeli"))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_80()
{
	if (!unk_0xB87F6CF6E5628C67(joaat("s_m_m_security_01")))
	{
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("s_m_m_prisguard_01")))
	{
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("polmav")))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_81()
{
	int iVar0;
	
	func_82();
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		unk_0x29398344B9E5B8A7(Local_307.f_E[iVar0]);
		iVar0++;
	}
}

void func_82()
{
	Local_307[0x00000000 /*3*/] = { 1768.628f, 2538.97f, 44.4054f };
	Local_307[0x00000001 /*3*/] = { 1633.613f, 2498.849f, 44.4117f };
	Local_307[0x00000002 /*3*/] = { 1622.61f, 2555.683f, 44.4051f };
	Local_307.f_A[0x00000000] = 0f;
	Local_307.f_A[0x00000001] = 0f;
	Local_307.f_A[0x00000002] = 198.4323f;
	Local_307.f_E[0x00000000] = "PatrolGuard02";
	Local_307.f_E[0x00000001] = "PatrolGuard03";
	Local_307.f_E[0x00000002] = "PatrolGuard04";
}

void func_83()
{
	int iVar0;
	
	Local_252.f_2A[0x00000000] = "TowerGuard01";
	Local_252.f_2A[0x00000001] = "TowerGuard02";
	Local_252.f_2A[0x00000002] = "TowerGuard03";
	Local_252.f_2A[0x00000003] = "TowerGuard04";
	Local_252.f_2A[0x00000004] = "TowerGuard05";
	Local_252.f_2A[0x00000005] = "TowerGuard06";
	Local_252.f_2A[0x00000006] = "TowerGuard07";
	Local_252.f_2A[0x00000007] = "TowerGuard08";
	Local_252.f_2A[0x00000008] = "TowerGuard09";
	Local_252.f_2A[0x00000009] = "TowerGuard10";
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		unk_0x29398344B9E5B8A7(Local_252.f_2A[iVar0]);
		iVar0++;
	}
	unk_0x523BCC9DC80CD82F(joaat("polmav"));
	unk_0x523BCC9DC80CD82F(joaat("s_m_m_prisguard_01"));
}

void func_84()
{
	bLocal_294 = 0x00000000;
	if (func_28())
	{
		iLocal_295 = (unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF) % 0x00000002);
		if (iLocal_295 == 0x00000000)
		{
			bLocal_294 = 0x00000001;
			unk_0x523BCC9DC80CD82F(joaat("polmav"));
			unk_0x36187931D29E5BBE(0x00000065, "PrisonHeli");
		}
		else
		{
			bLocal_294 = 0x00000000;
		}
	}
}

void func_85()
{
	unk_0x523BCC9DC80CD82F(joaat("s_m_m_security_01"));
	unk_0x523BCC9DC80CD82F(joaat("s_m_m_prisguard_01"));
	unk_0x523BCC9DC80CD82F(joaat("polmav"));
}

void func_86()
{
	iLocal_249 = iLocal_249;
	iLocal_249 = 0x00000000;
	func_87();
	func_34();
	Local_70.f_4 = 0x0000004B;
	Local_70.f_6 = 0x0000000F;
	unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0x00000001, 0f, 0x00000000, 0x00000000);
	unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0x00000001, 0f, 50f, 0x00000000);
	unk_0xF63400DBE3303D26("Prison_Guards", &iLocal_250);
	unk_0xF63400DBE3303D26("Prison_Prisoners", &iLocal_251);
	unk_0x0E2400AB9174FA81(0x00000002, iLocal_250, iLocal_251);
	unk_0x0E2400AB9174FA81(0x00000002, iLocal_251, iLocal_250);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_250, 0xA49E591C);
	unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, iLocal_250);
	unk_0x0E2400AB9174FA81(0x00000003, 0x6F0783F5, iLocal_251);
	unk_0x0E2400AB9174FA81(0x00000003, iLocal_251, 0x6F0783F5);
}

void func_87()
{
	vLocal_53[0x00000000 /*3*/] = { 1809.816f, 2482.877f, 44.4744f };
	vLocal_53[0x00000001 /*3*/] = { 1755.823f, 2424.904f, 44.4319f };
	vLocal_53[0x00000002 /*3*/] = { 1661.2f, 2410.096f, 44.4265f };
	vLocal_53[0x00000003 /*3*/] = { 1555.966f, 2476.43f, 44.4042f };
	vLocal_53[0x00000004 /*3*/] = { 1549.141f, 2583.103f, 44.4225f };
	vLocal_53[0x00000005 /*3*/] = { 1581.156f, 2671.974f, 44.481f };
	vLocal_53[0x00000006 /*3*/] = { 1655.49f, 2743.69f, 44.4665f };
	vLocal_53[0x00000007 /*3*/] = { 1768.776f, 2748.527f, 44.4402f };
	vLocal_53[0x00000008 /*3*/] = { 1831.2f, 2696f, 44.4578f };
	vLocal_53[0x00000009 /*3*/] = { 1803.121f, 2617.781f, 44.5082f };
	vLocal_53[0x0000000A /*3*/] = { 1817.221f, 2608.387f, 44.6204f };
	vLocal_53[0x0000000B /*3*/] = { 1843.838f, 2608.361f, 44.6178f };
}

void func_88()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			}
		}
	}
	if (!iLocal_56)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0x00000000, 0x00000000, 0x00000000))
			{
				if (unk_0x82D09C8DBB516A49(unk_0xD803B885F5E47A62()))
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000004, 0x00000000);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
					unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, 0xF50B51B7);
					unk_0x0E2400AB9174FA81(0x00000005, 0xF50B51B7, 0x6F0783F5);
					iLocal_56 = 0x00000001;
				}
				if ((unk_0xD3DCEC81D13AAFB1(1874.072f, 2605.423f, 44.6723f, 100f, 0x00000001) && !unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62())) || (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) && !unk_0x82D09C8DBB516A49(unk_0xD803B885F5E47A62())))
				{
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, 0xF50B51B7);
					unk_0x0E2400AB9174FA81(0x00000005, 0xF50B51B7, 0x6F0783F5);
					iLocal_56 = 0x00000001;
				}
			}
		}
	}
}

void func_89(bool bParam0)
{
	int iVar0;
	
	func_95();
	func_94();
	func_93();
	func_92();
	func_91();
	func_90();
	unk_0x7B35981153AECDBE("PRISON_ALARMS", 0x00000001);
	if (iLocal_56)
	{
		unk_0x0E2400AB9174FA81(0x00000002, 0x6F0783F5, 0xF50B51B7);
		unk_0x0E2400AB9174FA81(0x00000002, 0xF50B51B7, 0x6F0783F5);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		if (unk_0x49083FDB78AC0509(iLocal_52[iVar0]))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_52[iVar0]);
		}
		iVar0++;
	}
	unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0x00000001, 0f, 0x00000000, 0x00000000);
	unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0x00000001, 0f, 50f, 0x00000000);
	if (bParam0)
	{
		unk_0x536F1BE96C726C4B(1695.1f, 2595.8f, 50f, 1000f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_90()
{
	if (unk_0xC844350D5D58C99A(iLocal_66))
	{
		unk_0x046C362CF15F1935(&iLocal_66);
	}
	if (unk_0xC844350D5D58C99A(iLocal_68))
	{
		unk_0x6DAD7906B73F064D(&iLocal_68);
	}
	if (unk_0xC844350D5D58C99A(iLocal_67))
	{
		unk_0x046C362CF15F1935(&iLocal_67);
	}
	if (unk_0xC844350D5D58C99A(iLocal_69))
	{
		unk_0x6DAD7906B73F064D(&iLocal_69);
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(Local_307.f_1B[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(Local_307.f_24[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(Local_307.f_24[iVar0]));
			}
			if (unk_0x03068588A1FCED1A(Local_307.f_1B[iVar0]))
			{
				unk_0xEBA53F35D0085654(&(Local_307.f_1B[iVar0]));
			}
			else
			{
				unk_0x6DAD7906B73F064D(&(Local_307.f_1B[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xC844350D5D58C99A(Local_307.f_1F[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(Local_307.f_28[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(Local_307.f_28[iVar0]));
			}
			if (unk_0x03068588A1FCED1A(Local_307.f_1F[iVar0]))
			{
				unk_0xEBA53F35D0085654(&(Local_307.f_1F[iVar0]));
			}
			else
			{
				unk_0x6DAD7906B73F064D(&(Local_307.f_1F[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_92()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_301))
	{
		unk_0x142CC44DB769B57E(&iLocal_301);
	}
	if (unk_0xC844350D5D58C99A(iLocal_299))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_299);
	}
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000014)
	{
		if (unk_0xC844350D5D58C99A(uLocal_296[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_297[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_297[iVar0]));
			}
			unk_0xEBA53F35D0085654(&(uLocal_296[iVar0]));
		}
		iVar0++;
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iLocal_263[iVar0]))
		{
			unk_0xA954465BA6FDEFE2(&(iLocal_263[iVar0]));
		}
		if (unk_0xC844350D5D58C99A(iLocal_264[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(iLocal_264[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xC844350D5D58C99A(Local_252.f_40[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(Local_252.f_4B[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(Local_252.f_4B[iVar0]));
			}
			if (unk_0x03068588A1FCED1A(Local_252.f_40[iVar0]))
			{
				unk_0xEBA53F35D0085654(&(Local_252.f_40[iVar0]));
			}
			else
			{
				unk_0x6DAD7906B73F064D(&(Local_252.f_40[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_95()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_291))
	{
		unk_0x142CC44DB769B57E(&iLocal_291);
	}
	if (unk_0xC844350D5D58C99A(iLocal_289))
	{
		if (unk_0x03068588A1FCED1A(iLocal_289))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_289);
			unk_0xEBA53F35D0085654(&iLocal_290);
		}
		else
		{
			func_96(&iLocal_289, &iLocal_290);
			unk_0x046C362CF15F1935(&iLocal_289);
		}
	}
}

void func_96(int iParam0, var uParam1)
{
	if (((unk_0xC844350D5D58C99A(*iParam0) && unk_0xC844350D5D58C99A(*uParam1)) && !unk_0x437347B10A200C4B(*iParam0, 0x00000000)) && !unk_0x437347B10A200C4B(*uParam1, 0x00000000))
	{
		if (unk_0xE934758D273C899A(*iParam0))
		{
			if (unk_0x20D6474D5F4B9FC6(*iParam0))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0x0C4243AF9A434F34(*uParam1, *iParam0, 0x00000000, 0x00000000, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000008, 50f, -1f, 30f, 0x00000064, 0x00000032, 0x00000001);
				}
			}
		}
	}
}

