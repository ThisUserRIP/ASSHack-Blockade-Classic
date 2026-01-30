#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SignalRCore_CallbackDescriptor.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct CallbackDescriptor; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	struct Subscription : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalRCore::CallbackDescriptor>* callbacks;
		void Add(IL2CPP::Array<mscorlib::System::Type*>* paramTypes, mscorlib::System::Action_1<IL2CPP::Array<mscorlib::System::Object*>>* callback);
		void Remove(mscorlib::System::Action_1<IL2CPP::Array<mscorlib::System::Object*>>* callback);
		void _ctor();
	};
}

