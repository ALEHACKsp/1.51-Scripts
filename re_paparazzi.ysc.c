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
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	float fLocal_51 = 0f;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<6> Local_61 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	var uLocal_74 = 15;
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
	var uLocal_107 = 1;
	struct<18> Local_108[4];
	struct<18> Local_109[8];
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	char* sLocal_132 = NULL;
	char[] cLocal_133[8] = 0;
	char* sLocal_134 = NULL;
	char* sLocal_135 = NULL;
	int iLocal_136[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_137 = 0;
	int iLocal_138[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_139[16];
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	int iLocal_144[3] = { 0, 0, 0 };
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	int iLocal_152[2] = { 0, 0 };
	float fLocal_153 = 0f;
	vector3 vLocal_154 = { 0f, 0f, 0f };
	vector3 vLocal_155 = { 0f, 0f, 0f };
	vector3 vLocal_156 = { 0f, 0f, 0f };
	vector3 vLocal_157 = { 0f, 0f, 0f };
	vector3 vLocal_158 = { 0f, 0f, 0f };
	vector3 vLocal_159 = { 0f, 0f, 0f };
	vector3 vLocal_160 = { 0f, 0f, 0f };
	vector3 vLocal_161[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_162[4] = { 0f, 0f, 0f, 0f };
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	char* sLocal_175[3] = { NULL, NULL, NULL };
	int iLocal_176 = 0;
	char* sLocal_177 = NULL;
	vector3 vLocal_178 = { 0f, 0f, 0f };
	vector3 vLocal_179 = { 0f, 0f, 0f };
	float fLocal_180 = 0f;
	vector3 vLocal_181 = { 0f, 0f, 0f };
	vector3 vLocal_182 = { 0f, 0f, 0f };
	float fLocal_183 = 0f;
	vector3 vLocal_184 = { 0f, 0f, 0f };
	vector3 vLocal_185 = { 0f, 0f, 0f };
	float fLocal_186 = 0f;
	vector3 vLocal_187 = { 0f, 0f, 0f };
	vector3 vLocal_188 = { 0f, 0f, 0f };
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	float fLocal_191 = 0f;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	float fLocal_195 = 0f;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	bool bLocal_198 = 0;
	bool bLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	struct<2> Local_204 = { 0, 5 } ;
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
	var uLocal_220 = 5;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
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
	fLocal_44 = -1f;
	vLocal_49 = { 226.6825f, 681.0297f, 188.4987f };
	vLocal_50 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_51 = 32.0905f;
	StringCopy(&Local_61, "", 24);
	vLocal_68 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_69 = 283.0367f;
	vLocal_71 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_72 = -18.4743f;
	cLocal_133 = "REPAPAU";
	sLocal_134 = "random@escape_paparazzi@standing@";
	sLocal_135 = "random@escape_paparazzi@incar@";
	iLocal_146 = 0x00000FA0;
	fLocal_150 = 0f;
	fLocal_151 = 0f;
	fLocal_153 = 0f;
	vLocal_154 = { 272.6356f, 155.5618f, 103.3306f };
	vLocal_155 = { 247.5795f, 88.7094f, 92.9859f };
	vLocal_156 = { 259.0348f, 114.0369f, 98.9984f };
	vLocal_157 = { 255.4971f, 116.8744f, 99.8162f };
	vLocal_158 = { 266.8217f, 139.7698f, 103.2269f };
	vLocal_159 = { 270.0174f, 139.1181f, 103.2195f };
	vLocal_160 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_177 = "left_";
	vLocal_178 = { 261.9341f, 126.2429f, 95.15405f };
	vLocal_179 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_180 = 16f;
	vLocal_181 = { 261.9341f, 126.2429f, 107.6541f };
	vLocal_182 = { 248.354f, 87.01792f, 92.389f };
	fLocal_183 = 16f;
	vLocal_184 = { 256.6779f, 126.573f, 99.54784f };
	vLocal_185 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_186 = 5.75f;
	vLocal_187 = { 260.242f, 127.423f, 101.65f };
	vLocal_188 = { 0f, 0f, -20f };
	vLocal_48 = { ScriptParam_204.f_1[0x00000000 /*3*/] };
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		func_282();
	}
	func_281(&uLocal_74, 0x00000003);
	if (!Global_3)
	{
		if (func_239(vLocal_48, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000))
		{
			func_236(0xFFFFFFFF);
		}
		else
		{
			unk_0x10FAF14A60A0DBE1();
		}
	}
	uLocal_126 = unk_0x7D6CA5F52B3748BF(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	uLocal_127 = unk_0x7D6CA5F52B3748BF(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	uLocal_128 = unk_0x7D6CA5F52B3748BF(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	if (Global_3)
	{
		unk_0x536F1BE96C726C4B(246.1673f, 92.1704f, 93.8361f, 6f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	unk_0xE342F209E49C5314(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0x00000000, 0x00000001);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0x00000000);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_233(&uLocal_74);
		if (!func_232())
		{
			if (func_231())
			{
				func_282();
			}
		}
		unk_0x1A6DFFFEEC27BF4F("RE_EP", 0x00000000);
		iVar0 = 0x00000000;
		while (iVar0 < Local_108)
		{
			if (unk_0xC844350D5D58C99A(Local_108[iVar0 /*18*/]) && !unk_0x437347B10A200C4B(Local_108[iVar0 /*18*/], 0x00000000))
			{
				Local_108[iVar0 /*18*/].f_8 = { unk_0x68F4C0EC296D3901(Local_108[iVar0 /*18*/], 0x00000001) };
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < Local_109)
		{
			if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]) && !unk_0x437347B10A200C4B(Local_109[iVar0 /*18*/], 0x00000000))
			{
				Local_109[iVar0 /*18*/].f_6 = { unk_0x68F4C0EC296D3901(Local_109[iVar0 /*18*/], 0x00000001) };
			}
			iVar0++;
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vLocal_52 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
		{
			vLocal_53 = { unk_0x68F4C0EC296D3901(iLocal_67, 0x00000001) };
		}
		if (unk_0xC844350D5D58C99A(iLocal_70) && !unk_0x437347B10A200C4B(iLocal_70, 0x00000000))
		{
			vLocal_54 = { unk_0x68F4C0EC296D3901(iLocal_70, 0x00000001) };
		}
		if (!func_232())
		{
			if (unk_0x338D6FF72D84D90F())
			{
				switch (iLocal_130)
				{
					case 0x00000000:
						if (func_222())
						{
							func_215();
							iLocal_130++;
						}
						else if (func_203())
						{
							func_282();
						}
						break;
					
					case 0x00000001:
						if ((func_202() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || !unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
						{
							if (!Global_3 && !bLocal_56)
							{
								func_201();
								func_282();
							}
						}
						else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0x00000000, 0x00000001, 0x00000000))
						{
							func_192(0x00000001);
							iLocal_121 = func_191(iLocal_67, 0x00000000, 0x00000091);
							func_190("MAG_2_ESCAPE_PAP_GET_CAR");
							func_189(0x00000000);
						}
						break;
				}
			}
			else
			{
				func_282();
			}
		}
		else
		{
			unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
			switch (iLocal_45)
			{
				case 0x00000000:
					func_186();
					break;
				
				case 0x00000001:
					func_183();
					break;
				
				case 0x00000002:
					func_161();
					break;
				
				case 0x00000003:
					func_149();
					break;
				
				case 0x00000004:
					func_112();
					break;
				
				case 0x0000000A:
					func_282();
					break;
				
				case 0x00000005:
					func_111();
					break;
				
				case 0x00000006:
					func_108(sLocal_132);
					break;
				
				case 0x00000007:
					func_107();
					break;
				
				case 0x00000009:
					break;
				
				case 0x00000008:
					if (func_106())
					{
						if (unk_0xC844350D5D58C99A(iLocal_67))
						{
							unk_0xEBA53F35D0085654(&iLocal_67);
						}
						func_82();
					}
					break;
				
				case 0x0000000B:
					func_78();
					break;
			}
			if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_53, 210f, 210f, 210f, 0x00000000, 0x00000001, 0x00000000))
			{
				func_201();
				func_282();
			}
			if (((iLocal_45 != 0x00000005 && iLocal_45 != 0x00000006) && iLocal_45 != 0x0000000A) && iLocal_45 != 0x00000007)
			{
				if (!Global_3 && !bLocal_56)
				{
					if (func_75(iLocal_67, 0x00000001, 0x00000001) || func_74())
					{
						if (iLocal_45 > 0x00000000)
						{
							func_189(0x00000005);
						}
						else
						{
							func_201();
							func_189(0x0000000A);
						}
					}
					if (((iLocal_45 != 0x00000005 && iLocal_45 != 0x0000000A) && iLocal_45 != 0x00000000) && iLocal_45 != 0x00000007)
					{
						if (func_70())
						{
							func_189(0x00000006);
						}
					}
				}
			}
		}
		func_31();
		if (iLocal_45 <= 0x00000000)
		{
			iVar1 = func_30();
			if (iVar1 != 0xFFFFFFFF && (iLocal_60 || func_24() != 0x00000000))
			{
				if ((!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0x00000000, 0x00000001, 0x00000000) && (unk_0x1C0640BA9A7327B3() - iLocal_145) > 0x00001388) && !unk_0xEB6A8945D1AC98A1(Local_109[iVar1 /*18*/]))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(Local_109[iVar1 /*18*/], 0x00000001), vLocal_52) < (30.5f * 30.5f) && SYSTEM::VDIST2(vLocal_53, vLocal_52) > (22.5f * 22.5f))
					{
						if (func_232())
						{
							if (Local_139[0x00000004 /*10*/] != Local_109[iVar1 /*18*/])
							{
								func_23(&Local_139, 0x00000004);
								func_22(&Local_139, 0x00000004, Local_109[iVar1 /*18*/], "PAPARAZZO", 0x00000000, 0x00000001);
							}
							else if (!iLocal_193)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 0x00000001, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_145 = unk_0x1C0640BA9A7327B3();
									iLocal_193 = 0x00000001;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_CHAT", 0x00000001, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_145 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							StringCopy(&vVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&vVar2, unk_0x09AC81E49EA267F7(0x00000001, 0x0000000D), 24);
							func_3(Local_109[iVar1 /*18*/], &vVar2, "PAPARAZZO", 0x00000018);
							iLocal_145 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
			}
		}
		if (iLocal_45 <= 0x00000001)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		iVar0 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			iVar1 = unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar1))
			{
				if (iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						if (!unk_0xE0EC712E4BE1FC42(iVar1, unk_0x16F2683693E537C9()))
						{
							unk_0x0C8C0C840C2D1AD2(iVar1, unk_0x16F2683693E537C9(), 0x000007D0, 0x00000800, 0x00000002);
						}
					}
				}
			}
		}
	}
}

void func_2()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]))
		{
			if (unk_0x7F6DC62EA9922664(Local_109[iVar0 /*18*/]) < Local_109[iVar0 /*18*/].f_11)
			{
				if (unk_0xB87D13D0C064E9D1(Local_109[iVar0 /*18*/], unk_0x16F2683693E537C9(), 0x00000001))
				{
					iLocal_138[iVar0] = (iLocal_138[iVar0] + (Local_109[iVar0 /*18*/].f_11 - unk_0x7F6DC62EA9922664(Local_109[iVar0 /*18*/])));
					iLocal_63 = (iLocal_63 + (Local_109[iVar0 /*18*/].f_11 - unk_0x7F6DC62EA9922664(Local_109[iVar0 /*18*/])));
					unk_0xE910A68AA670B4AA(Local_109[iVar0 /*18*/]);
					if (iLocal_138[iVar0] > iLocal_137)
					{
						iLocal_137 = iLocal_138[iVar0];
					}
				}
			}
			Local_109[iVar0 /*18*/].f_11 = unk_0x7F6DC62EA9922664(Local_109[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_4(iParam3), 0x00000000);
}

int func_4(int iParam0)
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

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0x00000000);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					func_20();
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
		if (func_19(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_18();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_12();
		func_7();
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
		func_20();
	}
	return 0x00000000;
}

void func_7()
{
	if (!func_8())
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

int func_8()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_11())
	{
		return 0x00000000;
	}
	if (func_9(unk_0xD803B885F5E47A62()))
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

