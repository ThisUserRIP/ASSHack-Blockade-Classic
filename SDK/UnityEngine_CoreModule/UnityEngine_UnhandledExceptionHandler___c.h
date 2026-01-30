#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_UnhandledExceptionHandler.h"
namespace UnityEngine_CoreModule::UnityEngine { struct UnhandledExceptionHandler; };
namespace mscorlib::System { struct UnhandledExceptionEventHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct UnhandledExceptionEventArgs; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct UnhandledExceptionHandler___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::UnhandledExceptionHandler___c* __9;
			mscorlib::System::UnhandledExceptionEventHandler* __9__0_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _RegisterUECatcher_b__0_0(mscorlib::System::Object* sender, mscorlib::System::UnhandledExceptionEventArgs* e);
	};
}

