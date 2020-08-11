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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_65 = 0f;
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	var uLocal_68 = 16;
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
	float fLocal_235 = 0f;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	var uLocal_238 = 0;
	int iLocal_239 = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	vector3 vLocal_244 = { 0f, 0f, 0f };
	int iLocal_245 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 0x00000003;
	iLocal_44 = 0x00000001;
	iLocal_45 = 0x00000041;
	iLocal_46 = 0x00000031;
	iLocal_47 = 0x00000040;
	vLocal_64 = { -1124.392f, -514.7001f, 33.21493f };
	fLocal_65 = 200f;
	vLocal_66 = { 2490f, 3777f, 2402.879f };
	vLocal_67 = { -2052f, 3237f, 1450.078f };
	fLocal_235 = 3f;
	iLocal_236 = 0x00000002;
	iLocal_245 = joaat("s_m_m_security_01");
	bVar0 = 0x00000000;
	if (unk_0x2EBF608FFE6CA406(0x00000052))
	{
		func_77();
	}
	func_76(0x0000001E);
	if (func_75(unk_0x16F2683693E537C9()))
	{
		while (bVar0 == 0x00000000)
		{
			bVar0 = ((unk_0x2C1AA3A291786CDC() == 0x00000000 && func_70() == 0x00000000) && func_69(unk_0x16F2683693E537C9(), vLocal_64, fLocal_65));
			func_67();
		}
	}
	func_66(0x00000041, 0x00000000);
	func_65(0x00000001);
	func_64(joaat("akuma"), 0x00000001);
	func_64(iLocal_245, 0x00000001);
	while (0x00000001)
	{
		func_75(unk_0x16F2683693E537C9());
		vLocal_244 = { unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()) };
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
		{
			func_63(&uLocal_233);
			func_3(&uLocal_234);
			if (func_2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000007, 0x00000000, 0x00000000))
			{
				func_66(0x00000041, 0x00000001);
				func_1(0x0000001E);
				func_77();
			}
		}
		func_67();
	}
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0x0000001F)
	{
		iVar0 = 0x00000009;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 0x0000000A;
		iVar1 = (iParam0 - 0x00000020);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_2(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
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

void func_3(var uParam0)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	
	switch (*uParam0)
	{
		case 0x00000000:
			func_59(&iLocal_239);
			func_66(0x00000041, 0x00000000);
			func_58(&iLocal_243);
			*uParam0++;
			break;
		
		case 0x00000001:
			if (func_57(unk_0x16F2683693E537C9(), -1210.236f, -579.875f, 26.33215f, -1204.725f, -586.3573f, 29.56773f, 6f))
			{
				fLocal_235 = 0.25f;
				*uParam0++;
				return;
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				fVar1 = unk_0x3DCA5D50DD292443(func_56(vLocal_244, 0.73f, 0.683f, -0.013f));
				if (unk_0x755FF954DAE327E1(fVar1) < 25f)
				{
					if (func_57(iVar2, -1211.774f, -580.9299f, 26.33095f, -1208.127f, -585.3617f, 29.66056f, 4.5f))
					{
						fLocal_235 = 3f;
						*uParam0++;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				func_54(iVar2, fLocal_235, iLocal_236, 0x3F000000, 0x00000000, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0x93D47DFD0AE94949(unk_0x16F2683693E537C9(), 0xFFFFFFFF);
			}
			if (func_52(-1210.152f, -578.0859f, 26.7238f))
			{
				func_51(&uLocal_68, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
				if (func_50())
				{
					bVar0 = func_34(&uLocal_68, "AMSOLAU", "AMSOL_HERE", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					bVar0 = func_34(&uLocal_68, "AMSOLAU", "AMSOL_WORK", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				if (bVar0)
				{
					*uParam0++;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		
		case 0x00000003:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (func_54(iVar2, fLocal_235, iLocal_236, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
				{
					*uParam0++;
					return;
				}
			}
			*uParam0++;
			break;
		
		case 0x00000004:
			if (!unk_0x2A325BF7BC6DD316(unk_0x16F2683693E537C9()) && !unk_0x25037C66EB32B076())
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				*uParam0++;
			}
			break;
		
		case 0x00000005:
			func_5(0x00000000);
			*uParam0++;
			break;
		
		case 0x00000006:
			func_4(&iLocal_239, -1206.84f, -583.2034f, 26.1738f, 311.4116f);
			*uParam0++;
			break;
		
		case 0x00000007:
			if (!func_57(unk_0x16F2683693E537C9(), -1210.236f, -579.875f, 26.33215f, -1204.725f, -586.3573f, 29.56773f, 6f))
			{
				func_59(&iLocal_239);
				*uParam0++;
			}
			break;
		
		case 0x00000008:
			if (iLocal_241 == 0x00000000)
			{
				func_77();
			}
			break;
	}
}

void func_4(int iParam0, vector3 vParam1, float fParam2)
{
	iParam0->f_1 = unk_0x122AAB0B1D6F55AD(joaat("akuma"), vParam1, fParam2, 0x00000001, 0x00000001, 0x00000000);
	if (func_75(iParam0->f_1))
	{
		unk_0x1E9649458B15960F(iParam0->f_1, 0x00000001);
		unk_0x20641932E5104B25(iParam0->f_1, 0x00000000, 0x00000000);
		unk_0x4A4806F9D471E491(iParam0->f_1, 0x00000000, 0x00000000);
		unk_0x56FDC9ADE35F7DB0(iParam0->f_1, 0x00000000, 0x00000001, 0x00000000);
		*iParam0 = unk_0x852A19533F896693(iParam0->f_1, 0x0000001A, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 0xFFFFFFFF, 0x00000001, 0x00000001);
		if (func_75(*iParam0))
		{
			unk_0x11AD11297DC58CC7(*iParam0, 0x00000001);
			unk_0x4A4806F9D471E491(*iParam0, 0x00000000, 0x00000000);
			unk_0x33CE5A9E32EA10B2(*iParam0, 0x00000001);
		}
	}
}

void func_5(int iParam0)
{
	func_66(0x00000041, 0x00000001);
	unk_0x842F1AEB2FCC00B7(-1039.504f, -477.7876f, 35.32967f, -1062.444f, -469.5685f, 40.62086f, 13f, 0x00000001);
	func_6(0x00000087, iParam0);
	func_6(0x00000088, iParam0);
	unk_0x842F1AEB2FCC00B7(-1039.504f, -477.7876f, 35.32967f, -1062.444f, -469.5685f, 40.62086f, 13f, 0x00000001);
	func_6(0x00000089, iParam0);
	func_6(0x0000008A, iParam0);
}

void func_6(int iParam0, int iParam1)
{
	func_7(iParam0, iParam1);
	unk_0x5D96D8530B3D0904(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
	Global_933A[iParam0] = iParam1;
	Global_1B416.f_1C58[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 0x000000E2)
	{
		if (Global_12B4E)
		{
			iVar0 = Global_2537E2.f_4B[iParam0];
		}
		else
		{
			iVar0 = Global_1B416.f_1C58[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
		{
			if ((((iParam1 == 0x00000004 || iParam1 == 0x00000003) || iParam1 == 0x00000005) || iParam1 == 0x00000006) || iParam1 == 0x00000002)
			{
				unk_0x5D96D8530B3D0904(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
				Global_933A[iParam0] = iParam1;
			}
			else if (Global_12B4E)
			{
				Global_2537E2.f_4B[iParam0] = iParam1;
			}
			else
			{
				Global_1B416.f_1C58[iParam0] = iParam1;
			}
			unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
			func_9(iParam0);
			if (unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
			{
				func_8(iParam0);
			}
		}
	}
}

void func_8(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_9511.f_E4[(iParam0 / 0x00000020)], (iParam0 % 0x00000017)))
	{
		unk_0x5D96D8530B3D0904(&(Global_9511.f_E4[(iParam0 / 0x00000020)]), (iParam0 % 0x00000017));
		Global_9511[Global_9511.f_E3] = iParam0;
		Global_9511.f_E3++;
	}
}

void func_9(int iParam0)
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_31())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_30(iParam0) };
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000002))
	{
		func_16(iParam0, &Var0);
	}
	if (!unk_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (unk_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar1 = 0x00000000;
	bVar2 = 0x00000000;
	fVar4 = unk_0x0EB28750412C3A5A(Var0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001);
	if ((unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) && Global_933A[iParam0] == 0x00000002) && fVar4 > 210f)
	{
		unk_0x0674E58A79778E99(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		Global_9174[iParam0] = 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("startup_positioning")) == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_9257[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
		{
			if (fVar4 < 25f)
			{
				if (Global_181EC.f_157 == 0x00000000)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						Global_181EC.f_157 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
					}
				}
				iVar5 = Global_181EC.f_157;
				iVar6 = unk_0xFBD08BECC9B87937(Var0);
				if (iVar5 == iVar6 && iVar5 != 0x00000000)
				{
					unk_0x5D96D8530B3D0904(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					Global_933A[iParam0] = 0x00000003;
					unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
				}
			}
			unk_0x0674E58A79778E99(&(Global_9257[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
	{
		iVar3 = Global_933A[iParam0];
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000000))
	{
		if (Global_1B416.f_2378)
		{
			iVar3 = func_12(iParam0);
		}
		else
		{
			iVar3 = 0x00000000;
		}
		if (func_11(0x0000000E))
		{
			iVar3 = 0x00000000;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000001) && unk_0x8A22C4C08282BF26(joaat("ambient_solomon")) == 0x00000000)
	{
		if (func_10())
		{
			iVar3 = 0x00000000;
		}
		else
		{
			iVar3 = 0x00000001;
		}
	}
	else
	{
		iVar3 = Global_1B416.f_1C58[iParam0];
	}
	if (Global_941D[iParam0] != iVar3)
	{
		bVar1 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) || (Global_9174[iParam0] == 0x00000000 && Global_933A[iParam0] != 0x00000002))
		{
			bVar1 = 0x00000001;
		}
	}
	if (bVar1)
	{
		if (!Global_9161)
		{
		}
		else
		{
			if (!unk_0x76395FF5E8D5E643(Var0.f_5))
			{
				unk_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0x00000000, 0x00000000, 0x00000000);
			}
			switch (iVar3)
			{
				case 0x00000001:
					if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000003))
					{
						bVar7 = 0x00000001;
					}
					else if (fVar4 > 3f || unk_0x755FF954DAE327E1(unk_0x9CED8DAD53D1A397(Var0.f_5)) <= 0.015f)
					{
						iVar8 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
						iVar9 = unk_0xFBD08BECC9B87937(Var0);
						if (iVar8 != iVar9 || iVar8 == 0x00000000)
						{
							bVar7 = 0x00000001;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
						}
						unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
						bVar2 = 0x00000001;
					}
					break;
				
				case 0x00000004:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000002:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000000:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000001);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000003:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, 0x00000000, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000005:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000006:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				}
		}
		if (bVar2)
		{
			unk_0x0674E58A79778E99(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
			Global_941D[iParam0] = iVar3;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) && Global_933A[iParam0] != 0x00000002)
	{
		unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		func_8(iParam0);
		if (Global_9174[iParam0] < 0x00000002)
		{
			Global_9174[iParam0]++;
		}
	}
}

int func_10()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000000;
	}
	switch (func_70())
	{
		case 0x00000000:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000041])
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000042])
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000041])
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

bool func_11(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_12(int iParam0)
{
	int iVar0;
	
	iVar0 = func_70();
	if (func_14(iParam0))
	{
		return 0x00000001;
	}
	if (iParam0 == 0x00000031)
	{
		if (iVar0 == 0x00000001)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000005], 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000006], 0x00000000))
			{
				return 0x00000000;
			}
		}
		if (func_13(iVar0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000005], iVar0))
			{
				return 0x00000000;
			}
		}
	}
	switch (iParam0)
	{
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			if (iVar0 == 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000000], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_13(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000000], iVar0))
				{
					if (iParam0 != 0x00000028)
					{
						return 0x00000000;
					}
					else
					{
						return 0x00000001;
					}
				}
			}
			break;
		
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
			if (iVar0 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000005], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_13(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000005], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000032:
			if (iVar0 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000006], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_13(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000006], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000033:
		case 0x00000034:
			if (iVar0 == 0x00000002)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000002], 0x00000000))
				{
					return 0x00000000;
				}
				if (func_13(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000002], iVar0))
					{
						return 0x00000000;
					}
				}
			}
			else if (iVar0 == 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000001], 0x00000000))
				{
					return 0x00000000;
				}
				if (func_13(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000001], iVar0))
					{
						return 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000035:
			if (iVar0 == 0x00000002)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000003], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_13(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000003], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		default:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

