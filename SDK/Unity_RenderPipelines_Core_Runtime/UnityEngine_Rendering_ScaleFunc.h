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
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2Int; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct ScaleFunc : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		UnityEngine_CoreModule::UnityEngine::Vector2Int Invoke(UnityEngine_CoreModule::UnityEngine::Vector2Int size);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_CoreModule::UnityEngine::Vector2Int size, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		UnityEngine_CoreModule::UnityEngine::Vector2Int EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

