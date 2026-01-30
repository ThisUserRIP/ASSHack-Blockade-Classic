#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UIElementsNativeModule::UnityEngine::Yoga { struct YogaNode; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Yoga_YogaMeasureMode.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace UnityEngine_UIElementsNativeModule::UnityEngine::Yoga
{
	struct Native : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void YGNodeMeasureInvoke(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode widthMode, float height, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode heightMode, intptr_t returnValueAddress);
		static void YGNodeBaselineInvoke(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, float height, intptr_t returnValueAddress);
	};
}

