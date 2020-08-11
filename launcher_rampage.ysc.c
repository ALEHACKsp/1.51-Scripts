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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71[3] = { 0, 0, 0 };
	var uLocal_72 = 16;
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
	var uLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	var uLocal_245 = 3;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	vector3 vLocal_249 = { 0f, 0f, 0f };
	int iLocal_250 = 0;
	struct<2> Local_251 = { 0, 5 } ;
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
	var uLocal_267 = 5;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
#endregion

void __EntryFunction__()
{
	struct<42> Var0;
	vector3 vVar1;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 0x00000003;
	iLocal_42 = 0x00000001;
	iLocal_43 = 0x00000041;
	iLocal_44 = 0x00000031;
	iLocal_45 = 0x00000040;
	iLocal_49 = unk_0xAD1355DD1E5D2D9B();
	iLocal_50 = unk_0x817B3657F78A517A();
	vLocal_66 = { 1180.969f, -402.381f, 67.2f };
	vLocal_67 = { 5f, 0f, 57.33f };
	iLocal_69 = 0xFFFFFFFF;
	iLocal_239 = 0x0000004D;
	iLocal_240 = 0xFFFFFFFF;
	iLocal_241 = 0xFFFFFFFF;
	iLocal_242 = 0x00000001;
	iLocal_243 = 0x00000001;
	iLocal_244 = 0x00000001;
	unk_0xDF8BDD00CF1D4043(0x00000001);
	func_373();
	Var0.f_11 = 0x00000002;
	Var0.f_1C = 0x00000006;
	Var0.f_23 = 0x00000005;
	Var0.f_29 = 0x00000006;
	vVar1 = { ScriptParam_251.f_1[0x00000000 /*3*/] };
	Global_17710 = 0x00000001;
	func_372(&Var0);
	if (unk_0x2EBF608FFE6CA406(0x00000053))
	{
		func_371(" Force cleanup [TERMINATING]");
		func_356(&Var0, 0x00000001);
	}
	if (!func_355(0x0000006C))
	{
		func_228(&Var0, vVar1);
	}
	else
	{
		func_1(&Var0, vVar1);
	}
}

void func_1(int iParam0, vector3 vParam1)
{
	while (0x00000001)
	{
		if (!unk_0x338D6FF72D84D90F())
		{
			func_371("  Ambient - Player isn't within World Point Range");
			func_356(iParam0, 0x00000001);
		}
		if (func_227() != 0x00000002)
		{
			func_371("  Ambient - Player is not Trevor");
			func_356(iParam0, 0x00000001);
		}
		iLocal_241 = func_226(5f);
		if (iLocal_241 != 0xFFFFFFFF)
		{
			if (!func_220())
			{
				*iParam0 = func_219(iLocal_241);
				StringCopy(&(iParam0->f_1), func_218(iLocal_241), 32);
				iParam0->f_10 = 0x00000003;
				iParam0->f_F = 5f;
				if (*iParam0 == 0xFFFFFFFF)
				{
					func_371("  -  Ambient Rampage Mission ID is invalid");
					func_356(iParam0, 0x00000001);
				}
				if (unk_0xEA6BC48857E0AC4C(&(iParam0->f_1)))
				{
					func_371("  -  Ambient Rampage Mission ID is invalid");
					func_356(iParam0, 0x00000001);
				}
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889[*iParam0 /*6*/]), 0x00000000);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889[*iParam0 /*6*/]), 0x00000002);
				unk_0x0674E58A79778E99(&(Global_1B416.f_4889[*iParam0 /*6*/]), 0x00000003);
				Global_1B085[*iParam0 /*10*/].f_1 = 0x00000000;
				if (!func_217(0x00000000))
				{
					Global_1B085[*iParam0 /*10*/].f_3 = 0x00000000;
				}
				if (!func_209(*iParam0))
				{
					func_371(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_356(iParam0, 0x00000001);
				}
				else if (!func_5(iParam0))
				{
					func_371(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_356(iParam0, 0x00000001);
				}
				else
				{
					func_4(0x000001F4, 0x00000001);
					unk_0x536F1BE96C726C4B(vParam1, iParam0->f_F, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					func_371(" RC Ambient Launcher Waiting To Terminate");
					Global_1B085[*iParam0 /*10*/].f_1 = 0x00000000;
					if (func_3(iParam0))
					{
						func_371(" Ambient - Ready To Terminate");
						func_356(iParam0, 0x00000000);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			iLocal_244 = 0x00000000;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

bool func_2(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_3(int iParam0)
{
	while (!Global_1B085[*iParam0 /*10*/])
	{
		SYSTEM::WAIT(0x00000000);
	}
	return 0x00000001;
}

void func_4(int iParam0, bool bParam1)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if (!unk_0xD0BB2359EC70FC37())
		{
			unk_0x53491B90E4FD0E56(iParam0);
			if (bParam1)
			{
				while (!unk_0x757EF87A33649210())
				{
					SYSTEM::WAIT(0x00000000);
				}
			}
		}
	}
}

int func_5(int iParam0)
{
	struct<4> Var0;
	char* sVar1;
	
	if (!func_208())
	{
		while (!func_203(*iParam0))
		{
			if (func_202(*iParam0))
			{
				func_191();
			}
			if (!func_148(iParam0, *iParam0 != 0x00000002))
			{
				func_371("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0x00000000;
			}
			SYSTEM::WAIT(0x00000000);
		}
	}
	if (func_147())
	{
		func_145();
	}
	if (!func_114(iParam0))
	{
		func_371("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0x00000000;
	}
	func_111(*iParam0, &Var0);
	MemCopy(&sVar1, {func_110(*iParam0)}, 0x00000004);
	func_109(&sVar1, Var0.f_3, 0x00000000);
	func_108(*iParam0);
	if (!func_208())
	{
		if (iParam0->f_10 == 0x00000002)
		{
			func_25(&(iParam0->f_1), 0x00000000);
		}
		else
		{
			func_25(&(iParam0->f_1), 0x00000001);
		}
	}
	func_6(*iParam0, Var0);
	return 0x00000001;
}

void func_6(int iParam0, char* sParam1)
{
	func_24(sParam1);
	unk_0x0674E58A79778E99(&(Global_1B416.f_4889[iParam0 /*6*/]), 0x00000005);
	if (unk_0x8A22C4C08282BF26(joaat("mission_stat_watcher")) > 0x00000000)
	{
		while (unk_0x8A22C4C08282BF26(joaat("mission_stat_watcher")) > 0x00000000)
		{
			func_22();
			SYSTEM::WAIT(0x00000000);
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("mission_stat_watcher")) < 0x00000001)
	{
		Global_F049 = 0x00000000;
		unk_0x92DCE5C81176D2B4("mission_stat_watcher");
		while (!unk_0x1FBF08B001C4788A("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0x00000000);
		}
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", 0x00000724);
		unk_0x5E8C29AE121DF1C7("mission_stat_watcher");
	}
	while (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000005))
	{
		if (unk_0x8A22C4C08282BF26(joaat("mission_stat_watcher")) > 0x00000000)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889[iParam0 /*6*/]), 0x00000005);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_F046 == 0x00000001)
	{
		func_21();
		Global_F046 = 0x00000000;
		if (Global_F041)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_F049 = 0x00000001;
		func_13();
		return;
	}
	MemCopy(&Global_F057, {func_12(iParam0)}, 0x00000004);
	Global_F04B = 0x00000000;
	Global_F04A = 0x00000000;
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000009:
			Global_F03E = 0x00000001;
			Global_F041 = 0x00000001;
			Global_F044 = 0x00000001;
			break;
		
		case 0x00000000:
		case 0x00000004:
		case 0x00000007:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000D:
		case 0x0000000F:
		case 0x0000001B:
		case 0x0000001F:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000030:
		case 0x0000002C:
		case 0x0000002D:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
			Global_F049 = 0x00000001;
			Global_F04A = 0x00000001;
			func_13();
			func_22();
			return;
			break;
	}
	iVar0 = Global_1201D;
	Global_1201D = 0x00000001;
	iVar1 = Global_1201E;
	Global_1201E = iParam0;
	if (!Global_F03E)
	{
		if ((Global_1201E != iVar1 || Global_11F87 == 0x00000000) || iVar0 != Global_1201D)
		{
			Global_792C = 0x00000000;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_F041 = 0x00000001;
		}
	}
	Global_F064 = unk_0x1C0640BA9A7327B3();
	func_8();
	Global_F048 = 0x00000000;
}

void func_8()
{
	int iVar0;
	
	if (!Global_F045)
	{
		return;
	}
	if (Global_11F87 == 0x00000000)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		switch (Global_F129[Global_11F88[iVar0 /*9*/] /*13*/])
		{
			case 0x00000001:
			case 0x00000009:
				Global_11F88[iVar0 /*9*/].f_3 = 0x00000001;
				break;
			
			case 0x00000004:
				if (Global_F050)
				{
					Global_11F88[iVar0 /*9*/].f_3 = 0x00000001;
				}
				break;
			
			case 0x00000006:
				if (Global_F129[Global_11F88[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_11F88[iVar0 /*9*/].f_1 != 0x00000000)
					{
						Global_11F88[iVar0 /*9*/].f_3 = 0x00000001;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_F045 = 0x00000000;
}

void func_9(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000002:
			func_10(0x000002E5);
			func_10(0x000002E6);
			return;
		
		case 0x00000003:
			func_10(0x000002E7);
			func_10(0x000002E8);
			return;
		
		case 0x00000005:
			func_10(0x000002E9);
			func_10(0x000002EA);
			return;
		
		case 0x00000006:
			func_10(0x000002EB);
			func_10(0x000002EC);
			return;
		
		case 0x00000008:
			func_10(0x000002ED);
			return;
		
		case 0x0000000C:
			func_10(0x000002EE);
			return;
		
		case 0x0000000E:
			func_10(0x000002EF);
			func_10(0x000002F0);
			return;
		
		case 0x00000010:
			func_10(0x000002F1);
			func_10(0x000002F2);
			return;
		
		case 0x00000011:
			func_10(0x000002F3);
			func_10(0x000002F4);
			func_10(0x000002F5);
			return;
		
		case 0x00000012:
			func_10(0x000002F6);
			func_10(0x000002F7);
			return;
		
		case 0x00000013:
			func_10(0x000002F8);
			func_10(0x000002F9);
			return;
		
		case 0x00000014:
			func_10(0x000002FA);
			return;
		
		case 0x00000015:
			func_10(0x000002FB);
			return;
		
		case 0x00000016:
			func_10(0x000002FC);
			func_10(0x000002FD);
			return;
		
		case 0x00000017:
			func_10(0x000002FE);
			return;
		
		case 0x00000019:
			func_10(0x000002FF);
			func_10(0x00000300);
			func_10(0x00000301);
			return;
		
		case 0x0000001A:
			func_10(0x00000302);
			func_10(0x00000303);
			return;
		
		case 0x0000001C:
			func_10(0x00000304);
			func_10(0x00000305);
			return;
		
		case 0x0000001D:
			func_10(0x00000306);
			func_10(0x00000307);
			return;
		
		case 0x0000001E:
			func_10(0x00000308);
			func_10(0x00000309);
			return;
		
		case 0x00000020:
			func_10(0x0000030A);
			func_10(0x0000030B);
			return;
		
		case 0x00000021:
			func_10(0x0000030C);
			func_10(0x0000030D);
			func_10(0x0000030E);
			return;
		
		case 0x00000022:
			func_10(0x0000030F);
			func_10(0x00000310);
			return;
		
		case 0x00000026:
			func_10(0x00000311);
			func_10(0x00000312);
			return;
		
		case 0x00000027:
			func_10(0x00000313);
			func_10(0x00000314);
			return;
		
		case 0x00000028:
			func_10(0x00000315);
			return;
		
		case 0x00000029:
			func_10(0x00000316);
			func_10(0x00000317);
			func_10(0x00000318);
			return;
		
		case 0x0000002A:
			func_10(0x00000319);
			func_10(0x0000031A);
			func_10(0x0000031B);
			return;
		
		case 0x0000002B:
			func_10(0x0000031C);
			func_10(0x0000031D);
			return;
		
		case 0x0000002E:
			func_10(0x0000031E);
			func_10(0x0000031F);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000002F:
			func_10(0x00000320);
			func_10(0x00000321);
			return;
		
		case 0x00000031:
			func_10(0x00000322);
			func_10(0x00000323);
			return;
		
		case 0x00000032:
			func_10(0x00000324);
			func_10(0x00000325);
			return;
		
		case 0x00000033:
			func_10(0x00000326);
			return;
		
		case 0x00000039:
			func_10(0x00000327);
			func_10(0x00000328);
			func_10(0x00000329);
			return;
		
		case 0x0000003A:
			func_10(0x0000033C);
			func_10(0x0000033D);
			func_10(0x0000033E);
			return;
		
		case 0x0000003B:
			func_10(0x0000033F);
			func_10(0x00000340);
			func_10(0x00000341);
			return;
		
		case 0x0000003C:
			func_10(0x00000342);
			func_10(0x00000343);
			func_10(0x00000344);
			return;
		
		case 0x0000003D:
			func_10(0x00000345);
			func_10(0x00000346);
			func_10(0x00000347);
			return;
		
		case 0x0000003E:
			func_10(0x00000348);
			func_10(0x00000349);
			func_10(0x0000034A);
			return;
		
		case 0x00000018:
			func_10(0x0000034B);
			func_10(0x0000034C);
			func_10(0x0000034D);
			return;
		
		default:
	}
}

void func_10(int iParam0)
{
	Global_F041 = 0x00000001;
	Global_F044 = 0x00000001;
	if (Global_11F87 > 0x0000000F)
	{
		return;
	}
	func_11(Global_11F87);
	Global_11F88[Global_11F87 /*9*/] = iParam0;
	Global_11F87++;
	if (Global_F129[iParam0 /*13*/] == 0x00000010)
	{
		Global_1201F = 0x00000001;
	}
}

void func_11(int iParam0)
{
	Global_11F88[iParam0 /*9*/].f_1 = 0x00000000;
	Global_11F88[iParam0 /*9*/].f_2 = 0f;
	Global_11F88[iParam0 /*9*/].f_3 = 0x00000000;
	Global_11F88[iParam0 /*9*/].f_4 = 0x00000000;
}

struct<2> func_12(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_110(iParam0) };
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

void func_13()
{
	if (Global_F048)
	{
		return;
	}
	Global_F051 = 0x00000000;
	Global_11F87 = 0x00000000;
	Global_F053 = 0x00000000;
	if (Global_F050)
	{
	}
	Global_F050 = 0x00000000;
	func_20(0x00000000);
	func_19();
	Global_1201F = 0x00000000;
	Global_F047 = 0x00000001;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_F03E = 0x00000000;
	Global_F05C = 0x00000000;
	Global_F064 = 0xFFFFFFFF;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_12042[iVar0 /*2*/].f_1 = 0xFFFFFFFF;
		iVar0++;
	}
	Global_1204B = 0x00000000;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		Global_12020[iVar0 /*2*/] = 0x00000000;
		Global_12020[iVar0 /*2*/].f_1 = 0xFFFFFFFF;
		iVar0++;
	}
	Global_12041 = 0x00000000;
}

void func_16()
{
	Global_F0E7 = 0x00000000;
}

void func_17()
{
	Global_F05B = 0x00000000;
	Global_F05F = func_18(joaat("sp0_shots"));
	Global_F05E = func_18(joaat("sp0_hits"));
	Global_F061 = func_18(joaat("sp1_shots"));
	Global_F060 = func_18(joaat("sp1_hits"));
	Global_F063 = func_18(joaat("sp2_shots"));
	Global_F062 = func_18(joaat("sp2_hits"));
}

var func_18(int iParam0)
{
	var uVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &uVar0, 0xFFFFFFFF);
	return uVar0;
}

void func_19()
{
	int iVar0;
	
	Global_F065 = 0x00000000;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000040)
	{
		Global_F066[iVar0 /*2*/] = 0x00000000;
		iVar0++;
	}
}

void func_20(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

void func_21()
{
	int iVar0;
	
	Global_F046 = 0x00000001;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		Global_11F88[iVar0 /*9*/].f_3 = 0x00000002;
		iVar0++;
	}
	if (Global_F050)
	{
	}
	Global_F050 = 0x00000000;
}

void func_22()
{
	if (unk_0x8A22C4C08282BF26(joaat("mission_stat_watcher")) > 0x00000000)
	{
		if (func_23())
		{
			if (Global_F043 && !Global_F042)
			{
				Global_F043 = 0x00000000;
				unk_0xCB0CD9B929EB37B9("mission_stat_watcher");
			}
		}
		else
		{
			unk_0xCB0CD9B929EB37B9("mission_stat_watcher");
		}
	}
}

int func_23()
{
	if (unk_0x8A22C4C08282BF26(joaat("mission_stat_watcher")) < 0x00000001)
	{
		return 0x00000000;
	}
	if (!Global_F041)
	{
		return 0x00000000;
	}
	return Global_F04D;
}

void func_24(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)
{
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000011);
	func_26(cParam0, iParam1, 0x00000000);
}

void func_26(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_181B8 != 0x0000000A && Global_181B8 != 0x00000009)
	{
		StringCopy(&Global_18F33, cParam0, 32);
		func_28(&Global_18F3B, cParam0, 0x00000000, "Start", iParam1, iParam2);
		func_27();
		Global_16AFA = 0x00000000;
	}
}

