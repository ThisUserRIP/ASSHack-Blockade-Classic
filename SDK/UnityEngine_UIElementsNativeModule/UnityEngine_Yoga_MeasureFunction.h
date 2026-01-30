#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngine_Yoga_YogaSize.h"
namespace UnityEngine_UIElementsNativeModule::UnityEngine::Yoga { struct YogaSize; };
namespace UnityEngine_UIElementsNativeModule::UnityEngine::Yoga { struct YogaNode; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Yoga_YogaMeasureMode.h"
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_UIElementsNativeModule::UnityEngine::Yoga
{
	struct MeasureFunction : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaSize Invoke(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode widthMode, float height, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode heightMode);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode widthMode, float height, UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaMeasureMode heightMode, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaSize EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

