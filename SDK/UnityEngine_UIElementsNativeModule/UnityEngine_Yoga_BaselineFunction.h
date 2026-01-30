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
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_UIElementsNativeModule::UnityEngine::Yoga { struct YogaNode; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_UIElementsNativeModule::UnityEngine::Yoga
{
	struct BaselineFunction : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		float Invoke(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, float height);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_UIElementsNativeModule::UnityEngine::Yoga::YogaNode* node, float width, float height, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		float EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

