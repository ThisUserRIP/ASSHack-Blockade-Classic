#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Facebook_Unity::Facebook::Unity { struct FBSDKCodelessPathComponent; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FBSDKEventBinding : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _eventName_k__BackingField;
		mscorlib::System::String* _eventType_k__BackingField;
		mscorlib::System::String* _appVersion_k__BackingField;
		mscorlib::System::String* _pathType_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* _path_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* _parameters_k__BackingField;
		void _ctor(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* dict);
		mscorlib::System::String* get_eventName();
		void set_eventName(mscorlib::System::String* value);
		mscorlib::System::String* get_eventType();
		void set_eventType(mscorlib::System::String* value);
		mscorlib::System::String* get_appVersion();
		void set_appVersion(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* get_path();
		void set_path(mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* value);
	};
}

