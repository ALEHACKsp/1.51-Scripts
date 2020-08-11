#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	vector3 vLocal_46 = { 0f, 0f, 0f };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 16;
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
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
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
	int iLocal_218[3] = { 0, 0, 0 };
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	vector3 vLocal_221 = { 0f, 0f, 0f };
	vector3 vLocal_222[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_223[3] = { 0f, 0f, 0f };
	vector3 vLocal_224 = { 0f, 0f, 0f };
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	bool bLocal_235 = 0;
	vector3 vLocal_236 = { 0f, 0f, 0f };
	struct<2> Local_237 = { 0, 5 } ;
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
	var uLocal_253 = 5;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	bool bVar7;
	int iVar8;
	vector3 vVar9;
	float fVar10;
	int iVar11[3];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	iLocal_0 = 0x00000003;
	iLocal_3 = 0x00000001;
	iLocal_4 = 0x00000086;
	iLocal_5 = 0x00000086;
	iLocal_6 = 0x00000001;
	iLocal_7 = 0x00000001;
	iLocal_8 = 0x00000001;
	iLocal_9 = 0x00000086;
	iLocal_10 = 0x00000001;
	iLocal_11 = 0x0000000C;
	iLocal_12 = 0x0000000C;
	fLocal_15 = 0.001f;
	iLocal_18 = 0xFFFFFFFF;
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
	iVar0 = 0x00000000;
	Var1 = 0x00000003;
	iVar2 = 0x00000000;
	iLocal_49 = 0x00000003;
	vLocal_221 = { ScriptParam_237.f_1[0x00000000 /*3*/] };
	vLocal_222[0x00000000 /*3*/] = { 1283.85f, -1622.501f, 53.2255f };
	fLocal_223[0x00000000] = 198.9926f;
	vLocal_222[0x00000001 /*3*/] = { 1286.655f, -1627f, 53.225f };
	fLocal_223[0x00000001] = 22.3073f;
	vLocal_222[0x00000002 /*3*/] = { 1286.452f, -1624.782f, 53.225f };
	fLocal_223[0x00000002] = 49.6773f;
	vVar9 = { 1298.391f, -1580.895f, 50.7937f };
	fVar10 = 332.006f;
	vLocal_224 = { 1277.725f, -1617.897f, 53.2254f };
	if (func_164())
	{
		Var1[0x00000000] = joaat("g_m_y_mexgoon_02");
		Var1[0x00000001] = joaat("g_m_y_mexgoon_02");
		Var1[0x00000002] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	else
	{
		Var1[0x00000000] = joaat("g_m_y_mexgoon_02");
		Var1[0x00000001] = joaat("g_m_y_mexgoon_02");
		Var1[0x00000002] = joaat("g_m_y_mexgoon_02");
		Var1.f_4 = joaat("a_f_y_eastsa_03");
	}
	Var1.f_5 = "amb_sit_wall_m";
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		func_152(Var1, iVar8, &iVar11, iVar12);
	}
	if (func_119(vLocal_221, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000))
	{
		func_116(0xFFFFFFFF);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_115(0x00000001, Var1);
	while (iVar0 != 0x00000007)
	{
		SYSTEM::WAIT(0x00000000);
		iVar13 = 0x00000258;
		if (!unk_0x338D6FF72D84D90F())
		{
			iVar13 = 0x00000000;
			iVar0 = 0x00000007;
			func_152(Var1, iVar8, &iVar11, iVar12);
		}
		if (!func_114())
		{
			if (func_113())
			{
				iVar13 = 0x00000000;
				iVar0 = 0x00000007;
				func_152(Var1, iVar8, &iVar11, iVar12);
			}
		}
		unk_0x1A6DFFFEEC27BF4F("RE_GI", 0x00000000);
		switch (iVar0)
		{
			case 0x00000000:
				if (func_101())
				{
					iVar13 = 0x00000000;
					iVar0 = 0x00000007;
					func_152(Var1, iVar8, &iVar11, iVar12);
				}
				if (func_115(0x00000001, Var1))
				{
					iVar13 = 0x00000000;
					iVar0 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_90(0x00000003))
				{
					func_89(0x00000001);
					iVar0 = 0x00000004;
				}
				else
				{
					iVar0 = 0x00000006;
				}
				iVar13 = 0x00000000;
				break;
			
			case 0x00000004:
				iVar13 = 0x00000000;
				unk_0x7D6CA5F52B3748BF(vLocal_224 - Vector(10f, 30f, 30f), vLocal_224 + Vector(10f, 30f, 30f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
				unk_0x10F3BFFADF2CE3DA(vLocal_224 - Vector(50f, 50f, 50f), vLocal_224 + Vector(100f, 100f, 100f));
				unk_0xE342F209E49C5314(vLocal_224 - Vector(15f, 15f, 15f), vLocal_224 + Vector(15f, 15f, 15f), 0x00000000, 0x00000001);
				unk_0x5D96D8530B3D0904(&iVar3, 0x00000004);
				unk_0x5D96D8530B3D0904(&iVar3, 0x00000001);
				unk_0x5D96D8530B3D0904(&iVar3, 0x00000005);
				unk_0xF63400DBE3303D26("GangOne", &iLocal_47);
				unk_0x0E2400AB9174FA81(0x00000005, iLocal_47, 0x6F0783F5);
				iVar12 = unk_0x36F2404464202779(0x0000000C, Var1.f_4, vVar9, fVar10, 0x00000001, 0x00000001);
				unk_0x11AD11297DC58CC7(iVar12, 0x00000001);
				unk_0x71199B01895C6202(Var1.f_4);
				unk_0x6DF7BF67E86AAE86(iVar12, iLocal_47);
				unk_0x25C5402CC10F76CD(iVar12, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iVar12, 0x00000002, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iVar12, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iVar12, 0x00000003, 0x00000002, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iVar12, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iVar12, 0x00000008, 0x00000001, 0x00000001, 0x00000000);
				unk_0x4F39CC3882DD074E(iVar12, "G_F_Y_Vagos_01_LATINO_MINI_02");
				if (func_88() == 0x00000000)
				{
					func_87(&uLocal_53, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
				}
				else if (func_88() == 0x00000001)
				{
					func_87(&uLocal_53, 0x00000000, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
				}
				else if (func_88() == 0x00000002)
				{
					func_87(&uLocal_53, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
				}
				func_87(&uLocal_53, 0x00000003, iVar12, "REGIFemale", 0x00000000, 0x00000001);
				func_87(&uLocal_53, 0x00000004, iVar11[0x00000002], "REGIMale", 0x00000000, 0x00000001);
				unk_0xC6EB89C59F2AF6B8(iVar12, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (!unk_0xE4EDC4B0E92C078B(iLocal_219))
				{
				}
				iVar14 = 0x00000000;
				while (iVar14 <= (iLocal_49 - 0x00000001))
				{
					if (!unk_0xC844350D5D58C99A(iVar11[iVar14]))
					{
						iVar11[iVar14] = unk_0x36F2404464202779(0x0000000C, Var1[iVar14], vLocal_222[iVar14 /*3*/], fLocal_223[iVar14], 0x00000001, 0x00000001);
						unk_0x11AD11297DC58CC7(iVar11[iVar14], 0x00000001);
						unk_0x71199B01895C6202(Var1[iVar14]);
						unk_0x6DF7BF67E86AAE86(iVar11[iVar14], iLocal_47);
						unk_0x4E885A246A9D983A(iVar11[iVar14], 0x0000002A, 0x00000001);
						unk_0x262EF6C6306BEA6C(iVar11[iVar14], func_86(), 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0x3CC33E4E9CE523F4(iVar11[iVar14], 0x00000002);
						unk_0xB35CCEC0D4946813(iVar11[iVar14], 0x00000000);
						unk_0x298903DD96203C2C(iVar11[iVar14], 0x0000000D);
						unk_0x6D80F1AEBA734886(iVar11[iVar14], unk_0x09AC81E49EA267F7(0x000000C8, 0x000001F4));
					}
					iVar14++;
				}
				unk_0x262EF6C6306BEA6C(iVar11[0x00000000], joaat("weapon_sawnoffshotgun"), 0x00000028, 0x00000001, 0x00000001);
				iLocal_50 = unk_0xE9744DB7B8CA6965(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 0x00000002);
				if (!unk_0xEB6A8945D1AC98A1(iVar11[0x00000000]))
				{
					unk_0x915804B434753CBD(iVar11[0x00000000], iLocal_50, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_b", 4f, -4f, 0x00000011, 0x00000000, 0x447A0000, 0x00000000);
				}
				if (!unk_0xEB6A8945D1AC98A1(iVar11[0x00000001]))
				{
					unk_0x915804B434753CBD(iVar11[0x00000001], iLocal_50, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_c", 4f, -4f, 0x00000011, 0x00000000, 0x447A0000, 0x00000000);
				}
				if (!unk_0xEB6A8945D1AC98A1(iVar11[0x00000002]))
				{
					unk_0x915804B434753CBD(iVar11[0x00000002], iLocal_50, "random@gang_intimidation@", "001446_02_gangintimidation_2_idle_thug_d", 4f, -4f, 0x00000011, 0x00000000, 0x447A0000, 0x00000000);
				}
				unk_0xC90224D9E95E5E3A(iLocal_50, 0x00000001);
				iLocal_228 = 0x00000001;
				iVar0 = 0x00000005;
				break;
			
			case 0x00000005:
				unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
				unk_0x24A24DF10A19BBA7(unk_0xD803B885F5E47A62());
				if (iVar2 < 0x00000003)
				{
					if ((((((((func_79(&iVar11, &uVar6, &uVar5, &uVar4, iVar3, bVar7, 0x40200000, 0x00000000) || func_78(iVar11[0x00000000], 0x00000000)) || func_78(iVar11[0x00000001], 0x00000000)) || func_78(iVar11[0x00000002], 0x00000000)) || unk_0xD3DCEC81D13AAFB1(vLocal_222[0x00000000 /*3*/], 40f, 0x00000001)) || unk_0xBBE430A566D01EF3(vLocal_222[0x00000000 /*3*/] - Vector(25f, 25f, 25f), vLocal_222[0x00000000 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_smokegrenade"), 0x00000001)) || unk_0xBBE430A566D01EF3(vLocal_222[0x00000000 /*3*/] - Vector(25f, 25f, 25f), vLocal_222[0x00000000 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenade"), 0x00000001)) || unk_0xBBE430A566D01EF3(vLocal_222[0x00000000 /*3*/] - Vector(25f, 25f, 25f), vLocal_222[0x00000000 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_grenadelauncher"), 0x00000001)) || unk_0xBBE430A566D01EF3(vLocal_222[0x00000000 /*3*/] - Vector(25f, 25f, 25f), vLocal_222[0x00000000 /*3*/] + Vector(25f, 25f, 25f), joaat("weapon_stickybomb"), 0x00000001))
					{
						iVar15 = 0x00000000;
						while (iVar15 < iVar11)
						{
							if (!unk_0xEB6A8945D1AC98A1(iVar11[iVar15]))
							{
								func_76();
								if (!unk_0xEB6A8945D1AC98A1(iVar11[iVar15]))
								{
									unk_0xA3BF0AA5A2608191(iVar11[iVar15]);
									unk_0xDD353D0E9C789D0E(&iLocal_48);
									unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8, 0x00000800, 0x00000002);
									unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									unk_0x75ABDC5F81978924(iLocal_48);
									unk_0x78ADC381772E3D54(iVar11[iVar15], iLocal_48);
									unk_0xF82EA857DA10E0CD(&iLocal_48);
									unk_0xFADC0A217229F6B5(iVar11[iVar15], 0x00000001);
								}
							}
							iVar15++;
						}
						if (!unk_0xEB6A8945D1AC98A1(iVar12))
						{
							if (!unk_0xEB6A8945D1AC98A1(iVar12))
							{
								unk_0xA3BF0AA5A2608191(iVar12);
								unk_0xDD353D0E9C789D0E(&iLocal_48);
								unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8, 0x00000800, 0x00000002);
								unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_48);
								unk_0x78ADC381772E3D54(iVar12, iLocal_48);
								unk_0xF82EA857DA10E0CD(&iLocal_48);
								unk_0xFADC0A217229F6B5(iVar12, 0x00000001);
							}
						}
						iLocal_227 = 0x00000001;
					}
				}
				else
				{
					iVar16 = 0x00000000;
					while (iVar16 < iVar11)
					{
						if (!unk_0xEB6A8945D1AC98A1(iVar11[iVar16]))
						{
							if (unk_0xB87D13D0C064E9D1(iVar11[iVar16], unk_0x16F2683693E537C9(), 0x00000001))
							{
								func_76();
								iVar2 = 0x00000006;
							}
						}
						else
						{
							func_76();
							iVar2 = 0x00000006;
						}
						iVar16++;
					}
				}
				if (iLocal_226)
				{
					iVar0 = 0x00000006;
				}
				if (iLocal_52)
				{
					if (!func_75())
					{
						iVar2 = 0x00000006;
					}
				}
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					iVar13 = 0x00000000;
					iVar0 = 0x00000006;
					break;
				}
				if (func_74(vLocal_221, 0x00000096))
				{
					iVar0 = 0x00000006;
					break;
				}
				if (iVar0 != 0x00000006)
				{
					if (func_1(&iVar2, Var1, iVar12, &iVar11, &iVar13, &iVar8) || iLocal_227)
					{
						iVar0 = 0x00000006;
						break;
					}
				}
				break;
			
			case 0x00000006:
				iVar13 = 0x00000000;
				func_152(Var1, iVar8, &iVar11, iVar12);
				iVar0 = 0x00000007;
				break;
				break;
			
			case 0x00000007:
				iVar13 = 0x00000000;
				break;
		}
		if (iVar0 != 0x00000007)
		{
		}
	}
	func_152(Var1, iVar8, &iVar11, iVar12);
}

int func_1(int iParam0, struct<6> Param1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*iParam0 >= 0x00000003)
	{
		if (!unk_0x69DF961355195C3C(iLocal_51))
		{
			if ((!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_236, 9f, 9f, 9f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 1276.21f, -1613.05f, 53f, 9f, 9f, 9f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9()))
			{
				*iParam0 = 0x00000006;
			}
		}
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (func_60(iParam2, iParam3))
			{
				if (bLocal_235)
				{
					*iParam0 = 0x00000002;
				}
				if (!unk_0xEB6A8945D1AC98A1(iParam2))
				{
					unk_0x9DD8618CA5BF832D(iParam2, 0x000000F7, 0x00000001);
					if (!func_78(iParam2, 0x00000000))
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam2, 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
						{
							if ((unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006) && unk_0xE115347EA59F7B86(iParam2, unk_0x16F2683693E537C9())) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								if ((unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam2)) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam2))
								{
									unk_0x8FB4E06C94958F84(iParam2);
									unk_0x0C8C0C840C2D1AD2(iParam2, unk_0x16F2683693E537C9(), 0x00001388, 0x00000400, 0x00000002);
									func_76();
									SYSTEM::WAIT(0x000003E8);
									func_45(&uLocal_53, "REGIAU", "REGIN_ARM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									iVar0 = 0x00000000;
									while (iVar0 < *iParam3)
									{
										if (!unk_0xEB6A8945D1AC98A1((*iParam3)[iVar0]))
										{
											unk_0x8FB4E06C94958F84((*iParam3)[iVar0]);
											unk_0xF3268524E9BE6D6E((*iParam3)[iVar0], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
											unk_0xFADC0A217229F6B5((*iParam3)[iVar0], 0x00000001);
										}
										iVar0++;
									}
									if (!unk_0xEB6A8945D1AC98A1(iParam2))
									{
										unk_0xF3268524E9BE6D6E(iParam2, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
										unk_0xFADC0A217229F6B5(iParam2, 0x00000001);
									}
									iLocal_227 = 0x00000001;
								}
							}
						}
					}
					else
					{
						func_43();
						if (!unk_0xEB6A8945D1AC98A1(iParam2))
						{
							unk_0xA3BF0AA5A2608191(iParam2);
							unk_0xF3268524E9BE6D6E(iParam2, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							unk_0xFADC0A217229F6B5(iParam2, 0x00000001);
						}
						iLocal_227 = 0x00000001;
					}
				}
				if ((unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000000]) || unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000001])) || unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000002]))
				{
					func_42(iParam3, iParam2);
				}
				if (unk_0xEB6A8945D1AC98A1(iParam2))
				{
					if (iLocal_234 > 0x00000002)
					{
						func_42(iParam3, iParam2);
					}
					else
					{
						*iParam0 = 0x00000009;
					}
				}
				else if (unk_0x869EFD0BC0868856(iParam2))
				{
					if (unk_0xB4ECF989E2C1DAC8(iParam2, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 0x00000003))
					{
						unk_0xFB131B855F2FD560(iParam2, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 0xC1000000);
					}
				}
			}
			else
			{
				*iParam0 = 0x00000009;
			}
			break;
		
		case 0x00000002:
			unk_0x4ADCCF23C40DC113(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_224, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
			unk_0x78A77CDD64392938(unk_0x16F2683693E537C9(), 0x000003E8);
			vLocal_236 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (!unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000001]))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_218[0x00000001]))
				{
				}
				unk_0xC92DB9682A650680("RE28_OS");
				iLocal_51 = unk_0xE9744DB7B8CA6965(1283.205f, -1622.71f, 54.299f, 0f, 0f, 103.68f, 0x00000002);
				if (!unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000000]))
				{
					unk_0x915804B434753CBD((*iParam3)[0x00000000], iLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_b", 4f, -4f, 0x00000011, 0x00000000, 0x447A0000, 0x00000000);
				}
				if (!unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000001]))
				{
					unk_0x915804B434753CBD((*iParam3)[0x00000001], iLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_c", 4f, -4f, 0x00000010, 0x00000000, 0x447A0000, 0x00000000);
				}
				if (!unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000002]))
				{
					unk_0x915804B434753CBD((*iParam3)[0x00000002], iLocal_51, "random@gang_intimidation@", "001446_02_gangintimidation_2_thug_d", 4f, -4f, 0x00000011, 0x00000000, 0x447A0000, 0x00000000);
				}
				*iParam0 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			*iParam4 = 0x00000000;
			if (unk_0x69DF961355195C3C(iLocal_51))
			{
				if (unk_0xA45992A6CE82FB43(iLocal_51) > 0.3f)
				{
					if (!unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000000]))
					{
						unk_0x9DD8618CA5BF832D((*iParam3)[0x00000000], 0x0000009C, 0x00000001);
						unk_0xDD353D0E9C789D0E(&iLocal_48);
						unk_0xE20F700AC2AFCA92(0x00000000, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - Vector(0f, 0f, 1f), unk_0x16F2683693E537C9(), 2f, 0x00000000, 3.5f, 5f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
						unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x000061A8, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_48);
						unk_0x78ADC381772E3D54((*iParam3)[0x00000000], iLocal_48);
						unk_0xF82EA857DA10E0CD(&iLocal_48);
						iLocal_48 = 0x00000000;
					}
				}
				if (unk_0xA45992A6CE82FB43(iLocal_51) > 0.35f)
				{
					if (!unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000001]))
					{
						unk_0x9DD8618CA5BF832D((*iParam3)[0x00000001], 0x0000009C, 0x00000001);
						unk_0xDD353D0E9C789D0E(&iLocal_48);
						unk_0x161356BF7864C47B(0x00000000, unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 2f, 0x00000000, 5f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
						unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x000061A8, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_48);
						unk_0x78ADC381772E3D54((*iParam3)[0x00000001], iLocal_48);
						unk_0xF82EA857DA10E0CD(&iLocal_48);
						iLocal_48 = 0x00000000;
					}
				}
				if (unk_0xA45992A6CE82FB43(iLocal_51) > 0.275f)
				{
					if (!unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000002]))
					{
						unk_0x9DD8618CA5BF832D((*iParam3)[0x00000002], 0x0000009C, 0x00000001);
						unk_0xDD353D0E9C789D0E(&iLocal_48);
						unk_0x161356BF7864C47B(0x00000000, unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 2f, 0x00000000, 3.5f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
						unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x000061A8, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_48);
						unk_0x78ADC381772E3D54((*iParam3)[0x00000002], iLocal_48);
						unk_0xF82EA857DA10E0CD(&iLocal_48);
						iLocal_48 = 0x00000000;
					}
				}
			}
			if (!unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000002]))
			{
				if (unk_0x12DE711B1C681E9E((*iParam3)[0x00000002], unk_0x16F2683693E537C9(), 4f, 4f, 2f, 0x00000000, 0x00000001, 0x00000000))
				{
					func_41(iLocal_219);
					func_41(iLocal_220);
					func_37(iParam3);
					if (!unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000000]))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_48);
						unk_0xE20F700AC2AFCA92(0x00000000, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - Vector(0f, 0f, 1f), unk_0x16F2683693E537C9(), 2f, 0x00000000, 3.5f, 5f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
						unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x000061A8, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_48);
						unk_0x78ADC381772E3D54((*iParam3)[0x00000000], iLocal_48);
						unk_0xF82EA857DA10E0CD(&iLocal_48);
						iLocal_48 = 0x00000000;
					}
					if (!unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000001]))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_48);
						unk_0x161356BF7864C47B(0x00000000, unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 2f, 0x00000000, 5f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
						unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x000061A8, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_48);
						unk_0x78ADC381772E3D54((*iParam3)[0x00000001], iLocal_48);
						unk_0xF82EA857DA10E0CD(&iLocal_48);
						iLocal_48 = 0x00000000;
					}
					if (!unk_0xEB6A8945D1AC98A1((*iParam3)[0x00000002]))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_48);
						unk_0x161356BF7864C47B(0x00000000, unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 2f, 0x00000000, 3.5f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
						unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x000061A8, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_48);
						unk_0x78ADC381772E3D54((*iParam3)[0x00000002], iLocal_48);
						unk_0xF82EA857DA10E0CD(&iLocal_48);
						iLocal_48 = 0x00000000;
					}
					iLocal_230 = unk_0x1C0640BA9A7327B3();
					*iParam0 = 0x00000004;
				}
			}
			break;
		
		case 0x00000004:
			if (func_35(Param1, (*iParam3)[0x00000002], iParam3))
			{
				func_41(iLocal_218[0x00000002]);
			}
			else if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				*iParam0 = 0x00000006;
			}
			break;
		
		case 0x00000006:
			if (!iLocal_229)
			{
				func_76();
				SYSTEM::WAIT(0x00000000);
				func_45(&uLocal_53, "REGIAU", "REGIN_WARN2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				unk_0x51B096AAC60548C1(0.5f);
				func_37(iParam3);
				func_42(iParam3, iParam2);
				func_41(iLocal_220);
				func_41(iLocal_219);
				iLocal_229 = 0x00000001;
			}
			func_34(iParam3);
			func_33(iParam3);
			if (func_32(iParam3))
			{
				*iParam5 = 0x00000001;
				if (!unk_0xEB6A8945D1AC98A1(iParam2))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam2, 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_45(&uLocal_53, "REGIAU", "REGIN_SORRY", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_220))
				{
				}
				while (func_75())
				{
					SYSTEM::WAIT(0x00000000);
				}
				while (!func_31())
				{
					SYSTEM::WAIT(0x00000000);
				}
				func_5(0xFFFFFFFF, 0x00000000);
				func_2();
				return 0x00000001;
				*iParam0 = 0x00000009;
			}
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_2()
{
	func_3();
}