bool func_13(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_14(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 0x00000028 || iParam0 == 0x00000031) || iParam0 == 0x00000034)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				iVar0 = unk_0x134B62B726CEC8E6(func_15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 0x00000001;
						break;
					}
				}
			}
	}
	return 0x00000000;
}

int func_15(int iParam0)
{
	return iParam0;
}

void func_16(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4, 0x00000002))
	{
		return;
	}
	iVar0 = func_19();
	iVar1 = func_18(iVar0);
	switch (iParam0)
	{
		case 0x00000085:
		case 0x00000086:
		case 0x000000C9:
		case 0x000000CA:
			if (func_17(iParam0))
			{
				if (iVar1 < 0x00000013)
				{
					if (iVar1 >= 0x00000007)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000013)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000007)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000C7:
		case 0x000000C8:
		case 0x000000CB:
		case 0x000000CC:
			if (func_17(iParam0))
			{
				if (iVar1 < 0x00000012)
				{
					if (iVar1 >= 0x00000007)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000012)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000007)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x0000008D:
		case 0x0000008E:
			if (func_17(iParam0))
			{
				if ((unk_0x8A22C4C08282BF26(joaat("jewelry_heist")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("jewelry_setup1")) == 0x00000000) && !Global_1B416.f_2378.f_63.f_3A[0x00000004])
				{
					if (iVar1 < 0x00000015)
					{
						if (iVar1 >= 0x00000007)
						{
							Global_1B416.f_1C58[iParam0] = 0x00000000;
							unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_1B416.f_2378.f_63.f_3A[0x00000004])
				{
					Global_1B416.f_1C58[iParam0] = 0x00000000;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (Global_1B416.f_2378.f_63.f_3A[0x00000004])
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			else if (unk_0x8A22C4C08282BF26(joaat("jewelry_heist")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("jewelry_setup1")) == 0x00000000)
			{
				if (iVar1 >= 0x00000015)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 18f)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000001;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else if (iVar1 < 0x00000007)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 18f)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000001;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
			}
			break;
		
		case 0x00000091:
		case 0x00000092:
		case 0x0000008F:
		case 0x00000090:
			if (func_17(iParam0))
			{
				if (iVar1 < 0x00000014)
				{
					if (iVar1 >= 0x00000009)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000014)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 40f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000009)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 40f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000093:
		case 0x00000094:
			if (!func_17(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x00000098:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
			if (!func_17(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(joaat("assassin_valet")) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (unk_0x8A22C4C08282BF26(joaat("assassin_valet")) > 0x00000000)
			{
				Global_1B416.f_1C58[iParam0] = 0x00000000;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x0000009E:
		case 0x0000009F:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000046 /*34*/].f_6) == 0x00000000)
			{
				if (!func_17(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000A0:
		case 0x000000A1:
			if (unk_0x8A22C4C08282BF26(joaat("omega2")) == 0x00000000)
			{
				if (!func_17(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			if (!func_17(iParam0) && unk_0x8A22C4C08282BF26(Global_15DBC[0x0000001A /*34*/].f_6) == 0x00000000)
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			else
			{
				return;
			}
			break;
		
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
			if (!func_17(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000002B /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000BE:
		case 0x000000BF:
			if (!func_17(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000C1:
			if (!func_17(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000005D /*34*/].f_6) > 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000C6:
			if (!func_17(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x00000050:
			if (!func_17(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000008 /*34*/].f_6) == 0x00000000 && unk_0x8A22C4C08282BF26(Global_15DBC[0x0000000A /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000CD:
		case 0x000000CE:
			if (!func_17(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000002F /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000CF:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000046 /*34*/].f_6) == 0x00000000)
			{
				if (!func_17(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D3:
		case 0x000000D2:
		case 0x000000D4:
		case 0x000000D5:
		case 0x000000D6:
		case 0x000000D7:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000030 /*34*/].f_6) == 0x00000000)
			{
				if (!func_17(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000063:
		case 0x00000064:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000027 /*34*/].f_6) == 0x00000000)
			{
				if (!func_17(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000D8:
			if (!func_17(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000D9:
		case 0x000000DA:
			if (!func_17(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000DB:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000DE:
			if (func_17(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000000;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
	}
}

bool func_17(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_30(iParam0) };
	iVar1 = unk_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar1 == 0x00000001 || iVar1 == 0x00000004) || iVar1 == 0x00000002);
}

int func_18(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

var func_19()
{
	var uVar0;
	
	func_29(&uVar0, unk_0x4460E481B9E33ADA());
	func_28(&uVar0, unk_0x8D199E381D262EEF());
	func_27(&uVar0, unk_0xD8A54335F18763BA());
	func_22(&uVar0, unk_0x972A296334C9D57B());
	func_21(&uVar0, unk_0x118229AD063C3C1D());
	func_20(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_20(var uParam0, int iParam1)
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

void func_21(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_22(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_26(*uParam0);
	iVar1 = func_24(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_23(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_23(int iParam0, int iParam1)
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

var func_24(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_25(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_25(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_26(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_27(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_28(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_29(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

struct<7> func_30(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 0x6B918EA1;
			break;
		
		case 0x00000001:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 0x53A940AB;
			break;
		
		case 0x00000002:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = 0x86EF4558;
			break;
		
		case 0x00000003:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 0x6B1985F9;
			break;
		
		case 0x00000004:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 0x05BB2ED2;
			break;
		
		case 0x00000005:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = 0xEF3F0B86;
			break;
		
		case 0x00000006:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 0x0AEC2A1A;
			break;
		
		case 0x00000007:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 0x2D336EA8;
			break;
		
		case 0x00000008:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = 0xC04458CF;
			break;
		
		case 0x00000009:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 0x75554302;
			break;
		
		case 0x0000000A:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = 0x8039A343;
			break;
		
		case 0x0000000B:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = 0xAC597B82;
			break;
		
		case 0x0000000C:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = 0x8BC342BA;
			break;
		
		case 0x0000000D:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 0x49173D5F;
			break;
		
		case 0x0000000E:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 0x4104CC95;
			break;
		
		case 0x0000000F:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 0x357C3584;
			break;
		
		case 0x00000010:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 0x4152D190;
			break;
		
		case 0x00000011:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 0x2FCD2E89;
			break;
		
		case 0x00000012:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = 0xF5FC937D;
			break;
		
		case 0x00000013:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = 0x8C9DC0BD;
			break;
		
		case 0x00000014:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 0x70B93241;
			break;
		
		case 0x00000015:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 0x49B4E441;
			break;
		
		case 0x00000016:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 0x7610BDED;
			break;
		
		case 0x00000017:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 0x50A152BD;
			break;
		
		case 0x00000018:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = 0xDE3B10AB;
			break;
		
		case 0x00000019:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 0x4C93B88A;
			break;
		
		case 0x0000001A:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 0x0F9B8B5A;
			break;
		
		case 0x0000001B:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 0x0CF90621;
			break;
		
		case 0x0000001C:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 0x6B5B357A;
			break;
		
		case 0x0000001D:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = 0x817161A6;
			break;
		
		case 0x0000001E:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 0x4E3E0F3D;
			break;
		
		case 0x0000001F:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = 0xDC882BD3;
			break;
		
		case 0x00000020:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = 0xF030709F;
			break;
		
		case 0x00000021:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = 0xB36A7A60;
			break;
		
		case 0x00000022:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 0x1204D709;
			break;
		
		case 0x00000023:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = 0xD75B3EC1;
			break;
		
		case 0x00000024:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = 0x83A1ACAC;
			break;
		
		case 0x00000025:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = 0xA6CEF378;
			break;
		
		case 0x00000026:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x8301B653;
			break;
		
		case 0x00000027:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x813232B0;
			break;
		
		case 0x00000028:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x899722D3;
			Var0.f_6 = 6.5f;
			break;
		
		case 0x00000029:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x2E413ABC;
			break;
		
		case 0x0000002A:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x29A1143B;
			break;
		
		case 0x0000002B:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x1FE49E03;
			break;
		
		case 0x0000002C:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x1C4AF98F;
			break;
		
		case 0x0000002D:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x8A139784;
			break;
		
		case 0x0000002E:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x9AA652E9;
			break;
		
		case 0x0000002F:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x249850A4;
			break;
		
		case 0x00000030:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xEFC0E6F6;
			break;
		
		case 0x00000031:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xC1F88B66;
			break;
		
		case 0x00000032:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x479926FE;
			break;
		
		case 0x00000033:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x677EC742;
			break;
		
		case 0x00000034:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 0x4265A13E;
			Var0.f_6 = 12f;
			break;
		
		case 0x00000035:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xAED75F6A;
			break;
	}
	switch (iParam0)
	{
		case 0x00000036:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = 0x90799222;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000037:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 0x459F7C6B;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000038:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 0x47E780FF;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000039:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = 0xC21E9E89;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003A:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 0x478DA961;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003B:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 0x52E90A75;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003C:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = 0xE4A12DDF;
			Var0.f_6 = 25f;
			break;
		
		case 0x000000E1:
			Var0.f_3 = 0xE684E276;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = 0xEEC9CEC1;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003D:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = 0xF0F6743C;
			break;
		
		case 0x0000003E:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = 0xCEC320E2;
			break;
		
		case 0x0000003F:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 0x2D865E67;
			break;
		
		case 0x00000040:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = 0xCBDAD417;
			break;
		
		case 0x00000041:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = 0xA7BC7A3B;
			break;
		
		case 0x00000042:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 0x38968F6D;
			break;
		
		case 0x00000043:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 0x0CA5CE57;
			break;
		
		case 0x00000044:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = 0xF8762600;
			break;
		
		case 0x00000045:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 0x693E01A8;
			break;
		
		case 0x00000046:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 0x2F397905;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000047:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 0x2192DDB8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000048:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = 0xD4AAF76D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000049:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 0x0A9F8B6B;
			break;
		
		case 0x0000004A:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 0x6E67D2FA;
			break;
		
		case 0x0000004B:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = 0xDE5262E2;
			break;
		
		case 0x0000004C:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 0x621E986A;
			break;
		
		case 0x0000004D:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 0x0C2FEC8E;
			break;
		
		case 0x0000004E:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 0x7A03D0CA;
			break;
		
		case 0x0000004F:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 0x548188CD;
			break;
		
		case 0x00000050:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = 0xF9A7537E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000051:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 0x6DB3F686;
			break;
		
		case 0x00000052:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 0x526C3FF3;
			break;
		
		case 0x00000053:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 0x0DDC38EF;
			break;
		
		case 0x00000054:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 0x4B88A611;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x00000055:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = 0x8EBCAB6D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x00000056:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 0x7BDA4229;
			break;
		
		case 0x00000057:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = 0x82B4D16A;
			break;
		
		case 0x00000058:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = 0x8E67E744;
			break;
		
		case 0x00000059:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = 0x94E375C7;
			break;
		
		case 0x0000005A:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = 0xFC4A5DE1;
			break;
		
		case 0x0000005B:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = 0x990D333D;
			break;
		
		case 0x0000005C:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = 0xDE752237;
			break;
		
		case 0x0000005D:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 0x75CDECBF;
			break;
		
		case 0x0000005E:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 0x4FEEAB87;
			break;
		
		case 0x0000005F:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = 0x9EC1C92C;
			break;
		
		case 0x00000060:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = 0x956610D7;
			break;
		
		case 0x00000061:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = 0x92D8C222;
			break;
		
		case 0x00000062:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 0x39739866;
			break;
		
		case 0x00000063:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 0x69AF302C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000064:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = 0xB099BE68;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000065:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = 0x9402ADFE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000066:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 0x5FDFC5B9;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000067:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = 0xA936772C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000068:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 0x3842153D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000069:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = 0xFAB0F874;
			break;
		
		case 0x0000006A:
			Var0.f_3 = 0x1C8F29BC;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = 0xC8D61D80;
			break;
		
		case 0x0000006B:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 0x7733A113;
			break;
		
		case 0x0000006C:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 0x7733A113;
			break;
		
		case 0x0000006D:
			Var0.f_3 = 0xB6A8EEEE;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 0x5BB47EBE;
			break;
		
		case 0x0000006E:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = 0xC6A92236;
			break;
		
		case 0x0000006F:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = 0x965A35F0;
			break;
		
		case 0x00000070:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = 0xFD3C6106;
			break;
		
		case 0x00000071:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = 0xEAA4BBD7;
			break;
		
		case 0x00000072:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = 0xB6369857;
			break;
		
		case 0x00000073:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 0x58A7877F;
			break;
		
		case 0x00000074:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = 0xF42192E5;
			break;
		
		case 0x00000075:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = 0xCA87C509;
			break;
		
		case 0x00000076:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = 0xCC794C91;
			break;
		
		case 0x00000077:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = 0xF3937748;
			break;
		
		case 0x00000078:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = 0xC45498DB;
			break;
		
		case 0x00000079:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 0x2D1D4AFB;
			break;
		
		case 0x0000007A:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 0x1C6E29AD;
			break;
		
		case 0x0000007B:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 0x7C136B13;
			break;
		
		case 0x0000007C:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 0x7C136B13;
			break;
		
		case 0x0000007D:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 0x0A21772D;
			break;
		
		case 0x0000007E:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 0x128D0804;
			break;
		
		case 0x00000080:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = 0xA2D4904F;
			break;
		
		case 0x00000081:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 0x2D3FA523;
			break;
		
		case 0x00000082:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = 0xFAF82BB5;
			break;
		
		case 0x00000083:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = 0xE477FEB5;
			break;
		
		case 0x0000007F:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 0x4B0BD273;
			break;
		
		case 0x00000084:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = 0xCB4E72F0;
			break;
		
		case 0x00000085:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 0x0E87D246;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000086:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 0x2A908A2B;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000087:
			Var0.f_3 = 0xB965B659;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 0x636D4AE0;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x00000088:
			Var0.f_3 = 0xB965B659;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 0x5264F117;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x00000089:
			Var0.f_3 = 0x4951D513;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = 0xC65FF0DC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x0000008A:
			Var0.f_3 = 0x4951D513;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = 0x84B160CC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x0000008B:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = 0x99AFC840;
			break;
		
		case 0x0000008C:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 0x7FF114C7;
			break;
		
		case 0x0000008D:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 0x6FC17308;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000008E:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = 0x8AE0294D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000091:
			Var0.f_3 = 0x9817FF83;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 0x74523DE8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000092:
			Var0.f_3 = 0x9817FF83;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = 0xE649A1DD;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000008F:
			Var0.f_3 = 0x0694BE16;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = 0xEE7A4B56;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000090:
			Var0.f_3 = 0x0694BE16;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = 0xD13290C7;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000094:
			Var0.f_3 = 0xF2C06AFF;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = 0xEA2D16DE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000093:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 0x1A465DD3;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000095:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = 0xDCEC4675;
			break;
		
		case 0x00000096:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 0x6C36650B;
			break;
		
		case 0x00000097:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 0x5029B9A4;
			break;
		
		case 0x00000098:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = 0xECDF96A9;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000099:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 0x5A1B7123;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009A:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = 0xA5896609;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009B:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = 0xBED718A0;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009C:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 0x715EF4EC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009D:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = 0xE57D5D27;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009E:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 0x18156DFA;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009F:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = 0xAB8314D3;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A0:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = 0xADFA9E01;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A1:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 0x1B447897;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A2:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 0x3FE1BF2F;
			break;
		
		case 0x000000A3:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = 0x81B242D3;
			break;
		
		case 0x000000A5:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = 0xA7477017;
			break;
		
		case 0x000000A6:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = 0xE187E49B;
			break;
		
		case 0x000000A7:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = 0xF12F21CD;
			break;
		
		case 0x000000A8:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 0x3AF9B555;
			break;
		
		case 0x000000A9:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 0x78891D35;
			break;
		
		case 0x000000AA:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 0x26BB7997;
			break;
		
		case 0x000000AB:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 0x2008EB12;
			break;
		
		case 0x000000AC:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 0x42D7B0B3;
			break;
		
		case 0x000000AD:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = 0xAA5350AA;
			break;
		
		case 0x000000AE:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = 0xC7980B3B;
			break;
		
		case 0x000000AF:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 0x70D7184A;
			break;
		
		case 0x000000B0:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 0x19FA6A8E;
			break;
		
		case 0x000000B1:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 0x3889169A;
			break;
		
		case 0x000000B2:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = 0x94E84F57;
			break;
		
		case 0x000000B3:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = 0xBB245373;
			break;
		
		case 0x000000B4:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 0x2EA3BAA4;
			break;
		
		case 0x000000B5:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = 0xB8CDD26F;
			break;
		
		case 0x000000B6:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = 0x810F62F3;
			break;
		
		case 0x000000B7:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 0x3FE1BF2F;
			break;
		
		case 0x000000B8:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = 0x81B242D3;
			break;
		
		case 0x000000A4:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 0x58AC90B5;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x000000B9:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 0x5B2F1453;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x000000BA:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 0x35E72BCB;
			break;
		
		case 0x000000BB:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = 0xD096E0F4;
			break;
		
		case 0x000000BC:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = 0xA672520A;
			break;
		
		case 0x000000BD:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = 0x89231774;
			break;
		
		case 0x000000BE:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = 0xDAF08A77;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000BF:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 0x3CB64E01;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C0:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 0x19261549;
			break;
		
		case 0x000000C1:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = 0xB0A21F8A;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
	}
	switch (iParam0)
	{
		case 0x000000C4:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = 0xEE8704E3;
			break;
		
		case 0x000000C5:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 0x1E346455;
			break;
		
		case 0x000000C2:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 0x592B3B2A;
			break;
		
		case 0x000000C3:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = 0x90F3AAD6;
			break;
		
		case 0x000000C6:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = 0x87A9D9D8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C7:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = 0xFA66AD40;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C8:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 0x27CC080E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C9:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 0x6FDCB756;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CA:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = 0x82105BAD;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CD:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 0x7A01AE56;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CE:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 0x48084A64;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CF:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 0x76668DA5;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D0:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = 0xD4EAF676;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D1:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 0x0C2D650A;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D2:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = 0xECEB0B54;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D3:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 0x03E33904;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D4:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = 0xC9297F46;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D5:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = 0xFC8465FF;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D6:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = 0x8859D53B;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D7:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 0x18F5F685;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D8:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 0x64147F59;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D9:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 0x1891A5FC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DA:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = 0xC130F73C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DB:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = 0xFCD07A05;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DC:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 0x4F829F6C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DD:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = 0xFD826383;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DE:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 0x6850B91E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DF:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 0x630892AE;
			break;
		
		case 0x000000CB:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = 0x81DEA14E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CC:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = 0xFB9594BE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000E0:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = 0x9C748513;
			break;
	}
	return Var0;
}

int func_31()
{
	if ((func_33() == 0xFFFFFFFF || func_33() == 0x000003E7) && !func_32() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_32()
{
	return Global_7831;
}

int func_33()
{
	return Global_7830;
}

int func_34(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_49(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_35(sParam2, iParam3, 0x00000000);
}

int func_35(char* sParam0, int iParam1, bool bParam2)
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
					func_48();
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
		if (func_47(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_46();
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
				func_45();
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
				if (func_44())
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
			if (func_43())
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
			func_42();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_41();
		func_36();
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
		func_48();
	}
	return 0x00000000;
}

void func_36()
{
	if (!func_37())
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

int func_37()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_40())
	{
		return 0x00000000;
	}
	if (func_38(unk_0xD803B885F5E47A62()))
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

bool func_38(int iParam0)
{
	return func_39(iParam0, 0x00000014);
}

bool func_39(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_40()
{
	return 0xFFFFFFFF;
}

void func_41()
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

void func_42()
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

int func_43()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_44()
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

void func_45()
{
	if (func_11(0x0000000E))
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
		Global_4C1E = func_70();
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

void func_46()
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

bool func_47(int iParam0, int iParam1)
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

void func_48()
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

void func_49(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_50()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_51(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_52(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[20];
	
	iVar0 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar2, 0xFFFFFFFF);
	if (iVar0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar1 = 0x00000000;
	while (iVar1 < iVar0)
	{
		if (func_75(uVar2[iVar1]))
		{
			if (unk_0x61C907EA8258B04D(uVar2[iVar1], iLocal_245))
			{
				if (func_53(uVar2[iVar1], vParam0, 0x00000001) < 5f)
				{
					return 0x00000001;
				}
			}
		}
		iVar1++;
	}
	return 0x00000000;
}

float func_53(int iParam0, vector3 vParam1, bool bParam2)
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

int func_54(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_55(iParam0);
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

void func_55(int iParam0)
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

float func_56(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

int func_57(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	struct<2> Var1;
	struct<2> Var2;
	
	if (unk_0x3D1053F9EB43B7AD(iParam0, vParam1, vParam2, fParam3, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0xEC560E589DF8370E(iParam0))
	{
		return 0x00000000;
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var1, &Var2);
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var1, Var2.f_1, 0f) };
	if (unk_0x0399732A9EBC368E(vVar0, vParam1, vParam2, fParam3, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, Var2.f_1, 0f) };
	if (unk_0x0399732A9EBC368E(vVar0, vParam1, vParam2, fParam3, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var2, Var2.f_1, 0f) };
	if (unk_0x0399732A9EBC368E(vVar0, vParam1, vParam2, fParam3, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var1, Var1.f_1, 0f) };
	if (unk_0x0399732A9EBC368E(vVar0, vParam1, vParam2, fParam3, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, Var1.f_1, 0f) };
	if (unk_0x0399732A9EBC368E(vVar0, vParam1, vParam2, fParam3, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var2, Var1.f_1, 0f) };
	if (unk_0x0399732A9EBC368E(vVar0, vParam1, vParam2, fParam3, 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_58(int iParam0)
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

void func_59(int iParam0)
{
	func_58(iParam0);
	func_60(&(iParam0->f_1));
}

void func_60(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		if (func_62(*iParam0))
		{
			if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
			{
				if (func_61(unk_0x16F2683693E537C9()))
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
			if (func_61(unk_0x16F2683693E537C9()))
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

int func_61(int iParam0)
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

int func_62(int iParam0)
{
	if (func_61(iParam0))
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

void func_63(var uParam0)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	
	switch (*uParam0)
	{
		case 0x00000000:
			func_59(&iLocal_237);
			func_66(0x00000041, 0x00000000);
			func_58(&iLocal_242);
			*uParam0++;
			break;
		
		case 0x00000001:
			if (func_57(unk_0x16F2683693E537C9(), -1055.046f, -469.3347f, 35.43333f, -1057.44f, -474.9772f, 39.8187f, 12.5f))
			{
				fLocal_235 = 0.25f;
				*uParam0++;
				return;
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				fVar1 = unk_0x3DCA5D50DD292443(func_56(vLocal_244, -0.37f, -0.927f, -0.053f));
				if (unk_0x755FF954DAE327E1(fVar1) < 45f)
				{
					if (func_57(iVar2, -1049.318f, -473.7472f, 34.94196f, -1059.483f, -468.7608f, 39.94483f, 4.5f))
					{
						fLocal_235 = 1f;
						*uParam0++;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				func_54(iVar2, fLocal_235, iLocal_236, 0x3F000000, 0x00000000, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0x93D47DFD0AE94949(unk_0x16F2683693E537C9(), 0xFFFFFFFF);
			}
			if (func_52(-1051.1f, -476.1f, 37f))
			{
				func_51(&uLocal_68, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
				if (func_50())
				{
					bVar0 = func_34(&uLocal_68, "AMSOLAU", "AMSOL_HERE", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					bVar0 = func_34(&uLocal_68, "AMSOLAU", "AMSOL_WORK", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				if (bVar0)
				{
					*uParam0++;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		
		case 0x00000003:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (func_54(iVar2, fLocal_235, iLocal_236, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
				{
					*uParam0++;
				}
				return;
			}
			*uParam0++;
			break;
		
		case 0x00000004:
			if (!unk_0x2A325BF7BC6DD316(unk_0x16F2683693E537C9()) && !unk_0x25037C66EB32B076())
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				*uParam0++;
			}
			break;
		
		case 0x00000005:
			func_5(0x00000000);
			*uParam0++;
			break;
		
		case 0x00000006:
			func_4(&iLocal_237, -1051.956f, -472.055f, 35.5672f, 161.4418f);
			*uParam0++;
			break;
		
		case 0x00000007:
			if (!func_57(unk_0x16F2683693E537C9(), -1055.514f, -474.6371f, 35.6278f, -1051.23f, -464.4126f, 39.91479f, 9.5f))
			{
				func_59(&iLocal_237);
				*uParam0++;
			}
			break;
		
		case 0x00000008:
			if (iLocal_241 == 0x00000000)
			{
				func_77();
			}
			break;
	}
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1C0640BA9A7327B3() + 7500;
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	if (unk_0xB87F6CF6E5628C67(iParam0))
	{
		return 0x00000001;
	}
	if (iParam1 == 0x00000000)
	{
		return 0x00000001;
	}
	while (!unk_0xB87F6CF6E5628C67(iParam0))
	{
		SYSTEM::WAIT(0x00000000);
		if (unk_0x1C0640BA9A7327B3() > iVar0 && !unk_0xB87F6CF6E5628C67(iParam0))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_65(int iParam0)
{
	func_66(0x00000041, 0x00000000);
	unk_0xB5376EA942202450(-1039.504f, -477.7876f, 35.32967f, -1062.444f, -469.5685f, 40.62086f, 13f, 0x00000000, 0x00000000, 0x00000001);
	func_6(0x00000087, iParam0);
	func_6(0x00000088, iParam0);
	unk_0xB5376EA942202450(-1039.504f, -477.7876f, 35.32967f, -1062.444f, -469.5685f, 40.62086f, 13f, 0x00000000, 0x00000000, 0x00000001);
	func_6(0x00000089, iParam0);
	func_6(0x0000008A, iParam0);
}

void func_66(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1B416.f_2378.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_1B416.f_2378.f_63.f_3A[iParam0] = iParam1;
}

void func_67()
{
	func_75(unk_0x16F2683693E537C9());
	if (unk_0x8A22C4C08282BF26(joaat("solomon1")) > 0x00000000)
	{
		func_1(0x0000001E);
		func_66(0x00000041, 0x00000001);
		func_77();
	}
	if (func_68(0x0000003B) == 0x00000001)
	{
		func_66(0x00000041, 0x00000001);
		func_1(0x0000001E);
		func_77();
	}
	if (unk_0x2C1AA3A291786CDC())
	{
		func_77();
	}
	if (func_70() != 0x00000000)
	{
		func_77();
	}
	if (!func_69(unk_0x16F2683693E537C9(), vLocal_64, (fLocal_65 + 30f)))
	{
		func_77();
	}
	SYSTEM::WAIT(0x00000000);
	func_75(unk_0x16F2683693E537C9());
}

int func_68(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

bool func_69(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1) <= (fParam2 * fParam2);
}

int func_70()
{
	func_71();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_71()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_73(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_72(unk_0x16F2683693E537C9());
			if (func_13(iVar0) && (!func_11(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_13(Global_1B416.f_936.f_21B.f_10E1))
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

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_73(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_73(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_74(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_74(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_75(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0x0000001F)
	{
		iVar0 = 0x00000009;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 0x0000000A;
		iVar1 = (iParam0 - 0x00000020);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		return 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
	return 0x00000001;
}

void func_77()
{
	func_59(&iLocal_237);
	func_59(&iLocal_239);
	func_78(&iLocal_242, 0x00000000, 0x00000000, 0x00000001);
	func_78(&iLocal_243, 0x00000000, 0x00000000, 0x00000001);
	func_66(0x00000041, 0x00000001);
	unk_0x71199B01895C6202(joaat("s_m_m_security_01"));
	unk_0x71199B01895C6202(joaat("akuma"));
	unk_0x10FAF14A60A0DBE1();
}

void func_78(int iParam0, bool bParam1, int iParam2, int iParam3)
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

