static const DWORD null_uav_ld_texture_code_dxbc[] =
{
    0x43425844, 0x85c096ab, 0x210d7572, 0xdb1951af, 0x4dadced7, 0x00000001, 0x00000194, 0x00000003,
    0x0000002c, 0x00000060, 0x00000094, 0x4e475349, 0x0000002c, 0x00000001, 0x00000008, 0x00000020,
    0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x0000030f, 0x505f5653, 0x7469736f, 0x006e6f69,
    0x4e47534f, 0x0000002c, 0x00000001, 0x00000008, 0x00000020, 0x00000000, 0x00000000, 0x00000003,
    0x00000000, 0x0000000f, 0x545f5653, 0x65677261, 0xabab0074, 0x58454853, 0x000000f8, 0x00000050,
    0x0000003e, 0x0100086a, 0x0400189c, 0x0011e000, 0x00000001, 0x00005555, 0x04002064, 0x00101032,
    0x00000000, 0x00000001, 0x03000065, 0x001020f2, 0x00000000, 0x02000068, 0x00000001, 0x8900003d,
    0x800000c2, 0x00155543, 0x00100032, 0x00000000, 0x00004001, 0x00000000, 0x0011ee46, 0x00000001,
    0x07000038, 0x001000f2, 0x00000000, 0x00100546, 0x00000000, 0x00101546, 0x00000000, 0x0a000038,
    0x001000f2, 0x00000000, 0x00100e46, 0x00000000, 0x00004002, 0x3acccccd, 0x3b088889, 0x3b088889,
    0x3b088889, 0x0500001c, 0x001000f2, 0x00000000, 0x00100e46, 0x00000000, 0x890000a3, 0x800000c2,
    0x00155543, 0x00100012, 0x00000000, 0x00100e46, 0x00000000, 0x0011ee46, 0x00000001, 0x05000036,
    0x001020f2, 0x00000000, 0x00100006, 0x00000000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE null_uav_ld_texture_dxbc = { null_uav_ld_texture_code_dxbc, sizeof(null_uav_ld_texture_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