int func_3()
{
	if (func_4(0x00000000))
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

bool func_4(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_5(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_29();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
		if (!func_26(0x00000033))
		{
			func_16("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_19(), 0x00000000, 0x0000008A, 0x00000000);
			func_15(0x00000033);
		}
		if (func_14(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_13(iParam0, iParam1) != 0x00000142)
		{
			func_7(func_13(iParam0, iParam1), vLocal_46.x, vLocal_46.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_6(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_6(0x00000007);
			}
			else
			{
				func_6(0x00000001);
			}
		}
	}
}

void func_6(int iParam0)
{
	Global_1B408 = iParam0;
}

void func_7(int iParam0, var uParam1, var uParam2)
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
		func_11((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_8();
	}
}

void func_8()
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
		func_10(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_9() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_3();
				}
			}
		}
	}
}

int func_9()
{
	return Global_7830;
}

int func_10(int iParam0, int iParam1)
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

int func_11(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_12();
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

int func_12()
{
	return Global_1407E9;
}

int func_13(int iParam0, int iParam1)
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

int func_14(int iParam0)
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

void func_15(int iParam0)
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

void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_17(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_18();
	}
}

void func_18()
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

int func_19()
{
	func_20();
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

void func_20()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_24(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_23(unk_0x16F2683693E537C9());
			if (func_22(iVar0) && (!func_21(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_22(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_21(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_22(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_24(int iParam0)
{
	if (func_22(iParam0))
	{
		return func_25(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_25(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_26(int iParam0)
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

void func_27(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

int func_28(int iParam0)
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

int func_29()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_30(Var0);
	return uVar1;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_31()
{
	return 0x00000001;
}

int func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (*uParam0 - 0x00000001))
	{
		if (unk_0xC844350D5D58C99A((*uParam0)[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_33(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (*uParam0 - 0x00000001))
	{
		if (unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			func_41(iLocal_218[iVar0]);
		}
		iVar0++;
	}
}

void func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	if (iLocal_233 == 0x00000000)
	{
		iVar2 = 0x00000000;
		while (iVar2 <= (iLocal_49 - 0x00000001))
		{
			if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar2]))
			{
				iVar0++;
				iVar1 = iVar2;
			}
			iVar2++;
		}
		if (iVar0 == 0x00000001)
		{
			if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar1]))
			{
				unk_0xAFF39FB306F8E232((*uParam0)[iVar1], 0x00000000, 0x00000001);
				unk_0xB35CCEC0D4946813((*uParam0)[iVar1], 0x00000000);
				iLocal_233 = 0x00000001;
			}
		}
	}
}

int func_35(struct<6> Param0, int iParam1, var uParam2)
{
	switch (iLocal_231)
	{
		case 0x00000000:
			if (func_36(iLocal_230, 0x00000000))
			{
				if (!func_75())
				{
					if (func_88() == 0x00000000)
					{
						func_45(&uLocal_53, "REGIAU", "REGIN_MONEYM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						iLocal_231 = 0x00000001;
					}
					else if (func_88() == 0x00000001)
					{
						func_45(&uLocal_53, "REGIAU", "REGIN_MONEYF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						iLocal_231 = 0x00000001;
					}
					else if (func_88() == 0x00000002)
					{
						func_45(&uLocal_53, "REGIAU", "REGIN_MONEYT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						iLocal_231 = 0x00000001;
					}
				}
				iLocal_48 = 0x00000000;
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1(iParam1))
			{
				if (unk_0xD1960163A3042274(iParam1, 0x0E763797) == 0x00000007 || unk_0x12DE711B1C681E9E(iParam1, unk_0x16F2683693E537C9(), 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!func_75())
					{
						func_45(&uLocal_53, "REGIAU", "REGIN_KILL", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_52 = 0x00000001;
						iLocal_231 = 0x00000004;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1((*uParam2)[0x00000002]))
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam2)[0x00000000]))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_48);
					unk_0x93D47DFD0AE94949(0x00000000, 0x000002BC);
					unk_0x96167B03C5A77156(0x00000000, vLocal_222[0x00000000 /*3*/], 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					unk_0xE655C47E46F9A7E4(0x00000000, fLocal_223[0x00000000], 0x00000000);
					unk_0x3E8E48829F3C7624(0x00000000, Param0.f_5, "sit_down_idle_01", vLocal_222[0x00000000 /*3*/], 0f, 0f, fLocal_223[0x00000000], 1000f, -4f, 0xFFFFFFFF, 0x00000001, 0f, 0x00000002, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_48);
					unk_0x78ADC381772E3D54((*uParam2)[0x00000000], iLocal_48);
					unk_0xF82EA857DA10E0CD(&iLocal_48);
					iLocal_48 = 0x00000000;
				}
				if (!unk_0xEB6A8945D1AC98A1((*uParam2)[0x00000001]))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_48);
					unk_0x93D47DFD0AE94949(0x00000000, 0x000000C8);
					unk_0x96167B03C5A77156(0x00000000, vLocal_222[0x00000001 /*3*/], 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_48);
					unk_0x78ADC381772E3D54((*uParam2)[0x00000001], iLocal_48);
					unk_0xF82EA857DA10E0CD(&iLocal_48);
					iLocal_48 = 0x00000000;
				}
				if (!unk_0xEB6A8945D1AC98A1((*uParam2)[0x00000002]))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_48);
					unk_0x93D47DFD0AE94949(0x00000000, 0x000003E8);
					unk_0xA8CC11FF8D2962D4(0x00000000, (*uParam2)[0x00000000], 0f, -0.5f, 0f, 1f, 0x00002710, 0x3DCCCCCD, 0x00000001);
					unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_48);
					unk_0x78ADC381772E3D54((*uParam2)[0x00000002], iLocal_48);
					unk_0xF82EA857DA10E0CD(&iLocal_48);
					iLocal_48 = 0x00000000;
				}
			}
			iLocal_231 = 0x00000003;
			break;
		
		case 0x00000003:
			if (!func_75())
			{
				if (func_88() == 0x00000000)
				{
					func_45(&uLocal_53, "REGIAU", "REGIN_REALM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_88() == 0x00000001)
				{
					func_45(&uLocal_53, "REGIAU", "REGIN_REALF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_88() == 0x00000002)
				{
					func_45(&uLocal_53, "REGIAU", "REGIN_REALT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_231 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x1C0640BA9A7327B3();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_37(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (*uParam0 - 0x00000001))
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_218[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
			{
				iLocal_218[iVar0] = func_38((*uParam0)[iVar0], 0x00000001, 0x00000091);
				unk_0xE2F0767314863BD8((*uParam0)[iVar0], 0x00000001, 0x00000000);
			}
		}
		iVar0++;
	}
}

int func_38(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_39(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_39(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_40(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_40(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_40(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_40(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_41(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		unk_0x142CC44DB769B57E(&iParam0);
	}
}

void func_42(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (*uParam0 - 0x00000001))
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			unk_0x6C3AE6E278DB3D0E((*uParam0)[iVar0], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
			unk_0xAFF39FB306F8E232((*uParam0)[iVar0], 0x00000000, 0x00000001);
			unk_0xFADC0A217229F6B5((*uParam0)[iVar0], 0x00000001);
		}
		iVar0++;
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		unk_0x8FB4E06C94958F84(iParam1);
		unk_0x8BE3D040D15AEA1D(iParam1, 0xFFFFFFFF);
		unk_0xFADC0A217229F6B5(iParam1, 0x00000001);
	}
}

void func_43()
{
	Global_4CD7 = 0x00000000;
	func_44();
}

void func_44()
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

bool func_45(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_59(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_46(sParam2, iParam3, 0x00000000);
}

int func_46(char* sParam0, int iParam1, bool bParam2)
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
					func_44();
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
		if (func_58(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_57();
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
				func_56();
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
				if (func_55())
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
			if (func_54())
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
			func_53();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_52();
		func_47();
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
		func_44();
	}
	return 0x00000000;
}

void func_47()
{
	if (!func_48())
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

int func_48()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_51())
	{
		return 0x00000000;
	}
	if (func_49(unk_0xD803B885F5E47A62()))
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

bool func_49(int iParam0)
{
	return func_50(iParam0, 0x00000014);
}

bool func_50(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_51()
{
	return 0xFFFFFFFF;
}

void func_52()
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

void func_53()
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

int func_54()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_55()
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

void func_56()
{
	if (func_21(0x0000000E))
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
		Global_4C1E = func_88();
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

void func_57()
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

bool func_58(int iParam0, int iParam1)
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

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_60(int iParam0, var uParam1)
{
	switch (iLocal_234)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1272.878f, -1532.84f, 36.4104f, 1339.482f, -1623.636f, 71.4792f, 105.1875f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x03068588A1FCED1A(iParam0)) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!func_114())
					{
						func_64(0x00000001);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_219))
					{
						func_41(iLocal_219);
					}
					if (!unk_0xE4EDC4B0E92C078B(iLocal_220))
					{
						iLocal_220 = func_38(iParam0, 0x00000000, 0x00000091);
						unk_0xF2D30B8ACAF12A39(iLocal_220, 0x00000000);
					}
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (!unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9()))
						{
							if (unk_0x9C66D99E63E8E24C(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) < 5f)
							{
								if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
								{
									unk_0x8FB4E06C94958F84(iParam0);
									unk_0xDD353D0E9C789D0E(&iLocal_48);
									unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
									unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00004E20, 0x00000400, 0x00000002);
									unk_0x75ABDC5F81978924(iLocal_48);
									unk_0x78ADC381772E3D54(iParam0, iLocal_48);
									unk_0xF82EA857DA10E0CD(&iLocal_48);
									if (unk_0xE4EDC4B0E92C078B(iLocal_220))
									{
										unk_0xF2D30B8ACAF12A39(iLocal_220, 0x00000001);
									}
									unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
									if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 45f))
									{
										func_43();
										SYSTEM::WAIT(0x00000000);
										func_45(&uLocal_53, "REGIAU", "REGIN_LR1F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										iLocal_234 = 0x00000001;
									}
								}
							}
							else if (iLocal_225 == 0x00000000)
							{
								func_45(&uLocal_53, "REGIAU", "REGIN_CAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								if (!unk_0xEB6A8945D1AC98A1(iParam0))
								{
									unk_0xDD353D0E9C789D0E(&iLocal_48);
									unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00004E20, 0x00000400, 0x00000002);
									unk_0xC6EB89C59F2AF6B8(0x00000000, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_wave_loop", 2f, -2f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
									unk_0x75ABDC5F81978924(iLocal_48);
									unk_0x78ADC381772E3D54(iParam0, iLocal_48);
									unk_0xF82EA857DA10E0CD(&iLocal_48);
								}
								iLocal_225 = 0x00000001;
							}
						}
						else
						{
							func_43();
							SYSTEM::WAIT(0x00000000);
							func_45(&uLocal_53, "REGIAU", "REGIN_POLICE", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iParam0))
							{
								unk_0xA3BF0AA5A2608191(iParam0);
								unk_0xF3268524E9BE6D6E(iParam0, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xFADC0A217229F6B5(iParam0, 0x00000001);
								iLocal_226 = 0x00000001;
							}
						}
					}
					else if (!unk_0xEB6A8945D1AC98A1(iParam0))
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0xDD353D0E9C789D0E(&iLocal_48);
							unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
							unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00004E20, 0x00000400, 0x00000002);
							unk_0x75ABDC5F81978924(iLocal_48);
							unk_0x78ADC381772E3D54(iParam0, iLocal_48);
							unk_0xF82EA857DA10E0CD(&iLocal_48);
							if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 45f))
							{
								func_43();
								SYSTEM::WAIT(0x00000000);
								func_45(&uLocal_53, "REGIAU", "REGIN_LR1F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								iLocal_234 = 0x00000001;
							}
						}
					}
				}
			}
			if (!unk_0xEB6A8945D1AC98A1((*uParam1)[0x00000002]))
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0x00000000, 0x00000001, 0x00000000) && !func_63())
				{
					iLocal_234 = 0x00000003;
				}
				else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0x00000000, 0x00000001, 0x00000000))
				{
					func_62(iParam0, uParam1);
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1((*uParam1)[0x00000002]))
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0x00000000, 0x00000001, 0x00000000) && !func_63())
				{
					iLocal_234 = 0x00000003;
				}
				else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0x00000000, 0x00000001, 0x00000000))
				{
					func_62(iParam0, uParam1);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(iParam0) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x28F5E4DA506AC0CA(vLocal_224, 13f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x8FB4E06C94958F84(iParam0);
				if (!unk_0xEB6A8945D1AC98A1(iParam0))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_48);
					unk_0x96167B03C5A77156(0x00000000, vLocal_224, 2f, 0x00004E20, 0.25f, 0x00000000, 32.2195f);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000400, 0x00000002);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
					unk_0x75ABDC5F81978924(iLocal_48);
					unk_0x78ADC381772E3D54(iParam0, iLocal_48);
					unk_0xF82EA857DA10E0CD(&iLocal_48);
					iLocal_48 = 0x00000000;
					if ((unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, 6f, 6f, 6f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
					}
				}
				iLocal_234 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(iParam0) && !func_75())
			{
				if (func_45(&uLocal_53, "REGIAU", "REGIN_LR1G", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_234 = 0x00000003;
				}
			}
			break;
		
		case 0x00000003:
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1273.098f, -1604.172f, 53.1535f, 1276.568f, -1615.127f, 56.7879f, 10f, 0x00000000, 0x00000001, 0x00000000) && !func_63())
			{
				func_61(iParam0);
				iLocal_234 = 0x00000004;
			}
			else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1298.546f, -1617.742f, 53.2254f, 1262.868f, -1629.36f, 64.2894f, 30.4375f, 0x00000000, 0x00000001, 0x00000000))
			{
				func_62(iParam0, uParam1);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if (SYSTEM::TIMERA() > 0x00001F40 && unk_0x5A91F08DF773C39D(iParam0, vLocal_224, 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 60f))
					{
						if (func_164())
						{
							unk_0xC6EB89C59F2AF6B8(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_a", 2f, -2f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							unk_0xC6EB89C59F2AF6B8(iParam0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						func_45(&uLocal_53, "REGIAU", "REGIN_HERE", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						SYSTEM::SETTIMERA(0x00000000);
					}
				}
				if ((unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006) && unk_0xE115347EA59F7B86(iParam0, unk_0x16F2683693E537C9())) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
					{
						func_62(iParam0, uParam1);
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_48);
				unk_0x93D47DFD0AE94949(0x00000000, 0x000001F4);
				unk_0x96167B03C5A77156(0x00000000, vLocal_224, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
				unk_0x75ABDC5F81978924(iLocal_48);
				unk_0xF82EA857DA10E0CD(&iLocal_48);
				iLocal_48 = 0x00000000;
			}
			func_76();
			SYSTEM::WAIT(0x00000000);
			if (!func_75())
			{
				func_45(&uLocal_53, "REGIAU", "REGIN_THRT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				iLocal_234 = 0x00000005;
			}
			break;
		
		case 0x00000005:
			func_37(uParam1);
			func_41(iLocal_220);
			bLocal_235 = 0x00000001;
			return 0x00000001;
			break;
	}
	return 0x00000001;
}

void func_61(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0xA3BF0AA5A2608191(iParam0);
		unk_0xDD353D0E9C789D0E(&iLocal_48);
		unk_0x96167B03C5A77156(0x00000000, 1286.037f, -1623.207f, 53.2297f, 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
		unk_0x8BE3D040D15AEA1D(0x00000000, 0xFFFFFFFF);
		unk_0x75ABDC5F81978924(iLocal_48);
		unk_0x78ADC381772E3D54(iParam0, iLocal_48);
		unk_0xF82EA857DA10E0CD(&iLocal_48);
		iLocal_48 = 0x00000000;
		unk_0x25C5402CC10F76CD(iParam0, 0x00000001);
		func_41(iLocal_220);
	}
}

void func_62(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam1)[iVar0]) && !unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if ((unk_0xE115347EA59F7B86((*uParam1)[iVar0], unk_0x16F2683693E537C9()) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), (*uParam1)[iVar0])) || unk_0xE115347EA59F7B86(iParam0, unk_0x16F2683693E537C9()))
			{
				func_76();
				if (!unk_0xEB6A8945D1AC98A1((*uParam1)[iVar0]))
				{
					unk_0xA3BF0AA5A2608191((*uParam1)[iVar0]);
					unk_0xDD353D0E9C789D0E(&iLocal_48);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8, 0x00000800, 0x00000002);
					unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_48);
					unk_0x78ADC381772E3D54((*uParam1)[iVar0], iLocal_48);
					unk_0xF82EA857DA10E0CD(&iLocal_48);
					unk_0xFADC0A217229F6B5((*uParam1)[iVar0], 0x00000001);
				}
				if (!unk_0xEB6A8945D1AC98A1(iParam0))
				{
					unk_0xA3BF0AA5A2608191(iParam0);
					unk_0xDD353D0E9C789D0E(&iLocal_48);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8, 0x00000800, 0x00000002);
					unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_48);
					unk_0x78ADC381772E3D54(iParam0, iLocal_48);
					unk_0xF82EA857DA10E0CD(&iLocal_48);
					unk_0xFADC0A217229F6B5(iParam0, 0x00000001);
				}
				iLocal_227 = 0x00000001;
			}
		}
		else
		{
			func_76();
			if (!unk_0xEB6A8945D1AC98A1((*uParam1)[iVar0]))
			{
				unk_0xA3BF0AA5A2608191((*uParam1)[iVar0]);
				unk_0xDD353D0E9C789D0E(&iLocal_48);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8, 0x00000800, 0x00000002);
				unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_48);
				unk_0x78ADC381772E3D54((*uParam1)[iVar0], iLocal_48);
				unk_0xF82EA857DA10E0CD(&iLocal_48);
				unk_0xFADC0A217229F6B5((*uParam1)[iVar0], 0x00000001);
			}
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				unk_0xA3BF0AA5A2608191(iParam0);
				unk_0xDD353D0E9C789D0E(&iLocal_48);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x000003E8, 0x00000800, 0x00000002);
				unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_48);
				unk_0x78ADC381772E3D54(iParam0, iLocal_48);
				unk_0xF82EA857DA10E0CD(&iLocal_48);
				unk_0xFADC0A217229F6B5(iParam0, 0x00000001);
			}
			iLocal_227 = 0x00000001;
		}
		iVar0++;
	}
}

