#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev
{
	struct StageRuntimeInterface : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Func_2<mscorlib::System::Boolean, UnityEngine_CoreModule::UnityEngine::GameObject>* m_AddGameObject;
		mscorlib::System::Func_1<UnityEngine_CoreModule::UnityEngine::Camera>* m_GetCamera;
		mscorlib::System::Func_1<UnityEngine_CoreModule::UnityEngine::Light>* m_GetSunLight;
		mscorlib::System::Object* SRPData;
		void _ctor(mscorlib::System::Func_2<mscorlib::System::Boolean, UnityEngine_CoreModule::UnityEngine::GameObject>* AddGameObject, mscorlib::System::Func_1<UnityEngine_CoreModule::UnityEngine::Camera>* GetCamera, mscorlib::System::Func_1<UnityEngine_CoreModule::UnityEngine::Light>* GetSunLight);
		UnityEngine_CoreModule::UnityEngine::GameObject* AddGameObject(bool persistent);
		UnityEngine_CoreModule::UnityEngine::Camera* get_camera();
		UnityEngine_CoreModule::UnityEngine::Light* get_sunLight();
	};
}

