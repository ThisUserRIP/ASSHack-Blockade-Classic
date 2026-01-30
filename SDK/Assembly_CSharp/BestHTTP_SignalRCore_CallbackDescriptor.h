#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	struct CallbackDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Type*>* ParamTypes;
		mscorlib::System::Action_1<IL2CPP::Array<mscorlib::System::Object*>>* Callback;
		void _ctor(IL2CPP::Array<mscorlib::System::Type*>* paramTypes, mscorlib::System::Action_1<IL2CPP::Array<mscorlib::System::Object*>>* callback);
	};
}

