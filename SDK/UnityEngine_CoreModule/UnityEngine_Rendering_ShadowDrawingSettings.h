#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_CullingResults.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_ShadowSplitData.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShadowSplitData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct ShadowDrawingSettings
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults m_CullingResults;
		int32_t m_LightIndex;
		int32_t m_UseRenderingLayerMaskTest;
		UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData m_SplitData;
		UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData get_splitData();
		void set_splitData(UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResults, int32_t lightIndex);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::ShadowDrawingSettings other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

