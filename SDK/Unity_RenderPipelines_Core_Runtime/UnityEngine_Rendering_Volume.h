#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct VolumeProfile; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct Volume : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isGlobal;
		float priority;
		float blendDistance;
		float weight;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeProfile* sharedProfile;
		int32_t m_PreviousLayer;
		float m_PreviousPriority;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeProfile* m_InternalProfile;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeProfile* get_profile();
		void set_profile(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeProfile* value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeProfile* get_profileRef();
		bool HasInstantiatedProfile();
		void OnEnable();
		void OnDisable();
		void Update();
		void UpdateLayer();
		void _ctor();
	};
}