bool func_9(int iParam0)
{
	return func_10(iParam0, 0x00000014);
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_11()
{
	return 0xFFFFFFFF;
}

void func_12()
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

void func_13()
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

int func_14()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_15()
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

void func_16()
{
	if (func_17(0x0000000E))
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
		Global_4C1E = func_24();
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

bool func_17(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_18()
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

bool func_19(int iParam0, int iParam1)
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

void func_20()
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

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_22(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_23(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

int func_24()
{
	func_25();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_25()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_28(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_27(unk_0x16F2683693E537C9());
			if (func_26(iVar0) && (!func_17(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_26(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_26(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_29(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_30()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = 0xFFFFFFFF;
	fVar2 = 999999f;
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if ((unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]) && !unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/])) && !unk_0xEB6A8945D1AC98A1(iLocal_67))
		{
			if (SYSTEM::VDIST2(vLocal_52, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(vLocal_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_47)
	{
		case 0x00000000:
			iLocal_165 = 0x00000000;
			unk_0x523BCC9DC80CD82F(joaat("a_m_y_genstreet_02"));
			unk_0x523BCC9DC80CD82F(joaat("prop_pap_camera_01"));
			unk_0x523BCC9DC80CD82F(joaat("cavalcade2"));
			unk_0x523BCC9DC80CD82F(joaat("vader"));
			unk_0x3F423BF5B8125A50(sLocal_134);
			unk_0x3F423BF5B8125A50("random@paparazzi@pap_anims");
			if (((((unk_0xB87F6CF6E5628C67(joaat("a_m_y_genstreet_02")) && unk_0xB87F6CF6E5628C67(joaat("prop_pap_camera_01"))) && unk_0xB87F6CF6E5628C67(joaat("cavalcade2"))) && unk_0xB87F6CF6E5628C67(joaat("vader"))) && unk_0xB4AE0788C1587752(sLocal_134)) && unk_0xB4AE0788C1587752("random@paparazzi@pap_anims"))
			{
				vLocal_161[0x00000000 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				vLocal_161[0x00000001 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				vLocal_161[0x00000002 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				vLocal_161[0x00000003 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_162[0x00000000] = -111.1625f;
				fLocal_162[0x00000001] = 68.857f;
				fLocal_162[0x00000002] = -108.2056f;
				fLocal_162[0x00000003] = 50.8189f;
				iVar0 = 0x00000000;
				while (iVar0 < Local_108)
				{
					func_69(iVar0);
					func_67(func_68(iVar0));
					func_67(func_66(iVar0));
					iVar0++;
				}
				iLocal_163 = 0x00000000;
				func_65(func_68(0x00000001), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_65(func_66(0x00000001), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_65(func_66(0x00000002), vLocal_161[0x00000001 /*3*/], fLocal_162[0x00000001]);
				func_65(func_66(0x00000003), vLocal_161[0x00000001 /*3*/], fLocal_162[0x00000001]);
				func_64(0x00000000, vLocal_161[0x00000000 /*3*/], fLocal_162[0x00000000], 0x00000001);
				func_64(0x00000001, vLocal_161[0x00000001 /*3*/], fLocal_162[0x00000001], 0x00000000);
				unk_0xA47B46945FF6DE74(func_63(0x00000000, 0x00000001), 265.408f, 151.2875f, 103.5673f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(func_63(0x00000000, 0x00000001), 217.1033f);
				unk_0xA47B46945FF6DE74(func_63(0x00000002, 0x00000001), 245.9477f, 72.661f, 89.1067f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(func_63(0x00000002, 0x00000001), 38.6283f);
				unk_0xA47B46945FF6DE74(func_63(0x00000003, 0x00000001), 244.1872f, 73.3336f, 89.0917f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(func_63(0x00000003, 0x00000001), 272.9875f);
				unk_0xC6EB89C59F2AF6B8(func_63(0x00000000, 0x00000001), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(func_63(0x00000001, 0x00000000), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(func_63(0x00000001, 0x00000001), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(func_63(0x00000002, 0x00000001), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(func_63(0x00000003, 0x00000001), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				iLocal_47 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_61(func_66(0x00000000), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0x00000000);
			func_61(func_68(0x00000001), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_61(func_66(0x00000001), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0x00000000);
			func_61(func_66(0x00000002), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0x00000000);
			func_61(func_66(0x00000003), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0x00000000);
			break;
		
		case 0x00000002:
			if (unk_0xC844350D5D58C99A(Local_109[0x00000002 /*18*/].f_2))
			{
				if (!unk_0x4FC40AB0ECCE6E18(Local_109[0x00000002 /*18*/].f_2))
				{
					unk_0x4A4806F9D471E491(Local_109[0x00000002 /*18*/].f_2, 0x00000001, 0x00000000);
				}
			}
			switch (iLocal_165)
			{
				case 0x00000000:
					if (!unk_0xEB6A8945D1AC98A1(func_63(0x00000001, 0x00000000)))
					{
						unk_0xA3BF0AA5A2608191(func_63(0x00000001, 0x00000000));
					}
					if (!unk_0xEB6A8945D1AC98A1(func_63(0x00000001, 0x00000001)))
					{
						unk_0xA3BF0AA5A2608191(func_63(0x00000001, 0x00000001));
					}
					if (!unk_0xC844350D5D58C99A(Local_108[0x00000002 /*18*/]))
					{
						func_64(0x00000002, vLocal_161[0x00000002 /*3*/], fLocal_162[0x00000002], 0x00000000);
						if (unk_0xDF1306B443CD3D15(Local_108[0x00000002 /*18*/], 0x00000000))
						{
							func_65(func_68(0x00000002), unk_0x68F4C0EC296D3901(Local_108[0x00000002 /*18*/], 0x00000001), 0f);
							unk_0xF821F915BC24D246(func_63(0x00000002, 0x00000000), Local_108[0x00000002 /*18*/], 0xFFFFFFFF);
						}
					}
					if (!unk_0xC844350D5D58C99A(Local_108[0x00000003 /*18*/]))
					{
						func_64(0x00000003, vLocal_161[0x00000003 /*3*/], fLocal_162[0x00000003], 0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1(func_63(0x00000002, 0x00000001)))
					{
						unk_0x96167B03C5A77156(func_63(0x00000002, 0x00000001), vLocal_156, 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					}
					if (!unk_0xEB6A8945D1AC98A1(func_63(0x00000003, 0x00000001)))
					{
						unk_0x96167B03C5A77156(func_63(0x00000003, 0x00000001), vLocal_157, 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					}
					if (!unk_0xC844350D5D58C99A(func_63(0x00000003, 0x00000000)))
					{
						func_65(func_68(0x00000003), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_56)
					{
						if (!unk_0xEB6A8945D1AC98A1(func_63(0x00000001, 0x00000000)))
						{
							unk_0x96167B03C5A77156(func_63(0x00000001, 0x00000000), vLocal_158, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
						}
						if (!unk_0xEB6A8945D1AC98A1(func_63(0x00000001, 0x00000001)))
						{
							unk_0x96167B03C5A77156(func_63(0x00000001, 0x00000001), vLocal_159, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
						}
						if (!unk_0xEB6A8945D1AC98A1(func_63(0x00000000, 0x00000001)))
						{
							unk_0x96167B03C5A77156(func_63(0x00000000, 0x00000001), vLocal_160, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
						}
					}
					SYSTEM::SETTIMERB(0x00000000);
					iVar1 = 0x00000000;
					while (iVar1 < Local_109)
					{
						if (unk_0xC844350D5D58C99A(Local_109[iVar1 /*18*/]))
						{
							unk_0x2E1E5367A885F9B7(Local_109[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0x00000000);
						}
						iVar1++;
					}
					iVar1 = 0x00000000;
					while (iVar1 < Local_108)
					{
						if (unk_0xC844350D5D58C99A(Local_108[iVar1 /*18*/]))
						{
							unk_0x2E1E5367A885F9B7(Local_108[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0x00000000);
						}
						iVar1++;
					}
					iLocal_165++;
					break;
				
				case 0x00000001:
					func_55();
					if ((unk_0xDF1306B443CD3D15(Local_108[0x00000000 /*18*/], 0x00000000) && !unk_0xEB6A8945D1AC98A1(func_63(0x00000000, 0x00000000))) && !unk_0xEB6A8945D1AC98A1(func_63(0x00000000, 0x00000001)))
					{
						if (!iLocal_152[0x00000001])
						{
							iLocal_152[0x00000001] = 0x00000001;
							unk_0xE9362E4D600DD12A(func_63(0x00000000, 0x00000000), Local_108[0x00000000 /*18*/], vLocal_154, 10f, 0x00000000, joaat("cavalcade2"), 0x000C0025, 2f, 10f);
						}
					}
					if ((unk_0xDF1306B443CD3D15(Local_108[0x00000002 /*18*/], 0x00000000) && !unk_0xEB6A8945D1AC98A1(func_63(0x00000002, 0x00000000))) && !unk_0xEB6A8945D1AC98A1(func_63(0x00000002, 0x00000001)))
					{
						if (!iLocal_152[0x00000000])
						{
							unk_0xE9362E4D600DD12A(func_63(0x00000002, 0x00000000), Local_108[0x00000002 /*18*/], vLocal_155, 10f, 0x00000000, joaat("cavalcade2"), 0x000C0025, 2f, 10f);
							iLocal_152[0x00000000] = 0x00000001;
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_67) && !unk_0xEB6A8945D1AC98A1(iLocal_67))
					{
						func_52(iLocal_67, 0x00000006);
						if (Global_3 || bLocal_56)
						{
							if (!unk_0xEB6A8945D1AC98A1(func_63(0x00000001, 0x00000000)))
							{
								if (unk_0x5A91F08DF773C39D(func_63(0x00000001, 0x00000000), vLocal_158, Global_16, 0x00000000, 0x00000001, 0x00000000))
								{
									func_51(iLocal_67, func_68(0x00000001));
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(func_63(0x00000001, 0x00000001)))
							{
								if (unk_0x5A91F08DF773C39D(func_63(0x00000001, 0x00000001), vLocal_159, Global_16, 0x00000000, 0x00000001, 0x00000000))
								{
									func_51(iLocal_67, func_66(0x00000001));
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(func_63(0x00000000, 0x00000001)))
							{
								if (unk_0x5A91F08DF773C39D(func_63(0x00000000, 0x00000001), vLocal_159, Global_16, 0x00000000, 0x00000001, 0x00000000))
								{
									func_51(iLocal_67, func_66(0x00000000));
								}
							}
						}
						else
						{
							func_52(iLocal_67, func_68(0x00000001));
							func_52(iLocal_67, func_66(0x00000001));
							if (SYSTEM::TIMERB() > 0x000003E8)
							{
								func_52(iLocal_67, func_68(0x00000001));
							}
						}
					}
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_70, 0x00000001), vLocal_68) < 9f)
					{
						if (unk_0x5A91F08DF773C39D(func_63(0x00000002, 0x00000001), vLocal_156, Global_16, 0x00000000, 0x00000001, 0x00000000))
						{
							func_51(iLocal_67, func_66(0x00000002));
						}
						if (unk_0x5A91F08DF773C39D(func_63(0x00000003, 0x00000001), vLocal_157, Global_16, 0x00000000, 0x00000001, 0x00000000))
						{
							func_51(iLocal_67, func_66(0x00000003));
						}
						if (unk_0x5A91F08DF773C39D(func_63(0x00000000, 0x00000001), vLocal_157, Global_16, 0x00000000, 0x00000001, 0x00000000))
						{
							func_51(iLocal_67, func_66(0x00000000));
						}
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_168, 0x00000003))
						{
							unk_0xA3BF0AA5A2608191(Local_109[func_66(0x00000003) /*18*/]);
							unk_0x5D96D8530B3D0904(&iLocal_168, 0x00000003);
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_168, 0x00000002))
						{
							unk_0xA3BF0AA5A2608191(Local_109[func_66(0x00000002) /*18*/]);
							unk_0x5D96D8530B3D0904(&iLocal_168, 0x00000002);
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_168, 0x00000000))
						{
							unk_0xA3BF0AA5A2608191(Local_109[func_66(0x00000000) /*18*/]);
							unk_0x5D96D8530B3D0904(&iLocal_168, 0x00000000);
						}
						if (Global_3 || bLocal_56)
						{
							func_51(iLocal_67, func_66(0x00000003));
						}
						else
						{
							func_52(iLocal_67, func_66(0x00000003));
						}
						func_52(iLocal_67, func_66(0x00000002));
						func_52(iLocal_67, func_66(0x00000000));
					}
					break;
			}
			func_50();
			break;
		
		case 0x00000003:
			func_55();
			if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
			{
				if (unk_0x9C66D99E63E8E24C(iLocal_70) < 1f)
				{
					fLocal_153 = (fLocal_153 + unk_0x6117725E0134737F());
				}
				else if (fLocal_153 > 0f)
				{
					fLocal_153 = 0f;
				}
			}
			iVar0 = 0x00000000;
			while (iVar0 < Local_108)
			{
				if (unk_0xC844350D5D58C99A(Local_108[iVar0 /*18*/]) && iLocal_45 != 0x00000006)
				{
					if ((iVar0 < 0x00000002 && ((iVar0 != iLocal_163 || !unk_0xC844350D5D58C99A(Local_108[0x00000000 /*18*/])) || !unk_0xC844350D5D58C99A(Local_108[0x00000001 /*18*/]))) && (unk_0x1C0640BA9A7327B3() - iLocal_164) > 0x000001F4)
					{
						if (SYSTEM::VDIST2(vLocal_52, vLocal_68) > 400f)
						{
							if (SYSTEM::VDIST2(vLocal_52, vLocal_68) < 62500f || (unk_0x1C0640BA9A7327B3() - iLocal_131) < 0x00007530)
							{
								func_46(Local_108[iVar0 /*18*/], iLocal_70, &(Local_108[iVar0 /*18*/].f_5), &(Local_108[iVar0 /*18*/].f_F), &(Local_108[iVar0 /*18*/].f_B), &(Local_108[iVar0 /*18*/].f_E), &(Local_108[iVar0 /*18*/].f_10), Local_108[iVar0 /*18*/].f_2, 0x00000320, 50f);
								iLocal_163 = iVar0;
								iLocal_164 = unk_0x1C0640BA9A7327B3();
							}
						}
					}
					iVar2 = func_68(iVar0);
					if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar2 /*18*/]))
					{
						iVar3 = func_66(iVar0);
					}
					else
					{
						iVar3 = func_68(iVar0);
					}
					switch (Local_108[iVar0 /*18*/].f_11)
					{
						case 0x00000000:
							if (unk_0xDF1306B443CD3D15(Local_108[iVar0 /*18*/], 0x00000000))
							{
								if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_108[iVar0 /*18*/], 0x00000000))
								{
									if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar2 /*18*/]))
									{
										if (!unk_0xC42A92762C58E1B9(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0x00000000))
										{
											if (unk_0xD1960163A3042274(Local_109[iVar2 /*18*/], 0x950B6492) != 0x00000001 && unk_0xBBA8A868118C90ED(Local_108[iVar0 /*18*/], 0xFFFFFFFF, 0x00000000))
											{
												unk_0x5B1D360B9C6F0A09(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0xFFFFFFFF, 0xFFFFFFFF, 2f, 0x00000001, 0x00000000);
											}
										}
									}
									if (iVar3 != 0xFFFFFFFF)
									{
										if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar3 /*18*/]))
										{
											if (!unk_0xC42A92762C58E1B9(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0x00000000))
											{
												if (unk_0xD1960163A3042274(Local_109[iVar3 /*18*/], 0x950B6492) != 0x00000001 && unk_0xBBA8A868118C90ED(Local_108[iVar0 /*18*/], 0x00000000, 0x00000000))
												{
													unk_0x5B1D360B9C6F0A09(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0xFFFFFFFF, 0x00000000, 2f, 0x00000001, 0x00000000);
												}
											}
										}
										if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar2 /*18*/]) && (iVar3 != 0xFFFFFFFF && !unk_0xEB6A8945D1AC98A1(Local_109[iVar3 /*18*/])))
										{
											if ((unk_0xC42A92762C58E1B9(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0x00000000) && (iVar3 != 0xFFFFFFFF && unk_0xC42A92762C58E1B9(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0x00000000))) && unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
											{
												if (unk_0xD1960163A3042274(Local_109[iVar2 /*18*/], 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(Local_109[iVar2 /*18*/], 0x93A5526E) != 0x00000001)
												{
													unk_0xAFF39FB306F8E232(Local_109[iVar2 /*18*/], 0x00000003, 0x00000000);
													unk_0xAFF39FB306F8E232(Local_109[iVar2 /*18*/], 0x00000001, 0x00000001);
													unk_0xAFF39FB306F8E232(Local_109[iVar2 /*18*/], 0x00000002, 0x00000000);
													if (iVar0 == 0x00000000)
													{
														unk_0x60274E99F9B27DEA(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 0x0000000A, 50f, 0x000C0027, 4f, 10f, 0x00000001);
													}
													else if (iVar0 == 0x00000001)
													{
														unk_0x60274E99F9B27DEA(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 0x0000000B, 50f, 0x000C0026, 4f, 10f, 0x00000001);
													}
													else if (iVar0 == 0x00000002)
													{
														unk_0x60274E99F9B27DEA(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 0x0000000A, 50f, 0x000C0027, 4f, 10f, 0x00000001);
													}
													else if (iVar0 == 0x00000003)
													{
														unk_0x60274E99F9B27DEA(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 0x0000000B, 50f, 0x000C0026, 4f, 10f, 0x00000001);
													}
												}
												unk_0x06736587AE5BE33B(Local_109[iVar2 /*18*/], func_45((3f * unk_0x0EB28750412C3A5A(vLocal_54, Local_108[iVar0 /*18*/].f_8, 0x00000001)), 50f, 120f));
											}
										}
									}
									if (fLocal_153 > 3f && SYSTEM::VDIST(Local_108[iVar0 /*18*/].f_8, vLocal_54) < 10f)
									{
										Local_108[iVar0 /*18*/].f_11 = 0x00000001;
									}
								}
							}
							else
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar2 /*18*/]))
								{
									if (!unk_0xE9FDA1035CFEA94F(Local_109[iVar2 /*18*/]))
									{
										unk_0xBAFED2F6486F771A(Local_109[iVar2 /*18*/], 0x00000002, 0x00000000);
										unk_0xF3268524E9BE6D6E(Local_109[iVar2 /*18*/], unk_0x16F2683693E537C9(), 300f, 0x000186A0, 0x00000000, 0x00000000);
									}
								}
								if (iVar3 != 0xFFFFFFFF)
								{
									if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar3 /*18*/]))
									{
										if (!unk_0xE9FDA1035CFEA94F(Local_109[iVar3 /*18*/]))
										{
											unk_0xBAFED2F6486F771A(Local_109[iVar3 /*18*/], 0x00000002, 0x00000000);
											unk_0xF3268524E9BE6D6E(Local_109[iVar3 /*18*/], unk_0x16F2683693E537C9(), 300f, 0x000186A0, 0x00000000, 0x00000000);
										}
									}
								}
							}
							break;
						
						case 0x00000001:
							if (unk_0x405E212DDE472467(Local_109[iVar2 /*18*/], 0x00000000))
							{
								unk_0x75CDA8644CD3B5F5(Local_109[iVar2 /*18*/], 0x00000001, 0x00000100);
							}
							else
							{
								func_52(iLocal_67, iVar2);
							}
							if (iVar3 != 0xFFFFFFFF)
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar3 /*18*/]))
								{
									if (unk_0x405E212DDE472467(Local_109[iVar3 /*18*/], 0x00000000))
									{
										unk_0x75CDA8644CD3B5F5(Local_109[iVar3 /*18*/], 0x00000000, 0x00000100);
									}
									else
									{
										func_52(iLocal_67, iVar3);
									}
								}
							}
							if (unk_0xDF1306B443CD3D15(Local_108[iVar0 /*18*/], 0x00000000))
							{
								if (SYSTEM::VDIST(Local_108[iVar0 /*18*/].f_8, vLocal_54) > 15f)
								{
									Local_108[iVar0 /*18*/].f_11 = 0x00000000;
								}
							}
							break;
					}
					if ((!unk_0xEB6A8945D1AC98A1(Local_109[iVar2 /*18*/]) && (iVar3 == 0xFFFFFFFF || !unk_0xEB6A8945D1AC98A1(Local_109[iVar3 /*18*/]))) && unk_0xDF1306B443CD3D15(Local_108[iVar0 /*18*/], 0x00000000))
					{
						iVar4 = 0x00000001;
						if (!unk_0x03068588A1FCED1A(Local_109[iVar2 /*18*/]))
						{
							iVar4 = 0x00000000;
						}
						if (iVar3 != 0xFFFFFFFF)
						{
							if (!unk_0x03068588A1FCED1A(Local_109[iVar3 /*18*/]))
							{
								iVar4 = 0x00000000;
							}
						}
						if (!unk_0x03068588A1FCED1A(Local_108[iVar0 /*18*/]))
						{
							iVar4 = 0x00000000;
						}
						if ((iVar4 && SYSTEM::VDIST(vLocal_52, Local_108[iVar0 /*18*/].f_8) > 25f) && SYSTEM::VDIST(vLocal_52, Local_109[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0xC42A92762C58E1B9(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0x00000000))
							{
								unk_0xF821F915BC24D246(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0xFFFFFFFF);
							}
							if (iVar3 != 0xFFFFFFFF)
							{
								if (!unk_0xC42A92762C58E1B9(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0x00000000))
								{
									unk_0xF821F915BC24D246(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0x00000000);
								}
							}
						}
					}
					if (func_44(iVar0, 0x43160000))
					{
						func_43(iVar0);
					}
				}
				func_50();
				func_35();
				iVar0++;
			}
			break;
		
		case 0x00000004:
			func_55();
			if (!iLocal_167)
			{
				iVar0 = 0x00000000;
				while (iVar0 < Local_108)
				{
					iVar5 = func_68(iVar0);
					if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar5 /*18*/]))
					{
						iVar6 = func_66(iVar0);
					}
					else
					{
						iVar6 = func_68(iVar0);
					}
					if (unk_0xDF1306B443CD3D15(Local_108[iVar0 /*18*/], 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar5 /*18*/]))
						{
							if (!unk_0xC42A92762C58E1B9(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], 0x00000000))
							{
								if (unk_0xD1960163A3042274(Local_109[iVar5 /*18*/], 0x950B6492) != 0x00000001)
								{
									unk_0x5B1D360B9C6F0A09(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], 0xFFFFFFFF, 0xFFFFFFFF, 2f, 0x00000001, 0x00000000);
								}
							}
						}
						if (iVar6 != 0xFFFFFFFF)
						{
							if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar6 /*18*/]))
							{
								if (!unk_0xC42A92762C58E1B9(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], 0x00000000))
								{
									if (unk_0xD1960163A3042274(Local_109[iVar6 /*18*/], 0x950B6492) != 0x00000001)
									{
										unk_0x5B1D360B9C6F0A09(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], 0xFFFFFFFF, 0x00000000, 2f, 0x00000001, 0x00000000);
									}
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar5 /*18*/]) && (iVar6 != 0xFFFFFFFF && !unk_0xEB6A8945D1AC98A1(Local_109[iVar6 /*18*/])))
							{
								if ((unk_0xC42A92762C58E1B9(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], 0x00000000) && (iVar6 != 0xFFFFFFFF && unk_0xC42A92762C58E1B9(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], 0x00000000))) && unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
								{
									fVar7 = func_45((70f - (SYSTEM::TO_FLOAT((unk_0x1C0640BA9A7327B3() - iLocal_66)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x1C0640BA9A7327B3() - iLocal_66) > 0x00000FA0)
									{
										unk_0xE76AF7E1683414C6(Local_109[iVar5 /*18*/], fVar7);
										iVar8 = 0x00000000;
										while (iVar8 < Local_108)
										{
											if ((unk_0xDF1306B443CD3D15(Local_108[iVar8 /*18*/], 0x00000000) && !unk_0xEB6A8945D1AC98A1(func_63(iVar8, 0x00000000))) && unk_0xC42A92762C58E1B9(func_63(iVar8, 0x00000000), Local_108[iVar8 /*18*/], 0x00000000))
											{
												unk_0xA3BF0AA5A2608191(func_63(iVar8, 0x00000000));
												unk_0x60274E99F9B27DEA(func_63(iVar8, 0x00000000), Local_108[iVar8 /*18*/], 0x00000000, 0x00000005, 10f, 0x000C0024, 10f, 10f, 0x00000001);
											}
											iVar8++;
										}
										iLocal_167 = 0x00000001;
									}
									else if (unk_0xD1960163A3042274(Local_109[iVar5 /*18*/], 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(Local_109[iVar5 /*18*/], 0x93A5526E) != 0x00000001)
									{
										unk_0xAFF39FB306F8E232(Local_109[iVar5 /*18*/], 0x00000003, 0x00000000);
										unk_0xAFF39FB306F8E232(Local_109[iVar5 /*18*/], 0x00000001, 0x00000001);
										unk_0xAFF39FB306F8E232(Local_109[iVar5 /*18*/], 0x00000002, 0x00000000);
										if (iVar0 == 0x00000000)
										{
											unk_0x60274E99F9B27DEA(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 0x0000000A, fVar7, 0x000C0027, 4f, 10f, 0x00000001);
										}
										else if (iVar0 == 0x00000001)
										{
											unk_0x60274E99F9B27DEA(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 0x0000000B, fVar7, 0x000C0026, 4f, 10f, 0x00000001);
										}
										else if (iVar0 == 0x00000002)
										{
											unk_0x60274E99F9B27DEA(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 0x0000000A, fVar7, 0x000C0027, 4f, 10f, 0x00000001);
										}
										else if (iVar0 == 0x00000003)
										{
											unk_0x60274E99F9B27DEA(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 0x0000000B, fVar7, 0x000C0026, 4f, 10f, 0x00000001);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar5 /*18*/]))
						{
							if (!unk_0xE9FDA1035CFEA94F(Local_109[iVar5 /*18*/]))
							{
								unk_0xBAFED2F6486F771A(Local_109[iVar5 /*18*/], 0x00000002, 0x00000000);
								unk_0xF3268524E9BE6D6E(Local_109[iVar5 /*18*/], unk_0x16F2683693E537C9(), 300f, 0x000186A0, 0x00000000, 0x00000000);
							}
						}
						if (iVar6 != 0xFFFFFFFF)
						{
							if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar6 /*18*/]))
							{
								if (!unk_0xE9FDA1035CFEA94F(Local_109[iVar6 /*18*/]))
								{
									unk_0xBAFED2F6486F771A(Local_109[iVar6 /*18*/], 0x00000002, 0x00000000);
									unk_0xF3268524E9BE6D6E(Local_109[iVar6 /*18*/], unk_0x16F2683693E537C9(), 300f, 0x000186A0, 0x00000000, 0x00000000);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_44(iLocal_166, 10f))
				{
					func_43(iLocal_166);
				}
				iLocal_166++;
				if (iLocal_166 > 0x00000003)
				{
					iLocal_166 = 0x00000000;
				}
			}
			func_50();
			func_35();
			break;
		
		case 0x00000006:
			if (func_44(iLocal_166, 0x43160000))
			{
				func_43(iLocal_166);
			}
			iLocal_166++;
			if (iLocal_166 > 0x00000003)
			{
				iLocal_166 = 0x00000000;
			}
			break;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]) && !unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/]))
		{
			if (iLocal_47 > 0x00000001)
			{
				if (!unk_0xEA6BC48857E0AC4C(sLocal_134))
				{
					func_34(iVar0);
					if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/].f_2) && unk_0xD59B17D2DFF98E26(Local_109[iVar0 /*18*/].f_2))
					{
						if (!unk_0x405E212DDE472467(Local_109[iVar0 /*18*/], 0x00000000))
						{
							if (unk_0x4FC40AB0ECCE6E18(Local_109[iVar0 /*18*/].f_2))
							{
								if (unk_0xA48EBBEA418ADC94(Local_109[iVar0 /*18*/]))
								{
									unk_0x4A4806F9D471E491(Local_109[iVar0 /*18*/].f_2, 0x00000000, 0x00000000);
								}
							}
							else if (!unk_0xA48EBBEA418ADC94(Local_109[iVar0 /*18*/]))
							{
								unk_0x4A4806F9D471E491(Local_109[iVar0 /*18*/].f_2, 0x00000001, 0x00000000);
							}
							if (!unk_0x03068588A1FCED1A(Local_109[iVar0 /*18*/]))
							{
								if (!unk_0xB4ECF989E2C1DAC8(Local_109[iVar0 /*18*/], sLocal_134, func_33(iVar0), 0x00000003))
								{
									if (!Local_109[iVar0 /*18*/].f_B)
									{
										if (!unk_0xB4ECF989E2C1DAC8(Local_109[iVar0 /*18*/], sLocal_134, "grip", 0x00000003))
										{
											unk_0xC6EB89C59F2AF6B8(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, 0xFFFFFFFF, 0x00000039, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											Local_109[iVar0 /*18*/].f_B = 0x00000001;
										}
									}
								}
								else if (Local_109[iVar0 /*18*/].f_B)
								{
									unk_0xC6EB89C59F2AF6B8(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, 0xFFFFFFFF, 0x00000030, 0.99f, 0x00000000, 0x00000000, 0x00000000);
									Local_109[iVar0 /*18*/].f_B = 0x00000000;
								}
							}
							if (!Local_109[iVar0 /*18*/].f_A)
							{
								unk_0x4942FBD1EF896E39(sLocal_134);
								if (unk_0xDF3FDDA1EADEDD07(sLocal_134))
								{
									unk_0x9237814869823B3E(Local_109[iVar0 /*18*/], sLocal_134);
									Local_109[iVar0 /*18*/].f_A = 0x00000001;
								}
							}
						}
						else
						{
							if (Local_109[iVar0 /*18*/].f_B)
							{
								unk_0xC6EB89C59F2AF6B8(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, 0xFFFFFFFF, 0x00000030, 0.99f, 0x00000000, 0x00000000, 0x00000000);
								Local_109[iVar0 /*18*/].f_B = 0x00000000;
							}
							if (Local_109[iVar0 /*18*/].f_A)
							{
								unk_0xAB690CF5866CB826(Local_109[iVar0 /*18*/]);
								Local_109[iVar0 /*18*/].f_A = 0x00000000;
							}
						}
						if (unk_0x0E0E6175453415CB(Local_109[iVar0 /*18*/]) && func_32(Local_109[iVar0 /*18*/], unk_0x6937EA2286828455(Local_109[iVar0 /*18*/], 0x00000000)) == 0xFFFFFFFF)
						{
							if (unk_0x4FC40AB0ECCE6E18(Local_109[iVar0 /*18*/].f_2))
							{
								unk_0x4A4806F9D471E491(Local_109[iVar0 /*18*/].f_2, 0x00000000, 0x00000000);
							}
						}
						else if (!unk_0x4FC40AB0ECCE6E18(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0x4A4806F9D471E491(Local_109[iVar0 /*18*/].f_2, 0x00000001, 0x00000000);
						}
					}
					else
					{
						if (Local_109[iVar0 /*18*/].f_B)
						{
							unk_0xC6EB89C59F2AF6B8(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, 0xFFFFFFFF, 0x00000030, 0.99f, 0x00000000, 0x00000000, 0x00000000);
							Local_109[iVar0 /*18*/].f_B = 0x00000000;
						}
						if (Local_109[iVar0 /*18*/].f_A)
						{
							unk_0xAB690CF5866CB826(Local_109[iVar0 /*18*/]);
							Local_109[iVar0 /*18*/].f_A = 0x00000000;
						}
					}
				}
			}
			if (iLocal_45 != 0x00000007)
			{
				if (unk_0x36646919F20EAFFC(Local_109[iVar0 /*18*/]) && unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
				{
					func_189(0x00000007);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_45 != 0x00000007)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Local_108)
		{
			if (unk_0xC844350D5D58C99A(Local_108[iVar0 /*18*/]))
			{
				if (unk_0xDF1306B443CD3D15(Local_108[iVar0 /*18*/], 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_108[iVar0 /*18*/], 0x00000000))
					{
						func_189(0x00000007);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_32(int iParam0, int iParam1)
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

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000005:
			return "idle_a";
			break;
		
		case 0x00000001:
		case 0x00000006:
			return "idle_b";
			break;
		
		case 0x00000002:
		case 0x00000007:
			return "idle_c";
			break;
		
		case 0x00000003:
			return "idle_d";
			break;
		
		case 0x00000004:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_109[iParam0 /*18*/].f_F, iVar0))
		{
			iVar1 = 0x00000005;
			iVar2 = (iVar1 + iLocal_136);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0xB4ECF989E2C1DAC8(Local_109[iParam0 /*18*/], sLocal_134, func_33(iParam0), 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(Local_109[iParam0 /*18*/], sLocal_134, func_33(iParam0)) > 0.9f)
					{
						unk_0x0674E58A79778E99(&(Local_109[iParam0 /*18*/].f_F), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0xB4ECF989E2C1DAC8(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[(iVar3 - iVar1)], 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0x0674E58A79778E99(&(Local_109[iParam0 /*18*/].f_F), iVar0);
					}
				}
			}
			else if (!unk_0xB4ECF989E2C1DAC8(Local_109[iParam0 /*18*/], sLocal_134, "grip", 0x00000003))
			{
				unk_0x0674E58A79778E99(&(Local_109[iParam0 /*18*/].f_F), iVar0);
			}
		}
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
	{
		iVar0 = func_66(iLocal_149);
		if (((unk_0xC844350D5D58C99A(Local_108[iLocal_149 /*18*/]) && unk_0xDF1306B443CD3D15(Local_108[iLocal_149 /*18*/], 0x00000000)) && unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/])) && !unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/]))
		{
			if (unk_0x4906F8A34E9F4814(Local_108[iLocal_149 /*18*/], joaat("cavalcade2")))
			{
				if (SYSTEM::VDIST2(Local_109[iVar0 /*18*/].f_6, vLocal_53) < SYSTEM::POW(30f, 2f) && unk_0xA30B8362589C124A(Local_108[iLocal_149 /*18*/], 0x00000000, 0x00000000) == Local_109[iVar0 /*18*/])
				{
					if (!Local_109[iVar0 /*18*/].f_9)
					{
						if (!func_42(iVar0))
						{
							func_36(iVar0);
						}
					}
					else if (!func_42(iVar0) && (unk_0x1C0640BA9A7327B3() - Local_109[iVar0 /*18*/].f_D) > 0x000003E8)
					{
						if (!unk_0xB4ECF989E2C1DAC8(Local_109[iVar0 /*18*/], sLocal_135, "base", 0x00000003))
						{
							unk_0xC6EB89C59F2AF6B8(Local_109[iVar0 /*18*/], sLocal_135, "base", 8f, 1000f, 0xFFFFFFFF, 0x00000010, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
				}
			}
			else if (!Local_109[iVar0 /*18*/].f_9)
			{
				if (SYSTEM::VDIST2(Local_109[iVar0 /*18*/].f_6, vLocal_53) < SYSTEM::POW(30f, 2f) && unk_0xA30B8362589C124A(Local_108[iLocal_149 /*18*/], 0x00000000, 0x00000000) == Local_109[iVar0 /*18*/])
				{
					unk_0xBFD82EF80A8224A7(Local_109[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", 0xFFFFFFFF, iLocal_67, 0x3FC8F5C3, 0x3E800000);
					Local_109[iVar0 /*18*/].f_9 = 0x00000001;
					Local_109[iVar0 /*18*/].f_D = unk_0x1C0640BA9A7327B3();
				}
			}
			else if (Local_109[iVar0 /*18*/].f_9)
			{
				if ((unk_0x1C0640BA9A7327B3() - Local_109[iVar0 /*18*/].f_D) > 0x000007D0)
				{
					Local_109[iVar0 /*18*/].f_9 = 0x00000000;
				}
			}
		}
		iLocal_149++;
		if (iLocal_149 >= Local_108)
		{
			iLocal_149 = 0x00000000;
		}
	}
}

void func_36(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(Local_109[iParam0 /*18*/]) && !unk_0xEB6A8945D1AC98A1(iLocal_67))
	{
		iVar0 = 0x0000000F;
		vVar1 = { vLocal_53 - Local_109[iParam0 /*18*/].f_6 };
		vVar2 = { unk_0x08D89CE2E20AE305(Local_109[iParam0 /*18*/]) };
		fVar3 = func_40(vVar2, vVar1);
		if (unk_0x755FF954DAE327E1(fVar3) < 10f)
		{
			iVar0 = 0x00000005;
		}
		else if (fVar3 >= 10f && fVar3 < 60f)
		{
			iVar0 = 0x00000007;
		}
		else if (fVar3 >= 60f && fVar3 < 100f)
		{
			iVar0 = 0x00000006;
		}
		else if (fVar3 <= -10f && fVar3 > -60f)
		{
			iVar0 = 0x0000000A;
		}
		else if (fVar3 < -60f && fVar3 > -100f)
		{
			iVar0 = 0x00000009;
		}
		if (iVar0 != 0x0000000F)
		{
			func_37(iParam0, iVar0);
		}
	}
}

void func_37(int iParam0, int iParam1)
{
	if (iParam1 < 0x0000000F)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_109[iParam0 /*18*/].f_F, iParam1))
		{
			if (func_39(iParam1))
			{
				unk_0xC6EB89C59F2AF6B8(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[func_38(iParam1)], 4f, -4f, 0xFFFFFFFF, 0x00000010, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (iParam1 < 0x00000005)
			{
				unk_0xC6EB89C59F2AF6B8(Local_109[iParam0 /*18*/], sLocal_134, func_33(iParam0), 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(Local_109[iParam0 /*18*/], sLocal_134, "grip", 1000f, -1000f, 0xFFFFFFFF, 0x00000039, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			Local_109[iParam0 /*18*/].f_F = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Local_109[iParam0 /*18*/].f_F), iParam1);
		}
	}
}

int func_38(int iParam0)
{
	return (iParam0 - 0x00000005);
}

bool func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 0x00000005 && iVar0 < (0x00000005 + iLocal_136));
}