void func_27()
{
	int iVar0;
	int iVar1;
	
	Global_19AE3 = Global_18F3B;
	Global_19AE3.f_1 = Global_18F3B.f_1;
	Global_19AE3.f_6 = Global_18F3B.f_6;
	Global_19AE3.f_7 = Global_18F3B.f_7;
	Global_19AE3.f_8 = Global_18F3B.f_8;
	Global_19AE3.f_2 = Global_18F3B.f_2;
	Global_19AE3.f_3 = Global_18F3B.f_3;
	Global_19AE3.f_4 = Global_18F3B.f_4;
	Global_19AE3.f_5 = Global_18F3B.f_5;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		Global_19AE3.f_9[iVar1] = Global_18F3B.f_9[iVar1];
		Global_19AE3.f_D[iVar1] = Global_18F3B.f_D[iVar1];
		Global_19AE3.f_11[iVar1] = Global_18F3B.f_11[iVar1];
		Global_19AE3.f_15[iVar1] = Global_18F3B.f_15[iVar1];
		Global_19AE3.f_19[0x00000000 /*295*/][iVar1 /*98*/] = { Global_18F3B.f_19[0x00000000 /*295*/][iVar1 /*98*/] };
		Global_19AE3.f_19[0x00000001 /*295*/][iVar1 /*98*/] = { Global_18F3B.f_19[0x00000001 /*295*/][iVar1 /*98*/] };
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			Global_19AE3.f_268[iVar1 /*65*/][iVar0] = Global_18F3B.f_268[iVar1 /*65*/][iVar0];
			Global_19AE3.f_268[iVar1 /*65*/].f_D[iVar0] = Global_18F3B.f_268[iVar1 /*65*/].f_D[iVar0];
			Global_19AE3.f_268[iVar1 /*65*/].f_1A[iVar0] = Global_18F3B.f_268[iVar1 /*65*/].f_1A[iVar0];
			iVar0++;
		}
		Global_19AE3.f_268[iVar1 /*65*/].f_3B = Global_18F3B.f_268[iVar1 /*65*/].f_3B;
		Global_19AE3.f_268[iVar1 /*65*/].f_3C = Global_18F3B.f_268[iVar1 /*65*/].f_3C;
		Global_19AE3.f_268[iVar1 /*65*/].f_3D = Global_18F3B.f_268[iVar1 /*65*/].f_3D;
		Global_19AE3.f_268[iVar1 /*65*/].f_3E = Global_18F3B.f_268[iVar1 /*65*/].f_3E;
		Global_19AE3.f_268[iVar1 /*65*/].f_3F = Global_18F3B.f_268[iVar1 /*65*/].f_3F;
		Global_19AE3.f_268[iVar1 /*65*/].f_40 = Global_18F3B.f_268[iVar1 /*65*/].f_40;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000009)
		{
			Global_19AE3.f_268[iVar1 /*65*/].f_27[iVar0] = Global_18F3B.f_268[iVar1 /*65*/].f_27[iVar0];
			Global_19AE3.f_268[iVar1 /*65*/].f_31[iVar0] = Global_18F3B.f_268[iVar1 /*65*/].f_31[iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			Global_19AE3.f_32C[iVar1 /*477*/][iVar0 /*5*/] = { Global_18F3B.f_32C[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			Global_19AE3.f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/] = { Global_18F3B.f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			Global_19AE3.f_8C4[iVar1 /*32*/][iVar0] = Global_18F3B.f_8C4[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			Global_19AE3.f_8C4[iVar1 /*32*/].f_5[iVar0] = Global_18F3B.f_8C4[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000F)
		{
			Global_19AE3.f_8C4[iVar1 /*32*/].f_10[iVar0] = Global_18F3B.f_8C4[iVar1 /*32*/].f_10[iVar0];
			iVar0++;
		}
		Global_19AE3.f_925[iVar1] = Global_18F3B.f_925[iVar1];
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000003)
		{
			Global_19AE3.f_B16[iVar1 /*15*/][iVar0] = Global_18F3B.f_B16[iVar1 /*15*/][iVar0];
			Global_19AE3.f_B16[iVar1 /*15*/].f_5[iVar0] = Global_18F3B.f_B16[iVar1 /*15*/].f_5[iVar0];
			Global_19AE3.f_B16[iVar1 /*15*/].f_A[iVar0] = Global_18F3B.f_B16[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			Global_19AE3.f_929[iVar1 /*164*/][iVar0] = Global_18F3B.f_929[iVar1 /*164*/][iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_4[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_4[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_8[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_8[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_10[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_10[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_14[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_14[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_18[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_18[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_1C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_1C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_20[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_20[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_24[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_24[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_28[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_28[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_2C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_2C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_30[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_30[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_34[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_34[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_38[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_38[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_3C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_3C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_40[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_40[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_44[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_44[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_48[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_48[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_4C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_4C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_50[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_50[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_54[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_54[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_58[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_58[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_5C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_5C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_60[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_60[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_64[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_64[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_68[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_68[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_6C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_6C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_70[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_70[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_74[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_74[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_78[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_78[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_7C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_7C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_80[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_80[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_84[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_84[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_88[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_88[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_8C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_8C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_90[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_90[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_94[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_94[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_98[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_98[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_9C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_9C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_A0[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_19AE3.f_B44 = { Global_18F3B.f_B44 };
	Global_19AE3.f_B44.f_3 = Global_18F3B.f_B44.f_3;
	Global_19AE3.f_B4A = { Global_18F3B.f_B4A };
	Global_19AE3.f_B4A.f_3 = { Global_18F3B.f_B4A.f_3 };
	Global_19AE3.f_B4A.f_6 = Global_18F3B.f_B4A.f_6;
	Global_19AE3.f_B4A.f_8 = Global_19AE3.f_B4A.f_8;
	Global_19AE3.f_B4A.f_7 = Global_18F3B.f_B4A.f_7;
	Global_19AE3.f_B4A.f_9 = Global_18F3B.f_B4A.f_9;
	Global_19AE3.f_B4A.f_B = Global_18F3B.f_B4A.f_B;
	Global_19AE3.f_B4A.f_A = Global_18F3B.f_B4A.f_A;
	Global_19AE3.f_B4A.f_C = Global_18F3B.f_B4A.f_C;
	Global_19AE3.f_B4A.f_C.f_1 = { Global_18F3B.f_B4A.f_C.f_1 };
	Global_19AE3.f_B4A.f_C.f_5 = Global_18F3B.f_B4A.f_C.f_5;
	Global_19AE3.f_B4A.f_C.f_6 = Global_18F3B.f_B4A.f_C.f_6;
	Global_19AE3.f_B4A.f_C.f_7 = Global_18F3B.f_B4A.f_C.f_7;
	Global_19AE3.f_B4A.f_C.f_8 = Global_18F3B.f_B4A.f_C.f_8;
	Global_19AE3.f_B4A.f_C.f_9 = { Global_18F3B.f_B4A.f_C.f_9 };
	Global_19AE3.f_B4A.f_C.f_3B = { Global_18F3B.f_B4A.f_C.f_3B };
	Global_19AE3.f_B4A.f_C.f_3E = Global_18F3B.f_B4A.f_C.f_3E;
	Global_19AE3.f_B4A.f_C.f_3F = Global_18F3B.f_B4A.f_C.f_3F;
	Global_19AE3.f_B4A.f_C.f_40 = Global_18F3B.f_B4A.f_C.f_40;
	Global_19AE3.f_B4A.f_C.f_41 = Global_18F3B.f_B4A.f_C.f_41;
	Global_19AE3.f_B4A.f_C.f_4D = Global_18F3B.f_B4A.f_C.f_4D;
	Global_19AE3.f_B4A.f_C.f_42 = Global_18F3B.f_B4A.f_C.f_42;
	Global_19AE3.f_B4A.f_C.f_43 = Global_18F3B.f_B4A.f_C.f_43;
	Global_19AE3.f_B4A.f_C.f_44 = Global_18F3B.f_B4A.f_C.f_44;
	Global_19AE3.f_B4A.f_C.f_45 = Global_18F3B.f_B4A.f_C.f_45;
	Global_19AE3.f_B4A.f_C.f_47 = Global_18F3B.f_B4A.f_C.f_47;
	Global_19AE3.f_B4A.f_C.f_48 = Global_18F3B.f_B4A.f_C.f_48;
	Global_19AE3.f_B4A.f_C.f_49 = Global_18F3B.f_B4A.f_C.f_49;
	Global_19AE3.f_B4A.f_C.f_4A = Global_18F3B.f_B4A.f_C.f_4A;
	Global_19AE3.f_B4A.f_C.f_4B = Global_18F3B.f_B4A.f_C.f_4B;
	Global_19AE3.f_B4A.f_C.f_4C = Global_18F3B.f_B4A.f_C.f_4C;
	Global_19AE3.f_BA4 = Global_18F3B.f_BA4;
	Global_19AE3.f_BA4.f_1 = Global_18F3B.f_BA4.f_1;
	Global_19AE3.f_BA4.f_2 = Global_18F3B.f_BA4.f_2;
	Global_19AE3.f_BA4.f_3 = Global_18F3B.f_BA4.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_227();
	uParam0->f_1 = func_97();
	unk_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_69(&(uParam0->f_B44), 0x00000000);
		func_68(unk_0x16F2683693E537C9());
		func_61(unk_0x16F2683693E537C9(), 0x00000000);
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &(uParam0->f_2), 0x00000001);
		if (uParam0->f_2 == 0x00000000 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		uParam0->f_11[iVar1] = Global_1B416.f_936.f_21B.f_126[iVar1];
		if (iVar1 == func_58())
		{
			func_51(unk_0x16F2683693E537C9(), &(uParam0->f_268[iVar1 /*65*/]), 0x00000001, 0xFFFFFFFF);
		}
		else
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000C)
			{
				uParam0->f_268[iVar1 /*65*/][iVar0] = Global_180A5[iVar1 /*65*/][iVar0];
				uParam0->f_268[iVar1 /*65*/].f_D[iVar0] = Global_180A5[iVar1 /*65*/].f_D[iVar0];
				iVar0++;
			}
			uParam0->f_268[iVar1 /*65*/].f_3B = Global_180A5[iVar1 /*65*/].f_3B;
			uParam0->f_268[iVar1 /*65*/].f_3C = Global_180A5[iVar1 /*65*/].f_3C;
			uParam0->f_268[iVar1 /*65*/].f_3D = Global_180A5[iVar1 /*65*/].f_3D;
			uParam0->f_268[iVar1 /*65*/].f_3E = Global_180A5[iVar1 /*65*/].f_3E;
			uParam0->f_268[iVar1 /*65*/].f_3F = Global_180A5[iVar1 /*65*/].f_3F;
			uParam0->f_268[iVar1 /*65*/].f_40 = Global_180A5[iVar1 /*65*/].f_40;
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000009)
			{
				uParam0->f_268[iVar1 /*65*/].f_27[iVar0] = Global_180A5[iVar1 /*65*/].f_27[iVar0];
				uParam0->f_268[iVar1 /*65*/].f_31[iVar0] = Global_180A5[iVar1 /*65*/].f_31[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			uParam0->f_32C[iVar1 /*477*/][iVar0 /*5*/] = { Global_1B416.f_936.f_21B.f_12A[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			uParam0->f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/] = { Global_1B416.f_936.f_21B.f_12A[iVar1 /*477*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0x00000000:
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
			
			case 0x00000001:
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
			
			case 0x00000002:
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
		}
		uParam0->f_9[iVar1] = Global_1B416.f_504F.f_E9[iVar1 /*69*/].f_1;
		uParam0->f_D[iVar1] = Global_E53E[iVar1];
		uParam0->f_19[0x00000000 /*295*/][iVar1 /*98*/] = { Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iVar1 /*98*/] };
		uParam0->f_19[0x00000001 /*295*/][iVar1 /*98*/] = { Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iVar1 /*98*/] };
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000003)
		{
			uParam0->f_B16[iVar1 /*15*/][iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/][iVar0];
			uParam0->f_B16[iVar1 /*15*/].f_5[iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_B16[iVar1 /*15*/].f_A[iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			uParam0->f_929[iVar1 /*164*/][iVar0] = Global_1B416.f_936[iVar1 /*164*/][iVar0];
			uParam0->f_929[iVar1 /*164*/].f_4[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_8[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_10[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_10[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_14[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_14[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_18[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_18[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_1C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_1C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_20[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_24[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_28[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_2C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_2C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_30[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_30[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_34[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_34[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_38[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_38[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_3C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_3C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_40[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_44[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_48[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_4C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_4C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_50[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_50[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_54[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_54[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_58[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_58[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_5C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_5C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_60[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_64[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_68[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_6C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_6C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_70[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_70[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_74[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_74[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_78[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_78[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_7C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_7C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_80[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_84[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_88[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_8C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_8C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_90[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_90[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_94[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_94[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_98[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_98[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_9C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_9C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_A0[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6FB46C25CCB7E6D5(joaat("sp0_special_ability"), &(uParam0->f_925[0x00000000]), 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("sp1_special_ability"), &(uParam0->f_925[0x00000001]), 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("sp2_special_ability"), &(uParam0->f_925[0x00000002]), 0xFFFFFFFF);
	uParam0->f_5 = 0x00000091;
	if (iParam4 == 0x00000001)
	{
		func_30(&(uParam0->f_B4A), uParam0, iParam5, 0x00000001, 0x00000001, 0x00000000);
	}
	func_29(&(uParam0->f_BA4));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_29(var uParam0)
{
	*uParam0 = Global_17181;
	uParam0->f_1 = Global_17182;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	return 0x00000001;
}

void func_30(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0x00000000)
	{
		iParam2 = unk_0x16F2683693E537C9();
	}
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		uParam1->f_5 = func_48(iParam2);
	}
	if (func_45(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x4906F8A34E9F4814(iVar0, joaat("skylift")) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam2, 0x00000000))
	{
		func_33(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_32(iParam2))
		{
			uParam1->f_3 = 0x00000001;
		}
		else
		{
			uParam1->f_3 = 0x00000000;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (Global_181B8.f_16[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_33(var uParam0, int iParam1, int iParam2)
{
	func_40(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_36(iParam1, 0x00000091, 0x00000000);
	uParam0->f_B = func_35(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_34(iParam1);
		}
	}
	if (iParam2 == 0x00000001)
	{
		*uParam0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		uParam0->f_6 = unk_0xD9522BA9E27E1349(iParam1);
		uParam0->f_3 = { unk_0x56E9E0FD5ACCD35D(iParam1) };
		if (unk_0x3D1053F9EB43B7AD(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_12A3A == iParam1)
		{
			uParam0->f_9 = 0x00000001;
		}
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		uParam0->f_8 = 0x00000001;
	}
	else
	{
		uParam0->f_8 = 0x00000000;
	}
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]))
		{
			if (iParam0 == Global_126B1.f_1E4[iVar0])
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000091;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000091;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (Global_1774B[iVar0] == iParam0)
			{
				return Global_17755[iVar0];
			}
		}
		iVar0++;
	}
	return 0x00000091;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (Global_1774B[iVar0] == iParam0)
			{
				if (iParam1 == 0x00000091 || iParam1 == Global_17755[iVar0])
				{
					if (iParam2 == 0x00000000 || unk_0x134B62B726CEC8E6(iParam0) == func_37(iParam1, iParam2))
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

int func_37(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_39(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_38(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_38(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_58 = 0x00000001;
	uParam1->f_54 = 0x000000FF;
	uParam1->f_55 = 0x000000FF;
	uParam1->f_56 = 0x000000FF;
	uParam1->f_61 = 0x00000001;
	uParam1->f_3 = 0x000003E8;
	uParam1->f_1 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = joaat("tailgater");
			if (Global_1B416.f_2378.f_63.f_3A[0x00000080] && !Global_1B416.f_2378.f_63.f_3A[0x00000083])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0x00000000;
					uParam1->f_9 = 0x00000001;
					uParam1->f_B[0x00000000] = 0x00000001;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 0x0000002B;
					uParam1->f_6 = 0x0000002B;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_9 = 0x00000000;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 0x00000020;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_1B416.f_2378.f_63.f_3A[0x00000077])
					{
						uParam1->f_B[0x00000001] = 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000001:
			if (iParam2 == 0x00000001)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 0x00000002)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_1B416.f_2378.f_63.f_3A[0x00000076])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 0x00000035;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x0000003B;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x0000006F;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_A = 0x00000001;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0x00000000] = 0x00000001;
					uParam1->f_B[0x00000001] = 0x00000001;
					uParam1->f_B[0x00000002] = 0x00000001;
					uParam1->f_B[0x00000003] = 0x00000001;
					uParam1->f_B[0x00000004] = 0x00000001;
					uParam1->f_B[0x00000005] = 0x00000001;
					uParam1->f_B[0x00000006] = 0x00000001;
					uParam1->f_B[0x00000007] = 0x00000001;
					uParam1->f_B[0x00000008] = 0x00000001;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_39(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_44(uParam1);
		uParam1->f_42 = unk_0x134B62B726CEC8E6(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7888A5D2621AAF2D(iParam0), 16);
		*uParam1 = unk_0x4EB64970EC291A00(iParam0);
		unk_0x9412F17E127D9759(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD00EA977553939A7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x4D842A28A29F18F6(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = unk_0x214BEAD64D777E8F(iParam0);
		uParam1->f_43 = unk_0xF22DC2D0CA24A151(iParam0);
		uParam1->f_45 = unk_0x8EF9B42D5496EC5A(iParam0);
		uParam1->f_46 = unk_0x9C7B8DC16535B879(iParam0);
		unk_0xCCBAB59EE36FFC71(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xE04A80C505823410(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (unk_0x812A93B166D97C60(iParam0, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001C);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000003))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001D);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001E);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001F);
		}
		if (uParam1->f_41 == 0xFFFFFFFF && !func_43(uParam1->f_42))
		{
			uParam1->f_41 = 0x00000000;
		}
		if (unk_0x587993B327460A82(iParam0, 0x00000000))
		{
			uParam1->f_44 = unk_0x74A7D92E3874B5C7(iParam0);
		}
		if (unk_0xC41A9202669A24C4(uParam1->f_42))
		{
			if (unk_0x20D5F312838C1136(iParam0))
			{
				switch (unk_0x38E830634323E0D5(iParam0))
				{
					case 0x00000003:
					case 0x00000000:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000017);
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000016);
						break;
					
					case 0x00000004:
					case 0x00000001:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000017);
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000016);
						break;
					
					case 0x00000005:
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000017);
						break;
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000017);
			}
		}
		if (!unk_0x616632A7E7824A9A(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000009);
		}
		if (unk_0xF566283DA9533594(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000A);
		}
		if (unk_0xC97B0E5C744424FD(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000D);
			unk_0x3139754D4D5C3AC3(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0xE23BB5249C074C85(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000C);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x92C2290AA46758D3(iParam0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000B);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x0000000B);
		}
		if (unk_0x30F813723591D02E(iParam0, "IgnoredByQuickSave") && unk_0xB2C7CF65CF9B897C(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001B);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x0000001B);
		}
	}
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000002;
			break;
		
		case 0x00000004:
			return 0x00000003;
			break;
		
		case 0x00000005:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000005;
			break;
		
		case 0x00000007:
			return 0x00000006;
			break;
		
		case 0x00000008:
			return 0x00000007;
			break;
		
		case 0x00000009:
			return 0x00000008;
			break;
		
		case 0x0000000A:
			return 0x00000018;
			break;
		
		case 0x0000000B:
			return 0x00000019;
			break;
		
		case 0x0000000C:
			return 0x0000001A;
			break;
	}
	return 0x00000000;
}

int func_42(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015)
		{
			(*uParam1)[iVar0] = 0x00000000;
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000016)
		{
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				switch (unk_0x3C076D736FE6B7A6(*iParam0))
				{
					case 0x000000FF:
						(*uParam1)[iVar0] = 0x00000001;
						break;
					
					case 0x00000000:
						(*uParam1)[iVar0] = 0x00000002;
						break;
					
					case 0x00000001:
						(*uParam1)[iVar0] = 0x00000003;
						break;
					
					case 0x00000002:
						(*uParam1)[iVar0] = 0x00000004;
						break;
					
					case 0x00000003:
						(*uParam1)[iVar0] = 0x00000005;
						break;
					
					case 0x00000004:
						(*uParam1)[iVar0] = 0x00000006;
						break;
					
					case 0x00000005:
						(*uParam1)[iVar0] = 0x00000007;
						break;
					
					case 0x00000006:
						(*uParam1)[iVar0] = 0x00000008;
						break;
					
					case 0x00000007:
						(*uParam1)[iVar0] = 0x00000009;
						break;
					
					case 0x00000008:
						(*uParam1)[iVar0] = 0x0000000A;
						break;
					
					case 0x00000009:
						(*uParam1)[iVar0] = 0x0000000B;
						break;
					
					case 0x0000000A:
						(*uParam1)[iVar0] = 0x0000000C;
						break;
					
					case 0x0000000B:
						(*uParam1)[iVar0] = 0x0000000D;
						break;
					
					case 0x0000000C:
						(*uParam1)[iVar0] = 0x0000000E;
						break;
					
					case 0x0000000D:
						(*uParam1)[iVar0] = 0x0000000F;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0x00000000;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x0ECB5CA5140957AD(*iParam0, iVar0) + 1;
			if (iVar0 == 0x00000017)
			{
				(*uParam2)[0x00000000] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
			else if (iVar0 == 0x00000018)
			{
				(*uParam2)[0x00000001] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case 0xC4810400:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_44(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0x00000000;
	uParam0->f_4D = 0x00000000;
	uParam0->f_41 = 0x00000000;
	uParam0->f_3E = 0x00000000;
	uParam0->f_3F = 0x00000000;
	uParam0->f_40 = 0x00000000;
	uParam0->f_4A = 0x00000000;
	uParam0->f_4B = 0x00000000;
	uParam0->f_4C = 0x00000000;
	*uParam0 = 0x00000000;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000031)
	{
		uParam0->f_9[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		uParam0->f_3B[iVar0] = 0x00000000;
		iVar0++;
	}
	uParam0->f_43 = 0x00000000;
	uParam0->f_44 = 0x00000000;
	uParam0->f_45 = 0x00000000;
	uParam0->f_46 = 0x00000001;
	uParam0->f_47 = 0x00000000;
	uParam0->f_48 = 0x00000000;
	uParam0->f_49 = 0x00000000;
}

int func_45(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				*uParam1 = unk_0x728870EB733D12A1();
			}
			else
			{
				*uParam1 = unk_0x6937EA2286828455(iParam0, 0x00000001);
			}
			if (unk_0xC844350D5D58C99A(*uParam1))
			{
				if (unk_0xDF1306B443CD3D15(*uParam1, 0x00000000))
				{
					if (iParam2 == 0x00000000 || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(*uParam1, 0x00000001), unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 0x00000001) < 100f)
					{
						if (unk_0x4906F8A34E9F4814(*uParam1, joaat("taxi")))
						{
							if (unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000) != iParam0 && unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000) != 0x00000000)
							{
								return 0x00000000;
							}
						}
						if (func_46(*uParam1, func_227(), 0x00000001))
						{
							sVar0 = unk_0xBB0808A181D4745C();
							if (!unk_0x7F8A39872A07D2CE(sVar0, "save_anywhere"))
							{
								return 0x00000000;
							}
							else if (!unk_0x405E212DDE472467(iParam0, 0x00000001))
							{
								return 0x00000000;
							}
						}
						if (iParam3 == 0x00000001)
						{
							if (unk_0x30F813723591D02E(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xB2C7CF65CF9B897C(*uParam1, "IgnoredByQuickSave"))
								{
									return 0x00000000;
								}
							}
						}
						else if (unk_0x4906F8A34E9F4814(*uParam1, joaat("blimp")))
						{
							return 0x00000000;
						}
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_46(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_47(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iVar2], 0x00000000))
		{
			if (unk_0x5B6BEDD9A86023B7(&sVar1, iParam0))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_47(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0x00000000;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 0x00000005;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 0x00000006;
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 0x00000003;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000002)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_49(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_50(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_51(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_48(iParam0);
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000C)
		{
			func_57(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000009)
		{
			func_56(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		if (func_39(iVar0))
		{
			uParam1->f_3B = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40;
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			if (func_55(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_52(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_52(0x000002F0, iParam3, 0x00000000);
			}
			uParam1->f_3C = func_52(0x000002F1, iParam3, 0x00000000);
			uParam1->f_3D = func_52(0x000002F2, iParam3, 0x00000000);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_55(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_52(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_52(0x000002F0, iParam3, 0x00000000);
			}
		}
	}
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_53(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_54();
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

int func_54()
{
	return Global_1407E9;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_276C68[iParam0 /*3*/][func_53(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (iParam0 != 0x00000000)
	{
		*uParam2 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
		*uParam3 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0x00000000)
	{
		return;
	}
	if (iParam1 == 0x00000000)
	{
		if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
		{
			if (iParam0 != 0x00000000)
			{
				if (unk_0xDCCE25EA1C1D1F76(iParam0) && unk_0x6BE6D34EA3F561AC(iParam0) != 0xFFFFFFFF)
				{
					*uParam2 = unk_0x6BE6D34EA3F561AC(iParam0);
					*uParam3 = unk_0x7E1F0AD2CE37D34C(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000007)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000010 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000017)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001C)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 >= 0x0000000E && *uParam2 <= 0x00000014)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			else if (iParam1 == 0x00000001)
			{
				if (*uParam2 == 0x00000001)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000040 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000002)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000004)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000010 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000006)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000011)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000014)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 >= 0x00000008 && *uParam2 <= 0x0000000E)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000009)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000C)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000017)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if ((*uParam2 >= 0x0000000E && *uParam2 <= 0x00000014) || *uParam2 == 0x00000002)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
	}
}

void func_57(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (iParam0 != 0x00000000)
	{
		*uParam2 = unk_0x36C584991B4C183F(iParam0, iParam1);
		*uParam3 = unk_0xDADA8E1DD0D0D9D9(iParam0, iParam1);
		*uParam4 = unk_0xAA973E78065E07A0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0x00000000)
	{
		return;
	}
	switch (iVar0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x0000000F)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000040 != 0x00000000)
				{
					if (*uParam2 == 0x00000003 || *uParam2 == 0x00000016)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000005)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
				{
					if (*uParam2 == 0x00000008)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000001 || *uParam2 == 0x0000000A)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000040 != 0x00000000)
				{
					if (*uParam2 == 0x00000013)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
				{
					if (*uParam2 == 0x00000005)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000003)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if (*uParam2 >= 0x00000005 && *uParam2 <= 0x00000007)
				{
					if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
	}
}

int func_58()
{
	func_59();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_59()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_49(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_48(unk_0x16F2683693E537C9());
			if (func_39(iVar0) && (!func_60(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_39(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_60(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_61(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_48(iParam0);
	if (func_39(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_62(iParam0, &(Global_1B416.f_936.f_21B.f_12A[iVar0 /*477*/]));
			iVar2 = 0x00000000;
			while (iVar2 <= (0x00000008 - 0x00000001))
			{
				Global_1B416.f_936.f_21B.f_6C2[iVar2 /*4*/][iVar0] = unk_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xFA91242148B28E7D();
					if (Global_1B416.f_936.f_21B.f_6C2[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_1B416.f_936.f_21B.f_6E3 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &iVar3);
			if (iVar0 == 0x00000000)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp0_parachute_current_tint"), iVar3, 0x00000001);
			}
			else if (iVar0 == 0x00000001)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp1_parachute_current_tint"), iVar3, 0x00000001);
			}
			else if (iVar0 == 0x00000002)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp2_parachute_current_tint"), iVar3, 0x00000001);
			}
		}
	}
}

void func_62(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (0x0000002C - 0x00000001))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0x00000000;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= (0x0000002C - 0x00000001))
		{
			iVar3 = func_67(iVar0);
			if (iVar3 != 0x00000000)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_67(iVar0));
				Var4.f_1 = 0x00000000;
				Var4.f_2 = 0x00000000;
				Var4.f_3 = 0x00000000;
				Var4.f_4 = 0x00000000;
				if (Var4 != 0x00000000 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 0x00000001;
					}
					Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
					Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					if (Var4.f_1 == 0xFFFFFFFF)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0x00000000;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0x00000000;
					iVar2 = func_65(Var4, iVar1);
					while (iVar2 != 0x00000000)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_65(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000032)
		{
			uParam1->f_DD[iVar0 /*5*/].f_1 = 0x00000000;
			iVar0++;
		}
		iVar6 = unk_0x4160B65AE085B5A9();
		iVar5 = 0x00000000;
		while (iVar5 < iVar6)
		{
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_64(Var7.f_1)) && iVar9 < 0x00000033)
			{
				if (!unk_0x232048AB4B0E0259(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0x00000000;
					Var4.f_2 = 0x00000000;
					Var4.f_3 = 0x00000000;
					Var4.f_4 = 0x00000000;
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (unk_0x440C646F2F11A2A1(iParam0, Var4, 0x00000000))
					{
						Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
						Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					}
					if (Var4.f_1 == 0xFFFFFFFF)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0x00000000;
						}
					}
					uParam1->f_DD[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0x00000000;
					iVar1 = 0x00000000;
					while (iVar1 < unk_0xAD2A7A6DFF55841B(iVar5))
					{
						if (unk_0x31D5E073B6F93CDC(iVar5, iVar1, &Var8))
						{
							if (!func_63(Var8.f_3))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, Var4, Var8.f_3))
								{
									unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0x00000000)
				{
					if (!unk_0x440C646F2F11A2A1(iParam0, Var4, 0x00000000))
					{
						Var4 = 0x00000000;
						Var4.f_1 = 0x00000000;
					}
				}
				uParam1->f_DD[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case 0xB4FC92B0:
		case 0x1A1F1260:
		case 0xE4E00B70:
		case 0x2C298B2B:
		case 0xDFB79725:
		case 0x6BD7228C:
		case 0x9DDBCF8C:
		case 0xB319A52C:
		case 0xC6836E12:
		case 0x43B1B173:
		case 0x4ABDA3FA:
		case 0xE7EE68EA:
		case 0x29366D21:
		case 0x3ADE514B:
		case 0xE64513E9:
		case 0xCD7AEB9A:
		case 0xFA7B27A6:
		case 0xE285CA9A:
		case 0x2B904B19:
		case 0x22C24F9C:
		case 0x8D0D5ECD:
		case 0x1F07150A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_64(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0x00000000;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0x00000000;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0x00000000;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0x00000000;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0x00000000;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0x00000000;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0x00000000;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0x00000000;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0x00000000;
				break;
			
			case 0xC78D71B4:
			case 0xDDE2A27C:
			case 0x176898A6:
			case 0xA52E2957:
			case 0x8210D4D5:
			case 0xD866ACD1:
			case 0x8F796EC9:
			case 0xCE1A1A4D:
			case 0xEB779748:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 0x12E82D3D:
			case 0xBD248B55:
			case 0x0781FE4A:
			case 0xCD274149:
			case 0xBA45E8B8:
			case 0x94117305:
			case 0x19044EE0:
			case 0x97EA20B8:
			case 0x476BF155:
			case 0xB62D1F67:
			case 0xAF3696A1:
			case 0x917F6C8C:
			case 0x2B5EF5EC:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000009:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case 0xBD248B55:
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x84C8B2D3;
					break;
				
				case 0x00000001:
					iVar0 = 0x937ED0B7;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0x00000000)
			{
				iVar1 = func_66(iParam0, &uVar4);
				if (iVar1 != 0xFFFFFFFF)
				{
					iVar2 = 0x00000000;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_63(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_66(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x76D04710;
			break;
		
		case 0x00000001:
			iVar0 = 0x4C1DA136;
			break;
		
		case 0x00000002:
			iVar0 = 0x378DDAD7;
			break;
		
		case 0x00000003:
			iVar0 = 0xD6D57281;
			break;
		
		case 0x00000004:
			iVar0 = 0xA9066703;
			break;
		
		case 0x00000005:
			iVar0 = 0x0BAB693A;
			break;
		
		case 0x00000006:
			iVar0 = 0xE5D87BED;
			break;
		
		case 0x00000007:
			iVar0 = 0x3573FB94;
			break;
		
		case 0x00000008:
			iVar0 = 0x1D838821;
			break;
		
		case 0x00000009:
			iVar0 = 0xBB200985;
			break;
		
		case 0x0000000A:
			iVar0 = 0xE14402F7;
			break;
		
		case 0x0000000B:
			iVar0 = 0xCC07A8AD;
			break;
		
		case 0x0000000C:
			iVar0 = 0xAF5E8908;
			break;
		
		case 0x0000000D:
			iVar0 = 0xDFA31A8F;
			break;
		
		case 0x0000000E:
			iVar0 = 0x644B237F;
			break;
		
		case 0x0000000F:
			iVar0 = 0xCCC586AE;
			break;
		
		case 0x00000010:
			iVar0 = 0x8150911E;
			break;
		
		case 0x00000011:
			iVar0 = 0x7B37201A;
			break;
		
		case 0x00000012:
			iVar0 = 0xDFEC2248;
			break;
		
		case 0x00000013:
			iVar0 = 0x6A4A26BC;
			break;
		
		case 0x00000014:
			iVar0 = 0x1A378022;
			break;
		
		case 0x00000015:
			iVar0 = 0xFE852271;
			break;
		
		case 0x00000016:
			iVar0 = 0x74300D78;
			break;
		
		case 0x00000017:
			iVar0 = 0x8C4B2ADF;
			break;
		
		case 0x00000018:
			iVar0 = 0xC26535F0;
			break;
		
		case 0x00000019:
			iVar0 = 0x131AA6B3;
			break;
		
		case 0x0000001A:
			iVar0 = 0xD6909BE9;
			break;
		
		case 0x0000001B:
			iVar0 = 0xEF3FD8A1;
			break;
		
		case 0x0000001C:
			iVar0 = 0xD7119454;
			break;
		
		case 0x0000001D:
			iVar0 = 0x14B69421;
			break;
		
		case 0x0000001E:
			iVar0 = 0x697229C1;
			break;
		
		case 0x0000001F:
			iVar0 = 0x0B522FBC;
			break;
		
		case 0x00000021:
			iVar0 = 0x0ED4684E;
			break;
		
		case 0x00000022:
			iVar0 = 0x170AFF96;
			break;
		
		case 0x00000023:
			iVar0 = 0xF6A12136;
			break;
		
		case 0x00000024:
			iVar0 = 0x1A0BDEFC;
			break;
		
		case 0x00000025:
			iVar0 = 0xFD243A87;
			break;
		
		case 0x00000026:
			iVar0 = 0x22541EBE;
			break;
	}
	return iVar0;
}

void func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (func_39(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_1B416.f_936.f_21B.f_126[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_69(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	uParam0->f_3 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
	uParam0->f_5 = unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9());
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x8A22C4C08282BF26(joaat("finale_choice")) > 0x00000000)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000004))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000005))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000006))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000007))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0x00000000, 0x00000001, 0x00000000))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 0x00000001)
	{
		if (func_73(&iVar0))
		{
			if (func_71(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0x00000000, 0x00000001, 0x00000000))
		{
			iVar3 = func_227();
			if (iVar3 == 0x00000000)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 0x00000001)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 0x00000002)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_70(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_70(vector3 vParam0, char* sParam1, vector3 vParam2)
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

bool func_71(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 0x00000001:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 0x00000002:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 0x00000003:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 0x00000004:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 0x00000005:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 0x00000006:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 0x00000007:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 0x00000008:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 0x00000009:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 0x0000000A:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 0x0000000B:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 0x0000000C:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 0x0000000D:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 0x0000000E:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 0x0000000F:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 0x00000010:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 0x00000011:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 0x00000012:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 0x00000013:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 0x00000014:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 0x00000015:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 0x00000016:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 0x00000017:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 0x00000018:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 0x00000019:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 0x0000001A:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 0x0000001B:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 0x0000001C:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 0x0000001D:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 0x0000001E:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 0x0000001F:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 0x00000020:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 0x00000021:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 0x00000022:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 0x00000023:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 0x00000024:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 0x00000025:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 0x00000026:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 0x00000027:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 0x00000028:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 0x00000029:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 0x0000002A:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 0x0000002B:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 0x0000002C:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 0x0000002D:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x0000002E:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x0000002F:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000030:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000031:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000034:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000032:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000033:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_72(*uParam1, 0f, 0f, 0f, 0x00000000);
}

bool func_72(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_73(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_96())
		{
			*uParam0 = func_79(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000006, 0xFFFFFFFF, 0x00000000, 0x00000001, 0xFFFFFFFF);
			if (func_78(*uParam0) && !func_74(*uParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_74(int iParam0)
{
	return func_75(iParam0, 0x00000000, 0x00000001);
}

int func_75(int iParam0, int iParam1, bool bParam2)
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
		if (func_77() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_52(func_76(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_76(int iParam0)
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

int func_77()
{
	return Global_7830;
}

int func_78(int iParam0)
{
	return func_75(iParam0, 0x00000005, 0x00000001);
}

int func_79(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000034)
	{
		if (iParam1 == 0x00000006 || iParam1 == func_95(iVar0))
		{
			if (!bParam3 || func_94(iVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_80(iVar0, 0x00000000), 0x00000001);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == 0xFFFFFFFF)) && (iParam4 || iVar0 != 0x00000015)) && iVar0 != iParam5)
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

Vector3 func_80(int iParam0, bool bParam1)
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
			return func_91(Global_189E7);
			break;
		
		case 0x0000002E:
			if (Global_184466 != func_90())
			{
				if (func_89(Global_184466))
				{
					return func_82(0x00000002, 0x00000002);
				}
				else if (func_81(Global_184466))
				{
					return func_82(0x0000002D, 0x00000003);
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

int func_81(int iParam0)
{
	if (iParam0 != func_90())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_82(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184466 != func_90())
	{
		if (iParam1 == 0x00000003)
		{
			if (func_83(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000004))
			{
				if (func_83(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000005))
			{
				if (func_83(iParam0, 0x00000002, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_83(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_88(iParam3, &Var0))
	{
		return 0x00000000;
	}
	if (!func_88(iParam1, &vVar1))
	{
		return 0x00000000;
	}
	if (!bParam4)
	{
		Var2 = { func_86(iParam0) };
	}
	else
	{
		Var2 = { func_85(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_84(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_84(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 0x00000001;
}

Vector3 func_84(vector3 vParam0, float fParam1)
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

struct<6> func_85(int iParam0)
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

struct<6> func_86(int iParam0)
{
	return func_87(iParam0);
}

struct<6> func_87(int iParam0)
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

int func_88(int iParam0, var uParam1)
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

int func_89(int iParam0)
{
	if (iParam0 != func_90())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000005))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_90()
{
	return 0xFFFFFFFF;
}

Vector3 func_91(int iParam0)
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
			if (func_92() == 0x00000000)
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

int func_92()
{
	return func_93(unk_0xD803B885F5E47A62());
}

int func_93(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

int func_94(int iParam0)
{
	return func_75(iParam0, 0x00000000, 0x00000000);
}

int func_95(int iParam0)
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

bool func_96()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_97()
{
	var uVar0;
	
	func_107(&uVar0, unk_0x4460E481B9E33ADA());
	func_106(&uVar0, unk_0x8D199E381D262EEF());
	func_105(&uVar0, unk_0xD8A54335F18763BA());
	func_100(&uVar0, unk_0x972A296334C9D57B());
	func_99(&uVar0, unk_0x118229AD063C3C1D());
	func_98(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_98(var uParam0, int iParam1)
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

void func_99(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_100(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104(*uParam0);
	iVar1 = func_102(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_101(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_101(int iParam0, int iParam1)
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

var func_102(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_103(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_103(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_104(int iParam0)
{
	return iParam0 & 0x0000000F;
}

void func_105(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_106(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_107(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

void func_108(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		unk_0x3CFFF3C8EACD8DC1(0x00000009, &uVar0, 0x00000001, 0x00000001);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x8DECFDD6715449E4(0x00000009, &cVar1);
	}
}

void func_109(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEA6BC48857E0AC4C(&Global_17646))
	{
		unk_0x73B08BBDEAC9B885(&Global_17646, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		StringCopy(&Global_17646, "", 64);
	}
	StringCopy(&Global_17646, sParam0, 64);
	unk_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_217(0x00000000));
}

struct<2> func_110(int iParam0)
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

void func_111(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_112(uParam1, "Abigail1", func_12(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_112(uParam1, "Abigail2", func_12(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_112(uParam1, "Barry1", func_12(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_112(uParam1, "Barry2", func_12(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_112(uParam1, "Barry3", func_12(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_112(uParam1, "Barry3A", func_12(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_112(uParam1, "Barry3C", func_12(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_112(uParam1, "Barry4", func_12(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_112(uParam1, "Dreyfuss1", func_12(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_112(uParam1, "Epsilon1", func_12(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_112(uParam1, "Epsilon2", func_12(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_112(uParam1, "Epsilon3", func_12(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_112(uParam1, "Epsilon4", func_12(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_112(uParam1, "Epsilon5", func_12(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_112(uParam1, "Epsilon6", func_12(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_112(uParam1, "Epsilon7", func_12(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_112(uParam1, "Epsilon8", func_12(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_112(uParam1, "Extreme1", func_12(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_112(uParam1, "Extreme2", func_12(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_112(uParam1, "Extreme3", func_12(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_112(uParam1, "Extreme4", func_12(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_112(uParam1, "Fanatic1", func_12(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_112(uParam1, "Fanatic2", func_12(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_112(uParam1, "Fanatic3", func_12(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_112(uParam1, "Hao1", func_12(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_112(uParam1, "Hunting1", func_12(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_112(uParam1, "Hunting2", func_12(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_112(uParam1, "Josh1", func_12(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_112(uParam1, "Josh2", func_12(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_112(uParam1, "Josh3", func_12(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_112(uParam1, "Josh4", func_12(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_112(uParam1, "Maude1", func_12(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_112(uParam1, "Minute1", func_12(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_112(uParam1, "Minute2", func_12(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_112(uParam1, "Minute3", func_12(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_112(uParam1, "MrsPhilips1", func_12(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_112(uParam1, "MrsPhilips2", func_12(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_112(uParam1, "Nigel1", func_12(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_112(uParam1, "Nigel1A", func_12(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_112(uParam1, "Nigel1B", func_12(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_112(uParam1, "Nigel1C", func_12(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_112(uParam1, "Nigel1D", func_12(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_112(uParam1, "Nigel2", func_12(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_112(uParam1, "Nigel3", func_12(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_112(uParam1, "Omega1", func_12(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_112(uParam1, "Omega2", func_12(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_112(uParam1, "Paparazzo1", func_12(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_112(uParam1, "Paparazzo2", func_12(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_112(uParam1, "Paparazzo3", func_12(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_112(uParam1, "Paparazzo3A", func_12(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_112(uParam1, "Paparazzo3B", func_12(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_112(uParam1, "Paparazzo4", func_12(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_112(uParam1, "Rampage1", func_12(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_112(uParam1, "Rampage3", func_12(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_112(uParam1, "Rampage4", func_12(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_112(uParam1, "Rampage5", func_12(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_112(uParam1, "Rampage2", func_12(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_112(uParam1, "TheLastOne", func_12(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_112(uParam1, "Tonya1", func_12(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_112(uParam1, "Tonya2", func_12(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_112(uParam1, "Tonya3", func_12(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_112(uParam1, "Tonya4", func_12(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_112(uParam1, "Tonya5", func_12(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_112(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_113(int iParam0)
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

int func_114(int iParam0)
{
	int iVar0;
	
	if (func_144(&(iParam0->f_1)))
	{
		if (!unk_0xEA6BC48857E0AC4C(&(iParam0->f_9)))
		{
			func_134(0x00000001);
			func_132(iParam0, 0x00000001, func_133(*iParam0));
		}
		if (iParam0->f_1B)
		{
			if (func_131(*iParam0))
			{
				while (!unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
				{
					func_191();
					SYSTEM::WAIT(0x00000000);
				}
			}
		}
		func_115(*iParam0);
		iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(iParam0->f_1), iParam0, 0x0000003D, 0x000088B8);
		unk_0x5E8C29AE121DF1C7(&(iParam0->f_1));
		if (unk_0x62A1F4500E8F07E0())
		{
			func_371("Initial cutscene loaded and passing to RC mission.");
			unk_0x357FE4830F757FC1(iVar0);
		}
		else
		{
			func_371("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0x5C8D148FC238F38A();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_115(int iParam0)
{
	struct<2> Var0;
	
	func_130();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000FA, 0x00000000);
	}
	if (func_129(iParam0))
	{
		unk_0xE731059548189243(unk_0x16F2683693E537C9(), 0x00000000);
	}
	unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
	unk_0x11CCD0ACA866C6C5(0x00000000, 0x00000001);
	unk_0x11CCD0ACA866C6C5(0x00000003, 0x00000001);
	unk_0x11CCD0ACA866C6C5(0x00000002, 0x00000001);
	if (Global_A664 == 0x00000001)
	{
		if (func_127(unk_0x16F2683693E537C9()))
		{
			func_118(unk_0x16F2683693E537C9());
		}
	}
	if (!func_208())
	{
		if (iParam0 < 0x0000003F)
		{
			func_116(iParam0);
			Var0 = { func_12(iParam0) };
			unk_0x974531784BE14213(0x00000001, &Var0);
		}
	}
}

void func_116(int iParam0)
{
	if (iParam0 < 0x0000003F)
	{
		func_117();
		Global_12C4D = iParam0;
		Global_12C4C = 0x00000000;
		Global_12C4F = 0x00000007;
	}
}

void func_117()
{
	if (Global_12C4C != 0x00000006)
	{
	}
	if (Global_12C51)
	{
		unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
		Global_12C51 = 0x00000000;
		Global_574E.f_20E1 = 0x00000000;
	}
	Global_12C4C = 0x00000006;
	Global_12C4E = 0xFFFFFFFF;
	Global_12C4D = 0xFFFFFFFF;
}

void func_118(int iParam0)
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
	iVar0 = func_126(iParam0);
	if (!iVar0 == 0xFFFFFFFF)
	{
		iVar1 = Global_A58F[iVar0 /*5*/];
		func_121(0x00000001, iVar1, 0x00000001);
		return;
	}
	iVar2 = func_120(iParam0);
	if (iVar2 == 0xFFFFFFFF)
	{
		return;
	}
	func_119(iVar2);
}

void func_119(int iParam0)
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

int func_120(int iParam0)
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

void func_121(int iParam0, int iParam1, int iParam2)
{
	func_122(iParam0, iParam1, iParam2, 0x00000000, 0x00000000, 0x00000001);
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_124(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_123();
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

int func_123()
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

int func_124(int iParam0, int iParam1, int iParam2)
{
	if (func_125(iParam0, iParam1, iParam2) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_125(int iParam0, int iParam1, int iParam2)
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

int func_126(int iParam0)
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

int func_127(int iParam0)
{
	if (func_128(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_128(int iParam0)
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

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000005:
		case 0x00000006:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
		case 0x00000031:
		case 0x00000032:
		case 0x0000003C:
		case 0x0000003D:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

void func_130()
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

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000005:
		case 0x00000006:
		case 0x0000000E:
		case 0x00000010:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
		case 0x00000031:
		case 0x00000032:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

void func_132(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (func_128(uParam0->f_1C[iVar0]))
		{
			unk_0xAA6B3A4292417750(uParam0->f_1C[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, 0x00000000, 0x00000000, 0x00000000);
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_128(uParam0->f_23[iVar0]))
		{
			unk_0xAA6B3A4292417750(uParam0->f_23[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, 0x00000000, 0x00000000, 0x00000000);
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (func_128(uParam0->f_29[iVar0]))
		{
			unk_0xAA6B3A4292417750(uParam0->f_29[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, 0x00000000, 0x00000000, 0x00000000);
		}
		iVar0++;
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), bParam1, bParam1, bParam1, bParam1, bParam1, 0x00000000, 0x00000000, 0x00000000);
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), bParam1);
		if (bParam2)
		{
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
		}
	}
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000005:
		case 0x00000006:
		case 0x0000000E:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
		case 0x00000031:
		case 0x00000032:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

void func_134(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	if (!unk_0x131F22FE6F47A65D(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0x98E4DC66A651C9FA(iVar0, bParam0, 0x00000010);
		unk_0x98E4DC66A651C9FA(iVar0, bParam0, 0x00000020);
	}
	func_135(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_135(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_143(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_142())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_141(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_143(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_141(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_139(unk_0xD803B885F5E47A62())) && !func_137(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_136()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_139(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_136()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_137(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_138(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_138(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_54();
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

int func_139(int iParam0)
{
	if (func_137(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_140())
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

bool func_140()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_141(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_142()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_143(int iParam0)
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

int func_144(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		unk_0x92DCE5C81176D2B4(sParam0);
		while (!unk_0x1FBF08B001C4788A(sParam0))
		{
			unk_0x92DCE5C81176D2B4(sParam0);
			SYSTEM::WAIT(0x00000000);
		}
		return 0x00000001;
	}
	func_371("Attempting to launch invalid script file [TERMINATING]");
	return 0x00000000;
}

void func_145()
{
	Global_4CD7 = 0x00000000;
	func_146();
}

void func_146()
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

int func_147()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_148(var uParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_12B4E)
	{
		func_371("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0x00000000;
	}
	func_111(*uParam0, &Var0);
	if ((func_190(*uParam0) || func_188(*uParam0)) || Global_12C43 == 0x00000001)
	{
		return 0x00000001;
	}
	if (!unk_0x338D6FF72D84D90F())
	{
		func_371("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0x00000000;
	}
	if (func_180(*uParam0))
	{
		if (*uParam0 == 0x00000013)
		{
			func_179(uParam0->f_1C[0x00000000]);
		}
		func_371("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0x00000000;
	}
	if (uParam0->f_19 == 0x00000001)
	{
		if (!func_159(uParam0, 0x00000001, 0x00000000))
		{
			return 0x00000000;
		}
	}
	else if (uParam0->f_10 == 0x00000000)
	{
		if (!func_159(uParam0, 0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
	}
	if (((((*uParam0 == 0x00000010 || *uParam0 == 0x00000009) || *uParam0 == 0x00000012) || *uParam0 == 0x00000016) || *uParam0 == 0x00000020) || *uParam0 == 0x00000033)
	{
		if (!func_156(uParam0, 0x00000001, 0x00000001))
		{
			if (*uParam0 == 0x00000010)
			{
				func_155(uParam0);
			}
			else
			{
				func_153(uParam0);
			}
			return 0x00000000;
		}
	}
	else if (*uParam0 == 0x00000018)
	{
		if (!func_156(uParam0, 0x00000000, 0x00000001))
		{
			func_153(uParam0);
			return 0x00000000;
		}
	}
	else if (*uParam0 == 0x00000006)
	{
		if (!func_156(uParam0, 0x00000000, 0x00000001))
		{
			return 0x00000000;
		}
	}
	else if (uParam0->f_1A == 0x00000001)
	{
		if (!func_156(uParam0, 0x00000001, 0x00000000))
		{
			func_153(uParam0);
			return 0x00000000;
		}
	}
	else if (uParam0->f_10 == 0x00000002 || uParam0->f_10 == 0x00000001)
	{
		if (!func_156(uParam0, 0x00000000, 0x00000000))
		{
			func_153(uParam0);
			return 0x00000000;
		}
	}
	if (uParam0->f_10 == 0x00000002 || uParam0->f_10 == 0x00000001)
	{
		if (func_128(uParam0->f_23[0x00000000]))
		{
			if (!unk_0x5A91F08DF773C39D(uParam0->f_23[0x00000000], Var0.f_6, 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000000;
			}
		}
	}
	if (*uParam0 == 0x0000000A)
	{
		if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, uParam0->f_11[0x00000000 /*3*/], 8f))
		{
			func_371("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0x00000000;
		}
	}
	if (Var0.f_4 != 0x00000011)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Var0.f_1A, func_227()))
		{
			func_371("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0x00000000;
		}
	}
	if (func_152(&(uParam0->f_30)) && bParam1)
	{
		func_149(uParam0->f_1C[0x00000000], &(uParam0->f_30), *uParam0);
	}
	return 0x00000001;
}

void func_149(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_128(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 0x00000001:
				if (func_152(uParam1))
				{
					if (unk_0xB4AE0788C1587752(*uParam1))
					{
						unk_0x327AAEE25F323797(iParam0);
						if (iParam2 != 0x00000015)
						{
							if (func_72(uParam1->f_5, 0f, 0f, 0f, 0x00000000))
							{
								unk_0xC6EB89C59F2AF6B8(iParam0, *uParam1, uParam1->f_1, 8f, -8f, 0xFFFFFFFF, 0x00040009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								unk_0xDD353D0E9C789D0E(&iVar0);
								if (func_151(uParam1))
								{
									unk_0x3E8E48829F3C7624(0x00000000, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, 0xFFFFFFFF, 0x00040008, 0f, 0x00000002, 0x00000000);
								}
								else
								{
									unk_0x3E8E48829F3C7624(0x00000000, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, 0xFFFFFFFF, 0x00040008, 0f, 0x00000002, 0x00000000);
								}
								unk_0x3E8E48829F3C7624(0x00000000, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, 0xFFFFFFFF, 0x00040009, 0f, 0x00000002, 0x00000000);
								unk_0x75ABDC5F81978924(iVar0);
								unk_0x78ADC381772E3D54(iParam0, iVar0);
								unk_0xF82EA857DA10E0CD(&iVar0);
							}
						}
						else
						{
							unk_0x3E8E48829F3C7624(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, 0xFFFFFFFF, 0x00040009, 0f, 0x00000002, 0x00000003);
						}
						uParam1->f_3 = 0x00000002;
					}
					else
					{
						uParam1->f_3 = 0x00000000;
					}
				}
				else
				{
					uParam1->f_3 = 0x00000000;
				}
				break;
			
			case 0x00000002:
				if (!func_151(uParam1) || !unk_0xB4ECF989E2C1DAC8(iParam0, *uParam1, uParam1->f_2, 0x00000003))
				{
					if (func_150(iParam2) && !unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 25f))
					{
						unk_0xF96A174EE26D7588(iParam0, unk_0x16F2683693E537C9(), 0x00000000);
						uParam1->f_3 = 0x00000005;
					}
					else if ((func_151(uParam1) && uParam1->f_4 == 0x00000000) && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 0x00000001) < 20f)
					{
						uParam1->f_3 = 0x00000003;
					}
				}
				break;
			
			case 0x00000003:
				unk_0xDD353D0E9C789D0E(&iVar1);
				if (func_72(uParam1->f_5, 0f, 0f, 0f, 0x00000000))
				{
					unk_0xC6EB89C59F2AF6B8(0x00000000, *uParam1, uParam1->f_2, 4f, -4f, 0xFFFFFFFF, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, *uParam1, uParam1->f_1, 8f, -8f, 0xFFFFFFFF, 0x00040009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					unk_0x3E8E48829F3C7624(0x00000000, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, 0xFFFFFFFF, 0x00040008, 0f, 0x00000002, 0x00000000);
					unk_0x3E8E48829F3C7624(0x00000000, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, 0xFFFFFFFF, 0x00040009, 0f, 0x00000002, 0x00000000);
				}
				unk_0x75ABDC5F81978924(iVar1);
				unk_0x78ADC381772E3D54(iParam0, iVar1);
				unk_0xF82EA857DA10E0CD(&iVar1);
				uParam1->f_4 = 0x00000001;
				if (func_150(iParam2))
				{
					uParam1->f_3 = 0x00000002;
				}
				else
				{
					uParam1->f_3 = 0x00000000;
				}
				break;
			
			case 0x00000005:
				if (!func_150(iParam2) || unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 10f))
				{
					if (func_72(uParam1->f_5, 0f, 0f, 0f, 0x00000000))
					{
						unk_0xC6EB89C59F2AF6B8(iParam0, *uParam1, uParam1->f_1, 8f, -8f, 0xFFFFFFFF, 0x00040009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						unk_0x3E8E48829F3C7624(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, 0xFFFFFFFF, 0x00040009, 0f, 0x00000002, 0x00000000);
					}
					uParam1->f_3 = 0x00000002;
				}
				break;
			}
	}
}

int func_150(int iParam0)
{
	if (iParam0 == 0x00000011 || iParam0 == 0x00000014)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_151(var uParam0)
{
	if (unk_0xEA6BC48857E0AC4C(uParam0->f_2))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_152(var uParam0)
{
	if (unk_0xEA6BC48857E0AC4C(*uParam0) || unk_0xEA6BC48857E0AC4C(uParam0->f_1))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_153(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0x00000034)
	{
		func_154(&(uParam0->f_29[0x00000001]));
		func_154(&(uParam0->f_29[0x00000002]));
	}
	if (func_128(unk_0x16F2683693E537C9()))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (uParam0->f_1C - 0x00000001))
		{
			if (func_127(uParam0->f_1C[iVar0]))
			{
				if (!unk_0x405E212DDE472467(uParam0->f_1C[iVar0], 0x00000000))
				{
					unk_0x20641932E5104B25(uParam0->f_1C[iVar0], 0x00000001, 0x00000000);
					unk_0x1E9649458B15960F(uParam0->f_1C[0x00000000], 0x00000000);
				}
				unk_0xFADC0A217229F6B5(uParam0->f_1C[iVar0], 0x00000001);
				if (*uParam0 == 0x00000022)
				{
					if (func_128(uParam0->f_29[0x00000000]))
					{
						unk_0x20641932E5104B25(uParam0->f_29[0x00000000], 0x00000001, 0x00000000);
						unk_0x1E9649458B15960F(uParam0->f_29[0x00000000], 0x00000000);
					}
				}
				switch (*uParam0)
				{
					case 0x00000013:
						func_179(uParam0->f_1C[iVar0]);
						break;
					
					case 0x00000008:
						unk_0x3F423BF5B8125A50("rcmcollect_paperleadinout@");
						while (!unk_0xB4AE0788C1587752("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0x00000000);
						}
						unk_0xDD353D0E9C789D0E(&iVar1);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 10000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iVar1);
						unk_0x78ADC381772E3D54(uParam0->f_1C[iVar0], iVar1);
						unk_0xF82EA857DA10E0CD(&iVar1);
						break;
					
					case 0x00000000:
					case 0x00000001:
						unk_0x3F423BF5B8125A50("rcmabigail");
						while (!unk_0xB4AE0788C1587752("rcmabigail"))
						{
							SYSTEM::WAIT(0x00000000);
						}
						unk_0xDD353D0E9C789D0E(&iVar1);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "rcmabigail", "breakout_base", 8f, -8f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 10000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iVar1);
						unk_0x78ADC381772E3D54(uParam0->f_1C[iVar0], iVar1);
						unk_0xF82EA857DA10E0CD(&iVar1);
						break;
					
					case 0x00000020:
						unk_0x3F423BF5B8125A50("rcmminute1");
						while (!unk_0xB4AE0788C1587752("rcmminute1"))
						{
							SYSTEM::WAIT(0x00000000);
						}
						unk_0xDD353D0E9C789D0E(&iVar1);
						if (iVar0 == 0x00000000)
						{
							unk_0xC6EB89C59F2AF6B8(0x00000000, "rcmminute1", "base_to_idle_joe", 8f, -8f, 0xFFFFFFFF, 0x00008008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							unk_0xC6EB89C59F2AF6B8(0x00000000, "rcmminute1", "base_to_idle_josef", 8f, -8f, 0xFFFFFFFF, 0x00008008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 10000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iVar1);
						unk_0x78ADC381772E3D54(uParam0->f_1C[iVar0], iVar1);
						unk_0xF82EA857DA10E0CD(&iVar1);
						break;
					
					case 0x00000018:
						unk_0x3F423BF5B8125A50("special_ped@hao@base");
						while (!unk_0xB4AE0788C1587752("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0x00000000);
						}
						unk_0xDD353D0E9C789D0E(&iVar1);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "special_ped@hao@base", "hao_exit", 8f, -8f, 0xFFFFFFFF, 0x00000208, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 10000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iVar1);
						unk_0x78ADC381772E3D54(uParam0->f_1C[iVar0], iVar1);
						unk_0xF82EA857DA10E0CD(&iVar1);
						break;
					
					default:
						unk_0x8FB4E06C94958F84(uParam0->f_1C[iVar0]);
						unk_0xF3268524E9BE6D6E(uParam0->f_1C[iVar0], unk_0x16F2683693E537C9(), 10000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_154(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
		}
		unk_0xF690C84DADBB3551(iParam0);
	}
}

void func_155(var uParam0)
{
	int iVar0;
	
	if (func_128(unk_0x16F2683693E537C9()))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (uParam0->f_1C - 0x00000001))
		{
			if (func_127(uParam0->f_1C[iVar0]))
			{
				unk_0xAFF39FB306F8E232(uParam0->f_1C[iVar0], 0x00000001, 0x00000000);
				unk_0x11AD11297DC58CC7(uParam0->f_1C[iVar0], 0x00000000);
				unk_0xFADC0A217229F6B5(uParam0->f_1C[iVar0], 0x00000001);
				unk_0x6C3AE6E278DB3D0E(uParam0->f_1C[iVar0], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				unk_0x6DAD7906B73F064D(&(uParam0->f_1C[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_156(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_23 - 0x00000001);
	}
	else
	{
		iVar1 = 0x00000000;
	}
	if (func_127(unk_0x16F2683693E537C9()))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= iVar1)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_23[iVar0]))
			{
				if (unk_0x437347B10A200C4B(uParam0->f_23[iVar0], 0x00000000))
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0x00000000;
				}
				if (!unk_0xDF1306B443CD3D15(uParam0->f_23[iVar0], 0x00000000))
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0x00000000;
				}
				if (unk_0xB87D13D0C064E9D1(uParam0->f_23[iVar0], unk_0x16F2683693E537C9(), 0x00000000))
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0x00000000;
				}
				if (unk_0x7F6DC62EA9922664(uParam0->f_23[iVar0]) < 0x00000352)
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0x00000000;
				}
				if (bParam2)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (unk_0x1B3D109B39CC2C89(uParam0->f_23[iVar0], unk_0x16F2683693E537C9()) && unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 5f)
						{
							func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0x00000000;
						}
						iVar2 = unk_0x728870EB733D12A1();
						if (func_158(iVar2))
						{
							if (unk_0x134B62B726CEC8E6(iVar2) == joaat("towtruck") || unk_0x134B62B726CEC8E6(iVar2) == joaat("towtruck2"))
							{
								if (func_158(uParam0->f_23[iVar0]))
								{
									if (unk_0x6D18156F72BE0773(iVar2, uParam0->f_23[iVar0]))
									{
										func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0x00000000;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0x728870EB733D12A1();
						if (func_158(iVar3))
						{
							if (unk_0x1B3D109B39CC2C89(uParam0->f_23[iVar0], iVar3) && unk_0x9C66D99E63E8E24C(iVar3) > 6f)
							{
								func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0x00000000;
							}
						}
						if (*uParam0 == 0x00000010)
						{
							if (func_157(unk_0x16F2683693E537C9(), uParam0->f_23[iVar0]))
							{
								func_371("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0x00000000;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
		{
			iVar0 = unk_0x3C66DF04E6EA3587(iParam0);
			if (iVar0 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_158(int iParam0)
{
	if (func_128(iParam0))
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

int func_159(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_1C - 0x00000001);
	}
	else
	{
		iVar1 = 0x00000000;
	}
	if (*uParam0 == 0x00000010)
	{
		iParam2 = 0x00000001;
	}
	if (*uParam0 == 0x0000001E)
	{
		iParam2 = 0x00000001;
	}
	if (func_127(unk_0x16F2683693E537C9()))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= iVar1)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_1C[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_1C[iVar0]))
				{
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), uParam0->f_1C[iVar0]))
						{
							if (iParam2 == 0x00000000)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							if (func_147())
							{
								func_145();
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0x00000000;
						}
					}
					if ((unk_0x688A90832774AB83(uParam0->f_1C[iVar0]) || unk_0xE147126C9AD09A60(uParam0->f_1C[iVar0])) || unk_0xD24FAF25ADC00F44(uParam0->f_1C[iVar0]))
					{
						if (iParam2 == 0x00000000)
						{
							func_153(uParam0);
						}
						else
						{
							func_155(uParam0);
						}
						func_371("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0x00000000;
					}
					if (unk_0x869EFD0BC0868856(uParam0->f_1C[iVar0]))
					{
						if (unk_0x12DE711B1C681E9E(uParam0->f_1C[iVar0], unk_0x16F2683693E537C9(), 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (iParam2 == 0x00000000)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0x00000000;
						}
					}
					if (func_178(*uParam0))
					{
						if (!func_202(*uParam0))
						{
							if (func_173(uParam0->f_1C[iVar0], 0x00000001, 0x00000000, 0x00000000, 0x00000000))
							{
								if (iParam2 == 0x00000000)
								{
									func_153(uParam0);
								}
								else
								{
									func_155(uParam0);
								}
								func_371("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0x00000000;
							}
						}
						if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, unk_0x68F4C0EC296D3901(uParam0->f_1C[iVar0], 0x00000001), 15f))
						{
							if (iParam2 == 0x00000000)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0x00000000;
						}
						if (func_161(uParam0->f_1C[iVar0], 0x432A0000))
						{
							if (iParam2 == 0x00000000)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0x00000000;
						}
					}
					if (!func_160(*uParam0))
					{
						if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, unk_0x68F4C0EC296D3901(uParam0->f_1C[iVar0], 0x00000001), 5f))
						{
							if (iParam2 == 0x00000000)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0x00000000;
						}
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
						{
							if (iParam2 == 0x00000000)
							{
								func_153(uParam0);
							}
							else
							{
								func_155(uParam0);
							}
							func_371("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0x00000000;
						}
					}
				}
				else
				{
					func_371("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 0x00000022)
					{
						if (func_128(uParam0->f_29[0x00000000]))
						{
							unk_0x20641932E5104B25(uParam0->f_29[0x00000000], 0x00000001, 0x00000000);
							unk_0x1E9649458B15960F(uParam0->f_29[0x00000000], 0x00000000);
						}
					}
					return 0x00000000;
				}
			}
			iVar0++;
		}
	}
	return 0x00000001;
}

int func_160(int iParam0)
{
	if (((iParam0 == 0x00000002 || iParam0 == 0x00000003) || iParam0 == 0x00000034) || iParam0 == 0x00000035)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_161(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_128(unk_0x16F2683693E537C9()) && func_128(iParam0))
	{
		if (func_172(iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fVar0, fVar0, fVar0, 0x00000000, 0x00000001, 0x00000000))
			{
				if (func_162(iParam0, fParam1))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_162(int iParam0, float fParam1)
{
	return func_163(iParam0, unk_0x16F2683693E537C9(), fParam1, 0x00000001, 0x000000FA, 0x00000007);
}

bool func_163(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_171(iParam0, iParam1);
	if (!func_128(iParam0) || !func_128(iParam1))
	{
		if (iVar2 != 0xFFFFFFFF)
		{
			func_170(&(Local_37[iVar2 /*4*/]));
		}
		return 0x00000000;
	}
	if (!func_167(iParam0, iParam1, fParam2, iParam3))
	{
		return 0x00000000;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		iVar2 = func_166();
		if (iVar2 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		Local_37[iVar2 /*4*/].f_1 = iParam0;
		Local_37[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f) };
	uVar0 = func_164(&(Local_37[iVar2 /*4*/]), vVar1, iParam1, &(Local_37[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1C0640BA9A7327B3() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_164(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0x00000000;
	if (!func_128(iParam2))
	{
		*uParam0 = 0x00000000;
		return 0x00000000;
	}
	if (*uParam0 == 0x00000000)
	{
		vVar1 = { func_165(iParam2, iParam5) };
		*uParam0 = unk_0xCD02F8660C47B801(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 0x000001FF, iParam4, 0x00000007);
		return 0x00000000;
	}
	iVar4 = unk_0x1EC301670B54C6DE(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0x00000000)
	{
		*uParam0 = 0x00000000;
		return 0x00000000;
	}
	else if (iVar4 == 0x00000001)
	{
		return 0x00000000;
	}
	*uParam0 = 0x00000000;
	if (unk_0xEC560E589DF8370E(iVar3))
	{
		func_128(iVar3);
		if (unk_0x940C1429253D3B1B(iVar3) == iParam2)
		{
			if (bLocal_38)
			{
				unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam2, 0x00000001), 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
			}
			*uParam3 = unk_0x1C0640BA9A7327B3();
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (unk_0xE2F1E99DD161A861(iVar3))
	{
		func_128(iVar3);
		if (unk_0x405E212DDE472467(iParam2, 0x00000000))
		{
			if (unk_0x96A5FE5834B81CE7(iVar3) == unk_0x6937EA2286828455(iParam2, 0x00000000))
			{
				if (bLocal_38)
				{
					unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam2, 0x00000001), 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
				}
				*uParam3 = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
		return 0x00000000;
	}
	return 0x00000000;
}

Vector3 func_165(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0x00000007)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000007);
		iParam1 = iVar0;
	}
	if (iParam1 == 0x00000000)
	{
		return unk_0x68F4C0EC296D3901(iParam0, 0x00000001);
	}
	else if (iParam1 == 0x00000001)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000002)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x00009995, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000003)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x000049D9, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000004)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000DEAD, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000005)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000F9BB, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000006)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x00009000, 0f, 0f, 0f);
	}
	return unk_0x68F4C0EC296D3901(iParam0, 0x00000001);
}

int func_166()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0x00000000 && Local_37[iVar0 /*4*/].f_1 == 0x00000000) && Local_37[iVar0 /*4*/].f_2 == 0x00000000)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_167(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_169(unk_0x68F4C0EC296D3901(iParam1, 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 0x00000001;
	}
	if (iParam3 == 0x00000000)
	{
		vVar1 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar1 = { func_169(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_168(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_168(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_169(vector3 vParam0)
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

void func_170(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
}

int func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_172(int iParam0)
{
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_173(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0x00000000)
	{
		iVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		iVar0 = 2f;
	}
	if (func_128(unk_0x16F2683693E537C9()) && func_128(iParam0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 0x00000001);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			iVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_177(iParam0, bParam1, iVar0, fVar1))
			{
				return 0x00000001;
			}
			if (func_174(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
		else
		{
			if (unk_0x52AE17073D025311(unk_0x16F2683693E537C9()))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), iVar0, 0x00000001))
					{
						return 0x00000001;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					iVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_177(iParam0, bParam1, iVar0, fVar1))
				{
					return 0x00000001;
				}
			}
			if (func_174(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_174(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_grenade"), fParam1, 0x00000001) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_molotov"), fParam1, 0x00000001)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_smokegrenade"), fParam1, 0x00000001)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_stickybomb"), 5f, 0x00000001))
		{
			if (bParam3)
			{
				if (func_175(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_175(iParam0, fParam1))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		if (unk_0x723EE7F83DF1497D(vVar0, vVar1, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_175(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0x00000000) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0x00000000))
	{
		if (func_176(iParam0, vVar1, 90f, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_176(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_169(vParam1 - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 0x00000001;
	}
	if (iParam3 == 0x00000000)
	{
		vVar1 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar1 = { func_169(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_168(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_177(int iParam0, bool bParam1, int iParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fParam3, fParam3, fParam3, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), iParam2, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_178(int iParam0)
{
	if (((((iParam0 == 0x00000002 || iParam0 == 0x00000003) || iParam0 == 0x00000022) || iParam0 == 0x0000000B) || iParam0 == 0x00000034) || iParam0 == 0x00000035)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_179(int iParam0)
{
	int iVar0;
	
	if (func_128(unk_0x16F2683693E537C9()) && func_128(iParam0))
	{
		unk_0x3F423BF5B8125A50("rcmextreme3");
		while (!unk_0xB4AE0788C1587752("rcmextreme3"))
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0xDD353D0E9C789D0E(&iVar0);
		unk_0xC6EB89C59F2AF6B8(0x00000000, "rcmextreme3", "jump_fall", 1000f, -8f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
		unk_0x05D36E45031B6514(0x00000000, 64.6f, -737.8f, 44.2f);
		unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 10000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0x75ABDC5F81978924(iVar0);
		unk_0x78ADC381772E3D54(iParam0, iVar0);
		unk_0xF82EA857DA10E0CD(&iVar0);
	}
}

int func_180(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_186();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (func_190(iParam0))
	{
		return 0x00000000;
	}
	if (!func_184(0x00000004))
	{
		if (func_188(iParam0))
		{
		}
		else
		{
			return 0x00000001;
		}
	}
	if (func_183() && !func_182())
	{
		return 0x00000001;
	}
	if (!func_181(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000000)
			{
				return 0x00000001;
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000002))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_181(int iParam0)
{
	if ((((iParam0 == 0x00000005 || iParam0 == 0x00000006) || iParam0 == 0x00000029) || iParam0 == 0x0000003C) || iParam0 == 0x0000003D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_182()
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

int func_183()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

bool func_184(int iParam0)
{
	return func_185(iParam0, Global_A1D7);
}

int func_185(int iParam0, int iParam1)
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

int func_186()
{
	return func_187(unk_0xBB0808A181D4745C(), 0x00000000);
}

int func_187(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x12AB0310C2281427(sParam0);
	iVar3 = 0x00000000;
	iVar3 = 0x00000000;
	while (iVar3 < 0x0000003F)
	{
		iVar0 = iVar3;
		func_111(iVar0, &sVar1);
		if (unk_0x12AB0310C2281427(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0x00000000)
	{
	}
	return 0xFFFFFFFF;
}

int func_188(int iParam0)
{
	if ((func_189() && Global_181B8.f_B == 0x00000006) && iParam0 == func_187(&(Global_181B8.f_3), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_189()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_190(int iParam0)
{
	if (func_217(0x00000000))
	{
		if (Global_12C44.f_1 == 0x00000007)
		{
			if (Global_12C44 == iParam0)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_191()
{
	func_196(0x00000000);
	func_195();
	func_192();
}

void func_192()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (func_193(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 10.5f, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xCE98FBB3) != 0x00000001)
				{
					unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				}
			}
		}
	}
}

int func_193(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000047, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000048, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000049, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003C, 0x00000001);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000045, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000046, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000056, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000051, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000052, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000088, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000072, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000057, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000058, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000071, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000073, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000074, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000075, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000076, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000077, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000160, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000083, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000084, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000081, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000082, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000085, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000086, 0x00000001);
	unk_0xCFAE3195DD6AE715();
	func_194(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_1D) > 0x000001F4)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_194(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0x00000000);
			}
		}
	}
}

void func_195()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000015, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000018, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000101, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000016, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000017, 0x00000001);
}

void func_196(int iParam0)
{
	if (func_201())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_200(0x00000000))
		{
			func_197(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_197(int iParam0)
{
	if (func_201())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_199())
		{
			func_198(0x00000001, 0x00000001);
		}
		else
		{
			func_198(0x00000000, 0x00000000);
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
	if (!func_142())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_198(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_200(0x00000000))
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

bool func_199()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_200(int iParam0)
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

bool func_201()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_202(int iParam0)
{
	if ((((iParam0 == 0x00000034 || iParam0 == 0x00000035) || iParam0 == 0x00000036) || iParam0 == 0x00000037) || iParam0 == 0x00000038)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_203(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_186();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	iVar0 = func_205(&(Global_1B085[iParam0 /*10*/].f_9), 0x00000001, 0x00000004, 0x00000000, 0x00000000);
	if (!iVar0 == 0x00000001)
	{
		return 0x00000000;
	}
	func_204(iParam0);
	return 0x00000001;
}

void func_204(int iParam0)
{
	Global_1B085[iParam0 /*10*/].f_4 = 0x00000001;
	Global_1B085[iParam0 /*10*/].f_5 = 0x00000000;
	Global_1B085[iParam0 /*10*/].f_6 = 0x00000000;
	Global_1B085[iParam0 /*10*/] = 0x00000000;
}

int func_205(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_207(0x00000000))
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
		if (!func_184(iParam2))
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
			func_206(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_206(var uParam0, int iParam1)
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

int func_207(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_184(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_208()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_209(int iParam0)
{
	char* sVar0;
	
	if (Global_12B4E)
	{
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0x00000000;
	}
	if (!Global_1B416.f_2378 && !func_217(0x00000001))
	{
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0x00000000;
	}
	if (!func_210(iParam0))
	{
		Global_1B085[iParam0 /*10*/].f_1 = 0x00000001;
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0x00000000;
	}
	if (Global_181B8.f_B == 0x00000006)
	{
		if (Global_181B8 < 0x00000009)
		{
			func_111(iParam0, &sVar0);
			if (unk_0x7F8A39872A07D2CE(&(Global_181B8.f_3), sVar0))
			{
				func_371("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0x00000000;
			}
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("candidate_controller")) == 0x00000000)
	{
		Global_1B085[iParam0 /*10*/].f_1 = 0x00000001;
		func_371("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0x00000000;
	}
	return 0x00000001;
}

int func_210(int iParam0)
{
	var uVar0;
	
	func_111(iParam0, &uVar0);
	if (!func_184(0x00000004))
	{
		if (func_188(iParam0))
		{
		}
		else
		{
			return 0x00000000;
		}
	}
	if (func_183() && !func_182())
	{
		return 0x00000000;
	}
	if (func_216(iParam0))
	{
		return 0x00000000;
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_186();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!func_190(iParam0))
	{
		if (!func_215(iParam0))
		{
			return 0x00000000;
		}
		if (!func_214(iParam0))
		{
			return 0x00000000;
		}
		if (func_213(iParam0))
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x0000003A)
	{
		if (func_211(0x00000005))
		{
			Global_1B085[iParam0 /*10*/].f_3 = 0x00000000;
		}
	}
	if (Global_1B085[iParam0 /*10*/].f_3 == 0x00000001)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_211(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_181EC.f_157 == 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x0000000A)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			if (func_211(iVar0))
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_212(iParam0, &sVar1);
		iVar2 = unk_0x0D1736C2E221BCEA(Global_16E56[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0x00000000 && Global_181EC.f_157 == iVar2)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_212(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 0x00000005:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 0x00000006:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (unk_0xBCFF5481C5F58C19("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0xBCFF5481C5F58C19("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0xBCFF5481C5F58C19("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 0x00000003:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 0x00000004:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 0x00000008:
		case 0x00000007:
		case 0x00000009:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x7F8A39872A07D2CE(sParam1, "");
}

bool func_213(int iParam0)
{
	if (iParam0 == 0x0000003F || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000003);
}

bool func_214(int iParam0)
{
	if (iParam0 == 0x0000003F || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000002);
}

bool func_215(int iParam0)
{
	if (iParam0 == 0x0000003F || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000000);
}

int func_216(int iParam0)
{
	if (func_181(iParam0))
	{
		return 0x00000000;
	}
	else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_217(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

char* func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "Rampage1";
		
		case 0x00000001:
			return "Rampage3";
		
		case 0x00000002:
			return "Rampage4";
		
		case 0x00000003:
			return "Rampage5";
		
		case 0x00000004:
			return "Rampage2";
		
		default:
	}
	return "";
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000034;
		
		case 0x00000001:
			return 0x00000036;
		
		case 0x00000002:
			return 0x00000037;
		
		case 0x00000003:
			return 0x00000038;
		
		case 0x00000004:
			return 0x00000035;
		
		default:
	}
	return 0xFFFFFFFF;
}

bool func_220()
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_225(unk_0x16F2683693E537C9()))
	{
		return bVar0;
	}
	if (Global_1B085[0x00000038 /*10*/].f_3)
	{
		return bVar0;
	}
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (iLocal_243)
		{
			unk_0xA37A90C62806D848(0x00000001);
			func_224("RAMP_HELP_CRIM", 0xFFFFFFFF);
			iLocal_243 = 0x00000000;
		}
		bVar0 = 0x00000001;
	}
	else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (iLocal_242)
		{
			unk_0xA37A90C62806D848(0x00000001);
			func_224("RAMP_HELP_FOOT", 0xFFFFFFFF);
			iLocal_242 = 0x00000000;
		}
		bVar0 = 0x00000001;
	}
	else if ((func_223(0x00000000) || unk_0x991B1F0980C62628()) || func_222())
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			if (func_223(0x00000000))
			{
			}
			else if (unk_0x991B1F0980C62628())
			{
			}
			else if (func_222())
			{
			}
			unk_0xA37A90C62806D848(0x00000001);
			iLocal_244 = 0x00000000;
		}
		bVar0 = 0x00000001;
	}
	else if (func_355(0x0000006C))
	{
		if (!iLocal_244)
		{
			if (!func_2("RAMP_HELP_TRIG"))
			{
				unk_0xA37A90C62806D848(0x00000001);
				func_221("RAMP_HELP_TRIG");
			}
			iLocal_244 = 0x00000001;
		}
		bVar0 = !unk_0x06F8112AA79C53D9(0x00000002, 0x00000033);
	}
	return bVar0;
}

void func_221(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

int func_222()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

bool func_223(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

void func_224(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

bool func_225(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

int func_226(float fParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!func_225(unk_0x16F2683693E537C9()))
	{
		return 0xFFFFFFFF;
	}
	vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		vVar1 = { Global_79AA[(iLocal_239 + iVar0) /*23*/][0x00000000 /*3*/] };
		if (unk_0x0EB28750412C3A5A(vVar2, vVar1, 0x00000001) <= fParam0 && unk_0x755FF954DAE327E1((vVar2.z - vVar1.z)) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_227()
{
	func_59();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_228(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1[5];
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1[0x00000000] = 0x00000034;
	iVar1[0x00000001] = 0x00000035;
	iVar1[0x00000002] = 0x00000036;
	iVar1[0x00000003] = 0x00000037;
	iVar1[0x00000004] = 0x00000038;
	if (!func_352(&iVar1, iParam0, vParam1, 5f))
	{
		func_371(" Didn't know which RC To Launch");
		func_356(iParam0, 0x00000001);
	}
	if (!func_209(*iParam0))
	{
		func_371(" RC Can't Launch");
		func_356(iParam0, 0x00000001);
	}
	if (func_351(*iParam0))
	{
		while (0x00000001)
		{
			SYSTEM::WAIT(0x00000000);
			if (func_350(*iParam0))
			{
				func_356(iParam0, 0x00000001);
			}
		}
	}
	func_274(iParam0);
	unk_0x536F1BE96C726C4B(vParam1, iParam0->f_F, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (*iParam0 == 0x00000034 || *iParam0 == 0x00000035)
		{
			if (func_128(iParam0->f_1C[0x00000000]))
			{
				if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, unk_0x68F4C0EC296D3901(iParam0->f_1C[0x00000000], 0x00000001), 5.1f))
				{
					if (*iParam0 == 0x00000034)
					{
						iVar2 = 0x00000000;
						while (iVar2 < iParam0->f_29)
						{
							if (unk_0xC844350D5D58C99A(iParam0->f_29[iVar2]))
							{
								if ((func_128(iParam0->f_1C[0x00000000]) && unk_0x50B5F6F3C29E9380(iParam0->f_29[iVar2], iParam0->f_1C[0x00000000])) || (func_128(iParam0->f_1C[0x00000001]) && unk_0x50B5F6F3C29E9380(iParam0->f_29[iVar2], iParam0->f_1C[0x00000001])))
								{
									unk_0xF690C84DADBB3551(&(iParam0->f_29[iVar2]));
								}
							}
							iVar2++;
						}
					}
					unk_0x64B1AD81046CB800(iParam0->f_1C[0x00000000], 0x00000064, 0x000001F4, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
					unk_0xCEE7E5D42799D65A(iParam0->f_1C[0x00000000], 0x000003E8, 0x00000001, 0x00000000);
					if (func_128(iParam0->f_1C[0x00000001]))
					{
						unk_0x64B1AD81046CB800(iParam0->f_1C[0x00000001], 0x00000064, 0x000001F4, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
						unk_0xCEE7E5D42799D65A(iParam0->f_1C[0x00000001], 0x000003E8, 0x00000001, 0x00000000);
					}
					func_371("Sitting Rampage attacked with explosives, cleaning up");
					func_356(iParam0, 0x00000001);
				}
			}
			if (func_128(iParam0->f_1C[0x00000001]))
			{
				if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, unk_0x68F4C0EC296D3901(iParam0->f_1C[0x00000001], 0x00000001), 5.1f))
				{
					if (*iParam0 == 0x00000034)
					{
						iVar2 = 0x00000000;
						while (iVar2 < iParam0->f_29)
						{
							if (unk_0xC844350D5D58C99A(iParam0->f_29[iVar2]))
							{
								if ((func_128(iParam0->f_1C[0x00000000]) && unk_0x50B5F6F3C29E9380(iParam0->f_29[iVar2], iParam0->f_1C[0x00000000])) || (func_128(iParam0->f_1C[0x00000001]) && unk_0x50B5F6F3C29E9380(iParam0->f_29[iVar2], iParam0->f_1C[0x00000001])))
								{
									unk_0xF690C84DADBB3551(&(iParam0->f_29[iVar2]));
								}
							}
							iVar2++;
						}
					}
					unk_0x64B1AD81046CB800(iParam0->f_1C[0x00000001], 0x00000064, 0x000001F4, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
					unk_0xCEE7E5D42799D65A(iParam0->f_1C[0x00000001], 0x000003E8, 0x00000001, 0x00000000);
					if (func_128(iParam0->f_1C[0x00000000]))
					{
						unk_0x64B1AD81046CB800(iParam0->f_1C[0x00000000], 0x00000064, 0x000001F4, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
						unk_0xCEE7E5D42799D65A(iParam0->f_1C[0x00000000], 0x000003E8, 0x00000001, 0x00000000);
					}
					func_371("Sitting Rampage attacked with explosives, cleaning up");
					func_356(iParam0, 0x00000001);
				}
			}
		}
		if (func_273(iParam0))
		{
			func_272(iParam0);
			func_371(" RC combat happening in area, tell peds to flee");
			func_153(iParam0);
			func_356(iParam0, 0x00000001);
		}
		if (!func_148(iParam0, 0x00000001))
		{
			func_371(" RC Is Not Fine And In Range");
			func_356(iParam0, 0x00000001);
		}
		if (func_271(0x00000034))
		{
			if (unk_0x8ED9A0095B69A728("Rampage1"))
			{
				func_371(" Turning Off Scenario Group For Rampage 1");
				unk_0x2723524E448F4BDD("Rampage1", 0x00000000);
			}
		}
		func_270(*iParam0);
		func_262(&iLocal_240, &(iParam0->f_9), vParam1);
		if (iVar0 == 0x00000000 && iLocal_240 != 0xFFFFFFFF)
		{
			func_261(iParam0, &uLocal_245);
			if (unk_0x62A1F4500E8F07E0())
			{
				func_371(" Cutscene Loaded");
				iVar0 = 0x00000001;
			}
		}
		vLocal_249 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		if ((!(*iParam0 == 0x00000034 && vLocal_249.z > 34f) && !(*iParam0 == 0x00000035 && vLocal_249.z > 71f)) && !(*iParam0 == 0x00000036 && vLocal_249.z > 30f))
		{
			if (func_249(iParam0, 0x00000000))
			{
				if (*iParam0 == 0x00000035)
				{
					if (func_246(iParam0))
					{
						func_371(" Trigger Conditions Met");
						func_191();
						if (!func_5(iParam0))
						{
							func_371(" RC Can't Launch");
							func_356(iParam0, 0x00000001);
						}
						func_371(" RC Launcher Waiting To Terminate");
						if (func_3(iParam0))
						{
							func_371(" Ready To Terminate");
							func_356(iParam0, 0x00000000);
						}
					}
				}
				else if (func_245(iParam0))
				{
					func_371(" Trigger Conditions Met");
					func_191();
					if (!func_5(iParam0))
					{
						func_371(" RC Can't Launch");
						func_356(iParam0, 0x00000001);
					}
					func_371(" RC Launcher Waiting To Terminate");
					if (func_3(iParam0))
					{
						func_371(" Ready To Terminate");
						func_356(iParam0, 0x00000000);
					}
				}
			}
			else
			{
				if (*iParam0 == 0x00000035)
				{
					func_229(iParam0);
				}
				if (unk_0x8C74DE122769E1BF())
				{
					iLocal_69 = 0xFFFFFFFF;
					unk_0x29D5132FBDCF2B1E(0x00000000);
					unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
				}
			}
		}
	}
}

void func_229(int iParam0)
{
	char* sVar0;
	
	sVar0 = "misstrvram_2";
	switch (iLocal_70)
	{
		case 0x00000000:
			unk_0x3F423BF5B8125A50(sVar0);
			if (unk_0xB4AE0788C1587752(sVar0))
			{
				iLocal_70++;
			}
			break;
		
		case 0x00000001:
			if (func_128(iParam0->f_1C[0x00000000]))
			{
				if (func_244(iParam0->f_1C[0x00000000], unk_0x16F2683693E537C9(), 0x00000001) < 30f && unk_0x0A059E0DB9253280(iParam0->f_1C[0x00000000]))
				{
					func_243(&uLocal_72, 0x00000000, iParam0->f_1C[0x00000000], "RAMPAGEHIPSTER", 0x00000000, 0x00000001);
					iLocal_70++;
				}
			}
			break;
		
		case 0x00000002:
			iLocal_71[0x00000000] = unk_0xE9744DB7B8CA6965(vLocal_66, vLocal_67, 0x00000002);
			if (func_128(iParam0->f_1C[0x00000000]))
			{
				func_230(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 0x00000007, 0x00000000, 0x00000000);
				unk_0x915804B434753CBD(iParam0->f_1C[0x00000000], iLocal_71[0x00000000], sVar0, "hipster_post_post_irony", 8f, -8f, 0x00000201, 0x00000000, 0x447A0000, 0x00000000);
			}
			unk_0xC90224D9E95E5E3A(iLocal_71[0x00000000], 0x00000000);
			unk_0xEFC3DF9D33E248D8(iLocal_71[0x00000000], 0x00000001);
			iLocal_70++;
			break;
		
		case 0x00000003:
			if (unk_0x69DF961355195C3C(iLocal_71[0x00000000]))
			{
				if (unk_0xA45992A6CE82FB43(iLocal_71[0x00000000]) >= 0.95f)
				{
					iLocal_70++;
				}
			}
			break;
		
		case 0x00000004:
			iLocal_71[0x00000001] = unk_0xE9744DB7B8CA6965(vLocal_66, vLocal_67, 0x00000002);
			if (func_128(iParam0->f_1C[0x00000000]))
			{
				func_230(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 0x00000007, 0x00000000, 0x00000000);
				unk_0x915804B434753CBD(iParam0->f_1C[0x00000000], iLocal_71[0x00000001], sVar0, "hipster_self_hating_hipster", 8f, -8f, 0x00000201, 0x00000000, 0x447A0000, 0x00000000);
			}
			unk_0xC90224D9E95E5E3A(iLocal_71[0x00000001], 0x00000000);
			unk_0xEFC3DF9D33E248D8(iLocal_71[0x00000001], 0x00000001);
			iLocal_70++;
			break;
		
		case 0x00000005:
			if (unk_0x69DF961355195C3C(iLocal_71[0x00000001]))
			{
				if (unk_0xA45992A6CE82FB43(iLocal_71[0x00000001]) >= 0.95f)
				{
					iLocal_70++;
				}
			}
			break;
		
		case 0x00000006:
			iLocal_71[0x00000002] = unk_0xE9744DB7B8CA6965(vLocal_66, vLocal_67, 0x00000002);
			if (func_128(iParam0->f_1C[0x00000000]))
			{
				unk_0x915804B434753CBD(iParam0->f_1C[0x00000000], iLocal_71[0x00000002], sVar0, "hipster_idle", 8f, -8f, 0x00000201, 0x00000000, 0x447A0000, 0x00000000);
			}
			unk_0xC90224D9E95E5E3A(iLocal_71[0x00000002], 0x00000001);
			unk_0xEFC3DF9D33E248D8(iLocal_71[0x00000002], 0x00000000);
			iLocal_70++;
			break;
		
		case 0x00000007:
			break;
	}
}

bool func_230(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_242(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
	if (iParam4 > 0x00000007)
	{
		if (iParam4 < 0x0000000C)
		{
			iParam4 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000001;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	StringCopy(&Global_5531, sParam3, 24);
	Global_280001 = 0x00000000;
	return func_231(sParam2, iParam4, 0x00000000);
}

int func_231(char* sParam0, int iParam1, bool bParam2)
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
					func_146();
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
		if (func_241(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_240();
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
				func_239();
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
				if (func_238())
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
			if (func_142())
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
			func_237();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_236();
		func_232();
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
		func_146();
	}
	return 0x00000000;
}

void func_232()
{
	if (!func_233())
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

int func_233()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_90())
	{
		return 0x00000000;
	}
	if (func_234(unk_0xD803B885F5E47A62()))
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

bool func_234(int iParam0)
{
	return func_235(iParam0, 0x00000014);
}

bool func_235(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

void func_236()
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

void func_237()
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

int func_238()
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

void func_239()
{
	if (func_60(0x0000000E))
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
		Global_4C1E = func_227();
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

void func_240()
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

bool func_241(int iParam0, int iParam1)
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

void func_242(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_243(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

float func_244(int iParam0, int iParam1, bool bParam2)
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

int func_245(int iParam0)
{
	func_191();
	if (iLocal_69 < 0x00000000)
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iParam0->f_1C[0x00000001], 0x00000001)) < 25f)
		{
			return 0x00000001;
		}
		switch (*iParam0)
		{
			case 0x00000034:
				unk_0xC0B0B9E466C0ED17(iParam0->f_1C[0x00000000], 0.1f, 0f, 0.9f, 0x00000001, 0xFFFFFFFF, 0x000009C4, 0x000007D0, 0x00000000);
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam0->f_1C[0x00000000], 0xFFFFFFFF, 0x00000000, 0x00000002);
				unk_0x4F4B34F617B087DF(0x00000001);
				unk_0xDA9C58A3CC25952B(-5f);
				unk_0x4BF9B75F44D4B6CE(0.1f);
				unk_0x910A71FBA7D16B6B(0f);
				unk_0x908430F113C0DC6D(0.3f);
				unk_0xF0B0E93CF50F0322(40f);
				break;
			
			case 0x00000036:
				unk_0xC0B0B9E466C0ED17(iParam0->f_1C[0x00000000], 0f, -0.1f, 0.9f, 0x00000001, 0xFFFFFFFF, 0x000009C4, 0x000007D0, 0x00000000);
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam0->f_1C[0x00000000], 0xFFFFFFFF, 0x00000000, 0x00000002);
				unk_0x4F4B34F617B087DF(0x00000001);
				unk_0xDA9C58A3CC25952B(-10f);
				unk_0x4BF9B75F44D4B6CE(-0.9f);
				unk_0x910A71FBA7D16B6B(0f);
				unk_0x908430F113C0DC6D(0.35f);
				unk_0xF0B0E93CF50F0322(40f);
				break;
			
			case 0x00000037:
				unk_0xC0B0B9E466C0ED17(iParam0->f_1C[0x00000001], 0f, 0f, 0.9f, 0x00000001, 0xFFFFFFFF, 0x000009C4, 0x000007D0, 0x00000000);
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam0->f_1C[0x00000001], 0xFFFFFFFF, 0x00000000, 0x00000002);
				unk_0x4F4B34F617B087DF(0x00000001);
				unk_0xDA9C58A3CC25952B(-8f);
				unk_0x4BF9B75F44D4B6CE(-0.9f);
				unk_0x910A71FBA7D16B6B(0.1f);
				unk_0x908430F113C0DC6D(0.35f);
				unk_0xF0B0E93CF50F0322(40f);
				break;
			
			case 0x00000038:
				unk_0xC0B0B9E466C0ED17(iParam0->f_1C[0x00000001], 0f, 0f, 0f, 0x00000001, 0xFFFFFFFF, 0x000009C4, 0x000007D0, 0x00000000);
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam0->f_1C[0x00000001], 0xFFFFFFFF, 0x00000000, 0x00000002);
				unk_0x4F4B34F617B087DF(0x00000001);
				unk_0xDA9C58A3CC25952B(-5f);
				unk_0x4BF9B75F44D4B6CE(0.15f);
				unk_0x910A71FBA7D16B6B(0f);
				unk_0x908430F113C0DC6D(0.3f);
				unk_0xF0B0E93CF50F0322(40f);
				break;
		}
		iLocal_69 = unk_0x1C0640BA9A7327B3() + 2500;
	}
	else if (unk_0x1C0640BA9A7327B3() > iLocal_69)
	{
		iLocal_69 = 0xFFFFFFFF;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_246(var uParam0)
{
	func_191();
	switch (iLocal_237)
	{
		case 0x00000000:
			if (func_128(uParam0->f_1C[0x00000000]))
			{
				func_247();
				iLocal_237++;
			}
			break;
		
		case 0x00000001:
			if (func_128(uParam0->f_1C[0x00000000]))
			{
				if (!func_147())
				{
					if (func_230(&uLocal_72, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 0x00000008, 0x00000000, 0x00000000))
					{
						iLocal_238 = unk_0xE9744DB7B8CA6965(vLocal_66, vLocal_67, 0x00000002);
						unk_0x915804B434753CBD(uParam0->f_1C[0x00000000], iLocal_238, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 0x00000201, 0x00000000, 0x447A0000, 0x00000000);
						unk_0xC0B0B9E466C0ED17(uParam0->f_1C[0x00000000], 0f, 0f, 0.5f, 0x00000001, 0xFFFFFFFF, 0x000009C4, 0x000007D0, 0x00000000);
						unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), uParam0->f_1C[0x00000000], 0xFFFFFFFF, 0x00000000, 0x00000002);
						unk_0x4F4B34F617B087DF(0x00000001);
						unk_0xDA9C58A3CC25952B(0f);
						unk_0x4BF9B75F44D4B6CE(0.1f);
						unk_0x910A71FBA7D16B6B(0f);
						unk_0x908430F113C0DC6D(0.35f);
						unk_0xF0B0E93CF50F0322(40f);
						iLocal_237++;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (func_128(uParam0->f_1C[0x00000000]))
			{
				if (!func_147())
				{
					iLocal_237++;
				}
			}
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_247()
{
	Global_4CD7 = 0x00000000;
	func_248();
}

void func_248()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_249(var uParam0, int iParam1)
{
	switch (uParam0->f_10)
	{
		case 0x00000000:
			if (*uParam0 == 0x0000000C)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (func_128(uParam0->f_1C[0x00000000]))
					{
						if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(uParam0->f_1C[0x00000000], 0x00000001), 0x00000001) < 3f)
						{
							if (func_254(0x00000002))
							{
								if (func_253(uParam0->f_1B))
								{
									func_252(uParam0->f_1B, *uParam0);
									func_371("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 0x00000001;
								}
							}
						}
					}
					else
					{
						return 0x00000000;
					}
				}
				else if (func_128(uParam0->f_1C[0x00000000]))
				{
					if (func_251(uParam0))
					{
						if (func_254(0x00000002))
						{
							if (func_253(uParam0->f_1B))
							{
								func_252(uParam0->f_1B, *uParam0);
								return 0x00000001;
							}
						}
					}
				}
				else
				{
					return 0x00000000;
				}
			}
			else if (*uParam0 == 0x00000015)
			{
				if ((((!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (func_128(uParam0->f_1C[0x00000000]))
					{
						if (func_251(uParam0))
						{
							if (func_254(0x00000002))
							{
								if (func_253(uParam0->f_1B))
								{
									func_252(uParam0->f_1B, *uParam0);
									return 0x00000001;
								}
							}
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
			else if (*uParam0 == 0x00000016)
			{
				if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (func_128(uParam0->f_1C[0x00000000]))
					{
						if (func_251(uParam0))
						{
							if (func_254(0x00000002))
							{
								if (func_253(uParam0->f_1B))
								{
									func_252(uParam0->f_1B, *uParam0);
									return 0x00000001;
								}
							}
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
			else if (func_128(uParam0->f_1C[0x00000000]))
			{
				if (func_251(uParam0))
				{
					if (func_254(0x00000002))
					{
						if (func_253(uParam0->f_1B))
						{
							func_252(uParam0->f_1B, *uParam0);
							return 0x00000001;
						}
					}
				}
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			if (func_128(uParam0->f_23[0x00000000]))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), uParam0->f_23[0x00000000], 0x00000000))
				{
					if (func_254(0x00000003))
					{
						func_252(uParam0->f_1B, *uParam0);
						return 0x00000001;
					}
				}
				else if (iParam1 == 0x00000001)
				{
					func_250();
				}
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000001:
			if (unk_0xC844350D5D58C99A(uParam0->f_23[0x00000000]))
			{
				if (!unk_0x437347B10A200C4B(uParam0->f_23[0x00000000], 0x00000000))
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(uParam0->f_23[0x00000000], 0x00000001), 0x00000001) < uParam0->f_F)
					{
						if (func_254(0x00000002))
						{
							if (func_253(uParam0->f_1B))
							{
								func_252(uParam0->f_1B, *uParam0);
								return 0x00000001;
							}
						}
					}
				}
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), uParam0->f_11[0x00000000 /*3*/], 0x00000001) < uParam0->f_F)
			{
				if (func_254(0x00000002))
				{
					if (func_253(uParam0->f_1B))
					{
						func_252(uParam0->f_1B, *uParam0);
						return 0x00000001;
					}
				}
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000004:
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), uParam0->f_11[0x00000000 /*3*/], uParam0->f_11[0x00000001 /*3*/], 0x00000000, 0x00000001, 0x00000000))
			{
				if (func_254(0x00000002))
				{
					if (func_253(uParam0->f_1B))
					{
						func_252(uParam0->f_1B, *uParam0);
						return 0x00000001;
					}
				}
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000005:
			if (*uParam0 == 0x00000006)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (func_128(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
					{
						if (unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), joaat("towtruck")) || unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), joaat("towtruck2")))
						{
							if (unk_0x6D18156F72BE0773(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), uParam0->f_23[0x00000000]))
							{
								if (func_254(0x00000003))
								{
									return 0x00000001;
								}
							}
						}
						else if ((unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), joaat("cargobob")) || unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), joaat("cargobob2"))) || unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), joaat("cargobob3")))
						{
							if (unk_0x2709213DA9C091FF(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0xED55EA714F84A53E(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), uParam0->f_23[0x00000000]))
							{
								if (func_254(0x00000003))
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
			else if (*uParam0 == 0x0000000A)
			{
				if (unk_0x504A57ECC0B1E81C(unk_0x16F2683693E537C9()) >= 2f)
				{
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (func_254(0x00000002))
						{
							if (func_253(uParam0->f_1B))
							{
								func_252(uParam0->f_1B, *uParam0);
								func_371("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 0x00000001;
							}
						}
					}
				}
			}
			else if (*uParam0 == 0x0000002E)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0x00000000, 0x00000001, 0x00000000))
				{
					return 0x00000000;
				}
			}
			else if (*uParam0 == 0x0000001F)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (func_254(0x00000002))
					{
						if (func_253(0x00000001))
						{
							func_252(0x00000001, *uParam0);
							func_371("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 0x00000001;
						}
					}
				}
			}
			else if (*uParam0 == 0x00000027)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (func_254(0x00000002))
							{
								if (func_253(uParam0->f_1B))
								{
									func_252(uParam0->f_1B, *uParam0);
									func_371("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 0x00000001;
								}
							}
						}
					}
				}
			}
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), uParam0->f_11[0x00000000 /*3*/], uParam0->f_11[0x00000001 /*3*/], uParam0->f_18, 0x00000000, 0x00000001, 0x00000000))
			{
				if (*uParam0 == 0x0000002D)
				{
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0x00000000, 0x00000001, 0x00000000))
					{
						return 0x00000000;
					}
				}
				if (func_254(0x00000002))
				{
					if (func_253(uParam0->f_1B))
					{
						func_252(uParam0->f_1B, *uParam0);
						return 0x00000001;
					}
				}
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000006:
			break;
	}
	return 0x00000000;
}

void func_250()
{
	func_30(&(Global_18F3B.f_B4A), &Global_18F3B, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
}

int func_251(var uParam0)
{
	float fVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && uParam0->f_1B)
	{
		if (*uParam0 == 0x0000001B || *uParam0 == 0x0000001E)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(uParam0->f_1C[0x00000000], 0x00000001), 0x00000001) < (uParam0->f_F + fVar0))
		{
			return 0x00000001;
		}
	}
	else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(uParam0->f_1C[0x00000000], 0x00000001), 0x00000001) < uParam0->f_F)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_252(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000001)
	{
		if (!func_131(iParam1))
		{
			return;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			func_371("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				func_371("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0x56FDC9ADE35F7DB0(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000, 0x00000001, 0x00000000);
			}
			func_191();
		}
	}
}

int func_253(bool bParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
		{
			return 0x00000001;
		}
		else if (bParam0)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar0 = unk_0x728870EB733D12A1();
				if (func_158(iVar0))
				{
					if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
					{
						if ((!unk_0xE608C809F9416F00(iVar0) && !unk_0xE934758D273C899A(iVar0)) && unk_0x9C66D99E63E8E24C(iVar0) < 1f)
						{
							return 0x00000001;
						}
					}
					else if (!unk_0xE934758D273C899A(iVar0))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_227();
				if (!func_39(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_222()) || Global_1B05D) || Global_7832) || func_260()) || func_241(0x00000008, 0xFFFFFFFF)) || func_96()) || func_259()) || func_258()) || func_257()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_222()) || Global_7832) || func_260()) || func_241(0x00000008, 0xFFFFFFFF)) || func_258()) || func_96()) || func_259()) || func_257()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_222()) || Global_1B05D) || Global_7832) || func_260()) || func_241(0x00000008, 0xFFFFFFFF)) || func_258()) || func_96()) || func_259()) || func_257()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_222()) || Global_1B05D) || Global_7832) || func_260()) || func_241(0x00000008, 0xFFFFFFFF)) || func_96()) || func_259()) || func_257()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_222() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_241(0x00000008, 0xFFFFFFFF)) || func_257()) || func_256()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_241(0x00000008, 0xFFFFFFFF) || func_96()) || func_259()) || func_256()) || func_255())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_222()) || Global_7832) || func_260()) || func_241(0x00000008, 0xFFFFFFFF)) || func_259()) || func_258()) || func_257()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_222()) || func_259()) || Global_1B05D) || Global_7832) || func_260()) || Global_A664) || func_241(0x00000008, 0xFFFFFFFF)) || func_258()) || func_256()) || func_257()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_222()) || Global_1B05D) || Global_7832) || func_260()) || func_241(0x00000008, 0xFFFFFFFF)) || func_258()) || func_256()) || func_96()) || func_259()) || func_257())
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

var func_255()
{
	return Global_181DF.f_1;
}

int func_256()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_257()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_258()
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

bool func_259()
{
	return Global_181EC.f_15A > 0x00000000;
}

var func_260()
{
	return Global_14086D;
}

void func_261(var uParam0, var uParam1)
{
	if (unk_0x75EECC9B0572F772())
	{
		if (func_128(unk_0x16F2683693E537C9()))
		{
			unk_0xA0A8D79ACBBD1CB8("Trevor", unk_0x16F2683693E537C9(), unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()));
		}
		switch (*uParam0)
		{
			case 0x00000034:
				if (func_128(uParam0->f_1C[0x00000000]))
				{
					(*uParam1)[0x00000000] = "TriggerHappy_WhiteTrash";
					unk_0xA0A8D79ACBBD1CB8((*uParam1)[0x00000000], uParam0->f_1C[0x00000000], 0x00000000);
				}
				if (func_128(uParam0->f_1C[0x00000001]))
				{
					(*uParam1)[0x00000001] = "Nervous_WhiteTrash";
					unk_0xA0A8D79ACBBD1CB8((*uParam1)[0x00000001], uParam0->f_1C[0x00000001], 0x00000000);
				}
				break;
			
			case 0x00000035:
				if (func_128(uParam0->f_1C[0x00000000]))
				{
					(*uParam1)[0x00000000] = "Rampage_Hipster";
					unk_0xA0A8D79ACBBD1CB8((*uParam1)[0x00000000], uParam0->f_1C[0x00000000], 0x00000000);
				}
				break;
			
			case 0x00000036:
				if (func_128(uParam0->f_1C[0x00000000]))
				{
					(*uParam1)[0x00000000] = "Armed_Mexican_Goon";
					unk_0xA0A8D79ACBBD1CB8((*uParam1)[0x00000000], uParam0->f_1C[0x00000000], 0x00000000);
					unk_0x7656EB524FEAB9B3((*uParam1)[0x00000000], 0x00000008, 0x00000001, 0x00000000, 0x00000000);
				}
				if (func_128(uParam0->f_1C[0x00000001]))
				{
					(*uParam1)[0x00000001] = "Mexican_Goon";
					unk_0xA0A8D79ACBBD1CB8((*uParam1)[0x00000001], uParam0->f_1C[0x00000001], 0x00000000);
				}
				break;
			
			case 0x00000037:
				if (func_128(uParam0->f_1C[0x00000000]))
				{
					(*uParam1)[0x00000000] = "Thug";
					unk_0xA0A8D79ACBBD1CB8((*uParam1)[0x00000000], uParam0->f_1C[0x00000000], 0x00000000);
					unk_0x7656EB524FEAB9B3((*uParam1)[0x00000000], 0x0000000A, 0x00000000, 0x00000001, 0x00000000);
				}
				if (func_128(uParam0->f_1C[0x00000001]))
				{
					(*uParam1)[0x00000001] = "Armed_Thug";
					unk_0xA0A8D79ACBBD1CB8((*uParam1)[0x00000001], uParam0->f_1C[0x00000001], 0x00000000);
					unk_0x7656EB524FEAB9B3((*uParam1)[0x00000001], 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000038:
				if (func_128(uParam0->f_1C[0x00000000]))
				{
					(*uParam1)[0x00000000] = "Army_Guy_Right";
					unk_0xA0A8D79ACBBD1CB8((*uParam1)[0x00000000], uParam0->f_1C[0x00000000], 0x00000000);
				}
				if (func_128(uParam0->f_1C[0x00000001]))
				{
					(*uParam1)[0x00000001] = "Army_Guy_Left";
					unk_0xA0A8D79ACBBD1CB8((*uParam1)[0x00000001], uParam0->f_1C[0x00000001], 0x00000000);
				}
				break;
			}
	}
}

void func_262(int iParam0, char* sParam1, vector3 vParam2)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEA6BC48857E0AC4C(sParam1))
		{
			if (Global_A1D7 == 0x00000011)
			{
				if (*iParam0 != 0xFFFFFFFF)
				{
					func_268(iParam0);
				}
			}
			else if (func_267())
			{
				if (*iParam0 != 0xFFFFFFFF)
				{
					func_268(iParam0);
				}
			}
			else if (*iParam0 == 0xFFFFFFFF)
			{
				if (func_266(unk_0x16F2683693E537C9(), vParam2, 0x00000001) <= 100f)
				{
					func_265(iParam0, 0x00000001);
				}
			}
			else
			{
				switch (func_264(*iParam0))
				{
					case 0x00000001:
						if (unk_0x7F8A39872A07D2CE(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0x8E590B419F1E5182(sParam1, 0x0000000E, 0x00000008);
						}
						else
						{
							unk_0xAE1670DD12E839C3(sParam1, 0x00000008);
						}
						unk_0x084B7FAC53E6CA0A(0x00000002);
						func_263(*iParam0, 0x00000001);
						break;
					
					case 0x00000002:
						unk_0x55BE34EDDEA0AC9E(0x00000000);
						unk_0x5C8D148FC238F38A();
						unk_0x084B7FAC53E6CA0A(0x00000000);
						func_263(*iParam0, 0x00000000);
						break;
				}
				if (func_266(unk_0x16F2683693E537C9(), vParam2, 0x00000001) > 120f)
				{
					func_268(iParam0);
				}
			}
		}
	}
}

void func_263(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_12B4A == iParam0)
		{
			Global_12B4B = iParam0;
		}
	}
	else if (Global_12B4B == iParam0)
	{
		Global_12B4B = 0xFFFFFFFF;
	}
}

int func_264(int iParam0)
{
	if (Global_12B4A == iParam0)
	{
		if (Global_12B4B == 0xFFFFFFFF)
		{
			if (Global_12B49 < unk_0xF4CCC8CB6DE7F1AE())
			{
				return 0x00000001;
			}
		}
	}
	else if (Global_12B4B == iParam0)
	{
		return 0x00000002;
	}
	return 0x00000000;
}

void func_265(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_12B47 < 0x00000005)
	{
		Global_12B3C[Global_12B47 /*2*/] = 0x00000000;
		Global_12B3C[Global_12B47 /*2*/].f_1 = iParam1;
		bVar0 = 0x00000000;
		while (!bVar0)
		{
			bVar0 = 0x00000001;
			iVar1 = 0x00000000;
			while (iVar1 < Global_12B47)
			{
				if (Global_12B3C[iVar1 /*2*/] == Global_12B3C[Global_12B47 /*2*/])
				{
					Global_12B3C[Global_12B47 /*2*/]++;
					bVar0 = 0x00000000;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_12B3C[Global_12B47 /*2*/];
		Global_12B47++;
		Global_12B48 = 0x00000001;
	}
	else
	{
		*iParam0 = 0xFFFFFFFF;
	}
}

float func_266(int iParam0, vector3 vParam1, bool bParam2)
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

bool func_267()
{
	return Global_17735;
}

void func_268(int iParam0)
{
	unk_0x55BE34EDDEA0AC9E(0x00000000);
	unk_0x5C8D148FC238F38A();
	func_269(iParam0);
}

void func_269(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_12B4B == *iParam0)
	{
		func_263(*iParam0, 0x00000000);
	}
	if (Global_12B4A == *iParam0)
	{
		Global_12B4A = 0xFFFFFFFF;
	}
	bVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (!bVar0 && iVar1 < Global_12B47)
	{
		if (Global_12B3C[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = 0x00000001;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_12B47 - 0x00000002))
	{
		Global_12B3C[iVar2 /*2*/] = Global_12B3C[iVar2 + 1 /*2*/];
		Global_12B3C[iVar2 /*2*/].f_1 = Global_12B3C[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_12B3C[(Global_12B47 - 0x00000001) /*2*/] = 0xFFFFFFFF;
	Global_12B3C[(Global_12B47 - 0x00000001) /*2*/].f_1 = 0x00000003;
	Global_12B47 = (Global_12B47 - 0x00000001);
	Global_12B48 = 0x00000001;
	Global_12B49 = unk_0xF4CCC8CB6DE7F1AE();
	*iParam0 = 0xFFFFFFFF;
}

void func_270(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_186();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	Global_1B085[iParam0 /*10*/].f_1 = 0x00000001;
}

bool func_271(int iParam0)
{
	return Global_1B085[iParam0 /*10*/].f_1;
}

void func_272(var uParam0)
{
	if (*uParam0 == 0x00000034)
	{
		func_371(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (unk_0xC844350D5D58C99A(uParam0->f_29[0x00000003]))
		{
			unk_0x1E9649458B15960F(uParam0->f_29[0x00000003], 0x00000001);
			unk_0xEEEE2E5FA6F78DF0(&(uParam0->f_29[0x00000003]));
			uParam0->f_29[0x00000003] = 0x00000000;
		}
		if (unk_0xC844350D5D58C99A(uParam0->f_29[0x00000004]))
		{
			unk_0x1E9649458B15960F(uParam0->f_29[0x00000004], 0x00000001);
			unk_0xEEEE2E5FA6F78DF0(&(uParam0->f_29[0x00000004]));
			uParam0->f_29[0x00000004] = 0x00000000;
		}
	}
}

int func_273(var uParam0)
{
	if ((*uParam0 == 0x00000036 || *uParam0 == 0x00000037) || *uParam0 == 0x00000038)
	{
		if (unk_0x7D563EECE9515353(unk_0x16F2683693E537C9()) > 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_274(var uParam0)
{
	switch (*uParam0)
	{
		case 0x00000034:
			func_349(uParam0);
			iLocal_250 = func_348();
			break;
		
		case 0x00000035:
			func_342(uParam0);
			iLocal_250 = func_340();
			break;
		
		case 0x00000036:
			func_339(uParam0);
			break;
		
		case 0x00000037:
			func_338(uParam0);
			iLocal_250 = func_337();
			break;
		
		case 0x00000038:
			func_275(uParam0);
			break;
		
		default:
			break;
	}
	if (iLocal_250 != 0x00000000)
	{
	}
	uParam0->f_10 = 0x00000000;
	if (*uParam0 == 0x00000035)
	{
		uParam0->f_F = 15f;
	}
	else
	{
		uParam0->f_F = 12f;
	}
	uParam0->f_19 = 0x00000001;
}

void func_275(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "misstvrram_5";
	iVar1 = joaat("s_m_y_marine_03");
	iVar2 = joaat("crusader");
	unk_0x523BCC9DC80CD82F(iVar1);
	unk_0x523BCC9DC80CD82F(iVar2);
	unk_0x3F423BF5B8125A50(sVar0);
	unk_0x6D0C93EE4FBA9307(joaat("weapon_grenadelauncher"), 0x0000001F, 0x00000000);
	while ((!unk_0xB87F6CF6E5628C67(iVar1) || !unk_0xB87F6CF6E5628C67(iVar2)) || !unk_0xB4AE0788C1587752(sVar0))
	{
		SYSTEM::WAIT(0x00000000);
	}
	while (!func_335(&(uParam0->f_1C[0x00000000]), iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_334(&(uParam0->f_1C[0x00000000]));
	unk_0x5F2AA9E2843E9403(uParam0->f_1C[0x00000000], "RAMP:PED 0");
	unk_0xC6EB89C59F2AF6B8(uParam0->f_1C[0x00000000], sVar0, "marines_idle_a", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000002, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000006, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000000], 0x00000000);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000000], 0x00000001);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000000], 0x00000002);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000000], 0x00000003);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000000], 0x00000004);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000000], 0x00000005);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000000], 0x00000006);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000000], 0x00000007);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000000], 0x00000008);
	while (!func_335(&(uParam0->f_1C[0x00000001]), iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_334(&(uParam0->f_1C[0x00000001]));
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000000, 0x00000001, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000002, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000006, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000001], 0x00000000);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000001], 0x00000001);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000001], 0x00000002);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000001], 0x00000003);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000001], 0x00000004);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000001], 0x00000005);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000001], 0x00000006);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000001], 0x00000007);
	unk_0x3BFC3B9ADD2EE7B7(uParam0->f_1C[0x00000001], 0x00000008);
	unk_0x5F2AA9E2843E9403(uParam0->f_1C[0x00000001], "RAMP:PED 1");
	unk_0xC6EB89C59F2AF6B8(uParam0->f_1C[0x00000001], sVar0, "marines_idle_b", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	while (!func_333(&(uParam0->f_23[0x00000000]), iVar2, -1298.16f, 2504.153f, 21.062f, 165.48f))
	{
		SYSTEM::WAIT(0x00000000);
	}
	unk_0xB9FD7450C0DAB575(uParam0->f_23[0x00000000], 0x40A00000);
	func_332(&(uParam0->f_23[0x00000000]));
	unk_0xD3421E391490133B(uParam0->f_23[0x00000000], 0x00000001, 0x00000000);
	unk_0xD3421E391490133B(uParam0->f_23[0x00000000], 0x00000001, 0x00000001);
	unk_0x1E9649458B15960F(uParam0->f_23[0x00000000], 0x00000001);
	if (!func_276(&(uParam0->f_29[0x00000000]), joaat("weapon_grenadelauncher"), -1297.84f, 2505.91f, 19.34f, func_331(-0.5f)))
	{
	}
	else
	{
		unk_0x20641932E5104B25(uParam0->f_29[0x00000000], 0x00000000, 0x00000000);
		unk_0xA47B46945FF6DE74(uParam0->f_29[0x00000000], -1297.84f, 2505.91f, 19.34f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(uParam0->f_29[0x00000000], func_331(-0.5f));
		unk_0x1E9649458B15960F(uParam0->f_29[0x00000000], 0x00000001);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_1B = 0x00000000;
	unk_0x71199B01895C6202(iVar1);
	unk_0x71199B01895C6202(iVar2);
}

int func_276(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0xF690C84DADBB3551(iParam0);
		*iParam0 = 0x00000000;
	}
	iVar0 = unk_0x6B7EC7B5B6B57364(iParam1);
	unk_0x523BCC9DC80CD82F(iVar0);
	iVar2 = unk_0x1C0640BA9A7327B3() + 10000;
	while (unk_0x1C0640BA9A7327B3() < iVar2)
	{
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			*iParam0 = unk_0x5ACD4E66C7BF0F49(iParam1, 0xFFFFFFFF, vParam2, 0x00000001, 0x3F800000, 0x00000000, 0x00000000, 0x00000001);
			unk_0x71199B01895C6202(iVar0);
			if (func_330(&uVar1, iParam1, joaat("gun_root")))
			{
				if (unk_0xD59C425D3CEABECE(*iParam0, func_277(&uVar1, iParam1, joaat("gun_root"), 0x00000000)))
				{
					unk_0x78FB27E299143AC1(*iParam0, func_277(&uVar1, iParam1, joaat("gun_root"), 0x00000000));
				}
				else if (unk_0xD59C425D3CEABECE(*iParam0, func_277(&uVar1, iParam1, joaat("gun_root"), 0x00000001)))
				{
					unk_0x78FB27E299143AC1(*iParam0, func_277(&uVar1, iParam1, joaat("gun_root"), 0x00000001));
				}
			}
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				unk_0xA47B46945FF6DE74(*iParam0, vParam2, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(*iParam0, fParam3);
				return 0x00000001;
			}
		}
		SYSTEM::WAIT(0x00000000);
	}
	unk_0x71199B01895C6202(iVar0);
	return 0x00000000;
}

int func_277(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	
	func_329(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	iVar2 = 0x00000000;
	while (func_278(&Var0, iParam1, iVar1, 0x00000000))
	{
		if (Var0.f_4 == iParam2)
		{
			if (iParam3 == iVar2)
			{
				return Var0;
			}
			iVar2++;
		}
		iVar1++;
	}
	return 0x00000000;
}

bool func_278(var uParam0, int iParam1, int iParam2, bool bParam3)
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
	var uVar15;
	struct<4> Var16;
	
	func_329(uParam0, 0x00000000, 0x3AF5BAC2, 0x00000000, 0x00000000);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_pistol"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000003:
						func_329(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_329(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_smg"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_329(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
						break;
					
					case 0x00000003:
						func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_329(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_329(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_329(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_assaultrifle"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000008:
							func_329(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
						break;
					
					case 0x00000003:
						func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_329(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000007:
						func_329(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_carbinerifle"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000008:
							func_329(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
						break;
					
					case 0x00000003:
						func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_329(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000007:
						func_329(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_combatmg"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000003:
						func_329(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_329(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000003:
					func_329(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_heavysniper"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 0x00000002, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 0x00000002, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000001:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000001:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case 0x394F415C:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0x8610343F, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0xD12ACA6F, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0xEF2C78C1, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0xFB70D853, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0xA7DD1E58, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0x63E0A098, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_329(uParam0, 0x00000000, joaat("WAPGrip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_329(uParam0, 0x9D65907A, joaat("WAPGrip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0x00000000, joaat("WAPFlshLasr_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0x00000000, joaat("WAPScop_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_329(uParam0, 0x420FD713, joaat("WAPScop_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_329(uParam0, 0x049B2945, joaat("WAPScop_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000D:
					func_329(uParam0, 0xC66B6542, joaat("WAPScop_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0x00000000, joaat("WAPSupp_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000F:
					func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0xB99402D4, joaat("WAPSupp_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0xC867A07B, joaat("WAPSupp_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0xDE11CBCF, joaat("WAPSupp_2"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0xEC9068CC, joaat("WAPSupp_2"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0x02E7957A, joaat("WAPSupp_2"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0x347EF8AC, joaat("WAPSupp_2"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0x4DB62ABE, joaat("WAPSupp_2"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0x43A49D26, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000018:
					func_329(uParam0, 0x5646C26A, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000019:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000001A:
					func_329(uParam0, 0x911B24AF, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000001B:
					func_329(uParam0, 0x37E5444B, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001C:
					func_329(uParam0, 0x538B7B97, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001D:
					func_329(uParam0, 0x25789F72, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001E:
					func_329(uParam0, 0xC5495F2D, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001F:
					func_329(uParam0, 0xCF8B73B1, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000020:
					func_329(uParam0, 0xA9BB2811, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000021:
					func_329(uParam0, 0xFC674D54, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000022:
					func_329(uParam0, 0x7C7FCD9B, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000023:
					func_329(uParam0, 0xA5C38392, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000024:
					func_329(uParam0, 0xB9B15DB0, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0xFAD1F1C9:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0x4C7A391E, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0x5DD5DBD5, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0x1757F566, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0x3D25C2A7, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0x255D5D57, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0x44032F11, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_329(uParam0, 0x00000000, joaat("WAPGrip_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_329(uParam0, 0x9D65907A, joaat("WAPGrip_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_329(uParam0, 0x420FD713, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_329(uParam0, 0x049B2945, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000D:
					func_329(uParam0, 0xC66B6542, joaat("WAPScop"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0x00000000, joaat("WAPSupp_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000F:
					func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0xB99402D4, joaat("WAPSupp_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0xC867A07B, joaat("WAPSupp_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0xDE11CBCF, joaat("WAPSupp_2"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0xEC9068CC, joaat("WAPSupp_2"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0x02E7957A, joaat("WAPSupp_2"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0x347EF8AC, joaat("WAPSupp_2"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0x4DB62ABE, joaat("WAPSupp_2"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0x833637FF, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000018:
					func_329(uParam0, 0x8B3C480B, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000019:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000001A:
					func_329(uParam0, 0x4BDD6F16, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000001B:
					func_329(uParam0, 0x406A7908, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001C:
					func_329(uParam0, 0x2F3856A4, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001D:
					func_329(uParam0, 0xE50C424D, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001E:
					func_329(uParam0, 0xD37D1F2F, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001F:
					func_329(uParam0, 0x86268483, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000020:
					func_329(uParam0, 0xF420E076, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000021:
					func_329(uParam0, 0xAAE14DF8, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000022:
					func_329(uParam0, 0x9893A95D, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000023:
					func_329(uParam0, 0x6B13CD3E, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000024:
					func_329(uParam0, 0xDA55CD3F, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0xDBBD7280:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0x492B257C, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0x17DF42E9, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0xF6649745, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0xC326BDBA, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0x29882423, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0x57EF1CC8, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_329(uParam0, 0x00000000, joaat("WAPGrip_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_329(uParam0, 0x9D65907A, joaat("WAPGrip_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_329(uParam0, 0x420FD713, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0x3F3C8181, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000B:
					func_329(uParam0, 0xC66B6542, joaat("WAPScop"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000C:
					func_329(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000D:
					func_329(uParam0, 0xB99402D4, joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0xC867A07B, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000F:
					func_329(uParam0, 0xDE11CBCF, joaat("WAPSupp"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0xEC9068CC, joaat("WAPSupp"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0x02E7957A, joaat("WAPSupp"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0x347EF8AC, joaat("WAPSupp"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0x4DB62ABE, joaat("WAPSupp"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0xC34EF234, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0xB5E2575B, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0x4A768CB5, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000018:
					func_329(uParam0, 0xCCE06BBD, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000019:
					func_329(uParam0, 0xBE94CF26, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001A:
					func_329(uParam0, 0x7609BE11, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001B:
					func_329(uParam0, 0x48AF6351, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001C:
					func_329(uParam0, 0x9186750A, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x0000001D:
					func_329(uParam0, 0x84555AA8, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x0000001E:
					func_329(uParam0, 0x1B4C088B, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x0000001F:
					func_329(uParam0, 0x0E046DFC, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000020:
					func_329(uParam0, 0x028B536E, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000021:
					func_329(uParam0, 0xD703C94D, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x0A914799:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0xFA1E1A28, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0x2CD8FF9D, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0x0EC0F617, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0xF835D6D4, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0x3BE948F6, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0x89EBDAA7, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_329(uParam0, 0x82C10383, joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000007:
					func_329(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 0x00000002, 0x00000001);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0xB68010B0, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000009:
					func_329(uParam0, 0x2E43DA41, joaat("WAPScop"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_329(uParam0, 0xAC42DF71, joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_329(uParam0, 0x5F7DCE4D, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000D:
					func_329(uParam0, 0x6927E1A1, joaat("WAPSupp"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0x909630B7, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x0000000F:
					func_329(uParam0, 0x108AB09E, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0xF8337D02, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0xC5BEDD65, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0xE9712475, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0x13AA78E7, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0x26591E50, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0x302731EC, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0xAC722A78, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000018:
					func_329(uParam0, 0xBEA4CEDD, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000019:
					func_329(uParam0, 0xCD776C82, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x0000001A:
					func_329(uParam0, 0xABC5ACC7, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x0000001B:
					func_329(uParam0, 0x6C32D2EB, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0xBFE256D4:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0x94F42D62, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0x5ED6C128, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0x25CAAEAF, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0x2BBD7A3A, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0x85FEA109, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0x4F37DF2A, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_329(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_329(uParam0, 0x8ED4BB70, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_329(uParam0, 0x43FD595B, joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_329(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_329(uParam0, 0x21E34793, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000D:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0x5C6C749C, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000F:
					func_329(uParam0, 0x15F7A390, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0x968E24DB, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0x017BFA99, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0xF2685C72, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0xDD2231E6, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0xBB43EE76, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0x4D901310, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0x5F31B653, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0x697E19A0, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000018:
					func_329(uParam0, 0x930CB951, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x78A97CD0:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0x4C24806E, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0xB9835B2E, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0x7FEA36EC, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0xD99222E5, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0x3A1BD6FA, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0x0B5A715F, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_329(uParam0, 0x00000000, joaat("WAPFlshLasr_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_329(uParam0, 0x9FDB5652, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0xE502AB6B, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000B:
					func_329(uParam0, 0x3DECC7DA, joaat("WAPScop"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000C:
					func_329(uParam0, 0x00000000, joaat("WAPSupp_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000D:
					func_329(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 0x00000001, 0x00000000);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0xB99402D4, joaat("WAPSupp_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000F:
					func_329(uParam0, 0xC867A07B, joaat("WAPSupp_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0xDE11CBCF, joaat("WAPSupp_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0xEC9068CC, joaat("WAPSupp_2"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0x02E7957A, joaat("WAPSupp_2"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0x347EF8AC, joaat("WAPSupp_2"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0x4DB62ABE, joaat("WAPSupp_2"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0xD9103EE1, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0xA564D78B, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000018:
					func_329(uParam0, 0xC4979067, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000019:
					func_329(uParam0, 0x3815A945, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001A:
					func_329(uParam0, 0x4B4B4FB0, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001B:
					func_329(uParam0, 0xEC729200, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001C:
					func_329(uParam0, 0x48F64B22, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001D:
					func_329(uParam0, 0x35992468, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x0000001E:
					func_329(uParam0, 0x24B782A5, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x0000001F:
					func_329(uParam0, 0xA2E67F01, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000020:
					func_329(uParam0, 0x2218FD68, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000021:
					func_329(uParam0, 0x45C5C3C5, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000022:
					func_329(uParam0, 0x399D558F, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_pumpshotgun"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_specialcarbine"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000008:
							func_329(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_329(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000008:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
						break;
					
					case 0x00000003:
						func_329(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_329(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000007:
						func_329(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_snspistol"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_marksmanrifle"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_329(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000003:
						func_329(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_329(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_revolver"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_revolver"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 0x00000002, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 0x00000002, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (func_328(iLocal_65))
			{
				if (!func_319(0x60BD749C, joaat("weapon_bullpuprifle"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_329(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_329(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_329(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_329(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_329(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_329(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_329(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_329(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_329(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_329(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
						break;
					
					case 0x00000003:
						func_329(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_329(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_329(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case 0x555AF99A:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0xCD940141, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0x9F8A1BF5, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0xE9582927, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0x4E65B425, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0x3BE4465D, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0x00000000, joaat("WAPFlshLasr_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000006:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000007:
					func_329(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0x420FD713, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000009:
					func_329(uParam0, 0x049B2945, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0x3F3C8181, joaat("WAPScop"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000B:
					func_329(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000C:
					func_329(uParam0, 0xAC42DF71, joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000D:
					func_329(uParam0, 0x5F7DCE4D, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000F:
					func_329(uParam0, 0xE3BD9E44, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0x17148F9B, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0x24D22B16, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0xF2BEC6F0, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0x0085627D, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0xDC2919C5, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0xE184247B, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0xD8EF9356, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0xEF29BFCA, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000018:
					func_329(uParam0, 0x67AEB165, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000019:
					func_329(uParam0, 0x46411A1D, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x969C3D67:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0x16C69281, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0xDE1FA12C, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0x8765C68A, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0xDE011286, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0x51351635, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0x503DEA90, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_329(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0x00000000, joaat("WAPScop_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_329(uParam0, 0x420FD713, joaat("WAPScop_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0x049B2945, joaat("WAPScop_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000B:
					func_329(uParam0, 0xC66B6542, joaat("WAPScop_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000C:
					func_329(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000D:
					func_329(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0xB99402D4, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000F:
					func_329(uParam0, 0xC867A07B, joaat("WAPSupp"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0xDE11CBCF, joaat("WAPSupp"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0xEC9068CC, joaat("WAPSupp"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0x02E7957A, joaat("WAPSupp"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0x347EF8AC, joaat("WAPSupp"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0x4DB62ABE, joaat("WAPSupp"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0x00000000, joaat("WAPGrip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0x9D65907A, joaat("WAPGrip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0xE73653A9, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000018:
					func_329(uParam0, 0xF97F783B, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000019:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000001A:
					func_329(uParam0, 0xD40BB53B, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000001B:
					func_329(uParam0, 0x431B238B, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001C:
					func_329(uParam0, 0x34CF86F4, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001D:
					func_329(uParam0, 0xB4C306DD, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001E:
					func_329(uParam0, 0xEE677A25, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001F:
					func_329(uParam0, 0xDF90DC78, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000020:
					func_329(uParam0, 0x0A4C31EE, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000021:
					func_329(uParam0, 0x89CFB0F7, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000022:
					func_329(uParam0, 0x7B82145C, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000023:
					func_329(uParam0, 0x899CAF75, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000024:
					func_329(uParam0, 0x5218C819, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x88374054:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0x01466CE6, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0xCE8C0772, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0x902DA26E, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0xE6AD5F79, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0x8D107402, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0xC111EB26, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_329(uParam0, 0x00000000, joaat("WAPFlshLasr_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_329(uParam0, 0x4A4965F3, joaat("WAPFlshLasr_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_329(uParam0, 0x47DE9258, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0x00000000, joaat("WAPSupp_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_329(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_329(uParam0, 0xAA8283BF, joaat("WAPSupp_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000D:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0x0F7BEEDD, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000F:
					func_329(uParam0, 0x8A612EF6, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0x76FA8829, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0xA93C6CAC, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0x9C905354, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0x4DFA3621, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0x42E91FFF, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0x54A8437D, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0x068C2746, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0x2366E467, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000018:
					func_329(uParam0, 0x441882E6, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x6A6C02E0:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0x94E12DCE, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0xE6CFD1AA, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0xD77A22D2, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0x6DD7A86E, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0xF46FD079, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0xE14A9ED3, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_329(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0x420FD713, joaat("WAPScop_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000009:
					func_329(uParam0, 0xC66B6542, joaat("WAPScop_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0x5B1C713C, joaat("WAPScop_2"), 0x00000004, 0x00000001);
					break;
				
				case 0x0000000B:
					func_329(uParam0, 0x00000000, joaat("WAPSupp_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000C:
					func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000D:
					func_329(uParam0, 0xB99402D4, joaat("WAPSupp_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0xC867A07B, joaat("WAPSupp_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000F:
					func_329(uParam0, 0xDE11CBCF, joaat("WAPSupp_2"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0xEC9068CC, joaat("WAPSupp_2"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0x02E7957A, joaat("WAPSupp_2"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0x347EF8AC, joaat("WAPSupp_2"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0x4DB62ABE, joaat("WAPSupp_2"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0x00000000, joaat("WAPGrip_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0x9D65907A, joaat("WAPGrip_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0x381B5D89, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0x68373DDC, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000018:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000019:
					func_329(uParam0, 0x9094FBA0, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000001A:
					func_329(uParam0, 0x7320F4B2, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001B:
					func_329(uParam0, 0x60CF500F, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001C:
					func_329(uParam0, 0xFE668B3F, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001D:
					func_329(uParam0, 0xF3757559, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001E:
					func_329(uParam0, 0x193B40E8, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x0000001F:
					func_329(uParam0, 0x107D2F6C, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000020:
					func_329(uParam0, 0xC4E91841, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000021:
					func_329(uParam0, 0x9BB1C5D3, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000022:
					func_329(uParam0, 0x3B61040B, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000023:
					func_329(uParam0, 0xB7A316DA, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0xCB96392F:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0xBA23D8BE, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0xC6D8E476, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0x00EFBF25, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0x10F42E8F, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0x0DC8BA3F, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000006:
					func_329(uParam0, 0x420FD713, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000007:
					func_329(uParam0, 0x049B2945, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_329(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_329(uParam0, 0x27077CCB, joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000D:
					func_329(uParam0, 0xC03FED9F, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0x00B5DE24, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000F:
					func_329(uParam0, 0x0A7FF1B8, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0xF2E24289, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0x11317F27, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0x17C30C42, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0x257927AE, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0x37304B1C, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0x48DAEE71, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0x20ED9B5B, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0xD951E867, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x84D6FAFD:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0x018929DA, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0xEFB00628, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0x822060A9, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_329(uParam0, 0xA99CF95A, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_329(uParam0, 0xFAA7F5ED, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_329(uParam0, 0x43621710, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_329(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_329(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_329(uParam0, 0x00000000, joaat("WAPScop_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_329(uParam0, 0x420FD713, joaat("WAPScop_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_329(uParam0, 0xC7ADD105, joaat("WAPScop_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000B:
					func_329(uParam0, 0x3F3C8181, joaat("WAPScop_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000C:
					func_329(uParam0, 0x659AC11B, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x0000000D:
					func_329(uParam0, 0x3BF26DC7, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x0000000E:
					func_329(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000F:
					func_329(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000010:
					func_329(uParam0, 0xB99402D4, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000011:
					func_329(uParam0, 0xC867A07B, joaat("WAPSupp"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000012:
					func_329(uParam0, 0xDE11CBCF, joaat("WAPSupp"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000013:
					func_329(uParam0, 0xEC9068CC, joaat("WAPSupp"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000014:
					func_329(uParam0, 0x02E7957A, joaat("WAPSupp"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000015:
					func_329(uParam0, 0x347EF8AC, joaat("WAPSupp"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000016:
					func_329(uParam0, 0x4DB62ABE, joaat("WAPSupp"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000017:
					func_329(uParam0, 0x00000000, joaat("WAPGrip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000018:
					func_329(uParam0, 0x9D65907A, joaat("WAPGrip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000019:
					func_329(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000001A:
					func_329(uParam0, 0xAE4055B7, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000001B:
					func_329(uParam0, 0xB905ED6B, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001C:
					func_329(uParam0, 0xA6C448E8, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001D:
					func_329(uParam0, 0x9486246C, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001E:
					func_329(uParam0, 0x8A390FD2, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001F:
					func_329(uParam0, 0x02337FC5, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000020:
					func_329(uParam0, 0xEFFFDB5E, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000021:
					func_329(uParam0, 0xDDBDB6DA, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000022:
					func_329(uParam0, 0xCB631225, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000023:
					func_329(uParam0, 0xA87D541E, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000024:
					func_329(uParam0, 0xC5E9AE52, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0xAF3696A1:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0xD7DBF707, joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case 0x2B5EF5EC:
			switch (iParam2)
			{
				case 0x00000000:
					func_329(uParam0, 0x54D41361, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_329(uParam0, 0x81786CA9, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_329(uParam0, 0x9307D6FA, joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		default:
			iVar12 = func_66(iParam1, &uVar15);
			if (iVar12 != 0xFFFFFFFF)
			{
				iVar13 = 0x00000000;
				while (iVar13 < unk_0xA942498EEAA3EEAD(iVar12))
				{
					if (unk_0x8B27EE8DAA2A39B3(iVar12, iVar13, &Var16))
					{
						if (!func_63(Var16.f_3))
						{
							if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
							{
								iVar1++;
							}
							else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
							{
								iVar2++;
							}
							else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
							{
								iVar3++;
							}
							else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
							{
								iVar4++;
							}
							else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
							{
								iVar5++;
							}
							else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
							{
								iVar6++;
							}
							else if (Var16 == 0x67386F9B)
							{
								iVar7++;
							}
							else if (Var16 == joaat("gun_root"))
							{
								iVar8++;
							}
							else if (Var16 == 0xFE1E3932)
							{
								iVar9++;
							}
							else if (Var16 == 0xB1CB4B19)
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
								{
									iVar0 = iVar1;
								}
								else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
								{
									iVar0 = iVar2;
								}
								else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
								{
									iVar0 = iVar3;
								}
								else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
								{
									iVar0 = iVar4;
								}
								else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
								{
									iVar0 = iVar5;
								}
								else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
								{
									iVar0 = iVar6;
								}
								else if (Var16 == 0x67386F9B)
								{
									iVar0 = iVar7;
								}
								else if (Var16 == joaat("gun_root"))
								{
									iVar0 = iVar8;
								}
								else if (Var16 == 0xFE1E3932)
								{
									iVar0 = iVar9;
								}
								else if (Var16 == 0xB1CB4B19)
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_329(uParam0, Var16.f_3, Var16, iVar0, Var16.f_1);
							}
							iVar14++;
						}
					}
					iVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_279(iParam1, *uParam0);
	}
	return uParam0->f_4 != 0x3AF5BAC2;
}

int func_279(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var5;
	int iVar6;
	int iVar7;
	var uVar8;
	struct<6> Var9;
	char* sVar10;
	struct<4> Var11;
	float fVar12;
	
	iVar0 = 0x00000000;
	fVar1 = 2.5f;
	if (!unk_0x8CD06866876216F2())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 0x0000009B;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000000BD;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 0x000002D9;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 0x000048A8;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 0x00000088;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 0x0000009F;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000000BD;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x000002DF;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = 0x000038A4;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 0x00000091;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 0x000000A5;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000000B9;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x000002DA;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 0x00003DB8;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 0x00000089;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000000BE;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00000225;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00000307;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 0x00003AFC;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 0x00000077;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 0x00000086;
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000000D2;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 0x00000225;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x0000032F;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 0x00004B64;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 0x00000081;
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x0000009F;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000000BD;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00000235;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x0000032A;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 0x00003840;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 0x00000063;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 0x00000069;
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00000084;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x00000096;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 0x000001C2;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x0000032F;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 0x000045EC;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 0x0000006E;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 0x0000007C;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x0000009F;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 0x000001C2;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x0000032C;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 0x00004074;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 0x00000087;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 0x00000091;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 0x000001C2;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = 0x00003CF0;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 0x00000077;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 0x0000007E;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00000081;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 0x0000022F;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = 0x000036B0;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000000BD;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 0x000003CF;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = 0x00004204;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 0x00000081;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 0x0000008B;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00000096;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000000E1;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x00000383;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 0x0000022F;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0x000003CF;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00000398;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 0x000032C8;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 0x0000023F;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0x000003E7;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00000080;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000000B9;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 0x0000020D;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 0x0000006E;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 0x000025E4;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000008E3;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00002A7B;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00003070;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = 0x000044C0;
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0x00000000;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00001004;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000008FC;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x000030A2;
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0x00000000;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 0x0000251C;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000007D0;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00002FDA;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 0x00004E20;
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0x00000000;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 0x00003584;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 0x00000E1C;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000003FC;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x00001388;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x000006E0;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 0x00004330;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 0x00000E60;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000002C6;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x000012C0;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 0x00002EE0;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = 0x00001324;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = 0x000015E0;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = 0x0000157C;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = 0x00001450;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = 0x000011F8;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = 0x0000125C;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = 0x000012C0;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = 0x000010CC;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = 0x00000FA0;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0x0000006C;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = 0x000026DE;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x00000A0F;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00002C56;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x000030D4;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x000010B3;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = 0x000040D8;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0x0000001D;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = 0x000023BE;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = 0x0000364C;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0x0000006C;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = 0x000026F7;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000009DD;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 0x00002D1E;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x000030D4;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = 0x00004650;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = 0x00000E60;
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x000012E8;
						break;
				}
				break;
			
			default:
				iVar2 = func_66(iParam0, &uVar4);
				if (iVar2 != 0xFFFFFFFF)
				{
					iVar3 = 0x00000000;
					while (iVar3 < unk_0xA942498EEAA3EEAD(iVar2))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar2, iVar3, &Var5))
						{
							if (!func_63(Var5.f_3))
							{
								if (Var5.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_314(iParam1))
									{
										Var5.f_5 = 0xFFFFFFFF;
									}
									if (Var5.f_5 == 0xFFFFFFFF)
									{
										iVar0 = 0xFFFFFFFF;
									}
									else
									{
										iVar0 = Var5.f_5;
									}
									if (iParam0 == joaat("weapon_hammer"))
									{
										if (func_318() && (func_317() || func_316()))
										{
											iVar0 = 0x00000000;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 0x000023D7;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B45));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x0000068B;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F1));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 0x00002F12;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F2));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_40001.f_294C;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113F));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50EE;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 0x00000088;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = Global_40001.f_507F;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B46));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x00000721;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F3));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_5080;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F4));
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113A));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 0x00000091;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 0x000024B8;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B48));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000007B7;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F5));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x00002FA8;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F6));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_40001.f_294B;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1134));
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 0x0000246D;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B49));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x0000076C;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F9));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00002A30;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FB));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00002F76;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FA));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_40001.f_294F;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113E));
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 0x00000077;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 0x00002503;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4A));
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = Global_40001.f_3EFF;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x00000802;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FC));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 0x00002A49;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FE));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x00002FDA;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FD));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_40001.f_294E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1143));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50EF;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 0x0000254E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4C));
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = Global_40001.f_3EFA;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00001068;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1106));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x0000084D;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1103));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00002A62;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1105));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x0000300C;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1104));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_40001.f_2948;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1135));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50F1;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 0x00000063;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 0x0000262F;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4D));
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = Global_40001.f_3EF9;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x000010FE;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110E));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x0000092E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110B));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 0x00002A94;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110D));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x000030A2;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110C));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_40001.f_294A;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1138));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50F2;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 0x0000006E;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 0x000026C5;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4F));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x00000979;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1110));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 0x00002AC6;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1112));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x000030D4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1111));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_40001.f_2949;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1133));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 0x00000087;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 0x0000267A;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B50));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 0x00002AAD;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1113));
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB5;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113D));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 0x00000077;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 0x00002710;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B51));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00001149;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1129));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 0x00002ADF;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_112A));
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB6;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1139));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50F0;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000006D6;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1117));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 0x0000303E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1118));
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB1;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1141));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_579D;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 0x00000081;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 0x00002599;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B53));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x000010B3;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111B));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x00000898;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111C));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x0000303E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111D));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 0x00003070;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111E));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0x000030D4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111F));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00002F12;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1120));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_40001.f_2951;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1144));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 0x00000063;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1121));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0x000030D4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1122));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50F3;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00001194;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_112B));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000009C4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1127));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 0x00002AF8;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1128));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 0x0000006E;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 0x000025E4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4B));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000008E3;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FF));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00002A7B;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1102));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00003070;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1100));
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB2;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1101));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_40001.f_19C9;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_40001.f_1C0C;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB3;
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_57A2;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_40001.f_1C11;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = Global_40001.f_3EFC;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_1C14;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_40001.f_1C10;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_1C0E;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_1C13;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB7;
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_579E;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_40001.f_1C12;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_40001.f_1C16;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_1C0F;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_40001.f_1C2A;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_40001.f_1C19;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_1C1C;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_1C17;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_40001.f_1C18;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_1C1A;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_40001.f_2EB8;
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_57A1;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_40001.f_1DF4;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_1DF5;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_40001.f_20C8;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						iVar0 = Global_40001.f_3F00;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_20C9;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_20CA;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_20CB;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_40001.f_20CE;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_20CF;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_20D1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_20D2;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_40001.f_20D3;
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_579F;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00001004;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_391E));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000008FC;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1119));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x000030A2;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111A));
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0x00000000;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 0x0000251C;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B47));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000007D0;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F7));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00002FDA;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F8));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_40001.f_294D;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1140));
						break;
				}
				if (func_318() && (func_317() || func_316()))
				{
					iVar0 = 0x00000000;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_40001.f_2950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1142));
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_40001.f_2A8D;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1147));
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_40001.f_2A8E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1148));
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_40001.f_2A8F;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1149));
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_40001.f_2A90;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114A));
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_40001.f_2A91;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114B));
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_40001.f_2A92;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114C));
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_40001.f_2A93;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114D));
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_40001.f_2A94;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114E));
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_40001.f_2A95;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114F));
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = Global_40001.f_2AA6;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1151));
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = Global_40001.f_3EFE;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_2AA7;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1152));
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						iVar0 = Global_40001.f_3201;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_40001.f_3202;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						iVar0 = Global_40001.f_323B;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_40001.f_3200;
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_57A0;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						iVar0 = Global_40001.f_38D8;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						iVar0 = Global_40001.f_3EFB;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						iVar0 = 0x00000000;
						break;
				}
				break;
			
			case 0xBD248B55:
				switch (iParam1)
				{
					case 0x84C8B2D3:
						iVar0 = 0x00000000;
						break;
					
					case 0x937ED0B7:
						iVar0 = Global_40001.f_488A;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						iVar0 = Global_40001.f_507B;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						iVar0 = Global_40001.f_3EFD;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_507C;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_40001.f_507E;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_507D;
						break;
				}
				break;
			
			case 0x394F415C:
				switch (iParam1)
				{
					case 0x8610343F:
						iVar0 = 0x00000000;
						break;
					
					case 0xD12ACA6F:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 0xA7DD1E58:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 0x63E0A098:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 0xFB70D853:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 0xEF2C78C1:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_50FA;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_50FB;
						break;
					
					case 0x3F3C8181:
						iVar0 = Global_40001.f_50FC;
						break;
					
					case 0xC66B6542:
						iVar0 = Global_40001.f_50FD;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_50FE;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_50FF;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_5100;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_5101;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_5102;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_5103;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_5104;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_5105;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_5106;
						break;
					
					case 0x43A49D26:
						iVar0 = 0x00000000;
						break;
					
					case 0x5646C26A:
						iVar0 = Global_40001.f_5107;
						break;
					
					case 0x911B24AF:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x37E5444B:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x538B7B97:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0x25789F72:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0xC5495F2D:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0xCF8B73B1:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xA9BB2811:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xFC674D54:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x7C7FCD9B:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0xA5C38392:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xB9B15DB0:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0xFAD1F1C9:
				switch (iParam1)
				{
					case 0x4C7A391E:
						iVar0 = 0x00000000;
						break;
					
					case 0x5DD5DBD5:
						iVar0 = Global_40001.f_5108;
						break;
					
					case 0x255D5D57:
						iVar0 = Global_40001.f_5109;
						break;
					
					case 0x44032F11:
						iVar0 = Global_40001.f_510A;
						break;
					
					case 0x3D25C2A7:
						iVar0 = Global_40001.f_510B;
						break;
					
					case 0x1757F566:
						iVar0 = Global_40001.f_510C;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_510D;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_510E;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_510F;
						break;
					
					case 0x3F3C8181:
						iVar0 = Global_40001.f_5110;
						break;
					
					case 0xC66B6542:
						iVar0 = Global_40001.f_5111;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_5112;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_5113;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_5114;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_5115;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_5116;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_5117;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_5118;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_5119;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_511A;
						break;
					
					case 0x833637FF:
						iVar0 = 0x00000000;
						break;
					
					case 0x8B3C480B:
						iVar0 = Global_40001.f_511B;
						break;
					
					case 0x4BDD6F16:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x406A7908:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x2F3856A4:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xE50C424D:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0xD37D1F2F:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x86268483:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xF420E076:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xAAE14DF8:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x9893A95D:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x6B13CD3E:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xDA55CD3F:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0xDBBD7280:
				switch (iParam1)
				{
					case 0x492B257C:
						iVar0 = 0x00000000;
						break;
					
					case 0x17DF42E9:
						iVar0 = Global_40001.f_511C;
						break;
					
					case 0x29882423:
						iVar0 = Global_40001.f_511D;
						break;
					
					case 0x57EF1CC8:
						iVar0 = Global_40001.f_511E;
						break;
					
					case 0xC326BDBA:
						iVar0 = Global_40001.f_511F;
						break;
					
					case 0xF6649745:
						iVar0 = Global_40001.f_5120;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_5121;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_5122;
						break;
					
					case 0x3F3C8181:
						iVar0 = Global_40001.f_5123;
						break;
					
					case 0xC66B6542:
						iVar0 = Global_40001.f_5124;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_5125;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_5126;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_5127;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_5128;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_5129;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_512A;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_512B;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_512C;
						break;
					
					case 0xC34EF234:
						iVar0 = 0x00000000;
						break;
					
					case 0xB5E2575B:
						iVar0 = Global_40001.f_512D;
						break;
					
					case 0x4A768CB5:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0xCCE06BBD:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0xBE94CF26:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0x7609BE11:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x48AF6351:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x9186750A:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x84555AA8:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0x1B4C088B:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x0E046DFC:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x028B536E:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xD703C94D:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x0A914799:
				switch (iParam1)
				{
					case 0xFA1E1A28:
						iVar0 = 0x00000000;
						break;
					
					case 0x2CD8FF9D:
						iVar0 = Global_40001.f_512E;
						break;
					
					case 0xF835D6D4:
						iVar0 = Global_40001.f_512F;
						break;
					
					case 0x3BE948F6:
						iVar0 = Global_40001.f_5131;
						break;
					
					case 0x0EC0F617:
						iVar0 = Global_40001.f_5132;
						break;
					
					case 0x89EBDAA7:
						iVar0 = Global_40001.f_5130;
						break;
					
					case 0x82C10383:
						iVar0 = Global_40001.f_5133;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0x00000000;
						break;
					
					case 0xB68010B0:
						iVar0 = Global_40001.f_5134;
						break;
					
					case 0x2E43DA41:
						iVar0 = Global_40001.f_5135;
						break;
					
					case 0xAC42DF71:
						iVar0 = Global_40001.f_5136;
						break;
					
					case 0x5F7DCE4D:
						iVar0 = Global_40001.f_5137;
						break;
					
					case 0x6927E1A1:
						iVar0 = Global_40001.f_5138;
						break;
					
					case 0x909630B7:
						iVar0 = 0x00000000;
						break;
					
					case 0x108AB09E:
						iVar0 = Global_40001.f_5139;
						break;
					
					case 0xF8337D02:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0xC5BEDD65:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0xE9712475:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0x13AA78E7:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x26591E50:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x302731EC:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xAC722A78:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xBEA4CEDD:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0xCD776C82:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0xABC5ACC7:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x6C32D2EB:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0xBFE256D4:
				switch (iParam1)
				{
					case 0x94F42D62:
						iVar0 = 0x00000000;
						break;
					
					case 0x5ED6C128:
						iVar0 = Global_40001.f_513A;
						break;
					
					case 0x85FEA109:
						iVar0 = Global_40001.f_513C;
						break;
					
					case 0x4F37DF2A:
						iVar0 = Global_40001.f_513B;
						break;
					
					case 0x2BBD7A3A:
						iVar0 = Global_40001.f_513D;
						break;
					
					case 0x25CAAEAF:
						iVar0 = Global_40001.f_513E;
						break;
					
					case 0x43FD595B:
						iVar0 = Global_40001.f_513F;
						break;
					
					case 0x8ED4BB70:
						iVar0 = Global_40001.f_5140;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_40001.f_5141;
						break;
					
					case 0x21E34793:
						iVar0 = Global_40001.f_5142;
						break;
					
					case 0x5C6C749C:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x15F7A390:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x968E24DB:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0x017BFA99:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0xF2685C72:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0xDD2231E6:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xBB43EE76:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0x4D901310:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x5F31B653:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x697E19A0:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x930CB951:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x78A97CD0:
				switch (iParam1)
				{
					case 0x4C24806E:
						iVar0 = 0x00000000;
						break;
					
					case 0xB9835B2E:
						iVar0 = Global_40001.f_5143;
						break;
					
					case 0x3A1BD6FA:
						iVar0 = Global_40001.f_5145;
						break;
					
					case 0x0B5A715F:
						iVar0 = Global_40001.f_5144;
						break;
					
					case 0xD99222E5:
						iVar0 = Global_40001.f_5146;
						break;
					
					case 0x7FEA36EC:
						iVar0 = Global_40001.f_5147;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_5148;
						break;
					
					case 0x9FDB5652:
						iVar0 = Global_40001.f_5149;
						break;
					
					case 0xE502AB6B:
						iVar0 = Global_40001.f_514A;
						break;
					
					case 0x3DECC7DA:
						iVar0 = Global_40001.f_514B;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_514C;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_514D;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_514E;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_514F;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_5150;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_5151;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_5152;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_5153;
						break;
					
					case 0xD9103EE1:
						iVar0 = 0x00000000;
						break;
					
					case 0xA564D78B:
						iVar0 = Global_40001.f_5154;
						break;
					
					case 0xC4979067:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x3815A945:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x4B4B4FB0:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xEC729200:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x48F64B22:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x35992468:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x24B782A5:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xA2E67F01:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x2218FD68:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x45C5C3C5:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x399D558F:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x555AF99A:
				switch (iParam1)
				{
					case 0xCD940141:
						iVar0 = 0x00000000;
						break;
					
					case 0x4E65B425:
						iVar0 = Global_40001.f_57BD;
						break;
					
					case 0x3BE4465D:
						iVar0 = Global_40001.f_57BE;
						break;
					
					case 0xE9582927:
						iVar0 = Global_40001.f_57BC;
						break;
					
					case 0x9F8A1BF5:
						iVar0 = Global_40001.f_57BB;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_57D8;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_57D9;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_57DA;
						break;
					
					case 0x3F3C8181:
						iVar0 = Global_40001.f_57DB;
						break;
					
					case 0xAC42DF71:
						iVar0 = Global_40001.f_57DC;
						break;
					
					case 0x5F7DCE4D:
						iVar0 = Global_40001.f_57DD;
						break;
					
					case 0xE3BD9E44:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x17148F9B:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x24D22B16:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xF2BEC6F0:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x0085627D:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0xDC2919C5:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xE184247B:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xD8EF9356:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0xEF29BFCA:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x67AEB165:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x46411A1D:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x969C3D67:
				switch (iParam1)
				{
					case 0x16C69281:
						iVar0 = 0x00000000;
						break;
					
					case 0xDE1FA12C:
						iVar0 = Global_40001.f_57BF;
						break;
					
					case 0x51351635:
						iVar0 = Global_40001.f_57C3;
						break;
					
					case 0x503DEA90:
						iVar0 = Global_40001.f_57C1;
						break;
					
					case 0xDE011286:
						iVar0 = Global_40001.f_57C2;
						break;
					
					case 0x8765C68A:
						iVar0 = Global_40001.f_57C0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_57DE;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_57DF;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_57E0;
						break;
					
					case 0xC66B6542:
						iVar0 = Global_40001.f_57E1;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_57E2;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_57E3;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_57E4;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_57E5;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_57E6;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_57E7;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_57E8;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_57E9;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_57EA;
						break;
					
					case 0xE73653A9:
						iVar0 = 0x00000000;
						break;
					
					case 0xF97F783B:
						iVar0 = Global_40001.f_57EB;
						break;
					
					case 0xD40BB53B:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x431B238B:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x34CF86F4:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xB4C306DD:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0xEE677A25:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0xDF90DC78:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x0A4C31EE:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0x89CFB0F7:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x7B82145C:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x899CAF75:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x5218C819:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x88374054:
				switch (iParam1)
				{
					case 0x01466CE6:
						iVar0 = 0x00000000;
						break;
					
					case 0xCE8C0772:
						iVar0 = Global_40001.f_5B4E;
						break;
					
					case 0xC111EB26:
						iVar0 = Global_40001.f_57D3;
						break;
					
					case 0x8D107402:
						iVar0 = Global_40001.f_57D5;
						break;
					
					case 0xE6AD5F79:
						iVar0 = Global_40001.f_57D4;
						break;
					
					case 0x902DA26E:
						iVar0 = Global_40001.f_57D2;
						break;
					
					case 0x4A4965F3:
						iVar0 = Global_40001.f_580B;
						break;
					
					case 0x47DE9258:
						iVar0 = Global_40001.f_580C;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_40001.f_580D;
						break;
					
					case 0xAA8283BF:
						iVar0 = Global_40001.f_580E;
						break;
					
					case 0x0F7BEEDD:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x8A612EF6:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x76FA8829:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xA93C6CAC:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x9C905354:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x4DFA3621:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x42E91FFF:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0x54A8437D:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x068C2746:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x2366E467:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x441882E6:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x6A6C02E0:
				switch (iParam1)
				{
					case 0x94E12DCE:
						iVar0 = 0x00000000;
						break;
					
					case 0xE6CFD1AA:
						iVar0 = Global_40001.f_57C4;
						break;
					
					case 0xF46FD079:
						iVar0 = Global_40001.f_57C8;
						break;
					
					case 0xE14A9ED3:
						iVar0 = Global_40001.f_57C6;
						break;
					
					case 0x6DD7A86E:
						iVar0 = Global_40001.f_57C7;
						break;
					
					case 0xD77A22D2:
						iVar0 = Global_40001.f_57C5;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_57EC;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_57ED;
						break;
					
					case 0xC66B6542:
						iVar0 = Global_40001.f_57EE;
						break;
					
					case 0x5B1C713C:
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_57EF;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_57F0;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_57F1;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_57F2;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_57F3;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_57F4;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_57F5;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_57F6;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_57F7;
						break;
					
					case 0x381B5D89:
						iVar0 = 0x00000000;
						break;
					
					case 0x68373DDC:
						iVar0 = Global_40001.f_57F8;
						break;
					
					case 0x9094FBA0:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x7320F4B2:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x60CF500F:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xFE668B3F:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0xF3757559:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x193B40E8:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x107D2F6C:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xC4E91841:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x9BB1C5D3:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x3B61040B:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xB7A316DA:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0xCB96392F:
				switch (iParam1)
				{
					case 0xBA23D8BE:
						iVar0 = 0x00000000;
						break;
					
					case 0xC6D8E476:
						iVar0 = Global_40001.f_57C9;
						break;
					
					case 0x0DC8BA3F:
						iVar0 = Global_40001.f_57CA;
						break;
					
					case 0x10F42E8F:
						iVar0 = Global_40001.f_57CC;
						break;
					
					case 0x00EFBF25:
						iVar0 = Global_40001.f_57CB;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_57F9;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_57FA;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_40001.f_57FB;
						break;
					
					case 0x27077CCB:
						iVar0 = Global_40001.f_57FC;
						break;
					
					case 0xC03FED9F:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x00B5DE24:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x0A7FF1B8:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xF2E24289:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x11317F27:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x17C30C42:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x257927AE:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0x37304B1C:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x48DAEE71:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x20ED9B5B:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xD951E867:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x84D6FAFD:
				switch (iParam1)
				{
					case 0x018929DA:
						iVar0 = 0x00000000;
						break;
					
					case 0xEFB00628:
						iVar0 = Global_40001.f_57CD;
						break;
					
					case 0xFAA7F5ED:
						iVar0 = Global_40001.f_57D1;
						break;
					
					case 0x43621710:
						iVar0 = Global_40001.f_57CF;
						break;
					
					case 0xA99CF95A:
						iVar0 = Global_40001.f_57D0;
						break;
					
					case 0x822060A9:
						iVar0 = Global_40001.f_57CE;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_57FD;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_57FE;
						break;
					
					case 0xC7ADD105:
						iVar0 = Global_40001.f_57FF;
						break;
					
					case 0x3F3C8181:
						iVar0 = Global_40001.f_5800;
						break;
					
					case 0x659AC11B:
						iVar0 = 0x00000000;
						break;
					
					case 0x3BF26DC7:
						iVar0 = Global_40001.f_580A;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_5801;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_5802;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_5803;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_5804;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_5805;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_5806;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_5807;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_5808;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_5809;
						break;
					
					case 0xAE4055B7:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0xB905ED6B:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0xA6C448E8:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0x9486246C:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x8A390FD2:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x02337FC5:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xEFFFDB5E:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xDDBDB6DA:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0xCB631225:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0xA87D541E:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xC5E9AE52:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0xAF3696A1:
				switch (iParam1)
				{
					case 0xD7DBF707:
						iVar0 = 0x00000000;
						break;
				}
				break;
			
			case 0x2B5EF5EC:
				switch (iParam1)
				{
					case 0x54D41361:
						iVar0 = 0x00000000;
						break;
					
					case 0x81786CA9:
						iVar0 = Global_40001.f_6D01;
						break;
					
					case 0x9307D6FA:
						iVar0 = Global_40001.f_6D02;
						break;
				}
				break;
			
			default:
				iVar6 = func_66(iParam0, &uVar8);
				if (iVar6 != 0xFFFFFFFF)
				{
					iVar7 = 0x00000000;
					while (iVar7 < unk_0xA942498EEAA3EEAD(iVar6))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar6, iVar7, &Var9))
						{
							if (!func_63(Var9.f_3))
							{
								if (Var9.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var9.f_5 == 0xFFFFFFFF)
									{
										iVar0 = 0xFFFFFFFF;
									}
									else
									{
										iVar0 = Var9.f_5;
									}
								}
							}
						}
						iVar7++;
					}
				}
				break;
			}
	}
	if (unk_0x8CD06866876216F2() && func_312())
	{
		StringCopy(&Var11, func_310(iParam1, iParam0), 16);
		func_306(&sVar10, Var11, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 0x00000003, 0x00000001, func_308(iParam0), func_307(iParam0), 0xFFFFFFFF, 0x00000000, 0x00000000);
		if (unk_0x437ABF4F514F6471(&sVar10))
		{
			iVar0 = unk_0xD7F319992681CCB6(unk_0x12AB0310C2281427(&sVar10), 0x63A336E1, 0x00000001);
		}
	}
	if (iVar0 > 0x00000000)
	{
		fVar12 = func_280(iParam0, &iVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return iVar0;
}

float func_280(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0x8CD06866876216F2() && func_312())
	{
		return 1f;
	}
	if (!unk_0x8CD06866876216F2())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_12B4E)
	{
		if (*iParam1 != 0x00000000)
		{
			iVar2 = func_303(iParam0);
			if (iVar2 == 0x00000003)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 0x00000002)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 0x00000001)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_64 == 0x00000001)
	{
		if (unk_0x8CD06866876216F2())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_40001.f_4D));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_7A) / 100f));
		}
	}
	if (iLocal_64 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_40001.f_4D));
			if (func_281())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_7A) / 100f));
				iLocal_64 = 0x00000001;
			}
			else
			{
				iLocal_64 = 0xFFFFFFFF;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

int func_281()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return 0x00000000;
	}
	if (func_300())
	{
		if (func_285())
		{
			iVar0 = func_283();
			iVar1 = func_282();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_40001.f_79) && iVar0 >= 0x00000008)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_282()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_152D91);
	iVar0 = (iVar0 + Global_152D94);
	return iVar0;
}

int func_283()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_152D92);
	iVar0 = (iVar0 + Global_152D93);
	iVar0 = (iVar0 + Global_152D91);
	iVar0 = (iVar0 + Global_152D94);
	iVar0 = (iVar0 + Global_152D96);
	iVar0 = (iVar0 + Global_152D95);
	iVar0 = (iVar0 + func_284(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_284(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_284(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_284(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_284(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_284(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_284(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_284(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_284(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_284(int iParam0)
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

int func_285()
{
	struct<7> Var0;
	struct<7> Var1;
	
	unk_0xA9A9632F6E019049(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_299(joaat("mpply_started_mp")) };
	if (func_286(Var1, Var0, 0x00000007))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_286(struct<7> Param0, struct<7> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_297(Param1);
	iVar1 = func_293(Param0, iParam2);
	if (iVar1 == 0xFFFFFFF1)
	{
		return 0x00000000;
	}
	if (func_287(iVar0, iVar1) == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_287(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_292(iParam1) || !func_292(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_102(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_291(iParam0);
	iVar1 = func_291(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_290(iParam0);
	iVar1 = func_290(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_289(iParam0);
	iVar1 = func_289(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_288(iParam0);
	iVar1 = func_288(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_288(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_289(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_290(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_291(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_292(int iParam0)
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
	iVar0 = func_288(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_289(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_290(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_102(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_104(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_291(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_101(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_293(struct<7> Param0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_296(Param0) == 0x00000000)
	{
		uVar0 = func_297(Param0);
		uVar1 = uVar0;
		func_294(&uVar1, 0x00000000, 0x00000000, 0x00000000, iParam1, 0x00000000, 0x00000000);
		if (iParam1 == 0x00000000)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_294(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_102(*uParam0);
	iVar1 = func_104(*uParam0);
	iVar2 = func_291(*uParam0);
	iVar3 = func_290(*uParam0);
	iVar4 = func_289(*uParam0);
	iVar5 = func_288(*uParam0);
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
	iVar6 = func_101(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_101(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_295(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_295(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_107(uParam0, iParam1);
	func_106(uParam0, iParam2);
	func_105(uParam0, iParam3);
	func_99(uParam0, iParam5);
	func_100(uParam0, iParam4);
	func_98(uParam0, iParam6);
}

int func_296(struct<7> Param0)
{
	if ((((((Param0 == 0x00000000 && Param0.f_1 == 0x00000000) && Param0.f_2 == 0x00000000) && Param0.f_3 == 0x00000000) && Param0.f_4 == 0x00000000) && Param0.f_5 == 0x00000000) && Param0.f_6 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_297(struct<6> Param0, var uParam1)
{
	var uVar0;
	
	if (Param0 > 0x00000000)
	{
		func_98(&uVar0, Param0);
	}
	if (Param0.f_1 > 0x00000000)
	{
		func_99(&uVar0, func_298(Param0.f_1));
	}
	if (Param0.f_2 > 0x00000000)
	{
		func_100(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0x00000000)
	{
		func_105(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0x00000000)
	{
		func_106(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0x00000000)
	{
		func_107(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_298(int iParam0)
{
	if (iParam0 < 0x00000001)
	{
		return 0x00000000;
	}
	if (iParam0 > 0x0000000C)
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000002;
			break;
		
		case 0x00000004:
			return 0x00000003;
			break;
		
		case 0x00000005:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000005;
			break;
		
		case 0x00000007:
			return 0x00000006;
			break;
		
		case 0x00000008:
			return 0x00000007;
			break;
		
		case 0x00000009:
			return 0x00000008;
			break;
		
		case 0x0000000A:
			return 0x00000009;
			break;
		
		case 0x0000000B:
			return 0x0000000A;
			break;
		
		case 0x0000000C:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

struct<7> func_299(int iParam0)
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var2;
	
	uVar0 = iParam0;
	if (unk_0x52555DE2F29B7339(uVar0, &Var2, 0x00000007, 0xFFFFFFFF))
	{
		return Var2;
	}
	return Var1;
}

int func_300()
{
	if (func_302() && func_301(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_301(int iParam0)
{
	return Global_140676[iParam0];
}

var func_302()
{
	return func_301(func_54() + 1);
}

int func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar4;
	
	iVar0 = func_227();
	if (iParam0 == 0x00000000 || !func_39(iVar0))
	{
		return 0xFFFFFFFF;
	}
	iVar1 = 0x00000007;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 0x00000001;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 0x00000001;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 0x00000003;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 0x00000003;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 0x00000003;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 0x00000002;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 0x00000002;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 0x00000002;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 0x00000004;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 0x00000004;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 0x00000005;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0x00000000;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0x00000000;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0x00000000;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 0x00000007)
	{
		switch (func_304(iVar1, iVar0))
		{
			case 0x00000001:
				return 0x00000003;
				break;
			
			case 0x00000002:
				return 0x00000002;
				break;
			
			case 0x00000003:
				return 0x00000001;
				break;
		}
	}
	else
	{
		iVar3[0x00000000] = func_304(0x00000001, iVar0);
		iVar3[0x00000001] = func_304(0x00000003, iVar0);
		iVar3[0x00000002] = func_304(0x00000002, iVar0);
		iVar3[0x00000003] = func_304(0x00000004, iVar0);
		iVar3[0x00000004] = func_304(0x00000005, iVar0);
		iVar3[0x00000005] = func_304(0x00000000, iVar0);
		bVar4 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000006)
		{
			if (iVar3[iVar2] < 0x00000003)
			{
				bVar4 = 0x00000001;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 0x00000001;
		}
		bVar4 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000006)
		{
			if (iVar3[iVar2] < 0x00000002)
			{
				bVar4 = 0x00000001;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 0x00000002;
		}
		bVar4 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000006)
		{
			if (iVar3[iVar2] < 0x00000001)
			{
				bVar4 = 0x00000001;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 0x00000003;
		}
	}
	return 0xFFFFFFFF;
}

int func_304(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0x00000000)
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000001;
		iVar2 = 0x00000002;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000001)
	{
		iVar0 = 0x00000003;
		iVar1 = 0x00000004;
		iVar2 = 0x00000005;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000002)
	{
		iVar0 = 0x00000009;
		iVar1 = 0x0000000A;
		iVar2 = 0x0000000B;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000003)
	{
		iVar0 = 0x00000006;
		iVar1 = 0x00000007;
		iVar2 = 0x00000008;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000004)
	{
		iVar0 = 0x0000000C;
		iVar1 = 0x0000000D;
		iVar2 = 0x0000000E;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000005)
	{
		iVar0 = 0x0000000F;
		iVar1 = 0x00000010;
		iVar2 = 0x00000011;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000006)
	{
		iVar0 = 0x00000012;
		iVar1 = 0x00000013;
		iVar2 = 0x00000014;
		iVar3 = 0x00000015;
	}
	else
	{
		return 0x00000000;
	}
	iVar4 = func_305(iVar0, iParam1);
	if (func_305(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_305(iVar1, iParam1);
	}
	if (func_305(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_305(iVar2, iParam1);
	}
	if (iVar3 != 0xFFFFFFFF)
	{
		if (func_305(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_305(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_305(int iParam0, int iParam1)
{
	return Global_1B416.f_4AC6[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

void func_306(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	switch (unk_0x12AB0310C2281427(&cParam1))
	{
		case 0x03DB7A89:
		case 0x87D34DD3:
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case 0xE74AC9C9:
		case 0xB550A881:
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 0x140AFE8F:
		case 0xBD4A6D50:
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 0x1FAC7333:
		case 0xD7EEAB1D:
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 0x3DA36410:
		case 0x23D285CF:
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case 0xF2F4DA8D:
		case 0xCCCBD777:
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 0x6A117E27:
		case 0x04E402CB:
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0x00000000:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 0x00000001:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 0x0000000C)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != 0xFFFFFFFF)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != 0xFFFFFFFF)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 0x00000002:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 0x00000003:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != 0xFFFFFFFF)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 0x00000004:
			if (iParam4 == Global_1204C)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_1204D)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_1204E)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == Global_1204F)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam4 == Global_12050)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == 0x00000000)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 0x00000018 || iParam6 == 0x00000019)
				{
					if (iParam8 == 0x00000001)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 0x00000002)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 0x00000003)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 0x00000005)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 0x00000001)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0x00000000)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 0x00000004)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 0x00000003)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 0x00000002)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 0x00000006)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = 0xFFFFFFFF;
				}
				else if (iParam6 == 0x00000026)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 0x00000041)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != 0xFFFFFFFF)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 0x00000016)
			{
				StringCopy(&cParam1, unk_0x1739BA50603D849C(iParam4), 16);
				if (unk_0xEA6BC48857E0AC4C(&cParam1) || unk_0x12AB0310C2281427(&cParam1) == 0xE149B5E8)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 0x00000028)
			{
				switch (iParam4)
				{
					case joaat("fcr2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case joaat("diablous2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case joaat("comet3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, unk_0x1739BA50603D849C(iParam4), 16);
						if (unk_0xEA6BC48857E0AC4C(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != 0xFFFFFFFF)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != 0xFFFFFFFF)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case 0xBFE256D4:
		case 0x78A97CD0:
		case 0x394F415C:
		case 0xFAD1F1C9:
		case 0xDBBD7280:
		case 0x0A914799:
		case 0x555AF99A:
		case 0x969C3D67:
		case 0x88374054:
		case 0x6A6C02E0:
		case 0xCB96392F:
		case 0x84D6FAFD:
			return 0x00000002;
			break;
	}
	return 0xFFFFFFFF;
}

int func_308(int iParam0)
{
	return func_309(iParam0);
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0x00000000;
			break;
		
		case joaat("weapon_pistol"):
			return 0x00000001;
			break;
		
		case joaat("weapon_combatpistol"):
			return 0x00000002;
			break;
		
		case joaat("weapon_appistol"):
			return 0x00000003;
			break;
		
		case joaat("weapon_pistol50"):
			return 0x00000004;
			break;
		
		case joaat("weapon_smg"):
			return 0x00000005;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 0x00000006;
			break;
		
		case joaat("weapon_microsmg"):
			return 0x00000007;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 0x00000008;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 0x00000009;
			break;
		
		case 0xC78D71B4:
			return 0x0000000A;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 0x0000000B;
			break;
		
		case joaat("weapon_mg"):
			return 0x0000000C;
			break;
		
		case joaat("weapon_combatmg"):
			return 0x0000000D;
			break;
		
		case 0xDDE2A27C:
			return 0x0000000E;
			break;
		
		case joaat("weapon_stickybomb"):
			return 0x0000000F;
			break;
		
		case joaat("weapon_grenade"):
			return 0x00000010;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 0x00000011;
			break;
		
		case joaat("weapon_remotesniper"):
			return 0x00000012;
			break;
		
		case 0x176898A6:
			return 0x00000013;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 0x00000014;
			break;
		
		case joaat("weapon_heavysniper"):
			return 0x00000015;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 0x00000016;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 0x00000017;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 0x00000018;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 0x00000019;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 0x0000001A;
			break;
		
		case joaat("weapon_rpg"):
			return 0x0000001B;
			break;
		
		case joaat("weapon_minigun"):
			return 0x0000001C;
			break;
		
		case 0xEB779748:
			return 0x0000001D;
			break;
		
		case 0x8F796EC9:
			return 0x0000001E;
			break;
		
		case joaat("weapon_stungun"):
			return 0x0000001F;
			break;
		
		case 0xCE1A1A4D:
			return 0x00000020;
			break;
		
		case joaat("gadget_parachute"):
			return 0x00000021;
			break;
		
		case joaat("weapon_knife"):
			return 0x00000022;
			break;
		
		case joaat("weapon_nightstick"):
			return 0x00000023;
			break;
		
		case joaat("weapon_hammer"):
			return 0x00000024;
			break;
		
		case joaat("weapon_bat"):
			return 0x00000025;
			break;
		
		case joaat("weapon_crowbar"):
			return 0x00000026;
			break;
		
		case joaat("weapon_golfclub"):
			return 0x00000027;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 0x00000028;
			break;
		
		case joaat("weapon_molotov"):
			return 0x00000029;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 0x0000002A;
			break;
		
		case joaat("weapon_petrolcan"):
			return 0x0000002B;
			break;
		
		case joaat("weapon_digiscanner"):
			return 0x0000002C;
			break;
		
		case joaat("weapon_bottle"):
			return 0x0000002D;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 0x0000002E;
			break;
		
		case joaat("weapon_snspistol"):
			return 0x0000002F;
			break;
		
		case joaat("weapon_heavypistol"):
			return 0x00000031;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 0x00000030;
			break;
		
		case joaat("weapon_gusenberg"):
			return 0x00000032;
			break;
		
		case joaat("weapon_dagger"):
			return 0x00000033;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 0x00000034;
			break;
		
		case joaat("weapon_flaregun"):
			return 0x00000039;
			break;
		
		case joaat("weapon_musket"):
			return 0x00000035;
			break;
		
		case joaat("weapon_firework"):
			return 0x00000036;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 0x00000038;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 0x00000037;
			break;
		
		case joaat("weapon_proxmine"):
			return 0x0000003C;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 0x0000003D;
			break;
		
		case joaat("weapon_hatchet"):
			return 0x0000003A;
			break;
		
		case joaat("weapon_railgun"):
			return 0x0000003B;
			break;
		
		case joaat("weapon_combatpdw"):
			return 0x00000040;
			break;
		
		case joaat("weapon_knuckle"):
			return 0x0000003E;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 0x0000003F;
			break;
		
		case joaat("weapon_machete"):
			return 0x00000041;
			break;
		
		case joaat("weapon_machinepistol"):
			return 0x00000044;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 0x00000042;
			break;
		
		case joaat("weapon_compactrifle"):
			return 0x00000043;
			break;
		
		case joaat("weapon_flashlight"):
			return 0x00000045;
			break;
		
		case joaat("weapon_revolver"):
			return 0x00000046;
			break;
		
		case joaat("weapon_switchblade"):
			return 0x00000047;
			break;
		
		case 0x12E82D3D:
			return 0x00000048;
			break;
		
		case 0xBD248B55:
			return 0x00000049;
			break;
		
		case 0x0781FE4A:
			return 0x0000004A;
			break;
		
		case 0xCD274149:
			return 0x0000004B;
			break;
		
		case 0xBA45E8B8:
			return 0x0000004C;
			break;
		
		case 0x94117305:
			return 0x0000004D;
			break;
		
		case 0x19044EE0:
			return 0x0000004E;
			break;
		
		case 0x394F415C:
			return 0x00000008;
			break;
		
		case 0xFAD1F1C9:
			return 0x00000009;
			break;
		
		case 0xDBBD7280:
			return 0x0000000D;
			break;
		
		case 0x0A914799:
			return 0x00000015;
			break;
		
		case 0xBFE256D4:
			return 0x00000001;
			break;
		
		case 0x78A97CD0:
			return 0x00000005;
			break;
		
		case 0x555AF99A:
			return 0x00000016;
			break;
		
		case 0x969C3D67:
			return 0x0000002E;
			break;
		
		case 0x88374054:
			return 0x0000002F;
			break;
		
		case 0x6A6C02E0:
			return 0x00000038;
			break;
		
		case 0xCB96392F:
			return 0x00000046;
			break;
		
		case 0x84D6FAFD:
			return 0x00000030;
			break;
		
		case 0x97EA20B8:
			return 0x0000004F;
			break;
		
		case 0x3813FC08:
			return 0x00000050;
			break;
		
		case 0xAF3696A1:
			return 0x00000051;
			break;
		
		case 0x476BF155:
			return 0x00000052;
			break;
		
		case 0xB62D1F67:
			return 0x00000053;
			break;
		
		case 0x917F6C8C:
			return 0x00000054;
			break;
		
		case 0x2B5EF5EC:
			return 0x00000055;
			break;
	}
	return 0x00000000;
}

char* func_310(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 0x0BAAB157:
			return "WCT_CLIP1";
			break;
		
		case 0x5AF49386:
			return "WCT_CLIP1";
			break;
		
		case 0x6CBF371B:
			return "WCT_CLIP2";
			break;
		
		case 0xCAEBD246:
			return "WCT_CLIP1";
			break;
		
		case 0xE1C5FFFA:
			return "WCT_CLIP2";
			break;
		
		case 0xF8955D89:
			return "WCT_CLIP1";
			break;
		
		case 0x3E7E6956:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case 0x60BD749C:
			return "WCT_VAR_GUN";
			break;
		
		case 0xB7A316DA:
			return "WCT_CAMO_IND";
			break;
		
		case 0x441882E6:
			return "WCT_CAMO_IND";
			break;
		
		case 0xCE8C0772:
			return "WCT_CLIP2";
			break;
		
		case 0xC7ADD105:
			return "WCT_SCOPE_MAC2";
			break;
		
		case 0x3F3C8181:
			return "WCT_SCOPE_SML2";
			break;
		
		case 0xD7DBF707:
			return "WCT_VAR_RAY18";
			break;
		
		case 0x54D41361:
			return "WCT_CLIP1";
			break;
		
		case 0x81786CA9:
			return "WCT_CLIP2";
			break;
		
		case 0x9307D6FA:
			return "WCT_SUPP";
			break;
		
		default:
			if (iParam1 != 0x00000000)
			{
				iVar0 = func_66(iParam1, &uVar2);
				if (iVar0 != 0xFFFFFFFF)
				{
					iVar1 = 0x00000000;
					while (iVar1 < unk_0xA942498EEAA3EEAD(iVar0))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_311(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_311(var uParam0)
{
	return uParam0;
}

int func_312()
{
	if (unk_0x8CD06866876216F2() && func_313())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_313()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_314(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return 0x00000000;
			
			default:
		}
	}
	else if (func_315(iParam0))
	{
		return Global_40001.f_50E9;
	}
	return 0x00000001;
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 0x930CB951:
		case 0x399D558F:
		case 0x6C32D2EB:
		case 0xD703C94D:
		case 0xB9B15DB0:
		case 0xDA55CD3F:
		case 0x46411A1D:
		case 0x5218C819:
		case 0x441882E6:
		case 0xB7A316DA:
		case 0xD951E867:
		case 0xC5E9AE52:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_316()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000006))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000002) || unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000004))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF))
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000006))
		{
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002) || unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (unk_0x0556D13739839AFD(0x00000000))
	{
		if (Global_24BC9.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x6FB46C25CCB7E6D5(iVar2, &iVar1, 0xFFFFFFFF))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000008))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		iVar3 = unk_0x0A4C9A3D51EAE31F(0x00000362);
		if (unk_0xEAE0D21A50E6C7F4(iVar3, 0x00000002) || unk_0xEAE0D21A50E6C7F4(iVar3, 0x00000004))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_317()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000005))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000001) || unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000003))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF))
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005))
		{
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (unk_0x0556D13739839AFD(0x00000000))
	{
		if (Global_24BC9.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x6FB46C25CCB7E6D5(iVar2, &iVar1, 0xFFFFFFFF))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000005))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		iVar3 = unk_0x0A4C9A3D51EAE31F(0x00000362);
		if (unk_0xEAE0D21A50E6C7F4(iVar3, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iVar3, 0x00000003))
		{
			return 0x00000001;
		}
	}
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0xDA1BF71E2E8A1C89())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar4, 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar4, 0x00000001);
				unk_0x5D96D8530B3D0904(&iVar4, 0x00000003);
				unk_0x5D96D8530B3D0904(&iVar4, 0x00000005);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000001);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000003);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000005);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar4, 0x00000001);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar4 = unk_0x0A4C9A3D51EAE31F(0x00000362);
					unk_0x5D96D8530B3D0904(&iVar4, 0x00000001);
					unk_0x5D96D8530B3D0904(&iVar4, 0x00000003);
					unk_0x9F2BE984EBF8A0F4(iVar4);
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_318()
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

bool func_319(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_327())
	{
		return 0x00000000;
	}
	iVar0 = func_323(iParam0, iParam1, iParam2);
	iVar1 = func_321(iParam0, iParam1);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_320(iVar1));
}

int func_320(int iParam0)
{
	return (iParam0 % 0x00000020);
}

int func_321(int iParam0, int iParam1)
{
	return func_322(iParam0, iParam1);
}

int func_322(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 0x00000001;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 0x00000002;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000003;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 0x00000004;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 0x000000AF;
					break;
				
				case 0x60BD749C:
					return 0x000000D3;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 0x00000005;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 0x00000006;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000007;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x00000008;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 0x000000BA;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 0x0000000B;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 0x0000000C;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x0000000D;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x0000000E;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 0x000000A4;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 0x0000000F;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 0x00000010;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000011;
					break;
				
				case joaat("component_at_scope_macro"):
					return 0x00000012;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000013;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 0x000000AE;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 0x00000016;
					break;
				
				case joaat("component_smg_clip_02"):
					return 0x00000017;
					break;
				
				case joaat("component_smg_clip_03"):
					return 0x000000CF;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000018;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 0x00000019;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x0000001A;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 0x000000B3;
					break;
				
				case 0x60BD749C:
					return 0x000000D4;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 0x0000001B;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 0x0000001C;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 0x000000C9;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x0000001D;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000001E;
					break;
				
				case joaat("component_at_scope_macro"):
					return 0x0000001F;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000020;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 0x000000A5;
					break;
				
				case 0x60BD749C:
					return 0x000000D5;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 0x00000021;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 0x00000022;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 0x000000CA;
					break;
				
				case joaat("component_at_railcover_01"):
					return 0x00000023;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000024;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000025;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000026;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000027;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 0x000000A8;
					break;
				
				case 0x60BD749C:
					return 0x000000D6;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 0x0000002C;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 0x0000002D;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000002F;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000030;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000031;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 0x000000A3;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 0x00000032;
					break;
				
				case joaat("component_mg_clip_02"):
					return 0x00000033;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 0x00000034;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 0x000000BB;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 0x00000035;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 0x00000036;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000037;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000038;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 0x000000BC;
					break;
				
				case 0x60BD749C:
					return 0x000000D7;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 0x0000003B;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000003C;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 0x000000C1;
					break;
				
				case 0x60BD749C:
					return 0x00000185;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 0x00000040;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 0x00000041;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000042;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000043;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000044;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 0x00000045;
					break;
				
				case joaat("component_at_scope_large"):
					return 0x00000046;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x00000047;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000048;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 0x000000B4;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 0x0000004C;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x0000004D;
					break;
				
				case joaat("component_at_scope_large"):
					return 0x00000052;
					break;
				
				case 0x60BD749C:
					return 0x000000D8;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 0x0000004E;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000004F;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000050;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 0x00000051;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 0x00000053;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 0x00000054;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000055;
					break;
				
				case joaat("component_at_scope_macro"):
					return 0x00000056;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000057;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 0x000000BD;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 0x00000058;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000059;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x0000005A;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 0x0000005B;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 0x0000005C;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x0000005D;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x0000005E;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 0x000000B0;
					break;
			}
			break;
		
		case 0x176898A6:
			switch (iParam0)
			{
				case 0x0BAAB157:
					return 0x0000005F;
					break;
				
				case joaat("component_at_scope_large"):
					return 0x00000060;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x00000061;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000062;
					break;
			}
			break;
		
		case 0xC78D71B4:
			switch (iParam0)
			{
				case 0x5AF49386:
					return 0x00000063;
					break;
				
				case 0x6CBF371B:
					return 0x00000064;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000065;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000066;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000067;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000068;
					break;
			}
			break;
		
		case 0xDDE2A27C:
			switch (iParam0)
			{
				case 0xCAEBD246:
					return 0x00000069;
					break;
				
				case 0xE1C5FFFA:
					return 0x0000006A;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x0000006B;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x0000006C;
					break;
			}
			break;
		
		case 0x8F796EC9:
			switch (iParam0)
			{
				case 0xF8955D89:
					return 0x0000006D;
					break;
				
				case 0x3E7E6956:
					return 0x0000006E;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 0x0000006F;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 0x00000070;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 0x000000D0;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000071;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000072;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000073;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000074;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 0x000000BE;
					break;
				
				case 0x60BD749C:
					return 0x00000186;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 0x00000075;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 0x00000076;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000077;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x00000078;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 0x000000BF;
					break;
				
				case 0x60BD749C:
					return 0x00000187;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 0x00000079;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 0x0000007A;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x0000007B;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x0000007C;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 0x000000AB;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 0x00000083;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 0x00000084;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000007F;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000080;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000081;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000082;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 0x000000C0;
					break;
				
				case 0x60BD749C:
					return 0x0000018A;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 0x0000007D;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 0x0000007E;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 0x00000085;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 0x00000086;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x00000088;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 0x00000089;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 0x0000008C;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 0x000000CD;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000091;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000092;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000093;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 0x0000008A;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 0x0000008B;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 0x0000008D;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000008E;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x0000008F;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000090;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 0x000000AC;
					break;
				
				case 0x60BD749C:
					return 0x00000188;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 0x00000095;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 0x00000096;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 0x000000CB;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000097;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000098;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000099;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 0x000000B2;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 0x00000094;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 0x0000009A;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 0x0000009B;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 0x0000009C;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 0x0000009D;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 0x0000009E;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 0x0000009F;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 0x000000A0;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 0x000000A1;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 0x000000A2;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 0x000000B8;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 0x000000B9;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 0x000000CE;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x000000B7;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 0x000000C2;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 0x000000C3;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 0x000000C4;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 0x000000C5;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 0x000000C6;
					break;
				
				case 0x60BD749C:
					return 0x00000189;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 0x000000C7;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 0x000000C8;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 0x000000CC;
					break;
			}
			break;
		
		case 0xBD248B55:
			switch (iParam0)
			{
				case 0x84C8B2D3:
					return 0x000000D1;
					break;
				
				case 0x937ED0B7:
					return 0x000000D2;
					break;
			}
			break;
		
		case 0xBFE256D4:
			switch (iParam0)
			{
				case 0x94F42D62:
					return 0x000000D9;
					break;
				
				case 0x5ED6C128:
					return 0x000000DA;
					break;
				
				case 0x4F37DF2A:
					return 0x000000DB;
					break;
				
				case 0x85FEA109:
					return 0x000000DC;
					break;
				
				case 0x2BBD7A3A:
					return 0x000000DD;
					break;
				
				case 0x25CAAEAF:
					return 0x000000DE;
					break;
				
				case 0x43FD595B:
					return 0x000000DF;
					break;
				
				case 0x8ED4BB70:
					return 0x000000E0;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 0x000000E1;
					break;
				
				case 0x21E34793:
					return 0x000000E2;
					break;
				
				case 0x5C6C749C:
					return 0x0000016F;
					break;
				
				case 0x15F7A390:
					return 0x00000170;
					break;
				
				case 0x968E24DB:
					return 0x00000171;
					break;
				
				case 0x017BFA99:
					return 0x00000172;
					break;
				
				case 0xF2685C72:
					return 0x00000173;
					break;
				
				case 0xDD2231E6:
					return 0x00000174;
					break;
				
				case 0xBB43EE76:
					return 0x00000175;
					break;
				
				case 0x4D901310:
					return 0x00000176;
					break;
				
				case 0x5F31B653:
					return 0x00000177;
					break;
				
				case 0x697E19A0:
					return 0x00000178;
					break;
				
				case 0x930CB951:
					return 0x00000179;
					break;
			}
			break;
		
		case 0x78A97CD0:
			switch (iParam0)
			{
				case 0x4C24806E:
					return 0x000000E3;
					break;
				
				case 0xB9835B2E:
					return 0x000000E4;
					break;
				
				case 0x0B5A715F:
					return 0x000000E5;
					break;
				
				case 0x3A1BD6FA:
					return 0x000000E6;
					break;
				
				case 0xD99222E5:
					return 0x000000E7;
					break;
				
				case 0x7FEA36EC:
					return 0x000000E8;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x000000E9;
					break;
				
				case 0x9FDB5652:
					return 0x000000EA;
					break;
				
				case 0xE502AB6B:
					return 0x000000EB;
					break;
				
				case 0x3DECC7DA:
					return 0x000000EC;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x000000ED;
					break;
				
				case 0xB99402D4:
					return 0x000000EE;
					break;
				
				case 0xC867A07B:
					return 0x000000EF;
					break;
				
				case 0xDE11CBCF:
					return 0x000000F0;
					break;
				
				case 0xEC9068CC:
					return 0x000000F1;
					break;
				
				case 0x02E7957A:
					return 0x000000F2;
					break;
				
				case 0x347EF8AC:
					return 0x000000F3;
					break;
				
				case 0x4DB62ABE:
					return 0x000000F4;
					break;
				
				case 0xD9103EE1:
					return 0x000000F5;
					break;
				
				case 0xA564D78B:
					return 0x000000F6;
					break;
				
				case 0xC4979067:
					return 0x0000017A;
					break;
				
				case 0x3815A945:
					return 0x0000017B;
					break;
				
				case 0x4B4B4FB0:
					return 0x0000017C;
					break;
				
				case 0xEC729200:
					return 0x0000017D;
					break;
				
				case 0x48F64B22:
					return 0x0000017E;
					break;
				
				case 0x35992468:
					return 0x0000017F;
					break;
				
				case 0x24B782A5:
					return 0x00000180;
					break;
				
				case 0xA2E67F01:
					return 0x00000181;
					break;
				
				case 0x2218FD68:
					return 0x00000182;
					break;
				
				case 0x45C5C3C5:
					return 0x00000183;
					break;
				
				case 0x399D558F:
					return 0x00000184;
					break;
			}
			break;
		
		case 0x0A914799:
			switch (iParam0)
			{
				case 0xFA1E1A28:
					return 0x000000F7;
					break;
				
				case 0x2CD8FF9D:
					return 0x000000F8;
					break;
				
				case 0xF835D6D4:
					return 0x000000F9;
					break;
				
				case 0x89EBDAA7:
					return 0x000000FA;
					break;
				
				case 0x3BE948F6:
					return 0x000000FB;
					break;
				
				case 0x0EC0F617:
					return 0x000000FC;
					break;
				
				case 0x82C10383:
					return 0x000000FD;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x000000FE;
					break;
				
				case 0xB68010B0:
					return 0x000000FF;
					break;
				
				case 0x2E43DA41:
					return 0x00000100;
					break;
				
				case 0xAC42DF71:
					return 0x00000101;
					break;
				
				case 0x5F7DCE4D:
					return 0x00000102;
					break;
				
				case 0x6927E1A1:
					return 0x00000103;
					break;
				
				case 0x909630B7:
					return 0x00000104;
					break;
				
				case 0x108AB09E:
					return 0x00000105;
					break;
				
				case 0xF8337D02:
					return 0x00000164;
					break;
				
				case 0xC5BEDD65:
					return 0x00000165;
					break;
				
				case 0xE9712475:
					return 0x00000166;
					break;
				
				case 0x13AA78E7:
					return 0x00000167;
					break;
				
				case 0x26591E50:
					return 0x00000168;
					break;
				
				case 0x302731EC:
					return 0x00000169;
					break;
				
				case 0xAC722A78:
					return 0x0000016A;
					break;
				
				case 0xBEA4CEDD:
					return 0x0000016B;
					break;
				
				case 0xCD776C82:
					return 0x0000016C;
					break;
				
				case 0xABC5ACC7:
					return 0x0000016D;
					break;
				
				case 0x6C32D2EB:
					return 0x0000016E;
					break;
			}
			break;
		
		case 0xDBBD7280:
			switch (iParam0)
			{
				case 0x492B257C:
					return 0x00000106;
					break;
				
				case 0x17DF42E9:
					return 0x00000107;
					break;
				
				case 0x29882423:
					return 0x00000108;
					break;
				
				case 0x57EF1CC8:
					return 0x00000109;
					break;
				
				case 0xC326BDBA:
					return 0x0000010A;
					break;
				
				case 0xF6649745:
					return 0x0000010B;
					break;
				
				case 0x9D65907A:
					return 0x0000010C;
					break;
				
				case 0x420FD713:
					return 0x0000010D;
					break;
				
				case 0x3F3C8181:
					return 0x0000010E;
					break;
				
				case 0xC66B6542:
					return 0x0000010F;
					break;
				
				case 0xB99402D4:
					return 0x00000110;
					break;
				
				case 0xC867A07B:
					return 0x00000111;
					break;
				
				case 0xDE11CBCF:
					return 0x00000112;
					break;
				
				case 0xEC9068CC:
					return 0x00000113;
					break;
				
				case 0x02E7957A:
					return 0x00000114;
					break;
				
				case 0x347EF8AC:
					return 0x00000115;
					break;
				
				case 0x4DB62ABE:
					return 0x00000116;
					break;
				
				case 0xC34EF234:
					return 0x00000117;
					break;
				
				case 0xB5E2575B:
					return 0x00000118;
					break;
				
				case 0x4A768CB5:
					return 0x00000159;
					break;
				
				case 0xCCE06BBD:
					return 0x0000015A;
					break;
				
				case 0xBE94CF26:
					return 0x0000015B;
					break;
				
				case 0x7609BE11:
					return 0x0000015C;
					break;
				
				case 0x48AF6351:
					return 0x0000015D;
					break;
				
				case 0x9186750A:
					return 0x0000015E;
					break;
				
				case 0x84555AA8:
					return 0x0000015F;
					break;
				
				case 0x1B4C088B:
					return 0x00000160;
					break;
				
				case 0x0E046DFC:
					return 0x00000161;
					break;
				
				case 0x028B536E:
					return 0x00000162;
					break;
				
				case 0xD703C94D:
					return 0x00000163;
					break;
			}
			break;
		
		case 0x394F415C:
			switch (iParam0)
			{
				case 0x8610343F:
					return 0x00000119;
					break;
				
				case 0xD12ACA6F:
					return 0x0000011A;
					break;
				
				case 0xA7DD1E58:
					return 0x0000011B;
					break;
				
				case 0x63E0A098:
					return 0x0000011C;
					break;
				
				case 0xFB70D853:
					return 0x0000011D;
					break;
				
				case 0xEF2C78C1:
					return 0x0000011E;
					break;
				
				case 0x9D65907A:
					return 0x0000011F;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000120;
					break;
				
				case 0x420FD713:
					return 0x00000121;
					break;
				
				case 0x049B2945:
					return 0x00000122;
					break;
				
				case 0xC66B6542:
					return 0x00000123;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000124;
					break;
				
				case 0xB99402D4:
					return 0x00000125;
					break;
				
				case 0xC867A07B:
					return 0x00000126;
					break;
				
				case 0xDE11CBCF:
					return 0x00000127;
					break;
				
				case 0xEC9068CC:
					return 0x00000128;
					break;
				
				case 0x02E7957A:
					return 0x00000129;
					break;
				
				case 0x347EF8AC:
					return 0x0000012A;
					break;
				
				case 0x4DB62ABE:
					return 0x0000012B;
					break;
				
				case 0x43A49D26:
					return 0x0000012C;
					break;
				
				case 0x5646C26A:
					return 0x0000012D;
					break;
				
				case 0x911B24AF:
					return 0x00000143;
					break;
				
				case 0x37E5444B:
					return 0x00000144;
					break;
				
				case 0x538B7B97:
					return 0x00000145;
					break;
				
				case 0x25789F72:
					return 0x00000146;
					break;
				
				case 0xC5495F2D:
					return 0x00000147;
					break;
				
				case 0xCF8B73B1:
					return 0x00000148;
					break;
				
				case 0xA9BB2811:
					return 0x00000149;
					break;
				
				case 0xFC674D54:
					return 0x0000014A;
					break;
				
				case 0x7C7FCD9B:
					return 0x0000014B;
					break;
				
				case 0xA5C38392:
					return 0x0000014C;
					break;
				
				case 0xB9B15DB0:
					return 0x0000014D;
					break;
			}
			break;
		
		case 0xFAD1F1C9:
			switch (iParam0)
			{
				case 0x4C7A391E:
					return 0x0000012E;
					break;
				
				case 0x5DD5DBD5:
					return 0x0000012F;
					break;
				
				case 0x255D5D57:
					return 0x00000130;
					break;
				
				case 0x44032F11:
					return 0x00000131;
					break;
				
				case 0x3D25C2A7:
					return 0x00000132;
					break;
				
				case 0x1757F566:
					return 0x00000133;
					break;
				
				case 0x9D65907A:
					return 0x00000134;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000135;
					break;
				
				case 0x420FD713:
					return 0x00000136;
					break;
				
				case 0x049B2945:
					return 0x00000137;
					break;
				
				case 0xC66B6542:
					return 0x00000138;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000139;
					break;
				
				case 0xB99402D4:
					return 0x0000013A;
					break;
				
				case 0xC867A07B:
					return 0x0000013B;
					break;
				
				case 0xDE11CBCF:
					return 0x0000013C;
					break;
				
				case 0xEC9068CC:
					return 0x0000013D;
					break;
				
				case 0x02E7957A:
					return 0x0000013E;
					break;
				
				case 0x347EF8AC:
					return 0x0000013F;
					break;
				
				case 0x4DB62ABE:
					return 0x00000140;
					break;
				
				case 0x833637FF:
					return 0x00000141;
					break;
				
				case 0x8B3C480B:
					return 0x00000142;
					break;
				
				case 0x4BDD6F16:
					return 0x0000014E;
					break;
				
				case 0x406A7908:
					return 0x0000014F;
					break;
				
				case 0x2F3856A4:
					return 0x00000150;
					break;
				
				case 0xE50C424D:
					return 0x00000151;
					break;
				
				case 0xD37D1F2F:
					return 0x00000152;
					break;
				
				case 0x86268483:
					return 0x00000153;
					break;
				
				case 0xF420E076:
					return 0x00000154;
					break;
				
				case 0xAAE14DF8:
					return 0x00000155;
					break;
				
				case 0x9893A95D:
					return 0x00000156;
					break;
				
				case 0x6B13CD3E:
					return 0x00000157;
					break;
				
				case 0xDA55CD3F:
					return 0x00000158;
					break;
			}
			break;
		
		case 0x555AF99A:
			switch (iParam0)
			{
				case 0xCD940141:
					return 0x0000018B;
					break;
				
				case 0x4E65B425:
					return 0x0000018C;
					break;
				
				case 0x3BE4465D:
					return 0x0000018D;
					break;
				
				case 0xE9582927:
					return 0x0000018E;
					break;
				
				case 0x9F8A1BF5:
					return 0x0000018F;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000190;
					break;
				
				case 0x420FD713:
					return 0x00000191;
					break;
				
				case 0x049B2945:
					return 0x00000192;
					break;
				
				case 0x3F3C8181:
					return 0x00000193;
					break;
				
				case 0xAC42DF71:
					return 0x00000194;
					break;
				
				case 0x5F7DCE4D:
					return 0x00000195;
					break;
				
				case 0xE3BD9E44:
					return 0x000001E8;
					break;
				
				case 0x17148F9B:
					return 0x000001E9;
					break;
				
				case 0x24D22B16:
					return 0x000001EA;
					break;
				
				case 0xF2BEC6F0:
					return 0x000001EB;
					break;
				
				case 0x0085627D:
					return 0x000001EC;
					break;
				
				case 0xDC2919C5:
					return 0x000001ED;
					break;
				
				case 0xE184247B:
					return 0x000001EE;
					break;
				
				case 0xD8EF9356:
					return 0x000001EF;
					break;
				
				case 0xEF29BFCA:
					return 0x000001F0;
					break;
				
				case 0x67AEB165:
					return 0x000001F1;
					break;
				
				case 0x46411A1D:
					return 0x000001F2;
					break;
			}
			break;
		
		case 0x969C3D67:
			switch (iParam0)
			{
				case 0x16C69281:
					return 0x00000196;
					break;
				
				case 0xDE1FA12C:
					return 0x00000197;
					break;
				
				case 0x51351635:
					return 0x00000198;
					break;
				
				case 0x503DEA90:
					return 0x00000199;
					break;
				
				case 0xDE011286:
					return 0x0000019A;
					break;
				
				case 0x8765C68A:
					return 0x0000019B;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000019C;
					break;
				
				case 0x420FD713:
					return 0x0000019D;
					break;
				
				case 0x049B2945:
					return 0x0000019E;
					break;
				
				case 0xC66B6542:
					return 0x0000019F;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x000001A0;
					break;
				
				case 0xB99402D4:
					return 0x000001A1;
					break;
				
				case 0xC867A07B:
					return 0x000001A2;
					break;
				
				case 0xDE11CBCF:
					return 0x000001A3;
					break;
				
				case 0xEC9068CC:
					return 0x000001A4;
					break;
				
				case 0x02E7957A:
					return 0x000001A5;
					break;
				
				case 0x347EF8AC:
					return 0x000001A6;
					break;
				
				case 0x4DB62ABE:
					return 0x000001A7;
					break;
				
				case 0x9D65907A:
					return 0x000001A8;
					break;
				
				case 0xE73653A9:
					return 0x000001A9;
					break;
				
				case 0xF97F783B:
					return 0x000001AA;
					break;
				
				case 0xD40BB53B:
					return 0x00000214;
					break;
				
				case 0x431B238B:
					return 0x00000215;
					break;
				
				case 0x34CF86F4:
					return 0x00000216;
					break;
				
				case 0xB4C306DD:
					return 0x00000217;
					break;
				
				case 0xEE677A25:
					return 0x00000218;
					break;
				
				case 0xDF90DC78:
					return 0x00000219;
					break;
				
				case 0x0A4C31EE:
					return 0x0000021A;
					break;
				
				case 0x89CFB0F7:
					return 0x0000021B;
					break;
				
				case 0x7B82145C:
					return 0x0000021C;
					break;
				
				case 0x899CAF75:
					return 0x0000021D;
					break;
				
				case 0x5218C819:
					return 0x0000021E;
					break;
			}
			break;
		
		case 0x88374054:
			switch (iParam0)
			{
				case 0x01466CE6:
					return 0x000001AB;
					break;
				
				case 0xCE8C0772:
					return 0x000001AC;
					break;
				
				case 0xC111EB26:
					return 0x000001AD;
					break;
				
				case 0x8D107402:
					return 0x000001AE;
					break;
				
				case 0xE6AD5F79:
					return 0x000001AF;
					break;
				
				case 0x902DA26E:
					return 0x000001B0;
					break;
				
				case 0x4A4965F3:
					return 0x000001B1;
					break;
				
				case 0x47DE9258:
					return 0x000001B2;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 0x000001B3;
					break;
				
				case 0xAA8283BF:
					return 0x000001B4;
					break;
				
				case 0x0F7BEEDD:
					return 0x000001FE;
					break;
				
				case 0x8A612EF6:
					return 0x000001FF;
					break;
				
				case 0x76FA8829:
					return 0x00000200;
					break;
				
				case 0xA93C6CAC:
					return 0x00000201;
					break;
				
				case 0x9C905354:
					return 0x00000202;
					break;
				
				case 0x4DFA3621:
					return 0x00000203;
					break;
				
				case 0x42E91FFF:
					return 0x00000204;
					break;
				
				case 0x54A8437D:
					return 0x00000205;
					break;
				
				case 0x068C2746:
					return 0x00000206;
					break;
				
				case 0x2366E467:
					return 0x00000207;
					break;
				
				case 0x441882E6:
					return 0x00000208;
					break;
			}
			break;
		
		case 0x6A6C02E0:
			switch (iParam0)
			{
				case 0x94E12DCE:
					return 0x000001B5;
					break;
				
				case 0xE6CFD1AA:
					return 0x000001B6;
					break;
				
				case 0xF46FD079:
					return 0x000001B7;
					break;
				
				case 0xE14A9ED3:
					return 0x000001B8;
					break;
				
				case 0x6DD7A86E:
					return 0x000001B9;
					break;
				
				case 0xD77A22D2:
					return 0x000001BA;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x000001BB;
					break;
				
				case 0x420FD713:
					return 0x000001BC;
					break;
				
				case 0xC66B6542:
					return 0x000001BD;
					break;
				
				case 0x5B1C713C:
					return 0x000001BE;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x000001BF;
					break;
				
				case 0xB99402D4:
					return 0x000001C0;
					break;
				
				case 0xC867A07B:
					return 0x000001C1;
					break;
				
				case 0xDE11CBCF:
					return 0x000001C2;
					break;
				
				case 0xEC9068CC:
					return 0x000001C3;
					break;
				
				case 0x02E7957A:
					return 0x000001C4;
					break;
				
				case 0x347EF8AC:
					return 0x000001C5;
					break;
				
				case 0x4DB62ABE:
					return 0x000001C6;
					break;
				
				case 0x9D65907A:
					return 0x000001C7;
					break;
				
				case 0x381B5D89:
					return 0x000001C8;
					break;
				
				case 0x68373DDC:
					return 0x000001C9;
					break;
				
				case 0x9094FBA0:
					return 0x00000209;
					break;
				
				case 0x7320F4B2:
					return 0x0000020A;
					break;
				
				case 0x60CF500F:
					return 0x0000020B;
					break;
				
				case 0xFE668B3F:
					return 0x0000020C;
					break;
				
				case 0xF3757559:
					return 0x0000020D;
					break;
				
				case 0x193B40E8:
					return 0x0000020E;
					break;
				
				case 0x107D2F6C:
					return 0x0000020F;
					break;
				
				case 0xC4E91841:
					return 0x00000210;
					break;
				
				case 0x9BB1C5D3:
					return 0x00000211;
					break;
				
				case 0x3B61040B:
					return 0x00000212;
					break;
				
				case 0xB7A316DA:
					return 0x00000213;
					break;
			}
			break;
		
		case 0xCB96392F:
			switch (iParam0)
			{
				case 0xBA23D8BE:
					return 0x000001CA;
					break;
				
				case 0x0DC8BA3F:
					return 0x000001CB;
					break;
				
				case 0x10F42E8F:
					return 0x000001CC;
					break;
				
				case 0x00EFBF25:
					return 0x000001CD;
					break;
				
				case 0xC6D8E476:
					return 0x000001CE;
					break;
				
				case 0x420FD713:
					return 0x000001CF;
					break;
				
				case 0x049B2945:
					return 0x000001D0;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x000001D1;
					break;
				
				case 0x27077CCB:
					return 0x000001D2;
					break;
				
				case 0xC03FED9F:
					return 0x000001F3;
					break;
				
				case 0x00B5DE24:
					return 0x000001F4;
					break;
				
				case 0x0A7FF1B8:
					return 0x000001F5;
					break;
				
				case 0xF2E24289:
					return 0x000001F6;
					break;
				
				case 0x11317F27:
					return 0x000001F7;
					break;
				
				case 0x17C30C42:
					return 0x000001F8;
					break;
				
				case 0x257927AE:
					return 0x000001F9;
					break;
				
				case 0x37304B1C:
					return 0x000001FA;
					break;
				
				case 0x48DAEE71:
					return 0x000001FB;
					break;
				
				case 0x20ED9B5B:
					return 0x000001FC;
					break;
				
				case 0xD951E867:
					return 0x000001FD;
					break;
			}
			break;
		
		case 0x84D6FAFD:
			switch (iParam0)
			{
				case 0x018929DA:
					return 0x000001D3;
					break;
				
				case 0xEFB00628:
					return 0x000001D4;
					break;
				
				case 0xFAA7F5ED:
					return 0x000001D5;
					break;
				
				case 0x43621710:
					return 0x000001D6;
					break;
				
				case 0xA99CF95A:
					return 0x000001D7;
					break;
				
				case 0x822060A9:
					return 0x000001D8;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x000001D9;
					break;
				
				case 0x420FD713:
					return 0x000001DA;
					break;
				
				case 0xC7ADD105:
					return 0x000001DB;
					break;
				
				case 0x3F3C8181:
					return 0x000001DC;
					break;
				
				case 0x659AC11B:
					return 0x000001DD;
					break;
				
				case 0x3BF26DC7:
					return 0x000001DE;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x000001DF;
					break;
				
				case 0xB99402D4:
					return 0x000001E0;
					break;
				
				case 0xC867A07B:
					return 0x000001E1;
					break;
				
				case 0xDE11CBCF:
					return 0x000001E2;
					break;
				
				case 0xEC9068CC:
					return 0x000001E3;
					break;
				
				case 0x02E7957A:
					return 0x000001E4;
					break;
				
				case 0x347EF8AC:
					return 0x000001E5;
					break;
				
				case 0x4DB62ABE:
					return 0x000001E6;
					break;
				
				case 0x9D65907A:
					return 0x000001E7;
					break;
				
				case 0xAE4055B7:
					return 0x0000021F;
					break;
				
				case 0xB905ED6B:
					return 0x00000220;
					break;
				
				case 0xA6C448E8:
					return 0x00000221;
					break;
				
				case 0x9486246C:
					return 0x00000222;
					break;
				
				case 0x8A390FD2:
					return 0x00000223;
					break;
				
				case 0x02337FC5:
					return 0x00000224;
					break;
				
				case 0xEFFFDB5E:
					return 0x00000225;
					break;
				
				case 0xDDBDB6DA:
					return 0x00000226;
					break;
				
				case 0xCB631225:
					return 0x00000227;
					break;
				
				case 0xA87D541E:
					return 0x00000228;
					break;
				
				case 0xC5E9AE52:
					return 0x00000229;
					break;
			}
			break;
		
		case 0xAF3696A1:
			switch (iParam0)
			{
				case 0xD7DBF707:
					return 0x0000022A;
					break;
			}
			break;
		
		case 0x2B5EF5EC:
			switch (iParam0)
			{
				case 0x54D41361:
					return 0x0000022B;
					break;
				
				case 0x81786CA9:
					return 0x0000022C;
					break;
				
				case 0x9307D6FA:
					return 0x0000022D;
					break;
			}
			break;
	}
	return 0x00000000;
}

var func_323(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = func_52(func_324(iParam0, iParam1), uParam2, 0x00000000);
	return uVar0;
}

int func_324(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_321(iParam0, iParam1);
	iVar1 = func_326(iVar0);
	if ((func_77() == 0x00000000 || func_325() == 0x00000000) || (func_77() == 0x000003E7 && func_325() == 0x000003E7))
	{
		switch (iVar1)
		{
			case 0x00000000:
				return 0x000002AF;
				break;
			
			case 0x00000001:
				return 0x000002B0;
				break;
			
			case 0x00000002:
				return 0x000002B1;
				break;
			
			case 0x00000003:
				return 0x000002B2;
				break;
			
			case 0x00000004:
				return 0x000006D9;
				break;
			
			case 0x00000005:
				return 0x00000983;
				break;
			
			case 0x00000006:
				return 0x00000B0B;
				break;
			
			case 0x00000007:
				return 0x0000157D;
				break;
			
			case 0x00000008:
				return 0x00001581;
				break;
			
			case 0x00000009:
				return 0x00001585;
				break;
			
			case 0x0000000A:
				return 0x000015F6;
				break;
			
			case 0x0000000B:
				return 0x000015FA;
				break;
			
			case 0x0000000C:
				return 0x000015FE;
				break;
			
			case 0x0000000D:
				return 0x00001602;
				break;
			
			case 0x0000000E:
				return 0x000018E5;
				break;
			
			case 0x0000000F:
				return 0x00001960;
				break;
			
			case 0x00000010:
				return 0x00001974;
				break;
			
			case 0x00000011:
				return 0x0000197A;
				break;
		}
	}
	return 0x000006D9;
}

int func_325()
{
	return Global_7831;
}

int func_326(int iParam0)
{
	return (iParam0 / 0x00000020);
}

bool func_327()
{
	return Global_140858;
}

int func_328(int iParam0)
{
	if (iParam0 != 0xFFFFFFFF)
	{
		if ((((iParam0 == 0x0000002E || iParam0 == 0x0000002F) || iParam0 == 0x00000030) || iParam0 == 0x00000031) || iParam0 == 0x00000034)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_329(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_330(var uParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar1;
	
	func_329(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	while (func_278(&Var0, iParam1, iVar1, 0x00000000))
	{
		if (Var0.f_4 == iParam2)
		{
			return 0x00000001;
		}
		iVar1++;
	}
	return 0x00000000;
}

float func_331(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_332(var uParam0)
{
	if (!unk_0xC844350D5D58C99A(*uParam0))
	{
		return 0x00000000;
	}
	unk_0x7980D72D61BEF4D5(*uParam0, 0x00000001);
	return 0x00000001;
}

int func_333(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0xA954465BA6FDEFE2(iParam0);
		*iParam0 = 0x00000000;
	}
	*iParam0 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, 0x00000001, 0x00000001, 0x00000000);
	if (!unk_0xC844350D5D58C99A(*iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_334(var uParam0)
{
	if (!unk_0xC844350D5D58C99A(*uParam0))
	{
		return 0x00000000;
	}
	unk_0x6D80F1AEBA734886(*uParam0, 0x00000000);
	unk_0x5F2AA9E2843E9403(*uParam0, "RAMP:SCENE PED");
	unk_0x25C5402CC10F76CD(*uParam0, 0x00000000);
	unk_0x11AD11297DC58CC7(*uParam0, 0x00000001);
	return 0x00000001;
}

int func_335(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0xEBA53F35D0085654(iParam0);
		*iParam0 = 0x00000000;
	}
	*iParam0 = unk_0x36F2404464202779(0x0000001A, iParam1, vParam2, fParam3, 0x00000001, 0x00000001);
	if (!unk_0xC844350D5D58C99A(*iParam0))
	{
		return 0x00000000;
	}
	if (bParam4)
	{
		func_336(*iParam0, vParam2);
		unk_0xD8F6A53F4799FAFE(*iParam0, fParam3);
	}
	unk_0x6D80F1AEBA734886(*iParam0, 0x00000000);
	unk_0x5F2AA9E2843E9403(*iParam0, "RAMP:SCENE PED");
	unk_0x25C5402CC10F76CD(*iParam0, 0x00000000);
	unk_0x11AD11297DC58CC7(*iParam0, 0x00000001);
	return 0x00000001;
}

Vector3 func_336(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0xE82754C349C7B581(vParam1, &uVar0, 0x00000000, 0x00000000))
	{
		vParam1.z = uVar0;
	}
	if (func_225(iParam0))
	{
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	}
	return vParam1;
}

int func_337()
{
	return unk_0x7D6CA5F52B3748BF(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
}

void func_338(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_gang");
	sVar1 = "misstrvram_4";
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x3F423BF5B8125A50(sVar1);
	unk_0x6D0C93EE4FBA9307(joaat("weapon_assaultrifle"), 0x0000001F, 0x00000000);
	while (!unk_0xB87F6CF6E5628C67(iVar0) || !unk_0xB4AE0788C1587752(sVar1))
	{
		SYSTEM::WAIT(0x00000000);
	}
	while (!func_335(&(uParam0->f_1C[0x00000000]), iVar0, -161.37f, -1669.63f, 33.1f, func_331(1.03f), 0x00000001))
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_334(&(uParam0->f_1C[0x00000000]));
	unk_0x5F2AA9E2843E9403(uParam0->f_1C[0x00000000], "RP0_NOGUN");
	unk_0x78ED16BE998AECC7(uParam0->f_1C[0x00000000]);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000000, 0x00000001, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000002, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000006, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x0000000A, 0x00000000, 0x00000001, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(uParam0->f_1C[0x00000000], sVar1, "thugs_idle_b", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	while (!func_335(&(uParam0->f_1C[0x00000001]), iVar0, -161.93f, -1670.39f, 33.14f, func_331(0.2f), 0x00000001))
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_334(&(uParam0->f_1C[0x00000001]));
	unk_0x5F2AA9E2843E9403(uParam0->f_1C[0x00000001], "RP1_GUN");
	unk_0x78ED16BE998AECC7(uParam0->f_1C[0x00000001]);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000002, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000003, 0x00000001, 0x00000001, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000006, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
	unk_0x262EF6C6306BEA6C(uParam0->f_1C[0x00000001], joaat("weapon_assaultrifle"), 0x00000064, 0x00000001, 0x00000001);
	unk_0xC6EB89C59F2AF6B8(uParam0->f_1C[0x00000001], sVar1, "thugs_idle_a", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_1B = 0x00000000;
	unk_0x71199B01895C6202(iVar0);
}

void func_339(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_mex");
	sVar1 = "misstrvram_3";
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x3F423BF5B8125A50(sVar1);
	unk_0x6D0C93EE4FBA9307(joaat("weapon_microsmg"), 0x0000001F, 0x0000000A);
	while ((!unk_0xB87F6CF6E5628C67(iVar0) || !unk_0x1787731C4D1D6B19(joaat("weapon_microsmg"))) || !unk_0xB4AE0788C1587752(sVar1))
	{
		SYSTEM::WAIT(0x00000000);
	}
	while (!func_335(&(uParam0->f_1C[0x00000000]), iVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 0x00000001))
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_334(&(uParam0->f_1C[0x00000000]));
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000002, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000006, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000009, 0x00000001, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
	unk_0x5F2AA9E2843E9403(uParam0->f_1C[0x00000000], "RAMP:PED 0");
	unk_0xC6EB89C59F2AF6B8(uParam0->f_1C[0x00000000], sVar1, "mexicans_idle_a", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	while (!func_335(&(uParam0->f_1C[0x00000001]), iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 0x00000001))
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_334(&(uParam0->f_1C[0x00000001]));
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000000, 0x00000001, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000002, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000003, 0x00000001, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000006, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000008, 0x00000001, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
	unk_0x5F2AA9E2843E9403(uParam0->f_1C[0x00000001], "RAMP:PED 1");
	unk_0xC6EB89C59F2AF6B8(uParam0->f_1C[0x00000001], sVar1, "mexicans_idle_b", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (func_276(&(uParam0->f_29[0x00000000]), joaat("weapon_microsmg"), 467f, -1855.4f, 32f, func_331(-0.85f)))
	{
		unk_0x3599C729CF725E87(uParam0->f_29[0x00000000], joaat("component_at_scope_macro"));
		unk_0x3599C729CF725E87(uParam0->f_29[0x00000000], joaat("component_microsmg_clip_02"));
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_1B = 0x00000000;
	unk_0x71199B01895C6202(iVar0);
}

int func_340()
{
	return func_341(1182.137f, -400.4787f, 66.92414f, 8f);
}

int func_341(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	
	vVar0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return unk_0x7D6CA5F52B3748BF(vParam0 - vVar0, vParam0 + vVar0, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
}

void func_342(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = joaat("ig_ramp_hipster");
	iVar1 = joaat("prop_chair_01a");
	iVar2 = joaat("prop_npc_phone");
	sVar3 = "misstrvram_2";
	iVar4 = 0x0000EB95;
	vVar5 = { 0f, 0f, 0f };
	vVar6 = { 0f, 0f, 0f };
	unk_0x6D0C93EE4FBA9307(joaat("weapon_sawnoffshotgun"), 0x0000001F, 0x00000000);
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x523BCC9DC80CD82F(iVar1);
	unk_0x523BCC9DC80CD82F(iVar2);
	unk_0x3F423BF5B8125A50(sVar3);
	func_346(&uLocal_68);
	while ((((!unk_0xB87F6CF6E5628C67(iVar0) || !unk_0xB87F6CF6E5628C67(iVar1)) || !unk_0xB87F6CF6E5628C67(iVar2)) || !unk_0xB4AE0788C1587752(sVar3)) || !func_345(&uLocal_68))
	{
		SYSTEM::WAIT(0x00000000);
	}
	unk_0x75CFD6AD66ADFDD1(1180.021f, -401.7374f, 66.8767f, 0.75f, 0x00000000);
	uParam0->f_29[0x00000002] = unk_0x4B72871A3BE7B474(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), 0x00000001, 0x00000000, 0x00000001);
	if (unk_0xC844350D5D58C99A(uParam0->f_29[0x00000002]))
	{
		unk_0xA47B46945FF6DE74(uParam0->f_29[0x00000002], 1180.05f, -401.83f, 66.88f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xC023D1C4BF532815(uParam0->f_29[0x00000002], 0f, 0f, 50f, 0x00000002, 0x00000001);
		unk_0x1E9649458B15960F(uParam0->f_29[0x00000002], 0x00000001);
	}
	uParam0->f_29[0x00000003] = unk_0x4B72871A3BE7B474(1181.243f, -402.5309f, 67.2564f, 1f, 0xF3A90766, 0x00000001, 0x00000000, 0x00000001);
	if (unk_0xC844350D5D58C99A(uParam0->f_29[0x00000003]))
	{
		unk_0x1E9649458B15960F(uParam0->f_29[0x00000003], 0x00000001);
	}
	while (!func_335(&(uParam0->f_1C[0x00000000]), iVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_334(&(uParam0->f_1C[0x00000000]));
	unk_0x1E9649458B15960F(uParam0->f_1C[0x00000000], 0x00000001);
	unk_0x78ED16BE998AECC7(uParam0->f_1C[0x00000000]);
	unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000002, 0x00000000, 0x00000000, 0x00000000);
	func_344(&(uParam0->f_29[0x00000001]), iVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
	unk_0x9F528B1B53FBC5D9(uParam0->f_29[0x00000001], uParam0->f_1C[0x00000000], unk_0x4A089F2B762B8D33(uParam0->f_1C[0x00000000], iVar4), vVar6, vVar5, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	func_343(&uLocal_68, 0x00000000, 0x00000003);
	if (!unk_0x69DF961355195C3C(uParam0->f_3B))
	{
		uParam0->f_3B = unk_0xE9744DB7B8CA6965(vLocal_66, vLocal_67, 0x00000002);
		if (func_128(uParam0->f_1C[0x00000000]))
		{
			unk_0x915804B434753CBD(uParam0->f_1C[0x00000000], uParam0->f_3B, sVar3, "hipster_idle", 8f, -8f, 0x00000201, 0x00000000, 0x447A0000, 0x00000000);
		}
		unk_0xC90224D9E95E5E3A(uParam0->f_3B, 0x00000001);
	}
	if (!func_276(&(uParam0->f_29[0x00000000]), joaat("weapon_sawnoffshotgun"), 1162.2f, -395.4f, 72.9f, func_331(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_1B = 0x00000000;
	unk_0x71199B01895C6202(iVar0);
	unk_0x71199B01895C6202(iVar1);
	unk_0x71199B01895C6202(iVar2);
}

void func_343(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (bParam1)
		{
			unk_0x870157785E99DF36(&iVar0);
		}
		else
		{
			if (!unk_0xE6CD5C6925050049("npcphone"))
			{
				unk_0x268029E44B2B3E36("npcphone", 0x00000000);
				unk_0x064E7408AD6E15E5(joaat("prop_npc_phone"));
			}
			iVar0 = unk_0x3FF702268B97B673("npcphone");
		}
		unk_0x3039591AD3E735CE(iVar0);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DISPLAY_VIEW");
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
		unk_0xEF45C43067063F18(*uParam0, Global_4BCE, Global_4BCF, Global_4BD0, Global_4BD1, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	}
}

void func_344(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	func_154(iParam0);
	*iParam0 = unk_0x7707E48765093646(iParam1, vParam2, 0x00000001, 0x00000001, 0x00000000);
	unk_0xD8F6A53F4799FAFE(*iParam0, fParam3);
}

int func_345(var uParam0)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_346(var uParam0)
{
	*uParam0 = unk_0xB01F55A0FD1CFD49(func_347());
}

char* func_347()
{
	return "CELLPHONE_CUTSCENE";
}

int func_348()
{
	return func_341(911.5349f, 3642.111f, 31.64738f, 8f);
}

void func_349(var uParam0)
{
	vector3 vVar0;
	char* sVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	sVar1 = "misstrvram_1";
	iVar2 = 0x00006F06;
	vVar3 = { 0f, 0f, 0f };
	vVar4 = { 0f, 0f, -0.1f };
	iVar5 = joaat("ig_ramp_hic");
	iVar6 = 0x08C198E9;
	iVar7 = 0x45E80F56;
	unk_0x523BCC9DC80CD82F(iVar5);
	unk_0x523BCC9DC80CD82F(iVar6);
	unk_0x523BCC9DC80CD82F(iVar7);
	unk_0x3F423BF5B8125A50(sVar1);
	unk_0x6D0C93EE4FBA9307(joaat("weapon_assaultrifle"), 0x0000001F, 0x00000000);
	while ((((!unk_0xB87F6CF6E5628C67(iVar5) || !unk_0xB87F6CF6E5628C67(iVar6)) || !unk_0xB87F6CF6E5628C67(iVar7)) || !unk_0xB4AE0788C1587752(sVar1)) || !unk_0x1787731C4D1D6B19(joaat("weapon_assaultrifle")))
	{
		SYSTEM::WAIT(0x00000000);
	}
	while (!func_335(&(uParam0->f_1C[0x00000000]), iVar5, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (func_128(uParam0->f_1C[0x00000000]))
	{
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000002, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000006, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000000], 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
		vVar0 = { unk_0x64430C979F516F7A(uParam0->f_1C[0x00000000], iVar2, 0f, 0f, 0f) };
		unk_0x5F2AA9E2843E9403(uParam0->f_1C[0x00000000], "RAMP:PED 0");
		func_344(&(uParam0->f_29[0x00000001]), iVar7, vVar0, 0f);
		unk_0x9F528B1B53FBC5D9(uParam0->f_29[0x00000001], uParam0->f_1C[0x00000000], unk_0x4A089F2B762B8D33(uParam0->f_1C[0x00000000], iVar2), vVar4, vVar3, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
		unk_0x272295383B6513AB(uParam0->f_29[0x00000001], 0x00000001);
		unk_0x1E9649458B15960F(uParam0->f_1C[0x00000000], 0x00000001);
		unk_0x4E885A246A9D983A(uParam0->f_1C[0x00000000], 0x000000D0, 0x00000001);
		unk_0x6DF7BF67E86AAE86(uParam0->f_1C[0x00000000], 0x6F0783F5);
	}
	while (!func_335(&(uParam0->f_1C[0x00000001]), iVar5, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (func_128(uParam0->f_1C[0x00000001]))
	{
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000003, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000004, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000006, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(uParam0->f_1C[0x00000001], 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
		vVar0 = { unk_0x64430C979F516F7A(uParam0->f_1C[0x00000001], iVar2, 0f, 0f, 0f) };
		unk_0x5F2AA9E2843E9403(uParam0->f_1C[0x00000001], "RAMP:PED 1");
		func_344(&(uParam0->f_29[0x00000002]), iVar7, vVar0, 0f);
		unk_0x9F528B1B53FBC5D9(uParam0->f_29[0x00000002], uParam0->f_1C[0x00000001], unk_0x4A089F2B762B8D33(uParam0->f_1C[0x00000001], iVar2), vVar4, vVar3, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
		unk_0x272295383B6513AB(uParam0->f_29[0x00000002], 0x00000001);
		unk_0x1E9649458B15960F(uParam0->f_1C[0x00000001], 0x00000001);
		unk_0x4E885A246A9D983A(uParam0->f_1C[0x00000001], 0x000000D0, 0x00000001);
		unk_0x6DF7BF67E86AAE86(uParam0->f_1C[0x00000001], 0x6F0783F5);
	}
	uParam0->f_29[0x00000003] = unk_0x4B72871A3BE7B474(909.3884f, 3643.652f, 31.699f, 1f, 0x08C198E9, 0x00000001, 0x00000000, 0x00000001);
	if (unk_0xC844350D5D58C99A(uParam0->f_29[0x00000003]))
	{
		unk_0x1E9649458B15960F(uParam0->f_29[0x00000003], 0x00000001);
	}
	uParam0->f_29[0x00000004] = unk_0x4B72871A3BE7B474(908.0437f, 3643.682f, 31.7073f, 1f, 0x08C198E9, 0x00000001, 0x00000000, 0x00000001);
	if (unk_0xC844350D5D58C99A(uParam0->f_29[0x00000004]))
	{
		unk_0x1E9649458B15960F(uParam0->f_29[0x00000004], 0x00000001);
	}
	if (!unk_0x69DF961355195C3C(uParam0->f_3B))
	{
		uParam0->f_3B = unk_0xE9744DB7B8CA6965(910.13f, 3643.74f, 31.69f, 0f, 0f, func_331(-0.26f), 0x00000002);
		if (func_128(uParam0->f_1C[0x00000000]))
		{
			unk_0x915804B434753CBD(uParam0->f_1C[0x00000000], uParam0->f_3B, sVar1, "redneck_idle_a", 8f, -8f, 0x00000201, 0x00000000, 0x447A0000, 0x00000000);
		}
		if (func_128(uParam0->f_1C[0x00000001]))
		{
			unk_0x915804B434753CBD(uParam0->f_1C[0x00000001], uParam0->f_3B, sVar1, "redneck_idle_b", 8f, -8f, 0x00000201, 0x00000000, 0x447A0000, 0x00000000);
		}
		unk_0xC90224D9E95E5E3A(uParam0->f_3B, 0x00000001);
	}
	if (!func_276(&(uParam0->f_29[0x00000000]), joaat("weapon_assaultrifle"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	unk_0x71199B01895C6202(iVar5);
	unk_0x71199B01895C6202(iVar6);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_1B = 0x00000000;
}

int func_350(int iParam0)
{
	if (!unk_0x338D6FF72D84D90F())
	{
		return 0x00000001;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0x00000001;
	}
	if (func_180(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_351(int iParam0)
{
	struct<27> Var0;
	int iVar1;
	
	func_111(iParam0, &Var0);
	iVar1 = func_227();
	if (iVar1 == 0x00000091)
	{
		return 0x00000001;
	}
	else if ((iVar1 != 0x00000001 && iVar1 != 0x00000000) && iVar1 != 0x00000002)
	{
		return 0x00000001;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Var0.f_1A, iVar1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_352(int iParam0, var uParam1, vector3 vParam2, float fParam3)
{
	int iVar0;
	
	if (*iParam0 == 0x00000001)
	{
		if (func_353((*iParam0)[0x00000000], vParam2, fParam3, uParam1))
		{
			return 0x00000001;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < *iParam0)
		{
			if (func_353((*iParam0)[iVar0], vParam2, fParam3, uParam1))
			{
				iVar0 = *iParam0;
				return 0x00000001;
			}
			iVar0++;
		}
	}
	func_371("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0x00000000;
}

int func_353(int iParam0, vector3 vParam1, float fParam2, var uParam3)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0x00000000;
	func_111(iParam0, &Var1);
	if (func_354(Var1.f_6, vParam1, fParam2, 0x00000000))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000003))
			{
				iVar0 = 0x00000001;
			}
		}
		if (func_190(iParam0))
		{
			iVar0 = 0x00000001;
		}
	}
	if (iVar0 == 0x00000001)
	{
		*uParam3 = iParam0;
		StringCopy(&(uParam3->f_1), Var1, 32);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_354(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

int func_355(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_356(int iParam0, bool bParam1)
{
	func_272(iParam0);
	if (bParam1)
	{
		func_371(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_359(iParam0, 0x00000000, 0x00000000, 0x00000000);
	}
	func_358(&(iParam0->f_30));
	if (iLocal_240 != 0xFFFFFFFF)
	{
		func_371("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_269(&iLocal_240);
	}
	if (iLocal_250 != 0x00000000)
	{
		if (*iParam0 == 0x00000037 || *iParam0 == 0x00000035)
		{
			unk_0x2952D66A502EA873(iLocal_250, 0x00000000);
		}
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(0x00000000);
	}
	if (iLocal_244)
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			unk_0xA37A90C62806D848(0x00000001);
			iLocal_244 = 0x00000000;
		}
	}
	func_357();
	func_371("SCRIPT TERMINATED");
	Global_17710 = 0x00000000;
	unk_0x10FAF14A60A0DBE1();
}

void func_357()
{
	func_371("Running end routines.");
	Global_1B2FC = (Global_1B2FC - 0x00000001);
}

int func_358(var uParam0)
{
	if (func_152(uParam0))
	{
		if (unk_0xB4AE0788C1587752(*uParam0))
		{
			unk_0x8D17794CE3273D70(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_359(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_367(uParam0, iParam1);
	func_363(uParam0, bParam2);
	func_360(uParam0, bParam3);
}

void func_360(var uParam0, bool bParam1)
{
	func_361(&(uParam0->f_29), bParam1);
}

void func_361(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= (*uParam0 - 0x00000001))
	{
		if (bParam1)
		{
			func_154(uParam0[iVar0]);
		}
		else
		{
			func_362(uParam0[iVar0], 0x00000000);
		}
		iVar0++;
	}
}

void func_362(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
		}
		if (!bParam1)
		{
			unk_0xEEEE2E5FA6F78DF0(iParam0);
		}
		else
		{
			unk_0xAA2AE6161CB0D2DC(*iParam0);
		}
	}
}

void func_363(var uParam0, bool bParam1)
{
	func_364(&(uParam0->f_23), bParam1);
}

void func_364(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= (*uParam0 - 0x00000001))
	{
		if (bParam1)
		{
			func_366(uParam0[iVar0]);
		}
		else
		{
			func_365(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_365(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0x437347B10A200C4B(*iParam0, 0x00000000);
		if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_366(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		if (func_158(*iParam0))
		{
			if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
			{
				if (func_128(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0x00000000))
					{
						unk_0x046C362CF15F1935(iParam0);
						return;
					}
				}
				unk_0xA954465BA6FDEFE2(iParam0);
			}
		}
		else
		{
			if (func_128(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0x00000000))
				{
					unk_0x046C362CF15F1935(iParam0);
					return;
				}
			}
			unk_0xA954465BA6FDEFE2(iParam0);
		}
	}
}

void func_367(var uParam0, int iParam1)
{
	func_368(&(uParam0->f_1C), iParam1);
}

void func_368(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= (*uParam0 - 0x00000001))
	{
		if (iParam1 == 0x00000001)
		{
			func_370(uParam0[iVar0]);
		}
		else
		{
			func_369(uParam0[iVar0], 0x00000000, 0x00000001, 0x00000000);
		}
		iVar0++;
	}
}

void func_369(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
			if (iParam3 == 0x00000000)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, bParam1);
			if (iParam2 == 0x00000001)
			{
				unk_0x11AD11297DC58CC7(*iParam0, 0x00000000);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

void func_370(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0x00000000))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

void func_371(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
	}
}

void func_372(var uParam0)
{
	*uParam0 = 0xFFFFFFFF;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_F = 12f;
	uParam0->f_10 = 0x00000006;
	uParam0->f_19 = 0x00000000;
	uParam0->f_1A = 0x00000000;
	uParam0->f_1B = 0x00000000;
}

void func_373()
{
	func_371("Running start routines.");
	Global_1B2FC++;
}

