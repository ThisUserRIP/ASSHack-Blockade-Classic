#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_FrustumPlanes.h"
namespace UnityEngine_CoreModule::UnityEngine { struct FrustumPlanes; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "UnityEngine_Rendering_Universal_PreTile.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PreTile; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "UnityEngine_Rendering_Universal_Internal_DeferredTiler_PrePunctualLight.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DeferredTiler_PrePunctualLight; };
#include "..\Unity_Mathematics\Unity_Mathematics_float3.h"
namespace Unity_Mathematics::Unity::Mathematics { struct float3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Rendering_Universal_Internal_DeferredTiler_ClipResult.h"
#include "..\Unity_Mathematics\Unity_Mathematics_float4.h"
namespace Unity_Mathematics::Unity::Mathematics { struct float4; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct DeferredTiler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_TilePixelWidth;
		int32_t m_TilePixelHeight;
		int32_t m_TileXCount;
		int32_t m_TileYCount;
		int32_t m_TileHeaderSize;
		int32_t m_AvgLightPerTile;
		int32_t m_TilerLevel;
		UnityEngine_CoreModule::UnityEngine::FrustumPlanes m_FrustumPlanes;
		bool m_IsOrthographic;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> m_Counters;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16> m_TileData;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt32> m_TileHeaders;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PreTile> m_PreTiles;
		void _ctor(int32_t tilePixelWidth, int32_t tilePixelHeight, int32_t avgLightPerTile, int32_t tilerLevel);
		int32_t get_TilerLevel();
		int32_t get_TileXCount();
		int32_t get_TileYCount();
		int32_t get_TilePixelWidth();
		int32_t get_TilePixelHeight();
		int32_t get_TileHeaderSize();
		int32_t get_MaxLightPerTile();
		int32_t get_TileDataCapacity();
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16> get_Tiles();
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt32> get_TileHeaders();
		void GetTileOffsetAndCount(int32_t i, int32_t j, int32_t& offset, int32_t& count);
		int32_t GetTileHeaderOffset(int32_t i, int32_t j);
		void Setup(int32_t tileDataCapacity);
		void OnCameraCleanup();
		void PrecomputeTiles(UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj, bool isOrthographic, int32_t renderWidth, int32_t renderHeight);
		void CullFinalLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_PrePunctualLight>& punctualLights, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& lightIndices, int32_t lightStartIndex, int32_t lightCount, int32_t istart, int32_t iend, int32_t jstart, int32_t jend);
		void CullIntermediateLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_PrePunctualLight>& punctualLights, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& lightIndices, int32_t lightStartIndex, int32_t lightCount, int32_t istart, int32_t iend, int32_t jstart, int32_t jend);
		int32_t AddTileData(uint16_t* lightData, int32_t& size);
		static bool IntersectionLineSphere(Unity_Mathematics::Unity::Mathematics::float3 centre, float radius, Unity_Mathematics::Unity::Mathematics::float3 raySource, Unity_Mathematics::Unity::Mathematics::float3 rayDirection, float& t0, float& t1);
		static bool Clip(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PreTile& tile, Unity_Mathematics::Unity::Mathematics::float3 posVS, float radius);
		static Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_ClipResult ClipPartial(Unity_Mathematics::Unity::Mathematics::float4 plane, Unity_Mathematics::Unity::Mathematics::float4 sidePlaneA, Unity_Mathematics::Unity::Mathematics::float4 sidePlaneB, Unity_Mathematics::Unity::Mathematics::float3 posVS, float radius, float radiusSq, int32_t& insideCount);
		static Unity_Mathematics::Unity::Mathematics::float4 MakePlane(Unity_Mathematics::Unity::Mathematics::float3 pb, Unity_Mathematics::Unity::Mathematics::float3 pc);
		static Unity_Mathematics::Unity::Mathematics::float4 MakePlane(Unity_Mathematics::Unity::Mathematics::float3 pa, Unity_Mathematics::Unity::Mathematics::float3 pb, Unity_Mathematics::Unity::Mathematics::float3 pc);
		static float DistanceToPlane(Unity_Mathematics::Unity::Mathematics::float4 plane, Unity_Mathematics::Unity::Mathematics::float3 p);
		static float SignedSq(float f);
		static float min2(float a, float b);
		static float max2(float a, float b);
		static float max3(float a, float b, float c);
		static uint32_t _f32tof16(float x);
		static int32_t Align(int32_t s, int32_t alignment);
	};
}