float func_40(vector3 vParam0, vector3 vParam1)
{
	float fVar0;
	
	vParam0 = { func_41(vParam0) };
	vParam1 = { func_41(vParam1) };
	fVar0 = (unk_0x5D8ABF6396A76564(vParam1.y, vParam1.x) - unk_0x5D8ABF6396A76564(vParam0.y, vParam0.x));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_41(vector3 vParam0)
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

bool func_42(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sLocal_135))
	{
		iVar1 = 0x00000005;
		while (iVar1 <= 0x0000000D)
		{
			if (!bVar0)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_109[iParam0 /*18*/].f_F, iVar1))
				{
					bVar0 = 0x00000001;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(Local_108[iParam0 /*18*/]) && unk_0x03068588A1FCED1A(Local_108[iParam0 /*18*/]))
	{
		unk_0xA954465BA6FDEFE2(&(Local_108[iParam0 /*18*/]));
	}
	if (unk_0xE4EDC4B0E92C078B(Local_108[iParam0 /*18*/].f_1))
	{
		unk_0x142CC44DB769B57E(&(Local_108[iParam0 /*18*/].f_1));
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		if (iVar0 == 0x00000001)
		{
			iVar1 = func_66(iParam0);
		}
		else
		{
			iVar1 = func_68(iParam0);
		}
		if (unk_0xC844350D5D58C99A(Local_109[iVar1 /*18*/]) && unk_0x03068588A1FCED1A(Local_109[iVar1 /*18*/]))
		{
			if (unk_0xC844350D5D58C99A(Local_109[iVar1 /*18*/]))
			{
				unk_0xF690C84DADBB3551(&(Local_109[iVar1 /*18*/].f_2));
			}
			if (unk_0xE4EDC4B0E92C078B(Local_109[iVar1 /*18*/].f_1))
			{
				unk_0x142CC44DB769B57E(&(Local_109[iVar1 /*18*/].f_1));
			}
			unk_0xEBA53F35D0085654(&(Local_109[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_44(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0x00000001;
	if (unk_0xC844350D5D58C99A(Local_108[iParam0 /*18*/]))
	{
		if (unk_0xDF1306B443CD3D15(Local_108[iParam0 /*18*/], 0x00000000))
		{
			if (SYSTEM::VDIST2(vLocal_52, Local_108[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0x03068588A1FCED1A(Local_108[iParam0 /*18*/]))
			{
				iVar0 = 0x00000000;
			}
		}
	}
	if (unk_0xC844350D5D58C99A(func_63(iParam0, 0x00000000)))
	{
		if (!unk_0xEB6A8945D1AC98A1(func_63(iParam0, 0x00000000)))
		{
			if (SYSTEM::VDIST2(vLocal_52, Local_109[func_68(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x03068588A1FCED1A(func_63(iParam0, 0x00000000)))
			{
				iVar0 = 0x00000000;
			}
		}
	}
	if (unk_0xC844350D5D58C99A(func_63(iParam0, 0x00000001)))
	{
		if (!unk_0xEB6A8945D1AC98A1(func_63(iParam0, 0x00000001)))
		{
			if (SYSTEM::VDIST2(vLocal_52, Local_109[func_66(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x03068588A1FCED1A(func_63(iParam0, 0x00000001)))
			{
				iVar0 = 0x00000000;
			}
		}
	}
	return iVar0;
}

float func_45(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_46(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (((((unk_0xC844350D5D58C99A(iParam1) && iParam0 != iParam1) && !unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam1)))
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam1, 0x00000001), *uParam4, 0x00000001) > 20f)
			{
				if (func_49(iParam0, iParam1, iLocal_119, unk_0x68F4C0EC296D3901(iParam1, 0x00000001), unk_0x835730A2D89F6093(iParam1, 0x00000002)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0x8A5E176FF719A014(*uParam2, *uParam3, vParam7) };
					*uParam4 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
					*uParam5 = unk_0xD9522BA9E27E1349(iParam1);
				}
			}
			if (!unk_0x03068588A1FCED1A(iParam0))
			{
				*uParam6 = unk_0x1C0640BA9A7327B3();
			}
			else if ((unk_0x1C0640BA9A7327B3() - *uParam6) > iParam8)
			{
				if ((func_48(iParam0, iParam1, 0x00000001) > fParam9 && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam1, 0x00000001), *uParam2, 0x00000001) > 20f) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), *uParam2) > 100f)
				{
					if (!func_47(*uParam2))
					{
						if (!unk_0x8E28E832BEAC3DCE(*uParam2, 6f))
						{
							unk_0x745CE398A4B0A3C6(*uParam2, 6f, 0x00000000);
							unk_0x28F5E4DA506AC0CA(*uParam2, 6f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xA47B46945FF6DE74(iParam0, *uParam2, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iParam0, *uParam3);
							unk_0xB9FD7450C0DAB575(iParam0, 0x40A00000);
							unk_0x1AEF7184B203A58D(iParam0, func_45((unk_0x9C66D99E63E8E24C(iParam1) + 10f), 10f, 60f));
							unk_0x56FDC9ADE35F7DB0(iParam0, 0x00000001, 0x00000001, 0x00000000);
							*uParam6 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x1C0640BA9A7327B3();
		}
	}
}

int func_47(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_48(int iParam0, int iParam1, int iParam2)
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

int func_49(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar3, &vVar4);
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam1), &vVar5, &uVar6);
		fVar7 = unk_0x755FF954DAE327E1((vVar4.z - vVar3.z));
		fVar8 = unk_0x755FF954DAE327E1((vVar4.x - vVar3.x));
		fVar9 = unk_0x755FF954DAE327E1((vVar4.y - vVar3.y));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - unk_0x755FF954DAE327E1(vVar3.z));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - unk_0x755FF954DAE327E1(vVar3.x));
		}
		vVar12.z = (vVar12.z + (vVar5.z - vVar3.z));
		unk_0xA47B46945FF6DE74(iParam2, vParam3, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xC023D1C4BF532815(iParam2, vParam4, 0x00000002, 0x00000001);
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(iParam2, Vector((fVar11 * 1.25f), ((fVar9 / 2f) - (fVar10 * 0.75f)), 0f) + vVar12) };
		vVar2 = { unk_0x68E4ADDDDCD7BDDE(iParam2, Vector((fVar11 * 1.25f), ((-fVar9 / 2f) + (fVar10 * 0.75f)), 0f) + vVar12) };
		iVar17 = unk_0x6D4C9F7CF124AE37(vVar2, vVar1, fVar10, 0x00000013, unk_0x16F2683693E537C9(), 0x00000004);
		if (unk_0x1EC301670B54C6DE(iVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 0x00000002)
		{
		}
		if (iVar13 != 0x00000000)
		{
			iVar0 = 0x00000000;
		}
		else
		{
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

void func_50()
{
	bool bVar0;
	
	if ((unk_0x1C0640BA9A7327B3() - iLocal_148) > 0x00000064)
	{
		if ((unk_0x1C0640BA9A7327B3() - Local_109[iLocal_147 /*18*/].f_C) > 0x000001F4)
		{
			if (unk_0xC844350D5D58C99A(Local_109[iLocal_147 /*18*/]) && !unk_0xEB6A8945D1AC98A1(Local_109[iLocal_147 /*18*/]))
			{
				bVar0 = 0x00000001;
				if (!Local_109[iLocal_147 /*18*/].f_9 && unk_0x405E212DDE472467(Local_109[iLocal_147 /*18*/], 0x00000000))
				{
					bVar0 = 0x00000000;
				}
				if (bVar0)
				{
					if (((unk_0xB4ECF989E2C1DAC8(Local_109[iLocal_147 /*18*/], sLocal_134, func_33(iLocal_147), 0x00000003) && unk_0x8CA9406E01C7EE58(Local_109[iLocal_147 /*18*/], sLocal_134, func_33(iLocal_147)) > 0.5f) && unk_0x8CA9406E01C7EE58(Local_109[iLocal_147 /*18*/], sLocal_134, func_33(iLocal_147)) < 0.75f) || Local_109[iLocal_147 /*18*/].f_9)
					{
						unk_0xE81656B429E5C4B5("scr_rcpap1_camera", Local_109[iLocal_147 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
						if ((iLocal_147 % 0x00000003) == 0x00000000)
						{
							unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "SHUTTER_FLASH", unk_0x68F4C0EC296D3901(Local_109[iLocal_147 /*18*/].f_2, 0x00000001), "CAMERA_FLASH_SOUNDSET", 0x00000000, 0x00000000, 0x00000000);
						}
						else if ((iLocal_147 % 0x00000003) == 0x00000001)
						{
							unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "SHUTTER", unk_0x68F4C0EC296D3901(Local_109[iLocal_147 /*18*/].f_2, 0x00000001), "CAMERA_FLASH_SOUNDSET", 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "FLASH", unk_0x68F4C0EC296D3901(Local_109[iLocal_147 /*18*/].f_2, 0x00000001), "CAMERA_FLASH_SOUNDSET", 0x00000000, 0x00000000, 0x00000000);
						}
						Local_109[iLocal_147 /*18*/].f_C = unk_0x1C0640BA9A7327B3();
					}
					iLocal_148 = unk_0x1C0640BA9A7327B3();
				}
			}
			iLocal_147++;
			if (iLocal_147 >= Local_109)
			{
				iLocal_147 = 0x00000000;
			}
		}
	}
}

void func_51(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(Local_109[iParam1 /*18*/]) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x7069CC4DE1EA3FAA(Local_109[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0xD1960163A3042274(Local_109[iParam1 /*18*/], 0xCBCE4595) != 0x00000001)
			{
				unk_0xF96A174EE26D7588(Local_109[iParam1 /*18*/], iParam0, 0x00000000);
			}
		}
		else if ((unk_0x1C0640BA9A7327B3() - Local_109[iParam1 /*18*/].f_D) > 0x000007D0)
		{
			if (!unk_0xB4ECF989E2C1DAC8(Local_109[iParam1 /*18*/], sLocal_134, func_33(iParam1), 0x00000003))
			{
				unk_0xC6EB89C59F2AF6B8(Local_109[iParam1 /*18*/], sLocal_134, func_33(iParam1), 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				Local_109[iParam1 /*18*/].f_D = unk_0x1C0640BA9A7327B3();
			}
		}
	}
}

void func_52(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(Local_109[iParam1 /*18*/]) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, func_54(iParam1)) };
		switch (Local_109[iParam1 /*18*/].f_10)
		{
			case 0x00000000:
				func_53(vVar0, iParam1, iParam0);
				Local_109[iParam1 /*18*/].f_10++;
				break;
			
			case 0x00000001:
				if (unk_0xD1960163A3042274(Local_109[iParam1 /*18*/], 0x2A89B8A7) != 0x00000001 || SYSTEM::VDIST(vVar0, Local_109[iParam1 /*18*/].f_6) > 5f)
				{
					Local_109[iParam1 /*18*/].f_10++;
				}
				break;
			
			case 0x00000002:
				if (SYSTEM::VDIST(vVar0, Local_109[iParam1 /*18*/].f_6) > 10f)
				{
					func_53(vVar0, iParam1, iParam0);
					Local_109[iParam1 /*18*/].f_10++;
				}
				else
				{
					func_51(iParam0, iParam1);
				}
				break;
			
			case 0x00000003:
				if (SYSTEM::VDIST2(vVar0, Local_109[iParam1 /*18*/].f_3) > 25f)
				{
					func_53(vVar0, iParam1, iParam0);
				}
				if (unk_0xD1960163A3042274(Local_109[iParam1 /*18*/], 0x2A89B8A7) != 0x00000001)
				{
					Local_109[iParam1 /*18*/].f_10 = (Local_109[iParam1 /*18*/].f_10 - 0x00000001);
				}
				break;
			}
	}
}

void func_53(vector3 vParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { func_41(unk_0x68F4C0EC296D3901(iParam2, 0x00000001) - vParam0) };
	fVar1 = unk_0xE7D606C557C86100(vVar0.x, vVar0.y);
	Local_109[iParam1 /*18*/].f_3 = { vParam0 };
	unk_0xA3BF0AA5A2608191(Local_109[iParam1 /*18*/]);
	if (SYSTEM::VDIST(vParam0, Local_109[iParam1 /*18*/].f_6) < 2f)
	{
		unk_0x96167B03C5A77156(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 1f, 0xFFFFFFFF, 0.5f, 0x00000200, fVar1);
	}
	else
	{
		unk_0x96167B03C5A77156(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 2f, 0xFFFFFFFF, 0.5f, 0x00000200, fVar1);
	}
}

Vector3 func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 0x00000001:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 0x00000002:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 0x00000003:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 0x00000004:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 0x00000005:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 0x00000006:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 0x00000007:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_55()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if (unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*18*/].f_1))
		{
			if (unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/]))
			{
				unk_0x142CC44DB769B57E(&(Local_109[iVar0 /*18*/].f_1));
			}
			else if (unk_0x405E212DDE472467(Local_109[iVar0 /*18*/], 0x00000000))
			{
				unk_0x142CC44DB769B57E(&(Local_109[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/]) && !unk_0x405E212DDE472467(Local_109[iVar0 /*18*/], 0x00000000))
		{
			Local_109[iVar0 /*18*/].f_1 = func_191(Local_109[iVar0 /*18*/], 0x00000001, 0x00000091);
			unk_0xDC5B2F9D0CCE3A10(Local_109[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_108)
	{
		if (unk_0xDF1306B443CD3D15(Local_108[iVar0 /*18*/], 0x00000000))
		{
			if (unk_0xE4EDC4B0E92C078B(Local_108[iVar0 /*18*/].f_1))
			{
				vVar1 = { unk_0xAC14F6E4B17D7835(Local_108[iVar0 /*18*/].f_1) };
				vVar2 = { Local_108[iVar0 /*18*/].f_8 };
				vVar1.x = (vVar1.x + ((vVar2.x - vVar1.x) / 10f));
				vVar1.y = (vVar1.y + ((vVar2.y - vVar1.y) / 10f));
				vVar1.z = (vVar1.z + ((vVar2.z - vVar1.z) / 10f));
				unk_0x2F9282246F89FFD1(Local_108[iVar0 /*18*/].f_1, vVar1);
				if (func_58(Local_108[iVar0 /*18*/], 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
				{
					unk_0x142CC44DB769B57E(&(Local_108[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_58(Local_108[iVar0 /*18*/], 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
			{
				Local_108[iVar0 /*18*/].f_1 = func_56(Local_108[iVar0 /*18*/].f_8, 0x00000000);
				unk_0x61755AC17D8F538E(Local_108[iVar0 /*18*/].f_1, 0x00000001);
				unk_0xDC5B2F9D0CCE3A10(Local_108[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0x2A065371C9D96655(Local_108[iVar0 /*18*/].f_1, 0x00000009);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0x142CC44DB769B57E(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

int func_56(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_57(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam1);
	return iVar0;
}

float func_57(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_58(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			iVar2 = func_60(iParam0, (iVar0 - 0x00000001), bParam6, iParam7);
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
						if (((!unk_0xEB6A8945D1AC98A1(iVar2) && iVar3 != func_11()) && func_59(iVar3, 0x00000001, 0x00000001)) || iParam8)
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

int func_59(int iParam0, bool bParam1, bool bParam2)
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

int func_60(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_61(int iParam0, vector3 vParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(Local_109[iParam0 /*18*/]))
	{
		if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(Local_109[iParam0 /*18*/], 0x00000001), vParam1) > 1.5f)
		{
			if (unk_0xD1960163A3042274(Local_109[iParam0 /*18*/], 0x2A89B8A7) != 0x00000001)
			{
				unk_0x96167B03C5A77156(Local_109[iParam0 /*18*/], vParam1, 2f, 0xFFFFFFFF, 0.25f, 0x00000000, fParam2);
			}
		}
		else if (unk_0x755FF954DAE327E1((func_62(unk_0xD9522BA9E27E1349(Local_109[iParam0 /*18*/])) - func_62(fParam2))) > 10f)
		{
			if (unk_0xD1960163A3042274(Local_109[iParam0 /*18*/], 0x7276D3DF) != 0x00000001)
			{
				unk_0xE655C47E46F9A7E4(Local_109[iParam0 /*18*/], fParam2, 0x00000000);
			}
		}
		else
		{
			switch (Local_109[iParam0 /*18*/].f_10)
			{
				case 0x00000000:
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						if (!unk_0xB4ECF989E2C1DAC8(Local_109[iParam0 /*18*/], sParam3, sParam4, 0x00000003))
						{
							unk_0xC6EB89C59F2AF6B8(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (!unk_0xB4ECF989E2C1DAC8(Local_109[iParam0 /*18*/], sParam3, sParam4, 0x00000003))
					{
						unk_0xC6EB89C59F2AF6B8(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (unk_0x8CA9406E01C7EE58(Local_109[iParam0 /*18*/], sParam3, sParam4) > 0.99f)
					{
						unk_0xC6EB89C59F2AF6B8(Local_109[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						Local_109[iParam0 /*18*/].f_10++;
					}
					break;
				
				case 0x00000001:
					if (!unk_0xB4ECF989E2C1DAC8(Local_109[iParam0 /*18*/], sParam3, sParam5, 0x00000003))
					{
						unk_0xC6EB89C59F2AF6B8(Local_109[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (unk_0x8CA9406E01C7EE58(Local_109[iParam0 /*18*/], sParam3, sParam5) > 0.99f)
					{
						unk_0xC6EB89C59F2AF6B8(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						Local_109[iParam0 /*18*/].f_10 = 0x00000000;
					}
					break;
				}
			}
	}
}

float func_62(float fParam0)
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_63(int iParam0, int iParam1)
{
	if (iParam1 == 0x00000000)
	{
		return Local_109[func_68(iParam0) /*18*/];
	}
	return Local_109[func_66(iParam0) /*18*/];
}

void func_64(int iParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if ((iParam0 % 0x00000002) == 0x00000001)
	{
		Local_108[iParam0 /*18*/] = unk_0x122AAB0B1D6F55AD(joaat("vader"), vParam1, fParam2, 0x00000001, 0x00000001, 0x00000000);
	}
	else
	{
		Local_108[iParam0 /*18*/] = unk_0x122AAB0B1D6F55AD(joaat("cavalcade2"), vParam1, fParam2, 0x00000001, 0x00000001, 0x00000000);
		unk_0xC6A6B4DDD6DC073A(Local_108[iParam0 /*18*/], 0x00000000);
	}
	unk_0xB9FD7450C0DAB575(Local_108[iParam0 /*18*/], 0x40A00000);
	unk_0xD5A0214B20BCBAD8(Local_108[iParam0 /*18*/], 0x00000001);
	if (bParam3)
	{
		if (!unk_0xC844350D5D58C99A(func_63(iParam0, 0x00000000)))
		{
			func_65(func_68(iParam0), vParam1, fParam2);
		}
		if (!unk_0xC844350D5D58C99A(func_63(iParam0, 0x00000001)))
		{
			func_65(func_66(iParam0), vParam1, fParam2);
		}
		if (!unk_0xEB6A8945D1AC98A1(func_63(iParam0, 0x00000000)) && unk_0xDF1306B443CD3D15(Local_108[iParam0 /*18*/], 0x00000000))
		{
			unk_0xF821F915BC24D246(func_63(iParam0, 0x00000000), Local_108[iParam0 /*18*/], 0xFFFFFFFF);
		}
		if (!unk_0xEB6A8945D1AC98A1(func_63(iParam0, 0x00000001)) && unk_0xDF1306B443CD3D15(Local_108[iParam0 /*18*/], 0x00000000))
		{
			unk_0xF821F915BC24D246(func_63(iParam0, 0x00000001), Local_108[iParam0 /*18*/], 0x00000000);
		}
		unk_0x56FDC9ADE35F7DB0(Local_108[iParam0 /*18*/], 0x00000001, 0x00000001, 0x00000000);
	}
}

void func_65(int iParam0, vector3 vParam1, float fParam2)
{
	Local_109[iParam0 /*18*/] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_y_genstreet_02"), vParam1, fParam2, 0x00000001, 0x00000001);
	unk_0xAFF39FB306F8E232(Local_109[iParam0 /*18*/], 0x00000001, 0x00000000);
	unk_0x11AD11297DC58CC7(Local_109[iParam0 /*18*/], 0x00000001);
	unk_0xAFF39FB306F8E232(Local_109[iParam0 /*18*/], 0x00000000, 0x00000001);
	unk_0x545E1397F38D9D5A(Local_109[iParam0 /*18*/], 0x00000003);
	unk_0x7980D72D61BEF4D5(Local_109[iParam0 /*18*/], 0x00000001);
	unk_0xAFF39FB306F8E232(Local_109[iParam0 /*18*/], 0x00000011, 0x00000001);
	unk_0xBAFED2F6486F771A(Local_109[iParam0 /*18*/], 0x00000002, 0x00000000);
	unk_0x120A395B0ECB8EA5(Local_109[iParam0 /*18*/], 0x00000000);
	unk_0xFADC0A217229F6B5(Local_109[iParam0 /*18*/], 0x00000001);
	unk_0x29CD9554726C7577(Local_109[iParam0 /*18*/], 0x00000064);
	unk_0xAA714ADDDC372E0F(Local_109[iParam0 /*18*/], 0xC6EE6B4C);
	unk_0x4E885A246A9D983A(Local_109[iParam0 /*18*/], 0x00000065, 0x00000001);
	unk_0x4E885A246A9D983A(Local_109[iParam0 /*18*/], 0x000000B9, 0x00000000);
	unk_0xD458AC1C1D29C3B4(Local_109[iParam0 /*18*/], 0x0000012C, 0x00000000);
	unk_0x64F9F278AB9DCA2C(Local_109[iParam0 /*18*/], 0x00000003, (iParam0 % 0x00000002), SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f)), 0x00000000);
	if (Global_3 || bLocal_56)
	{
		unk_0xE121AE1BBF90E186(Local_109[iParam0 /*18*/], 0x00000001);
		unk_0xD458AC1C1D29C3B4(Local_109[iParam0 /*18*/], 0x000001F4, 0x00000000);
	}
	unk_0x26A6B1686E33113F(Local_109[iParam0 /*18*/], 0x00000001);
	unk_0xAFF39FB306F8E232(Local_109[iParam0 /*18*/], 0x00000002, 0x00000001);
	unk_0xCAF7AE54F764D5AA(Local_109[iParam0 /*18*/], 2f);
	unk_0x120A395B0ECB8EA5(Local_109[iParam0 /*18*/], 0x00000000);
	unk_0xCC095276B3DD380E(Local_109[iParam0 /*18*/], 0x00000000);
	Local_109[iParam0 /*18*/].f_2 = unk_0x7707E48765093646(joaat("prop_pap_camera_01"), unk_0x64430C979F516F7A(Local_109[iParam0 /*18*/], 0x00006F06, 0f, 0f, 0f), 0x00000001, 0x00000001, 0x00000000);
	unk_0x9F528B1B53FBC5D9(Local_109[iParam0 /*18*/].f_2, Local_109[iParam0 /*18*/], unk_0x4A089F2B762B8D33(Local_109[iParam0 /*18*/], 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	if (unk_0xC844350D5D58C99A(Local_109[0x00000000 /*18*/].f_2))
	{
		unk_0x4A4806F9D471E491(Local_109[0x00000000 /*18*/].f_2, 0x00000000, 0x00000000);
	}
	Local_109[iParam0 /*18*/].f_11 = unk_0x7F6DC62EA9922664(Local_109[iParam0 /*18*/]);
}

int func_66(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_67(int iParam0)
{
	if ((iParam0 % 0x00000002) == 0x00000001)
	{
		Local_109[iParam0 /*18*/].f_E = ((iParam0 - 0x00000001) / 0x00000002);
	}
	else
	{
		Local_109[iParam0 /*18*/].f_E = (iParam0 / 0x00000002);
	}
}

int func_68(int iParam0)
{
	return iParam0 * 2;
}

void func_69(int iParam0)
{
	Local_108[iParam0 /*18*/].f_11 = 0x00000000;
}

int func_70()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
	{
		bVar0 = 0x00000000;
		if (func_73())
		{
			if (unk_0xC844350D5D58C99A(func_72()))
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(func_72(), 0x00000001), vLocal_53) < 5f && unk_0x9C66D99E63E8E24C(iLocal_70) < 1f)
				{
					bVar0 = 0x00000001;
				}
			}
		}
		else if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
		{
			if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_70, 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_67, iLocal_70, 0x00000000))
			{
				fLocal_151 = (fLocal_151 + unk_0x6117725E0134737F());
			}
			else if (fLocal_151 > 0f)
			{
				fLocal_151 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_150 = (fLocal_150 + unk_0x6117725E0134737F());
		}
		else if (fLocal_150 > 0f)
		{
			fLocal_150 = 0f;
		}
		if (fLocal_150 > 30f)
		{
			bVar1 = 0x00000001;
		}
		if (iLocal_57)
		{
			if (!unk_0x82CCEAB29E9451DD(iLocal_67, iLocal_70))
			{
				if (unk_0x869EFD0BC0868856(iLocal_67))
				{
					bVar1 = 0x00000001;
				}
				iLocal_57 = 0x00000000;
			}
		}
		if (!iLocal_57)
		{
			if (unk_0x82CCEAB29E9451DD(iLocal_67, iLocal_70))
			{
				iLocal_57 = 0x00000001;
			}
		}
		if (fLocal_151 > 30f)
		{
			bVar1 = 0x00000001;
		}
		if (!unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000) && (!bLocal_129 || iLocal_45 == 0x00000001))
		{
			bVar1 = 0x00000001;
		}
		if (SYSTEM::VDIST(vLocal_53, vLocal_52) > 30f)
		{
			bVar1 = 0x00000001;
		}
		if (((unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000) && func_71(iLocal_70)) && (!bLocal_129 || iLocal_45 == 0x00000001)) && SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iLocal_67, 0x00000001), vLocal_50) > 15f)
		{
			bVar1 = 0x00000001;
		}
		if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000) && unk_0x70EED0761B82965E(iLocal_70))
		{
			bVar1 = 0x00000001;
		}
		if (bVar1)
		{
			if (unk_0x09AC81E49EA267F7(0x00000000, 0x00000002) == 0x00000001)
			{
				sLocal_132 = "REPAP_GUP";
			}
			else
			{
				sLocal_132 = "REPAP_GUP2";
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_71(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (((unk_0x7B5606C651AB51B5(iParam0, 0x00000000, 0x00001B58) || unk_0x7B5606C651AB51B5(iParam0, 0x00000003, 0x00007530)) || unk_0x7B5606C651AB51B5(iParam0, 0x00000002, 0x00007530)) || unk_0x7B5606C651AB51B5(iParam0, 0x00000001, 0x00009C40))
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_72()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = 0xFFFFFFFF;
	fVar2 = 999999f;
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if ((unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]) && !unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/])) && !unk_0xEB6A8945D1AC98A1(iLocal_67))
		{
			if (SYSTEM::VDIST2(vLocal_53, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(vLocal_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != 0xFFFFFFFF)
	{
		return Local_109[iVar1 /*18*/];
	}
	return 0x00000000;
}

int func_73()
{
	if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_67, iLocal_70, 0x00000000) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_70, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_74()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if (func_75(Local_109[iVar0 /*18*/], 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]))
		{
			if (unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/]) || unk_0x437347B10A200C4B(Local_109[iVar0 /*18*/], 0x00000000))
			{
				if (iLocal_138[iVar0] > 0x00000032)
				{
					iLocal_110++;
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_75(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000007))
		{
			unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 0x00000001);
		}
		if (!bParam2)
		{
			if (unk_0xD3DCEC81D13AAFB1(vVar0, 5f, 0x00000001))
			{
				return 0x00000001;
			}
		}
		if (SYSTEM::VDIST2(vVar0, vLocal_52) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006) && !unk_0x52AE17073D025311(unk_0x16F2683693E537C9())) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					return 0x00000001;
				}
			}
			if ((iVar1 == joaat("weapon_petrolcan") && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9())) && SYSTEM::VDIST2(vLocal_52, vVar0) < 9f)
			{
				return 0x00000001;
			}
			if (((unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0)) && (func_76(vLocal_52, iParam0) && SYSTEM::VDIST2(vLocal_52, unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) < 100f)) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				return 0x00000001;
			}
			if (iLocal_137 > 0x00000096)
			{
				return 0x00000001;
			}
		}
		if (unk_0x8ADFEA7B4409B2F8(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f), 6f))
		{
			return 0x00000001;
		}
	}
	else if (unk_0xC844350D5D58C99A(iParam0) && iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_76(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	vVar1 = { unk_0x68E4ADDDDCD7BDDE(iParam1, 0f, 1f, 0f) - vVar0 };
	vVar2 = { vParam0 - vVar0 };
	fVar3 = func_77(vVar1, vVar2);
	if (fVar3 > 0.5f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_77(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_78()
{
	if (iLocal_45 != 0x0000000B)
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_123))
		{
			unk_0x142CC44DB769B57E(&iLocal_123);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_124))
		{
			unk_0x142CC44DB769B57E(&iLocal_124);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_121))
		{
			unk_0x142CC44DB769B57E(&iLocal_121);
		}
		iLocal_46 = iLocal_45;
		iLocal_45 = 0x0000000B;
	}
	else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000003)
		{
			if (!func_81())
			{
				func_79("REPAP_COP1");
			}
		}
		else
		{
			func_189(0x00000005);
		}
	}
	else if (func_5(&Local_139, cLocal_133, "REPAP_COP2", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
	{
		iLocal_45 = iLocal_46;
	}
}

void func_79(char* sParam0)
{
	if ((unk_0x1C0640BA9A7327B3() - iLocal_197) > 0x00001388)
	{
		if (!func_80())
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_197 = unk_0x1C0640BA9A7327B3();
			}
		}
	}
}

int func_80()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_81()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_67) && SYSTEM::VDIST2(vLocal_52, vLocal_53) < 400f)
	{
		if (!iLocal_111 && (unk_0x1C0640BA9A7327B3() - iLocal_113) > 0x00001388)
		{
			if (iLocal_63 > 0x0000000A)
			{
				iLocal_111 = 0x00000001;
				iLocal_63 = 0x00000000;
			}
		}
		if ((!iLocal_116 && !iLocal_111) && (unk_0x1C0640BA9A7327B3() - iLocal_117) > 0x00000FA0)
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				if (iLocal_118 > 0x00000002)
				{
					if (!Global_3 && !bLocal_56)
					{
						func_189(0x00000005);
					}
				}
				else
				{
					iLocal_116 = 0x00000001;
					iLocal_118++;
				}
			}
		}
		if (((!iLocal_114 && !iLocal_111) && !iLocal_116) && (unk_0x1C0640BA9A7327B3() - iLocal_115) > 0x00003A98)
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iLocal_114 = 0x00000001;
			}
		}
		if (iLocal_111)
		{
			if (iLocal_112)
			{
				if (func_5(&Local_139, cLocal_133, "REPAP_HIT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iLocal_113 = unk_0x1C0640BA9A7327B3();
					iLocal_111 = 0x00000000;
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_HUR", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_113 = unk_0x1C0640BA9A7327B3();
				iLocal_111 = 0x00000000;
				iLocal_112 = 0x00000001;
			}
		}
		if (iLocal_116)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_SHOOT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_117 = unk_0x1C0640BA9A7327B3();
				iLocal_116 = 0x00000000;
			}
		}
		if (iLocal_114)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_GUN", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_115 = unk_0x1C0640BA9A7327B3();
				iLocal_114 = 0x00000000;
			}
		}
	}
	return ((iLocal_114 || iLocal_116) || iLocal_111);
}

void func_82()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
	{
		unk_0xFADC0A217229F6B5(iLocal_67, 0x00000001);
		unk_0x0E2400AB9174FA81(0x000000FF, iLocal_55, 0x6F0783F5);
		if (!Global_3 && !bLocal_56)
		{
			unk_0x4E885A246A9D983A(iLocal_67, 0x0000013D, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_67, 0x00000000);
		}
	}
	func_86(0xFFFFFFFF, 0x00000000);
	func_83();
	unk_0x63D66B3917B1F596(0x0000003E);
	func_282();
}

