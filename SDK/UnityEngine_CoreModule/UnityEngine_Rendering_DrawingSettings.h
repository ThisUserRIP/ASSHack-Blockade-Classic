#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_SortingSettings.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct SortingSettings; };
#include "UnityEngine_Rendering_DrawingSettings__shaderPassNames_e__FixedBuffer.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct DrawingSettings__shaderPassNames_e__FixedBuffer; };
#include "UnityEngine_Rendering_PerObjectData.h"
#include "UnityEngine_Rendering_DrawRendererFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct DrawingSettings
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::SortingSettings m_SortingSettings;
		UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings__shaderPassNames_e__FixedBuffer shaderPassNames;
		UnityEngine_CoreModule::UnityEngine::Rendering::PerObjectData m_PerObjectData;
		UnityEngine_CoreModule::UnityEngine::Rendering::DrawRendererFlags m_Flags;
		int32_t m_OverrideMaterialInstanceId;
		int32_t m_OverrideMaterialPassIndex;
		int32_t m_MainLightIndex;
		int32_t m_UseSrpBatcher;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId shaderPassName, UnityEngine_CoreModule::UnityEngine::Rendering::SortingSettings sortingSettings);
		UnityEngine_CoreModule::UnityEngine::Rendering::SortingSettings get_sortingSettings();
		void set_sortingSettings(UnityEngine_CoreModule::UnityEngine::Rendering::SortingSettings value);
		void set_perObjectData(UnityEngine_CoreModule::UnityEngine::Rendering::PerObjectData value);
		void set_enableDynamicBatching(bool value);
		void set_enableInstancing(bool value);
		void set_overrideMaterial(UnityEngine_CoreModule::UnityEngine::Material* value);
		void set_overrideMaterialPassIndex(int32_t value);
		void set_mainLightIndex(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId GetShaderPassName(int32_t index);
		void SetShaderPassName(int32_t index, UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId shaderPassName);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static void _cctor();
	};
}

