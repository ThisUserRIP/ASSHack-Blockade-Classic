#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_EnumField; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct CameraSwitcher : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* m_Cameras;
		int32_t m_CurrentCameraIndex;
		UnityEngine_CoreModule::UnityEngine::Camera* m_OriginalCamera;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_OriginalCameraPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion m_OriginalCameraRotation;
		UnityEngine_CoreModule::UnityEngine::Camera* m_CurrentCamera;
		IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* m_CameraNames;
		IL2CPP::Array<int32_t>* m_CameraIndices;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_EnumField* m_DebugEntry;
		int32_t m_DebugEntryEnumIndex;
		void OnEnable();
		void OnDisable();
		int32_t GetCameraCount();
		UnityEngine_CoreModule::UnityEngine::Camera* GetNextCamera();
		void SetCameraIndex(int32_t index);
		void _ctor();
		int32_t _OnEnable_b__10_0();
		void _OnEnable_b__10_1(int32_t value);
		int32_t _OnEnable_b__10_2();
		void _OnEnable_b__10_3(int32_t value);
	};
}

