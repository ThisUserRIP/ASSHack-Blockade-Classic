#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_SendMouseEvents.h"
namespace UnityEngine_InputLegacyModule::UnityEngine { struct SendMouseEvents; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_InputLegacyModule::UnityEngine
{
	struct SendMouseEvents_HitInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* target;
		UnityEngine_CoreModule::UnityEngine::Camera* camera;
		void SendMessage(mscorlib::System::String* name);
		static bool op_Implicit(UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo exists);
		static bool Compare(UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo lhs, UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo rhs);
	};
}

