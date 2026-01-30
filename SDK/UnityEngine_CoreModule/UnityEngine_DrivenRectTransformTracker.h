#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "UnityEngine_DrivenTransformProperties.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct DrivenRectTransformTracker
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Add(UnityEngine_CoreModule::UnityEngine::Object* driver, UnityEngine_CoreModule::UnityEngine::RectTransform* rectTransform, UnityEngine_CoreModule::UnityEngine::DrivenTransformProperties drivenProperties);
		void Clear();
	};
}

