#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKScope : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* NOTIFY;
			mscorlib::System::String* FRIENDS;
			mscorlib::System::String* PHOTOS;
			mscorlib::System::String* AUDIO;
			mscorlib::System::String* VIDEO;
			mscorlib::System::String* DOCS;
			mscorlib::System::String* NOTES;
			mscorlib::System::String* PAGES;
			mscorlib::System::String* STATUS;
			mscorlib::System::String* WALL;
			mscorlib::System::String* GROUPS;
			mscorlib::System::String* MESSAGES;
			mscorlib::System::String* NOTIFICATIONS;
			mscorlib::System::String* STATS;
			mscorlib::System::String* ADS;
			mscorlib::System::String* OFFLINE;
			mscorlib::System::String* NOHTTPS;
			mscorlib::System::String* DIRECT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* ParseVKPermissionsFromInteger(int32_t permissionsValue);
		void _ctor();
	};
}

