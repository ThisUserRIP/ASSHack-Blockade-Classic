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
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Networking_NetworkHash128.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkHash128; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct SpawnDelegate : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		UnityEngine_CoreModule::UnityEngine::GameObject* Invoke(UnityEngine_CoreModule::UnityEngine::Vector3 position, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_CoreModule::UnityEngine::Vector3 position, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		UnityEngine_CoreModule::UnityEngine::GameObject* EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

