#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct BuiltinShaderDefine : int32_t
	{
		UNITY_NO_DXT5nm = static_cast<int32_t>(0x0),
		UNITY_NO_RGBM = static_cast<int32_t>(0x1),
		UNITY_USE_NATIVE_HDR = static_cast<int32_t>(0x2),
		UNITY_ENABLE_REFLECTION_BUFFERS = static_cast<int32_t>(0x3),
		UNITY_FRAMEBUFFER_FETCH_AVAILABLE = static_cast<int32_t>(0x4),
		UNITY_ENABLE_NATIVE_SHADOW_LOOKUPS = static_cast<int32_t>(0x5),
		UNITY_METAL_SHADOWS_USE_POINT_FILTERING = static_cast<int32_t>(0x6),
		UNITY_NO_CUBEMAP_ARRAY = static_cast<int32_t>(0x7),
		UNITY_NO_SCREENSPACE_SHADOWS = static_cast<int32_t>(0x8),
		UNITY_USE_DITHER_MASK_FOR_ALPHABLENDED_SHADOWS = static_cast<int32_t>(0x9),
		UNITY_PBS_USE_BRDF1 = static_cast<int32_t>(0xA),
		UNITY_PBS_USE_BRDF2 = static_cast<int32_t>(0xB),
		UNITY_PBS_USE_BRDF3 = static_cast<int32_t>(0xC),
		UNITY_NO_FULL_STANDARD_SHADER = static_cast<int32_t>(0xD),
		UNITY_SPECCUBE_BOX_PROJECTION = static_cast<int32_t>(0xE),
		UNITY_SPECCUBE_BLENDING = static_cast<int32_t>(0xF),
		UNITY_ENABLE_DETAIL_NORMALMAP = static_cast<int32_t>(0x10),
		SHADER_API_MOBILE = static_cast<int32_t>(0x11),
		SHADER_API_DESKTOP = static_cast<int32_t>(0x12),
		UNITY_HARDWARE_TIER1 = static_cast<int32_t>(0x13),
		UNITY_HARDWARE_TIER2 = static_cast<int32_t>(0x14),
		UNITY_HARDWARE_TIER3 = static_cast<int32_t>(0x15),
		UNITY_COLORSPACE_GAMMA = static_cast<int32_t>(0x16),
		UNITY_LIGHT_PROBE_PROXY_VOLUME = static_cast<int32_t>(0x17),
		UNITY_HALF_PRECISION_FRAGMENT_SHADER_REGISTERS = static_cast<int32_t>(0x18),
		UNITY_LIGHTMAP_DLDR_ENCODING = static_cast<int32_t>(0x19),
		UNITY_LIGHTMAP_RGBM_ENCODING = static_cast<int32_t>(0x1A),
		UNITY_LIGHTMAP_FULL_HDR = static_cast<int32_t>(0x1B),
		UNITY_VIRTUAL_TEXTURING = static_cast<int32_t>(0x1C),
		UNITY_PRETRANSFORM_TO_DISPLAY_ORIENTATION = static_cast<int32_t>(0x1D),
		UNITY_ASTC_NORMALMAP_ENCODING = static_cast<int32_t>(0x1E),
		SHADER_API_GLES30 = static_cast<int32_t>(0x1F),
		UNITY_UNIFIED_SHADER_PRECISION_MODEL = static_cast<int32_t>(0x20),
	};
}

