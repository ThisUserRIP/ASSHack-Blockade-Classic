#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "vp_EventHandler.h"
namespace Assembly_CSharp { struct vp_EventHandler; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_EventHandler_ScriptMethods : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::MethodInfo>* Events;
		void _ctor(mscorlib::System::Type* type);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::MethodInfo>* GetMethods(mscorlib::System::Type* type);
	};
}

