#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facebook_Unity::Facebook::Unity { struct FBSDKEventBinding; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FBSDKEventBindingManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKEventBinding>* _eventBindings_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKEventBinding>* get_eventBindings();
		void set_eventBindings(mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKEventBinding>* value);
		void _ctor(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* listDict);
	};
}