void func_83()
{
	func_84();
}

int func_84()
{
	if (func_85(0x00000000))
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

bool func_85(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_86(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_104();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_103(iParam0))
	{
		func_102(iParam0, iParam1);
		if (!func_101(0x00000033))
		{
			func_97("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_100(), 0x00000000, 0x0000008A, 0x00000000);
			func_96(0x00000033);
		}
		if (func_95(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_94(iParam0, iParam1) != 0x00000142)
		{
			func_88(func_94(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_87(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_87(0x00000007);
			}
			else
			{
				func_87(0x00000001);
			}
		}
	}
}

void func_87(int iParam0)
{
	Global_1B408 = iParam0;
}

void func_88(int iParam0, var uParam1, var uParam2)
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
		func_92((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_89();
	}
}

void func_89()
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
		func_91(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_90() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_84();
				}
			}
		}
	}
}

int func_90()
{
	return Global_7830;
}

int func_91(int iParam0, int iParam1)
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

int func_92(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_93();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_93()
{
	return Global_1407E9;
}

int func_94(int iParam0, int iParam1)
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

int func_95(int iParam0)
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

void func_96(int iParam0)
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

void func_97(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_98(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_98(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_99();
	}
}

void func_99()
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

int func_100()
{
	func_25();
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

int func_101(int iParam0)
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

void func_102(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

int func_103(int iParam0)
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

int func_104()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_105(Var0);
	return uVar1;
}

int func_105(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_106()
{
	if (Global_791E)
	{
		func_87(0x00000004);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_47 != 0x00000005)
	{
		iLocal_47 = 0x00000005;
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_121))
	{
		unk_0x142CC44DB769B57E(&iLocal_121);
	}
	switch (iLocal_130)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
			{
				unk_0xF3268524E9BE6D6E(iLocal_67, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			iVar0 = 0x00000000;
			while (iVar0 < Local_109)
			{
				if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]))
				{
					if (unk_0x03068588A1FCED1A(Local_109[iVar0 /*18*/]) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(Local_109[iVar0 /*18*/], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 900f)
					{
						if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0xF690C84DADBB3551(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0xEBA53F35D0085654(&(Local_109[iVar0 /*18*/]));
					}
				}
				if (unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*18*/].f_1))
				{
					unk_0x142CC44DB769B57E(&(Local_109[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0x00000000;
			while (iVar0 < Local_108)
			{
				if (unk_0xC844350D5D58C99A(Local_108[iVar0 /*18*/]))
				{
					if (unk_0x03068588A1FCED1A(Local_108[iVar0 /*18*/]) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(Local_108[iVar0 /*18*/], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 900f)
					{
						unk_0xA954465BA6FDEFE2(&(Local_108[iVar0 /*18*/]));
					}
				}
				if (unk_0xE4EDC4B0E92C078B(Local_108[iVar0 /*18*/].f_1))
				{
					unk_0x142CC44DB769B57E(&(Local_108[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			SYSTEM::SETTIMERA(0x00000000);
			iLocal_203 = 0x00000000;
			iLocal_130++;
			break;
		
		case 0x00000001:
			iVar1 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < Local_109)
			{
				if ((unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]) && !unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/])) && !unk_0x437347B10A200C4B(Local_109[iVar0 /*18*/], 0x00000000))
				{
					iVar1++;
					func_52(unk_0x16F2683693E537C9(), iVar0);
					if (unk_0x03068588A1FCED1A(Local_109[iVar0 /*18*/]) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(Local_109[iVar0 /*18*/], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 2500f)
					{
						if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0xF690C84DADBB3551(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0xEBA53F35D0085654(&(Local_109[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_203)
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(func_72(), 0x00000001)) < 100f)
				{
					iVar2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
					if (func_24() == 0x00000001)
					{
						func_23(&Local_139, 0x00000006);
						func_23(&Local_139, 0x00000007);
						func_23(&Local_139, 0x00000008);
						switch (iVar2)
						{
							case 0x00000000:
								func_22(&Local_139, 0x00000006, func_72(), "PAP1ESCAPE", 0x00000000, 0x00000001);
								if (unk_0xC844350D5D58C99A(Local_139[0x00000006 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[0x00000006 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP1", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_203 = 0x00000001;
									}
								}
								break;
							
							case 0x00000001:
								func_22(&Local_139, 0x00000007, func_72(), "PAP2ESCAPE", 0x00000000, 0x00000001);
								if (unk_0xC844350D5D58C99A(Local_139[0x00000007 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[0x00000007 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP2", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_203 = 0x00000001;
									}
								}
								break;
							
							case 0x00000002:
								func_22(&Local_139, 0x00000008, func_72(), "PAP3ESCAPE", 0x00000000, 0x00000001);
								if (unk_0xC844350D5D58C99A(Local_139[0x00000008 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[0x00000008 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP3", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_203 = 0x00000001;
									}
								}
								break;
						}
					}
					else if (func_24() == 0x00000002)
					{
						func_23(&Local_139, 0x00000006);
						func_23(&Local_139, 0x00000005);
						iVar2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
						switch (iVar2)
						{
							case 0x00000000:
								func_22(&Local_139, 0x00000006, func_72(), "PAP1ESCAPE", 0x00000000, 0x00000001);
								if (unk_0xC844350D5D58C99A(Local_139[iVar2 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1T", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_203 = 0x00000001;
									}
								}
								break;
							
							case 0x00000001:
								func_22(&Local_139, 0x00000005, func_72(), "PAP2ESCAPE", 0x00000000, 0x00000001);
								if (unk_0xC844350D5D58C99A(Local_139[iVar2 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_203 = 0x00000001;
									}
								}
								break;
							
							case 0x00000002:
								func_22(&Local_139, 0x00000005, func_72(), "PAP2ESCAPE", 0x00000000, 0x00000001);
								if (unk_0xC844350D5D58C99A(Local_139[iVar2 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_203 = 0x00000001;
									}
								}
								break;
						}
					}
					else
					{
						func_23(&Local_139, 0x00000006);
						func_23(&Local_139, 0x00000005);
						iVar2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
						switch (iVar2)
						{
							case 0x00000000:
								func_22(&Local_139, 0x00000006, func_72(), "PAP1ESCAPE", 0x00000000, 0x00000001);
								if (unk_0xC844350D5D58C99A(Local_139[iVar2 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1M", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_203 = 0x00000001;
									}
								}
								break;
							
							case 0x00000001:
								func_22(&Local_139, 0x00000005, func_72(), "PAP2ESCAPE", 0x00000000, 0x00000001);
								if (unk_0xC844350D5D58C99A(Local_139[iVar2 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_203 = 0x00000001;
									}
								}
								break;
							
							case 0x00000002:
								func_22(&Local_139, 0x00000005, func_72(), "PAP2ESCAPE", 0x00000000, 0x00000001);
								if (unk_0xC844350D5D58C99A(Local_139[iVar2 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_203 = 0x00000001;
									}
								}
								break;
							}
						}
					}
			}
			if (func_74())
			{
				func_201();
				func_282();
			}
			if (iVar1 == 0x00000000)
			{
				func_282();
			}
			break;
	}
}

void func_108(char* sParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (iLocal_47 != 0x00000005)
	{
		iLocal_47 = 0x00000005;
	}
	if (!iLocal_202)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Local_109)
		{
			if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]) && !unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/]))
			{
				unk_0xA3BF0AA5A2608191(Local_109[iVar0 /*18*/]);
				Local_109[iVar0 /*18*/].f_10 = 0x00000002;
			}
			iVar0++;
		}
		iLocal_202 = 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if (unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*18*/].f_1))
		{
			unk_0x142CC44DB769B57E(&(Local_109[iVar0 /*18*/].f_1));
		}
		if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
				{
					if (unk_0x405E212DDE472467(Local_109[iVar0 /*18*/], 0x00000000))
					{
						unk_0x75CDA8644CD3B5F5(Local_109[iVar0 /*18*/], 0x00000000, 0x00000000);
					}
					else
					{
						func_52(iLocal_67, iVar0);
					}
				}
				else if (unk_0xD1960163A3042274(Local_109[iVar0 /*18*/], 0xBBA3B7CA) != 0x00000001)
				{
					unk_0x01E4BB5190DF7317(Local_109[iVar0 /*18*/], 0x471C4000, 0x00000000);
				}
			}
			if ((unk_0x03068588A1FCED1A(Local_109[iVar0 /*18*/]) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(Local_109[iVar0 /*18*/], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 400f) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(Local_109[iVar0 /*18*/], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 400f)
			{
				unk_0xEBA53F35D0085654(&(Local_109[iVar0 /*18*/]));
				if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/].f_2))
				{
					unk_0xF690C84DADBB3551(&(Local_109[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_108)
	{
		if (unk_0xC844350D5D58C99A(Local_108[iVar0 /*18*/]))
		{
			if ((unk_0x03068588A1FCED1A(Local_108[iVar0 /*18*/]) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(Local_108[iVar0 /*18*/], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 2500f) && func_58(Local_108[iVar0 /*18*/], 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001))
			{
				unk_0x046C362CF15F1935(&(Local_108[iVar0 /*18*/]));
			}
		}
		if (unk_0xE4EDC4B0E92C078B(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0x142CC44DB769B57E(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0xC844350D5D58C99A(iLocal_67))
	{
		if (unk_0x03068588A1FCED1A(iLocal_67) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_53) > 2500f)
		{
			unk_0x6DAD7906B73F064D(&iLocal_67);
			func_282();
		}
	}
	if (func_74() || func_75(iLocal_67, 0x00000001, 0x00000001))
	{
		func_189(0x00000005);
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_130)
	{
		case 0x00000000:
			if (unk_0xE4EDC4B0E92C078B(iLocal_121))
			{
				unk_0x142CC44DB769B57E(&iLocal_121);
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_122))
			{
				unk_0x142CC44DB769B57E(&iLocal_122);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
			{
				unk_0xA3BF0AA5A2608191(iLocal_67);
				unk_0xCAF7AE54F764D5AA(iLocal_67, 3f);
			}
			func_109();
			if (SYSTEM::VDIST(vLocal_52, vLocal_53) < 30f)
			{
				if (func_5(&Local_139, cLocal_133, sParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					iVar0 = 0x00000000;
					while (iVar0 < Local_109)
					{
						if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]))
						{
							if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/]))
							{
								unk_0xA3BF0AA5A2608191(Local_109[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_130++;
				}
			}
			else
			{
				iVar0 = 0x00000000;
				while (iVar0 < Local_109)
				{
					if (unk_0xC844350D5D58C99A(Local_109[iVar0 /*18*/]))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/]))
						{
							unk_0xA3BF0AA5A2608191(Local_109[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_130++;
			}
			break;
		
		case 0x00000001:
			if (((unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_67, iLocal_70, 0x00000000)) && !bLocal_129) && unk_0xBBA8A868118C90ED(iLocal_70, 0xFFFFFFFF, 0x00000000))
			{
				if (SYSTEM::VDIST(vLocal_53, vLocal_49) < 100f)
				{
					unk_0xDD353D0E9C789D0E(&uVar2);
					unk_0x16A6C233289238AA(0x00000000, iLocal_70, 0x00000000);
					unk_0xE9362E4D600DD12A(0x00000000, iLocal_70, vLocal_49, 20f, 0x00000000, joaat("serrano"), 0x000C00A7, 10f, 10f);
					unk_0x27F3789FF35EEDF1(0x00000000, iLocal_70, vLocal_49, 288.7089f, 0x00000001, 50f, 0x00000000);
					unk_0x132B85BCE016BCA0(0x00000000, iLocal_70, unk_0x68F4C0EC296D3901(iLocal_70, 0x00000001), 0x00000005, 10f, 0x00040000, 2f, 2f, 0x00000001);
					unk_0x45F014B3D0466974(0x00000000, iLocal_70, 0x00000000);
					unk_0x96167B03C5A77156(0x00000000, vLocal_50, 1f, 0xFFFFFFFF, 0.25f, 0x00000200, fLocal_51);
					unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_SMOKING", 0x00000000, 0x00000001);
					unk_0x75ABDC5F81978924(uVar2);
					unk_0x78ADC381772E3D54(iLocal_67, uVar2);
					unk_0xF82EA857DA10E0CD(&uVar2);
				}
				else
				{
					unk_0xDD353D0E9C789D0E(&uVar3);
					unk_0x16A6C233289238AA(0x00000000, iLocal_70, 0x00000000);
					unk_0xE072601B4380E9DF(0x00000000, iLocal_70, 15f, 0x000C0024);
					unk_0x75ABDC5F81978924(uVar3);
					unk_0x78ADC381772E3D54(iLocal_67, uVar3);
					unk_0xF82EA857DA10E0CD(&uVar3);
				}
				iLocal_130 = 0x000003E8;
			}
			else
			{
				if (unk_0x405E212DDE472467(iLocal_67, 0x00000000))
				{
					unk_0x75CDA8644CD3B5F5(iLocal_67, 0x00000000, 0x00000000);
				}
				iLocal_130++;
			}
			break;
		
		case 0x00000002:
			if (iVar1 > 0x00000000)
			{
				unk_0xF3268524E9BE6D6E(iLocal_67, unk_0x16F2683693E537C9(), 3000f, 0xFFFFFFFF, 0x00000001, 0x00000000);
				iLocal_130 = 0x000003E8;
			}
			else
			{
				if (SYSTEM::VDIST(vLocal_53, vLocal_49) < 100f)
				{
					unk_0xDD353D0E9C789D0E(&uVar4);
					unk_0x96167B03C5A77156(0x00000000, vLocal_50, 1f, 0xFFFFFFFF, 0.25f, 0x00000200, fLocal_51);
					unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_SMOKING", 0x00000000, 0x00000001);
					unk_0x75ABDC5F81978924(uVar4);
					unk_0x78ADC381772E3D54(iLocal_67, uVar4);
					unk_0xF82EA857DA10E0CD(&uVar4);
				}
				else
				{
					unk_0x01E4BB5190DF7317(iLocal_67, 0x471C4000, 0x00000000);
				}
				iLocal_130 = 0x000003E8;
			}
			break;
		
		case 0x000003E8:
			if (iVar1 == 0x00000000)
			{
				func_282();
			}
			break;
	}
}

void func_109()
{
	Global_4CD7 = 0x00000000;
	func_110();
}

void func_110()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_111()
{
	func_109();
	if (!unk_0xEB6A8945D1AC98A1(iLocal_67) && SYSTEM::VDIST2(vLocal_52, vLocal_53) < 900f)
	{
		unk_0xA3BF0AA5A2608191(iLocal_67);
		if (func_5(&Local_139, cLocal_133, "REPAP_CRZY", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
		{
			func_201();
			func_189(0x0000000A);
		}
		unk_0x6DF7BF67E86AAE86(iLocal_67, 0x84DCFAAD);
	}
	else
	{
		func_201();
		func_189(0x0000000A);
	}
}

void func_112()
{
	var uVar0;
	
	switch (iLocal_130)
	{
		case 0x00000000:
			func_148();
			if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_121))
				{
					iLocal_121 = func_191(iLocal_67, 0x00000000, 0x00000091);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_124))
				{
					unk_0x142CC44DB769B57E(&iLocal_124);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_123))
				{
					unk_0x142CC44DB769B57E(&iLocal_123);
				}
				unk_0xA3BF0AA5A2608191(iLocal_67);
				unk_0xDD353D0E9C789D0E(&uVar0);
				unk_0x45F014B3D0466974(0x00000000, iLocal_70, 0x00000000);
				unk_0x96167B03C5A77156(0x00000000, vLocal_50, 1f, 0x00007530, 0.25f, 0x00000200, fLocal_51);
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_SMOKING", 0x00000000, 0x00000001);
				unk_0x75ABDC5F81978924(uVar0);
				unk_0x78ADC381772E3D54(iLocal_67, uVar0);
				unk_0xF82EA857DA10E0CD(&uVar0);
				if (unk_0x16102BEDC7435774(iLocal_67))
				{
					unk_0x0A94A109271BE75A(iLocal_67);
				}
				func_109();
				iLocal_130++;
			}
			break;
		
		case 0x00000001:
			if (!func_80() && !unk_0xEB6A8945D1AC98A1(iLocal_67))
			{
				if (unk_0x5A91F08DF773C39D(iLocal_67, vLocal_50, 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_50, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
			{
				func_147(0x00000000);
				if (func_5(&Local_139, cLocal_133, "REPAP_THK", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					func_114(func_24(), 0x00000001, 0x00000096, 0x00000000, 0x00000001);
					iLocal_130++;
				}
			}
			break;
		
		case 0x00000003:
			if (!func_80() && !unk_0xEB6A8945D1AC98A1(iLocal_67))
			{
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_130++;
			}
			break;
		
		case 0x00000004:
			if (SYSTEM::TIMERA() > 0x000007D0)
			{
				if (func_113())
				{
					func_82();
				}
			}
			break;
	}
}

int func_113()
{
	return 0x00000001;
}

void func_114(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_146(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_146(iParam0) == 0x00000004)
	{
		return;
	}
	func_115(func_146(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
	if (bParam3)
	{
		iVar0 = 0x00000000;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 0x00000002:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 0x00000002:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 0x00000001);
	}
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_145();
	if (iParam3 < 0x00000001)
	{
		return 0x00000000;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000000:
					func_144(0x00000063, 0x00000001);
					func_143(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_143(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_143(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_129(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_124(0x00000005))
					{
						fVar0 = 0.9f;
						iVar1 = 0x00000005;
					}
					break;
				
				case 0x0000003F:
				case 0x00000040:
				case 0x00000041:
				case 0x00000042:
				case 0x00000043:
				case 0x00000044:
					switch (iParam0)
					{
						case 0x00000000:
							func_143(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_143(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_143(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_124(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_143(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_143(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_143(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_143(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_143(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_143(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 0x00000063:
				case 0x00000064:
				case 0x00000065:
				case 0x00000066:
				case 0x00000068:
				case 0x00000069:
				case 0x0000006A:
				case 0x0000006B:
				case 0x0000006C:
				case 0x0000006D:
				case 0x0000006E:
				case 0x0000006F:
				case 0x00000070:
				case 0x00000071:
					switch (iParam0)
					{
						case 0x00000000:
							func_143(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_143(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_143(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_143(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_143(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_143(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_143(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_143(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_143(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_124(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_143(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_143(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_143(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_143(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_143(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_143(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_123(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_144(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_144(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_144(0x00000060, iParam3);
					break;
			}
			func_144(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_118(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_118(iVar1);
	}
	iVar5 = (Global_E53E[iVar2] + iParam3);
	switch (iParam1)
	{
		case 0x00000001:
			if (Global_E53E[iVar2] >= 0x00000000 && iParam3 > 0x00000000)
			{
				if (iVar5 <= 0x00000000)
				{
					Global_E53E[iVar2] = 0x7FFFFFFF;
				}
				else
				{
					Global_E53E[iVar2] = (Global_E53E[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0x00000000:
					func_143(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_143(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_143(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0x00000000:
			if (!bParam4)
			{
				if ((Global_E53E[iVar2] - iParam3) < 0x00000000)
				{
					return 0x00000000;
				}
			}
			iVar3 = Global_E53E[iVar2];
			Global_E53E[iVar2] = (Global_E53E[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 0x00000001)
	{
		if (iVar4 > 0x00000014)
		{
		}
	}
	else
	{
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/]++;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1++;
		if (Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 > 0x0000000A)
		{
			Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 = 0x00000000;
		}
	}
	func_117(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_116(0x00000000);
	}
	return 0x00000001;
}

void func_116(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000B)
		{
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		Global_E546[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F[iVar0];
		Global_E546.f_1F[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_B[iVar0];
		Global_E546.f_3E[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_16[iVar0];
		Global_E546.f_5D[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_21[iVar0];
		Global_E546.f_7C[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_2C[iVar0];
		Global_E546.f_9B[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_37[iVar0];
		Global_E546.f_BA[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_42[iVar0];
		Global_E546.f_D9[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_4D[iVar0];
		Global_E546.f_F8[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_58[iVar0];
		if (!bParam0)
		{
			Global_E546[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F[iVar0];
			Global_E546.f_1F[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_B[iVar0];
			Global_E546.f_3E[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_16[iVar0];
			Global_E546.f_5D[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_21[iVar0];
			Global_E546.f_7C[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_2C[iVar0];
			Global_E546.f_9B[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_37[iVar0];
			Global_E546.f_BA[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_42[iVar0];
			Global_E546.f_D9[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_4D[iVar0];
			Global_E546.f_F8[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_E53E[iParam0];
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xCDC520E5E48E63D9(joaat("sp0_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000001:
			unk_0xCDC520E5E48E63D9(joaat("sp1_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000002:
			unk_0xCDC520E5E48E63D9(joaat("sp2_total_cash"), iVar0, 0x00000001);
			break;
	}
}

void func_118(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_92(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_92(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_92(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_92(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_121(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_121(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_121(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_121(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_121(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_121(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	bVar0 = 0x00000000;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0))
		{
			bVar0 = 0x00000001;
			unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_120() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_120() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_119(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "COUP_HAIRC";
		
		case 0x00000001:
			return "COUP_TATTOO";
		
		case 0x00000002:
			return "COUP_WARSTOCK";
		
		case 0x00000003:
			return "COUP_MOSPORT";
		
		case 0x00000004:
			return "COUP_ELITAS";
		
		case 0x00000005:
			return "COUP_MEDSPENS";
		
		case 0x00000006:
			return "COUP_SPRUNK";
		
		case 0x00000007:
			return "COUP_RESPRAY";
		
		case 0x00000008:
			return "COUP_XMAS2017";
		
		case 0x00000009:
			return "COUP_CAR_XMAS2018";
		
		case 0x0000000A:
			return "COUP_HELI_XMAS2018";
		
		case 0x0000000B:
			return "COUP_CAR2_XMAS2018";
		
		case 0x0000000C:
			return "COUP_CAS_ELITAS";
		
		case 0x0000000D:
			return "COUP_CAS_DOCKTEASE";
		
		case 0x0000000E:
			return "COUP_CAS_MOSPORT";
		
		case 0x0000000F:
			return "COUP_CAS_SSASA";
		
		case 0x00000010:
			return "COUP_CAS_WARSTOCK";
		
		case 0x00000011:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_120()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_122(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_122(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_93();
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

void func_123(int iParam0)
{
	func_144(0x0000005D, iParam0);
	func_144(0x0000001D, iParam0);
	func_144(0x0000001E, iParam0);
}

bool func_124(int iParam0)
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
	
	if (iParam0 == 0x00000008)
	{
		return func_126(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_126(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_126(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_126(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_125(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_125(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_125(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_125(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_125(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_125(0x00002052, 0xFFFFFFFF, 0x00000000);
		if (iVar11 == 0x00000000 || iVar10 >= iVar11)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_120() /*10930*/].f_181E.f_A, iParam0);
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_122(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_93();
	}
	iVar1 = func_128(iParam0, iParam1);
	uVar2 = func_127(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
	}
	return iVar0;
}

int func_128(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_93();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_129(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (unk_0x5E109EC687D2605A(0x0000001B))
	{
		return 0x00000000;
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp0_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp1_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp2_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(joaat("num_cash_spent"), &iVar2, 0xFFFFFFFF);
	if (iVar1 > 0x00000000 && (iVar2 / 0x001E8480) != (iVar1 / 0x001E8480))
	{
		unk_0xCDC520E5E48E63D9(joaat("num_cash_spent"), iVar1, 0x00000001);
		func_91(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_130(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_130(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_131(iParam0, iParam1);
}

int func_131(int iParam0, int iParam1)
{
	if (func_17(0x0000000E) && !func_142(iParam0))
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
	if (func_141(&Global_4127F1))
	{
		if (func_139(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_132(&Global_4127F1, iParam0))
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

int func_132(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_17(0x0000000E) && !func_142(iParam1))
	{
		return 0x00000000;
	}
	if (func_139(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_138(uParam0) < 0f)
	{
		func_137(uParam0, 0x00000000);
	}
	func_135(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_133(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_133(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_17(0x0000000E) && !func_142(iParam1))
	{
		return 0x00000000;
	}
	if (func_139(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_138(uParam0) < 0f)
	{
		func_137(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_134(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_134(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_135(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_136(uParam0, iVar0);
		iVar0++;
	}
	func_137(uParam0, (Global_4127F0 - 0.5f));
}

void func_136(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_137(var uParam0, float fParam1)
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

float func_138(var uParam0)
{
	return uParam0->f_50;
}

bool func_139(var uParam0, int iParam1)
{
	return func_140(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_140(var uParam0, int iParam1)
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

bool func_141(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_142(int iParam0)
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

void func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0x00000001)
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/])
	{
		unk_0x6FB46C25CCB7E6D5(Global_DFA6[iParam0 /*7*/].f_1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_DFA6[iParam0 /*7*/].f_1, iVar0, 0x00000001);
	}
}

void func_145()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000000] == iVar0)
		{
			Global_E53E[0x00000000] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000001] == iVar0)
		{
			Global_E53E[0x00000001] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000002] == iVar0)
		{
			Global_E53E[0x00000002] = iVar0;
		}
	}
}

int func_146(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

void func_147(bool bParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
	{
		if (iLocal_170 > 0x00000001)
		{
			if (!unk_0x7069CC4DE1EA3FAA(iLocal_67, unk_0x16F2683693E537C9(), 60f))
			{
				iLocal_170 = 0x00000000;
				iLocal_171 = 0x00000000;
			}
		}
		switch (iLocal_170)
		{
			case 0x00000000:
				unk_0xA3BF0AA5A2608191(iLocal_67);
				unk_0x0C8C0C840C2D1AD2(iLocal_67, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000010, 0x00000002);
				unk_0xDD353D0E9C789D0E(&uLocal_169);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000010, 0x00000002);
				unk_0x75ABDC5F81978924(uLocal_169);
				unk_0x78ADC381772E3D54(iLocal_67, uLocal_169);
				unk_0xF82EA857DA10E0CD(&uLocal_169);
				iLocal_170++;
				break;
			
			case 0x00000001:
				if (unk_0xD1960163A3042274(iLocal_67, 0x0E763797) != 0x00000001)
				{
					iLocal_170++;
				}
				break;
			
			case 0x00000002:
				if (bParam0)
				{
					switch (iLocal_171)
					{
						case 0x00000000:
							if (!unk_0xB4ECF989E2C1DAC8(iLocal_67, "random@paparazzi@wait", "wait_a", 0x00000003))
							{
								unk_0xC6EB89C59F2AF6B8(iLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (unk_0x8CA9406E01C7EE58(iLocal_67, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0xC6EB89C59F2AF6B8(iLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_171++;
							}
							break;
						
						case 0x00000001:
							if (!unk_0xB4ECF989E2C1DAC8(iLocal_67, "random@paparazzi@wait", "wait_b", 0x00000003))
							{
								unk_0xC6EB89C59F2AF6B8(iLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (unk_0x8CA9406E01C7EE58(iLocal_67, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0xC6EB89C59F2AF6B8(iLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_171++;
							}
							break;
						
						case 0x00000002:
							if (!unk_0xB4ECF989E2C1DAC8(iLocal_67, "random@paparazzi@wait", "wait_c", 0x00000003))
							{
								unk_0xC6EB89C59F2AF6B8(iLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (unk_0x8CA9406E01C7EE58(iLocal_67, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0xC6EB89C59F2AF6B8(iLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_171 = 0x00000000;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_148()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_125))
	{
		unk_0x142CC44DB769B57E(&iLocal_125);
	}
}

void func_149()
{
	var uVar0;
	
	if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
	{
		switch (iLocal_130)
		{
			case 0x00000000:
				if (!unk_0xEB6A8945D1AC98A1(iLocal_67) && unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
				{
					func_148();
					func_153(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					if (unk_0xE4EDC4B0E92C078B(iLocal_123))
					{
						unk_0x142CC44DB769B57E(&iLocal_123);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_121))
					{
						unk_0x142CC44DB769B57E(&iLocal_121);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_122))
					{
						unk_0x142CC44DB769B57E(&iLocal_122);
					}
					if (unk_0x16102BEDC7435774(iLocal_67))
					{
						unk_0x0A94A109271BE75A(iLocal_67);
					}
					func_151();
					if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
					{
						unk_0xDBE4EC9C88839074(iLocal_67, unk_0x68E4ADDDDCD7BDDE(iLocal_70, -10f, 5f, 0f), 0xFFFFFFFF, 0x00000010, 0x00000004);
					}
					unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_70, 10f, 5f, 0f), 0x00003A98, 0x00000010, 0x00000004);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000500);
					if ((bLocal_129 || Global_3) || bLocal_56)
					{
						while (!func_150(&Local_139, cLocal_133, "REPAP_THK", "REPAP_THK_1", 0x00000004, 0x00000000, 0x00000000))
						{
							SYSTEM::WAIT(0x00000000);
						}
					}
					else
					{
						while (!func_5(&Local_139, cLocal_133, "REPAP_THK", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							SYSTEM::WAIT(0x00000000);
						}
					}
					func_114(func_24(), 0x00000001, 0x000002EE, 0x00000000, 0x00000001);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
					{
						unk_0xDBE4EC9C88839074(iLocal_67, unk_0x68E4ADDDDCD7BDDE(iLocal_70, -10f, 5f, 0f), 0xFFFFFFFF, 0x00000010, 0x00000004);
						unk_0xF895E10BF4C72645(iLocal_67, 0x00000000, 0x00000000);
					}
					unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_70, 10f, 5f, 0f), 0x00003A98, 0x00000010, 0x00000004);
					iLocal_130++;
				}
				break;
			
			case 0x00000001:
				if (!func_80() && !unk_0xEB6A8945D1AC98A1(iLocal_67))
				{
					unk_0xDD353D0E9C789D0E(&uVar0);
					unk_0x45F014B3D0466974(0x00000000, iLocal_70, 0x00000000);
					unk_0x96167B03C5A77156(0x00000000, vLocal_50, 1f, 0x00007530, 0.25f, 0x00000200, fLocal_51);
					unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_SMOKING", 0x00000000, 0x00000001);
					unk_0x75ABDC5F81978924(uVar0);
					unk_0x78ADC381772E3D54(iLocal_67, uVar0);
					unk_0xF82EA857DA10E0CD(&uVar0);
					iLocal_130++;
					SYSTEM::SETTIMERA(0x00000000);
				}
				break;
			
			case 0x00000002:
				if (!unk_0xEB6A8945D1AC98A1(iLocal_67) && unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
				{
					if (!unk_0xC42A92762C58E1B9(iLocal_67, iLocal_70, 0x00000000))
					{
						SYSTEM::SETTIMERA(0x00000000);
						if (bLocal_129)
						{
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
							func_153(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_130 = 0x00000005;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
				break;
			
			case 0x00000003:
				if ((!unk_0xEB6A8945D1AC98A1(iLocal_67) && unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000)) && SYSTEM::TIMERA() > 0x000003E8)
				{
					unk_0x45F014B3D0466974(unk_0x16F2683693E537C9(), iLocal_70, 0x00000000);
					unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_70, 0x00002710, 0x00000000, 0x00000003);
					iLocal_130++;
				}
				break;
			
			case 0x00000004:
				if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_70, 0x00000000))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					func_153(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x71EDC33E5A423750(iLocal_70, 0x00000002);
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_130++;
				}
				break;
			
			case 0x00000005:
				if (SYSTEM::TIMERA() > 0x000003E8)
				{
					if (func_113())
					{
						if (!bLocal_129)
						{
							if (!func_101(0x00000013))
							{
								func_97("AM_H_CALLTX", 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
								func_96(0x00000013);
							}
						}
						func_82();
					}
				}
				break;
			}
	}
}

bool func_150(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_6(sParam2, iParam4, 0x00000000);
}

void func_151()
{
	Global_4CD7 = 0x00000000;
	func_152();
}

void func_152()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_5538 = 0x00000000;
		unk_0x5CEB4DB888A62073(0x00000001);
		Global_5145 = 0x00000006;
		return;
	}
}

void func_153(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_160(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_14())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_159(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_160(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_159(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_157(unk_0xD803B885F5E47A62())) && !func_155(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_154()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_157(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_154()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_155(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_156(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_156(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_93();
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

int func_157(int iParam0)
{
	if (func_155(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_158())
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

bool func_158()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_159(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, uParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

void func_160(int iParam0)
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

void func_161()
{
	if (Global_3 || bLocal_56)
	{
		unk_0xD60411959D5D930B(0.7f);
	}
	if (bLocal_129 && !unk_0xEB6A8945D1AC98A1(iLocal_67))
	{
		if (!func_182(iLocal_67))
		{
			if (!unk_0xE4EDC4B0E92C078B(iLocal_121))
			{
				iLocal_121 = func_191(iLocal_67, 0x00000000, 0x00000091);
			}
		}
		else
		{
			if (func_73())
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_123))
				{
					iLocal_123 = func_56(vLocal_49, 0x00000001);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_124))
				{
					unk_0x142CC44DB769B57E(&iLocal_124);
				}
			}
			else
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_124))
				{
					iLocal_124 = func_56(vLocal_50, 0x00000001);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_123))
				{
					unk_0x142CC44DB769B57E(&iLocal_123);
				}
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_121))
			{
				unk_0x142CC44DB769B57E(&iLocal_121);
			}
		}
		if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_70, 0x00000000))
		{
			if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000)) && func_181(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
			{
				iLocal_70 = 0x00000000;
				iLocal_70 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x73270B3C9CC833FD(iLocal_70, 0x00000001, 0x00000001);
				unk_0x71EDC33E5A423750(iLocal_70, 0x00000001);
				unk_0x9A8BCD43DBDDCDCA(iLocal_70, 0x00000000, 0x00000000);
			}
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_124) && !unk_0x405E212DDE472467(iLocal_67, 0x00000000))
		{
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_50, 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 0x00000001, 0x00000001, 0x00000000))
			{
				func_189(0x00000004);
			}
		}
		else if (iLocal_130 != 0x00000064)
		{
			if (func_73() && func_180(0x00000001, 0x00000001, 0x00000001))
			{
				if (unk_0x3D1053F9EB43B7AD(iLocal_70, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0x00000000, 0x00000001, 0x00000000) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 0x00000001, 0x00000001, 0x00000000))
				{
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_130 = 0x00000064;
				}
			}
			else if (!unk_0xC42A92762C58E1B9(iLocal_67, iLocal_70, 0x00000000))
			{
				if (unk_0xD1960163A3042274(iLocal_67, 0x950B6492) != 0x00000001)
				{
					unk_0x5B1D360B9C6F0A09(iLocal_67, iLocal_70, 0xFFFFFFFF, func_179(iLocal_70), 2f, 0x00800000, 0x00000000);
				}
			}
		}
	}
	else
	{
		if (iLocal_130 != 0x00000064)
		{
			if (func_73() && func_180(0x00000001, 0x00000001, 0x00000001))
			{
				if (unk_0x3D1053F9EB43B7AD(iLocal_70, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0x00000000, 0x00000001, 0x00000000) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 0x00000001, 0x00000001, 0x00000000))
				{
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_130 = 0x00000064;
				}
			}
		}
		func_176(0x00000001);
	}
	switch (iLocal_130)
	{
		case 0x00000000:
			if (func_73())
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 0x00000003) || unk_0xB4ECF989E2C1DAC8(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 0x00000003))
				{
					unk_0xA3BF0AA5A2608191(iLocal_67);
				}
				if (func_5(&Local_139, cLocal_133, "REPAP_HM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0x51B096AAC60548C1(0.5f);
					iLocal_130++;
				}
				if (!func_175())
				{
					func_170();
				}
			}
			break;
		
		case 0x00000001:
			if (!func_81())
			{
				if (func_73())
				{
					if (!func_80())
					{
						if (func_24() == 0x00000000)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_130++;
							}
						}
						else if (func_24() == 0x00000001)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_130++;
							}
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_LIFTT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!func_81())
			{
				if (func_73())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_PLEAD", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						SYSTEM::SETTIMERA(0x00000000);
						if (Global_3 || bLocal_56)
						{
							iLocal_130 = 0x00000063;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (SYSTEM::TIMERA() > 0x00001B58)
			{
				if (func_166("REPAP_HOME1", (func_169() && !func_81())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 0x00000004:
			if (func_24() == 0x00000000)
			{
				if (func_166("REPAP_HOME1M", (func_169() && !func_81())))
				{
					iLocal_130++;
				}
			}
			else if (func_24() == 0x00000001)
			{
				if (func_166("REPAP_HOME1F", (func_169() && !func_81())))
				{
					iLocal_130++;
				}
			}
			else if (func_166("REPAP_HOME1T", (func_169() && !func_81())))
			{
				iLocal_130++;
			}
			break;
		
		case 0x00000005:
			if (func_166("REPAP_HOME1L", (func_169() && !func_81())))
			{
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_130++;
			}
			break;
		
		case 0x00000006:
			if (!func_81())
			{
				if (SYSTEM::TIMERA() > 0x00001B58)
				{
					if (func_169())
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_HOME2", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_HOME2"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 0x00000008:
			if (func_166("REPAP_HOME2L", (func_169() && !func_81())))
			{
				iLocal_130++;
			}
			break;
		
		case 0x00000009:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_RESP2"))
					{
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (SYSTEM::TIMERA() > 0x00001B58)
			{
				if (func_166("REPAP_HOME3", (func_169() && !func_81())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 0x0000000B:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_HOME3"))
					{
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (SYSTEM::TIMERA() > 0x00001B58)
			{
				if (func_166("REPAP_HOME4", (func_169() && !func_81())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 0x0000000D:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_HOME4"))
					{
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 0x0000000E:
			if (SYSTEM::TIMERA() > 0x00001B58)
			{
				if (func_166("REPAP_NOBAN", (func_169() && !func_81())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 0x0000000F:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_NOBAN"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 0x00000010:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_NOBANL", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 0x00000011:
			func_81();
			break;
		
		case 0x00000064:
			if (func_163(iLocal_70, 5f, 0x00000005, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
			{
				func_190("");
				func_189(0x00000003);
			}
			break;
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		func_78();
	}
	if (func_24() == 0x00000002)
	{
		if ((func_162() && !func_175()) && iLocal_45 != 0x00000008)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
			{
				if (unk_0x5A91F08DF773C39D(iLocal_67, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!unk_0xBFDE4EE64C4BF2D6(iLocal_67, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
					{
						unk_0xE25C96A9C36BE5D2(iLocal_67, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62()));
					}
					func_109();
					iLocal_45 = 0x00000008;
				}
			}
		}
	}
}

var func_162()
{
	return Global_791D;
}

int func_163(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_164(iParam0);
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

void func_164(int iParam0)
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

int func_165(char* sParam0)
{
	vector3 vVar0;
	
	StringConCat(&vVar0, sParam0, 24);
	if (func_24() == 0x00000000)
	{
		StringConCat(&vVar0, "M", 24);
	}
	else if (func_24() == 0x00000001)
	{
		StringConCat(&vVar0, "F", 24);
	}
	else
	{
		StringConCat(&vVar0, "T", 24);
	}
	if (func_5(&Local_139, cLocal_133, &vVar0, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_166(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_58)
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_58 = 0x00000001;
				iLocal_59 = 0x00000000;
			}
		}
		else if (iLocal_59)
		{
			if (func_168(&Local_139, cLocal_133, sParam0, &Local_61, 0x00000004, 0x00000000, 0x00000000))
			{
				iLocal_59 = 0x00000000;
			}
		}
		if ((iLocal_58 && !iLocal_59) && bParam1)
		{
			if (iLocal_62 == 0xFFFFFFFF)
			{
				if (!func_80())
				{
					iLocal_62 = unk_0x1C0640BA9A7327B3();
				}
			}
			else if ((unk_0x1C0640BA9A7327B3() - iLocal_62) > 0x000001F4)
			{
				iLocal_62 = 0xFFFFFFFF;
				iLocal_58 = 0x00000000;
				iLocal_59 = 0x00000000;
				return 0x00000001;
			}
		}
	}
	else if (iLocal_58 && !iLocal_59)
	{
		Local_61 = { func_167() };
		func_151();
		iLocal_59 = 0x00000001;
	}
	return 0x00000000;
}

struct<6> func_167()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		iVar1 = unk_0x40EFDB96B3112BA7();
		iVar1 = (iVar1 + Global_5537);
		iVar2 = iVar1 + 1;
		if (iVar2 > 0xFFFFFFFF && iVar1 > 0xFFFFFFFF)
		{
			if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar2 /*6*/])))
			{
				return Global_4CD9[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 0x00000046)
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar3 /*6*/])))
					{
						return Global_4CD9[iVar3 /*6*/];
						iVar3 = 0x00000046;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_4CD9[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_168(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000001;
	StringCopy(&Global_5531, sParam3, 24);
	Global_280001 = 0x00000000;
	return func_6(sParam2, iParam4, 0x00000000);
}

int func_169()
{
	if (bLocal_129)
	{
		if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
		{
			if (func_73())
			{
				return 0x00000001;
			}
		}
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x405E212DDE472467(iLocal_67, 0x00000000))
		{
			if (SYSTEM::VDIST2(vLocal_52, vLocal_53) < 400f)
			{
				return 0x00000001;
			}
		}
	}
	else
	{
		return func_73();
	}
	return 0x00000000;
}

void func_170()
{
	if (func_24() == 0x00000002)
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_125))
		{
			func_173();
			iLocal_125 = func_172(-1034.6f, 4918.6f, 205.9f, 0x00000000);
			unk_0xBC8E0A7390523199(iLocal_125, 0x0000010D);
			func_171();
		}
	}
}

void func_171()
{
	if (!func_175())
	{
		if (func_24() == 0x00000002)
		{
			Global_791D = 0x00000001;
		}
	}
}

int func_172(vector3 vParam0, int iParam1)
{
	return func_56(vParam0, iParam1);
}

void func_173()
{
	if (func_24() == 0x00000002)
	{
		if (!Global_791F)
		{
			func_174("CULT_BLIP_HELP", 0xFFFFFFFF);
			Global_791F = 0x00000001;
		}
	}
}

void func_174(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_175()
{
	if (Global_1B416.f_619E.f_5 == 0x000003E8)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_176(bool bParam0)
{
	if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000) && !unk_0xEB6A8945D1AC98A1(iLocal_67))
	{
		if (func_73())
		{
			if (bParam0)
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_123))
				{
					iLocal_123 = func_56(vLocal_49, 0x00000001);
				}
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_121))
			{
				unk_0x142CC44DB769B57E(&iLocal_121);
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_122))
			{
				unk_0x142CC44DB769B57E(&iLocal_122);
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_123))
			{
				unk_0x142CC44DB769B57E(&iLocal_123);
			}
			if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_70, 0x00000000))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_122))
				{
					iLocal_122 = func_177(iLocal_70, 0x00000000, 0x00000000);
				}
			}
			if (!unk_0xC42A92762C58E1B9(iLocal_67, iLocal_70, 0x00000000))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_121))
				{
					iLocal_121 = func_191(iLocal_67, 0x00000000, 0x00000091);
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(iLocal_121))
			{
				unk_0x142CC44DB769B57E(&iLocal_121);
			}
		}
	}
}

int func_177(int iParam0, bool bParam1, bool bParam2)
{
	return func_178(iParam0, !bParam1, bParam2);
}

int func_178(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_57(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_57(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_57(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar1 = 0x00000000;
		while (iVar1 <= (unk_0xD6DF381716822EFE(iParam0) - 0x00000001))
		{
			if (iVar0 == 0xFFFFFFFF)
			{
				iVar2 = iVar1;
				if (unk_0xBBA8A868118C90ED(iParam0, iVar2, 0x00000000))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_180(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xC8BC75555A67090D())
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000000;
		}
	}
	iVar0 = 0x00000000;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (bParam0)
		{
			if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				return 0x00000000;
			}
		}
		if (bParam2)
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9())
				{
					return 0x00000000;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x30C0A7C378403357(iVar0) < 0.95f || unk_0x30C0A7C378403357(iVar0) > 1.011f)
			{
				return 0x00000000;
			}
		}
	}
	else if (bParam1)
	{
		return 0x00000000;
	}
	if (!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_181(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0xBBA8A868118C90ED(iParam0, 0xFFFFFFFF, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0xBBA8A868118C90ED(iParam0, 0x00000002, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_182(int iParam0)
{
	if (unk_0xBFDE4EE64C4BF2D6(iParam0, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
	{
		if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, 25f, 25f, 25f, 0x00000000, 0x00000001, 0x00000000))
		{
			unk_0x0A94A109271BE75A(iParam0);
		}
		return 0x00000001;
	}
	else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, Global_13, 0x00000000, 0x00000001, 0x00000000))
	{
		unk_0xE25C96A9C36BE5D2(iParam0, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62()));
	}
	return 0x00000000;
}

void func_183()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_67) && unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
	{
		if (!unk_0xC42A92762C58E1B9(iLocal_67, iLocal_70, 0x00000001))
		{
			if (unk_0xD1960163A3042274(iLocal_67, 0x950B6492) != 0x00000001)
			{
				unk_0x5B1D360B9C6F0A09(iLocal_67, iLocal_70, 0xFFFFFFFF, func_179(iLocal_70), 2f, 0x00800000, 0x00000000);
			}
		}
		if ((unk_0xC844350D5D58C99A(func_72()) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_67, 0x00000001), unk_0x68F4C0EC296D3901(func_72(), 0x00000001)) < 100f) && (unk_0x9C66D99E63E8E24C(iLocal_70) < 5f || !unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iLocal_70))))
		{
			if (bLocal_129)
			{
				if (!unk_0xB4ECF989E2C1DAC8(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 0x00000003) && unk_0x82CCEAB29E9451DD(iLocal_67, iLocal_70))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else if (!unk_0xB4ECF989E2C1DAC8(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 0x00000003) && unk_0x82CCEAB29E9451DD(iLocal_67, iLocal_70))
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
		else if ((unk_0xB4ECF989E2C1DAC8(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 0x00000003) || unk_0xB4ECF989E2C1DAC8(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 0x00000003)) && unk_0x82CCEAB29E9451DD(iLocal_67, iLocal_70))
		{
			unk_0xA3BF0AA5A2608191(iLocal_67);
		}
		switch (iLocal_130)
		{
			case 0x00000000:
				if (SYSTEM::TIMERA() > 0x000007D0)
				{
					if (unk_0xC844350D5D58C99A(func_72()) && !unk_0xEB6A8945D1AC98A1(func_72()))
					{
						func_23(&Local_139, 0x00000004);
						func_22(&Local_139, 0x00000004, func_72(), "PAPARAZZO", 0x00000000, 0x00000001);
					}
					iLocal_47 = 0x00000002;
					func_109();
					if (func_5(&Local_139, cLocal_133, "REPAP_GO", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0x51B096AAC60548C1(0.2f);
						unk_0x11AD11297DC58CC7(iLocal_67, 0x00000001);
						unk_0x0E2400AB9174FA81(0x00000001, iLocal_55, 0x6F0783F5);
						iLocal_119 = unk_0x7707E48765093646(joaat("prop_ld_test_01"), vLocal_68, 0x00000001, 0x00000001, 0x00000000);
						unk_0x20641932E5104B25(iLocal_119, 0x00000000, 0x00000000);
						unk_0x4A4806F9D471E491(iLocal_119, 0x00000000, 0x00000000);
						unk_0x1E9649458B15960F(iLocal_119, 0x00000001);
						iLocal_130++;
					}
				}
				break;
			
			case 0x00000001:
				func_185();
				if (!unk_0x3D1053F9EB43B7AD(iLocal_67, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0x00000000, 0x00000001, 0x00000000))
				{
					iLocal_130++;
					iLocal_131 = unk_0x1C0640BA9A7327B3();
					iLocal_47 = 0x00000003;
				}
				break;
			
			case 0x00000002:
				if (!bLocal_198)
				{
					if (((((iLocal_200 != 0x00000001 && iLocal_200 != 0x00000003) && iLocal_200 != 0x00000006) && iLocal_200 != 0x00000009) && iLocal_200 != 0x0000000B) && iLocal_200 != 0x0000000D)
					{
						bLocal_199 = 0x00000000;
						if (unk_0xC844350D5D58C99A(func_72()) && unk_0x12DE711B1C681E9E(func_72(), iLocal_70, 5f, 5f, 3f, 0x00000000, 0x00000001, 0x00000000))
						{
							bLocal_198 = 0x00000001;
						}
					}
				}
				else
				{
					if (!func_80())
					{
						bLocal_199 = 0x00000001;
					}
					if (unk_0xC844350D5D58C99A(func_72()))
					{
						if (!unk_0x12DE711B1C681E9E(func_72(), iLocal_70, 5f, 5f, 3f, 0x00000000, 0x00000001, 0x00000000))
						{
							bLocal_198 = 0x00000000;
						}
					}
				}
				if (bLocal_199)
				{
					if (!func_81())
					{
						if (!func_184())
						{
							func_185();
						}
					}
				}
				else
				{
					switch (iLocal_200)
					{
						case 0x00000000:
							if (((!bLocal_198 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CHT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_200++;
								}
							}
							break;
						
						case 0x00000001:
							if (((!bLocal_198 && func_169()) && !func_81()) && !func_80())
							{
								if (func_165("REPAP_RES1"))
								{
									iLocal_201 = unk_0x1C0640BA9A7327B3();
									iLocal_200++;
								}
							}
							break;
						
						case 0x00000002:
							if ((unk_0x1C0640BA9A7327B3() - iLocal_201) > 0x00001F40)
							{
								if (((!bLocal_198 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT2"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 0x00000003:
							if (((!bLocal_198 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP2L", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_201 = unk_0x1C0640BA9A7327B3();
									iLocal_200++;
								}
							}
							break;
						
						case 0x00000004:
							if ((unk_0x1C0640BA9A7327B3() - iLocal_201) > 0x00001770)
							{
								if (func_24() == 0x00000000)
								{
									if (func_166("REPAP_CHT3M", ((func_169() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_24() == 0x00000001)
								{
									if (func_166("REPAP_CHT3F", ((func_169() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_166("REPAP_CHT3T", ((func_169() && !func_81()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 0x00000004)
								{
									iLocal_201 = unk_0x1C0640BA9A7327B3();
								}
							}
							break;
						
						case 0x00000005:
							if ((unk_0x1C0640BA9A7327B3() - iLocal_201) > 0x00001F40)
							{
								if (func_24() == 0x00000000)
								{
									if (func_166("REPAP_CHT4M", ((func_169() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_24() == 0x00000001)
								{
									if (func_166("REPAP_CHT4F", ((func_169() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_166("REPAP_CHT4T", ((func_169() && !func_81()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 0x00000005)
								{
									iLocal_201 = unk_0x1C0640BA9A7327B3();
								}
							}
							break;
						
						case 0x00000006:
							if ((unk_0x1C0640BA9A7327B3() - iLocal_201) > 0x00001F40)
							{
								if (func_24() == 0x00000000)
								{
									if (func_166("REPAP_CHT5M", ((func_169() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_24() == 0x00000001)
								{
									if (func_166("REPAP_CHT5F", ((func_169() && !func_81()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_166("REPAP_CHT5T", ((func_169() && !func_81()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 0x00000006)
								{
									iLocal_201 = unk_0x1C0640BA9A7327B3();
								}
							}
							break;
						
						case 0x00000007:
							if ((unk_0x1C0640BA9A7327B3() - iLocal_201) > 0x00001F40)
							{
								if (((!bLocal_198 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT6"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 0x00000008:
							if (((!bLocal_198 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP6L", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_201 = unk_0x1C0640BA9A7327B3();
									iLocal_200++;
								}
							}
							break;
						
						case 0x00000009:
							if ((unk_0x1C0640BA9A7327B3() - iLocal_201) > 0x00001F40)
							{
								if (((!bLocal_198 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT7"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 0x0000000A:
							if (((!bLocal_198 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP7L", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_201 = unk_0x1C0640BA9A7327B3();
									iLocal_200++;
								}
							}
							break;
						
						case 0x0000000B:
							if ((unk_0x1C0640BA9A7327B3() - iLocal_201) > 0x00001F40)
							{
								if (((!bLocal_198 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT8"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 0x0000000C:
							if (((!bLocal_198 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP8L", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_200++;
								}
							}
							break;
						}
				}
				if (!unk_0xC844350D5D58C99A(func_72()))
				{
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_130++;
					func_151();
					if (!Global_3 && !bLocal_56)
					{
						iLocal_47 = 0x00000006;
					}
				}
				if (Global_3 || bLocal_56)
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0x00000000, 0x00000001, 0x00000000) && func_73())
					{
						iLocal_47 = 0x00000004;
						iLocal_66 = unk_0x1C0640BA9A7327B3();
					}
				}
				break;
			
			case 0x00000003:
				if (SYSTEM::TIMERA() > 0x00000BB8 && func_73())
				{
					func_190("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_139, cLocal_133, "REPAP_LOS", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						func_189(0x00000002);
					}
				}
				break;
			
			case 0x00000004:
				break;
			
			case 0x00000005:
				break;
		}
		func_176(0x00000000);
	}
}

int func_184()
{
	int iVar0;
	
	iVar0 = func_30();
	if ((unk_0x1C0640BA9A7327B3() - iLocal_196) > 0x00001388)
	{
		if (unk_0xC844350D5D58C99A(iLocal_70) && unk_0xC42A92762C58E1B9(iLocal_67, iLocal_70, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_70, 0x00000001))
			{
				if (iVar0 != 0xFFFFFFFF && (unk_0x1C0640BA9A7327B3() - Local_109[iVar0 /*18*/].f_C) < 0x00000BB8)
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_WHINE", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_196 = unk_0x1C0640BA9A7327B3();
						return 0x00000001;
					}
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_EXIT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_196 = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_185()
{
	int iVar0;
	
	if ((unk_0x1C0640BA9A7327B3() - iLocal_145) > iLocal_146)
	{
		if ((!unk_0xEB6A8945D1AC98A1(iLocal_67) && unk_0xC844350D5D58C99A(func_72())) && !unk_0xEB6A8945D1AC98A1(func_72()))
		{
			if (unk_0x0EB28750412C3A5A(vLocal_53, unk_0x68F4C0EC296D3901(func_72(), 0x00000001), 0x00000001) < 8f)
			{
				iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000005);
				func_23(&Local_139, 0x00000004);
				func_23(&Local_139, 0x00000005);
				func_23(&Local_139, 0x00000006);
				func_23(&Local_139, 0x00000007);
				switch (iVar0)
				{
					case 0x00000000:
						func_22(&Local_139, 0x00000004, func_72(), "PAPARAZZO", 0x00000000, 0x00000001);
						if (unk_0xC844350D5D58C99A(Local_139[0x00000004 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[0x00000004 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_PP", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_145 = unk_0x1C0640BA9A7327B3();
								iLocal_146 = unk_0x09AC81E49EA267F7(0x000007D0, 0x00000BB8);
							}
						}
						break;
					
					case 0x00000001:
						func_22(&Local_139, 0x00000004, func_72(), "PAPARAZZO", 0x00000000, 0x00000001);
						if (unk_0xC844350D5D58C99A(Local_139[0x00000004 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[0x00000004 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_145 = unk_0x1C0640BA9A7327B3();
								iLocal_146 = unk_0x09AC81E49EA267F7(0x000007D0, 0x00000BB8);
							}
						}
						break;
					
					case 0x00000002:
						func_22(&Local_139, 0x00000005, func_72(), "PAP2", 0x00000000, 0x00000001);
						if (unk_0xC844350D5D58C99A(Local_139[0x00000005 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[0x00000005 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL2", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_145 = unk_0x1C0640BA9A7327B3();
								iLocal_146 = unk_0x09AC81E49EA267F7(0x000007D0, 0x00000BB8);
							}
						}
						break;
					
					case 0x00000003:
						func_22(&Local_139, 0x00000006, func_72(), "PAP3", 0x00000000, 0x00000001);
						if (unk_0xC844350D5D58C99A(Local_139[0x00000006 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[0x00000006 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL3", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_145 = unk_0x1C0640BA9A7327B3();
								iLocal_146 = unk_0x09AC81E49EA267F7(0x000007D0, 0x00000BB8);
							}
						}
						break;
					
					case 0x00000004:
						func_22(&Local_139, 0x00000007, func_72(), "PAP4", 0x00000000, 0x00000001);
						if (unk_0xC844350D5D58C99A(Local_139[0x00000007 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_139[0x00000007 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL4", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_145 = unk_0x1C0640BA9A7327B3();
								iLocal_146 = unk_0x09AC81E49EA267F7(0x000007D0, 0x00000BB8);
							}
						}
						break;
					}
				}
			}
	}
}

void func_186()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3[24];
	char* sVar4;
	vector3 vVar5[24];
	var uVar6;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_121))
		{
			unk_0xF2D30B8ACAF12A39(iLocal_121, iLocal_194);
		}
		switch (iLocal_130)
		{
			case 0x00000000:
				unk_0x3F423BF5B8125A50("random@paparazzi@peek");
				unk_0x3F423BF5B8125A50("random@paparazzi@trans");
				unk_0x3F423BF5B8125A50("random@paparazzi@wait");
				if ((unk_0xB4AE0788C1587752("random@paparazzi@peek") && unk_0xB4AE0788C1587752("random@paparazzi@trans")) && unk_0xB4AE0788C1587752("random@paparazzi@wait"))
				{
					iLocal_174 = unk_0xE9744DB7B8CA6965(vLocal_187, vLocal_188, 0x00000002);
					unk_0x915804B434753CBD(iLocal_67, iLocal_174, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 0x00000001, 0x00000000, 0x447A0000, 0x00000000);
					unk_0x0C8C0C840C2D1AD2(iLocal_67, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000004, 0x00000004);
					sLocal_175[0x00000000] = "peek_a";
					sLocal_175[0x00000001] = "peek_b";
					sLocal_175[0x00000002] = "peek_c";
					unk_0x51B096AAC60548C1(0.2f);
					iLocal_172 = 0x00000000;
					iLocal_189 = 0x00000000;
					iLocal_194 = 0x00000000;
					iLocal_60 = 0x00000001;
					iLocal_190 = 0x00000000;
					iLocal_57 = 0x00000000;
					fLocal_191 = 0f;
					iLocal_130++;
				}
				break;
			
			case 0x00000001:
				if (unk_0xEAE0D21A50E6C7F4(iLocal_190, 0x00000000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_190, 0x00000001))
					{
						unk_0x5D96D8530B3D0904(&iLocal_190, 0x00000001);
					}
					else
					{
						iLocal_190 = 0x00000000;
					}
				}
				iVar2 = 0x00000000;
				bVar0 = unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_181, vLocal_182, fLocal_183, 0x00000000, 0x00000001, 0x00000000);
				bVar1 = unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_178, vLocal_179, fLocal_180, 0x00000000, 0x00000001, 0x00000000);
				if (unk_0x7F8A39872A07D2CE(sLocal_177, "right_"))
				{
					if (bVar1)
					{
						sLocal_177 = "left_";
						iVar2 = 0x00000001;
					}
				}
				else if (bVar0)
				{
					sLocal_177 = "right_";
					iVar2 = 0x00000001;
				}
				if ((unk_0x69DF961355195C3C(iLocal_174) && unk_0xA45992A6CE82FB43(iLocal_174) > 0.9f) || iVar2)
				{
					if (iLocal_190 == 0x00000000)
					{
						unk_0xA3BF0AA5A2608191(iLocal_67);
						iLocal_176++;
						if (iLocal_176 >= 0x00000003)
						{
							iLocal_176 = 0x00000000;
						}
						StringCopy(&cVar3, sLocal_177, 24);
						StringConCat(&cVar3, sLocal_175[iLocal_176], 24);
						iLocal_174 = unk_0xE9744DB7B8CA6965(vLocal_187, vLocal_188, 0x00000002);
						unk_0x915804B434753CBD(iLocal_67, iLocal_174, "random@paparazzi@peek", &cVar3, 4f, -4f, 0x00000001, 0x00000000, 0x447A0000, 0x00000000);
						unk_0x5D96D8530B3D0904(&iLocal_190, 0x00000000);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_191 <= 20f)
					{
						fLocal_191 = (fLocal_191 + unk_0x6117725E0134737F());
					}
					if ((unk_0x1C0640BA9A7327B3() - iLocal_173) > 0x00001388 && iLocal_190 == 0x00000000)
					{
						if (SYSTEM::VDIST2(vLocal_52, vLocal_53) < (22.2f * 22.2f))
						{
							if (fLocal_191 < 10f)
							{
								if (iLocal_192)
								{
									sVar4 = "REPAP_SHT1";
								}
								else
								{
									sVar4 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar4 = "REPAP_PRT";
							}
							if (func_24() == 0x00000001)
							{
								func_22(&Local_139, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
							}
							else if (func_24() == 0x00000000)
							{
								func_22(&Local_139, 0x00000001, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
							}
							else
							{
								func_22(&Local_139, 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
							}
							if (func_5(&Local_139, cLocal_133, sVar4, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_192 = 0x00000001;
								if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_67, 7f, 7f, 7f, 0x00000000, 0x00000001, 0x00000000))
								{
									unk_0xA3BF0AA5A2608191(iLocal_67);
									StringCopy(&cVar5, sLocal_177, 24);
									StringConCat(&cVar5, "come_here", 24);
									iLocal_174 = unk_0xE9744DB7B8CA6965(vLocal_187, vLocal_188, 0x00000002);
									unk_0x915804B434753CBD(iLocal_67, iLocal_174, "random@paparazzi@peek", &cVar5, 4f, -4f, 0x00000001, 0x00000000, 0x447A0000, 0x00000000);
									unk_0x5D96D8530B3D0904(&iLocal_190, 0x00000000);
								}
								iLocal_173 = unk_0x1C0640BA9A7327B3();
							}
						}
					}
				}
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_184, vLocal_185, fLocal_186, 0x00000000, 0x00000001, 0x00000000) && iLocal_190 == 0x00000000)
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_120))
					{
						unk_0x142CC44DB769B57E(&iLocal_120);
						if (!unk_0xE4EDC4B0E92C078B(iLocal_121))
						{
							iLocal_121 = func_191(iLocal_67, 0x00000000, 0x00000091);
						}
					}
					unk_0xA3BF0AA5A2608191(iLocal_67);
					iLocal_174 = unk_0xE9744DB7B8CA6965(vLocal_187, vLocal_188, 0x00000002);
					if (bVar1)
					{
						unk_0x915804B434753CBD(iLocal_67, iLocal_174, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 0x00000001, 0x00000000, 0x447A0000, 0x00000000);
					}
					else
					{
						unk_0x915804B434753CBD(iLocal_67, iLocal_174, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 0x00000001, 0x00000000, 0x447A0000, 0x00000000);
					}
					unk_0x5D96D8530B3D0904(&iLocal_190, 0x00000000);
					iLocal_130++;
				}
				break;
			
			case 0x00000002:
				if (unk_0x69DF961355195C3C(iLocal_174) && unk_0xA45992A6CE82FB43(iLocal_174) > 0.9f)
				{
					if (unk_0xD1960163A3042274(iLocal_67, 0x0E763797) != 0x00000001)
					{
						unk_0xA3BF0AA5A2608191(iLocal_67);
						unk_0xC6EB89C59F2AF6B8(iLocal_67, "random@paparazzi@wait", "wait_c", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						iLocal_170 = 0x00000002;
						SYSTEM::SETTIMERA(0x00000000);
					}
					iLocal_130++;
				}
				break;
			
			case 0x00000003:
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (func_188())
					{
						unk_0x046C362CF15F1935(&iLocal_70);
						iLocal_70 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						unk_0x73270B3C9CC833FD(iLocal_70, 0x00000001, 0x00000001);
						unk_0x9A8BCD43DBDDCDCA(iLocal_70, 0x00000000, 0x00000000);
						unk_0x71EDC33E5A423750(iLocal_70, 0x00000001);
						bLocal_129 = 0x00000001;
					}
				}
				if (!bLocal_129)
				{
					unk_0x71EDC33E5A423750(iLocal_70, 0x00000001);
					if (func_150(&Local_139, cLocal_133, "REPAP_EXP", "REPAP_EXP_2", 0x00000004, 0x00000000, 0x00000000))
					{
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_194 = 0x00000001;
						iLocal_130 = 0x00000064;
					}
				}
				else if (func_150(&Local_139, cLocal_133, "REPAP_EXPB", "REPAP_EXPB_2", 0x00000004, 0x00000000, 0x00000000))
				{
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_194 = 0x00000001;
					iLocal_130++;
				}
				if (SYSTEM::TIMERA() > 0x000007D0)
				{
					func_187(vLocal_68, 0x00000001);
				}
				break;
			
			case 0x00000004:
				func_55();
				if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
				{
					if (unk_0x12DE711B1C681E9E(iLocal_70, iLocal_67, Global_13 + Vector(2f, 12f, 12f), 0x00000000, 0x00000001, 0x00000000) && !bLocal_129)
					{
						if (unk_0xD1960163A3042274(iLocal_67, 0x0E763797) != 0x00000001 && !iLocal_189)
						{
							unk_0xDD353D0E9C789D0E(&uVar6);
							unk_0x96167B03C5A77156(0x00000000, 259.2552f, 122.2986f, 100.441f, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
							unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
							unk_0x75ABDC5F81978924(uVar6);
							unk_0x78ADC381772E3D54(iLocal_67, uVar6);
							unk_0xF895E10BF4C72645(iLocal_67, 0x00000000, 0x00000000);
							unk_0xF82EA857DA10E0CD(&uVar6);
							iLocal_189 = 0x00000001;
						}
						else
						{
							unk_0xCAF7AE54F764D5AA(iLocal_67, 1f);
							func_187(259.2552f, 122.2986f, 100.441f, 0x00000000);
						}
					}
					else
					{
						func_187(vLocal_68, 0x00000001);
					}
					if (!bLocal_129)
					{
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_70, 0x00000000))
						{
							if (unk_0xE4EDC4B0E92C078B(iLocal_122))
							{
								unk_0x142CC44DB769B57E(&iLocal_122);
							}
							if (!unk_0xE4EDC4B0E92C078B(iLocal_121))
							{
								iLocal_121 = func_191(iLocal_67, 0x00000000, 0x00000091);
							}
						}
					}
					if ((unk_0x12DE711B1C681E9E(iLocal_70, iLocal_67, Global_13, 0x00000000, 0x00000001, 0x00000000) && func_181(iLocal_70)) && (SYSTEM::TIMERA() > 0x00001770 || !bLocal_129))
					{
						if (!iLocal_172)
						{
							func_109();
							if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
							{
								if (func_24() == 0x00000001)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_172 = 0x00000001;
									}
								}
								else if (func_24() == 0x00000000)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_172 = 0x00000001;
									}
								}
								else if (func_5(&Local_139, cLocal_133, "REPAP_ONT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_172 = 0x00000001;
								}
							}
							else if (func_24() == 0x00000001)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_172 = 0x00000001;
								}
							}
							else if (func_24() == 0x00000000)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_172 = 0x00000001;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_INT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_172 = 0x00000001;
							}
						}
						else
						{
							if (!bLocal_129)
							{
								iLocal_130 = 0xFFFFFFFB;
							}
							else
							{
								iLocal_130++;
							}
							unk_0xA3BF0AA5A2608191(iLocal_67);
							unk_0x5B1D360B9C6F0A09(iLocal_67, iLocal_70, 0xFFFFFFFF, func_179(iLocal_70), 1f, 0x00800000, 0x00000000);
						}
					}
				}
				break;
			
			case 0xFFFFFFFB:
				if (bLocal_129)
				{
					func_187(vLocal_68, 0x00000001);
				}
				else
				{
					func_187(259.2552f, 122.2986f, 100.441f, 0x00000000);
				}
				if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
				{
					if (func_163(iLocal_70, 0x41280000, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
					{
						iLocal_130 = 0x00000005;
					}
				}
				break;
			
			case 0x00000005:
				if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_67) && unk_0xC42A92762C58E1B9(iLocal_67, iLocal_70, 0x00000000))
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_121))
						{
							unk_0x142CC44DB769B57E(&iLocal_121);
						}
						unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
						func_189(0x00000001);
					}
					else
					{
						if (!Global_3 && !bLocal_56)
						{
							if ((unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_70, 0x00000000) && !unk_0xC42A92762C58E1B9(iLocal_67, iLocal_70, 0x00000001)) && !unk_0x3D1053F9EB43B7AD(iLocal_70, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (bLocal_129)
								{
									unk_0xBAFED2F6486F771A(iLocal_67, 0x00000002, 0x00000001);
									sLocal_132 = "REPAP_GUP";
									func_189(0x00000006);
								}
								else
								{
									unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
									unk_0xBAFED2F6486F771A(iLocal_67, 0x00000002, 0x00000001);
									sLocal_132 = "REPAP_CP";
									func_189(0x00000006);
								}
							}
						}
						if (!unk_0xC42A92762C58E1B9(iLocal_67, iLocal_70, 0x00000000))
						{
							if (unk_0xD1960163A3042274(iLocal_67, 0x950B6492) != 0x00000001)
							{
								unk_0xA3BF0AA5A2608191(iLocal_67);
								unk_0x5B1D360B9C6F0A09(iLocal_67, iLocal_70, 0xFFFFFFFF, func_179(iLocal_70), 1f, 0x00800000, 0x00000000);
							}
							else if (SYSTEM::VDIST(vLocal_53, unk_0x68E4ADDDDCD7BDDE(iLocal_70, 1f, 0f, 0f)) < 1f)
							{
								unk_0xCAF7AE54F764D5AA(iLocal_67, 1f);
							}
						}
					}
				}
				break;
			
			case 0x00000064:
				if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
				{
					if (!func_80())
					{
						func_109();
						if (func_24() == 0x00000001)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_YSF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_130++;
							}
						}
						else if (func_24() == 0x00000000)
						{
							func_109();
							if (func_5(&Local_139, cLocal_133, "REPAP_YSM", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_130++;
							}
							iLocal_60 = 0x00000000;
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_YST", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_130++;
						}
					}
				}
				if (iLocal_130 == 0x00000065)
				{
					fLocal_195 = 0f;
				}
				func_187(vLocal_68, 0x00000001);
				break;
			
			case 0x00000065:
				if (SYSTEM::VDIST2(vLocal_52, vLocal_53) < 49f && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 3f)
					{
						fLocal_195 = (fLocal_195 + unk_0x6117725E0134737F());
					}
					else
					{
						fLocal_195 = (fLocal_195 - (unk_0x6117725E0134737F() * 2f));
					}
					if (fLocal_195 > 10f)
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_PRT", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							fLocal_195 = 0f;
						}
					}
				}
				if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_70, 0x00000000) && func_188())
					{
						bLocal_129 = 0x00000001;
						iLocal_60 = 0x00000001;
						iLocal_70 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						unk_0x73270B3C9CC833FD(iLocal_70, 0x00000001, 0x00000001);
					}
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_70, 0x00000000))
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_122))
						{
							unk_0x142CC44DB769B57E(&iLocal_122);
						}
						if (!unk_0xE4EDC4B0E92C078B(iLocal_121))
						{
							iLocal_121 = func_191(iLocal_67, 0x00000000, 0x00000091);
						}
					}
					else
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_121))
						{
							unk_0x142CC44DB769B57E(&iLocal_121);
						}
						if (!unk_0xE4EDC4B0E92C078B(iLocal_122))
						{
							iLocal_122 = func_177(iLocal_70, 0x00000000, 0x00000000);
						}
					}
					if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_70))
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_122))
						{
							unk_0x142CC44DB769B57E(&iLocal_122);
						}
						if (!unk_0xE4EDC4B0E92C078B(iLocal_121))
						{
							iLocal_121 = func_191(iLocal_67, 0x00000000, 0x00000091);
						}
						func_190("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_130 = 0x00000004;
					}
					if (!iLocal_60)
					{
						if (SYSTEM::VDIST2(vLocal_52, vLocal_54) < 9f && func_24() == 0x00000000)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_MIKE", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_60 = 0x00000001;
							}
						}
					}
				}
				func_187(vLocal_68, 0x00000001);
				break;
		}
		if (!Global_3 && !bLocal_56)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
			{
				if (SYSTEM::VDIST(vLocal_52, vLocal_68) > 75f)
				{
					func_189(0x00000006);
				}
				if (func_202())
				{
					func_189(0x00000005);
				}
			}
		}
		if (!bLocal_129)
		{
			if (!unk_0xDF1306B443CD3D15(iLocal_70, 0x00000000))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_189(0x00000005);
				}
			}
			else
			{
				if (!bLocal_129)
				{
					if (!Global_3 && !bLocal_56)
					{
						if (unk_0x7F6DC62EA9922664(iLocal_70) < iLocal_64)
						{
							if (unk_0xB87D13D0C064E9D1(iLocal_70, unk_0x16F2683693E537C9(), 0x00000001))
							{
								iLocal_65 = (iLocal_65 + (iLocal_64 - unk_0x7F6DC62EA9922664(iLocal_70)));
							}
							unk_0xE910A68AA670B4AA(iLocal_70);
						}
						if (iLocal_65 > 0x000000FA)
						{
							if (unk_0x6AB6A474D29FA7D8(iLocal_67, iLocal_70) && SYSTEM::VDIST(vLocal_53, vLocal_54) < 25f)
							{
								func_189(0x00000005);
							}
						}
					}
				}
				iLocal_64 = unk_0x7F6DC62EA9922664(iLocal_70);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
		{
			if (unk_0xE9FDA1035CFEA94F(iLocal_67))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_189(0x00000005);
				}
			}
		}
	}
}

void func_187(vector3 vParam0, bool bParam1)
{
	if (SYSTEM::VDIST(vLocal_53, vParam0) > 2.5f)
	{
		if (unk_0xD1960163A3042274(iLocal_67, 0x2A89B8A7) != 0x00000001)
		{
			unk_0x96167B03C5A77156(iLocal_67, vParam0, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
		}
	}
	else if (unk_0xD1960163A3042274(iLocal_67, 0x2A89B8A7) != 0x00000001)
	{
		func_147(bParam1);
		unk_0x0C8C0C840C2D1AD2(iLocal_67, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000010, 0x00000002);
	}
}

bool func_188()
{
	return (((((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000)) && (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))) || unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))))) && unk_0xD6DF381716822EFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) > 0x00000000) && func_181(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))) && !Global_1B05D);
}

void func_189(int iParam0)
{
	iLocal_45 = iParam0;
	iLocal_130 = 0x00000000;
}

void func_190(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_144)
	{
		if (!unk_0x7F8A39872A07D2CE(iLocal_144[iVar0], sParam0))
		{
			if (unk_0x562F77A7F33D2E46(iLocal_144[iVar0]))
			{
				unk_0x8910D3D58E0132B8(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_144)
	{
		if (unk_0x7F8A39872A07D2CE(iLocal_144[iVar0], sParam0))
		{
			if (!unk_0x562F77A7F33D2E46(iLocal_144[iVar0]))
			{
				unk_0x8BC9595FD2792B5D(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_191(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_178(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_192(int iParam0)
{
	if (func_195())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_95(Global_1B40B))
		{
			func_193(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_95(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_174(func_194(iParam0), 0xFFFFFFFF);
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
					func_174(func_194(iParam0), 0xFFFFFFFF);
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
					func_174(func_194(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

char* func_194(int iParam0)
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

int func_195()
{
	switch (func_196(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
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

int func_196(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_200(0x00000000))
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
		if (!func_198(iParam2))
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
			func_197(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_197(var uParam0, int iParam1)
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

bool func_198(int iParam0)
{
	return func_199(iParam0, Global_A1D7);
}

int func_199(int iParam0, int iParam1)
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

int func_200(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_198(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_201()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_67))
	{
		unk_0xBAFED2F6486F771A(iLocal_67, 0x00000002, 0x00000000);
		unk_0xF3268524E9BE6D6E(iLocal_67, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_109)
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_109[iVar0 /*18*/]))
		{
			unk_0xF3268524E9BE6D6E(Local_109[iVar0 /*18*/], unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			unk_0x6DF7BF67E86AAE86(Local_109[iVar0 /*18*/], 0x84DCFAAD);
			unk_0x11AD11297DC58CC7(Local_109[iVar0 /*18*/], 0x00000000);
		}
		iVar0++;
	}
}

int func_202()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Local_109)
	{
		if (unk_0xC844350D5D58C99A(Local_109[iVar1 /*18*/]) && !unk_0xEB6A8945D1AC98A1(Local_109[iVar1 /*18*/]))
		{
			if (unk_0x4FC40AB0ECCE6E18(Local_109[iVar1 /*18*/]))
			{
				if (((unk_0xD3DCEC81D13AAFB1(Local_109[iVar1 /*18*/].f_6, 5f, 0x00000001) || unk_0x681F21BF9F7B449B(0xFFFFFFFF, Local_109[iVar1 /*18*/].f_6, 10f)) || unk_0xE9FDA1035CFEA94F(Local_109[iVar1 /*18*/])) || (iLocal_138[iVar1] > 0x0000000A && iLocal_45 == 0x00000000))
				{
					iVar0 = 0x00000001;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_110 > 0x00000001)
	{
		iVar0 = 0x00000001;
	}
	iVar1 = 0x00000000;
	while (iVar1 < Local_108)
	{
		if (unk_0xC844350D5D58C99A(Local_108[iVar1 /*18*/]))
		{
			if (unk_0xDF1306B443CD3D15(Local_108[iVar1 /*18*/], 0x00000000) && unk_0x4FC40AB0ECCE6E18(Local_108[iVar1 /*18*/]))
			{
				if (unk_0x4E861BC5B1EDA7BD(Local_108[iVar1 /*18*/]))
				{
					iVar0 = 0x00000001;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_203()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_43) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_214())
		{
			return 0x00000000;
		}
	}
	if (func_210())
	{
		return 0x00000001;
	}
	if (func_204(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_204(float fParam0, bool bParam1)
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
		if (func_26(func_24()))
		{
			iVar5 = func_100();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_205(iVar1, &Var0);
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

void func_205(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_206(uParam1, "Abigail1", func_208(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_206(uParam1, "Abigail2", func_208(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_206(uParam1, "Barry1", func_208(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_206(uParam1, "Barry2", func_208(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_206(uParam1, "Barry3", func_208(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_206(uParam1, "Barry3A", func_208(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_206(uParam1, "Barry3C", func_208(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_206(uParam1, "Barry4", func_208(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_206(uParam1, "Dreyfuss1", func_208(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_206(uParam1, "Epsilon1", func_208(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_206(uParam1, "Epsilon2", func_208(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_206(uParam1, "Epsilon3", func_208(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_206(uParam1, "Epsilon4", func_208(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_206(uParam1, "Epsilon5", func_208(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_206(uParam1, "Epsilon6", func_208(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_206(uParam1, "Epsilon7", func_208(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_206(uParam1, "Epsilon8", func_208(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_206(uParam1, "Extreme1", func_208(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_206(uParam1, "Extreme2", func_208(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_206(uParam1, "Extreme3", func_208(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_206(uParam1, "Extreme4", func_208(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_206(uParam1, "Fanatic1", func_208(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_206(uParam1, "Fanatic2", func_208(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_206(uParam1, "Fanatic3", func_208(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_206(uParam1, "Hao1", func_208(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_206(uParam1, "Hunting1", func_208(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_206(uParam1, "Hunting2", func_208(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_206(uParam1, "Josh1", func_208(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_206(uParam1, "Josh2", func_208(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_206(uParam1, "Josh3", func_208(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_206(uParam1, "Josh4", func_208(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_206(uParam1, "Maude1", func_208(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_206(uParam1, "Minute1", func_208(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_206(uParam1, "Minute2", func_208(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_206(uParam1, "Minute3", func_208(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_206(uParam1, "MrsPhilips1", func_208(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_206(uParam1, "MrsPhilips2", func_208(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_206(uParam1, "Nigel1", func_208(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_206(uParam1, "Nigel1A", func_208(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_206(uParam1, "Nigel1B", func_208(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_207(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_206(uParam1, "Nigel1C", func_208(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_207(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_206(uParam1, "Nigel1D", func_208(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_207(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_206(uParam1, "Nigel2", func_208(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_206(uParam1, "Nigel3", func_208(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_206(uParam1, "Omega1", func_208(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_206(uParam1, "Omega2", func_208(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_206(uParam1, "Paparazzo1", func_208(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_206(uParam1, "Paparazzo2", func_208(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_206(uParam1, "Paparazzo3", func_208(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_206(uParam1, "Paparazzo3A", func_208(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_206(uParam1, "Paparazzo3B", func_208(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_206(uParam1, "Paparazzo4", func_208(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_206(uParam1, "Rampage1", func_208(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_206(uParam1, "Rampage3", func_208(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_206(uParam1, "Rampage4", func_208(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_206(uParam1, "Rampage5", func_208(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_206(uParam1, "Rampage2", func_208(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_207(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_206(uParam1, "TheLastOne", func_208(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_206(uParam1, "Tonya1", func_208(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_206(uParam1, "Tonya2", func_208(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_206(uParam1, "Tonya3", func_208(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_206(uParam1, "Tonya4", func_208(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_206(uParam1, "Tonya5", func_208(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_207(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_206(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_207(int iParam0)
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

struct<2> func_208(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_209(iParam0) };
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

struct<2> func_209(int iParam0)
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

int func_210()
{
	if (func_213() && !func_214())
	{
		return 0x00000001;
	}
	if (func_212() && func_211())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_211()
{
	return Global_1B2FC > 0x00000000;
}

int func_212()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_213()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_214()
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

void func_215()
{
	func_217(0x00000027, 0x00000001);
	func_217(0x00000028, 0x00000001);
	func_217(0x00000029, 0x00000001);
	func_217(0x0000002A, 0x00000001);
	func_217(0x0000002B, 0x00000001);
	func_217(0x0000002C, 0x00000001);
	iLocal_120 = func_216(vLocal_68);
	iLocal_67 = unk_0x36F2404464202779(0x0000001A, joaat("a_f_y_bevhills_03"), vLocal_68, fLocal_69, 0x00000001, 0x00000001);
	unk_0xAFF39FB306F8E232(iLocal_67, 0x00000001, 0x00000001);
	unk_0xAFF39FB306F8E232(iLocal_67, 0x00000011, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_67, 0x00000080, 0x00000001);
	unk_0xFADC0A217229F6B5(iLocal_67, 0x00000001);
	unk_0x5507FCD92D15E617(iLocal_67, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_67, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_67, 0x00000002, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_67, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_67, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_67, 0x00000007, 0x00000001, 0x00000000, 0x00000000);
	unk_0x64F9F278AB9DCA2C(iLocal_67, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
	unk_0x35126F52AFE6E6CA(iLocal_67, 0x00000001);
	unk_0x11AD11297DC58CC7(iLocal_67, 0x00000001);
	unk_0x25C5402CC10F76CD(iLocal_67, 0x00000000);
	unk_0x4F39CC3882DD074E(iLocal_67, "LACEY");
	if (Global_3 || bLocal_56)
	{
		unk_0xE121AE1BBF90E186(iLocal_67, 0x00000001);
	}
	if (unk_0xF63400DBE3303D26("CELEBRITY", &iLocal_55))
	{
		unk_0x6DF7BF67E86AAE86(iLocal_67, iLocal_55);
	}
	iLocal_70 = unk_0x122AAB0B1D6F55AD(joaat("surano"), vLocal_71, fLocal_72, 0x00000001, 0x00000001, 0x00000000);
	unk_0x08841CDB215AE18F(iLocal_70, vLocal_71, 0x00000000, 0x00000000, 0x00000001);
	unk_0xC4C7FD0EF3FEAB0B(iLocal_70, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x9A8BCD43DBDDCDCA(iLocal_70, 0x00000000, 0x00000000);
	unk_0xC6A6B4DDD6DC073A(iLocal_70, 0x0000000A);
	unk_0xB9FD7450C0DAB575(iLocal_70, 0x40A00000);
	unk_0x71EDC33E5A423750(iLocal_70, 0x00000003);
	unk_0xF3F7BF451A720FDF(iLocal_70, 0x00000001);
	unk_0x0218D9089D75EFEE(iLocal_70, 0x00000001);
	unk_0x3CBF2C83A68C1611(iLocal_70, unk_0xE4B65163E4129619(0x00000001));
	if (func_24() == 0x00000001)
	{
		func_22(&Local_139, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
	}
	else if (func_24() == 0x00000000)
	{
		func_22(&Local_139, 0x00000001, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
	}
	else
	{
		func_22(&Local_139, 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
	}
	func_22(&Local_139, 0x00000003, iLocal_67, "LACEY", 0x00000000, 0x00000001);
	iLocal_136[0x00000000] = "idle_a";
	iLocal_136[0x00000001] = "idle_b";
	iLocal_136[0x00000002] = "idle_c";
	iLocal_136[0x00000003] = "idle_d";
	iLocal_136[0x00000004] = "idle_e";
	iLocal_136[0x00000005] = "idle_f";
	iLocal_136[0x00000006] = "idle_g";
	iLocal_136[0x00000007] = "idle_h";
	iLocal_136[0x00000008] = "idle_i";
	iLocal_144[0x00000000] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_144[0x00000001] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_144[0x00000002] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0xAB8E2DDC7AF955E0(joaat("vader"), 0x00000001);
	unk_0xAB8E2DDC7AF955E0(joaat("surano"), 0x00000001);
	unk_0xAB8E2DDC7AF955E0(joaat("cavalcade2"), 0x00000001);
}

int func_216(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x7F010F50CE03A8AF(iVar0, 0x00000000);
	unk_0x9D7CDDB4B55142AF(iVar0, 0x00000000);
	return iVar0;
}

void func_217(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_221(iParam0, 0x00000002, 0x00000001))
		{
			func_220(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (func_221(iParam0, 0x00000002, 0x00000001))
	{
		func_218(iParam0, 0x00000002, 0x00000001);
	}
}

void func_218(int iParam0, int iParam1, bool bParam2)
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
		if (func_90() == 0x00000000)
		{
			iVar0 = func_125(func_219(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_121(func_219(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_219(int iParam0)
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

void func_220(int iParam0, int iParam1, bool bParam2)
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
		if (func_90() == 0x00000000)
		{
			iVar0 = func_125(func_219(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_121(func_219(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_221(int iParam0, int iParam1, bool bParam2)
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
		if (func_90() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_125(func_219(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_222()
{
	if (!iLocal_73)
	{
		func_230(&uLocal_74, joaat("surano"));
		func_230(&uLocal_74, joaat("prop_ld_test_01"));
		func_230(&uLocal_74, joaat("a_f_y_bevhills_03"));
		func_230(&uLocal_74, joaat("a_m_y_genstreet_02"));
		func_230(&uLocal_74, joaat("vader"));
		func_230(&uLocal_74, joaat("cavalcade2"));
		func_230(&uLocal_74, joaat("prop_pap_camera_01"));
		func_227(&uLocal_74);
		iLocal_73 = 0x00000001;
	}
	if (!func_223(&uLocal_74))
	{
		return 0x00000000;
	}
	unk_0x3F423BF5B8125A50("random@escape_paparazzi@standing@");
	unk_0x3F423BF5B8125A50("random@paparazzi@pap_anims");
	unk_0x3F423BF5B8125A50("random@paparazzi@peek");
	unk_0x3F423BF5B8125A50("random@paparazzi@trans");
	unk_0x3F423BF5B8125A50("random@paparazzi@wait");
	unk_0x3F423BF5B8125A50("veh@std@ps@idle_panic");
	unk_0x3F423BF5B8125A50("veh@low@front_ps@idle_panic");
	unk_0x3F423BF5B8125A50(sLocal_135);
	unk_0xD7992BEF7A9D109E("ESCPAP", 0x00000000);
	if (((((((((unk_0xB4AE0788C1587752("random@escape_paparazzi@standing@") && unk_0xB4AE0788C1587752("random@paparazzi@pap_anims")) && unk_0xB4AE0788C1587752("random@paparazzi@peek")) && unk_0xB4AE0788C1587752("random@paparazzi@trans")) && unk_0xB4AE0788C1587752("random@paparazzi@wait")) && unk_0xB4AE0788C1587752("veh@std@ps@idle_panic")) && unk_0xB4AE0788C1587752("veh@low@front_ps@idle_panic")) && unk_0xB4AE0788C1587752(sLocal_135)) && unk_0x67C1D9E5B91B2E37(0x00000000)) && unk_0xAE317D00A5A55DF6("Distant_Camera_Flash", 0x00000000, 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_223(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_1F)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001E))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001D))
			{
				return 0x00000000;
			}
			if (!func_224(uParam0[iVar0 /*2*/]))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	uParam0->f_1F = 0x00000000;
	return 0x00000001;
}

bool func_224(var uParam0)
{
	return func_225(*uParam0, "NULL", uParam0->f_1);
}

int func_225(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001D))
		{
			switch (func_226(iParam0))
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

int func_226(int iParam0)
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

void func_227(var uParam0)
{
	func_228(uParam0, 0x00000009, 0xFFFFFFFF, 0x00000000);
}

void func_228(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_229(iParam1))
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001E))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != 0xFFFFFFFF)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
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
	if (!uParam0->f_1F)
	{
		uParam0->f_1F = 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001E))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*2*/], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*2*/], 0x0000001E);
			return;
		}
		iVar0++;
	}
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000000;
			break;
		
		case 0x00000000:
			return 0x00000001;
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
		
		case 0x00000007:
			return 0x00000001;
			break;
		
		case 0x00000008:
			return 0x00000000;
			break;
		
		case 0x00000009:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_230(var uParam0, int iParam1)
{
	func_228(uParam0, 0x00000000, iParam1, 0x00000000);
}

int func_231()
{
	if (!func_198(0x00000005))
	{
		return 0x00000001;
	}
	if (func_210())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_214())
		{
			return 0x00000000;
		}
	}
	if (func_204(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_232()
{
	if ((Global_1B40B == func_104() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_233(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1F)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_20 + uParam0->f_21) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x00000002)) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000F)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001E))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001D))
					{
						func_234(uParam0[iVar0 /*2*/]);
						uParam0->f_20 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_234(int iParam0)
{
	func_235(iParam0, "NULL", iParam0->f_1);
}

void func_235(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001E))
	{
		switch (func_226(*iParam0))
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

void func_236(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_104();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_238(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_237();
}

void func_237()
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

void func_238(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_239(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_104();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_280())
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
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_214())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_85(0x00000000))
		{
			return 0x00000000;
		}
		if (func_210())
		{
			return 0x00000000;
		}
		if (func_279())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_26(func_24()))
		{
			if (func_204(100f, 0x00000001) != 0xFFFFFFFF)
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
		if (!func_278(iParam1))
		{
			return 0x00000000;
		}
		if (func_26(func_24()))
		{
			if (func_277(func_24()) == 0x00000004 || func_277(func_24()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_26(func_24()))
		{
			if (!func_276(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_275(Global_1B416.f_619E.f_2B[iParam1]))
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
		if (func_274())
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
		if (!func_265(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_198(0x00000005))
		{
			return 0x00000000;
		}
		if (func_264(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_264(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_278(0x0000001E) && !func_264(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_26(func_24()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_263(iVar4))
				{
					if (func_241(iVar2))
					{
						if (!func_240(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_24() != iVar2)
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

bool func_240(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_242(iVar0);
}

int func_242(int iParam0)
{
	return func_243(iParam0, 0x00000001);
}

int func_243(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_263(iParam0))
	{
		return 0x00000000;
	}
	func_244(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_244(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_245(func_256(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_245(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_255(iParam0, iParam1))
	{
		iVar0 = func_254(iParam1);
		iVar1 = func_252(iParam0);
		iVar2 = (func_252(iParam0) - func_252(iParam1));
		iVar3 = (func_254(iParam0) - func_254(iParam1));
		iVar4 = (func_251(iParam0) - func_251(iParam1));
		iVar5 = (func_250(iParam0) - func_250(iParam1));
		iVar6 = (func_249(iParam0) - func_249(iParam1));
		iVar7 = (func_248(iParam0) - func_248(iParam1));
	}
	else
	{
		iVar0 = func_254(iParam0);
		iVar1 = func_252(iParam1);
		iVar2 = (func_252(iParam1) - func_252(iParam0));
		iVar3 = (func_254(iParam1) - func_254(iParam0));
		iVar4 = (func_251(iParam1) - func_251(iParam0));
		iVar5 = (func_250(iParam1) - func_250(iParam0));
		iVar6 = (func_249(iParam1) - func_249(iParam0));
		iVar7 = (func_248(iParam1) - func_248(iParam0));
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
		iVar4 = (iVar4 + func_247(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_246(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_246(float fParam0, float fParam1, float fParam2)
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

int func_247(int iParam0, int iParam1)
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

int func_248(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_249(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_250(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_251(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_252(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_253(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_253(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_254(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_255(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_263(iParam1) || !func_263(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_252(iParam0);
	iVar1 = func_252(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_254(iParam0);
	iVar1 = func_254(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_251(iParam0);
	iVar1 = func_251(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_250(iParam0);
	iVar1 = func_250(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_249(iParam0);
	iVar1 = func_249(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_248(iParam0);
	iVar1 = func_248(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_256()
{
	var uVar0;
	
	func_262(&uVar0, unk_0x4460E481B9E33ADA());
	func_261(&uVar0, unk_0x8D199E381D262EEF());
	func_260(&uVar0, unk_0xD8A54335F18763BA());
	func_259(&uVar0, unk_0x972A296334C9D57B());
	func_258(&uVar0, unk_0x118229AD063C3C1D());
	func_257(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_257(var uParam0, int iParam1)
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

void func_258(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_259(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_254(*uParam0);
	iVar1 = func_252(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_247(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_260(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_261(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_262(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_263(int iParam0)
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
	iVar0 = func_248(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_249(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_250(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_252(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_254(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_251(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_247(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_264(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_265(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_24();
				if (!func_26(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_273()) || Global_1B05D) || Global_7832) || func_272()) || func_19(0x00000008, 0xFFFFFFFF)) || func_271()) || func_270()) || func_269()) || func_268()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_273()) || Global_7832) || func_272()) || func_19(0x00000008, 0xFFFFFFFF)) || func_269()) || func_271()) || func_270()) || func_268()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_273()) || Global_1B05D) || Global_7832) || func_272()) || func_19(0x00000008, 0xFFFFFFFF)) || func_269()) || func_271()) || func_270()) || func_268()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_273()) || Global_1B05D) || Global_7832) || func_272()) || func_19(0x00000008, 0xFFFFFFFF)) || func_271()) || func_270()) || func_268()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_273() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_19(0x00000008, 0xFFFFFFFF)) || func_268()) || func_267()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_19(0x00000008, 0xFFFFFFFF) || func_271()) || func_270()) || func_267()) || func_266())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_273()) || Global_7832) || func_272()) || func_19(0x00000008, 0xFFFFFFFF)) || func_270()) || func_269()) || func_268()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_273()) || func_270()) || Global_1B05D) || Global_7832) || func_272()) || Global_A664) || func_19(0x00000008, 0xFFFFFFFF)) || func_269()) || func_267()) || func_268()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_273()) || Global_1B05D) || Global_7832) || func_272()) || func_19(0x00000008, 0xFFFFFFFF)) || func_269()) || func_267()) || func_271()) || func_270()) || func_268())
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

var func_266()
{
	return Global_181DF.f_1;
}

int func_267()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_268()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_269()
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

bool func_270()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_271()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_272()
{
	return Global_14086D;
}

int func_273()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_274()
{
	func_16();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_275(int iParam0)
{
	return func_255(func_256(), iParam0);
}

int func_276(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_24();
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

int func_277(int iParam0)
{
	if (!func_26(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_278(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_280())
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

int func_279()
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

int func_280()
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

void func_281(var uParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		uParam0->f_21 = iParam1;
	}
}

void func_282()
{
	func_300(0x00000000);
	unk_0xF5894FEB702E7E76(-90f, -1488f, -50f, 55f, -1470f, 50f, 0x00000001);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0x00000001);
	func_295(&uLocal_74, 0x00000000);
	unk_0x8D17794CE3273D70("random@escape_paparazzi@standing@");
	unk_0x8D17794CE3273D70("random@paparazzi@pap_anims");
	unk_0x8D17794CE3273D70("random@paparazzi@peek");
	unk_0x8D17794CE3273D70("random@paparazzi@trans");
	unk_0x8D17794CE3273D70("random@paparazzi@wait");
	unk_0x8D17794CE3273D70("veh@std@ps@idle_panic");
	unk_0x8D17794CE3273D70("veh@low@front_ps@idle_panic");
	unk_0x8D17794CE3273D70(sLocal_135);
	unk_0x8C26F31DFF77D124();
	if (func_232())
	{
		unk_0x51B096AAC60548C1(1f);
	}
	if (unk_0xC844350D5D58C99A(iLocal_67) && !unk_0xEB6A8945D1AC98A1(iLocal_67))
	{
		if (unk_0x16102BEDC7435774(iLocal_67))
		{
			unk_0x0A94A109271BE75A(iLocal_67);
		}
		if (unk_0x405E212DDE472467(iLocal_67, 0x00000001))
		{
			if (!unk_0xE9FDA1035CFEA94F(iLocal_67))
			{
				unk_0x75CDA8644CD3B5F5(iLocal_67, 0x00000000, 0x00000000);
			}
		}
	}
	func_284(0xFFFFFFFF);
	unk_0x053C926E5E341906();
	unk_0xB8C3D2D6C4AAEF18(0x00000000);
	unk_0xAB8E2DDC7AF955E0(joaat("vader"), 0x00000000);
	unk_0xAB8E2DDC7AF955E0(joaat("surano"), 0x00000000);
	unk_0xAB8E2DDC7AF955E0(joaat("cavalcade2"), 0x00000000);
	unk_0x2952D66A502EA873(uLocal_126, 0x00000000);
	unk_0x2952D66A502EA873(uLocal_127, 0x00000000);
	unk_0x2952D66A502EA873(uLocal_128, 0x00000000);
	unk_0xE342F209E49C5314(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0x00000001, 0x00000001);
	if (Global_7921)
	{
		unk_0xC92DB9682A650680("AC_STOP");
	}
	func_283();
	unk_0x10FAF14A60A0DBE1();
}

void func_283()
{
	Global_791D = 0x00000000;
	Global_791E = 0x00000000;
	Global_7920 = 0x00000000;
	Global_7921 = 0x00000000;
	Global_7922 = 0x00000000;
}

void func_284(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_104();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_232())
	{
		func_288(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_287(0x00007530);
		StringCopy(&cVar0, func_286(Global_1B40B, 0x00000001), 64);
		if (func_103(Global_1B40B) > 0x00000000)
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
	func_285(&Global_786B);
	Global_1B40C = 0x00000000;
	func_238(0xFFFFFFFF);
}

void func_285(var uParam0)
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

char* func_286(int iParam0, bool bParam1)
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

void func_287(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_288(int iParam0)
{
	func_289(iParam0, 0x00000000, func_294(iParam0));
}

void func_289(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_256();
	func_292(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_291(iParam0, &uVar0);
	Var1 = { func_290(&uVar0) };
}

struct<16> func_290(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_250(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_249(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_248(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_251(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_254(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_252(*uParam0), 64);
	return Var0;
}

void func_291(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_292(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_252(*uParam0);
	iVar1 = func_254(*uParam0);
	iVar2 = func_251(*uParam0);
	iVar3 = func_250(*uParam0);
	iVar4 = func_249(*uParam0);
	iVar5 = func_248(*uParam0);
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
	iVar6 = func_247(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_247(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_293(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_293(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_262(uParam0, iParam1);
	func_261(uParam0, iParam2);
	func_260(uParam0, iParam3);
	func_258(uParam0, iParam5);
	func_259(uParam0, iParam4);
	func_257(uParam0, iParam6);
}

int func_294(int iParam0)
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

void func_295(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_297(uParam0);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		func_296(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_1F = 0x00000000;
	uParam0->f_20 = 0xFFFFFFFF;
	uParam0->f_21 = 0x00000001;
}

void func_296(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0xFFFFFFFF;
}

void func_297(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 0x0000001E))
		{
			func_298(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_1F = 0x00000001;
}

void func_298(var uParam0)
{
	func_299(*uParam0, "NULL", uParam0->f_1);
}

void func_299(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		switch (func_226(iParam0))
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

void func_300(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_217(iVar0, bParam0);
		iVar0++;
	}
}