int func_63()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
		{
			if (unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("rhino")))
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()) || unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_64(int iParam0)
{
	if (func_68())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_14(Global_1B40B))
		{
			func_65(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_14(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_66(func_67(iParam0), 0xFFFFFFFF);
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
					func_66(func_67(iParam0), 0xFFFFFFFF);
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
					func_66(func_67(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

void func_66(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

char* func_67(int iParam0)
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

int func_68()
{
	switch (func_69(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
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

int func_69(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_73(0x00000000))
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
		if (!func_71(iParam2))
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
			func_70(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_70(var uParam0, int iParam1)
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

bool func_71(int iParam0)
{
	return func_72(iParam0, Global_A1D7);
}

int func_72(int iParam0, int iParam1)
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

int func_73(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_71(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_74(vector3 vParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vParam0) > IntToFloat(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_75()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_76()
{
	Global_4CD7 = 0x00000000;
	func_77();
}

void func_77()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_78(int iParam0, int iParam1)
{
	if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
	{
		if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
	{
		if ((unk_0x65BC0B7172CA52DD(iParam0) - unk_0x7F6DC62EA9922664(iParam0)) > iParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_79(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	
	fParam6 = fParam6;
	if (!bParam5)
	{
		iVar0 = 0x00000000;
		while (iVar0 < *iParam0)
		{
			if (func_80((*iParam0)[iVar0], uParam2, uParam3, iParam4, bParam5, fParam6, iParam7))
			{
				*uParam1 = iVar0;
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_80(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	bVar2 = 0x00000000;
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !bParam4)
	{
		if (unk_0xE3614539F8B5C807(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !bParam4)
		{
			vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			vVar4 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
			fVar5 = SYSTEM::VDIST(vVar3, vVar4);
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 0x00000003))
			{
				if (func_78(iParam0, iParam6))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 0x00000003;
					func_84(iParam0);
					return 0x00000001;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 0x00000001))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0xD3DCEC81D13AAFB1(vVar4, fParam5, 0x00000001))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 0x00000001;
					func_84(iParam0);
					return 0x00000001;
				}
				if (unk_0x723EE7F83DF1497D(vVar4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0x00000000))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 0x00000001;
					func_84(iParam0);
					return 0x00000001;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 0x00000002))
			{
				fVar0 = unk_0xF428D43975FB0E0E(unk_0x16F2683693E537C9());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
				{
					if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0xF649DD3BF44195C7(iParam0, unk_0x16F2683693E537C9(), 0x00000011))
							{
								func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_85("	aggro Ped knows player is pointing gun\n");
								func_81("		lockOnTimer = ", *uParam2);
								func_85("\n");
								func_81("		time since not LockedOn = ", (unk_0x1C0640BA9A7327B3() - iLocal_45));
								func_85("\n");
								bVar2 = 0x00000001;
								if (unk_0x1C0640BA9A7327B3() > (iLocal_45 + *uParam2))
								{
									func_85("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 0x00000002;
									func_84(iParam0);
									return 0x00000001;
								}
							}
						}
						else
						{
							bVar2 = 0x00000000;
						}
					}
					else
					{
						bVar2 = 0x00000000;
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 0x00000000))
			{
				if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					func_85("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_85("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0x00000000;
					func_84(iParam0);
					return 0x00000001;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_45 = unk_0x1C0640BA9A7327B3();
	}
	return 0x00000000;
}

void func_81(char* sParam0, int iParam1)
{
	func_83(sParam0);
	func_82(iParam1);
}

void func_82(int iParam0)
{
	if (iParam0 > 0x00000000)
	{
	}
}

void func_83(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

void func_84(int iParam0)
{
	unk_0x0FB22E2FED7BCC7E(iParam0);
}

void func_85(char* sParam0)
{
	func_83(sParam0);
}

int func_86()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000005);
	if (iVar0 == 0x00000000)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iVar0 == 0x00000001)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iVar0 == 0x00000002)
	{
		return joaat("weapon_pistol");
	}
	else if (iVar0 == 0x00000003)
	{
		return joaat("weapon_pistol");
	}
	else
	{
		return joaat("weapon_pistol");
	}
	return joaat("weapon_pistol");
}

void func_87(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_88()
{
	func_20();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_89(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_90(int iParam0)
{
	if (unk_0x338D6FF72D84D90F())
	{
		if (func_91(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			if (func_21(0x00000006) || func_21(0x00000007))
			{
				return 0x00000001;
			}
			else
			{
				return func_91(0x00000003);
			}
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			if (func_71(0x00000005))
			{
				if (func_92(0x00000004))
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_92(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_88();
				if (!func_22(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_100()) || Global_1B05D) || Global_7832) || func_99()) || func_58(0x00000008, 0xFFFFFFFF)) || func_98()) || func_97()) || func_96()) || func_95()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_100()) || Global_7832) || func_99()) || func_58(0x00000008, 0xFFFFFFFF)) || func_96()) || func_98()) || func_97()) || func_95()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_100()) || Global_1B05D) || Global_7832) || func_99()) || func_58(0x00000008, 0xFFFFFFFF)) || func_96()) || func_98()) || func_97()) || func_95()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_100()) || Global_1B05D) || Global_7832) || func_99()) || func_58(0x00000008, 0xFFFFFFFF)) || func_98()) || func_97()) || func_95()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_100() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_58(0x00000008, 0xFFFFFFFF)) || func_95()) || func_94()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_58(0x00000008, 0xFFFFFFFF) || func_98()) || func_97()) || func_94()) || func_93())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_100()) || Global_7832) || func_99()) || func_58(0x00000008, 0xFFFFFFFF)) || func_97()) || func_96()) || func_95()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_100()) || func_97()) || Global_1B05D) || Global_7832) || func_99()) || Global_A664) || func_58(0x00000008, 0xFFFFFFFF)) || func_96()) || func_94()) || func_95()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_100()) || Global_1B05D) || Global_7832) || func_99()) || func_58(0x00000008, 0xFFFFFFFF)) || func_96()) || func_94()) || func_98()) || func_97()) || func_95())
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

