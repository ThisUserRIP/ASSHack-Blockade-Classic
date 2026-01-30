#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace UnityEngine_CoreModule::UnityEngine::Experimental::U2D
{
	struct SpriteIntermediateRendererInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t SpriteID;
		int32_t TextureID;
		int32_t MaterialID;
		UnityEngine_CoreModule::UnityEngine::Color Color;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 Transform;
		UnityEngine_CoreModule::UnityEngine::Bounds Bounds;
		int32_t Layer;
		int32_t SortingLayer;
		int32_t SortingOrder;
		uint64_t SceneCullingMask;
		intptr_t IndexData;
		intptr_t VertexData;
		int32_t IndexCount;
		int32_t VertexCount;
		int32_t ShaderChannelMask;
	};
}

