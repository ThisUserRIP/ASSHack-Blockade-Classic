#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "UnityEngine_Networking_NetworkTransform.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkTransform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkTransform_ClientMoveCallback2D : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		bool Invoke(UnityEngine_CoreModule::UnityEngine::Vector2& position, UnityEngine_CoreModule::UnityEngine::Vector2& velocity, float& rotation);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_CoreModule::UnityEngine::Vector2& position, UnityEngine_CoreModule::UnityEngine::Vector2& velocity, float& rotation, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		bool EndInvoke(UnityEngine_CoreModule::UnityEngine::Vector2& position, UnityEngine_CoreModule::UnityEngine::Vector2& velocity, float& rotation, mscorlib::System::IAsyncResult* result);
	};
}

