#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_CullMode.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct RasterState
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::CullMode m_CullingMode;
		int32_t m_OffsetUnits;
		float m_OffsetFactor;
		uint8_t m_DepthClip;
		uint8_t m_Conservative;
		uint8_t m_Padding1;
		uint8_t m_Padding2;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::CullMode cullingMode, int32_t offsetUnits, float offsetFactor, bool depthClip);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::RasterState other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static void _cctor();
	};
}