var func_93()
{
	return Global_181DF.f_1;
}

int func_94()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_95()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_96()
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

bool func_97()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_98()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_99()
{
	return Global_14086D;
}

int func_100()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_101()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_46) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_112())
		{
			return 0x00000000;
		}
	}
	if (func_108())
	{
		return 0x00000001;
	}
	if (func_102(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_102(float fParam0, bool bParam1)
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
		if (func_22(func_88()))
		{
			iVar5 = func_19();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_103(iVar1, &Var0);
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

void func_103(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_104(uParam1, "Abigail1", func_106(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_104(uParam1, "Abigail2", func_106(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_104(uParam1, "Barry1", func_106(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_104(uParam1, "Barry2", func_106(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_104(uParam1, "Barry3", func_106(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_104(uParam1, "Barry3A", func_106(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_104(uParam1, "Barry3C", func_106(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_104(uParam1, "Barry4", func_106(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_104(uParam1, "Dreyfuss1", func_106(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_104(uParam1, "Epsilon1", func_106(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_104(uParam1, "Epsilon2", func_106(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_104(uParam1, "Epsilon3", func_106(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_104(uParam1, "Epsilon4", func_106(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_104(uParam1, "Epsilon5", func_106(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_104(uParam1, "Epsilon6", func_106(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_104(uParam1, "Epsilon7", func_106(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_104(uParam1, "Epsilon8", func_106(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_104(uParam1, "Extreme1", func_106(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_104(uParam1, "Extreme2", func_106(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_104(uParam1, "Extreme3", func_106(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_104(uParam1, "Extreme4", func_106(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_104(uParam1, "Fanatic1", func_106(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_104(uParam1, "Fanatic2", func_106(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_104(uParam1, "Fanatic3", func_106(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_104(uParam1, "Hao1", func_106(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_104(uParam1, "Hunting1", func_106(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_104(uParam1, "Hunting2", func_106(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_104(uParam1, "Josh1", func_106(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_104(uParam1, "Josh2", func_106(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_104(uParam1, "Josh3", func_106(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_104(uParam1, "Josh4", func_106(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_104(uParam1, "Maude1", func_106(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_104(uParam1, "Minute1", func_106(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_104(uParam1, "Minute2", func_106(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_104(uParam1, "Minute3", func_106(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_104(uParam1, "MrsPhilips1", func_106(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_104(uParam1, "MrsPhilips2", func_106(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_104(uParam1, "Nigel1", func_106(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_104(uParam1, "Nigel1A", func_106(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_104(uParam1, "Nigel1B", func_106(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_105(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_104(uParam1, "Nigel1C", func_106(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_105(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_104(uParam1, "Nigel1D", func_106(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_105(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_104(uParam1, "Nigel2", func_106(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_104(uParam1, "Nigel3", func_106(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_104(uParam1, "Omega1", func_106(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_104(uParam1, "Omega2", func_106(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_104(uParam1, "Paparazzo1", func_106(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_104(uParam1, "Paparazzo2", func_106(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_104(uParam1, "Paparazzo3", func_106(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_104(uParam1, "Paparazzo3A", func_106(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_104(uParam1, "Paparazzo3B", func_106(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_104(uParam1, "Paparazzo4", func_106(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_104(uParam1, "Rampage1", func_106(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_104(uParam1, "Rampage3", func_106(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_104(uParam1, "Rampage4", func_106(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_104(uParam1, "Rampage5", func_106(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_104(uParam1, "Rampage2", func_106(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_105(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_104(uParam1, "TheLastOne", func_106(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_104(uParam1, "Tonya1", func_106(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_104(uParam1, "Tonya2", func_106(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_104(uParam1, "Tonya3", func_106(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_104(uParam1, "Tonya4", func_106(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_104(uParam1, "Tonya5", func_106(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_105(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_104(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_105(int iParam0)
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

struct<2> func_106(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_107(iParam0) };
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

struct<2> func_107(int iParam0)
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

int func_108()
{
	if (func_111() && !func_112())
	{
		return 0x00000001;
	}
	if (func_110() && func_109())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_109()
{
	return Global_1B2FC > 0x00000000;
}

int func_110()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_111()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_112()
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

int func_113()
{
	if (!func_71(0x00000005))
	{
		return 0x00000001;
	}
	if (func_108())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_112())
		{
			return 0x00000000;
		}
	}
	if (func_102(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_114()
{
	if ((Global_1B40B == func_29() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_115(int iParam0, struct<5> Param1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 0x00000001)
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (iLocal_49 - 0x00000001))
		{
			unk_0x523BCC9DC80CD82F(Param1[iVar0]);
			iVar0++;
		}
		unk_0x523BCC9DC80CD82F(Param1.f_4);
		unk_0x3F423BF5B8125A50("random@gang_intimidation@");
		unk_0x13896FDECC859926("RE28_OS");
		if (!unk_0xB87F6CF6E5628C67(Param1.f_4))
		{
			return 0x00000000;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= (iLocal_49 - 0x00000001))
		{
			if (!unk_0xB87F6CF6E5628C67(Param1[iVar0]))
			{
				return 0x00000000;
			}
			iVar0++;
		}
		if (unk_0xB4AE0788C1587752("random@gang_intimidation@"))
		{
			return 0x00000001;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (iLocal_49 - 0x00000001))
		{
			unk_0x71199B01895C6202(Param1[iVar0]);
			iVar0++;
		}
		unk_0x71199B01895C6202(Param1.f_4);
	}
	return 0x00000000;
}

void func_116(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_29();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_118(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_117();
}

void func_117()
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

void func_118(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_119(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_29();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_151())
		{
			return 0x00000000;
		}
	}
	vLocal_46 = { vParam0 };
	bVar0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_112())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_4(0x00000000))
		{
			return 0x00000000;
		}
		if (func_108())
		{
			return 0x00000000;
		}
		if (func_150())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_22(func_88()))
		{
			if (func_102(100f, 0x00000001) != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_46.z) > 50f)
			{
				return 0x00000000;
			}
		}
		if (!func_149(iParam1))
		{
			return 0x00000000;
		}
		if (func_22(func_88()))
		{
			if (func_148(func_88()) == 0x00000004 || func_148(func_88()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_22(func_88()))
		{
			if (!func_147(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_146(Global_1B416.f_619E.f_2B[iParam1]))
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
		if (func_145())
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
		if (!func_92(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_71(0x00000005))
		{
			return 0x00000000;
		}
		if (func_144(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_144(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_149(0x0000001E) && !func_144(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_22(func_88()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_143(iVar4))
				{
					if (func_121(iVar2))
					{
						if (!func_120(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_88() != iVar2)
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

bool func_120(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_122(iVar0);
}

int func_122(int iParam0)
{
	return func_123(iParam0, 0x00000001);
}

int func_123(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_143(iParam0))
	{
		return 0x00000000;
	}
	func_124(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_124(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_125(func_136(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_125(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_135(iParam0, iParam1))
	{
		iVar0 = func_134(iParam1);
		iVar1 = func_132(iParam0);
		iVar2 = (func_132(iParam0) - func_132(iParam1));
		iVar3 = (func_134(iParam0) - func_134(iParam1));
		iVar4 = (func_131(iParam0) - func_131(iParam1));
		iVar5 = (func_130(iParam0) - func_130(iParam1));
		iVar6 = (func_129(iParam0) - func_129(iParam1));
		iVar7 = (func_128(iParam0) - func_128(iParam1));
	}
	else
	{
		iVar0 = func_134(iParam0);
		iVar1 = func_132(iParam1);
		iVar2 = (func_132(iParam1) - func_132(iParam0));
		iVar3 = (func_134(iParam1) - func_134(iParam0));
		iVar4 = (func_131(iParam1) - func_131(iParam0));
		iVar5 = (func_130(iParam1) - func_130(iParam0));
		iVar6 = (func_129(iParam1) - func_129(iParam0));
		iVar7 = (func_128(iParam1) - func_128(iParam0));
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
		iVar4 = (iVar4 + func_127(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_126(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_126(float fParam0, float fParam1, float fParam2)
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

int func_127(int iParam0, int iParam1)
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

int func_128(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_129(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_130(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_131(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_132(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_133(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_133(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_134(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_143(iParam1) || !func_143(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_131(iParam0);
	iVar1 = func_131(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_129(iParam0);
	iVar1 = func_129(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_128(iParam0);
	iVar1 = func_128(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_136()
{
	var uVar0;
	
	func_142(&uVar0, unk_0x4460E481B9E33ADA());
	func_141(&uVar0, unk_0x8D199E381D262EEF());
	func_140(&uVar0, unk_0xD8A54335F18763BA());
	func_139(&uVar0, unk_0x972A296334C9D57B());
	func_138(&uVar0, unk_0x118229AD063C3C1D());
	func_137(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_137(var uParam0, int iParam1)
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

void func_138(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_139(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_132(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_127(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_140(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_141(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_143(int iParam0)
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
	iVar0 = func_128(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_129(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_130(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_132(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_134(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_131(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_127(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_144(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_145()
{
	func_56();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_146(int iParam0)
{
	return func_135(func_136(), iParam0);
}

int func_147(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_88();
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

int func_148(int iParam0)
{
	if (!func_22(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_149(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_151())
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

int func_150()
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

int func_151()
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

void func_152(struct<6> Param0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 == 0x00000000)
	{
	}
	if (iLocal_228)
	{
		unk_0xB547E3FFEB27073E();
		unk_0xE342F209E49C5314(vLocal_224 - Vector(10f, 10f, 10f), vLocal_224 + Vector(10f, 10f, 10f), 0x00000001, 0x00000001);
		unk_0x51B096AAC60548C1(1f);
		func_41(iLocal_218[0x00000000]);
		func_41(iLocal_218[0x00000001]);
		func_41(iLocal_218[0x00000002]);
		iVar0 = 0x00000000;
		while (iVar0 <= (iLocal_49 - 0x00000001))
		{
			if (!unk_0xEB6A8945D1AC98A1((*iParam2)[iVar0]))
			{
			}
			iVar0++;
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam3))
		{
			unk_0x11AD11297DC58CC7(iParam3, 0x00000000);
		}
		func_89(0x00000000);
		func_115(0x00000000, Param0);
	}
	func_153(0xFFFFFFFF);
	unk_0x10FAF14A60A0DBE1();
}

void func_153(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_29();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_114())
	{
		func_157(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_156(0x00007530);
		StringCopy(&cVar0, func_155(Global_1B40B, 0x00000001), 64);
		if (func_28(Global_1B40B) > 0x00000000)
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
	func_154(&Global_786B);
	Global_1B40C = 0x00000000;
	func_118(0xFFFFFFFF);
}

void func_154(var uParam0)
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

char* func_155(int iParam0, bool bParam1)
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

void func_156(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_157(int iParam0)
{
	func_158(iParam0, 0x00000000, func_163(iParam0));
}

void func_158(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_136();
	func_161(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_160(iParam0, &uVar0);
	Var1 = { func_159(&uVar0) };
}

struct<16> func_159(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_130(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_129(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_128(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_131(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_134(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_132(*uParam0), 64);
	return Var0;
}

void func_160(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_161(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_132(*uParam0);
	iVar1 = func_134(*uParam0);
	iVar2 = func_131(*uParam0);
	iVar3 = func_130(*uParam0);
	iVar4 = func_129(*uParam0);
	iVar5 = func_128(*uParam0);
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
	iVar6 = func_127(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_127(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_162(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_162(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_142(uParam0, iParam1);
	func_141(uParam0, iParam2);
	func_140(uParam0, iParam3);
	func_138(uParam0, iParam5);
	func_139(uParam0, iParam4);
	func_137(uParam0, iParam6);
}

int func_163(int iParam0)
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

int func_164()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

