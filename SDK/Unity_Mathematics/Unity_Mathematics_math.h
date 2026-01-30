#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Unity_Mathematics_float2.h"
namespace Unity_Mathematics::Unity::Mathematics { struct float2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "Unity_Mathematics_float3.h"
namespace Unity_Mathematics::Unity::Mathematics { struct float3; };
#include "Unity_Mathematics_float4.h"
namespace Unity_Mathematics::Unity::Mathematics { struct float4; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Unity_Mathematics_uint2.h"
namespace Unity_Mathematics::Unity::Mathematics { struct uint2; };
#include "Unity_Mathematics_uint3.h"
namespace Unity_Mathematics::Unity::Mathematics { struct uint3; };
#include "Unity_Mathematics_uint4.h"
namespace Unity_Mathematics::Unity::Mathematics { struct uint4; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_Mathematics::Unity::Mathematics
{
	struct math : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Unity_Mathematics::Unity::Mathematics::float2 float2(float x, float y);
		static uint32_t hash(Unity_Mathematics::Unity::Mathematics::float2 v);
		static uint32_t hash(Unity_Mathematics::Unity::Mathematics::float3 v);
		static uint32_t hash(Unity_Mathematics::Unity::Mathematics::float4 v);
		static int32_t asint(float x);
		static uint32_t asuint(float x);
		static Unity_Mathematics::Unity::Mathematics::uint2 asuint(Unity_Mathematics::Unity::Mathematics::float2 x);
		static Unity_Mathematics::Unity::Mathematics::uint3 asuint(Unity_Mathematics::Unity::Mathematics::float3 x);
		static Unity_Mathematics::Unity::Mathematics::uint4 asuint(Unity_Mathematics::Unity::Mathematics::float4 x);
		static float asfloat(int32_t x);
		static float asfloat(uint32_t x);
		static Unity_Mathematics::Unity::Mathematics::float2 asfloat(Unity_Mathematics::Unity::Mathematics::uint2 x);
		static int32_t min(int32_t x, int32_t y);
		static float min(float x, float y);
		static Unity_Mathematics::Unity::Mathematics::float3 min(Unity_Mathematics::Unity::Mathematics::float3 x, Unity_Mathematics::Unity::Mathematics::float3 y);
		static int32_t max(int32_t x, int32_t y);
		static float max(float x, float y);
		static Unity_Mathematics::Unity::Mathematics::float3 max(Unity_Mathematics::Unity::Mathematics::float3 x, Unity_Mathematics::Unity::Mathematics::float3 y);
		static Unity_Mathematics::Unity::Mathematics::float2 abs(Unity_Mathematics::Unity::Mathematics::float2 x);
		static float dot(Unity_Mathematics::Unity::Mathematics::float3 x, Unity_Mathematics::Unity::Mathematics::float3 y);
		static float cos(float x);
		static float sin(float x);
		static float sqrt(float x);
		static float rsqrt(float x);
		static Unity_Mathematics::Unity::Mathematics::float3 normalize(Unity_Mathematics::Unity::Mathematics::float3 x);
		static float length(Unity_Mathematics::Unity::Mathematics::float3 x);
		static Unity_Mathematics::Unity::Mathematics::float3 cross(Unity_Mathematics::Unity::Mathematics::float3 x, Unity_Mathematics::Unity::Mathematics::float3 y);
		static uint32_t select(uint32_t a, uint32_t b, bool c);
		static uint32_t csum(Unity_Mathematics::Unity::Mathematics::uint2 x);
		static uint32_t csum(Unity_Mathematics::Unity::Mathematics::uint3 x);
		static uint32_t csum(Unity_Mathematics::Unity::Mathematics::uint4 x);
		static Unity_Mathematics::Unity::Mathematics::uint2 uint2(uint32_t x, uint32_t y);
		static uint32_t hash(Unity_Mathematics::Unity::Mathematics::uint2 v);
		static Unity_Mathematics::Unity::Mathematics::uint3 uint3(uint32_t x, uint32_t y, uint32_t z);
		static uint32_t hash(Unity_Mathematics::Unity::Mathematics::uint3 v);
		static Unity_Mathematics::Unity::Mathematics::uint4 uint4(uint32_t x, uint32_t y, uint32_t z, uint32_t w);
		static uint32_t hash(Unity_Mathematics::Unity::Mathematics::uint4 v);
	};
}

