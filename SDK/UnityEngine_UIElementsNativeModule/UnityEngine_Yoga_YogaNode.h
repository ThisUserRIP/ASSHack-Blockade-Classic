#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_UIElementsNativeModule::UnityEngine::Yoga { struct MeasureFunction; };
namespace UnityEngine_UIElementsNativeModule::UnityEngine::Yoga { struct BaselineFunction; };
#include "UnityEngine_Yoga_YogaSize.h"
namespace UnityEngine_UIElementsNativeModule::UnityEngine::Yoga { struct YogaSize; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Yoga_YogaMeasureMode.h"

namespace UnityEngine_UIElementsNativeModule::UnityEngine::Yoga
{
	struct YogaNode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t _ygNode;
		UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::MeasureFunction* _measureFunction;
		UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::BaselineFunction* _baselineFunction;
		static UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaSize MeasureInternal(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode widthMode, float height, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode heightMode);
		static float BaselineInternal(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, float height);
	};
}

